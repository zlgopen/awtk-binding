[AWTK](../README.md) / [Exports](../modules.md) / TThemeChangeEvent

# Class: TThemeChangeEvent

主题变化事件。

## Hierarchy

- [`TEvent`](TEvent.md)

  ↳ **`TThemeChangeEvent`**

## Table of contents

### Constructors

- [constructor](TThemeChangeEvent.md#constructor)

### Properties

- [nativeObj](TThemeChangeEvent.md#nativeobj)

### Accessors

- [name](TThemeChangeEvent.md#name)
- [size](TThemeChangeEvent.md#size)
- [target](TThemeChangeEvent.md#target)
- [time](TThemeChangeEvent.md#time)
- [type](TThemeChangeEvent.md#type)

### Methods

- [destroy](TThemeChangeEvent.md#destroy)
- [getType](TThemeChangeEvent.md#gettype)
- [cast](TThemeChangeEvent.md#cast)
- [create](TThemeChangeEvent.md#create)
- [fromName](TThemeChangeEvent.md#fromname)

## Constructors

### constructor

• **new TThemeChangeEvent**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TEvent](TEvent.md).[constructor](TEvent.md#constructor)

#### Defined in

[awtk.ts:15153](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L15153)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TEvent](TEvent.md).[nativeObj](TEvent.md#nativeobj)

#### Defined in

[awtk.ts:15152](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L15152)

## Accessors

### name

• `get` **name**(): `string`

主题名称。

#### Returns

`string`

#### Defined in

[awtk.ts:15174](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L15174)

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

▸ `Static` **cast**(`event`): [`TThemeChangeEvent`](TThemeChangeEvent.md)

把event对象转theme_change_event_t对象，主要给脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `event` | [`TEvent`](TEvent.md) | event对象。 |

#### Returns

[`TThemeChangeEvent`](TThemeChangeEvent.md)

返回event对象。

#### Overrides

[TEvent](TEvent.md).[cast](TEvent.md#cast)

#### Defined in

[awtk.ts:15165](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L15165)

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
