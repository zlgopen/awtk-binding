const fs = require('fs')
const CodeGen = require('../common/code_gen.js')

class TargetGen extends CodeGen {
  constructor() {
    super()
    this.classNamePrefix = 'T';
    this.returnDocKey = 'return';
    this.docPrefixFirst = '/**';
    this.docPrefix = ' *';
    this.docPrefixLast = ' */';
    this.classBlockBegin = ' { \n';
    this.classBlockEnd = '};';
    this.thisArg = 'this';
    this.nullPtr = 'null';
    this.nullNativePtr = 'null';
    this.newOperator = 'new';
  }


  toFuncName(clsName, mName) {
    let prefix = clsName.replace(/_t$/, '');
    let name = mName.replace(prefix + '_', '');

    return this.camelCase(name);
  }

  genReturnEnum(enumInfo, result) {
    return `    return ${result};\n`;
  }

  genReturnObject(cls, m, arg) {
    let clsName = this.toClassName(this.getClassName(cls));
    return `    return ${this.newOperator} ${clsName}(${arg});\n`;
  }
  
  genReturnValue(arg) {
    return `    return ${arg};\n`;
  }

  genCallMethod(cls, m) {
    let returnType = null;
    let result = `${m.name}${this.genCallParamsDecl(m)}`;

    if (this.isCast(m) || this.isConstructor(m)) {
      returnType = cls.name;
    } else {
      returnType = m.return.type.replace(/\*/g, "");
    }

    let classInfo = this.getClassInfo(returnType);
    let enumInfo = this.getEnumInfo(returnType);

    if (classInfo) {
      return this.genReturnObject(classInfo, m, result);
    } else if (enumInfo) {
      return this.genReturnEnum(enumInfo, result);
    } else {
      return this.genReturnValue(result);
    }

    return result;
  }

  genParamsDeclNative(m) {
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

  genParamsDecl(m) {
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
    return `${name} != ${this.nullPtr} ? (${name}.nativeObj) : ${this.nullNativePtr}`;
  }

  genCallParamsDecl(m) {
    let result = '';
    let isNormalMethod = this.isNormalMethod(m);

    m.params.forEach((iter, index) => {
      const type = iter.type;
      const name = iter.name;

      if (index == 0) {
        if (isNormalMethod) {
          result += this.genGetNativeObj(type, this.thisArg, false);
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

  tidyDoc(desc, spaces) {
    let result = this.removeCode(desc, '<!-- c_doc_begin -->', '<!-- c_doc_end -->');
    result = this.removeCode(result, '```c\n', '```\n');
    result = this.removeCode(result, '```graphviz', '```');

    result = result.replace(/\r\n/g, '\n');
    result = result.replace(/\r/g, '\n');
    result = result.replace(/\n/g, '\n' + (spaces || '') + this.docPrefix);
    result = result.replace(/ * >/g, '');
    return result;
  }

  genGeneralDoc(item, spaces) {
    let desc = this.tidyDoc(item.desc, spaces);
    let result = `
${spaces||''}${this.docPrefixFirst}
${spaces||''}${this.docPrefix} ${desc}
${spaces||''}${this.docPrefix}
${spaces||''}${this.docPrefixLast}
`;

    return result;
  }

  genClassDoc(cls) {
    return this.genGeneralDoc(cls);
  }

  genEnumDoc(c) {
    return this.genGeneralDoc(c);
  }

  genConstDoc(c) {
    return this.genGeneralDoc(c, '  ');
  }

  genEnumItemDoc(c) {
    return this.genGeneralDoc(c, '  ');
  }

  genPropDoc(p) {
    return this.genGeneralDoc(p, '  ');
  }

  genFuncDoc(cls, m) {
    let paramsDesc = '';
    let retDesc = m.return.desc;
    let desc = this.tidyDoc(m.desc, '  ');
    let isNormalMethod = this.isNormalMethod(m);

    m.params.forEach((iter, index) => {
      if (index === 0 && isNormalMethod) {
        return;
      }

      paramsDesc += `  ${this.docPrefix} @param ${iter.name} ${iter.desc}\n`;
    });

    return `
  ${this.docPrefixFirst}
  ${this.docPrefix} ${desc}
  ${this.docPrefix} \n${paramsDesc}  ${this.docPrefix}
  ${this.docPrefix} @${this.returnDocKey} ${retDesc}
  ${this.docPrefixLast}
`;
  }

  genClassDecl(clsName) {
    return `class ${clsName}`;
  }

  genClassExtends(cls) {
    return ` extends ${this.toClassName(this.getParentClassName(cls))}`
  }

  genClassExtendsBase(cls) {
    return '';
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
      result += this.genClassExtendsBase(cls);
    }

    result += this.classBlockBegin;

    result += this.genClassPre(cls);
    if (!this.isFake(cls)) {
      result += this.genConstructor(cls);
    }

    return result;
  }

  genClassEnd(cls) {
    let result = this.genClassPost(cls);
    result += this.classBlockEnd;

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
        if (this.isReadable(p)) {
          result += this.genGetProperty(cls, p);
        }

        if (this.isWritable(p)) {
          result += this.genSetProperty(cls, p);
        } else if (this.hasSetterFor(cls, p.name)) {
          result += this.genSetPropertyWithSetter(cls, p);
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
