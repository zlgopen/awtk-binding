const fs = require('fs')
const CodeGen = require('../common/code_gen.js')

class TargetGen extends CodeGen {
  constructor() {
    super()
    this.result = '';
    this.classNamePrefix = 'T';
  }

  getNull() {
    return 'null';
  }

  getNativeNull() {
    return 'null';
  }

  toClassName(name) {
    return this.classNamePrefix + this.upperCamelName(name);
  }

  genCallMethod(cls, m) {
    let returnType = null;
    let result = `${m.name}${this.genCallParamList(m)}`;
    if (this.isCast(m) || this.isConstructor(m)) {
      returnType = cls.name;
    } else {
      returnType = m.return.type.replace(/\*/g, "");
    }

    let classInfo = this.getClassInfo(returnType);
    if (classInfo) {
      let clsName = this.toClassName(this.getClassName(classInfo));
      result = `   return new ${clsName}(${result});\n`;
    } else {
      return `   return ${result};\n`;
    }

    return result;
  }

  toFuncName(clsName, mName) {
    let prefix = clsName.replace(/_t$/, '');
    let name = mName.replace(prefix + '_', '');

    return this.camelCase(name);
  }

  genParamListNative(m) {
    let result = '';
    m.params.forEach((iter, index) => {
      if (index === 0) {
        result += this.mapTypeVar(iter.type, iter.name, true);
      } else {
        if (result) {
          result += ', ';
        }
        result += this.mapTypeVar(iter.type, iter.name, true);
      }
    });

    return '(' + result + ')';
  }

  genParamList(m) {
    let result = '';
    let isNormalMethod = this.isNormalMethod(m);

    m.params.forEach((iter, index) => {
      if (index == 0) {
        if (isNormalMethod) {
          return;
        }
      }

      if (result !== '') {
        result += ', ';
      }
      result += this.mapTypeVar(iter.type, iter.name, false);
    });

    return '(' + result + ')';
  }

  genGetNativeObj(name, isCast) {
    return `${name} != ${this.getNull()} ? (${name}.nativeObj) : ${this.getNativeNull()}`;
  }

  genCallParamList(m) {
    let result = '';
    let isNormalMethod = this.isNormalMethod(m);

    m.params.forEach((iter, index) => {
      const name = iter.name;

      if (index == 0) {
        if (isNormalMethod) {
          result += 'this.nativeObj';
          return;
        } else if (this.isCast(m)) {
          result += this.genGetNativeObj(name, true);
          return;
        }
      }

      if (result !== '') {
        result += ', ';
      }

      if (this.isClassName(iter.type)) {
        result += this.genGetNativeObj(name, false);
      } else {
        result += name;
      }
    });

    return '(' + result + ')';
  }

  genOneClassPre(cls) {
    return '';
  }

  genOneClassPost(cls) {
    return '';
  }

  genOneClassDecl(clsName) {
    return `class ${clsName}`;
  }

  genOneClass(cls) {
    let result = '';
    let clsName = this.toClassName(this.getClassName(cls));

    result = this.genOneClassDecl(clsName);

    if (cls.parent) {
      result += ` extends ${this.toClassName(this.getParentClassName(cls))} {\n`
    } else {
      result += ' {\n';
    }

    result += this.genOneClassPre(cls);

    result += this.genConstructor(cls);

    if (cls.methods) {
      cls.methods.forEach(iter => {
        result += this.genFunc(cls, iter);
      });
    }

    if (cls.properties) {
      cls.properties.forEach((p) => {
        if (this.isWritable(p)) {
          result += this.genSetProperty(cls, p);
        }

        if (this.isReadable(p)) {
          result += this.genGetProperty(cls, p);
        }
      });
    }

    if (cls.consts) {
      cls.consts.forEach(iter => {
        result += this.genConst(cls, iter);
      });
    }
    result += this.genOneClassPost(cls);

    result += '}\n\n';
    return result;
  }


  getSetPropertyFuncName(cls, p) {
    return `${cls.name}_set_prop_${p.name}`;
  }

  getGetPropertyFuncName(cls, p) {
    return `${cls.name}_get_prop_${p.name}`;
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

  genDeclForCls(cls) {
    let result = '';
    if (cls.methods) {
      cls.methods.forEach(m => {
        result += `${this.genFuncNativeDecl(cls, m)}`
      });
    }

    if (cls.properties) {
      cls.properties.forEach(p => {
        if (this.isReadable(p)) {
          result += `${this.genGetPropNativeDecl(cls, p)}`
        }

        if (this.isWritable(p)) {
          result += `${this.genSetPropNativeDecl(cls, p)}`
        }
      });
    }

    if (cls.consts) {
      cls.consts.forEach(c => {
        result += this.genConstNativeDecl(cls, c);
      });
    }
    return result;
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

  genOne(cls) {
    if (cls.type === 'class') {
      return this.genOneClass(cls);
    } else if (cls.type === 'enum') {
      return this.genOneEnum(cls);
    } else {
      return '';
    }
  }
}

module.exports = TargetGen;
