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

[awtk.ts:5426](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5426)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:5425](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5425)

## Accessors

### size

• `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Defined in

[awtk.ts:5508](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5508)

___

### target

• `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Defined in

[awtk.ts:5526](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5526)

___

### time

• `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Defined in

[awtk.ts:5517](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5517)

___

### type

• `get` **type**(): `number`

类型。

#### Returns

`number`

#### Defined in

[awtk.ts:5499](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5499)

## Methods

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁事件对象。

主要给脚本语言使用。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5490](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5490)

___

### getType

▸ **getType**(): `number`

获取event类型。

#### Returns

`number`

返回event类型。

#### Defined in

[awtk.ts:5463](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5463)

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

[awtk.ts:5452](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5452)

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

[awtk.ts:5477](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5477)

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

[awtk.ts:5438](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5438)
