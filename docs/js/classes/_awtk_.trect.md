[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TRect](_awtk_.trect.md)

# Class: TRect

矩形。包括一个x坐标、y坐标、宽度和高度。

## Hierarchy

* **TRect**

## Index

### Constructors

* [constructor](_awtk_.trect.md#constructor)

### Properties

* [nativeObj](_awtk_.trect.md#nativeobj)

### Accessors

* [h](_awtk_.trect.md#h)
* [w](_awtk_.trect.md#w)
* [x](_awtk_.trect.md#x)
* [y](_awtk_.trect.md#y)

### Methods

* [destroy](_awtk_.trect.md#destroy)
* [set](_awtk_.trect.md#set)
* [cast](_awtk_.trect.md#static-cast)
* [create](_awtk_.trect.md#static-create)

## Constructors

###  constructor

\+ **new TRect**(`nativeObj`: any): *[TRect](_awtk_.trect.md)*

*Defined in [awtk.ts:1718](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1718)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TRect](_awtk_.trect.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:1718](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1718)*

## Accessors

###  h

• **get h**(): *number*

*Defined in [awtk.ts:1816](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1816)*

高度。

**Returns:** *number*

___

###  w

• **get w**(): *number*

*Defined in [awtk.ts:1807](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1807)*

宽度。

**Returns:** *number*

___

###  x

• **get x**(): *number*

*Defined in [awtk.ts:1789](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1789)*

x坐标。

**Returns:** *number*

___

###  y

• **get y**(): *number*

*Defined in [awtk.ts:1798](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1798)*

y坐标。

**Returns:** *number*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:1780](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1780)*

销毁rect对象。

> 主要供脚本语言使用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  set

▸ **set**(`x`: number, `y`: number, `w`: number, `h`: number): *[TRect](_awtk_.trect.md)*

*Defined in [awtk.ts:1753](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1753)*

设置rect对象的xywh。

> 主要供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x坐标。 |
`y` | number | y坐标。 |
`w` | number | 宽度。 |
`h` | number | 高度。  |

**Returns:** *[TRect](_awtk_.trect.md)*

rect对象。

___

### `Static` cast

▸ **cast**(`rect`: [TRect](_awtk_.trect.md)): *[TRect](_awtk_.trect.md)*

*Defined in [awtk.ts:1767](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1767)*

转换为rect对象。

> 供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`rect` | [TRect](_awtk_.trect.md) | rect对象。  |

**Returns:** *[TRect](_awtk_.trect.md)*

rect对象。

___

### `Static` create

▸ **create**(`x`: number, `y`: number, `w`: number, `h`: number): *[TRect](_awtk_.trect.md)*

*Defined in [awtk.ts:1736](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1736)*

创建rect对象。

> 主要供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x坐标。 |
`y` | number | y坐标。 |
`w` | number | 宽度。 |
`h` | number | 高度。  |

**Returns:** *[TRect](_awtk_.trect.md)*

rect对象。
