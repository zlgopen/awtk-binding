const fs = require('fs')
const BindingGen = require('../common/binding_gen.js')

class JsBindingGenerator extends BindingGen {
  constructor() {
    super();
  }

  genDeclJRet() {
    return '  jsvalue_t jret = JS_NULL;\n';
  }
  
  genReturnJRet() {
    return '  return jret;\n';
  }

  genFuncImpl(cls, m) {
    let result = '';
    const name = m.name;
    const nr = m.params.length;

    result += this.genDeclJRet();
    result += `  if(argc >= ${nr}) {\n`;
    result += this.genParamsDecl(m);
    result += this.genCallMethod(cls, m);
    result += '  }\n';
    result += this.genReturnJRet();

    return result;
  }

  genGetPropImpl(cls, p) {
    let result = '';
    const type = p.type;
    const name = p.name;

    result += this.genDeclJRet();
    result += this.genParamDecl(0, cls.name + '*', 'obj');
    result += this.genReturnData(null, type, `obj->${name}`);
    result += this.genReturnJRet();

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

    result += this.genDeclJRet();
    result += this.genParamDecl(0, cls.name + '*', 'obj');
    result += this.genParamDecl(1, type, name);
    result += `  obj->${name} = ${name};\n`;
    result += this.genReturnData(null, type, `obj->${name}`);
    result += this.genReturnJRet();

    return result;
  }

  genParamDecl(index, type, name) {
    let result = '';
    result += `  ${type} ${name} = `;
    if (index < 0) {
      if (type.indexOf('*') >= 0) {
        result += 'NULL;\n';
      } else {
        result += `(${type})0;\n`;
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
        result += `(${type})jsvalue_get_int_value(ctx, argv[${index}]);\n`;
      }
    }

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

  genInitDecl(name) {
    return `ret_t ${name}_init(JSContext *ctx) {\n`;
  }

  genClassInitDecl(cls) {
    return this.genInitDecl(cls.name);
  }

  getSetPropertyFuncName(cls, p) {
    return `${cls.name}_set_prop_${p.name}`;
  }

  getGetPropertyFuncName(cls, p) {
    return `${cls.name}_get_prop_${p.name}`;
  }

  genInit(json) {
    let result = this.genInitDecl('awtk_js'); 

    json.forEach(cls => {
      if (cls.type == 'class' || cls.type == 'enum') {
        result += `  ${cls.name}_init(ctx);\n`;
      }
    });
    result += '\n  return RET_OK;\n';
    result += '}\n\n';

    return result;
  }

}

module.exports = JsBindingGenerator;
