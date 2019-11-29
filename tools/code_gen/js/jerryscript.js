const fs = require('fs')
const CodeGen = require('../common/code_gen.js')
const JsBindingGenerator = require('./js_binding.js');

class JerryscriptGenerator extends JsBindingGenerator {
  constructor() {
    super();
  }

  genFuncArgs() {
    return `(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t argv[], 
    const jerry_length_t argc 
  ) {\n
    void* ctx = NULL;
  `;
  }

  genJavascriptIncludes() {
    let result = '';
    result += '#include "jerryscript.h"\n';
    result += '#include "jerryscript-ext/handler.h"\n';

    return result;
  }

  genFreeStr(name) {
    return `  TKMEM_FREE(${name});\n`;
  }

  genGlobalInfo(json) {
    let result = '';
    json.forEach(cls => {
      if (cls.methods) {
        cls.methods.forEach(m => {
          if (this.isGcDeconstructor(m)) {
            result += `static jerry_object_native_info_t s_${m.name}_info = {
  (jerry_object_native_free_callback_t)${m.name}
};
`;
            cls.gc = m.name;
          }
        });
      }
    });

    return result;
  }

  genCreateObject(name, type, destroyFunc) {
    return `  jret = jsvalue_create_object(ctx, ${name}, "${type}", &s_${destroyFunc}_info);\n`;
  }

  genGetObject(index, type, name) {
    return `(${type})jsvalue_get_pointer(ctx, argv[${index}], "${type}");\n`;
  }

  genGetGlobalObject() {
    return '';
  }

  genFreeGlobalObject() {
    return '';
  }

  genRegFunc(prefix, name) {
    return `  jerryx_handler_register_global((const jerry_char_t*)"${name}", ${prefix}_${name});\n`;
  }

  static gen() {
    const gen = new JerryscriptGenerator();

    gen.genAll(gen.getJsonIDL());
    gen.saveResult('output/tk_jerryscript.c');
  }
}

JerryscriptGenerator.gen();