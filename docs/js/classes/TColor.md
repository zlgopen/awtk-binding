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

[awtk.ts:12661](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12661)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:12660](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12660)

## Accessors

### color

• `get` **color**(): `number`

颜色的数值。

#### Returns

`number`

#### Defined in

[awtk.ts:12792](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12792)

• `set` **color**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:12796](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12796)

## Methods

### a

▸ **a**(): `number`

获取alpha通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回alpha通道的值。

#### Defined in

[awtk.ts:12744](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12744)

___

### b

▸ **b**(): `number`

获取蓝色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回蓝色通道的值。

#### Defined in

[awtk.ts:12731](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12731)

___

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁color对象。
> 主要供脚本语言使用。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12783](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12783)

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

[awtk.ts:12692](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12692)

___

### g

▸ **g**(): `number`

获取绿色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回绿色通道的值。

#### Defined in

[awtk.ts:12718](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12718)

___

### getColor

▸ **getColor**(): `number`

获取颜色值。

> 主要供脚本语言使用。

#### Returns

`number`

返回颜色值。

#### Defined in

[awtk.ts:12757](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12757)

___

### r

▸ **r**(): `number`

获取红色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回红色通道的值。

#### Defined in

[awtk.ts:12705](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12705)

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

[awtk.ts:12771](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12771)

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

[awtk.ts:12678](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12678)
