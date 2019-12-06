const fs = require('fs')
const CodeGen = require('../common/code_gen.js')

class BindingGen extends CodeGen {
  constructor() {
    super();
  }
  
  toClassName(name) {
    return this.upperCamelName(name);
  }
  
  genFreeStr(name) {
    return '';
  }

  genGetGlobalObject() {
    return '';
  }

  genFreeGlobalObject() {
    return '';
  }

  genRegFunc(prefix, name) {
    return '';
  }
   
  genGlobalInfo(json) {
    return '';
  }

  genCreateObject(name, type, destroyFunc) {
    return '';
  }
  
  genGetObject(index, type, name) {
    return '';
  }

  genMemberFuncDecl(cls, m) {
    const name = m.name;
    return this.genFuncDecl(name);
  }

  genGetPropDecl(cls, p) {
    const name = this.getGetPropertyFuncName(cls, p);
    return this.genFuncDecl(name);
  }

  genSetPropDecl(cls, p) {
    const name = this.getSetPropertyFuncName(cls, p);
    return this.genFuncDecl(name);
  }

  genConstDecl(cls, c) {
    const name = c.name;
    return this.genFuncDecl(name, "get");
  }
  
  genParamsDecl(m) {
    let result = '';
    let returnType = m.return.type;

    if (returnType != 'void') {
      result = this.genParamDecl(-1, returnType, 'ret');
    }

    m.params.forEach((iter, index) => {
      result += this.genParamDecl(index, iter.type, iter.name);
    })

    return result;
  }

  freeParam(index, type, name) {
    let result = '';

    if (type.indexOf('char*') >= 0) {
      result += this.genFreeStr(name);
    } else if (type.indexOf('wchar_t*') >= 0) {
      result += `  TKMEM_FREE(ctx, ${name});\n`;
    }

    return result;
  }

  freeParams(m) {
    let result = '';

    m.params.forEach((iter, index) => {
      result += this.freeParam(index, iter.type, iter.name);
    })

    return result;
  }
  
  getGcDeconstructor(cls) {
    let gcDeconstructor = null;
    cls.methods.forEach(m => {
      if (this.isGcDeconstructor(m)) {
        gcDeconstructor = m;
      }
    });
    return gcDeconstructor;
  }

  genCallMethod(cls, m) {
    const ret_type = m.return.type;
    let result = ret_type == 'void' ? '  ' : '  ret = '
    result += `(${ret_type})${m.name}(`;
    m.params.forEach((iter, index) => {
      if (index > 0) {
        result += ', ' + iter.name;
      } else {
        result += iter.name;
      }
    })

    result += ');\n';
    result += this.freeParams(m);

    if (ret_type != 'void') {
      if (this.isConstructor(m) || this.isCast(m)) {
        if (this.isGcConstructor(m)) {
          result += this.genReturnData(this.getGcDeconstructor(cls), `${cls.name}*`, 'ret');
        } else {
          result += this.genReturnData(null, `${cls.name}*`, 'ret');
        }
      } else {
        result += this.genReturnData(null, ret_type, 'ret');
      }
    }

    return result;
  }

  genClassInit(cls) {
    let result = '';
    result += this.genClassInitDecl(cls);
    result += this.genGetGlobalObject();
    if (cls.methods) {
      cls.methods.forEach(iter => {
        const name = iter.name;
        if (!this.isGcDeconstructor(iter)) {
          result += this.genRegFunc('wrap', name);
        }
      });
    }

    if (cls.properties) {
      cls.properties.forEach((p) => {
        if (this.isWritable(p)) {
          const name = this.getSetPropertyFuncName(cls, p);
          result += this.genRegFunc('wrap', name);
        }

        if (this.isReadable(p)) {
          const name = this.getGetPropertyFuncName(cls, p);
          result += this.genRegFunc('wrap', name);
        }
      });
    }

    if (cls.consts) {
      cls.consts.forEach(iter => {
        const name = iter.name;
        result += this.genRegFunc('get', name);
      });
    }

    result += this.genFreeGlobalObject();
    result += '\n return RET_OK;\n';
    result += '}\n\n';

    return result;
  }

  genClass(cls) {
    let result = '';
    let isConstString = this.isEnumString(cls);
    if (cls.methods) {
      cls.methods.forEach(iter => {
        if (!this.isGcDeconstructor(iter)) {
          result += this.genFunc(cls, iter);
        }
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
        result += this.genConstDecl(cls, iter);
        result += this.genConstImpl(cls, iter);
        result += '}\n\n'
      });
    }

    result += this.genClassInit(cls);

    return result;
  }

  genFunc(cls, m) {
    let result = '';

    if (!this.isCustom(m)) {
      result += this.genMemberFuncDecl(cls, m);
      result += this.genFuncImpl(cls, m);
      result += '}\n\n'
    } else {
      let custom = this.genMemberFuncDecl(cls, m);
      custom += '}\n\n'
      //console.log(custom);
    }

    return result;
  }

  
  genSetProperty(cls, p) {
    let result = '';

    result += this.genSetPropDecl(cls, p);
    result += this.genSetPropImpl(cls, p);
    result += '};\n\n'

    return result;
  }

  genGetProperty(cls, p) {
    let result = '';

    result += this.genGetPropDecl(cls, p);
    result += this.genGetPropImpl(cls, p);
    result += '}\n\n'

    return result;
  }

  genGlobalMethod(m) {
    return this.genFunc({}, m);
  }

  genOne(cls) {
    if (cls.type == 'class' || cls.type == 'enum') {
      return this.genClass(cls);
    } else if (cls.type == 'method') {
      return this.genGlobalMethod(cls);
    }
  }

  genIncludes(json) {
    let result = '/*XXX: GENERATED CODE, DONT EDIT IT.*/\n';

    result += '#include "tkc/utf8.h"\n';
    result += '#include "tkc/mem.h"\n';
    result += this.genTargetIncludes();

    json.forEach(iter => {
      if (result.indexOf(iter.header) <= 0) {
        result += `#include "${iter.header}"\n`;
      }
    });

    result += `#include "custom.c"\n\n`;

    return result;
  }

  genJsonAll(ojson) {
    let json = this.filterScriptableJson(ojson);
    let result = this.genIncludes(json);
    
    result += this.genGlobalInfo(json);

    json.forEach(iter => {
      result += this.genOne(iter);
    });

    result += this.genInit(json);

    this.result = result;
  }
}

module.exports = BindingGen;

