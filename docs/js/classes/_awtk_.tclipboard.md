[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TClipBoard](_awtk_.tclipboard.md)

# Class: TClipBoard

剪切板接口。

## Hierarchy

* **TClipBoard**

## Index

### Constructors

* [constructor](_awtk_.tclipboard.md#constructor)

### Properties

* [nativeObj](_awtk_.tclipboard.md#nativeobj)

### Methods

* [getText](_awtk_.tclipboard.md#static-gettext)
* [setText](_awtk_.tclipboard.md#static-settext)

## Constructors

###  constructor

\+ **new TClipBoard**(`nativeObj`: any): *[TClipBoard](_awtk_.tclipboard.md)*

*Defined in [awtk.ts:2406](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L2406)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TClipBoard](_awtk_.tclipboard.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:2406](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L2406)*

## Methods

### `Static` getText

▸ **getText**(): *string*

*Defined in [awtk.ts:2432](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L2432)*

从剪切板中获取文本(UTF8)数据。

**Returns:** *string*

返回文本数据。

___

### `Static` setText

▸ **setText**(`text`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2420](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L2420)*

设置文本(UTF8)数据到剪切板。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`text` | string | 文本。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。