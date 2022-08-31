[AWTK](../README.md) / [Exports](../modules.md) / TNativeWindow

# Class: TNativeWindow

原生窗口。

## Hierarchy

- [`TObject`](TObject.md)

  ↳ **`TNativeWindow`**

## Table of contents

### Constructors

- [constructor](TNativeWindow.md#constructor)

### Properties

- [nativeObj](TNativeWindow.md#nativeobj)

### Accessors

- [name](TNativeWindow.md#name)
- [refCount](TNativeWindow.md#refcount)

### Methods

- [canExec](TNativeWindow.md#canexec)
- [canExecByPath](TNativeWindow.md#canexecbypath)
- [center](TNativeWindow.md#center)
- [compare](TNativeWindow.md#compare)
- [copyProp](TNativeWindow.md#copyprop)
- [copyProps](TNativeWindow.md#copyprops)
- [destroy](TNativeWindow.md#destroy)
- [disable](TNativeWindow.md#disable)
- [dispatch](TNativeWindow.md#dispatch)
- [dispatchSimpleEvent](TNativeWindow.md#dispatchsimpleevent)
- [enable](TNativeWindow.md#enable)
- [eval](TNativeWindow.md#eval)
- [execute](TNativeWindow.md#execute)
- [executeByPath](TNativeWindow.md#executebypath)
- [getDesc](TNativeWindow.md#getdesc)
- [getProp](TNativeWindow.md#getprop)
- [getPropBool](TNativeWindow.md#getpropbool)
- [getPropBoolByPath](TNativeWindow.md#getpropboolbypath)
- [getPropDouble](TNativeWindow.md#getpropdouble)
- [getPropFloat](TNativeWindow.md#getpropfloat)
- [getPropFloatByPath](TNativeWindow.md#getpropfloatbypath)
- [getPropInt](TNativeWindow.md#getpropint)
- [getPropInt16](TNativeWindow.md#getpropint16)
- [getPropInt32](TNativeWindow.md#getpropint32)
- [getPropInt64](TNativeWindow.md#getpropint64)
- [getPropInt8](TNativeWindow.md#getpropint8)
- [getPropIntByPath](TNativeWindow.md#getpropintbypath)
- [getPropObject](TNativeWindow.md#getpropobject)
- [getPropObjectByPath](TNativeWindow.md#getpropobjectbypath)
- [getPropPointer](TNativeWindow.md#getproppointer)
- [getPropPointerByPath](TNativeWindow.md#getproppointerbypath)
- [getPropStr](TNativeWindow.md#getpropstr)
- [getPropStrByPath](TNativeWindow.md#getpropstrbypath)
- [getPropUint16](TNativeWindow.md#getpropuint16)
- [getPropUint32](TNativeWindow.md#getpropuint32)
- [getPropUint64](TNativeWindow.md#getpropuint64)
- [getPropUint8](TNativeWindow.md#getpropuint8)
- [getSize](TNativeWindow.md#getsize)
- [getType](TNativeWindow.md#gettype)
- [hasProp](TNativeWindow.md#hasprop)
- [hasPropByPath](TNativeWindow.md#haspropbypath)
- [isCollection](TNativeWindow.md#iscollection)
- [maximize](TNativeWindow.md#maximize)
- [minimize](TNativeWindow.md#minimize)
- [move](TNativeWindow.md#move)
- [notifyChanged](TNativeWindow.md#notifychanged)
- [off](TNativeWindow.md#off)
- [on](TNativeWindow.md#on)
- [removeProp](TNativeWindow.md#removeprop)
- [resize](TNativeWindow.md#resize)
- [restore](TNativeWindow.md#restore)
- [setCursor](TNativeWindow.md#setcursor)
- [setFullscreen](TNativeWindow.md#setfullscreen)
- [setName](TNativeWindow.md#setname)
- [setOrientation](TNativeWindow.md#setorientation)
- [setProp](TNativeWindow.md#setprop)
- [setPropBool](TNativeWindow.md#setpropbool)
- [setPropBoolByPath](TNativeWindow.md#setpropboolbypath)
- [setPropByPath](TNativeWindow.md#setpropbypath)
- [setPropDouble](TNativeWindow.md#setpropdouble)
- [setPropFloat](TNativeWindow.md#setpropfloat)
- [setPropFloatByPath](TNativeWindow.md#setpropfloatbypath)
- [setPropInt](TNativeWindow.md#setpropint)
- [setPropInt16](TNativeWindow.md#setpropint16)
- [setPropInt32](TNativeWindow.md#setpropint32)
- [setPropInt64](TNativeWindow.md#setpropint64)
- [setPropInt8](TNativeWindow.md#setpropint8)
- [setPropIntByPath](TNativeWindow.md#setpropintbypath)
- [setPropObject](TNativeWindow.md#setpropobject)
- [setPropObjectByPath](TNativeWindow.md#setpropobjectbypath)
- [setPropStr](TNativeWindow.md#setpropstr)
- [setPropStrByPath](TNativeWindow.md#setpropstrbypath)
- [setPropUint16](TNativeWindow.md#setpropuint16)
- [setPropUint32](TNativeWindow.md#setpropuint32)
- [setPropUint64](TNativeWindow.md#setpropuint64)
- [setPropUint8](TNativeWindow.md#setpropuint8)
- [setTitle](TNativeWindow.md#settitle)
- [showBorder](TNativeWindow.md#showborder)
- [unref](TNativeWindow.md#unref)
- [cast](TNativeWindow.md#cast)
- [create](TNativeWindow.md#create)
- [ref](TNativeWindow.md#ref)

## Constructors

### constructor

• **new TNativeWindow**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TObject](TObject.md).[constructor](TObject.md#constructor)

#### Defined in

[awtk.ts:26122](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L26122)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TObject](TObject.md).[nativeObj](TObject.md#nativeobj)

#### Defined in

[awtk.ts:26121](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L26121)

## Accessors

### name

• `get` **name**(): `string`

对象的名称。

#### Returns

`string`

#### Inherited from

TObject.name

#### Defined in

[awtk.ts:3463](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3463)

• `set` **name**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Inherited from

TObject.name

#### Defined in

[awtk.ts:3467](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3467)

___

### refCount

• `get` **refCount**(): `number`

引用计数。

#### Returns

`number`

#### Inherited from

TObject.refCount

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

#### Inherited from

[TObject](TObject.md).[canExec](TObject.md#canexec)

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

#### Inherited from

[TObject](TObject.md).[canExecByPath](TObject.md#canexecbypath)

#### Defined in

[awtk.ts:3224](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3224)

___

### center

▸ **center**(): [`TRet`](../enums/TRet.md)

窗口居中。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26207](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L26207)

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

#### Inherited from

[TObject](TObject.md).[compare](TObject.md#compare)

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

#### Inherited from

[TObject](TObject.md).[copyProp](TObject.md#copyprop)

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

#### Inherited from

[TObject](TObject.md).[copyProps](TObject.md#copyprops)

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

[TObject](TObject.md).[destroy](TObject.md#destroy)

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

[TObject](TObject.md).[disable](TObject.md#disable)

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

[TObject](TObject.md).[dispatch](TObject.md#dispatch)

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

[TObject](TObject.md).[dispatchSimpleEvent](TObject.md#dispatchsimpleevent)

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

[TObject](TObject.md).[enable](TObject.md#enable)

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

#### Inherited from

[TObject](TObject.md).[eval](TObject.md#eval)

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

#### Inherited from

[TObject](TObject.md).[execute](TObject.md#execute)

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

#### Inherited from

[TObject](TObject.md).[executeByPath](TObject.md#executebypath)

#### Defined in

[awtk.ts:3237](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3237)

___

### getDesc

▸ **getDesc**(): `string`

获取对象的描述信息。

#### Returns

`string`

返回对象的描述信息。

#### Inherited from

[TObject](TObject.md).[getDesc](TObject.md#getdesc)

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

#### Inherited from

[TObject](TObject.md).[getProp](TObject.md#getprop)

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

#### Inherited from

[TObject](TObject.md).[getPropBool](TObject.md#getpropbool)

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

#### Inherited from

[TObject](TObject.md).[getPropBoolByPath](TObject.md#getpropboolbypath)

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

#### Inherited from

[TObject](TObject.md).[getPropDouble](TObject.md#getpropdouble)

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

#### Inherited from

[TObject](TObject.md).[getPropFloat](TObject.md#getpropfloat)

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

#### Inherited from

[TObject](TObject.md).[getPropFloatByPath](TObject.md#getpropfloatbypath)

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

#### Inherited from

[TObject](TObject.md).[getPropInt](TObject.md#getpropint)

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

#### Inherited from

[TObject](TObject.md).[getPropInt16](TObject.md#getpropint16)

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

#### Inherited from

[TObject](TObject.md).[getPropInt32](TObject.md#getpropint32)

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

#### Inherited from

[TObject](TObject.md).[getPropInt64](TObject.md#getpropint64)

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

#### Inherited from

[TObject](TObject.md).[getPropInt8](TObject.md#getpropint8)

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

#### Inherited from

[TObject](TObject.md).[getPropIntByPath](TObject.md#getpropintbypath)

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

#### Inherited from

[TObject](TObject.md).[getPropObject](TObject.md#getpropobject)

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

#### Inherited from

[TObject](TObject.md).[getPropObjectByPath](TObject.md#getpropobjectbypath)

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

#### Inherited from

[TObject](TObject.md).[getPropPointer](TObject.md#getproppointer)

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

#### Inherited from

[TObject](TObject.md).[getPropPointerByPath](TObject.md#getproppointerbypath)

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

#### Inherited from

[TObject](TObject.md).[getPropStr](TObject.md#getpropstr)

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

#### Inherited from

[TObject](TObject.md).[getPropStrByPath](TObject.md#getpropstrbypath)

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

#### Inherited from

[TObject](TObject.md).[getPropUint16](TObject.md#getpropuint16)

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

#### Inherited from

[TObject](TObject.md).[getPropUint32](TObject.md#getpropuint32)

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

#### Inherited from

[TObject](TObject.md).[getPropUint64](TObject.md#getpropuint64)

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

#### Inherited from

[TObject](TObject.md).[getPropUint8](TObject.md#getpropuint8)

#### Defined in

[awtk.ts:3276](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3276)

___

### getSize

▸ **getSize**(): `number`

获取对象占用内存的大小。

#### Returns

`number`

返回对象占用内存的大小。

#### Inherited from

[TObject](TObject.md).[getSize](TObject.md#getsize)

#### Defined in

[awtk.ts:2717](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2717)

___

### getType

▸ **getType**(): `string`

获取对象的类型名称。

#### Returns

`string`

返回对象的类型名称。

#### Inherited from

[TObject](TObject.md).[getType](TObject.md#gettype)

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

#### Inherited from

[TObject](TObject.md).[hasProp](TObject.md#hasprop)

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

#### Inherited from

[TObject](TObject.md).[hasPropByPath](TObject.md#haspropbypath)

#### Defined in

[awtk.ts:3056](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3056)

___

### isCollection

▸ **isCollection**(): `boolean`

判断对象是否是集合。

#### Returns

`boolean`

返回TRUE表示是集合，否则不是。

#### Inherited from

[TObject](TObject.md).[isCollection](TObject.md#iscollection)

#### Defined in

[awtk.ts:2728](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2728)

___

### maximize

▸ **maximize**(): [`TRet`](../enums/TRet.md)

最大化窗口。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26185](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L26185)

___

### minimize

▸ **minimize**(): [`TRet`](../enums/TRet.md)

最小化窗口。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26174](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L26174)

___

### move

▸ **move**(`x`, `y`, `force`): [`TRet`](../enums/TRet.md)

移动窗口。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |
| `force` | `boolean` | 无论是否shared都move。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26136](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L26136)

___

### notifyChanged

▸ **notifyChanged**(): [`TRet`](../enums/TRet.md)

触发EVT_PROPS_CHANGED事件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TObject](TObject.md).[notifyChanged](TObject.md#notifychanged)

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

[TObject](TObject.md).[off](TObject.md#off)

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

[TObject](TObject.md).[on](TObject.md#on)

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

#### Inherited from

[TObject](TObject.md).[removeProp](TObject.md#removeprop)

#### Defined in

[awtk.ts:2865](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2865)

___

### resize

▸ **resize**(`w`, `h`, `force`): [`TRet`](../enums/TRet.md)

调整窗口大小。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `w` | `number` | 宽。 |
| `h` | `number` | 高。 |
| `force` | `boolean` | 无论是否shared都resize。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26150](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L26150)

___

### restore

▸ **restore**(): [`TRet`](../enums/TRet.md)

恢复窗口大小。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26196](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L26196)

___

### setCursor

▸ **setCursor**(`name`, `img`): [`TRet`](../enums/TRet.md)

设置鼠标光标。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 鼠标光标的名称。 |
| `img` | [`TBitmap`](TBitmap.md) | 鼠标光标的图片。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26244](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L26244)

___

### setFullscreen

▸ **setFullscreen**(`fullscreen`): [`TRet`](../enums/TRet.md)

是否全屏。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `fullscreen` | `boolean` | 是否全屏。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26231](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L26231)

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

#### Inherited from

[TObject](TObject.md).[setName](TObject.md#setname)

#### Defined in

[awtk.ts:2740](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2740)

___

### setOrientation

▸ **setOrientation**(`old_orientation`, `new_orientation`): [`TRet`](../enums/TRet.md)

调整窗口旋转。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `old_orientation` | `any` | 旧的旋转角度。 |
| `new_orientation` | `any` | 新的旋转角度。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26163](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L26163)

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

#### Inherited from

[TObject](TObject.md).[setProp](TObject.md#setprop)

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

#### Inherited from

[TObject](TObject.md).[setPropBool](TObject.md#setpropbool)

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

#### Inherited from

[TObject](TObject.md).[setPropBoolByPath](TObject.md#setpropboolbypath)

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

#### Inherited from

[TObject](TObject.md).[setPropByPath](TObject.md#setpropbypath)

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

#### Inherited from

[TObject](TObject.md).[setPropDouble](TObject.md#setpropdouble)

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

#### Inherited from

[TObject](TObject.md).[setPropFloat](TObject.md#setpropfloat)

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

#### Inherited from

[TObject](TObject.md).[setPropFloatByPath](TObject.md#setpropfloatbypath)

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

#### Inherited from

[TObject](TObject.md).[setPropInt](TObject.md#setpropint)

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

#### Inherited from

[TObject](TObject.md).[setPropInt16](TObject.md#setpropint16)

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

#### Inherited from

[TObject](TObject.md).[setPropInt32](TObject.md#setpropint32)

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

#### Inherited from

[TObject](TObject.md).[setPropInt64](TObject.md#setpropint64)

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

#### Inherited from

[TObject](TObject.md).[setPropInt8](TObject.md#setpropint8)

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

#### Inherited from

[TObject](TObject.md).[setPropIntByPath](TObject.md#setpropintbypath)

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

#### Inherited from

[TObject](TObject.md).[setPropObject](TObject.md#setpropobject)

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

#### Inherited from

[TObject](TObject.md).[setPropObjectByPath](TObject.md#setpropobjectbypath)

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

#### Inherited from

[TObject](TObject.md).[setPropStr](TObject.md#setpropstr)

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

#### Inherited from

[TObject](TObject.md).[setPropStrByPath](TObject.md#setpropstrbypath)

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

#### Inherited from

[TObject](TObject.md).[setPropUint16](TObject.md#setpropuint16)

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

#### Inherited from

[TObject](TObject.md).[setPropUint32](TObject.md#setpropuint32)

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

#### Inherited from

[TObject](TObject.md).[setPropUint64](TObject.md#setpropuint64)

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

#### Inherited from

[TObject](TObject.md).[setPropUint8](TObject.md#setpropuint8)

#### Defined in

[awtk.ts:3289](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L3289)

___

### setTitle

▸ **setTitle**(`app_name`): [`TRet`](../enums/TRet.md)

设置程序窗口的名称。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `app_name` | `string` | 程序窗口的名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26256](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L26256)

___

### showBorder

▸ **showBorder**(`show`): [`TRet`](../enums/TRet.md)

是否显示边框。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `show` | `boolean` | 是否显示。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26219](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L26219)

___

### unref

▸ **unref**(): [`TRet`](../enums/TRet.md)

引用计数减1。引用计数为0时，销毁对象。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TObject](TObject.md).[unref](TObject.md#unref)

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

[TObject](TObject.md).[cast](TObject.md#cast)

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

[TObject](TObject.md).[create](TObject.md#create)

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

#### Inherited from

[TObject](TObject.md).[ref](TObject.md#ref)

#### Defined in

[awtk.ts:2684](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2684)
