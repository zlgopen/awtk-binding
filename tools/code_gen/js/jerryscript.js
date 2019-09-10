const fs = require('fs')
const CodeGen = require('../common/code_gen.js')
const JsBindingGenerator = require('./js_binding.js');

class QuickJSGenerator extends JsBindingGenerator {
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
  
  genCreateObject(name, type, destroyFunc) {
    let result = `  static jerry_object_native_info_t info = {(jerry_object_native_free_callback_t)${destroyFunc}};\n`;
    result +=`  jret = jsvalue_create_object(ctx, ${name}, "${type}", &info);\n`;

    return result;
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
    const gen = new QuickJSGenerator();

    gen.genAll(gen.getJsonIDL());
    gen.saveResult('output/tk_jerryscript.c');
  }
}

QuickJSGenerator.gen();
