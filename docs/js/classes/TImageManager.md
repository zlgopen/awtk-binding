[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TImageManager

# Class: TImageManager

图片管理器。负责加载，解码和缓存图片。

## Constructors

### new TImageManager()

> **new TImageManager**(`nativeObj`): [`TImageManager`](TImageManager.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TImageManager`](TImageManager.md)

#### Defined in

[awtk.ts:5981](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5981)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:5980](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5980)

## Methods

### getBitmap()

> **getBitmap**(`name`, `image`): [`TRet`](../enumerations/TRet.md)

获取指定的图片。
先从缓存查找，如果没找到，再加载并缓存。

#### Parameters

• **name**: `string`

图片名称。

• **image**: [`TBitmap`](TBitmap.md)

用于返回图片。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:6006](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L6006)

***

### preload()

> **preload**(`name`): [`TRet`](../enumerations/TRet.md)

预加载指定的图片。

#### Parameters

• **name**: `string`

图片名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:6018](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L6018)

***

### instance()

> `static` **instance**(): [`TImageManager`](TImageManager.md)

获取缺省的图片管理器。

#### Returns

[`TImageManager`](TImageManager.md)

返回图片管理器对象。

#### Defined in

[awtk.ts:5992](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5992)
