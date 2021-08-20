const fs = require('fs')
const TypescriptBaseGenerator = require('./typescript_base.js')

class TypescriptGenerator extends TypescriptBaseGenerator {
  constructor() {
    super()
  }
  
  genFuncNativeDecl(cls, m) {
    const returnType = this.mapType(m.return.type, true);
    return `declare function ${m.name}${this.genParamsDeclNative(m)} : ${returnType};\n`;
  }

  genGetPropNativeDecl(cls, p) {
    const returnType = this.mapType(p.type, true);
    const funcName = this.getGetPropertyFuncName(cls, p);
    return `declare function ${funcName}(nativeObj : any) : ${returnType};\n`;
  }

  genSetPropNativeDecl(cls, p) {
    const propType = this.mapTypeVar(p.type, 'v', true);
    const funcName = this.getSetPropertyFuncName(cls, p);
    return `declare function ${funcName}(nativeObj : any, ${propType}): TRet\n`;
  }

  genConstNativeDecl(cls, c) {
    return `declare function ${c.name}():any;\n`
  }

  genFuncsDeclBegin() {
    return `
export declare function print(str:any):any;
export declare function init(w:number, h:number,name: string, isDesktop:boolean):any;

`;
    return '';
  }
  
  genFuncsDeclEnd() {
    return '';
  }

  static gen() {
    const gen = new TypescriptGenerator();

    gen.genAll(gen.getJsonIDL());
    gen.saveResult('output/awtk.ts');
  }
}

TypescriptGenerator.gen();
