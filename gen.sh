#!/bin/bash

#js
cd tools/code_gen/js/
for f in quickjs.js  typescript.js jerryscript.js
do
  node $f
done
./gendoc.sh
cd -

cd tools/code_gen/js/output && tsc
cd -

#java
cd tools/code_gen/java && rm output/* && node java.js && node jni.js && node minijvm.js
./gendoc.sh
cd -

#cpp
cd tools/code_gen/cpp && rm output/* && node cpp_intf.js && node cpp_impl.js
./gendoc.sh
cd -

#lua
cd tools/code_gen/lua
node lua.js
cd -

