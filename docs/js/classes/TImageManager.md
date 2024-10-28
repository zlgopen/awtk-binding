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

[awtk.ts:5932](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L5932)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:5931](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L5931)

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

[awtk.ts:5957](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L5957)

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

[awtk.ts:5969](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L5969)

***

### instance()

> `static` **instance**(): [`TImageManager`](TImageManager.md)

获取缺省的图片管理器。

#### Returns

[`TImageManager`](TImageManager.md)

返回图片管理器对象。

#### Defined in

[awtk.ts:5943](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L5943)
