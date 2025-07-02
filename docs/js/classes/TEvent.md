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

[awtk.ts:5767](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5767)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:5766](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5766)

## Accessors

### size

> `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Defined in

[awtk.ts:5874](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5874)

***

### target

> `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Defined in

[awtk.ts:5892](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5892)

***

### time

> `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Defined in

[awtk.ts:5883](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5883)

***

### type

> `get` **type**(): `number`

类型。

#### Returns

`number`

#### Defined in

[awtk.ts:5865](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5865)

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁事件对象。

主要给脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5856](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5856)

***

### getType()

> **getType**(): `number`

获取event类型。

#### Returns

`number`

返回event类型。

#### Defined in

[awtk.ts:5829](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5829)

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

[awtk.ts:5818](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5818)

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

[awtk.ts:5843](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5843)

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

[awtk.ts:5779](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5779)

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

[awtk.ts:5792](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5792)

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

[awtk.ts:5804](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5804)
