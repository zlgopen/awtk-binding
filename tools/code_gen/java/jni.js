const fs = require('fs')
const BindingGen = require('../common/binding_gen.js')

class JniGenerator extends BindingGen {
  constructor() {
    super();
  }

  mapType(type) {
    let name = this.typeToName(type);
    let info = this.getClassOrEnumInfo(this.typeToNativeName(type));

    if (info != null) {
      if (info.type === 'class') {
        return 'jlong';
      } else if (info.type == 'enum') {
        if (this.isEnumString(info)) {
          return 'jstring';
        } else {
          return 'jint';
        }
      }
    }

    if (this.typeIsLongInteger(type)) {
      return 'jlong';
    } else if (this.typeIsInteger(type)) {
      return 'jint';
    } else if (this.typeIsFloat(type)) {
      return 'jdouble';
    } else if (this.typeIsBool(type)) {
      return 'jboolean';
    } else if (this.typeIsFunction(type)) {
      return 'jobject';
    } else if (this.typeIsString(type)) {
      return 'jstring';
    } else if (this.typeIsWString(type)) {
      return 'jstring';
    } else {
      return 'jlong';
    }
  }

  genParamDecl(index, type, name) {
    let info = this.getClassInfo(this.typeToNativeName(type));

    if (name == 'ret') {
      let result = ``;
      if(type.indexOf('wchar_t*') >= 0) {
        result += '  str_t str;\n';
        result += '  jstring jstr;\n';
      }
      result += `  ${type} ${name};\n`;
      return result;
    } else if (info) {
      return `  ${type} ${name} = (${type})j${name};\n`;
    } else if (type.indexOf('char*') >= 0) {
      return `  ${type} ${name} = (char*)(*env)->GetStringUTFChars(env, j${name}, 0);\n`;
    } else {
      return '';
    }
  }

  genFreeStr(name) {
    return `  (*env)->ReleaseStringUTFChars(env, j${name}, ${name});\n`;
  }

  mapTypeVar(type, name) {
    if (this.getClassInfo(this.typeToNativeName(type))) {
      return this.mapType(type) + ' j' + name;
    } else if (type.indexOf('char*') >= 0) {
      return 'jstring j' + name;
    } else {
      return this.mapType(type) + ' ' + name;
    }
  }

  genTargetIncludes() {
    let result = '';
    result += '#include <jni.h>\n';

    return result;
  }

  genFuncDecl(cls, m) {
    let args = '';
    const name = m.name;
    const className = this.upperCamelName(cls.name || "global");
    const returnType = this.mapType(m.return.type);

    m.params.forEach((iter, index) => {
      args += ', ' + this.mapTypeVar(iter.type, iter.name);
    });

    return `JNIEXPORT ${returnType} JNICALL Java_${className}_${name}(JNIEnv* env,  jclass ajc${args}) { /*func*/\n`;
  }

  genGetPropDecl(cls, p) {
    const name = this.getGetPropertyFuncName(cls, p);
    const className = this.upperCamelName(cls.name);
    const returnType = this.mapType(p.type);

    return `JNIEXPORT ${returnType} JNICALL Java_${className}_${name}(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/\n`;
  }

  genSetPropDecl(cls, p) {
    const name = this.getSetPropertyFuncName(cls, p);
    const className = this.upperCamelName(cls.name);

    return `JNIEXPORT void JNICALL Java_${className}_${name} (JNIEnv* env,  jclass ajc, jlong jobj, ${this.mapTypeVar(p.type, 'value')}) {/*set*/\n`;
  }

  genConstDecl(cls, c) {
    const name = c.name;
    const isConstString = this.isEnumString(cls);
    const className = this.upperCamelName(cls.name);
    const returnType = isConstString ? 'jstring' : 'jint';
    return `JNIEXPORT ${returnType} JNICALL Java_${className}_${name}(JNIEnv* env,  jclass ajc) {/*const*/\n`;
  }

  genFuncImpl(cls, m) {
    let result = '';
    const name = m.name;
    const nr = m.params.length;
    const returnType = m.return.type;

    result += this.genParamsDecl(m);
    result += this.genCallMethod(cls, m);

    return result;
  }

  genGetPropImpl(cls, p) {
    let result = '';
    const name = `obj->${p.name}`;

    result += `  ${cls.name}* obj = (${cls.name}*)jobj;\n`;
    result += this.genReturnData(null, p.type, name);

    return result;
  }

  genConstImpl(cls, c) {
    let result = '';
    const name = c.name;
    const isConstString = this.isEnumString(cls);
    
    result += this.genReturnData(null, isConstString ? 'char*' : 'int', name);

    return result;
  }

  genSetPropImpl(cls, p) {
    const name = p.name;
    let result = '';
    result += this.genParamDecl(0, cls.name + '*', 'obj');
    result += this.genParamDecl(1, p.type, name);

    result += `  obj->${name} = value;\n`;

    return result;
  }

  genReturnData(deconstructor, type, name) {
    let result = '\n';

    if (type.indexOf('char*') >= 0) {
      result += `  return (*env)->NewStringUTF(env, ${name});\n`;
    } else if (type.indexOf('wchar_t*') >= 0) {
      result += `  str_init(&str, 0);\n`;
      result += `  str_from_wstr(&str, ${name});\n`;
      result += `  jstr = (*env)->NewStringUTF(env, str.str);\n`;
      result += `  str_reset(&str);\n`;
      result += `  return jstr;\n`;
    } else {
      result += `  return (${this.mapType(type)})(${name});\n`;
    }

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
    return '';
  }

  static gen() {
    const gen = new JniGenerator();

    gen.genAll(gen.getJsonIDL());
    gen.saveResult('output/tk_jni.c');
  }
}

JniGenerator.gen();

