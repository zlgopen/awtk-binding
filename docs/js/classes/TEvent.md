[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TEvent

# Class: TEvent

事件基类。

## Extended by

- [`TWidgetAnimatorEvent`](TWidgetAnimatorEvent.md)
- [`TModelEvent`](TModelEvent.md)
- [`TWheelEvent`](TWheelEvent.md)
- [`TOrientationEvent`](TOrientationEvent.md)
- [`TOffsetChangeEvent`](TOffsetChangeEvent.md)
- [`TPointerEvent`](TPointerEvent.md)
- [`TKeyEvent`](TKeyEvent.md)
- [`TPaintEvent`](TPaintEvent.md)
- [`TWindowEvent`](TWindowEvent.md)
- [`TMultiGestureEvent`](TMultiGestureEvent.md)
- [`TThemeChangeEvent`](TThemeChangeEvent.md)
- [`TDropFileEvent`](TDropFileEvent.md)
- [`TSystemEvent`](TSystemEvent.md)
- [`TUiLoadEvent`](TUiLoadEvent.md)
- [`TPropChangeEvent`](TPropChangeEvent.md)
- [`TProgressEvent`](TProgressEvent.md)
- [`TDoneEvent`](TDoneEvent.md)
- [`TErrorEvent`](TErrorEvent.md)
- [`TCmdExecEvent`](TCmdExecEvent.md)
- [`TValueChangeEvent`](TValueChangeEvent.md)
- [`TLogMessageEvent`](TLogMessageEvent.md)

## Constructors

### new TEvent()

> **new TEvent**(`nativeObj`): [`TEvent`](TEvent.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TEvent`](TEvent.md)

#### Defined in

[awtk.ts:5683](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5683)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:5682](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5682)

## Accessors

### size

> `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Defined in

[awtk.ts:5765](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5765)

***

### target

> `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Defined in

[awtk.ts:5783](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5783)

***

### time

> `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Defined in

[awtk.ts:5774](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5774)

***

### type

> `get` **type**(): `number`

类型。

#### Returns

`number`

#### Defined in

[awtk.ts:5756](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5756)

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁事件对象。

主要给脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5747](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5747)

***

### getType()

> **getType**(): `number`

获取event类型。

#### Returns

`number`

返回event类型。

#### Defined in

[awtk.ts:5720](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5720)

***

### cast()

> `static` **cast**(`event`): [`TEvent`](TEvent.md)

转换为event对象。

> 供脚本语言使用

#### Parameters

• **event**: [`TEvent`](TEvent.md)

event对象。

#### Returns

[`TEvent`](TEvent.md)

event对象。

#### Defined in

[awtk.ts:5709](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5709)

***

### create()

> `static` **create**(`type`): [`TEvent`](TEvent.md)

创建event对象。

主要给脚本语言使用。

#### Parameters

• **type**: `number`

事件类型。

#### Returns

[`TEvent`](TEvent.md)

返回事件对象。

#### Defined in

[awtk.ts:5734](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5734)

***

### fromName()

> `static` **fromName**(`name`): `number`

将事件名转换成事件的值。

#### Parameters

• **name**: `string`

事件名。

#### Returns

`number`

返回事件的值。

#### Defined in

[awtk.ts:5695](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5695)
