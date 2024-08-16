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

[awtk.ts:13050](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13050)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:13049](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13049)

## Accessors

### flags

> `get` **flags**(): `number`

资源标志。

#### Returns

`number`

#### Defined in

[awtk.ts:13122](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13122)

***

### refcount

> `get` **refcount**(): `number`

引用计数。
is\_in\_rom == FALSE时才有效。

#### Returns

`number`

#### Defined in

[awtk.ts:13141](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13141)

***

### size

> `get` **size**(): `number`

大小。

#### Returns

`number`

#### Defined in

[awtk.ts:13131](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13131)

***

### subtype

> `get` **subtype**(): `number`

子类型。

#### Returns

`number`

#### Defined in

[awtk.ts:13113](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13113)

***

### type

> `get` **type**(): `number`

类型。

#### Returns

`number`

#### Defined in

[awtk.ts:13104](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13104)

## Methods

### getName()

> **getName**(): `string`

获取名称。

#### Returns

`string`

返回名称。

#### Defined in

[awtk.ts:13072](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13072)

***

### getType()

> **getType**(): `number`

获取类型。

#### Returns

`number`

返回类型。

#### Defined in

[awtk.ts:13061](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13061)

***

### isInRom()

> **isInRom**(): `boolean`

资源是否在ROM中。

#### Returns

`boolean`

返回 TRUE 为在 ROM 中，返回 FALSE 则不在。

#### Defined in

[awtk.ts:13083](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13083)

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

[awtk.ts:13095](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13095)
