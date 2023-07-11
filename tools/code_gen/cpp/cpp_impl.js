const fs = require('fs')
const CppGenerator = require('./cpp.js')

class CppImplGenerator extends CppGenerator {
  constructor() {
    super()
  }

  genClassBegin(cls) {
    return '';
  }

  genClassEnd(cls) {
    return '';
  }

  genReturnObject(cls, m, arg) {
    let nativeType = this.getNativeObjType(cls) + '*';
    let clsName = this.toClassName(this.getClassName(cls));
    const is_ref = m.name && (m.name.endsWith('_ref') || m.name.endsWith('_ref_ex'));

    if(is_ref) {
      const returnType = this.typeToNativeName(m.return.type);
      clsName = this.toClassName(returnType);
      nativeType = returnType + '*';
    }   

    if (this.isCast(m)) {
      return `   return ${clsName}(${arg});\n`;
    } else {
      return `   return ${clsName}((${nativeType})(${arg}));\n`;
    }
  }

  genFuncDecl(cls, m, name) {
    let retType = this.isCast(m) ? cls.name : m.return.type;
    let clsName = this.toClassName(cls.name);
    return `${this.mapType(retType)} ${clsName}::${name}${this.genParamsDecl(m)} `;
  }

  genFuncDoc(cls, m) {
    return '';
  }

  genFunc(cls, m) {
    let result = '';
    const name = this.toFuncName(cls.name, m.alias || m.name);
    
    if(this.isCast(m)) {
      return '';
    }

    result += ` ${this.genFuncDecl(cls, m, name)} {\n`;
    result += this.genCallMethod(cls, m);
    result += ' }\n\n'

    return result;
  }

  genGetNativeObj(type, name, isCast) {
    if (name === 'this') {
      return `((${type})(${name}->nativeObj))`;
    } else {
      return `((${type})(${name}.nativeObj))`;
    }
  }

  genGetProperty(cls, p) {
    let result = '';
    const type = p.type;
    const name = p.name;
    const clsName = this.toClassName(cls.name);
    const retType = this.typeToName(type);
    const nativeType = this.typeToNativeName(type);
    const classInfo = this.getClassInfo(nativeType);
    const propGetter = this.genGetNativeObj(cls.name + '*', 'this') + `->${name}`;
    result += ` ${this.mapType(type)} ${clsName}::Get${this.upperCamelName(name)}() const {\n`;
    if (classInfo) {
      result += `   return ${retType}(${propGetter});\n`;
    } else {
      result += `   return ${propGetter};\n`;
    }
    result += ' }\n\n'

    return result;
  }

  genJsonAll(ojson) {
    let json = this.filterScriptableJson(ojson);

    this.result = '#include "awtk_cpp.hpp"\n';
    json.forEach(iter => {
      this.result += this.genOne(iter);
    });
    this.saveResult(`output/awtk_cpp.cpp`);

  }

  static gen() {
    const gen = new CppImplGenerator();

    gen.genAll(gen.getJsonIDL());
  }
}

CppImplGenerator.gen();
