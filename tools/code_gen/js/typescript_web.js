const fs = require('fs')
const TypescriptBaseGenerator = require('./typescript_base.js')

function toConstGet(name) {
  return `get_${name}`
}

class TypescriptGenerator extends TypescriptBaseGenerator {
  constructor() {
    super()
  }

  ctypeToJsType(returnType) {
    if (returnType && returnType.indexOf("char*") >= 0) {
      return "string";
    } else {
      return "number";
    }
  }

  fixAllNames4Compatable(json) {
    console.log('fixAllNames4Compatable disable');
  }

  genFuncNativeDecl(cls, m) {
    const name = m.name;
    const returnType = m.return.type;
    let result = `const ${name} = Module.cwrap("${name}", \n`;
    result += `    "${this.ctypeToJsType(returnType)}", `;
    let args = m.params.map((iter, index) => {
      return this.ctypeToJsType(iter.type);
    });
    result += JSON.stringify(args, null, "");
    result += `);\n`;

    return result;
  }

  genGetPropNativeDecl(cls, p) {
    const returnType = p.type;
    const name = this.getGetPropertyFuncName(cls, p);

    let result = `const ${name} = Module.cwrap("${name}", \n`;
    result += `    "${this.ctypeToJsType(returnType)}", ["number"]);\n`;

    return result;
  }

  genSetPropNativeDecl(cls, p) {
    const returnType = p.type;
    const name = this.getSetPropertyFuncName(cls, p);

    let result = `const ${name} = Module.cwrap("${name}", \n`;
    result += `    "number", ["number", "${this.ctypeToJsType(returnType)}"]);\n`;

    return result;
  }

  genConstNativeDecl(cls, c) {
    const name = c.name;
    const returnType = this.isEnumString(cls) ? "char*" : "int";

    let result = `const ${name} = Module.cwrap("${toConstGet(name)}", \n`;
    result += `    "${this.ctypeToJsType(returnType)}", []);\n`;

    return result;
  }

  genFuncsDeclBegin() {
    return `
declare global {
    interface Window { Module: any; TBrowser:any; wstrToString:any; pointerToString:any}
}

var Module : any = window.Module || {};
var TBrowser: any = window.TBrowser || {};

function wrap_on_event(func:any) {
  return function(ctx:any, evt:any) {
    return func(evt, ctx);
  }
}
function wrap_on_visit(func:any) {
  return function(ctx:any, data:any) {
    return func(data, ctx);
  }
}

export function init(w:number, h:number, title:string, isDesktop:boolean) {
  console.log('init(for compatible)')
}
`;
  }
  genCallParam(param) {
    const name = param.name;
    if (param.type === 'event_func_t') {
      return `TBrowser.addFunction(wrap_on_event(${name}), "iii")`;
    } else if (param.type === 'tk_visit_t') {
      return `TBrowser.addFunction(wrap_on_visit(${name}), "iii")`;
    } else if (param.type.indexOf('func_t') > 0) {
      return `TBrowser.addFunction(${name}, "ii")`;
    } else {
      return name;
    }
  }

  genFuncsDeclEnd() {
    return '';
  }
  
  genWStrToString(arg) {
    return `window.wstrToString(${arg});\n`;
  }

  static gen() {
    const gen = new TypescriptGenerator();

    gen.genAll(gen.getJsonIDL());
    gen.saveResult('output/awtk_api.ts');
  }
}

TypescriptGenerator.gen();
