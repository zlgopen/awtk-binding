[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TAssetInfo

# Class: TAssetInfo

单个资源的描述信息。

## Constructors

### new TAssetInfo()

> **new TAssetInfo**(`nativeObj`): [`TAssetInfo`](TAssetInfo.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TAssetInfo`](TAssetInfo.md)

#### Defined in

[awtk.ts:13331](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13331)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:13330](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13330)

## Accessors

### flags

> `get` **flags**(): `number`

资源标志。

#### Returns

`number`

#### Defined in

[awtk.ts:13403](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13403)

***

### refcount

> `get` **refcount**(): `number`

引用计数。
is\_in\_rom == FALSE时才有效。

#### Returns

`number`

#### Defined in

[awtk.ts:13422](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13422)

***

### size

> `get` **size**(): `number`

大小。

#### Returns

`number`

#### Defined in

[awtk.ts:13412](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13412)

***

### subtype

> `get` **subtype**(): `number`

子类型。

#### Returns

`number`

#### Defined in

[awtk.ts:13394](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13394)

***

### type

> `get` **type**(): `number`

类型。

#### Returns

`number`

#### Defined in

[awtk.ts:13385](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13385)

## Methods

### getName()

> **getName**(): `string`

获取名称。

#### Returns

`string`

返回名称。

#### Defined in

[awtk.ts:13353](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13353)

***

### getType()

> **getType**(): `number`

获取类型。

#### Returns

`number`

返回类型。

#### Defined in

[awtk.ts:13342](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13342)

***

### isInRom()

> **isInRom**(): `boolean`

资源是否在ROM中。

#### Returns

`boolean`

返回 TRUE 为在 ROM 中，返回 FALSE 则不在。

#### Defined in

[awtk.ts:13364](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13364)

***

### setIsInRom()

> **setIsInRom**(`is_in_rom`): [`TRet`](../enumerations/TRet.md)

设置资源是否在ROM中的标记位。

#### Parameters

• **is\_in\_rom**: `boolean`

资源是否在ROM中。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13376](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13376)
