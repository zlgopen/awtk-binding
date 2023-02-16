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

[awtk.ts:12539](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12539)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:12538](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12538)

## Accessors

### flags

• `get` **flags**(): `number`

资源标志。

#### Returns

`number`

#### Defined in

[awtk.ts:12611](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12611)

___

### refcount

• `get` **refcount**(): `number`

引用计数。
is\_in\_rom == FALSE时才有效。

#### Returns

`number`

#### Defined in

[awtk.ts:12630](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12630)

___

### size

• `get` **size**(): `number`

大小。

#### Returns

`number`

#### Defined in

[awtk.ts:12620](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12620)

___

### subtype

• `get` **subtype**(): `number`

子类型。

#### Returns

`number`

#### Defined in

[awtk.ts:12602](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12602)

___

### type

• `get` **type**(): `number`

类型。

#### Returns

`number`

#### Defined in

[awtk.ts:12593](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12593)

## Methods

### getName

▸ **getName**(): `string`

获取名称。

#### Returns

`string`

返回名称。

#### Defined in

[awtk.ts:12561](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12561)

___

### getType

▸ **getType**(): `number`

获取类型。

#### Returns

`number`

返回类型。

#### Defined in

[awtk.ts:12550](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12550)

___

### isInRom

▸ **isInRom**(): `boolean`

资源是否在ROM中。

#### Returns

`boolean`

返回 TRUE 为在 ROM 中，返回 FALSE 则不在。

#### Defined in

[awtk.ts:12572](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12572)

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

[awtk.ts:12584](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12584)
