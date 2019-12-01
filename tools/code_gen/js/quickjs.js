const fs = require('fs')
const CodeGen = require('../common/code_gen.js')
const JsBindingGenerator = require('./js_binding.js');

class QuickJSGenerator extends JsBindingGenerator {
  constructor() {
    super();
  }

  genFuncBegin(name, prefix) {
    prefix = prefix || 'wrap';
    return `jsvalue_t ${prefix}_${name}` + this.genFuncArgs() + ' {\n';
  }

  genFuncArgs() {
    return `(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  )`;
  }

  genTargetIncludes() {
    let result = '';
    result += '#include "quickjs.h"\n';

    return result;
  }

  genFreeStr(name) {
    return `  jsvalue_free_str(ctx, ${name});\n`;
  }

  genGetGlobalObject() {
    return `  jsvalue_t global_obj = JS_GetGlobalObject(ctx);\n`;
  }

  genFreeGlobalObject() {
    return '\n jsvalue_unref(ctx, global_obj);\n';
  }

  genRegFunc(prefix, name) {
    return `  JS_SetPropertyStr(ctx, global_obj, "${name}",
                      JS_NewCFunction(ctx, ${prefix}_${name}, "${name}", 1));\n`;
  }
   
  genGlobalInfo(json) {
    return '';
  }

  genCreateObject(name, type, destroyFunc) {
    return `  jret = jsvalue_create_object(ctx, ${name}, "${type}", (tk_destroy_t)${destroyFunc});\n`;
  }
  
  genGetObject(index, type, name) {
    return `(${type})jsvalue_get_pointer(ctx, argv[${index}], "${type}");\n`;
  }

  static gen() {
    const gen = new QuickJSGenerator();

    gen.genAll(gen.getJsonIDL());
    gen.saveResult('output/tk_quickjs.c');
  }
}

QuickJSGenerator.gen();
