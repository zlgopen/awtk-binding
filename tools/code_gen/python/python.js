const fs = require('fs')
const TargetGen = require('../common/target_gen.js')

class PythonGenerator extends TargetGen {
  constructor() {
    super()

    this.docPrefixFirst = '#';
    this.docPrefix = '#';
    this.docPrefixLast = '#';

    this.thisArg = 'self';
    this.classBlockBegin = ':\n';
    this.classBlockEnd = '';
    this.nullPtr = 'None'
    this.nullNativePtr = 'None'
    this.newOperator = '';
  }
  
  toFuncName(clsName, mName) {
    let prefix = clsName.replace(/_t$/, '');
    let name = mName.replace(prefix + '_', '');

    return name;
  }

  mapTypeVar(type, name) {
    return name;
  }

  genClassExtendsBase(cls) {
    return '(object)';
  }

  genClassExtends(cls) {
    return ` (${this.toClassName(this.getParentClassName(cls))})`
  }

  genGetNativeObj(type, name, isCast) {
    return `awtk_get_native_obj(${name})`;
  }

  genConstructor(cls) {
    let result = '';
    let clsName = this.toClassName(this.getClassName(cls));

    result += '  def __init__(self, nativeObj):\n';
    if (cls.parent) {
      const parentClassName = this.toClassName(cls.parent);
      result += `    super(${clsName}, self).__init__(nativeObj)\n`;
    } else {
      result += '    self.nativeObj = nativeObj;\n';
    }
    result += '\n';

    return result;
  }

  genConst(cls, c) {
    const name = c.name;
    const shortName = name.replace(cls.prefix, "");

    return `  ${shortName} = ${name}();\n`
  }

  genParamsDecl(m) {
    let result = '';
    let isNormalMethod = this.isNormalMethod(m);

    m.params.forEach((iter, index) => {
      if (index == 0) {
        if (isNormalMethod) {
          result += 'self';
          return;
        } else {
          result += 'cls';
        }
      }

      if (result !== '') {
        result += ', ';
      }
      result += this.mapTypeVar(iter.type, iter.name, false);
    });
    if (!m.params.length) {
      if (isNormalMethod) {
        result += 'self';
      } else {
        result += 'cls';
      }
    }
    return '(' + result + ')';
  }

  genFuncDecl(cls, m, name) {
    return `${name}${this.genParamsDecl(m)}`;
  }

  genFunc(cls, m) {
    let result = '';
    const name = this.toFuncName(cls.name, m.alias || m.name);

    if (this.isCast(m) || this.isStatic(m) || this.isConstructor(m)) {
      result += `  @classmethod\n`;
    }
    result += `  def ${this.genFuncDecl(cls, m, name)}: \n`;
    result += this.genCallMethod(cls, m);
    result += '\n';

    return result;
  }

  genSetPropertyWithSetter(cls, p) {
    let result = '';
    const name = this.toFuncName(cls.name, p.name);
    const setter = this.toFuncName(cls.name, "set_" + p.name);
    const funcName = this.getSetPropertyFuncName(cls, p);

    result += `  @${name}.setter\n`
    result += `  def ${name}(self, ${this.mapTypeVar(p.type, 'v')}):\n`;
    result += `   self.${setter}(v);\n`;
    result += '\n';

    return result;
  }

  genSetProperty(cls, p) {
    let result = '';
    const name = this.toFuncName(cls.name, p.name);
    const funcName = this.getSetPropertyFuncName(cls, p);

    result += `  @${name}.setter\n`
    result += `  def ${name}(self, ${this.mapTypeVar(p.type, 'v')}):\n`;
    result += `    ${funcName}(self.nativeObj, v);\n`;
    result += '\n';

    return result;
  }

  genGetProperty(cls, p) {
    let result = '';
    const type = p.type;
    const retType = this.typeToName(type);
    const name = this.toFuncName(cls.name, p.name);
    const funcName = this.getGetPropertyFuncName(cls, p);

    result += this.genPropDoc(p);
    result += `  @property\n`
    result += `  def ${name}(self):\n`;
    if (retType && this.typeIsPointer(type)) {
      result += `    return ${retType}(${funcName}(self.nativeObj));\n`;
    } else {
      result += `    return ${funcName}(self.nativeObj);\n`;
    }
    result += '\n';

    return result;
  }

  genClassInit(cls) {
    return '';
  }

  genEnum(cls) {
    let clsName = this.toClassName(cls.name);
    let result = this.genEnumDoc(cls);
    result += `class ${clsName}: \n`;

    if (cls.consts) {
      cls.consts.forEach(iter => {
        const name = iter.name;
        const shortName = name.replace(cls.prefix, "");
        result += this.genEnumItemDoc(iter);
        result += `  ${shortName} = ${name}();\n`
      });
    }

    return result;
  }

  genFuncsDecl(json) {
    let result = '';

    json.forEach(cls => {
      result += this.genDeclForCls(cls);
    });

    return result;
  }

  genDeclForCls(cls) {
    return '';
  }

  genJsonAll(ojson) {
    let result = `
from awtk_native import *;

def assets_init():
  return tk_assets_init();

def awtk_get_native_obj(obj):
    if(isinstance(obj, int)) :
        return obj;
    elif obj:
        return obj.nativeObj;
    else: 
      return 0

def setup(application_init, name, w, h, type):
  TGlobal.init(w, h, type, name, "./") 

  assets_init()
  application_init()

  TGlobal.run()
`
    let json = this.filterScriptableJson(ojson);
    result += this.genFuncsDecl(json);
    json.forEach(iter => {
      result += this.genOne(iter);
    });

    this.result = result;
  }

  static gen() {
    const gen = new PythonGenerator();

    gen.genAll(gen.getJsonIDL());
    gen.saveResult('output/awtk.py');
  }
}

PythonGenerator.gen();
