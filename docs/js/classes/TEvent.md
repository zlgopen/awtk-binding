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
- [`TTouchEvent`](TTouchEvent.md)
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

[awtk.ts:5768](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5768)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:5767](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5767)

## Accessors

### size

> `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Defined in

[awtk.ts:5875](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5875)

***

### target

> `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Defined in

[awtk.ts:5893](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5893)

***

### time

> `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Defined in

[awtk.ts:5884](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5884)

***

### type

> `get` **type**(): `number`

类型。

#### Returns

`number`

#### Defined in

[awtk.ts:5866](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5866)

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁事件对象。

主要给脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5857](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5857)

***

### getType()

> **getType**(): `number`

获取event类型。

#### Returns

`number`

返回event类型。

#### Defined in

[awtk.ts:5830](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5830)

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

[awtk.ts:5819](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5819)

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

[awtk.ts:5844](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5844)

***

### fromName()

> `static` **fromName**(`name`): `number`

将事件名转换成事件的类型。

#### Parameters

• **name**: `string`

事件名。

#### Returns

`number`

返回事件的类型。

#### Defined in

[awtk.ts:5780](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5780)

***

### registerCustomName()

> `static` **registerCustomName**(`event_type`, `name`): [`TRet`](../enumerations/TRet.md)

给事件注册名称。

#### Parameters

• **event\_type**: `number`

事件类型。

• **name**: `string`

事件名。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5793](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5793)

***

### unregisterCustomName()

> `static` **unregisterCustomName**(`name`): [`TRet`](../enumerations/TRet.md)

注销事件名称。

#### Parameters

• **name**: `string`

事件名。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5805](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5805)
