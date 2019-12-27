const fs = require('fs')
const TargetGen = require('../common/target_gen.js')

class TypescriptGenerator extends TargetGen {
  constructor() {
    super()
    this.returnDocKey = 'returns';
  }
  
  genClassDecl(clsName) {
    return `export class ${clsName}`;
  }

  genGetNativeObj(type, name, isCast) {
    return `${name} != ${this.nullPtr} ? (${name}.nativeObj || ${name}) : ${this.nullNativePtr}`;
  }

  mapType(type, isNative) {
    let name = this.typeToName(type);

    if (name) {
      if (isNative) {
        if (this.isEnumName(type)) {
          return name;
        } else {
          return 'any';
        }
      } else {
        return name;
      }
    } else if (this.typeIsNumber(type)) {
      return 'number';
    } else if (this.typeIsBool(type)) {
      return 'boolean';
    } else if (this.typeIsFunction(type)) {
      return 'Function';
    } else if (this.typeIsString(type)) {
      return 'string';
    } else {
      console.log(type);
      return 'any';
    }
  }

  mapTypeVar(type, name, isNative) {
    if ((this.typeIsBool(type) || this.typeIsNumber(type)) && name === 'value') {
      return name + ' : any'
    } else {
      return name + ' : ' + this.mapType(type, isNative);
    }
  }

  genConstructor(cls) {
    let result = '';

    result += ' public nativeObj : any;\n';
    result += ' constructor(nativeObj : any) {\n';
    if (cls.parent) {
      result += '   super(nativeObj);\n';
    } else {
      result += '   this.nativeObj = nativeObj;\n';
    }
    result += ' }\n\n';

    return result;
  }

  genConst(cls, c) {
    const name = c.name;
    const shortName = name.replace(cls.prefix, "");

    return ` public static ${shortName} = ${name}();\n`
  }

  genFuncDecl(cls, m, name) {
    const returnType = this.isCast(m) ? cls.name : m.return.type;

    return `${name}${this.genParamsDecl(m)} : ${this.mapType(returnType)} `;
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

  genSetPropertyWithSetter(cls, p) {
    let result = '';
    const name = this.toFuncName(cls.name, p.name);
    const setter = this.toFuncName(cls.name, "set_" + p.name);
    const funcName = this.getSetPropertyFuncName(cls, p);

    result += ` set ${name}(${this.mapTypeVar(p.type, 'v')}) {\n`;
    result += `   this.${setter}(v);\n`;
    result += ' }\n\n'

    return result;
  }

  genSetProperty(cls, p) {
    let result = '';
    const name = this.toFuncName(cls.name, p.name);
    const funcName = this.getSetPropertyFuncName(cls, p);

    result += ` set ${name}(${this.mapTypeVar(p.type, 'v')}) {\n`;
    result += `   ${funcName}(this.nativeObj, v);\n`;
    result += ' }\n\n'

    return result;
  }

  genGetProperty(cls, p) {
    let result = '';
    const type = p.type;
    const returnType = this.typeToName(type);
    const name = this.toFuncName(cls.name, p.name);
    const funcName = this.getGetPropertyFuncName(cls, p);

    result += this.genPropDoc(p);
    result += ` get ${name}() : ${this.mapType(type)} {\n`;
    if (returnType && this.typeIsPointer(type)) {
      result += `   return new ${returnType}(${funcName}(this.nativeObj));\n`;
    } else {
      result += `   return ${funcName}(this.nativeObj);\n`;
    }
    result += ' }\n\n'

    return result;
  }

  genFuncNativeDecl(cls, m) {
    const returnType = this.mapType(m.return.type, true);
    return `declare function ${m.name}${this.genParamsDeclNative(m)} : ${returnType};\n`;
  }

  genGetPropNativeDecl(cls, p) {
    const returnType = this.mapType(p.type, true);
    const funcName = this.getGetPropertyFuncName(cls, p);
    return `declare function ${funcName}(nativeObj : any) : ${returnType};\n`;
  }

  genSetPropNativeDecl(cls, p) {
    const propType = this.mapTypeVar(p.type, 'v', true);
    const funcName = this.getSetPropertyFuncName(cls, p);
    return `declare function ${funcName}(nativeObj : any, ${propType})\n`;
  }

  genConstNativeDecl(cls, c) {
    return `declare function ${c.name}();\n`
  }

  genEnum(cls) {
    const clsName = this.toClassName(cls.name);
    let result = this.genEnumDoc(cls);
    result += `enum ${clsName} {\n`;

    if (cls.consts) {
      cls.consts.forEach(iter => {
        const name = iter.name;
        const shortName = name.replace(cls.prefix, "");
        result += this.genEnumItemDoc(iter);
        result += ` ${shortName} = ${name}(),\n`
      });
    }

    result += `};\n\n`;

    return result;
  }

  genFuncsDecl(json) {
    let result = '';

    json.forEach(cls => {
      result += this.genDeclForCls(cls);
    });

    return result;
  }

  genJsonAll(ojson) {
    let result = `
declare function print(str);
if(this['console'] === undefined) {
  this.console = {}
  this.console.log = function(str) {
      print(str);
  }
}
`;
    let json = this.filterScriptableJson(ojson);

    result += this.genFuncsDecl(json);
    json.forEach(iter => {
      result += this.genOne(iter);
    });

    this.result = result;
  }

  static gen() {
    const gen = new TypescriptGenerator();

    gen.genAll(gen.getJsonIDL());
    gen.saveResult('output/awtk.ts');
  }
}

TypescriptGenerator.gen();
