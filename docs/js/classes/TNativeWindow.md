[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TNativeWindow

# Class: TNativeWindow

原生窗口。

## Extends

- [`TObject`](TObject.md)

## Constructors

### new TNativeWindow()

> **new TNativeWindow**(`nativeObj`): [`TNativeWindow`](TNativeWindow.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TNativeWindow`](TNativeWindow.md)

#### Overrides

[`TObject`](TObject.md).[`constructor`](TObject.md#constructors)

#### Defined in

[awtk.ts:28393](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L28393)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TObject`](TObject.md).[`nativeObj`](TObject.md#nativeobj)

#### Defined in

[awtk.ts:28392](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L28392)

## Accessors

### name

> `get` **name**(): `string`

对象的名称。

> `set` **name**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TObject`](TObject.md).[`name`](TObject.md#name)

#### Defined in

[awtk.ts:3695](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3695)

***

### refCount

> `get` **refCount**(): `number`

引用计数。

#### Returns

`number`

#### Inherited from

[`TObject`](TObject.md).[`refCount`](TObject.md#refcount)

#### Defined in

[awtk.ts:3686](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3686)

## Methods

### canExec()

> **canExec**(`name`, `args`): `boolean`

检查是否可以执行指定的命令。

#### Parameters

• **name**: `string`

命令的名称。

• **args**: `string`

命令的参数。

#### Returns

`boolean`

返回TRUE表示可以执行，否则表示不可以执行。

#### Inherited from

[`TObject`](TObject.md).[`canExec`](TObject.md#canexec)

#### Defined in

[awtk.ts:3241](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3241)

***

### canExecByPath()

> **canExecByPath**(`path`, `args`): `boolean`

检查是否可以执行指定的命令。

#### Parameters

• **path**: `string`

命令的path。

• **args**: `string`

命令的参数。

#### Returns

`boolean`

返回TRUE表示可以执行，否则表示不可以执行。

#### Inherited from

[`TObject`](TObject.md).[`canExecByPath`](TObject.md#canexecbypath)

#### Defined in

[awtk.ts:3445](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3445)

***

### center()

> **center**(): [`TRet`](../enumerations/TRet.md)

窗口居中。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28478](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L28478)

***

### clearProps()

> **clearProps**(): [`TRet`](../enumerations/TRet.md)

清除全部属性。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`clearProps`](TObject.md#clearprops)

#### Defined in

[awtk.ts:3677](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3677)

***

### compare()

> **compare**(`other`): `number`

比较两个对象。

#### Parameters

• **other**: [`TObject`](TObject.md)

比较的object对象。

#### Returns

`number`

返回比较结果。

#### Inherited from

[`TObject`](TObject.md).[`compare`](TObject.md#compare)

#### Defined in

[awtk.ts:2973](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2973)

***

### copyProp()

> **copyProp**(`src`, `name`): [`TRet`](../enumerations/TRet.md)

拷贝指定的属性。

#### Parameters

• **src**: [`TObject`](TObject.md)

源对象。

• **name**: `string`

属性的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`copyProp`](TObject.md#copyprop)

#### Defined in

[awtk.ts:3190](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3190)

***

### copyProps()

> **copyProps**(`src`, `overwrite`): [`TRet`](../enumerations/TRet.md)

拷贝全部的属性。

#### Parameters

• **src**: [`TObject`](TObject.md)

源对象。

• **overwrite**: `boolean`

如果属性存在是否覆盖。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`copyProps`](TObject.md#copyprops)

#### Defined in

[awtk.ts:3203](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3203)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`destroy`](TObject.md#destroy)

#### Defined in

[awtk.ts:2555](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2555)

***

### disable()

> **disable**(): [`TRet`](../enumerations/TRet.md)

禁用。

禁用后emitter_dispatch无效，但可以注册和注销。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`disable`](TObject.md#disable)

#### Defined in

[awtk.ts:2544](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2544)

***

### dispatch()

> **dispatch**(`e`): [`TRet`](../enumerations/TRet.md)

分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
禁用状态下，本函数不做任何事情。

#### Parameters

• **e**: [`TEvent`](TEvent.md)

事件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Inherited from

[`TObject`](TObject.md).[`dispatch`](TObject.md#dispatch)

#### Defined in

[awtk.ts:2480](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2480)

***

### dispatchSimpleEvent()

> **dispatchSimpleEvent**(`type`): [`TRet`](../enumerations/TRet.md)

分发事件。
> 对emitter_dispatch的包装，分发一个简单的事件。
如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Parameters

• **type**: `number`

事件类型。

#### Returns

[`TRet`](../enumerations/TRet.md)

#### Inherited from

[`TObject`](TObject.md).[`dispatchSimpleEvent`](TObject.md#dispatchsimpleevent)

#### Defined in

[awtk.ts:2494](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2494)

***

### enable()

> **enable**(): [`TRet`](../enumerations/TRet.md)

启用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`enable`](TObject.md#enable)

#### Defined in

[awtk.ts:2531](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2531)

***

### eval()

> **eval**(`expr`, `v`): [`TRet`](../enumerations/TRet.md)

计算一个表达式，表达式中引用的变量从prop中获取。

#### Parameters

• **expr**: `string`

表达式。

• **v**: [`TValue`](TValue.md)

返回计算结果。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`eval`](TObject.md#eval)

#### Defined in

[awtk.ts:3228](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3228)

***

### execute()

> **execute**(`name`, `args`): [`TRet`](../enumerations/TRet.md)

执行指定的命令。

#### Parameters

• **name**: `string`

命令的名称。

• **args**: `string`

命令的参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`execute`](TObject.md#execute)

#### Defined in

[awtk.ts:3254](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3254)

***

### executeByPath()

> **executeByPath**(`path`, `args`): [`TRet`](../enumerations/TRet.md)

执行指定的命令。

#### Parameters

• **path**: `string`

命令的path。

• **args**: `string`

命令的参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`executeByPath`](TObject.md#executebypath)

#### Defined in

[awtk.ts:3458](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3458)

***

### getDesc()

> **getDesc**(): `string`

获取对象的描述信息。

#### Returns

`string`

返回对象的描述信息。

#### Inherited from

[`TObject`](TObject.md).[`getDesc`](TObject.md#getdesc)

#### Defined in

[awtk.ts:2927](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2927)

***

### getProp()

> **getProp**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

获取指定属性的值。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: [`TValue`](TValue.md)

返回属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`getProp`](TObject.md#getprop)

#### Defined in

[awtk.ts:2986](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2986)

***

### getPropBool()

> **getPropBool**(`name`, `defval`): `boolean`

获取指定属性的bool类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `boolean`

缺省值。

#### Returns

`boolean`

返回指定属性的bool类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropBool`](TObject.md#getpropbool)

#### Defined in

[awtk.ts:3048](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3048)

***

### getPropBoolByPath()

> **getPropBoolByPath**(`path`, `defval`): `boolean`

获取指定属性的bool类型的值。

#### Parameters

• **path**: `string`

属性的path。

• **defval**: `boolean`

缺省值。

#### Returns

`boolean`

返回指定属性的bool类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropBoolByPath`](TObject.md#getpropboolbypath)

#### Defined in

[awtk.ts:3339](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3339)

***

### getPropDouble()

> **getPropDouble**(`name`, `defval`): `number`

获取指定属性的浮点数类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的浮点数类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropDouble`](TObject.md#getpropdouble)

#### Defined in

[awtk.ts:3074](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3074)

***

### getPropFloat()

> **getPropFloat**(`name`, `defval`): `number`

获取指定属性的浮点数类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的浮点数类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropFloat`](TObject.md#getpropfloat)

#### Defined in

[awtk.ts:3061](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3061)

***

### getPropFloatByPath()

> **getPropFloatByPath**(`path`, `defval`): `number`

获取指定属性的浮点数类型的值。

e

#### Parameters

• **path**: `string`

属性的path。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的浮点数类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropFloatByPath`](TObject.md#getpropfloatbypath)

#### Defined in

[awtk.ts:3354](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3354)

***

### getPropInt()

> **getPropInt**(`name`, `defval`): `number`

获取指定属性的整数类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的整数类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropInt`](TObject.md#getpropint)

#### Defined in

[awtk.ts:3035](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3035)

***

### getPropInt16()

> **getPropInt16**(`name`, `defval`): `number`

获取指定属性的int16类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的int16类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropInt16`](TObject.md#getpropint16)

#### Defined in

[awtk.ts:3523](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3523)

***

### getPropInt32()

> **getPropInt32**(`name`, `defval`): `number`

获取指定属性的int32类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的int32类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropInt32`](TObject.md#getpropint32)

#### Defined in

[awtk.ts:3575](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3575)

***

### getPropInt64()

> **getPropInt64**(`name`, `defval`): `number`

获取指定属性的int64类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的int64类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropInt64`](TObject.md#getpropint64)

#### Defined in

[awtk.ts:3627](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3627)

***

### getPropInt8()

> **getPropInt8**(`name`, `defval`): `number`

获取指定属性的int8类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的int8类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropInt8`](TObject.md#getpropint8)

#### Defined in

[awtk.ts:3471](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3471)

***

### getPropIntByPath()

> **getPropIntByPath**(`path`, `defval`): `number`

获取指定属性的整数类型的值。

#### Parameters

• **path**: `string`

属性的path。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的整数类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropIntByPath`](TObject.md#getpropintbypath)

#### Defined in

[awtk.ts:3326](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3326)

***

### getPropObject()

> **getPropObject**(`name`): [`TObject`](TObject.md)

获取指定属性的object类型的值。

#### Parameters

• **name**: `string`

属性的名称。

#### Returns

[`TObject`](TObject.md)

返回指定属性的object类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropObject`](TObject.md#getpropobject)

#### Defined in

[awtk.ts:3022](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3022)

***

### getPropObjectByPath()

> **getPropObjectByPath**(`path`): [`TObject`](TObject.md)

获取指定属性的object类型的值。

#### Parameters

• **path**: `string`

属性的path。

#### Returns

[`TObject`](TObject.md)

返回指定属性的object类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropObjectByPath`](TObject.md#getpropobjectbypath)

#### Defined in

[awtk.ts:3313](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3313)

***

### getPropPointer()

> **getPropPointer**(`name`): `any`

获取指定属性的指针类型的值。

#### Parameters

• **name**: `string`

属性的名称。

#### Returns

`any`

返回指定属性的指针类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropPointer`](TObject.md#getproppointer)

#### Defined in

[awtk.ts:3010](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3010)

***

### getPropPointerByPath()

> **getPropPointerByPath**(`path`): `any`

获取指定属性的指针类型的值。

#### Parameters

• **path**: `string`

属性的path。

#### Returns

`any`

返回指定属性的指针类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropPointerByPath`](TObject.md#getproppointerbypath)

#### Defined in

[awtk.ts:3301](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3301)

***

### getPropStr()

> **getPropStr**(`name`): `string`

获取指定属性的字符串类型的值。

#### Parameters

• **name**: `string`

属性的名称。

#### Returns

`string`

返回指定属性的字符串类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropStr`](TObject.md#getpropstr)

#### Defined in

[awtk.ts:2998](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2998)

***

### getPropStrByPath()

> **getPropStrByPath**(`path`): `string`

获取指定属性的字符串类型的值。

#### Parameters

• **path**: `string`

属性的path。

#### Returns

`string`

返回指定属性的字符串类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropStrByPath`](TObject.md#getpropstrbypath)

#### Defined in

[awtk.ts:3289](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3289)

***

### getPropUint16()

> **getPropUint16**(`name`, `defval`): `number`

获取指定属性的uint16类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的uint16类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropUint16`](TObject.md#getpropuint16)

#### Defined in

[awtk.ts:3549](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3549)

***

### getPropUint32()

> **getPropUint32**(`name`, `defval`): `number`

获取指定属性的uint32类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的uint32类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropUint32`](TObject.md#getpropuint32)

#### Defined in

[awtk.ts:3601](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3601)

***

### getPropUint64()

> **getPropUint64**(`name`, `defval`): `number`

获取指定属性的uint64类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的uint64类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropUint64`](TObject.md#getpropuint64)

#### Defined in

[awtk.ts:3653](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3653)

***

### getPropUint8()

> **getPropUint8**(`name`, `defval`): `number`

获取指定属性的uint8类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的uint8类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropUint8`](TObject.md#getpropuint8)

#### Defined in

[awtk.ts:3497](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3497)

***

### getSize()

> **getSize**(): `number`

获取对象占用内存的大小。

#### Returns

`number`

返回对象占用内存的大小。

#### Inherited from

[`TObject`](TObject.md).[`getSize`](TObject.md#getsize)

#### Defined in

[awtk.ts:2938](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2938)

***

### getType()

> **getType**(): `string`

获取对象的类型名称。

#### Returns

`string`

返回对象的类型名称。

#### Inherited from

[`TObject`](TObject.md).[`getType`](TObject.md#gettype)

#### Defined in

[awtk.ts:2916](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2916)

***

### hasProp()

> **hasProp**(`name`): `boolean`

检查是否存在指定的属性。

#### Parameters

• **name**: `string`

属性的名称。

#### Returns

`boolean`

返回TRUE表示存在，否则表示不存在。

#### Inherited from

[`TObject`](TObject.md).[`hasProp`](TObject.md#hasprop)

#### Defined in

[awtk.ts:3215](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3215)

***

### hasPropByPath()

> **hasPropByPath**(`path`): `boolean`

检查是否存在指定的属性。

#### Parameters

• **path**: `string`

属性的path，各级之间用.分隔。

#### Returns

`boolean`

返回TRUE表示存在，否则表示不存在。

#### Inherited from

[`TObject`](TObject.md).[`hasPropByPath`](TObject.md#haspropbypath)

#### Defined in

[awtk.ts:3277](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3277)

***

### isCollection()

> **isCollection**(): `boolean`

判断对象是否是集合。

#### Returns

`boolean`

返回TRUE表示是集合，否则不是。

#### Inherited from

[`TObject`](TObject.md).[`isCollection`](TObject.md#iscollection)

#### Defined in

[awtk.ts:2949](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2949)

***

### maximize()

> **maximize**(): [`TRet`](../enumerations/TRet.md)

最大化窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28456](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L28456)

***

### minimize()

> **minimize**(): [`TRet`](../enumerations/TRet.md)

最小化窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28445](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L28445)

***

### move()

> **move**(`x`, `y`, `force`): [`TRet`](../enumerations/TRet.md)

移动窗口。

#### Parameters

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

• **force**: `boolean`

无论是否shared都move。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28407](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L28407)

***

### notifyChanged()

> **notifyChanged**(): [`TRet`](../enumerations/TRet.md)

触发EVT_PROPS_CHANGED事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`notifyChanged`](TObject.md#notifychanged)

#### Defined in

[awtk.ts:3265](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3265)

***

### off()

> **off**(`id`): [`TRet`](../enumerations/TRet.md)

注销指定事件的处理函数。

#### Parameters

• **id**: `number`

emitter_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`off`](TObject.md#off)

#### Defined in

[awtk.ts:2520](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2520)

***

### on()

> **on**(`etype`, `handler`, `ctx`): `number`

注册指定事件的处理函数。

#### Parameters

• **etype**: `number`

事件类型。

• **handler**: `Function`

事件处理函数。

• **ctx**: `any`

事件处理函数上下文。

#### Returns

`number`

返回id，用于emitter_off。

#### Inherited from

[`TObject`](TObject.md).[`on`](TObject.md#on)

#### Defined in

[awtk.ts:2508](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2508)

***

### removeProp()

> **removeProp**(`name`): [`TRet`](../enumerations/TRet.md)

删除指定属性。

#### Parameters

• **name**: `string`

属性的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`removeProp`](TObject.md#removeprop)

#### Defined in

[awtk.ts:3086](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3086)

***

### resize()

> **resize**(`w`, `h`, `force`): [`TRet`](../enumerations/TRet.md)

调整窗口大小。

#### Parameters

• **w**: `number`

宽。

• **h**: `number`

高。

• **force**: `boolean`

无论是否shared都resize。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28421](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L28421)

***

### restore()

> **restore**(): [`TRet`](../enumerations/TRet.md)

恢复窗口大小。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28467](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L28467)

***

### setCursor()

> **setCursor**(`name`, `img`): [`TRet`](../enumerations/TRet.md)

设置鼠标光标。

#### Parameters

• **name**: `string`

鼠标光标的名称。

• **img**: [`TBitmap`](TBitmap.md)

鼠标光标的图片。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28530](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L28530)

***

### setFullscreen()

> **setFullscreen**(`fullscreen`): [`TRet`](../enumerations/TRet.md)

是否全屏。

#### Parameters

• **fullscreen**: `boolean`

是否全屏。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28517](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L28517)

***

### setName()

> **setName**(`name`): [`TRet`](../enumerations/TRet.md)

设置对象的名称。

#### Parameters

• **name**: `string`

对象的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setName`](TObject.md#setname)

#### Defined in

[awtk.ts:2961](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2961)

***

### setOrientation()

> **setOrientation**(`old_orientation`, `new_orientation`): [`TRet`](../enumerations/TRet.md)

调整窗口旋转。

#### Parameters

• **old\_orientation**: `any`

旧的旋转角度。

• **new\_orientation**: `any`

新的旋转角度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28434](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L28434)

***

### setProp()

> **setProp**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: [`TValue`](TValue.md)

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setProp`](TObject.md#setprop)

#### Defined in

[awtk.ts:3099](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3099)

***

### setPropBool()

> **setPropBool**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的bool类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropBool`](TObject.md#setpropbool)

#### Defined in

[awtk.ts:3151](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3151)

***

### setPropBoolByPath()

> **setPropBoolByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的bool类型的值。

#### Parameters

• **path**: `string`

属性的path。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropBoolByPath`](TObject.md#setpropboolbypath)

#### Defined in

[awtk.ts:3419](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3419)

***

### setPropByPath()

> **setPropByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的值。

#### Parameters

• **path**: `string`

属性的path。

• **value**: [`TValue`](TValue.md)

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropByPath`](TObject.md#setpropbypath)

#### Defined in

[awtk.ts:3367](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3367)

***

### setPropDouble()

> **setPropDouble**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的浮点数类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropDouble`](TObject.md#setpropdouble)

#### Defined in

[awtk.ts:3177](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3177)

***

### setPropFloat()

> **setPropFloat**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的浮点数类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropFloat`](TObject.md#setpropfloat)

#### Defined in

[awtk.ts:3164](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3164)

***

### setPropFloatByPath()

> **setPropFloatByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的浮点数类型的值。

#### Parameters

• **path**: `string`

属性的path。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropFloatByPath`](TObject.md#setpropfloatbypath)

#### Defined in

[awtk.ts:3432](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3432)

***

### setPropInt()

> **setPropInt**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的整数类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropInt`](TObject.md#setpropint)

#### Defined in

[awtk.ts:3138](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3138)

***

### setPropInt16()

> **setPropInt16**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的int16类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropInt16`](TObject.md#setpropint16)

#### Defined in

[awtk.ts:3536](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3536)

***

### setPropInt32()

> **setPropInt32**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的int32类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropInt32`](TObject.md#setpropint32)

#### Defined in

[awtk.ts:3588](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3588)

***

### setPropInt64()

> **setPropInt64**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的int64类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropInt64`](TObject.md#setpropint64)

#### Defined in

[awtk.ts:3640](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3640)

***

### setPropInt8()

> **setPropInt8**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的int8类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropInt8`](TObject.md#setpropint8)

#### Defined in

[awtk.ts:3484](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3484)

***

### setPropIntByPath()

> **setPropIntByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的整数类型的值。

#### Parameters

• **path**: `string`

属性的path。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropIntByPath`](TObject.md#setpropintbypath)

#### Defined in

[awtk.ts:3406](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3406)

***

### setPropObject()

> **setPropObject**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的object类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: [`TObject`](TObject.md)

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropObject`](TObject.md#setpropobject)

#### Defined in

[awtk.ts:3125](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3125)

***

### setPropObjectByPath()

> **setPropObjectByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的object类型的值。

#### Parameters

• **path**: `string`

属性的path。

• **value**: [`TObject`](TObject.md)

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropObjectByPath`](TObject.md#setpropobjectbypath)

#### Defined in

[awtk.ts:3393](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3393)

***

### setPropStr()

> **setPropStr**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的字符串类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `string`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropStr`](TObject.md#setpropstr)

#### Defined in

[awtk.ts:3112](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3112)

***

### setPropStrByPath()

> **setPropStrByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的字符串类型的值。

#### Parameters

• **path**: `string`

属性的path。

• **value**: `string`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropStrByPath`](TObject.md#setpropstrbypath)

#### Defined in

[awtk.ts:3380](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3380)

***

### setPropUint16()

> **setPropUint16**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的uint16类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropUint16`](TObject.md#setpropuint16)

#### Defined in

[awtk.ts:3562](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3562)

***

### setPropUint32()

> **setPropUint32**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的uint32类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropUint32`](TObject.md#setpropuint32)

#### Defined in

[awtk.ts:3614](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3614)

***

### setPropUint64()

> **setPropUint64**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的uint64类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropUint64`](TObject.md#setpropuint64)

#### Defined in

[awtk.ts:3666](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3666)

***

### setPropUint8()

> **setPropUint8**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的uint8类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropUint8`](TObject.md#setpropuint8)

#### Defined in

[awtk.ts:3510](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3510)

***

### setTitle()

> **setTitle**(`app_name`): [`TRet`](../enumerations/TRet.md)

设置程序窗口的名称。

#### Parameters

• **app\_name**: `string`

程序窗口的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28542](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L28542)

