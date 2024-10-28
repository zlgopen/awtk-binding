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

[awtk.ts:13099](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13099)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:13098](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13098)

## Accessors

### flags

> `get` **flags**(): `number`

资源标志。

#### Returns

`number`

#### Defined in

[awtk.ts:13171](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13171)

***

### refcount

> `get` **refcount**(): `number`

引用计数。
is\_in\_rom == FALSE时才有效。

#### Returns

`number`

#### Defined in

[awtk.ts:13190](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13190)

***

### size

> `get` **size**(): `number`

大小。

#### Returns

`number`

#### Defined in

[awtk.ts:13180](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13180)

***

### subtype

> `get` **subtype**(): `number`

子类型。

#### Returns

`number`

#### Defined in

[awtk.ts:13162](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13162)

***

### type

> `get` **type**(): `number`

类型。

#### Returns

`number`

#### Defined in

[awtk.ts:13153](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13153)

## Methods

### getName()

> **getName**(): `string`

获取名称。

#### Returns

`string`

返回名称。

#### Defined in

[awtk.ts:13121](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13121)

***

### getType()

> **getType**(): `number`

获取类型。

#### Returns

`number`

返回类型。

#### Defined in

[awtk.ts:13110](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13110)

***

### isInRom()

> **isInRom**(): `boolean`

资源是否在ROM中。

#### Returns

`boolean`

返回 TRUE 为在 ROM 中，返回 FALSE 则不在。

#### Defined in

[awtk.ts:13132](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13132)

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

[awtk.ts:13144](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13144)
