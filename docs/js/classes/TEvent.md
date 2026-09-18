[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TEvent

# Class: TEvent

Defined in: [awtk.ts:5818](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L5818)

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
- [`TObjectFifoSetEvent`](TObjectFifoSetEvent.md)
- [`TObjectFifoPushEvent`](TObjectFifoPushEvent.md)
- [`TObjectFifoPushHeadEvent`](TObjectFifoPushHeadEvent.md)
- [`TObjectFifoPopEvent`](TObjectFifoPopEvent.md)
- [`TObjectFifoPopTailEvent`](TObjectFifoPopTailEvent.md)
- [`TObjectFifoValueChangeEvent`](TObjectFifoValueChangeEvent.md)

## Constructors

### Constructor

> **new TEvent**(`nativeObj`): `TEvent`

Defined in: [awtk.ts:5820](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L5820)

#### Parameters

##### nativeObj

`any`

#### Returns

`TEvent`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:5819](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L5819)

## Accessors

### size

#### Get Signature

> **get** **size**(): `number`

Defined in: [awtk.ts:5927](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L5927)

结构体的大小。

##### Returns

`number`

***

### target

#### Get Signature

> **get** **target**(): `any`

Defined in: [awtk.ts:5945](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L5945)

事件发生的目标对象。

##### Returns

`any`

***

### time

#### Get Signature

> **get** **time**(): `number`

Defined in: [awtk.ts:5936](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L5936)

事件发生的时间点（该时间点并非真实时间）。

##### Returns

`number`

***

### type

#### Get Signature

> **get** **type**(): `number`

Defined in: [awtk.ts:5918](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L5918)

类型。

##### Returns

`number`

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:5909](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L5909)

销毁事件对象。

主要给脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### getType()

> **getType**(): `number`

Defined in: [awtk.ts:5882](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L5882)

获取event类型。

#### Returns

`number`

返回event类型。

***

### cast()

> `static` **cast**(`event`): `TEvent`

Defined in: [awtk.ts:5871](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L5871)

转换为event对象。

> 供脚本语言使用

#### Parameters

##### event

`TEvent`

event对象。

#### Returns

`TEvent`

event对象。

***

### create()

> `static` **create**(`type`): `TEvent`

Defined in: [awtk.ts:5896](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L5896)

创建event对象。

主要给脚本语言使用。

#### Parameters

##### type

`number`

事件类型。

#### Returns

`TEvent`

返回事件对象。

***

### fromName()

> `static` **fromName**(`name`): `number`

Defined in: [awtk.ts:5832](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L5832)

将事件名转换成事件的类型。

#### Parameters

##### name

`string`

事件名。

#### Returns

`number`

返回事件的类型。

***

### registerCustomName()

> `static` **registerCustomName**(`event_type`, `name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:5845](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L5845)

给事件注册名称。

#### Parameters

##### event\_type

`number`

事件类型。

##### name

`string`

事件名。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### unregisterCustomName()

> `static` **unregisterCustomName**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:5857](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L5857)

注销事件名称。

#### Parameters

##### name

`string`

事件名。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。
