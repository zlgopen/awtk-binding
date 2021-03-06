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

*Defined in [awtk.ts:1985](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1985)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TBitmap](_awtk_.tbitmap.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:1985](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1985)*

## Accessors

###  flags

• **get flags**(): *number*

*Defined in [awtk.ts:2070](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L2070)*

标志。请参考{bitmap_flag_t}。

**Returns:** *number*

___

###  format

• **get format**(): *number*

*Defined in [awtk.ts:2079](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L2079)*

格式。请参考{bitmap_format_t}。

**Returns:** *number*

___

###  h

• **get h**(): *number*

*Defined in [awtk.ts:2052](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L2052)*

高度。

**Returns:** *number*

___

###  lineLength

• **get lineLength**(): *number*

*Defined in [awtk.ts:2061](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L2061)*

每一行实际占用的内存(也称为stride或pitch)，一般情况下为w*bpp。

**Returns:** *number*

___

###  name

• **get name**(): *string*

*Defined in [awtk.ts:2088](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L2088)*

名称。

**Returns:** *string*

___

###  w

• **get w**(): *number*

*Defined in [awtk.ts:2043](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L2043)*

宽度。

**Returns:** *number*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2034](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L2034)*

销毁图片。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  getBpp

▸ **getBpp**(): *number*

*Defined in [awtk.ts:2023](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L2023)*

获取图片一个像素占用的字节数。

**Returns:** *number*

返回一个像素占用的字节数。

___

### `Static` create

▸ **create**(): *[TBitmap](_awtk_.tbitmap.md)*

*Defined in [awtk.ts:1997](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1997)*

创建图片对象(一般供脚本语言中使用)。

**Returns:** *[TBitmap](_awtk_.tbitmap.md)*

返回bitmap对象。

___

### `Static` createEx

▸ **createEx**(`w`: number, `h`: number, `line_length`: number, `format`: [TBitmapFormat](../enums/_awtk_.tbitmapformat.md)): *[TBitmap](_awtk_.tbitmap.md)*

*Defined in [awtk.ts:2012](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L2012)*

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
