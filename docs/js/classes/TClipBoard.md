[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TClipBoard

# Class: TClipBoard

Defined in: [awtk.ts:4990](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4990)

剪切板接口。

## Constructors

### Constructor

> **new TClipBoard**(`nativeObj`): `TClipBoard`

Defined in: [awtk.ts:4992](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4992)

#### Parameters

##### nativeObj

`any`

#### Returns

`TClipBoard`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:4991](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4991)

## Methods

### getText()

> `static` **getText**(): `string`

Defined in: [awtk.ts:5015](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L5015)

从剪切板中获取文本(UTF8)数据。

#### Returns

`string`

返回文本数据。

***

### setText()

> `static` **setText**(`text`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:5004](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L5004)

设置文本(UTF8)数据到剪切板。

#### Parameters

##### text

`string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。