***

### setWindowHitTest()

> **setWindowHitTest**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

设置hitTest。

#### Parameters

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

• **w**: `number`

w宽度。

• **h**: `number`

h高度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28505](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L28505)

***

### showBorder()

> **showBorder**(`show`): [`TRet`](../enumerations/TRet.md)

是否显示边框。

#### Parameters

• **show**: `boolean`

是否显示。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28490](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L28490)

***

### unref()

> **unref**(): [`TRet`](../enumerations/TRet.md)

引用计数减1。引用计数为0时，销毁对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`unref`](TObject.md#unref)

#### Defined in

[awtk.ts:2893](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2893)

***

### cast()

> `static` **cast**(`emitter`): [`TEmitter`](TEmitter.md)

转换为emitter对象(供脚本语言使用)。

主要给脚本语言使用。

#### Parameters

• **emitter**: [`TEmitter`](TEmitter.md)

emitter对象。

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[`TObject`](TObject.md).[`cast`](TObject.md#cast)

#### Defined in

[awtk.ts:2569](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2569)

***

### create()

> `static` **create**(): [`TEmitter`](TEmitter.md)

创建emitter对象。

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[`TObject`](TObject.md).[`create`](TObject.md#create)

#### Defined in

[awtk.ts:2467](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2467)

***

### ref()

> `static` **ref**(`obj`): [`TObject`](TObject.md)

引用计数加1。

#### Parameters

• **obj**: [`TObject`](TObject.md)

object对象。

#### Returns

[`TObject`](TObject.md)

返回object对象。

#### Inherited from

[`TObject`](TObject.md).[`ref`](TObject.md#ref)

#### Defined in

[awtk.ts:2905](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2905)
