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

[awtk.ts:4947](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4947)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:4946](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4946)

## Methods

### getText()

> `static` **getText**(): `string`

从剪切板中获取文本(UTF8)数据。

#### Returns

`string`

返回文本数据。

#### Defined in

[awtk.ts:4970](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4970)

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

[awtk.ts:4959](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4959)
