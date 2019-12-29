const fs = require('fs')
const CodeGen = require('../common/code_gen.js')
const JsBindingGenerator = require('./js_binding.js');

class NodeJSGenerator extends JsBindingGenerator {
  constructor() {
    super();
  }
  
  genInitDecl(name) {
    return `ret_t ${name}_init(v8::Local<v8::Object> ctx) {\n`;
  }

  genFuncDecl(name, prefix) {
    prefix = prefix || 'wrap';
    let result = `static void ${prefix}_${name}` + this.genFuncArgs() + ' {\n';
    result += '  JSContext* ctx = NULL; \n';
    result += '  int32_t argc = (int32_t)(argv.Length()); \n';
    return result;
  }

  genFuncArgs() {
    return `(const Nan::FunctionCallbackInfo<v8::Value>& argv)`;
  }

  genTargetIncludes() {
    let result = '';
    result += '#include "nan.h"\n';

    return result;
  }

  genFreeStr(name) {
    return `  jsvalue_free_str(ctx, ${name});\n`;
  }

  genGetGlobalObject() {
    return '';
  }

  genFreeGlobalObject() {
    return '';
  }

  genRegFunc(prefix, name) {
    const funcName = `${prefix}_${name}`
    return `  Nan::Export(ctx, "${name}", ${funcName});\n`;
  }
   
  genGlobalInfo(json) {
    return '';
  }

  genDeclJRet() {
    return ''
  }
  
  genReturnJRet() {
    return '  (void)argc;(void)ctx;\n';
  }
  /*https://github.com/nodejs/nan/blob/master/doc/new.md*/
  /*https://github.com/nodejs/nan/blob/master/test/cpp/news.cpp*/
  genReturnData(deconstructor, type, name) {
    let result = '\n';
    if (type.indexOf('char*') >= 0) {
      result += `  const char* str_temp = ${name};\n`;
      result += `  str_temp = (str_temp != NULL) ? str_temp : "";\n`;
      result += `  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();\n`;
    } else if (type.indexOf('wchar_t*') >= 0) {
      result += `  str_t str;\n`;
      result += `  str_init(&str, 0);\n`;
      result += `  str_from_wstr(&str, ${name});\n`;
      result += `  v8::Local<v8::String> jret= Nan::New((const char*)(str.str)).ToLocalChecked();\n`;
      result += `  str_reset(&str);\n`;
    } else if (type.indexOf('*') >= 0) {
      const typeName = type.replace(/\*/g, "");
      let m = deconstructor;
      if (m) {
        /*FIXME*/
      }
      result += `  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(${name})));\n`;
    } else if (type.indexOf('int') >= 0 || type.indexOf('ret_t') >= 0 ||
      type.indexOf('xy_t') >= 0 || type.indexOf('wh_t') >= 0) {
      result += `  v8::Local<v8::Int32> jret= Nan::New((int32_t)(${name}));\n`;
    } else if (type.indexOf('bool_t') >= 0) {
      result += `  v8::Local<v8::Boolean> jret= Nan::New((bool)(${name}));\n`;
    } else {
      result += `  v8::Local<v8::Int32> jret= Nan::New((int32_t)(${name}));\n`;
    }
    result += `  argv.GetReturnValue().Set(jret);\n`

    return result;
  }
  
  genConstImpl(cls, c) {
    let result = '';
    const name = c.name;
    const isConstString = this.isEnumString(cls);

    if (isConstString) {
      result += `  v8::Local<v8::String> jret= Nan::New((const char*)${name}).ToLocalChecked();\n`;
    } else {
      result += `  v8::Local<v8::Int32> jret= Nan::New((int32_t)${name});\n`;
    }
    result += `  argv.GetReturnValue().Set(jret);\n`;
    result += this.genReturnJRet();
    return result;
  }
  
  genGetObject(index, type, name) {
    return `(${type})jsvalue_get_pointer(ctx, argv[${index}], "${type}");\n`;
  }
  
  genPost(json) {
    return `
void Init(v8::Local<v8::Object> exports) {
  v8::Local<v8::Object> global =  Nan::GetCurrentContext()->Global();

  Nan::Export(exports, "init", wrap_awtk_init);
  Nan::Export(exports, "step", wrap_awtk_main_loop_step);

  awtk_js_init(global);
}

NODE_MODULE(awtk, Init)
`;
  }

  static gen() {
    const gen = new NodeJSGenerator();

    gen.genAll(gen.getJsonIDL());
    gen.saveResult('output/tk_nodejs.cc');
  }
}

NodeJSGenerator.gen();
