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
    return obj.annotation && obj.annotation.widget;
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
import {
  Text,
} from "./react-components";
import { StyleSheet } from "./misc";

require("./utils/requireImpl");

const App = "APP";
const RootText = "ROOTTEXT";
const VirtualText = "VIRTUALTEXT";
${constDecls}

export {
  App,
  Text,
  StyleSheet,
  RootText,
  AppRegistry,
  VirtualText,
${exportDecls}
};
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

    fs.writeFileSync('ouput/src/index.ts', this.genSrcIndex(classes));
    fs.writeFileSync('ouput/src/components/index.ts', this.genComponentIndex(classes));
    fs.writeFileSync('ouput/src/utils/createElement.ts', this.genCreateInstance(classes));
    this.genComponents(classes, 'ouput/src/components/');
  }

  static gen() {
    const gen = new ReactGenerator();
    gen.genAll(gen.getJsonIDL());
  }
}

ReactGenerator.gen();
