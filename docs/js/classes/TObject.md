[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TObject

# Class: TObject

对象接口。

## Extends

- [`TEmitter`](TEmitter.md)

## Extended by

- [`TNativeWindow`](TNativeWindow.md)
- [`TIdleInfo`](TIdleInfo.md)
- [`TObjectArray`](TObjectArray.md)
- [`TObjectDefault`](TObjectDefault.md)
- [`TObjectHash`](TObjectHash.md)
- [`TTimerInfo`](TTimerInfo.md)

## Constructors

### new TObject()

> **new TObject**(`nativeObj`): [`TObject`](TObject.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TObject`](TObject.md)

#### Overrides

[`TEmitter`](TEmitter.md).[`constructor`](TEmitter.md#constructors)

#### Defined in

[awtk.ts:2882](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2882)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TEmitter`](TEmitter.md).[`nativeObj`](TEmitter.md#nativeobj)

#### Defined in

[awtk.ts:2881](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2881)

## Accessors

### name

> `get` **name**(): `string`

对象的名称。

> `set` **name**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Defined in

[awtk.ts:3695](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3695)

***

### refCount

> `get` **refCount**(): `number`

引用计数。

#### Returns

`number`

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

#### Defined in

[awtk.ts:3445](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3445)

***

### clearProps()

> **clearProps**(): [`TRet`](../enumerations/TRet.md)

清除全部属性。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

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

[`TEmitter`](TEmitter.md).[`destroy`](TEmitter.md#destroy)

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

[`TEmitter`](TEmitter.md).[`disable`](TEmitter.md#disable)

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

[`TEmitter`](TEmitter.md).[`dispatch`](TEmitter.md#dispatch)

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

[`TEmitter`](TEmitter.md).[`dispatchSimpleEvent`](TEmitter.md#dispatchsimpleevent)

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

[`TEmitter`](TEmitter.md).[`enable`](TEmitter.md#enable)

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

#### Defined in

[awtk.ts:3458](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3458)

***

### getDesc()

> **getDesc**(): `string`

获取对象的描述信息。

#### Returns

`string`

返回对象的描述信息。

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

#### Defined in

[awtk.ts:3497](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3497)

***

### getSize()

> **getSize**(): `number`

获取对象占用内存的大小。

#### Returns

`number`

返回对象占用内存的大小。

#### Defined in

[awtk.ts:2938](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2938)

***

### getType()

> **getType**(): `string`

获取对象的类型名称。

#### Returns

`string`

返回对象的类型名称。

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

#### Defined in

[awtk.ts:3277](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3277)

***

### isCollection()

> **isCollection**(): `boolean`

判断对象是否是集合。

#### Returns

`boolean`

返回TRUE表示是集合，否则不是。

#### Defined in

[awtk.ts:2949](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2949)

***

### notifyChanged()

> **notifyChanged**(): [`TRet`](../enumerations/TRet.md)

触发EVT_PROPS_CHANGED事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

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

[`TEmitter`](TEmitter.md).[`off`](TEmitter.md#off)

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

[`TEmitter`](TEmitter.md).[`on`](TEmitter.md#on)

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

#### Defined in

[awtk.ts:3086](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3086)

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

#### Defined in

[awtk.ts:2961](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2961)

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

#### Defined in

[awtk.ts:3510](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3510)

***

### unref()

> **unref**(): [`TRet`](../enumerations/TRet.md)

引用计数减1。引用计数为0时，销毁对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

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

[`TEmitter`](TEmitter.md).[`cast`](TEmitter.md#cast)

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

[`TEmitter`](TEmitter.md).[`create`](TEmitter.md#create)

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

#### Defined in

[awtk.ts:2905](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2905)
