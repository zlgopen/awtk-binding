[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TImageManager

# Class: TImageManager

Defined in: [awtk.ts:6081](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6081)

图片管理器。负责加载，解码和缓存图片。

## Constructors

### Constructor

> **new TImageManager**(`nativeObj`): `TImageManager`

Defined in: [awtk.ts:6083](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6083)

#### Parameters

##### nativeObj

`any`

#### Returns

`TImageManager`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:6082](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6082)

## Methods

### getBitmap()

> **getBitmap**(`name`, `image`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:6108](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6108)

获取指定的图片。
先从缓存查找，如果没找到，再加载并缓存。

#### Parameters

##### name

`string`

图片名称。

##### image

[`TBitmap`](TBitmap.md)

用于返回图片。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### preload()

> **preload**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:6120](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6120)

预加载指定的图片。

#### Parameters

##### name

`string`

图片名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### instance()

> `static` **instance**(): `TImageManager`

Defined in: [awtk.ts:6094](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6094)

获取缺省的图片管理器。

#### Returns

`TImageManager`

返回图片管理器对象。
