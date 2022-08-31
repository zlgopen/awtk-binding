[AWTK](../README.md) / [Exports](../modules.md) / TObject

# Class: TObject

对象接口。

## Hierarchy

- [`TEmitter`](TEmitter.md)

  ↳ **`TObject`**

  ↳↳ [`TNativeWindow`](TNativeWindow.md)

  ↳↳ [`TIdleInfo`](TIdleInfo.md)

  ↳↳ [`TObjectArray`](TObjectArray.md)

  ↳↳ [`TObjectDefault`](TObjectDefault.md)

  ↳↳ [`TTimerInfo`](TTimerInfo.md)

## Table of contents

### Constructors

- [constructor](TObject.md#constructor)

### Properties

- [nativeObj](TObject.md#nativeobj)

### Accessors

- [name](TObject.md#name)
- [refCount](TObject.md#refcount)

### Methods

- [canExec](TObject.md#canexec)
- [canExecByPath](TObject.md#canexecbypath)
- [compare](TObject.md#compare)
- [copyProp](TObject.md#copyprop)
- [copyProps](TObject.md#copyprops)
- [destroy](TObject.md#destroy)
- [disable](TObject.md#disable)
- [dispatch](TObject.md#dispatch)
- [dispatchSimpleEvent](TObject.md#dispatchsimpleevent)
- [enable](TObject.md#enable)
- [eval](TObject.md#eval)
- [execute](TObject.md#execute)
- [executeByPath](TObject.md#executebypath)
- [getDesc](TObject.md#getdesc)
- [getProp](TObject.md#getprop)
- [getPropBool](TObject.md#getpropbool)
- [getPropBoolByPath](TObject.md#getpropboolbypath)
- [getPropDouble](TObject.md#getpropdouble)
- [getPropFloat](TObject.md#getpropfloat)
- [getPropFloatByPath](TObject.md#getpropfloatbypath)
- [getPropInt](TObject.md#getpropint)
- [getPropInt16](TObject.md#getpropint16)
- [getPropInt32](TObject.md#getpropint32)
- [getPropInt64](TObject.md#getpropint64)
- [getPropInt8](TObject.md#getpropint8)
- [getPropIntByPath](TObject.md#getpropintbypath)
- [getPropObject](TObject.md#getpropobject)
- [getPropObjectByPath](TObject.md#getpropobjectbypath)
- [getPropPointer](TObject.md#getproppointer)
- [getPropPointerByPath](TObject.md#getproppointerbypath)
- [getPropStr](TObject.md#getpropstr)
- [getPropStrByPath](TObject.md#getpropstrbypath)
- [getPropUint16](TObject.md#getpropuint16)
- [getPropUint32](TObject.md#getpropuint32)
- [getPropUint64](TObject.md#getpropuint64)
- [getPropUint8](TObject.md#getpropuint8)
- [getSize](TObject.md#getsize)
- [getType](TObject.md#gettype)
- [hasProp](TObject.md#hasprop)
- [hasPropByPath](TObject.md#haspropbypath)
- [isCollection](TObject.md#iscollection)
- [notifyChanged](TObject.md#notifychanged)
- [off](TObject.md#off)
- [on](TObject.md#on)
- [removeProp](TObject.md#removeprop)
- [setName](TObject.md#setname)
- [setProp](TObject.md#setprop)
- [setPropBool](TObject.md#setpropbool)
- [setPropBoolByPath](TObject.md#setpropboolbypath)
- [setPropByPath](TObject.md#setpropbypath)
- [setPropDouble](TObject.md#setpropdouble)
- [setPropFloat](TObject.md#setpropfloat)
- [setPropFloatByPath](TObject.md#setpropfloatbypath)
- [setPropInt](TObject.md#setpropint)
- [setPropInt16](TObject.md#setpropint16)
- [setPropInt32](TObject.md#setpropint32)
- [setPropInt64](TObject.md#setpropint64)
- [setPropInt8](TObject.md#setpropint8)
- [setPropIntByPath](TObject.md#setpropintbypath)
- [setPropObject](TObject.md#setpropobject)
- [setPropObjectByPath](TObject.md#setpropobjectbypath)
- [setPropStr](TObject.md#setpropstr)
- [setPropStrByPath](TObject.md#setpropstrbypath)
- [setPropUint16](TObject.md#setpropuint16)
- [setPropUint32](TObject.md#setpropuint32)
- [setPropUint64](TObject.md#setpropuint64)
- [setPropUint8](TObject.md#setpropuint8)
- [unref](TObject.md#unref)
- [cast](TObject.md#cast)
- [create](TObject.md#create)
- [ref](TObject.md#ref)

## Constructors

### constructor

• **new TObject**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TEmitter](TEmitter.md).[constructor](TEmitter.md#constructor)

#### Defined in

[awtk.ts:2661](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2661)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TEmitter](TEmitter.md).[nativeObj](TEmitter.md#nativeobj)

#### Defined in

[awtk.ts:2660](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2660)

## Accessors

### name

• `get` **name**(): `string`

对象的名称。

#### Returns

`string`

#### Defined in

[awtk.ts:3463](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3463)

• `set` **name**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Defined in

[awtk.ts:3467](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3467)

___

### refCount

• `get` **refCount**(): `number`

引用计数。

#### Returns

`number`

#### Defined in

[awtk.ts:3454](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3454)

## Methods

### canExec

▸ **canExec**(`name`, `args`): `boolean`

检查是否可以执行指定的命令。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 命令的名称。 |
| `args` | `string` | 命令的参数。 |

#### Returns

`boolean`

返回TRUE表示可以执行，否则表示不可以执行。

#### Defined in

[awtk.ts:3020](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3020)

___

### canExecByPath

▸ **canExecByPath**(`path`, `args`): `boolean`

检查是否可以执行指定的命令。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 命令的path。 |
| `args` | `string` | 命令的参数。 |

#### Returns

`boolean`

返回TRUE表示可以执行，否则表示不可以执行。

#### Defined in

[awtk.ts:3224](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3224)

___

### compare

▸ **compare**(`other`): `number`

比较两个对象。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `other` | [`TObject`](TObject.md) | 比较的object对象。 |

#### Returns

`number`

返回比较结果。

#### Defined in

[awtk.ts:2752](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2752)

___

### copyProp

▸ **copyProp**(`src`, `name`): [`TRet`](../enums/TRet.md)

拷贝指定的属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `src` | [`TObject`](TObject.md) | 源对象。 |
| `name` | `string` | 属性的名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2969](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2969)

___

### copyProps

▸ **copyProps**(`src`, `overwrite`): [`TRet`](../enums/TRet.md)

拷贝全部的属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `src` | [`TObject`](TObject.md) | 源对象。 |
| `overwrite` | `boolean` | 如果属性存在是否覆盖。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2982](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2982)

___

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEmitter](TEmitter.md).[destroy](TEmitter.md#destroy)

#### Defined in

[awtk.ts:2334](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2334)

___

### disable

▸ **disable**(): [`TRet`](../enums/TRet.md)

禁用。

禁用后emitter_dispatch无效，但可以注册和注销。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEmitter](TEmitter.md).[disable](TEmitter.md#disable)

#### Defined in

[awtk.ts:2323](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2323)

___

### dispatch

▸ **dispatch**(`e`): [`TRet`](../enums/TRet.md)

分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
禁用状态下，本函数不做任何事情。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `e` | [`TEvent`](TEvent.md) | 事件对象。 |

#### Returns

[`TRet`](../enums/TRet.md)

如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Inherited from

[TEmitter](TEmitter.md).[dispatch](TEmitter.md#dispatch)

#### Defined in

[awtk.ts:2259](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2259)

___

### dispatchSimpleEvent

▸ **dispatchSimpleEvent**(`type`): [`TRet`](../enums/TRet.md)

分发事件。
> 对emitter_dispatch的包装，分发一个简单的事件。
如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `type` | `number` | 事件类型。 |

#### Returns

[`TRet`](../enums/TRet.md)

#### Inherited from

[TEmitter](TEmitter.md).[dispatchSimpleEvent](TEmitter.md#dispatchsimpleevent)

#### Defined in

[awtk.ts:2273](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2273)

___

### enable

▸ **enable**(): [`TRet`](../enums/TRet.md)

启用。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEmitter](TEmitter.md).[enable](TEmitter.md#enable)

#### Defined in

[awtk.ts:2310](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2310)

___

### eval

▸ **eval**(`expr`, `v`): [`TRet`](../enums/TRet.md)

计算一个表达式，表达式中引用的变量从prop中获取。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `expr` | `string` | 表达式。 |
| `v` | [`TValue`](TValue.md) | 返回计算结果。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3007](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3007)

___

### execute

▸ **execute**(`name`, `args`): [`TRet`](../enums/TRet.md)

执行指定的命令。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 命令的名称。 |
| `args` | `string` | 命令的参数。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3033](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3033)

___

### executeByPath

▸ **executeByPath**(`path`, `args`): [`TRet`](../enums/TRet.md)

执行指定的命令。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 命令的path。 |
| `args` | `string` | 命令的参数。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3237](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3237)

___

### getDesc

▸ **getDesc**(): `string`

获取对象的描述信息。

#### Returns

`string`

返回对象的描述信息。

#### Defined in

[awtk.ts:2706](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2706)

___

### getProp

▸ **getProp**(`name`, `v`): [`TRet`](../enums/TRet.md)

获取指定属性的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `v` | [`TValue`](TValue.md) | 返回属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2765](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2765)

___

### getPropBool

▸ **getPropBool**(`name`, `defval`): `boolean`

获取指定属性的bool类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `boolean` | 缺省值。 |

#### Returns

`boolean`

返回指定属性的bool类型的值。

#### Defined in

[awtk.ts:2827](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2827)

___

### getPropBoolByPath

▸ **getPropBoolByPath**(`path`, `defval`): `boolean`

获取指定属性的bool类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 属性的path。 |
| `defval` | `boolean` | 缺省值。 |

#### Returns

`boolean`

返回指定属性的bool类型的值。

#### Defined in

[awtk.ts:3118](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3118)

___

### getPropDouble

▸ **getPropDouble**(`name`, `defval`): `number`

获取指定属性的浮点数类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回指定属性的浮点数类型的值。

#### Defined in

[awtk.ts:2853](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2853)

___

### getPropFloat

▸ **getPropFloat**(`name`, `defval`): `number`

获取指定属性的浮点数类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回指定属性的浮点数类型的值。

#### Defined in

[awtk.ts:2840](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2840)

___

### getPropFloatByPath

▸ **getPropFloatByPath**(`path`, `defval`): `number`

获取指定属性的浮点数类型的值。

e

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 属性的path。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回指定属性的浮点数类型的值。

#### Defined in

[awtk.ts:3133](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3133)

___

### getPropInt

▸ **getPropInt**(`name`, `defval`): `number`

获取指定属性的整数类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回指定属性的整数类型的值。

#### Defined in

[awtk.ts:2814](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2814)

___

### getPropInt16

▸ **getPropInt16**(`name`, `defval`): `number`

获取指定属性的int16类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回指定属性的int16类型的值。

#### Defined in

[awtk.ts:3302](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3302)

___

### getPropInt32

▸ **getPropInt32**(`name`, `defval`): `number`

获取指定属性的int32类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回指定属性的int32类型的值。

#### Defined in

[awtk.ts:3354](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3354)

___

### getPropInt64

▸ **getPropInt64**(`name`, `defval`): `number`

获取指定属性的int64类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回指定属性的int64类型的值。

#### Defined in

[awtk.ts:3406](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3406)

___

### getPropInt8

▸ **getPropInt8**(`name`, `defval`): `number`

获取指定属性的int8类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回指定属性的int8类型的值。

#### Defined in

[awtk.ts:3250](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3250)

___

### getPropIntByPath

▸ **getPropIntByPath**(`path`, `defval`): `number`

获取指定属性的整数类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 属性的path。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回指定属性的整数类型的值。

#### Defined in

[awtk.ts:3105](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3105)

___

### getPropObject

▸ **getPropObject**(`name`): [`TObject`](TObject.md)

获取指定属性的object类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |

#### Returns

[`TObject`](TObject.md)

返回指定属性的object类型的值。

#### Defined in

[awtk.ts:2801](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2801)

___

### getPropObjectByPath

▸ **getPropObjectByPath**(`path`): [`TObject`](TObject.md)

获取指定属性的object类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 属性的path。 |

#### Returns

[`TObject`](TObject.md)

返回指定属性的object类型的值。

#### Defined in

[awtk.ts:3092](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3092)

___

### getPropPointer

▸ **getPropPointer**(`name`): `any`

获取指定属性的指针类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |

#### Returns

`any`

返回指定属性的指针类型的值。

#### Defined in

[awtk.ts:2789](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2789)

___

### getPropPointerByPath

▸ **getPropPointerByPath**(`path`): `any`

获取指定属性的指针类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 属性的path。 |

#### Returns

`any`

返回指定属性的指针类型的值。

#### Defined in

[awtk.ts:3080](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3080)

___

### getPropStr

▸ **getPropStr**(`name`): `string`

获取指定属性的字符串类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |

#### Returns

`string`

返回指定属性的字符串类型的值。

#### Defined in

[awtk.ts:2777](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2777)

___

### getPropStrByPath

▸ **getPropStrByPath**(`path`): `string`

获取指定属性的字符串类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 属性的path。 |

#### Returns

`string`

返回指定属性的字符串类型的值。

#### Defined in

[awtk.ts:3068](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3068)

___

### getPropUint16

▸ **getPropUint16**(`name`, `defval`): `number`

获取指定属性的uint16类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回指定属性的uint16类型的值。

#### Defined in

[awtk.ts:3328](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3328)

___

### getPropUint32

▸ **getPropUint32**(`name`, `defval`): `number`

获取指定属性的uint32类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回指定属性的uint32类型的值。

#### Defined in

[awtk.ts:3380](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3380)

___

### getPropUint64

▸ **getPropUint64**(`name`, `defval`): `number`

获取指定属性的uint64类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回指定属性的uint64类型的值。

#### Defined in

[awtk.ts:3432](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3432)

___

### getPropUint8

▸ **getPropUint8**(`name`, `defval`): `number`

获取指定属性的uint8类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回指定属性的uint8类型的值。

#### Defined in

[awtk.ts:3276](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3276)

___

### getSize

▸ **getSize**(): `number`

获取对象占用内存的大小。

#### Returns

`number`

返回对象占用内存的大小。

#### Defined in

[awtk.ts:2717](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2717)

___

### getType

▸ **getType**(): `string`

获取对象的类型名称。

#### Returns

`string`

返回对象的类型名称。

#### Defined in

[awtk.ts:2695](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2695)

___

### hasProp

▸ **hasProp**(`name`): `boolean`

检查是否存在指定的属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |

#### Returns

`boolean`

返回TRUE表示存在，否则表示不存在。

#### Defined in

[awtk.ts:2994](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2994)

___

### hasPropByPath

▸ **hasPropByPath**(`path`): `boolean`

检查是否存在指定的属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 属性的path，各级之间用.分隔。 |

#### Returns

`boolean`

返回TRUE表示存在，否则表示不存在。

#### Defined in

[awtk.ts:3056](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3056)

___

### isCollection

▸ **isCollection**(): `boolean`

判断对象是否是集合。

#### Returns

`boolean`

返回TRUE表示是集合，否则不是。

#### Defined in

[awtk.ts:2728](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2728)

___

### notifyChanged

▸ **notifyChanged**(): [`TRet`](../enums/TRet.md)

触发EVT_PROPS_CHANGED事件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3044](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3044)

___

### off

▸ **off**(`id`): [`TRet`](../enums/TRet.md)

注销指定事件的处理函数。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `id` | `number` | emitter_on返回的ID。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEmitter](TEmitter.md).[off](TEmitter.md#off)

#### Defined in

[awtk.ts:2299](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2299)

___

### on

▸ **on**(`etype`, `handler`, `ctx`): `number`

注册指定事件的处理函数。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `etype` | [`TEventType`](../enums/TEventType.md) | 事件类型。 |
| `handler` | `Function` | 事件处理函数。 |
| `ctx` | `any` | 事件处理函数上下文。 |

#### Returns

`number`

返回id，用于emitter_off。

#### Inherited from

[TEmitter](TEmitter.md).[on](TEmitter.md#on)

#### Defined in

[awtk.ts:2287](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2287)

___

### removeProp

▸ **removeProp**(`name`): [`TRet`](../enums/TRet.md)

删除指定属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2865](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2865)

___

### setName

▸ **setName**(`name`): [`TRet`](../enums/TRet.md)

设置对象的名称。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 对象的名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2740](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2740)

___

### setProp

▸ **setProp**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | [`TValue`](TValue.md) | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2878](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2878)

___

### setPropBool

▸ **setPropBool**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的bool类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2930](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2930)

___

### setPropBoolByPath

▸ **setPropBoolByPath**(`path`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的bool类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 属性的path。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3198](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3198)

___

### setPropByPath

▸ **setPropByPath**(`path`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 属性的path。 |
| `value` | [`TValue`](TValue.md) | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3146](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3146)

___

### setPropDouble

▸ **setPropDouble**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的浮点数类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2956](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2956)

___

### setPropFloat

▸ **setPropFloat**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的浮点数类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2943](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2943)

___

### setPropFloatByPath

▸ **setPropFloatByPath**(`path`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的浮点数类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 属性的path。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3211](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3211)

___

### setPropInt

▸ **setPropInt**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的整数类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2917](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2917)

___

### setPropInt16

▸ **setPropInt16**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的int16类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3315](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3315)

___

### setPropInt32

▸ **setPropInt32**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的int32类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3367](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3367)

___

### setPropInt64

▸ **setPropInt64**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的int64类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3419](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3419)

___

### setPropInt8

▸ **setPropInt8**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的int8类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3263](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3263)

___

### setPropIntByPath

▸ **setPropIntByPath**(`path`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的整数类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 属性的path。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3185](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3185)

___

### setPropObject

▸ **setPropObject**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的object类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | [`TObject`](TObject.md) | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2904](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2904)

___

### setPropObjectByPath

▸ **setPropObjectByPath**(`path`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的object类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 属性的path。 |
| `value` | [`TObject`](TObject.md) | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3172](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3172)

___

### setPropStr

▸ **setPropStr**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的字符串类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | `string` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2891](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2891)

___

### setPropStrByPath

▸ **setPropStrByPath**(`path`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的字符串类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `path` | `string` | 属性的path。 |
| `value` | `string` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3159](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3159)

___

### setPropUint16

▸ **setPropUint16**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的uint16类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3341](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3341)

___

### setPropUint32

▸ **setPropUint32**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的uint32类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3393](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3393)

___

### setPropUint64

▸ **setPropUint64**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的uint64类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3445](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3445)

___

### setPropUint8

▸ **setPropUint8**(`name`, `value`): [`TRet`](../enums/TRet.md)

设置指定属性的uint8类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `value` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3289](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3289)

___

### unref

▸ **unref**(): [`TRet`](../enums/TRet.md)

引用计数减1。引用计数为0时，销毁对象。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2672](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2672)

___

### cast

▸ `Static` **cast**(`emitter`): [`TEmitter`](TEmitter.md)

转换为emitter对象(供脚本语言使用)。

主要给脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `emitter` | [`TEmitter`](TEmitter.md) | emitter对象。 |

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[TEmitter](TEmitter.md).[cast](TEmitter.md#cast)

#### Defined in

[awtk.ts:2348](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2348)

___

### create

▸ `Static` **create**(): [`TEmitter`](TEmitter.md)

创建emitter对象。

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[TEmitter](TEmitter.md).[create](TEmitter.md#create)

#### Defined in

[awtk.ts:2246](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2246)

___

### ref

▸ `Static` **ref**(`obj`): [`TObject`](TObject.md)

引用计数加1。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `obj` | [`TObject`](TObject.md) | object对象。 |

#### Returns

[`TObject`](TObject.md)

返回object对象。

#### Defined in

[awtk.ts:2684](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2684)
