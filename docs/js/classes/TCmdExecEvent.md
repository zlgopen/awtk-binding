[AWTK](../README.md) / [Exports](../modules.md) / TCmdExecEvent

# Class: TCmdExecEvent

对象执行命令的事件。

## Hierarchy

- [`TEvent`](TEvent.md)

  ↳ **`TCmdExecEvent`**

## Table of contents

### Constructors

- [constructor](TCmdExecEvent.md#constructor)

### Properties

- [nativeObj](TCmdExecEvent.md#nativeobj)

### Accessors

- [args](TCmdExecEvent.md#args)
- [canExec](TCmdExecEvent.md#canexec)
- [name](TCmdExecEvent.md#name)
- [result](TCmdExecEvent.md#result)
- [size](TCmdExecEvent.md#size)
- [target](TCmdExecEvent.md#target)
- [time](TCmdExecEvent.md#time)
- [type](TCmdExecEvent.md#type)

### Methods

- [destroy](TCmdExecEvent.md#destroy)
- [getType](TCmdExecEvent.md#gettype)
- [cast](TCmdExecEvent.md#cast)
- [create](TCmdExecEvent.md#create)
- [fromName](TCmdExecEvent.md#fromname)

## Constructors

### constructor

• **new TCmdExecEvent**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TEvent](TEvent.md).[constructor](TEvent.md#constructor)

#### Defined in

[awtk.ts:22989](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L22989)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TEvent](TEvent.md).[nativeObj](TEvent.md#nativeobj)

#### Defined in

[awtk.ts:22988](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L22988)

## Accessors

### args

• `get` **args**(): `string`

命令的参数。

#### Returns

`string`

#### Defined in

[awtk.ts:23019](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L23019)

___

### canExec

• `get` **canExec**(): `boolean`

标识命令是否可以执行(适用于CAN_EXEC)。

#### Returns

`boolean`

#### Defined in

[awtk.ts:23037](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L23037)

___

### name

• `get` **name**(): `string`

命令的名称。

#### Returns

`string`

#### Defined in

[awtk.ts:23010](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L23010)

___

### result

• `get` **result**(): [`TRet`](../enums/TRet.md)

执行结果(适用于EXECED)。

#### Returns

[`TRet`](../enums/TRet.md)

#### Defined in

[awtk.ts:23028](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L23028)

___

### size

• `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Inherited from

TEvent.size

#### Defined in

[awtk.ts:5569](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5569)

___

### target

• `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Inherited from

TEvent.target

#### Defined in

[awtk.ts:5587](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5587)

___

### time

• `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Inherited from

TEvent.time

#### Defined in

[awtk.ts:5578](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5578)

___

### type

• `get` **type**(): `number`

类型。

#### Returns

`number`

#### Inherited from

TEvent.type

#### Defined in

[awtk.ts:5560](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5560)

## Methods

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁事件对象。

主要给脚本语言使用。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEvent](TEvent.md).[destroy](TEvent.md#destroy)

#### Defined in

[awtk.ts:5551](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5551)

___

### getType

▸ **getType**(): `number`

获取event类型。

#### Returns

`number`

返回event类型。

#### Inherited from

[TEvent](TEvent.md).[getType](TEvent.md#gettype)

#### Defined in

[awtk.ts:5524](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5524)

___

### cast

▸ `Static` **cast**(`event`): [`TCmdExecEvent`](TCmdExecEvent.md)

把event对象转cmd_exec_event_t对象，主要给脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `event` | [`TEvent`](TEvent.md) | event对象。 |

#### Returns

[`TCmdExecEvent`](TCmdExecEvent.md)

返回event对象。

#### Overrides

[TEvent](TEvent.md).[cast](TEvent.md#cast)

#### Defined in

[awtk.ts:23001](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L23001)

___

### create

▸ `Static` **create**(`type`): [`TEvent`](TEvent.md)

创建event对象。

主要给脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `type` | `number` | 事件类型。 |

#### Returns

[`TEvent`](TEvent.md)

返回事件对象。

#### Inherited from

[TEvent](TEvent.md).[create](TEvent.md#create)

#### Defined in

[awtk.ts:5538](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5538)

___

### fromName

▸ `Static` **fromName**(`name`): `number`

将事件名转换成事件的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 事件名。 |

#### Returns

`number`

返回事件的值。

#### Inherited from

[TEvent](TEvent.md).[fromName](TEvent.md#fromname)

#### Defined in

[awtk.ts:5499](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5499)
