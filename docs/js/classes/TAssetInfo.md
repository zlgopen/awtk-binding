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

[awtk.ts:13267](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L13267)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:13266](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L13266)

## Accessors

### flags

> `get` **flags**(): `number`

资源标志。

#### Returns

`number`

#### Defined in

[awtk.ts:13339](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L13339)

***

### refcount

> `get` **refcount**(): `number`

引用计数。
is\_in\_rom == FALSE时才有效。

#### Returns

`number`

#### Defined in

[awtk.ts:13358](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L13358)

***

### size

> `get` **size**(): `number`

大小。

#### Returns

`number`

#### Defined in

[awtk.ts:13348](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L13348)

***

### subtype

> `get` **subtype**(): `number`

子类型。

#### Returns

`number`

#### Defined in

[awtk.ts:13330](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L13330)

***

### type

> `get` **type**(): `number`

类型。

#### Returns

`number`

#### Defined in

[awtk.ts:13321](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L13321)

## Methods

### getName()

> **getName**(): `string`

获取名称。

#### Returns

`string`

返回名称。

#### Defined in

[awtk.ts:13289](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L13289)

***

### getType()

> **getType**(): `number`

获取类型。

#### Returns

`number`

返回类型。

#### Defined in

[awtk.ts:13278](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L13278)

***

### isInRom()

> **isInRom**(): `boolean`

资源是否在ROM中。

#### Returns

`boolean`

返回 TRUE 为在 ROM 中，返回 FALSE 则不在。

#### Defined in

[awtk.ts:13300](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L13300)

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

[awtk.ts:13312](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L13312)
