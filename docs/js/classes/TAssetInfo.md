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

[awtk.ts:13222](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13222)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:13221](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13221)

## Accessors

### flags

> `get` **flags**(): `number`

资源标志。

#### Returns

`number`

#### Defined in

[awtk.ts:13294](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13294)

***

### refcount

> `get` **refcount**(): `number`

引用计数。
is\_in\_rom == FALSE时才有效。

#### Returns

`number`

#### Defined in

[awtk.ts:13313](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13313)

***

### size

> `get` **size**(): `number`

大小。

#### Returns

`number`

#### Defined in

[awtk.ts:13303](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13303)

***

### subtype

> `get` **subtype**(): `number`

子类型。

#### Returns

`number`

#### Defined in

[awtk.ts:13285](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13285)

***

### type

> `get` **type**(): `number`

类型。

#### Returns

`number`

#### Defined in

[awtk.ts:13276](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13276)

## Methods

### getName()

> **getName**(): `string`

获取名称。

#### Returns

`string`

返回名称。

#### Defined in

[awtk.ts:13244](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13244)

***

### getType()

> **getType**(): `number`

获取类型。

#### Returns

`number`

返回类型。

#### Defined in

[awtk.ts:13233](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13233)

***

### isInRom()

> **isInRom**(): `boolean`

资源是否在ROM中。

#### Returns

`boolean`

返回 TRUE 为在 ROM 中，返回 FALSE 则不在。

#### Defined in

[awtk.ts:13255](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13255)

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

[awtk.ts:13267](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13267)
