const fs = require('fs')
const TargetGen = require('../common/target_gen.js')

class GoGenerator extends TargetGen {
  constructor() {
    super()
    this.BOM = '';
  }

  toFuncName(clsName, mName) {
    let prefix = clsName.replace(/_t$/, '');
    let name = mName.replace(prefix + '_', '');

    return this.upperCamelName(name);
  }

  genCallParam(param) {
    const name = param.name;
    const type = param.type;

    if (this.isEnumName(type)) {
      return `(C.${type})(${name})`;
    } else if (this.typeIsString(type)) {
      return `a${name}`
    } else if (type === 'void*') {
      return `(unsafe.Pointer)(${name})`;
    } else {
      return `(C.${type})(${name})`;
    }
  }

  genReturnEnum(enumInfo, result) {
    const isString = this.isEnumString(enumInfo);
    const name = this.toClassName(enumInfo.name);

    if (isString) {
      return `  return C.GoString(${result});\n`;
    } else {
      return `  return ${name}(${result});\n`;
    }
  }

  mapType(type) {
    let name = this.typeToName(type);
    let info = this.getClassOrEnumInfo(this.typeToNativeName(type));

    if (info != null) {
      if (info.type === 'class') {
        return name;
      } else if (info.type == 'enum') {
        if (this.isEnumString(info)) {
          return 'string';
        } else {
          return name;
        }
      }
    }

    if (this.typeIsLongInteger(type)) {
      return 'int64';
    } else if (type == "uint8_t") {
      return 'uint8';
    } else if (type == "uint16_t") {
      return 'uint16';
    } else if (type == "uint32_t") {
      return 'uint32';
    } else if (type == "int8_t") {
      return 'int8';
    } else if (type == "int16_t") {
      return 'int16';
    } else if (type == "int32_t") {
      return 'int32';
    } else if (type == "void*") {
      return 'unsafe.Pointer';
    } else if (this.typeIsInteger(type)) {
      return 'int';
    } else if (this.typeIsFloat(type)) {
      return 'float64';
    } else if (this.typeIsBool(type)) {
      return 'bool';
    } else if (type.indexOf('event_func_t') >= 0) {
      return 'TOnEvent';
    } else if (type.indexOf('tk_visit_t') >= 0) {
      return 'TOnWidget';
    } else if (type.indexOf('idle_func_t') >= 0) {
      return 'TOnIdle';
    } else if (type.indexOf('timer_func_t') >= 0) {
      return 'TOnTimer';
    } else if (this.typeIsString(type)) {
      return 'string';
    } else if (this.typeIsWString(type)) {
      return 'string';
    } else {
      console.log(type);
      return 'int64';
    }
  }

  mapTypeVar(type, name) {
    return name + ' ' + this.mapType(type)
  }

  genConst(cls, c) {
    const name = c.name;
    const shortName = name.replace(cls.prefix, "");

    if (this.isString(cls)) {
      return ` const ${shortName} = C.${name}()\n`
    } else {
      return ` const ${shortName} = C.${name}()\n`
    }
  }

  genParamsDecl(m) {
    let result = '';
    const isNormalMethod = this.isNormalMethod(m);

    m.params.forEach((iter, index) => {
      if (index == 0) {
        if (isNormalMethod) {
          return;
        }
      }

      if (result !== '') {
        result += ', ';
      }
      result += this.mapTypeVar(iter.type, iter.name, false);
    });

    return '(' + result + ')';
  }

  genFuncDecl(cls, m, name) {
    let retType = this.isCast(m) ? cls.name : m.return.type;
    return `${name}${this.genParamsDecl(m)} ${this.mapType(retType)}`;
  }

  genCallParamsDecl(m) {
    let result = '';
    let isNormalMethod = this.isNormalMethod(m);

    m.params.forEach((iter, index) => {
      const type = iter.type;
      const name = iter.name;

      if (index == 0) {
        if (isNormalMethod) {
          result += this.genGetNativeObj(type, this.thisArg, false);
          return;
        } else if (this.isCast(m)) {
          result += this.genGetNativeObj(type, name, true);
          return;
        }
      }

      if (result !== '') {
        result += ', ';
      }

      if (this.isClassName(iter.type)) {
        result += this.genGetNativeObj(type, name, false);
      } else {
        result += this.genCallParam(iter);
      }
    });

    return '(' + result + ')';
  }

  genGetNativeObj(type, name, isCast) {
    const typeName = type.replace(/\*/g, "").replace(/const /g, "");
    return `(*C.${typeName})(${name}.handle)`
  }

  genReturnObject(cls, m, arg) {
    const clsName = this.toClassName(this.getClassName(cls));
    const returnType = this.typeToNativeName(m.return.type);
    const type = this.toClassName(returnType)
    const is_ref = m.name && (m.name.endsWith('_ref') || m.name.endsWith('_ref_ex')); 

    let result = `  retObj := ${clsName}{}\n`
    if(is_ref) {
      result = `  retObj := ${type}{}\n`
    }
    result += `  retObj.handle = unsafe.Pointer(${arg})\n`
    if (clsName === type || this.isCast(m) || is_ref) {
      result += `  return retObj\n`
    } else {
      result += `  return retObj.${type}\n`
    }
    return result
  }

  genReturnValue(type, name) {
    const nativeType = this.mapType(type)
    if (this.typeIsString(type)) {
      return `  return C.GoString(${name});\n`;
    } else if (this.typeIsWString(type)) {
      let result = `  tstr := C.tk_utf8_dup_utf16(${name}, -1)\n`
      result += `  ret := C.GoString(tstr)\n`
      result += `  C.tk_free(unsafe.Pointer(tstr))\n`
      result += `  return ret\n`;
      return result;
    } else {
      return `  return (${nativeType})(${name});\n`;
    }
  }

