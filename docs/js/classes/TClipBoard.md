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

[awtk.ts:4954](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L4954)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:4953](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L4953)

## Methods

### getText()

> `static` **getText**(): `string`

从剪切板中获取文本(UTF8)数据。

#### Returns

`string`

返回文本数据。

#### Defined in

[awtk.ts:4977](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L4977)

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

[awtk.ts:4966](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L4966)
