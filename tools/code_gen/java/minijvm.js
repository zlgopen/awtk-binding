const fs = require('fs')
const BindingGen = require('../common/binding_gen.js')

class MiniJVMGenerator extends BindingGen {
  constructor() {
    super();
    this.regEntries = '';
  }
  
  addRegEntry(clsName, jfuncName, signature, cfuncName) {
    if(this.regEntries) {
      this.regEntries += ',';
    }
    this.regEntries += `\n{"awtk/${clsName}",  "${jfuncName}",  "${signature}",  ${cfuncName}}`;
  }
  
  addRegFuncEntry(clsName, m, funcName) {
    let signature = '(';
    const typeInfo = this.mapType(m.return.type);

    m.params.forEach(iter => {
      let typeInfo = this.mapType(iter.type);
      signature += typeInfo.jvmDesc;
    });
    signature += ')';

    signature += typeInfo.jvmDesc;

    this.addRegEntry(clsName, m.name, signature, funcName);
  }
  
  addRegConstEntry(cls, c) {
    const isConstString = this.isEnumString(cls);
    const clsName = this.toClassName(cls.name);
    const funcName = this.genFuncName(clsName, c.name);

    if(isConstString) {
      this.addRegEntry(clsName, c.name, '()Ljava/lang/String;', funcName);
    } else {
      this.addRegEntry(clsName, c.name, '()I', funcName);
    }
  }
  
  addRegSetPropEntry(cls, p, jfuncName) {
    const clsName = this.toClassName(cls.name);
    const funcName = this.genFuncName(clsName, jfuncName);
    const typeInfo = this.mapType(p.type);
    const signature = `(${typeInfo.jvmDesc})I`;

    this.addRegEntry(clsName, jfuncName, signature, funcName);
  }
  
  addRegGetPropEntry(cls, p, jfuncName) {
    const clsName = this.toClassName(cls.name);
    const funcName = this.genFuncName(clsName, jfuncName);
    const typeInfo = this.mapType(p.type);
    const signature = `()${typeInfo.jvmDesc}`;

    this.addRegEntry(clsName, jfuncName, signature, funcName);
  }

  mapTypeInt(type) {
    return {
      type:type,
      jvmDesc:"I",
      getArg:"jni_ctx_get_int(&ctx)",
      returnResult: "jni_ctx_return_int(&ctx, (int32_t)(ret))"
    };
  }
  
  mapTypeInt64(type) {
    return {
      type:type,
      jvmDesc:"J",
      getArg:"jni_ctx_get_int64(&ctx)",
      returnResult: "jni_ctx_return_int64(&ctx, (int64_t)(ret))"
    };
  }
  
  mapTypeFloat(type) {
    return {
      type:type,
      jvmDesc:"F",
      getArg:"jni_ctx_get_float(&ctx)",
      returnResult: "jni_ctx_return_float(&ctx, (float)(ret))"
    };
  }
  
  mapTypeDouble(type) {
    return {
      type:type,
      jvmDesc:"F",
      getArg:"jni_ctx_get_double(&ctx)",
      returnResult: "jni_ctx_return_double(&ctx, (double)(ret))"
    };
  }
  
  mapTypeString(type) {
    return {
      type:type,
      jvmDesc:"Ljava/lang/String;",
      getArg:"jni_ctx_get_str(&ctx)",
      returnResult: "jni_ctx_return_str(&ctx, (char*)(ret))"
    };
  }
  
  mapTypeWString(type) {
    return {
      type:type,
      jvmDesc:"Ljava/lang/String;",
      getArg:"jni_ctx_get_str(&ctx)",
      returnResult: "jni_ctx_return_wstr(&ctx, (wchar_t*)(ret))"
    };
  }

  mapTypeObject(type) {
    return {
      type:type,
      jvmDesc:"J",
      getArg:"jni_ctx_get_object(&ctx)",
      returnResult: "jni_ctx_return_object(&ctx, (void*)(ret))"
    };
  }

  mapType(type) {
    let name = this.typeToName(type);
    let info = this.getClassOrEnumInfo(this.typeToNativeName(type));

    if (info != null) {
      if (info.type === 'class') {
        return this.mapTypeObject(type);
      } else if (info.type == 'enum') {
        if (this.isEnumString(info)) {
          return this.mapTypeString(type);
        } else {
          return this.mapTypeInt(type);
        }
      }
    }

    if (this.typeIsLongInteger(type)) {
       return this.mapTypeInt64(type);
    } else if (this.typeIsInteger(type)) {
       return this.mapTypeInt(type);
    } else if (this.typeIsFloat(type)) {
       return this.mapTypeFloat(type);
    } else if (this.typeIsBool(type)) {
       return this.mapTypeInt(type);
    } else if (this.typeIsFunction(type)) {
      /*TODO*/
      return this.mapTypeInt(type);
    } else if (this.typeIsString(type)) {
       return this.mapTypeString(type);
    } else if (this.typeIsWString(type)) {
       return this.mapTypeWString(type);
    } else {
      return this.mapTypeInt(type);
    }
  }

