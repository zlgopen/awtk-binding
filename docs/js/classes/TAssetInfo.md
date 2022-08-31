[AWTK](../README.md) / [Exports](../modules.md) / TAssetInfo

# Class: TAssetInfo

单个资源的描述信息。

## Table of contents

### Constructors

- [constructor](TAssetInfo.md#constructor)

### Properties

- [nativeObj](TAssetInfo.md#nativeobj)

### Accessors

- [isInRom](TAssetInfo.md#isinrom)
- [name](TAssetInfo.md#name)
- [refcount](TAssetInfo.md#refcount)
- [size](TAssetInfo.md#size)
- [subtype](TAssetInfo.md#subtype)
- [type](TAssetInfo.md#type)

### Methods

- [getName](TAssetInfo.md#getname)
- [getType](TAssetInfo.md#gettype)

## Constructors

### constructor

• **new TAssetInfo**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:12399](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12399)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:12398](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12398)

## Accessors

### isInRom

• `get` **isInRom**(): `number`

资源是否在ROM中。

#### Returns

`number`

#### Defined in

[awtk.ts:12448](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12448)

___

### name

• `get` **name**(): `string`

名称。

#### Returns

`string`

#### Defined in

[awtk.ts:12476](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12476)

___

### refcount

• `get` **refcount**(): `number`

引用计数。
is\_in\_rom == FALSE时才有效。

#### Returns

`number`

#### Defined in

[awtk.ts:12467](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12467)

___

### size

• `get` **size**(): `number`

大小。

#### Returns

`number`

#### Defined in

[awtk.ts:12457](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12457)

___

### subtype

• `get` **subtype**(): `number`

子类型。

#### Returns

`number`

#### Defined in

[awtk.ts:12439](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12439)

___

### type

• `get` **type**(): `number`

类型。

#### Returns

`number`

#### Defined in

[awtk.ts:12430](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12430)

## Methods

### getName

▸ **getName**(): `string`

获取名称。

#### Returns

`string`

返回名称。

#### Defined in

[awtk.ts:12421](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12421)

___

### getType

▸ **getType**(): `number`

获取类型。

#### Returns

`number`

返回类型。

#### Defined in

[awtk.ts:12410](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12410)
