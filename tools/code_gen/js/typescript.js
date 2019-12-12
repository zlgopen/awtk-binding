const fs = require('fs')
const TargetGen = require('../common/target_gen.js')

class TypescriptGenerator extends TargetGen {
  constructor() {
    super()
  }
  
  genGetNativeObj(name, isCast) {
    if(isCast) {
      return `${name} != ${this.getNull()} ? (${name}.nativeObj || ${name}) : ${this.getNativeNull()}`;
    } else {
      return `${name} != ${this.getNull()} ? (${name}.nativeObj || ${name}) : ${this.getNativeNull()}`;
    }
  }
  
  mapType(type) {
    let name = this.typeToName(type); 
    if(name) {
      return name; 
    } else  if(this.typeIsNumber(type)) {
      return 'number';
    } else if(this.typeIsBool(type)) {
      return 'boolean';
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
    if((this.typeIsBool(type) || this.typeIsNumber(type)) && name === 'value') {
      return name + ' : any'
    } else {
      return name + ' : ' + this.mapType(type);
    }
  }

  genConstructor(cls) {
    let result = '';

    result += ' public nativeObj : any;\n';
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
    let retType = m.return.type;

    if(this.isCast(m)) {
      retType = cls.name;
    }

    return `${name}${this.genParamList(m)} : ${this.mapType(retType)} `;
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
    const setter = this.toFuncName(cls.name, "set_"+ p.name);
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
    const retType = this.typeToName(type); 
    const name = this.toFuncName(cls.name, p.name);
    const funcName = this.getGetPropertyFuncName(cls, p);

    result += this.genPropDoc(p);
    result += ` get ${name}() : ${this.mapType(type)} {\n`;
      if(retType && this.typeIsPointer(type)) {
        result += `   return new ${retType}(${funcName}(this.nativeObj));\n`;
      } else {
        result += `   return ${funcName}(this.nativeObj);\n`;
      }
    result += ' }\n\n'

    return result;
  }

  genFuncNativeDecl(cls, m) {
    return `declare function ${m.name}${this.genParamListNative(m)} : ${this.mapType(m.return.type)};\n`;
  }

  genGetPropNativeDecl(cls, p) {
    const funcName = this.getGetPropertyFuncName(cls, p);
    return `declare function ${funcName}(nativeObj : any);\n`;
  }

  genSetPropNativeDecl(cls, p) {
    const funcName = this.getSetPropertyFuncName(cls, p);
    return `declare function ${funcName}(nativeObj : any, ${this.mapTypeVar(p.type, 'v')});\n`;
  }

  genConstNativeDecl(cls, c) {
    return `declare function ${c.name}();\n`
  }

  genEnum(cls) {
    let clsName = this.toClassName(cls.name);
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
