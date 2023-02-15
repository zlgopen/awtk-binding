[AWTK](../README.md) / [Exports](../modules.md) / TColor

# Class: TColor

颜色。

## Table of contents

### Constructors

- [constructor](TColor.md#constructor)

### Properties

- [nativeObj](TColor.md#nativeobj)

### Accessors

- [color](TColor.md#color)

### Methods

- [a](TColor.md#a)
- [b](TColor.md#b)
- [destroy](TColor.md#destroy)
- [fromStr](TColor.md#fromstr)
- [g](TColor.md#g)
- [getColor](TColor.md#getcolor)
- [r](TColor.md#r)
- [cast](TColor.md#cast)
- [create](TColor.md#create)

## Constructors

### constructor

• **new TColor**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:12641](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12641)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:12640](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12640)

## Accessors

### color

• `get` **color**(): `number`

颜色的数值。

#### Returns

`number`

#### Defined in

[awtk.ts:12772](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12772)

• `set` **color**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:12776](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12776)

## Methods

### a

▸ **a**(): `number`

获取alpha通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回alpha通道的值。

#### Defined in

[awtk.ts:12724](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12724)

___

### b

▸ **b**(): `number`

获取蓝色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回蓝色通道的值。

#### Defined in

[awtk.ts:12711](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12711)

___

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁color对象。
> 主要供脚本语言使用。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12763](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12763)

___

### fromStr

▸ **fromStr**(`str`): [`TColor`](TColor.md)

创建color对象。

> 主要供脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `str` | `string` | css类似的颜色值。 |

#### Returns

[`TColor`](TColor.md)

color对象。

#### Defined in

[awtk.ts:12672](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12672)

___

### g

▸ **g**(): `number`

获取绿色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回绿色通道的值。

#### Defined in

[awtk.ts:12698](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12698)

___

### getColor

▸ **getColor**(): `number`

获取颜色值。

> 主要供脚本语言使用。

#### Returns

`number`

返回颜色值。

#### Defined in

[awtk.ts:12737](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12737)

___

### r

▸ **r**(): `number`

获取红色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回红色通道的值。

#### Defined in

[awtk.ts:12685](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12685)

___

### cast

▸ `Static` **cast**(`color`): [`TColor`](TColor.md)

转换为color对象。

> 供脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `color` | [`TColor`](TColor.md) | color对象。 |

#### Returns

[`TColor`](TColor.md)

color对象。

#### Defined in

[awtk.ts:12751](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12751)

___

### create

▸ `Static` **create**(`r`, `b`, `g`, `a`): [`TColor`](TColor.md)

创建color对象。

> 主要供脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `r` | `number` | 红色通道。 |
| `b` | `number` | 蓝色通道。 |
| `g` | `number` | 绿色通道。 |
| `a` | `number` | alpha通道。 |

#### Returns

[`TColor`](TColor.md)

color对象。

#### Defined in

[awtk.ts:12658](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12658)
