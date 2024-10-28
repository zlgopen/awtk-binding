[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TClipBoard

# Class: TClipBoard

剪切板接口。

## Constructors

### new TClipBoard()

> **new TClipBoard**(`nativeObj`): [`TClipBoard`](TClipBoard.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TClipBoard`](TClipBoard.md)

#### Defined in

[awtk.ts:4912](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L4912)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:4911](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L4911)

## Methods

### getText()

> `static` **getText**(): `string`

从剪切板中获取文本(UTF8)数据。

#### Returns

`string`

返回文本数据。

#### Defined in

[awtk.ts:4935](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L4935)

***

### setText()

> `static` **setText**(`text`): [`TRet`](../enumerations/TRet.md)

设置文本(UTF8)数据到剪切板。

#### Parameters

• **text**: `string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4924](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L4924)
