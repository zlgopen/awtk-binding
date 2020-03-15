const fs = require('fs')
const CodeGen = require('../common/code_gen.js')
const PythonBindingGenerator = require('./python_binding.js');

class DefaultGenerator extends PythonBindingGenerator {
  constructor() {
    super();
  }

  genFuncArgs() {
    return `(pyobject_t self, pyobject_t pyargs)`;
  }

  genTargetIncludes() {
    let result = '';
    result += '#include "Python.h"\n';
    result += '#include "py_engine.h"\n';

    return result;
  }

  genFreeStr(name) {
    return '';
  }

  genRegFunc(prefix, name) {
    return '';
  }

  genGlobalInfo(json) {
    return '';
  }

  mapType(type, name) {
    let ret = {};
    let clsInfo = this.getClassInfo(this.typeToNativeName(type));
    let enumInfo = this.getEnumInfo(this.typeToNativeName(type));

    ret.parse = `, &${name}`;

    if (clsInfo) {
      ret.type = type;
      ret.signature = 'O&';
      ret.parse = `, &parse_voidp, &${name}`
      ret.isVoidP = true;
    } else if (enumInfo) {
      if (this.isEnumString(enumInfo)) {
        ret.signature = 's';
        ret.type = 'const char*';
      } else {
        ret.signature = 'i';
        ret.type = 'int32_t';
      }
    } else {
      if (this.typeIsString(type)) {
        ret.signature = 's';
        ret.type = 'const char*';
      } else if (this.typeIsWString(type)) {
        ret.signature = 'u';
        ret.type = 'const wchar_t*';
      } else if (this.typeIsBool(type)) {
        ret.signature = 'b';
        ret.type = 'bool_t';
      } else if (type === 'uint32_t') {
        ret.signature = 'i';
        ret.type = 'uint32_t';
      } else if (type === 'int32_t') {
        ret.signature = 'i';
        ret.type = 'int32_t';
      } else if (this.typeIsFloat(type)) {
        ret.signature = 'd';
        ret.type = 'double';
      } else if (type.indexOf('*') >= 0) {
        ret.type = type;
        ret.signature = 'O&';
        ret.parse = `, &parse_voidp, &${name}`
        ret.isVoidP = true;
      } else {
        ret.signature = 'i';
        ret.type = 'int32_t';
      }
    }

    return ret;
  }

  genGetParams(m) {
    let signature = '';
    let argsList = '';
    m.params.forEach((iter, index) => {
      let typeInfo = this.mapType(iter.type, iter.name);
      signature += typeInfo.signature;
      argsList += typeInfo.parse;
    });

    let result = `
  if (!PyArg_ParseTuple(pyargs, "${signature}" ${argsList})) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

`;

    return result;
  }

  genParamDecl(index, type, name) {
    let result = '';
    result += `  ${type} ${name} = `;

    if (type.indexOf('*') >= 0) {
      result += 'NULL;\n';
    } else {
      result += '0;\n';
    }

    return result;
  }

  genReturnData(deconstructor, type, name) {
    let typeInfo = this.mapType(type, name);
    let signature = typeInfo.signature;

    if (typeInfo.isVoidP) {
      return `  return PyLong_FromVoidPtr((void*)${name});\n`;
    } else {
      return `  return Py_BuildValue("${signature}", ${name});\n`;
    }
  }

  genConstImpl(cls, c) {
    let result = '';
    const name = c.name;
    const isConstString = this.isEnumString(cls);
    const signature = this.isEnumString(cls) ? 's' : 'i';

    return `  return Py_BuildValue("${signature}", ${name});\n`;
  }

  genParseObj() {
    return `
  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

`;
  }

  genGetPropImpl(cls, p) {
    let result = '';
    const type = p.type;
    const name = p.name;

    result += this.genParamDecl(0, cls.name + '*', 'obj');
    result += this.genParseObj();
    result += this.genReturnData(null, type, `obj->${name}`);

    return result;
  }

  genSetPropImpl(cls, p) {
    let result = '';
    const type = p.type;
    const name = p.name;
    const typeInfo = this.mapType(type, name);
    let m = {
      params: [{
        name: "obj",
        type: `${cls.name}*`
      }, {
        name: name,
        type: type
      }]
    };

    result += this.genParamDecl(0, cls.name + '*', 'obj');
    result += this.genParamDecl(1, typeInfo.type, name);
    result += this.genGetParams(m);

    result += `  obj->${name} = ${name};\n`;
    result += `  return Py_BuildValue("i", RET_OK);\n`;

    return result;
  }

  genInit(json) {
    let result = `
static PyMethodDef awtk_methods[] = {    
${this.regEntries}
{NULL, NULL, 0, NULL}};

#include "awtk_module_init.c"

`
    return result;
  }

  genClassInit(cls) {
    return '';
  }

  static gen() {
    const gen = new DefaultGenerator();

    gen.genAll(gen.getJsonIDL());
    gen.saveResult('output/awtk_module.c');
  }
}

DefaultGenerator.gen();
