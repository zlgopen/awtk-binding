[AWTK](../README.md) / [Exports](../modules.md) / TClipBoard

# Class: TClipBoard

剪切板接口。

## Table of contents

### Constructors

- [constructor](TClipBoard.md#constructor)

### Properties

- [nativeObj](TClipBoard.md#nativeobj)

### Methods

- [getText](TClipBoard.md#gettext)
- [setText](TClipBoard.md#settext)

## Constructors

### constructor

• **new TClipBoard**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:4691](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L4691)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:4690](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L4690)

## Methods

### getText

▸ `Static` **getText**(): `string`

从剪切板中获取文本(UTF8)数据。

#### Returns

`string`

返回文本数据。

#### Defined in

[awtk.ts:4714](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L4714)

___

### setText

▸ `Static` **setText**(`text`): [`TRet`](../enums/TRet.md)

设置文本(UTF8)数据到剪切板。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `text` | `string` | 文本。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4703](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L4703)
