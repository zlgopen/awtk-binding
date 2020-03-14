const fs = require('fs')
const CppGenerator = require('./cpp.js')

class CppIntfGenerator extends CppGenerator {
  constructor() {
    super()
  }

  genFuncDoc(cls, m) {
    if(this.isCast(m)) {
      return '';
    } else {
      return super.genFuncDoc(cls, m);
    }
  }

  genClassExtends(cls) {
    return ` : public ${this.toClassName(this.getParentClassName(cls))}`
  }

  getNativeObjType(cls) {
    if (cls.parent) {
      return this.getNativeObjType(this.getClassInfo(cls.parent));
    } else {
      return cls.name;
    }
  }

  genClassPre(cls) {
    return 'public:\n'
  }

  genClassEnd(cls) {
    return '};\n\n';
  }

  genConstructor(cls) {
    let result = '';
    let nativeObjType = this.getNativeObjType(cls) + '*';
    let name = this.toClassName(cls.name);

    if (!cls.parent) {
      result += '  //nativeObj is public for internal use only.\n';
      result += `  ${nativeObjType} nativeObj;\n\n`;
    }

    if (cls.parent) {
      const parentName = this.toClassName(cls.parent);
      result += `  ${name}(${nativeObjType} nativeObj) : ${parentName}(nativeObj) {\n`;
    } else {
      result += `  ${name}(${nativeObjType} nativeObj) {\n`;
      result += '    this->nativeObj = nativeObj;\n';
    }
    result += '  }\n\n';

    if (cls.parent) {
      const parentName = this.toClassName(cls.parent);
      result += `  ${name}(const ${cls.name}* nativeObj) : ${parentName}((${nativeObjType})nativeObj) {\n`;
    } else {
      result += `  ${name}(const ${nativeObjType} nativeObj) {\n`;
      result += `    this->nativeObj = (${nativeObjType})nativeObj;\n`;
    }
    result += '  }\n\n';

    result += `  static ${name} Cast(${nativeObjType} nativeObj) {\n`;
    result += `    return ${name}(nativeObj);\n`;
    result += '  }\n\n';

    result += `  static ${name} Cast(const ${nativeObjType} nativeObj) {\n`;
    result += `    return ${name}((${nativeObjType})nativeObj);\n`;
    result += '  }\n\n';
   
    if(cls.parent) {
      let base = this.getBaseClassInfo(cls);
      let baseName = this.toClassName(base.name);

      result += `  static ${name} Cast(${baseName}& obj) {\n`;
      result += `    return ${name}(obj.nativeObj);\n`;
      result += '  }\n\n';

      result += `  static ${name} Cast(const ${baseName}& obj) {\n`;
      result += `    return ${name}(obj.nativeObj);\n`;
      result += '  }\n\n';
    }

    return result;
  }

  genFuncDecl(cls, m, name) {
    let retType = this.isCast(m) ? cls.name : m.return.type;
    return `${this.mapType(retType)} ${name}${this.genParamsDecl(m)} `;
  }

  genFunc(cls, m) {
    if(this.isCast(m)) {
      return '';
    }

    let result = '';
    const name = this.toFuncName(cls.name, m.alias || m.name);

    if (this.isConstructor(m) || this.isCast(m) || this.isStatic(m)) {
      result += '  static'
    }

    result += `  ${this.genFuncDecl(cls, m, name)};\n`;

    return result;
  }

  genGetProperty(cls, p) {
    let result = '';
    const type = p.type;
    const name = p.name;
    const retType = this.typeToName(type);
    const nativeType = this.typeToNativeName(type);
    const classInfo = this.getClassInfo(nativeType);

    if (name != 'Value') {
      result += this.genPropDoc(p);
      result += `  ${this.mapType(type)} Get${this.upperCamelName(name)}() const;\n`;
    }

    return result;
  }

  genJsonAll(ojson) {
    let json = this.filterScriptableJson(ojson);

    this.result = '#ifndef AWTK_CPP_HPP\n';
    this.result += '#define AWTK_CPP_HPP\n';
    this.result += '#include "awtk.h"\n';
    this.result += 'class TValue;\n';
    this.result += 'class TRect;\n';
    this.result += 'class TObject;\n';
    this.result += 'class TEmitter;\n';
    this.result += 'class TEvent;\n';
    this.result += 'class TWidget;\n';
    this.result += 'class TWindow;\n';
    this.result += 'class TAssetInfo;\n';
    this.result += 'class TNativeWindow;\n';

    json.forEach(iter => {
      let name = this.upperCamelName(this.getClassName(iter));
      this.result += this.genOne(iter);
    });
    this.result += '#endif/*AWTK_CPP_HPP*/\n';
    this.saveResult(`output/awtk_cpp.hpp`);

  }

  static gen() {
    const gen = new CppIntfGenerator();

    gen.genAll(gen.getJsonIDL());
  }
}

CppIntfGenerator.gen();
