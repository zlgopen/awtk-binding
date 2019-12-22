const fs = require('fs')
const TargetGen = require('../common/target_gen.js')

class JavaGenerator extends TargetGen {
  constructor() {
    super()
    this.BOM = '';
    this.nullNativePtr = '0'
  }

  genCallParam(param) {
    const name = param.name;
    const type = param.type;

    if (this.isEnumName(type)) {
      return `${name}.value()`
    } else {
      return name;
    }
  }

  genReturnEnum(enumInfo, result) {
    const name = this.toClassName(enumInfo.name);
    return `   return ${name}.from(${result});\n`;
  }

  mapType(type, isNative) {
    let name = this.typeToName(type);
    let info = this.getClassOrEnumInfo(this.typeToNativeName(type));

    if (info != null) {
      if (info.type === 'class') {
        if (isNative) {
          return 'long';
        } else {
          return name;
        }
      } else if (info.type == 'enum') {
        if (this.isEnumString(info)) {
          return 'String';
        } else {
          if (isNative) {
            return 'int';
          } else {
            return name;
          }
        }
      }
    }

    if (this.typeIsLongInteger(type)) {
      return 'long';
    } else if (this.typeIsInteger(type)) {
      return 'int';
    } else if (this.typeIsFloat(type)) {
      return 'double';
    } else if (this.typeIsBool(type)) {
      return 'boolean';
    } else if (type.indexOf('event_func_t') >= 0) {
      return 'TOnEvent';
    } else if (type.indexOf('tk_visit_t') >= 0) {
      return 'TOnWidget';
    } else if (type.indexOf('idle_func_t') >= 0) {
      return 'TOnIdle';
    } else if (type.indexOf('timer_func_t') >= 0) {
      return 'TOnTimer';
    } else if (this.typeIsString(type)) {
      return 'String';
    } else {
      console.log(type);
      return 'long';
    }
  }

  mapTypeVar(type, name, isNative) {
    return this.mapType(type, isNative) + ' ' + name;
  }

  genConstructor(cls) {
    let result = '';
    let name = this.toClassName(cls.name);

    if(!(cls.parent)) {
      result += 
`
/**
 * 原生对象。
 */
 public long nativeObj;

`
    }

    result += 
`
/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
`;
    result += ` public ${name}(long nativeObj) {\n`;
    if (cls.parent) {
      result += '   super(nativeObj);\n';
    } else {
      result += '   this.nativeObj = nativeObj;\n';
    }
    result += ' }\n\n';

result += 
`
/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
`;
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
    let retType = this.isCast(m) ? cls.name : m.return.type;
    return `${this.mapType(retType)} ${name}${this.genParamsDecl(m)} `;
  }

  genFunc(cls, m) {
    let result = ' public ';
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
    const nativeType = this.typeToNativeName(type);
    const name = this.upperCamelName(this.toFuncName(cls.name, p.name));
    const funcName = this.getGetPropertyFuncName(cls, p);
    const enumInfo = this.getEnumInfo(nativeType);
    const classInfo = this.getClassInfo(nativeType);

    if (name != 'Value') {
      result += this.genPropDoc(p);
      result += ` public ${this.mapType(type)} get${name}() {\n`;

      if (classInfo) {
        result += `   return new ${retType}(${funcName}(this.nativeObj));\n`;
      } else if (enumInfo) {
        result += this.genReturnEnum(enumInfo, `${funcName}(this.nativeObj)`) + '\n';
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
    return `static private native ${this.mapType(m.return.type, true)} ${m.name}${this.genParamsDeclNative(m)};\n`;
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

  genEnum(cls) {
    let defValue = '';
    let valueList = '';
    let nativeList = '';
    let isString = this.isEnumString(cls);
    let clsName = this.toClassName(cls.name);
    let type = isString ? 'String' : 'int';

    cls.consts.forEach((iter, index) => {
      const name = iter.name;
      const shortName = name.replace(cls.prefix, "");

      if (index == 0) {
        defValue = shortName;
      } else {
        valueList += ',\n';
      }
      valueList += `  ${this.genEnumItemDoc(iter)} \n`;
      valueList += `  ${shortName} (${name}())`;
      nativeList += `  static private native ${type} ${name}();\n`
    });
    valueList += ';\n';

    let result = `
${this.genEnumDoc(cls)}
public enum ${clsName} {
${valueList} 
 
  private ${clsName}(${type} value) {
    this.value = value;
  }

/**
 * 获取枚举的值。
 *
 * @return 枚举的值。
 */
  public ${type} value() {
    return this.value;
  }

/**
 * 把枚举的值转换层枚举。
 *
 * @param value 枚举的值。

 * @return 对应的枚举类型。
 */
  public static ${clsName} from(${type} value) {
    for(${clsName} iter : ${clsName}.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return ${defValue};
  }
  
  private ${type} value;

${nativeList}
}
`
    return result;
  }

  genClassDecl(clsName) {
    return `public class ${clsName}`;
  }

  genClassPost(cls) {
    return this.genDeclForCls(cls);
  }

  genJsonAll(ojson) {
    let json = this.filterScriptableJson(ojson);

    json.forEach(iter => {
      let name = this.upperCamelName(this.getClassName(iter));
      this.result = `package awtk;\n\n`;
      this.result += this.genOne(iter);
      this.saveResult(`output/${this.classNamePrefix}${name}.java`);
    });

  }

  static gen() {
    const gen = new JavaGenerator();

    gen.genAll(gen.getJsonIDL());
  }
}

JavaGenerator.gen();