  genJniCtxInit() {
     return `  jni_ctx_t ctx = jni_ctx_init(runtime, clazz);\n\n`;
  }

  genParamDecl(index, type, name) {
    if(name === 'ret') {
      return this.genGeneralParamDecl(type, name);
    }
    
    const typeInfo = this.mapType(type);

    return `  ${type} ${name} = (${type})${typeInfo.getArg};\n`;
  }

  genFreeStr(name) {
    return `  TKMEM_FREE(${name});\n`
  }

  genIncludes(json) {
    let result = '';
    result += '#include <jvm.h>\n';
    result += '#include "awtk.h"\n';
    result += '#include "jvm_helper.h"\n\n';
    result += '#include "custom.c"\n\n';

    return result;
  }

  genFuncName(clsName, funcName) {
    return `awtk_${clsName}_${funcName}`;
  }

  genFuncDelc(cls, funcName) {
    const clsName = this.toClassName(cls.name);

    return `int ${this.genFuncName(clsName, funcName)}(Runtime *runtime, JClass *clazz) {\n`;
  }

  genMemberFuncDecl(cls, m) {
    const clsName = this.toClassName(cls.name);
    this.addRegFuncEntry(clsName, m, this.genFuncName(clsName, m.name)); 

    return this.genFuncDelc(cls, m.name);
  }

  genGetPropDecl(cls, p) {
    const name = this.getGetPropertyFuncName(cls, p);
    this.addRegGetPropEntry(cls, p, name);

    return this.genFuncDelc(cls, name);
  }

  genSetPropDecl(cls, p) {
    const name = this.getSetPropertyFuncName(cls, p);
    this.addRegSetPropEntry(cls, p, name);

    return this.genFuncDelc(cls, name);
  }

  genConstDecl(cls, c) {
    this.addRegConstEntry(cls, c);

    return this.genFuncDelc(cls, c.name);
  }

  genFuncImpl(cls, m) {
    const name = m.name;
    const nr = m.params.length;
    const returnType = m.return.type;
    let result = this.genJniCtxInit();

    result += this.genParamsDecl(m);
    result += this.genCallMethod(cls, m);

    return result;
  }

  genGetPropImpl(cls, p) {
    let result = this.genJniCtxInit();
    result += this.genParamDecl(0, cls.name + '*', 'obj');
    result += this.genReturnData(null, p.type, `obj->${p.name}`);

    return result;
  }

  genSetPropImpl(cls, p) {
    const name = p.name;
    let result = this.genJniCtxInit();
    result += this.genParamDecl(0, cls.name + '*', 'obj');
    result += this.genParamDecl(1, p.type, name);

    result += `  obj->${name} = ${name};\n\n`;
    result += '  return 0;\n'

    return result;
  }

  genConstImpl(cls, c) {
    const name = c.name;
    const isConstString = this.isEnumString(cls);

    let result = this.genJniCtxInit();
    result += this.genReturnData(null, isConstString ? 'char*' : 'int', name);

    return result;
  }

  genReturnData(deconstructor, type, name) {
    const typeInfo = this.mapType(type);
    let result = `  ${typeInfo.returnResult.replace('(ret)', `(${name})`)};\n\n`; 

    result += '  return 0;\n'

    return result;
  }

  genClassInit(cls) {
    return '';
  }

  getSetPropertyFuncName(cls, p) {
    return `${cls.name}_set_prop_${p.name}`;
  }

  getGetPropertyFuncName(cls, p) {
    return `${cls.name}_get_prop_${p.name}`;
  }

  genInit(json) {
    return `
static java_native_method s_metho_awtk_table[] = {
${this.regEntries}
};

s32 count_AwtkFuncTable() {
  return sizeof(s_metho_awtk_table) / sizeof(s_metho_awtk_table[0]);
}

__refer ptr_AwtkFuncTable() {
  return &s_metho_awtk_table[0];
}

void JNI_OnLoad(JniEnv *env) {
  env->native_reg_lib(ptr_AwtkFuncTable(), count_AwtkFuncTable());
}
`;
  }

  static gen() {
    const gen = new MiniJVMGenerator();

    gen.genAll(gen.getJsonIDL());

    gen.saveResult('output/jni_awtk.c');
  }
}

MiniJVMGenerator.gen();
