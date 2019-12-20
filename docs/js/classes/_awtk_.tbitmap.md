[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TBitmap](_awtk_.tbitmap.md)

# Class: TBitmap

位图。

## Hierarchy

* **TBitmap**

## Index

### Constructors

* [constructor](_awtk_.tbitmap.md#constructor)

### Properties

* [nativeObj](_awtk_.tbitmap.md#nativeobj)

### Accessors

* [flags](_awtk_.tbitmap.md#flags)
* [format](_awtk_.tbitmap.md#format)
* [h](_awtk_.tbitmap.md#h)
* [lineLength](_awtk_.tbitmap.md#linelength)
* [name](_awtk_.tbitmap.md#name)
* [w](_awtk_.tbitmap.md#w)

### Methods

* [destroy](_awtk_.tbitmap.md#destroy)
* [getBpp](_awtk_.tbitmap.md#getbpp)
* [create](_awtk_.tbitmap.md#static-create)
* [createEx](_awtk_.tbitmap.md#static-createex)

## Constructors

###  constructor

\+ **new TBitmap**(`nativeObj`: any): *[TBitmap](_awtk_.tbitmap.md)*

*Defined in [awtk.ts:1978](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L1978)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TBitmap](_awtk_.tbitmap.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:1978](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L1978)*

## Accessors

###  flags

• **get flags**(): *number*

*Defined in [awtk.ts:2063](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L2063)*

标志。请参考{bitmap_flag_t}。

**Returns:** *number*

___

###  format

• **get format**(): *number*

*Defined in [awtk.ts:2072](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L2072)*

格式。请参考{bitmap_format_t}。

**Returns:** *number*

___

###  h

• **get h**(): *number*

*Defined in [awtk.ts:2045](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L2045)*

高度。

**Returns:** *number*

___

###  lineLength

• **get lineLength**(): *number*

*Defined in [awtk.ts:2054](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L2054)*

每一行实际占用的内存(也称为stride或pitch)，一般情况下为w*bpp。

**Returns:** *number*

___

###  name

• **get name**(): *string*

*Defined in [awtk.ts:2081](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L2081)*

名称。

**Returns:** *string*

___

###  w

• **get w**(): *number*

*Defined in [awtk.ts:2036](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L2036)*

宽度。

**Returns:** *number*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2027](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L2027)*

销毁图片。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  getBpp

▸ **getBpp**(): *number*

*Defined in [awtk.ts:2016](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L2016)*

获取图片一个像素占用的字节数。

**Returns:** *number*

返回一个像素占用的字节数。

___

### `Static` create

▸ **create**(): *[TBitmap](_awtk_.tbitmap.md)*

*Defined in [awtk.ts:1990](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L1990)*

创建图片对象(一般供脚本语言中使用)。

**Returns:** *[TBitmap](_awtk_.tbitmap.md)*

返回bitmap对象。

___

### `Static` createEx

▸ **createEx**(`w`: number, `h`: number, `line_length`: number, `format`: [TBitmapFormat](../enums/_awtk_.tbitmapformat.md)): *[TBitmap](_awtk_.tbitmap.md)*

*Defined in [awtk.ts:2005](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L2005)*

创建图片对象。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`w` | number | 宽度。 |
`h` | number | 高度。 |
`line_length` | number | line_length。 |
`format` | [TBitmapFormat](../enums/_awtk_.tbitmapformat.md) | 格式。  |

**Returns:** *[TBitmap](_awtk_.tbitmap.md)*

返回bitmap对象。
