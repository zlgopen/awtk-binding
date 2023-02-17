[AWTK](../README.md) / [Exports](../modules.md) / TAssetInfo

# Class: TAssetInfo

单个资源的描述信息。

## Table of contents

### Constructors

- [constructor](TAssetInfo.md#constructor)

### Properties

- [nativeObj](TAssetInfo.md#nativeobj)

### Accessors

- [flags](TAssetInfo.md#flags)
- [refcount](TAssetInfo.md#refcount)
- [size](TAssetInfo.md#size)
- [subtype](TAssetInfo.md#subtype)
- [type](TAssetInfo.md#type)

### Methods

- [getName](TAssetInfo.md#getname)
- [getType](TAssetInfo.md#gettype)
- [isInRom](TAssetInfo.md#isinrom)
- [setIsInRom](TAssetInfo.md#setisinrom)

## Constructors

### constructor

• **new TAssetInfo**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:12559](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12559)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:12558](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12558)

## Accessors

### flags

• `get` **flags**(): `number`

资源标志。

#### Returns

`number`

#### Defined in

[awtk.ts:12631](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12631)

___

### refcount

• `get` **refcount**(): `number`

引用计数。
is\_in\_rom == FALSE时才有效。

#### Returns

`number`

#### Defined in

[awtk.ts:12650](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12650)

___

### size

• `get` **size**(): `number`

大小。

#### Returns

`number`

#### Defined in

[awtk.ts:12640](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12640)

___

### subtype

• `get` **subtype**(): `number`

子类型。

#### Returns

`number`

#### Defined in

[awtk.ts:12622](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12622)

___

### type

• `get` **type**(): `number`

类型。

#### Returns

`number`

#### Defined in

[awtk.ts:12613](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12613)

## Methods

### getName

▸ **getName**(): `string`

获取名称。

#### Returns

`string`

返回名称。

#### Defined in

[awtk.ts:12581](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12581)

___

### getType

▸ **getType**(): `number`

获取类型。

#### Returns

`number`

返回类型。

#### Defined in

[awtk.ts:12570](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12570)

___

### isInRom

▸ **isInRom**(): `boolean`

资源是否在ROM中。

#### Returns

`boolean`

返回 TRUE 为在 ROM 中，返回 FALSE 则不在。

#### Defined in

[awtk.ts:12592](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12592)

___

### setIsInRom

▸ **setIsInRom**(`is_in_rom`): [`TRet`](../enums/TRet.md)

设置资源是否在ROM中的标记位。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `is_in_rom` | `boolean` | 资源是否在ROM中。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12604](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12604)