  fixMethodParamsName(cls, m) {
    m.params.forEach((iter, index) => {
      //type is keyword
      if (iter.name == 'type') {
        iter.name = 'typex'
      }
    })
  }

  genCallMethod(cls, m) {
    let returnType = null;

    let result = `C.${m.name}${this.genCallParamsDecl(m)}`;

    if (this.isCast(m) || this.isConstructor(m)) {
      returnType = cls.name;
    } else {
      returnType = m.return.type.replace(/\*/g, "");
    }

    let classInfo = this.getClassInfo(returnType);
    let enumInfo = this.getEnumInfo(returnType);

    if (classInfo) {
      return this.genReturnObject(classInfo, m, result);
    } else if (enumInfo) {
      return this.genReturnEnum(enumInfo, result);
    } else {
      return this.genReturnValue(m.return.type, result);
    }

    return result;
  }

  genFuncParamsConvertion(cls, m) {
    let result = ''

    m.params.forEach((iter, index) => {
      const type = iter.type;
      const name = iter.name;
      if (this.typeIsString(type)) {
        result += `  a${name} := C.CString(${name})\n`
        result += `  defer C.free(unsafe.Pointer(a${name}))\n`
      }
    })

    return result;
  }

  genFunc(cls, m) {
    let result = 'func '
    const clsName = this.toClassName(this.getClassName(cls));
    const name = this.toFuncName(cls.name, m.alias || m.name);

    this.fixMethodParamsName(cls, m);
    if (this.isConstructor(m) || this.isCast(m) || this.isStatic(m)) {
      if (cls.name !== 'global_t') {
        result += clsName
      }
    } else {
      result += `(this ${clsName}) `;
    }

    result += `${this.genFuncDecl(cls, m, name)} {\n`;
    result += this.genFuncParamsConvertion(cls, m);
    result += this.genCallMethod(cls, m);
    result += '}\n\n'

    return result;
  }

  genGetProperty(cls, p) {
    const type = p.type;
    const retType = this.typeToName(type);
    const nativeType = this.typeToNativeName(type);
    const name = this.upperCamelName(this.toFuncName(cls.name, p.name));
    const funcName = this.getGetPropertyFuncName(cls, p);
    const enumInfo = this.getEnumInfo(nativeType);
    const classInfo = this.getClassInfo(nativeType);
    const clsName = this.toClassName(this.getClassName(cls));

    let result = `func (this ${clsName})`;

    if (name != 'Value') {
      result += ` Get${name}() ${this.mapType(type)} {\n`;
      let m = {}
      m.return = {}
      m.return.type = p.type;
      const callFunc = `(*C.${cls.name})(unsafe.Pointer(this.handle)).${p.name}`

      if (classInfo) {
        result += this.genReturnObject(classInfo, m, callFunc);
      } else if (enumInfo) {
        result += this.genReturnEnum(enumInfo, callFunc)
      } else {
        result += this.genReturnValue(p.type, callFunc);
      }
      result += '}\n\n'
    } else {
      result = ''
    }

    return result;
  }

  genSetProperty(cls, p) {
    return '';
  }

  genEnum(cls) {
    const isString = this.isEnumString(cls);
    const clsName = this.toClassName(cls.name);
    const type = isString ? 'string' : 'int';
    const gotype = isString ? 'string' : clsName;

    let result = `type ${clsName} ${type}\n`

    result += `const (\n`
    cls.consts.forEach((iter, index) => {
      result += `  ${iter.name} ${gotype} = C.${iter.name}\n`
    });
    result += `)\n`

    return result;
  }

  genClassBegin(cls) {
    let result = ''
    let clsName = this.toClassName(this.getClassName(cls));

    if (!this.isFake(cls)) {
      result += `type ${clsName} struct {\n`
      if (cls.parent) {
        result += `  ${this.toClassName(cls.parent)}\n`
      } else {
        result += `  handle unsafe.Pointer\n`
      }
      result += '}\n\n'
    }

    return result;
  }

  genClassEnd(cls) {
    return '';
  }

  genClass(cls) {
    let result = '';

    result += this.genClassBegin(cls);
    if (cls.methods) {
      cls.methods.forEach(iter => {
        if (this.isScriptable(iter) && !this.isCustom(iter)) {
          result += this.genFunc(cls, iter);
        }
      });
    }

    if (cls.properties) {
      cls.properties.forEach((p) => {
        if (this.isReadable(p) && !this.hasGetterFor(cls, p.name)) {
          result += this.genGetProperty(cls, p);
        }

        if (this.isWritable(p)) {
          result += this.genSetProperty(cls, p);
        } else if (this.hasSetterFor(cls, p.name)) {
          result += this.genSetPropertyWithSetter(cls, p);
        }
      });
    }

    if (cls.consts) {
      cls.consts.forEach(iter => {
        result += this.genConst(cls, iter);
      });
    }
    result += this.genClassEnd(cls);

    return result;
  }

  genJsonAll(ojson) {
    let json = this.filterScriptableJson(ojson);

    json.forEach(iter => {
      let name = this.upperCamelName(this.getClassName(iter));
      if (this.isScriptable(iter)) {
        this.result = this.genOne(iter);
        this.saveResult(`output/${this.classNamePrefix}${name}.go`);
      }
    });
  }

  static gen() {
    const gen = new GoGenerator();
    gen.genAll(gen.getJsonIDL());
  }
}

GoGenerator.gen();
