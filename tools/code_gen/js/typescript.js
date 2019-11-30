const fs = require('fs')
const TargetGen = require('../common/target_gen.js')

class TypescriptGenerator extends TargetGen {
  constructor() {
    super()
  }
  
  mapType(type) {
    let name = this.typeToName(type); 
    if(name) {
      return name; 
    } else  if(this.typeIsNumber(type)) {
      return 'number';
    } else if(this.typeIsBool(type)) {
      return 'number';
    } else if(this.typeIsFunction(type)) {
      return 'Function';
    } else if(this.typeIsString(type)) {
      return 'string';
    } else {
      console.log(type);
      return 'any';
    }
  }

  mapTypeVar(type, name) {
    return name + ' : ' + this.mapType(type);
  }

  genConstructor(cls) {
    let result = '';
    result += ' constructor(nativeObj) {\n';
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
    return `${name}${this.genParamList(m)} : ${this.mapType(m.return.type)} `;
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

  genSetProperty(cls, p) {
    let result = '';
    const name = this.toFuncName(cls.name, p.name);
    const funcName = this.getSetPropertyFuncName(cls, p);

    result += ` set ${name}(value) {\n`;
    result += `   ${funcName}(this.nativeObj, value);\n`;
    result += ' }\n\n'

    return result;
  }

  genGetProperty(cls, p) {
    let result = '';
    const type = p.type;
    const name = this.toFuncName(cls.name, p.name);
    const funcName = this.getGetPropertyFuncName(cls, p);
    result += ` get ${name}() {\n`;
    result += `   return ${funcName}(this.nativeObj);\n`;
    result += ' }\n\n'

    return result;
  }

  genFuncNativeDecl(cls, m) {
    return `declare function ${m.name}${this.genParamListNative(m)} : ${this.mapType(m.return.type)};\n`;
  }

  genGetPropNativeDecl(cls, p) {
    const funcName = this.getGetPropertyFuncName(cls, p);
    return `declare function ${funcName}(nativeObj);\n`;
  }

  genSetPropNativeDecl(cls, p) {
    const funcName = this.getSetPropertyFuncName(cls, p);
    return `declare function ${funcName}(nativeObj, value);\n`;
  }

  genConstNativeDecl(cls, c) {
    return `declare function ${c.name}();\n`
  }

  genOneEnum(cls) {
    let clsName = this.toClassName(cls.name);
    let result = `enum ${clsName} {\n`;

    if (cls.consts) {
      cls.consts.forEach(iter => {
        const name = iter.name;
        const shortName = name.replace(cls.prefix, "");
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
