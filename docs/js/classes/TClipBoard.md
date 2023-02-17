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

[awtk.ts:4760](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4760)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:4759](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4759)

## Methods

### getText

▸ `Static` **getText**(): `string`

从剪切板中获取文本(UTF8)数据。

#### Returns

`string`

返回文本数据。

#### Defined in

[awtk.ts:4783](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4783)

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

[awtk.ts:4772](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4772)
