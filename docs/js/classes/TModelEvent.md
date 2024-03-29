[AWTK](../README.md) / [Exports](../modules.md) / TModelEvent

# Class: TModelEvent

model变化事件。

## Hierarchy

- [`TEvent`](TEvent.md)

  ↳ **`TModelEvent`**

## Table of contents

### Constructors

- [constructor](TModelEvent.md#constructor)

### Properties

- [nativeObj](TModelEvent.md#nativeobj)

### Accessors

- [changeType](TModelEvent.md#changetype)
- [model](TModelEvent.md#model)
- [name](TModelEvent.md#name)
- [size](TModelEvent.md#size)
- [target](TModelEvent.md#target)
- [time](TModelEvent.md#time)
- [type](TModelEvent.md#type)

### Methods

- [destroy](TModelEvent.md#destroy)
- [getType](TModelEvent.md#gettype)
- [cast](TModelEvent.md#cast)
- [create](TModelEvent.md#create)
- [fromName](TModelEvent.md#fromname)

## Constructors

### constructor

• **new TModelEvent**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TEvent](TEvent.md).[constructor](TEvent.md#constructor)

#### Defined in

[awtk.ts:14602](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14602)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TEvent](TEvent.md).[nativeObj](TEvent.md#nativeobj)

#### Defined in

[awtk.ts:14601](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14601)

## Accessors

### changeType

• `get` **changeType**(): `string`

变化类型(update/add/remove)。

#### Returns

`string`

#### Defined in

[awtk.ts:14632](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14632)

___

### model

• `get` **model**(): [`TObject`](TObject.md)

模型。

#### Returns

[`TObject`](TObject.md)

#### Defined in

[awtk.ts:14641](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14641)

___

### name

• `get` **name**(): `string`

模型名称。

#### Returns

`string`

#### Defined in

[awtk.ts:14623](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14623)

___

### size

• `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Inherited from

TEvent.size

#### Defined in

[awtk.ts:5583](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5583)

___

### target

• `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Inherited from

TEvent.target

#### Defined in

[awtk.ts:5601](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5601)

___

### time

• `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Inherited from

TEvent.time

#### Defined in

[awtk.ts:5592](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5592)

___

### type

• `get` **type**(): `number`

类型。

#### Returns

`number`

#### Inherited from

TEvent.type

#### Defined in

[awtk.ts:5574](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5574)

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

[awtk.ts:5565](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5565)

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

[awtk.ts:5538](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5538)

___

### cast

▸ `Static` **cast**(`event`): [`TModelEvent`](TModelEvent.md)

把event对象转model_event_t对象，主要给脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `event` | [`TEvent`](TEvent.md) | event对象。 |

#### Returns

[`TModelEvent`](TModelEvent.md)

event对象。

#### Overrides

[TEvent](TEvent.md).[cast](TEvent.md#cast)

#### Defined in

[awtk.ts:14614](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14614)

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

[awtk.ts:5552](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5552)

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

[awtk.ts:5513](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5513)
