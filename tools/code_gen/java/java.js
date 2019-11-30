const fs = require('fs')
const TargetGen = require('../common/target_gen.js')

class TypescriptGenerator extends TargetGen {
  constructor() {
    super()
    this.classNamePrefix = '';
  }

  mapType(type, isNative) {
    let name = this.typeToName(type);

    if (name) {
      if (isNative && this.typeIsPointer(type)) {
        return 'long';
      }

      return name;
    } else if (this.typeIsLongInteger(type)) {
      return 'long';
    } else if (this.typeIsInteger(type)) {
      return 'int';
    } else if (this.typeIsFloat(type)) {
      return 'double';
    } else if (this.typeIsBool(type)) {
      return 'boolean';
    } else if (this.typeIsFunction(type)) {
      return 'int';//TODO
    } else if (this.typeIsString(type)) {
      return 'String';
    } else {
      console.log(type);
      return 'int';
    }
  }

  mapTypeVar(type, name, isNative) {
    return this.mapType(type, isNative) + ' ' + name;
  }

  genConstructor(cls) {
    let result = '';
    let name = this.upperCamelName(this.getClassName(cls));

    result += ` public ${name}(long nativeObj) {\n`;
    if (cls.parent) {
      result += '   super(nativeObj);\n';
    } else {
      result += '   this.nativeObj = nativeObj;\n';
    }
    result += ' }\n\n';

    result += ` static public ${name} cast(long nativeObj) {\n`;
    result += `   return new ${name}(nativeObj);\n`;
    result += ' }\n\n';


    return result;
  }

  genConst(cls, c) {
    const name = c.name;
    const shortName = name.replace(cls.prefix, "");

    if (this.isString(cls)) {
      return ` public static String ${shortName} = ${name}();\n`
    } else {
      return ` public static int ${shortName} = ${name}();\n`
    }
  }

  genFuncDecl(cls, m, name) {
    return `${this.mapType(m.return.type)} ${name}${this.genParamList(m)} `;
  }

  genFunc(cls, m) {
    let result = '';
    const name = this.toFuncName(cls.name, m.alias || m.name);

    if (this.isConstructor(m) || this.isCast(m) || this.isStatic(m)) {
      result += ' static'
    }

    result += ` ${this.genFuncDecl(cls, m, name)} {\n`;
    result += this.genCallMethod(cls, m);
    result += ' }\n\n'

    return result;
  }

  genGetProperty(cls, p) {
    let result = '';
    const type = p.type;
    const retType = this.typeToName(type);
    const name = this.upperCamelName(this.toFuncName(cls.name, p.name));
    const funcName = this.getGetPropertyFuncName(cls, p);

    if (name != 'Value') {
      result += ` public ${this.mapType(type)} get${name}() {\n`;
      if (retType && this.typeIsPointer(type)) {
        result += `   return new ${retType}(${funcName}(this.nativeObj));\n`;
      } else {
        result += `   return ${funcName}(this.nativeObj);\n`;
      }
      result += ' }\n\n'
    }

    return result;
  }

  genSetProperty(cls, p) {
    return '';
  }

  genFuncNativeDecl(cls, m) {
    return `static private native ${this.mapType(m.return.type, true)} ${m.name}${this.genParamListNative(m)};\n`;
  }

  genGetPropNativeDecl(cls, p) {
    const funcName = this.getGetPropertyFuncName(cls, p);
    return `static private native ${this.mapType(p.type, true)} ${funcName}(long nativeObj);\n`;
  }

  genSetPropNativeDecl(cls, p) {
    const funcName = this.getSetPropertyFuncName(cls, p);
    return `static private native void ${funcName}(long nativeObj, ${this.mapType(p.type, true)} value);\n`;
  }

  genConstNativeDecl(cls, c) {
    return `static private native ${this.mapType(c.type, true)} ${c.name}();\n`
  }

  genOneEnum(cls) {
    let clsName = this.toClassName(cls.name);
    let result = `public class ${clsName} {\n`;
    let isString = this.isEnumString(cls);

    if (cls.consts) {
      cls.consts.forEach(iter => {
        const name = iter.name;
        const shortName = name.replace(cls.prefix, "");
        result += ` static public final ${isString ? 'String' : 'int'} ${shortName} = ${name}();\n`
      });

      cls.consts.forEach(iter => {
        const name = iter.name;
        result += ` static private native ${isString ? 'String' : 'int'} ${name}();\n`
      });
    }

    result += `};\n\n`;

    return result;
  }

  getNull() {
    return 'null';
  }

  getNativeNull() {
    return '0';
  }

  genOneClassPre(cls) {
    return ' public long nativeObj;\n\n';
  }

  genOneClassPost(cls) {
    return this.genDeclForCls(cls);
  }

  genJsonAll(ojson) {
    let json = this.filterScriptableJson(ojson);

    json.forEach(iter => {
      let name = this.upperCamelName(this.getClassName(iter));
      this.result = this.genOne(iter);
      this.saveResult(`output/${name}.java`);
    });

  }

  static gen() {
    const gen = new TypescriptGenerator();

    gen.genAll(gen.getJsonIDL());
  }
}

TypescriptGenerator.gen();
