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

[awtk.ts:6003](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L6003)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:6002](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L6002)

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

[awtk.ts:6028](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L6028)

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

[awtk.ts:6040](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L6040)

***

### instance()

> `static` **instance**(): [`TImageManager`](TImageManager.md)

获取缺省的图片管理器。

#### Returns

[`TImageManager`](TImageManager.md)

返回图片管理器对象。

#### Defined in

[awtk.ts:6014](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L6014)
