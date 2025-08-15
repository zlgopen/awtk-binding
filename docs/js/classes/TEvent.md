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

[awtk.ts:5790](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5790)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:5789](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5789)

## Accessors

### size

> `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Defined in

[awtk.ts:5897](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5897)

***

### target

> `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Defined in

[awtk.ts:5915](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5915)

***

### time

> `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Defined in

[awtk.ts:5906](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5906)

***

### type

> `get` **type**(): `number`

类型。

#### Returns

`number`

#### Defined in

[awtk.ts:5888](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5888)

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁事件对象。

主要给脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5879](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5879)

***

### getType()

> **getType**(): `number`

获取event类型。

#### Returns

`number`

返回event类型。

#### Defined in

[awtk.ts:5852](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5852)

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

[awtk.ts:5841](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5841)

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

[awtk.ts:5866](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5866)

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

[awtk.ts:5802](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5802)

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

[awtk.ts:5815](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5815)

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

[awtk.ts:5827](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5827)
