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

[awtk.ts:12396](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12396)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:12395](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12395)

## Accessors

### isInRom

• `get` **isInRom**(): `number`

资源是否在ROM中。

#### Returns

`number`

#### Defined in

[awtk.ts:12445](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12445)

___

### name

• `get` **name**(): `string`

名称。

#### Returns

`string`

#### Defined in

[awtk.ts:12473](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12473)

___

### refcount

• `get` **refcount**(): `number`

引用计数。
is\_in\_rom == FALSE时才有效。

#### Returns

`number`

#### Defined in

[awtk.ts:12464](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12464)

___

### size

• `get` **size**(): `number`

大小。

#### Returns

`number`

#### Defined in

[awtk.ts:12454](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12454)

___

### subtype

• `get` **subtype**(): `number`

子类型。

#### Returns

`number`

#### Defined in

[awtk.ts:12436](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12436)

___

### type

• `get` **type**(): `number`

类型。

#### Returns

`number`

#### Defined in

[awtk.ts:12427](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12427)

## Methods

### getName

▸ **getName**(): `string`

获取名称。

#### Returns

`string`

返回名称。

#### Defined in

[awtk.ts:12418](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12418)

___

### getType

▸ **getType**(): `number`

获取类型。

#### Returns

`number`

返回类型。

#### Defined in

[awtk.ts:12407](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12407)
