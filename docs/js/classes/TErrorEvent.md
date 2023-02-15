[AWTK](../README.md) / [Exports](../modules.md) / TErrorEvent

# Class: TErrorEvent

执行完成事件。

## Hierarchy

- [`TEvent`](TEvent.md)

  ↳ **`TErrorEvent`**

## Table of contents

### Constructors

- [constructor](TErrorEvent.md#constructor)

### Properties

- [nativeObj](TErrorEvent.md#nativeobj)

### Accessors

- [code](TErrorEvent.md#code)
- [message](TErrorEvent.md#message)
- [size](TErrorEvent.md#size)
- [target](TErrorEvent.md#target)
- [time](TErrorEvent.md#time)
- [type](TErrorEvent.md#type)

### Methods

- [destroy](TErrorEvent.md#destroy)
- [getType](TErrorEvent.md#gettype)
- [cast](TErrorEvent.md#cast)
- [create](TErrorEvent.md#create)
- [fromName](TErrorEvent.md#fromname)

## Constructors

### constructor

• **new TErrorEvent**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TEvent](TEvent.md).[constructor](TEvent.md#constructor)

#### Defined in

[awtk.ts:22948](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L22948)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TEvent](TEvent.md).[nativeObj](TEvent.md#nativeobj)

#### Defined in

[awtk.ts:22947](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L22947)

## Accessors

### code

• `get` **code**(): `number`

错误码。

#### Returns

`number`

#### Defined in

[awtk.ts:22969](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L22969)

___

### message

• `get` **message**(): `string`

错误信息。

#### Returns

`string`

#### Defined in

[awtk.ts:22978](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L22978)

___

### size

• `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Inherited from

TEvent.size

#### Defined in

[awtk.ts:5569](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L5569)

___

### target

• `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Inherited from

TEvent.target

#### Defined in

[awtk.ts:5587](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L5587)

___

### time

• `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Inherited from

TEvent.time

#### Defined in

[awtk.ts:5578](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L5578)

___

### type

• `get` **type**(): `number`

类型。

#### Returns

`number`

#### Inherited from

TEvent.type

#### Defined in

[awtk.ts:5560](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L5560)

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

[awtk.ts:5551](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L5551)

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

[awtk.ts:5524](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L5524)

___

### cast

▸ `Static` **cast**(`event`): [`TErrorEvent`](TErrorEvent.md)

把event对象转error_event_t对象，主要给脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `event` | [`TEvent`](TEvent.md) | event对象。 |

#### Returns

[`TErrorEvent`](TErrorEvent.md)

返回event对象。

#### Overrides

[TEvent](TEvent.md).[cast](TEvent.md#cast)

#### Defined in

[awtk.ts:22960](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L22960)

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

[awtk.ts:5538](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L5538)

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

[awtk.ts:5499](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L5499)
