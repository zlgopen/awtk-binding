[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TAssetInfo

# Class: TAssetInfo

Defined in: [awtk.ts:13630](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13630)

单个资源的描述信息。

## Constructors

### Constructor

> **new TAssetInfo**(`nativeObj`): `TAssetInfo`

Defined in: [awtk.ts:13632](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13632)

#### Parameters

##### nativeObj

`any`

#### Returns

`TAssetInfo`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:13631](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13631)

## Accessors

### flags

#### Get Signature

> **get** **flags**(): `number`

Defined in: [awtk.ts:13704](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13704)

资源标志。

##### Returns

`number`

***

### refcount

#### Get Signature

> **get** **refcount**(): `number`

Defined in: [awtk.ts:13723](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13723)

引用计数。
is\_in\_rom == FALSE时才有效。

##### Returns

`number`

***

### size

#### Get Signature

> **get** **size**(): `number`

Defined in: [awtk.ts:13713](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13713)

大小。

##### Returns

`number`

***

### subtype

#### Get Signature

> **get** **subtype**(): `number`

Defined in: [awtk.ts:13695](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13695)

子类型。

##### Returns

`number`

***

### type

#### Get Signature

> **get** **type**(): `number`

Defined in: [awtk.ts:13686](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13686)

类型。

##### Returns

`number`

## Methods

### getName()

> **getName**(): `string`

Defined in: [awtk.ts:13654](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13654)

获取名称。

#### Returns

`string`

返回名称。

***

### getType()

> **getType**(): `number`

Defined in: [awtk.ts:13643](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13643)

获取类型。

#### Returns

`number`

返回类型。

***

### isInRom()

> **isInRom**(): `boolean`

Defined in: [awtk.ts:13665](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13665)

资源是否在ROM中。

#### Returns

`boolean`

返回 TRUE 为在 ROM 中，返回 FALSE 则不在。

***

### setIsInRom()

> **setIsInRom**(`is_in_rom`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13677](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13677)

设置资源是否在ROM中的标记位。

#### Parameters

##### is\_in\_rom

`boolean`

资源是否在ROM中。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。
