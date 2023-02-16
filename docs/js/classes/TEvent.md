[AWTK](../README.md) / [Exports](../modules.md) / TEvent

# Class: TEvent

事件基类。

## Hierarchy

- **`TEvent`**

  ↳ [`TModelEvent`](TModelEvent.md)

  ↳ [`TWheelEvent`](TWheelEvent.md)

  ↳ [`TOrientationEvent`](TOrientationEvent.md)

  ↳ [`TValueChangeEvent`](TValueChangeEvent.md)

  ↳ [`TOffsetChangeEvent`](TOffsetChangeEvent.md)

  ↳ [`TPointerEvent`](TPointerEvent.md)

  ↳ [`TKeyEvent`](TKeyEvent.md)

  ↳ [`TPaintEvent`](TPaintEvent.md)

  ↳ [`TWindowEvent`](TWindowEvent.md)

  ↳ [`TMultiGestureEvent`](TMultiGestureEvent.md)

  ↳ [`TThemeChangeEvent`](TThemeChangeEvent.md)

  ↳ [`TSystemEvent`](TSystemEvent.md)

  ↳ [`TPropChangeEvent`](TPropChangeEvent.md)

  ↳ [`TProgressEvent`](TProgressEvent.md)

  ↳ [`TDoneEvent`](TDoneEvent.md)

  ↳ [`TErrorEvent`](TErrorEvent.md)

  ↳ [`TCmdExecEvent`](TCmdExecEvent.md)

## Table of contents

### Constructors

- [constructor](TEvent.md#constructor)

### Properties

- [nativeObj](TEvent.md#nativeobj)

### Accessors

- [size](TEvent.md#size)
- [target](TEvent.md#target)
- [time](TEvent.md#time)
- [type](TEvent.md#type)

### Methods

- [destroy](TEvent.md#destroy)
- [getType](TEvent.md#gettype)
- [cast](TEvent.md#cast)
- [create](TEvent.md#create)
- [fromName](TEvent.md#fromname)

## Constructors

### constructor

• **new TEvent**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:5487](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5487)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:5486](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5486)

## Accessors

### size

• `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Defined in

[awtk.ts:5569](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5569)

___

### target

• `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Defined in

[awtk.ts:5587](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5587)

___

### time

• `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Defined in

[awtk.ts:5578](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5578)

___

### type

• `get` **type**(): `number`

类型。

#### Returns

`number`

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

#### Defined in

[awtk.ts:5551](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5551)

___

### getType

▸ **getType**(): `number`

获取event类型。

#### Returns

`number`

返回event类型。

#### Defined in

[awtk.ts:5524](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5524)

___

### cast

▸ `Static` **cast**(`event`): [`TEvent`](TEvent.md)

转换为event对象。

> 供脚本语言使用

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `event` | [`TEvent`](TEvent.md) | event对象。 |

#### Returns

[`TEvent`](TEvent.md)

event对象。

#### Defined in

[awtk.ts:5513](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5513)

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

#### Defined in

[awtk.ts:5499](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5499)
