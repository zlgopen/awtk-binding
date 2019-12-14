const fs = require('fs')
const CodeGen = require('../common/code_gen.js')

class TargetGen extends CodeGen {
  constructor() {
    super()
    this.classNamePrefix = 'T';
  }

  getNull() {
    return 'null';
  }

  getNativeNull() {
    return 'null';
  }

  toFuncName(clsName, mName) {
    let prefix = clsName.replace(/_t$/, '');
    let name = mName.replace(prefix + '_', '');

    return this.camelCase(name);
  }

  toEnumValue(enumInfo, result) {
    return `   return ${result};\n`;
  }

  genCreateObject(cls, m, arg) {
    let clsName = this.toClassName(this.getClassName(cls));
    return `   return new ${clsName}(${arg});\n`;
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
    let enumInfo = this.getEnumInfo(returnType);
    if (classInfo) {
      return this.genCreateObject(classInfo, m, result);
    } else if (enumInfo) {
      return this.toEnumValue(enumInfo, result);
    } else {
      return `   return ${result};\n`;
    }

    return result;
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

  genCallParam(param) {
    return param.name;
  }

  genGetNativeObj(type, name, isCast) {
    return `${name} != ${this.getNull()} ? (${name}.nativeObj) : ${this.getNativeNull()}`;
  }

  genCallParamList(m) {
    let result = '';
    let isNormalMethod = this.isNormalMethod(m);

    m.params.forEach((iter, index) => {
      const type = iter.type;
      const name = iter.name;

      if (index == 0) {
        if (isNormalMethod) {
          result += this.genGetNativeObj(type, "this", false);
          return;
        } else if (this.isCast(m)) {
          result += this.genGetNativeObj(type, name, true);
          return;
        }
      }

      if (result !== '') {
        result += ', ';
      }

      if (this.isClassName(iter.type)) {
        result += this.genGetNativeObj(type, name, false);
      } else {
        result += this.genCallParam(iter);
      }
    });

    return '(' + result + ')';
  }

  genClassPre(cls) {
    return '';
  }

  genClassPost(cls) {
    return '';
  }


  removeCode(str, start, end) {
    let result = '';

    do {
      let startIndex = str.indexOf(start);
      if (startIndex < 0) {
        result += str;
        break;
      }

      let rest = str.substr(startIndex + start.length);
      let endIndex = rest.indexOf(end);

      if (endIndex < 0) {
        result += rest;
        break;
      }

      result += str.substr(0, startIndex);
      str = rest.substr(endIndex + end.length);
    } while (true);

    return result;
  }

  tidyDoc(desc) {
    let result = this.removeCode(desc, '<!-- c_doc_begin -->', '<!-- c_doc_end -->');
    result = this.removeCode(result, '```c\n', '```\n');
    result = this.removeCode(result, '```graphviz\n', '```\n');

    result = result.replace(/\r\n/g, '\n');
    result = result.replace(/\r/g, '\n');
    result = result.replace(/\n/g, '\n * ');
    result = result.replace(/ * >/g, '');
    return result;
  }

  genGeneralDoc(item) {
    let desc = this.tidyDoc(item.desc);
    let result = `
/**
 * ${desc}
 *
 */
`;

    return result;
  }

  genClassDoc(cls) {
    return this.genGeneralDoc(cls);
  }

  genConstDoc(c) {
    return this.genGeneralDoc(c);
  }

  genEnumDoc(c) {
    return this.genGeneralDoc(c);
  }

  genEnumItemDoc(c) {
    return this.genGeneralDoc(c);
  }

  genPropDoc(p) {
    return this.genGeneralDoc(p);
  }

  genFuncDoc(cls, m) {
    let paramsDesc = '';
    let retDesc = m.return.desc;
    let desc = this.tidyDoc(m.desc);

    m.params.forEach(iter => {
      paramsDesc += ` * @param ${iter.name} ${iter.desc}\n`;
    });

    return `
/**
 * ${desc}
 * \n${paramsDesc} *
 * @returns ${retDesc}
 */
`;
  }

  genClassDecl(clsName) {
    return `class ${clsName}`;
  }

  genClassExtends(cls) {
    return ` extends ${this.toClassName(this.getParentClassName(cls))} {\n`
  }

  genSetPropertyWithSetter(cls, p) {
    return '';
  }

  genConst(cls, c) {}

  genClassBegin(cls) {
    let result = this.genClassDoc(cls);
    let clsName = this.toClassName(this.getClassName(cls));

    result += this.genClassDecl(clsName);

    if (cls.parent) {
      result += this.genClassExtends(cls);
    } else {
      result += ' {\n';
    }

    result += this.genClassPre(cls);
    if (!this.isFake(cls)) {
      result += this.genConstructor(cls);
    }

    return result;
  }

  genClassEnd(cls) {
    let result = this.genClassPost(cls);
    result += '}\n\n';

    return result;
  }

  genClass(cls) {
    let result = '';

    result += this.genClassBegin(cls);
    if (cls.methods) {
      cls.methods.forEach(iter => {
        result += this.genFuncDoc(cls, iter);
        result += this.genFunc(cls, iter);
      });
    }

    if (cls.properties) {
      cls.properties.forEach((p) => {
        if (this.isWritable(p)) {
          result += this.genSetProperty(cls, p);
        } else if (this.hasSetterFor(cls, p.name)) {
          result += this.genSetPropertyWithSetter(cls, p);
        }

        if (this.isReadable(p)) {
          result += this.genGetProperty(cls, p);
        }
      });
    }

    if (cls.consts) {
      cls.consts.forEach(iter => {
        result += this.genConstDoc(cls, iter);
        result += this.genConst(cls, iter);
      });
    }
    result += this.genClassEnd(cls);

    return result;
  }

  getSetPropertyFuncName(cls, p) {
    return `${cls.name}_set_prop_${p.name}`;
  }

  getGetPropertyFuncName(cls, p) {
    return `${cls.name}_get_prop_${p.name}`;
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

  genEnum() {
    return '';
  }

}

module.exports = TargetGen;
