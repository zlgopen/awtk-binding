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

[awtk.ts:5700](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5700)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:5699](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5699)

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

[awtk.ts:5725](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5725)

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

[awtk.ts:5737](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5737)

___

### instance

▸ `Static` **instance**(): [`TImageManager`](TImageManager.md)

获取缺省的图片管理器。

#### Returns

[`TImageManager`](TImageManager.md)

返回图片管理器对象。

#### Defined in

[awtk.ts:5711](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5711)
