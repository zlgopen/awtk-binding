[AWTK](../README.md) / [Exports](../modules.md) / TFontManager

# Class: TFontManager

字体管理器，负责字体的加载和缓存管理。
(如果使用nanovg，字体由nanovg内部管理)

## Table of contents

### Constructors

- [constructor](TFontManager.md#constructor)

### Properties

- [nativeObj](TFontManager.md#nativeobj)

### Methods

- [shrinkCache](TFontManager.md#shrinkcache)
- [unloadAll](TFontManager.md#unloadall)
- [unloadFont](TFontManager.md#unloadfont)

## Constructors

### constructor

• **new TFontManager**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:5538](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5538)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:5537](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5537)

## Methods

### shrinkCache

▸ **shrinkCache**(`cache_size`): [`TRet`](../enums/TRet.md)

清除最久没有被使用的缓冲字模。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `cache_size` | `number` | 每种字体保留缓存字模的个数。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5563](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5563)

___

### unloadAll

▸ **unloadAll**(): [`TRet`](../enums/TRet.md)

卸载全部字体。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5574](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5574)

___

### unloadFont

▸ **unloadFont**(`name`, `size`): [`TRet`](../enums/TRet.md)

卸载指定的字体。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 字体名，为NULL时使用缺省字体。 |
| `size` | `number` | 字体的大小(矢量字体指定为0即可)。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5551](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5551)
