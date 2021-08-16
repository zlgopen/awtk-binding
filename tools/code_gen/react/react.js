const fs = require('fs')
const path = require('path')
const TargetGen = require('../common/target_gen.js')

class ReactGenerator extends TargetGen {
  constructor() {
    super()
  }

  genClass(cls) {
    console.log(cls.name);
    return;
  }

  isWidget(obj) {
    return obj.annotation && obj.annotation.widget && obj.annotation.design;
  }

  genComponentIndex(classes) {
    let importDecls = '';
    let exportDecls = '';
    classes.forEach(iter => {
      let tagName = this.upperCamelName(iter.name);
      let typeName = tagName.toUpperCase();
      importDecls += `import ${tagName} from "./${tagName}";\n`
      exportDecls += `  ${tagName},\n`
    });

    return `
import App from "./App";
import Root from "./Root";
import RootText from "./RootText";
${importDecls}

export {
  App,
  Root,
  RootText,
${exportDecls}
};
`
  }

  genSrcIndex(classes) {
    let constDecls = '';
    let exportDecls = '';
    classes.forEach(iter => {
      let tagName = this.upperCamelName(iter.name);
      let typeName = tagName.toUpperCase();
      constDecls += `const ${tagName} = "${typeName}";\n`
      exportDecls += `  ${tagName},\n`
    });

    return `
import AppRegistry from "./render";
import {app, RootView} from "./Router"

import {
  Text,
} from "./react-components";

const App = "APP";
const RootText = "ROOTTEXT";
const VirtualText = "VIRTUALTEXT";
${constDecls}

export {
  app,
  RootView,
  App,
  Text,
  RootText,
  AppRegistry,
  VirtualText,
${exportDecls}
};
`
  }
  genWidgetFactory(classes) {
    let createDecls = '';
    classes.forEach(iter => {
      let tagName = this.upperCamelName(iter.name);
      let typeName = tagName.toUpperCase();
      createDecls += `    ["${typeName}", awtk.T${tagName}.create as any],\n`
    });

    return ` 
import * as awtk from "awtk-nodejs";

let widgetFactory = new Map([
  ["RADIOBUTTON", awtk.TCheckButton.createRadio as any],
${createDecls}
]);

  export function getCreateWidget(type: string) {
    let create = widgetFactory.get(type);
    if(create) {
        return create;
    } else {
        console.log('not found create for ' + type);
        return awtk.TView.create;
    }
}
`
}
  genComponents(classes, pathPrefix) {
    let constDecls = '';
    let exportDecls = '';
    classes.forEach(iter => {
      let tagName = this.upperCamelName(iter.name);
      let typeName = tagName.toUpperCase();
      if(iter.name ==='window_t') {
        console.log('skip window.......')
        return;
      }

      let content = `
import AnyWidget from "./AnyWidget"

export default (p: any) => {
  return AnyWidget("${typeName}", p); 
};
`
      let filename = path.join(pathPrefix, tagName) + '.ts';
      console.log(`output to ${filename}`)
      fs.writeFileSync(filename, content);
    });
  }

  
  genCreateInstance(classes) {
    let importDecls = '';
    let createDecls = '';
    classes.forEach(iter => {
      let tagName = this.upperCamelName(iter.name);
      let typeName = tagName.toUpperCase();
      createDecls += `    ${typeName}: () => ${tagName}(props),\n`
      importDecls += `  ${tagName},\n`
    });

    return `
import {
  Root,
  App,
  RootText,
${importDecls}      
} from "../components/";
    
    // Creates an element with an element type, props and a root instance
function createElement(type: string, props: any): any {
  const COMPONENTS = { 
    APP: () => App(props),
    ROOT: () => Root(props),
    ROOTTEXT: () => RootText(props),
${createDecls}
    default: undefined
  };  
  return (COMPONENTS as any)[type]() || COMPONENTS.default;
}
    
export { createElement };
`
  }

  genJsonAll(ojson) {
    let json = this.filterScriptableJson(ojson);
    let classes = [];
    json.forEach(iter => {
      if (this.isScriptable(iter) && this.isWidget(iter)) {
        classes.push(iter);
      }
    });

    classes.push({name:'radio_button_t'});

    this.genComponents(classes, 'output/src/components/');
    fs.writeFileSync('output/src/index.ts', this.genSrcIndex(classes));
    fs.writeFileSync('output/src/components/index.ts', this.genComponentIndex(classes));
    fs.writeFileSync('output/src/utils/createElement.ts', this.genCreateInstance(classes));

    classes.pop();//remove radio
    fs.writeFileSync('output/src/backends/WidgetFactory.ts', this.genWidgetFactory(classes));
  }

  static gen() {
    const gen = new ReactGenerator();
    gen.genAll(gen.getJsonIDL());
  }
}

ReactGenerator.gen();
