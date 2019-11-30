const fs = require('fs');

class CodeGen {
  typeToNativeName(type) {
    type = type.replace(/\*/g, "");
    return type.replace(/const /g, "");
  }

  typeIsFunction(type) {
   return type.indexOf('event_func_t') >= 0 
    || type.indexOf('tk_visit_t') >= 0 
    || type.indexOf('idle_func_t') >= 0 
    || type.indexOf('timer_func_t') >= 0;
  }

  typeIsInterger(type) {
    return type.indexOf('int') >= 0 || type.indexOf('ret_t') >= 0
      || type.indexOf('wh_t') >= 0 || type.indexOf("xy_t") >= 0
      || type.indexOf('font_size_t') >= 0;
  }

  typeIsFloat(type) {
    return type.indexOf('float') >= 0 || type.indexOf("double") >= 0;
  }
  
  typeIsNumber(type) {
    return this.typeIsInterger(type) || this.typeIsFloat(type);
  }
  
  typeIsBool(type) {
    return type.indexOf('bool_t') >= 0;
  }
  
  typeIsString(type) {
    return type.indexOf('char*') >= 0;
  }

  typeToName(type) {
    let name = this.typeToNativeName(type); 
    let cls = this.getClassOrEnumInfo(name);
    if(cls) {
      return this.toClassName(cls.name);
    } else {
      return null;
    }
  }

  camelCase(name) {
    if (name.indexOf('_') > 0) {
      name = name.replace(/(_)[a-z]/g, r => {
        if (r.length > 1) {
          r = r.substr(1);
        }

        return r.toUpperCase();
      });
    }

    return name;
  }

  upperCamelName(name) {
    name = name.replace(/_t$/, '');
    name = name.replace(/(^|_)[a-z]/g, r => {
      if (r.length > 1) {
        r = r.substr(1);
      }

      return r.toUpperCase();
    });

    return name;
  }

  CodeGen() {
    this.result = '';
  }

  isGcConstructor(obj) {
    return obj.annotation && (obj.annotation.constructor === true && obj.annotation.gc);
  }

  isGcDeconstructor(obj) {
    return obj.annotation && (obj.annotation.deconstructor === true && obj.annotation.gc);
  }


  isScriptable(obj) {
    return obj.annotation && obj.annotation.scriptable;
  }

  isFake(obj) {
    return obj.annotation && obj.annotation.fake;
  }

  isStatic(obj) {
    return obj.annotation && obj.annotation.static;
  }

  isReadable(obj) {
    return obj.annotation && obj.annotation.readable;
  }

  isWritable(obj) {
    return obj.annotation && obj.annotation.writable;
  }

  isPrivate(obj) {
    return obj.annotation && obj.annotation.private;
  }

  isCustom(obj) {
    return obj.annotation && obj.annotation.scriptable == 'custom';
  }

  isConstructor(obj) {
    return obj.annotation && obj.annotation.constructor === true;
  }

  isCast(obj) {
    return obj.annotation && obj.annotation.cast
  }

  isEnumString(obj) {
    return obj.annotation && obj.annotation.string === true;
  }

  isNormalMethod(m) {
    return !this.isCast(m) && !this.isStatic(m) && !this.isConstructor(m);
  }

  getClassInfo(name) {
    const json = this.json;

    for (let i = 0; i < json.length; i++) {
      let iter = json[i];
      if ((iter.type === 'class') && iter.name === name) {
        return iter;
      }
    }

    return null;
  }
  
  getClassOrEnumInfo(name) {
    const json = this.json;

    for (let i = 0; i < json.length; i++) {
      let iter = json[i];
      if ((iter.type === 'class' || iter.type == 'enum') && iter.name === name) {
        return iter;
      }
    }

    return null;
  }

  isClassName(name) {
    name = name.replace("*", "").replace("const ", "").replace(" ", "");
    return this.getClassInfo(name) !== null;
  }

  getClassName(cls) {
    return cls.alias || cls.name;
  }

  getParentClassName(cls) {
    return this.getClassName(this.getClassInfo(cls.parent));
  }

  filterScriptableJson(ojson) {
    let json = ojson.filter(this.isScriptable);

    json.forEach(iter => {
      if (iter.methods && iter.methods.length) {
        iter.methods = iter.methods.filter(this.isScriptable);
      }

      if (iter.properties && iter.properties.length) {
        iter.properties = iter.properties.filter(this.isScriptable);
      }
    })

    fs.writeFileSync('filter.json', JSON.stringify(json, null, '  '));
    this.json = json;

    return json;
  }

  genJsonAll(ojson) {}

  genAll(filename) {
    this.json = JSON.parse(fs.readFileSync(filename).toString());
    this.genJsonAll(this.json);
  }

  saveResult(filename) {
    fs.writeFileSync(filename, this.result);
    console.log(`write result to ${filename}`);
  }

  getJsonIDL() {
    return '../../../../awtk/tools/idl_gen/idl.json';
  }
}
module.exports = CodeGen;
