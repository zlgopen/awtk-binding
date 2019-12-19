const fs = require('fs')
const TargetGen = require('../common/target_gen.js')

class CppGenerator extends TargetGen {
  constructor() {
    super()
    this.classNamePrefix = 'T';
    this.nullPtr = 'NULL'
    this.nullNativePtr = 'NULL'
  }

  genCallParam(param) {
    return param.name;
  }

  genReturnEnum(enumInfo, result) {
    return `   return ${result};\n`;
  }

  mapType(type, isNative) {
    let name = this.typeToNativeName(type);
    let cls = this.getClassInfo(name);

    if (!isNative) {
      if (cls) {
        return this.toClassName(name);
      }
    }

    if (this.typeIsBool(type)) {
      return 'bool';
    } else {
      return type;
    }
  }

  mapTypeVar(type, name, isNative) {
    if (!isNative) {
      let cls = this.getClassInfo(this.typeToNativeName(type));
      if (cls) {
        return this.mapType(type, isNative) + '& ' + name;
      }
    }
    return this.mapType(type, isNative) + ' ' + name;
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

  genFuncDecl(cls, m, name) {
    let retType = this.isCast(m) ? cls.name : m.return.type;
    return `${this.mapType(retType)} ${name}${this.genParamList(m)} `;
  }

  toFuncName(clsName, mName) {
    let prefix = clsName.replace(/_t$/, '');
    let name = mName.replace(prefix + '_', '');

    return this.upperCamelName(name);
  }

  genSetProperty(cls, p) {
    return '';
  }
}

module.exports = CppGenerator;
