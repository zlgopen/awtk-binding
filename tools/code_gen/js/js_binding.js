const fs = require('fs')
const CodeGen = require('../common/code_gen.js')

class JsBindingGenerator extends CodeGen {
  constructor() {
    super();
  }
  
  genFuncDecl(cls, m) {
    const name = m.name;
    return this.genFuncBegin(name);
  }

  genGetPropDecl(cls, p) {
    const name = this.getGetPropertyFuncName(cls, p);
    return this.genFuncBegin(name);
  }

  genSetPropDecl(cls, p) {
    const name = this.getSetPropertyFuncName(cls, p);
    return this.genFuncBegin(name);
  }

  genConstDecl(cls, c) {
    const name = c.name;
    return this.genFuncBegin(name, "get");
  }

  genFuncImpl(cls, m) {
    let result = '';
    const name = m.name;
    const nr = m.params.length;

    result += '  jsvalue_t jret = JS_NULL;\n';
    result += `  if(argc >= ${nr}) {\n`;
    result += this.genParamsDecl(m);
    result += this.genCallMethod(cls, m);
    result += '  }\n';
    result += '  return jret;\n';
    return result;
  }

  genGetPropImpl(cls, p) {
    let result = '';
    const type = p.type;
    const name = p.name;

    result += '  jsvalue_t jret = JS_NULL;\n';
    result += this.genParamDecl(0, cls.name + '*', 'obj');
    result += this.genReturnData(null, type, `obj->${name}`);
    result += '  return jret;\n';

    return result;
  }
  
  genConstImpl(cls, c) {
    let result = '';
    const name = c.name;
    const isConstString = this.isEnumString(cls);

    if (isConstString) {
      result = `  return jsvalue_create_string(ctx, ${name});\n`;
    } else {
      result = `  return jsvalue_create_int(ctx, ${name});\n`;
    }

    return result;
  }

  genSetPropImpl(cls, p) {
    let result = '';
    const type = p.type;
    const name = p.name;

    result += this.genParamDecl(0, cls.name + '*', 'obj');
    result += this.genParamDecl(1, type, name);
    result += `  obj->${name} = ${name};\n`;
    result += '  return jsvalue_create_int(ctx, RET_OK);\n'

    return result;
  }

  genParamDecl(index, type, name) {
    let result = '';
    result += `  ${type} ${name} = `;
    if (index < 0) {
      if (type.indexOf('*') >= 0) {
        result += 'NULL;\n';
      } else {
        result += '0;\n';
      }
    } else {
      if (type.indexOf('char*') >= 0) {
        result += `(${type})jsvalue_get_utf8_string(ctx, argv[${index}]);\n`;
      } else if (type.indexOf('wchar_t*') >= 0) {
        result += `(${type})jsvalue_get_wstring(ctx, argv[${index}]);\n`;
      } else if (type.indexOf('void*') >= 0) {
        if (name !== 'ctx') {
          result += `(${type})jsvalue_get_pointer(ctx, argv[${index}], "${type}");\n`;
        } else {
          result += ' NULL;\n';
        }
      } else if (type.indexOf('*') >= 0) {
        result += this.genGetObject(index, type, name);
      } else if (type.indexOf('float') >= 0 || type.indexOf('double') >= 0) {
        result += `(${type})jsvalue_get_number_value(ctx, argv[${index}]);\n`;
      } else if (type.indexOf('int') >= 0 || type.indexOf('xy_t') >= 0 || type.indexOf('wh_t') >= 0 ||
        type.indexOf('ret_t') >= 0) {
        result += `(${type})jsvalue_get_int_value(ctx, argv[${index}]);\n`;
      } else if (type.indexOf('bool_t') >= 0) {
        result += `(${type})jsvalue_get_boolean_value(ctx, argv[${index}]);\n`;
      } else if (type.indexOf('func_t') >= 0 || type.indexOf('visit_t') >= 0) {
        result += `(${type})jsvalue_get_pointer(ctx, argv[${index}], "${type}");\n`;
      } else {
        result += `(${type})jsvalue_get_number_value(ctx, argv[${index}]);\n`;
      }
    }

    return result;
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

  genReturnData(deconstructor, type, name) {
    let result = '\n';
    if (type.indexOf('char*') >= 0) {
      result += `  jret = jsvalue_create_string(ctx, ${name});\n`;
    } else if (type.indexOf('wchar_t*') >= 0) {
      result += `  jret = jsvalue_create_string_from_wstring(ctx, ${name});\n`;
    } else if (type.indexOf('*') >= 0) {
      const typeName = type.replace(/\*/g, "");
      let m = deconstructor;
      if (m) {
        result += this.genCreateObject(name, type, m.name);
      } else {
        result += `  jret = jsvalue_create_pointer(ctx, ${name}, "${type}");\n`;
      }
    } else if (type.indexOf('int') >= 0 || type.indexOf('ret_t') >= 0 ||
      type.indexOf('xy_t') >= 0 || type.indexOf('wh_t') >= 0) {
      result += `  jret = jsvalue_create_int(ctx, ${name});\n`;
    } else if (type.indexOf('bool_t') >= 0) {
      result += `  jret = jsvalue_create_bool(ctx, ${name});\n`;
    } else {
      result += `  jret = jsvalue_create_number(ctx, ${name});\n`;
    }

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

  genRegClass(cls) {
    let result = '';
    result += `ret_t ${cls.name}_init(JSContext *ctx) {\n`;
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

  genOneClass(cls) {
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

    result += this.genRegClass(cls);

    return result;
  }


  getSetPropertyFuncName(cls, p) {
    return `${cls.name}_set_prop_${p.name}`;
  }

  getGetPropertyFuncName(cls, p) {
    return `${cls.name}_get_prop_${p.name}`;
  }
  
  genFunc(cls, m) {
    let result = '';

    if (!this.isCustom(m)) {
      result += this.genFuncDecl(cls, m);
      result += this.genFuncImpl(cls, m);
      result += '}\n\n'
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

  genOneGlobalMethod(m) {
    return this.genFunc({}, m);
  }

  genOne(cls) {
    if (cls.type == 'class' || cls.type == 'enum') {
      return this.genOneClass(cls);
    } else if (cls.type == 'method') {
      return this.genOneGlobalMethod(cls);
    }
  }

  genIncludes(json) {
    let result = '/*XXX: GENERATED CODE, DONT EDIT IT.*/\n';

    result += '#include "tkc/utf8.h"\n';
    result += '#include "tkc/mem.h"\n';
    result += this.genJavascriptIncludes();

    json.forEach(iter => {
      if (result.indexOf(iter.header) <= 0) {
        result += `#include "${iter.header}"\n`;
      }
    });

    result += `#include "custom.c"\n\n`;

    return result;
  }


  genInit(json) {
    let result = 'ret_t awtk_js_init(JSContext *ctx) {\n';

    json.forEach(cls => {
      if (cls.type == 'class' || cls.type == 'enum') {
        result += `  ${cls.name}_init(ctx);\n`;
      }
    });
    result += '\n  return RET_OK;\n';
    result += '}\n\n';

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

module.exports = JsBindingGenerator;
