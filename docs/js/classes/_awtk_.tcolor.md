[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TColor](_awtk_.tcolor.md)

# Class: TColor

颜色。

## Hierarchy

* **TColor**

## Index

### Constructors

* [constructor](_awtk_.tcolor.md#constructor)

### Properties

* [nativeObj](_awtk_.tcolor.md#nativeobj)

### Accessors

* [color](_awtk_.tcolor.md#color)

### Methods

* [a](_awtk_.tcolor.md#a)
* [b](_awtk_.tcolor.md#b)
* [destroy](_awtk_.tcolor.md#destroy)
* [fromStr](_awtk_.tcolor.md#fromstr)
* [g](_awtk_.tcolor.md#g)
* [r](_awtk_.tcolor.md#r)
* [cast](_awtk_.tcolor.md#static-cast)
* [create](_awtk_.tcolor.md#static-create)

## Constructors

###  constructor

\+ **new TColor**(`nativeObj`: any): *[TColor](_awtk_.tcolor.md)*

*Defined in [awtk.ts:10335](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L10335)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TColor](_awtk_.tcolor.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:10335](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L10335)*

## Accessors

###  color

• **get color**(): *number*

*Defined in [awtk.ts:10458](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L10458)*

颜色的数值。

**Returns:** *number*

• **set color**(`v`: number): *void*

*Defined in [awtk.ts:10449](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L10449)*

颜色的数值。

**Parameters:**

Name | Type |
------ | ------ |
`v` | number |

**Returns:** *void*

## Methods

###  a

▸ **a**(): *number*

*Defined in [awtk.ts:10419](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L10419)*

获取alpha通道的值。

主要供脚本语言使用。

**Returns:** *number*

返回alpha通道的值。

___

###  b

▸ **b**(): *number*

*Defined in [awtk.ts:10406](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L10406)*

获取蓝色通道的值。

主要供脚本语言使用。

**Returns:** *number*

返回蓝色通道的值。

___

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:10445](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L10445)*

销毁color对象。
主要供脚本语言使用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  fromStr

▸ **fromStr**(`str`: string): *[TColor](_awtk_.tcolor.md)*

*Defined in [awtk.ts:10367](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L10367)*

创建color对象。

主要供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`str` | string | css类似的颜色值。  |

**Returns:** *[TColor](_awtk_.tcolor.md)*

color对象。

___

###  g

▸ **g**(): *number*

*Defined in [awtk.ts:10393](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L10393)*

获取绿色通道的值。

主要供脚本语言使用。

**Returns:** *number*

返回绿色通道的值。

___

###  r

▸ **r**(): *number*

*Defined in [awtk.ts:10380](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L10380)*

获取红色通道的值。

主要供脚本语言使用。

**Returns:** *number*

返回红色通道的值。

___

### `Static` cast

▸ **cast**(`color`: [TColor](_awtk_.tcolor.md)): *[TColor](_awtk_.tcolor.md)*

*Defined in [awtk.ts:10433](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L10433)*

转换为color对象。

供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`color` | [TColor](_awtk_.tcolor.md) | color对象。  |

**Returns:** *[TColor](_awtk_.tcolor.md)*

color对象。

___

### `Static` create

▸ **create**(`r`: number, `b`: number, `g`: number, `a`: number): *[TColor](_awtk_.tcolor.md)*

*Defined in [awtk.ts:10353](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L10353)*

创建color对象。

主要供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`r` | number | 红色通道。 |
`b` | number | 蓝色通道。 |
`g` | number | 绿色通道。 |
`a` | number | alpha通道。  |

**Returns:** *[TColor](_awtk_.tcolor.md)*

color对象。
