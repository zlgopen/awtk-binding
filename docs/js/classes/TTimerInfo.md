[AWTK](../README.md) / [Exports](../modules.md) / TTimerInfo

# Class: TTimerInfo

单个定时器的信息。

## Hierarchy

- [`TObject`](TObject.md)

  ↳ **`TTimerInfo`**

## Table of contents

### Constructors

- [constructor](TTimerInfo.md#constructor)

### Properties

- [nativeObj](TTimerInfo.md#nativeobj)

### Accessors

- [ctx](TTimerInfo.md#ctx)
- [extraCtx](TTimerInfo.md#extractx)
- [id](TTimerInfo.md#id)
- [name](TTimerInfo.md#name)
- [now](TTimerInfo.md#now)
- [refCount](TTimerInfo.md#refcount)

### Methods

- [canExec](TTimerInfo.md#canexec)
- [canExecByPath](TTimerInfo.md#canexecbypath)
- [compare](TTimerInfo.md#compare)
- [copyProp](TTimerInfo.md#copyprop)
- [copyProps](TTimerInfo.md#copyprops)
- [destroy](TTimerInfo.md#destroy)
- [disable](TTimerInfo.md#disable)
- [dispatch](TTimerInfo.md#dispatch)
- [dispatchSimpleEvent](TTimerInfo.md#dispatchsimpleevent)
- [enable](TTimerInfo.md#enable)
- [eval](TTimerInfo.md#eval)
- [execute](TTimerInfo.md#execute)
- [executeByPath](TTimerInfo.md#executebypath)
- [getDesc](TTimerInfo.md#getdesc)
- [getProp](TTimerInfo.md#getprop)
- [getPropBool](TTimerInfo.md#getpropbool)
- [getPropBoolByPath](TTimerInfo.md#getpropboolbypath)
- [getPropDouble](TTimerInfo.md#getpropdouble)
- [getPropFloat](TTimerInfo.md#getpropfloat)
- [getPropFloatByPath](TTimerInfo.md#getpropfloatbypath)
- [getPropInt](TTimerInfo.md#getpropint)
- [getPropInt16](TTimerInfo.md#getpropint16)
- [getPropInt32](TTimerInfo.md#getpropint32)
- [getPropInt64](TTimerInfo.md#getpropint64)
- [getPropInt8](TTimerInfo.md#getpropint8)
- [getPropIntByPath](TTimerInfo.md#getpropintbypath)
- [getPropObject](TTimerInfo.md#getpropobject)
- [getPropObjectByPath](TTimerInfo.md#getpropobjectbypath)
- [getPropPointer](TTimerInfo.md#getproppointer)
- [getPropPointerByPath](TTimerInfo.md#getproppointerbypath)
- [getPropStr](TTimerInfo.md#getpropstr)
- [getPropStrByPath](TTimerInfo.md#getpropstrbypath)
- [getPropUint16](TTimerInfo.md#getpropuint16)
- [getPropUint32](TTimerInfo.md#getpropuint32)
- [getPropUint64](TTimerInfo.md#getpropuint64)
- [getPropUint8](TTimerInfo.md#getpropuint8)
- [getSize](TTimerInfo.md#getsize)
- [getType](TTimerInfo.md#gettype)
- [hasProp](TTimerInfo.md#hasprop)
- [hasPropByPath](TTimerInfo.md#haspropbypath)
- [isCollection](TTimerInfo.md#iscollection)
- [notifyChanged](TTimerInfo.md#notifychanged)
- [off](TTimerInfo.md#off)
- [on](TTimerInfo.md#on)
- [removeProp](TTimerInfo.md#removeprop)
- [setName](TTimerInfo.md#setname)
- [setProp](TTimerInfo.md#setprop)
- [setPropBool](TTimerInfo.md#setpropbool)
- [setPropBoolByPath](TTimerInfo.md#setpropboolbypath)
- [setPropByPath](TTimerInfo.md#setpropbypath)
- [setPropDouble](TTimerInfo.md#setpropdouble)
- [setPropFloat](TTimerInfo.md#setpropfloat)
- [setPropFloatByPath](TTimerInfo.md#setpropfloatbypath)
- [setPropInt](TTimerInfo.md#setpropint)
- [setPropInt16](TTimerInfo.md#setpropint16)
- [setPropInt32](TTimerInfo.md#setpropint32)
- [setPropInt64](TTimerInfo.md#setpropint64)
- [setPropInt8](TTimerInfo.md#setpropint8)
- [setPropIntByPath](TTimerInfo.md#setpropintbypath)
- [setPropObject](TTimerInfo.md#setpropobject)
- [setPropObjectByPath](TTimerInfo.md#setpropobjectbypath)
- [setPropStr](TTimerInfo.md#setpropstr)
- [setPropStrByPath](TTimerInfo.md#setpropstrbypath)
- [setPropUint16](TTimerInfo.md#setpropuint16)
- [setPropUint32](TTimerInfo.md#setpropuint32)
- [setPropUint64](TTimerInfo.md#setpropuint64)
- [setPropUint8](TTimerInfo.md#setpropuint8)
- [unref](TTimerInfo.md#unref)
- [cast](TTimerInfo.md#cast)
- [create](TTimerInfo.md#create)
- [ref](TTimerInfo.md#ref)

## Constructors

### constructor

• **new TTimerInfo**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TObject](TObject.md).[constructor](TObject.md#constructor)

#### Defined in

[awtk.ts:27785](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L27785)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TObject](TObject.md).[nativeObj](TObject.md#nativeobj)

#### Defined in

[awtk.ts:27784](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L27784)

## Accessors

### ctx

• `get` **ctx**(): `any`

定时器回调函数的上下文

#### Returns

`any`

#### Defined in

[awtk.ts:27806](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L27806)

___

### extraCtx

• `get` **extraCtx**(): `any`

定时器回调函数的上下文

#### Returns

`any`

#### Defined in

[awtk.ts:27815](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L27815)

___

### id

• `get` **id**(): `number`

定时器的ID

> 为TK\_INVALID\_ID时表示无效定时器。

#### Returns

`number`

#### Defined in

[awtk.ts:27826](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L27826)

___

### name

• `get` **name**(): `string`

对象的名称。

#### Returns

`string`

#### Inherited from

TObject.name

#### Defined in

[awtk.ts:3521](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3521)

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

[awtk.ts:3525](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3525)

___

### now

• `get` **now**(): `number`

当前时间(相对时间，单位为毫秒)。

#### Returns

`number`

#### Defined in

[awtk.ts:27835](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L27835)

___

### refCount

• `get` **refCount**(): `number`

引用计数。

#### Returns

`number`

#### Inherited from

TObject.refCount

#### Defined in

[awtk.ts:3512](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3512)

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

[awtk.ts:3078](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3078)

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

[awtk.ts:3282](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3282)

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

[awtk.ts:2810](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2810)

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

[awtk.ts:3027](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3027)

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

[awtk.ts:3040](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3040)

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

[awtk.ts:2392](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2392)

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

[awtk.ts:2381](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2381)

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

[awtk.ts:2317](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2317)

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

[awtk.ts:2331](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2331)

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

[awtk.ts:2368](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2368)

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

[awtk.ts:3065](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3065)

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

[awtk.ts:3091](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3091)

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

[awtk.ts:3295](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3295)

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

[awtk.ts:2764](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2764)

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

[awtk.ts:2823](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2823)

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

[awtk.ts:2885](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2885)

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

[awtk.ts:3176](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3176)

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

[awtk.ts:2911](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2911)

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

[awtk.ts:2898](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2898)

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

[awtk.ts:3191](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3191)

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

[awtk.ts:2872](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2872)

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

[awtk.ts:3360](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3360)

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

[awtk.ts:3412](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3412)

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

[awtk.ts:3464](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3464)

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

[awtk.ts:3308](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3308)

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

[awtk.ts:3163](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3163)

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

[awtk.ts:2859](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2859)

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

[awtk.ts:3150](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3150)

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

[awtk.ts:2847](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2847)

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

[awtk.ts:3138](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3138)

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

[awtk.ts:2835](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2835)

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

[awtk.ts:3126](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3126)

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

[awtk.ts:3386](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3386)

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

[awtk.ts:3438](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3438)

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

[awtk.ts:3490](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3490)

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

[awtk.ts:3334](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3334)

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

[awtk.ts:2775](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2775)

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

[awtk.ts:2753](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2753)

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

[awtk.ts:3052](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3052)

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

[awtk.ts:3114](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3114)

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

[awtk.ts:2786](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2786)

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

[awtk.ts:3102](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3102)

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

[awtk.ts:2357](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2357)

___

### on

▸ **on**(`etype`, `handler`, `ctx`): `number`

注册指定事件的处理函数。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `etype` | `number` | 事件类型。 |
| `handler` | `Function` | 事件处理函数。 |
| `ctx` | `any` | 事件处理函数上下文。 |

#### Returns

`number`

返回id，用于emitter_off。

#### Inherited from

[TObject](TObject.md).[on](TObject.md#on)

#### Defined in

[awtk.ts:2345](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2345)

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

[awtk.ts:2923](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2923)

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

[awtk.ts:2798](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2798)

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

[awtk.ts:2936](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2936)

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

[awtk.ts:2988](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2988)

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

[awtk.ts:3256](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3256)

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

[awtk.ts:3204](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3204)

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

[awtk.ts:3014](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3014)

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

[awtk.ts:3001](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3001)

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

[awtk.ts:3269](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3269)

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

[awtk.ts:2975](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2975)

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

[awtk.ts:3373](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3373)

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

[awtk.ts:3425](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3425)

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

[awtk.ts:3477](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3477)

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

[awtk.ts:3321](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3321)

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

[awtk.ts:3243](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3243)

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

[awtk.ts:2962](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2962)

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

[awtk.ts:3230](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3230)

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

[awtk.ts:2949](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2949)

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

[awtk.ts:3217](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3217)

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

[awtk.ts:3399](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3399)

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

[awtk.ts:3451](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3451)

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

[awtk.ts:3503](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3503)

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

[awtk.ts:3347](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3347)

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

[awtk.ts:2730](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2730)

___

### cast

▸ `Static` **cast**(`timer`): [`TTimerInfo`](TTimerInfo.md)

转换为timer_info对象(供脚本语言使用)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `timer` | [`TTimerInfo`](TTimerInfo.md) | timer_info对象。 |

#### Returns

[`TTimerInfo`](TTimerInfo.md)

timer_info对象。

#### Overrides

[TObject](TObject.md).[cast](TObject.md#cast)

#### Defined in

[awtk.ts:27797](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L27797)

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

[awtk.ts:2304](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2304)

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

[awtk.ts:2742](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2742)
