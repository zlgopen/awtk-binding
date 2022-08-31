[AWTK](../README.md) / [Exports](../modules.md) / TImageManager

# Class: TImageManager

图片管理器。负责加载，解码和缓存图片。

## Table of contents

### Constructors

- [constructor](TImageManager.md#constructor)

### Properties

- [nativeObj](TImageManager.md#nativeobj)

### Methods

- [getBitmap](TImageManager.md#getbitmap)
- [preload](TImageManager.md#preload)
- [instance](TImageManager.md#instance)

## Constructors

### constructor

• **new TImageManager**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:5676](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L5676)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:5675](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L5675)

## Methods

### getBitmap

▸ **getBitmap**(`name`, `image`): [`TRet`](../enums/TRet.md)

获取指定的图片。
先从缓存查找，如果没找到，再加载并缓存。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 图片名称。 |
| `image` | [`TBitmap`](TBitmap.md) | 用于返回图片。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5701](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L5701)

___

### preload

▸ **preload**(`name`): [`TRet`](../enums/TRet.md)

预加载指定的图片。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 图片名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5713](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L5713)

___

### instance

▸ `Static` **instance**(): [`TImageManager`](TImageManager.md)

获取缺省的图片管理器。

#### Returns

[`TImageManager`](TImageManager.md)

返回图片管理器对象。

#### Defined in

[awtk.ts:5687](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L5687)
