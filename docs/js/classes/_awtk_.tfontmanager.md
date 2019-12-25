[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TFontManager](_awtk_.tfontmanager.md)

# Class: TFontManager

字体管理器，负责字体的加载和缓存管理。
(如果使用nanovg，字体由nanovg内部管理)

## Hierarchy

* **TFontManager**

## Index

### Constructors

* [constructor](_awtk_.tfontmanager.md#constructor)

### Properties

* [nativeObj](_awtk_.tfontmanager.md#nativeobj)

### Methods

* [unloadAll](_awtk_.tfontmanager.md#unloadall)
* [unloadFont](_awtk_.tfontmanager.md#unloadfont)

## Constructors

###  constructor

\+ **new TFontManager**(`nativeObj`: any): *[TFontManager](_awtk_.tfontmanager.md)*

*Defined in [awtk.ts:3540](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L3540)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TFontManager](_awtk_.tfontmanager.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:3540](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L3540)*

## Methods

###  unloadAll

▸ **unloadAll**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:3565](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L3565)*

卸载全部字体。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  unloadFont

▸ **unloadFont**(`name`: string, `size`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:3554](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L3554)*

卸载指定的字体。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 字体名，为NULL时使用缺省字体。 |
`size` | number | 字体的大小(矢量字体指定为0即可)。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。
