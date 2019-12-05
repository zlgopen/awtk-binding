#!/bin/bash

cd tools/code_gen/js/
for f in quickjs.js  typescript.js jerryscript.js
do
  node $f
done
cd -

cd tools/code_gen/js/output && tsc
cd -

cd tools/code_gen/java && node java.js && node jni.js
cd -

cd tools/code_gen/lua
node lua.js
cd -

