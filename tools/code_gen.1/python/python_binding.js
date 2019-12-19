const fs = require('fs')
const BindingGen = require('../common/binding_gen.js')

class PythonBindingGenerator extends BindingGen {
  constructor() {
    super();
    this.regEntries = '';
  }

  genGetParams(m) {
    return '';
  }

  genFuncImpl(cls, m) {
    let result = '';

    result += this.genParamsDecl(m);
    result += this.genGetParams(m);
    result += this.genCallMethod(cls, m);

    return result;
  }

  genReturnData(deconstructor, type, name) {
    return '';
  }

  genClassInitDecl(cls) {
    return '';
  }

  addRegEntry(name, prefix) {
    this.regEntries += `{"${name}", ${prefix}_${name}, METH_VARARGS, "${name}"},\n`;
  }

  getSetPropertyFuncName(cls, p) {
    return `${cls.name}_set_prop_${p.name}`;
  }

  getGetPropertyFuncName(cls, p) {
    return `${cls.name}_get_prop_${p.name}`;
  }

  genFuncDecl(name, prefix) {
    prefix = prefix || 'wrap';
    let funcName = `${prefix}_${name}`;

    this.addRegEntry(name, prefix);

    return `pyobject_t ${funcName}` + this.genFuncArgs() + ' {\n';
  }

}

module.exports = PythonBindingGenerator;