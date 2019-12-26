[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TCanvas](_awtk_.tcanvas.md)

# Class: TCanvas

提供基本的绘图功能和状态管理。

## Hierarchy

* **TCanvas**

## Index

### Constructors

* [constructor](_awtk_.tcanvas.md#constructor)

### Properties

* [nativeObj](_awtk_.tcanvas.md#nativeobj)

### Accessors

* [fontName](_awtk_.tcanvas.md#fontname)
* [fontSize](_awtk_.tcanvas.md#fontsize)
* [globalAlpha](_awtk_.tcanvas.md#globalalpha)
* [ox](_awtk_.tcanvas.md#ox)
* [oy](_awtk_.tcanvas.md#oy)

### Methods

* [drawHline](_awtk_.tcanvas.md#drawhline)
* [drawIcon](_awtk_.tcanvas.md#drawicon)
* [drawImage](_awtk_.tcanvas.md#drawimage)
* [drawImageEx](_awtk_.tcanvas.md#drawimageex)
* [drawText](_awtk_.tcanvas.md#drawtext)
* [drawTextInRect](_awtk_.tcanvas.md#drawtextinrect)
* [drawVline](_awtk_.tcanvas.md#drawvline)
* [fillRect](_awtk_.tcanvas.md#fillrect)
* [getClipRect](_awtk_.tcanvas.md#getcliprect)
* [getHeight](_awtk_.tcanvas.md#getheight)
* [getVgcanvas](_awtk_.tcanvas.md#getvgcanvas)
* [getWidth](_awtk_.tcanvas.md#getwidth)
* [measureText](_awtk_.tcanvas.md#measuretext)
* [reset](_awtk_.tcanvas.md#reset)
* [setClipRect](_awtk_.tcanvas.md#setcliprect)
* [setClipRectEx](_awtk_.tcanvas.md#setcliprectex)
* [setFillColor](_awtk_.tcanvas.md#setfillcolor)
* [setFont](_awtk_.tcanvas.md#setfont)
* [setGlobalAlpha](_awtk_.tcanvas.md#setglobalalpha)
* [setStrokeColor](_awtk_.tcanvas.md#setstrokecolor)
* [setTextColor](_awtk_.tcanvas.md#settextcolor)
* [strokeRect](_awtk_.tcanvas.md#strokerect)
* [translate](_awtk_.tcanvas.md#translate)
* [untranslate](_awtk_.tcanvas.md#untranslate)
* [cast](_awtk_.tcanvas.md#static-cast)

## Constructors

###  constructor

\+ **new TCanvas**(`nativeObj`: any): *[TCanvas](_awtk_.tcanvas.md)*

*Defined in [awtk.ts:8901](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8901)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TCanvas](_awtk_.tcanvas.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:8901](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8901)*

## Accessors

###  fontName

• **get fontName**(): *string*

*Defined in [awtk.ts:9260](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9260)*

当前字体名称。

**Returns:** *string*

___

###  fontSize

• **get fontSize**(): *number*

*Defined in [awtk.ts:9269](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9269)*

当前字体大小。

**Returns:** *number*

___

###  globalAlpha

• **get globalAlpha**(): *number*

*Defined in [awtk.ts:9278](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9278)*

当前全局alpha。

**Returns:** *number*

• **set globalAlpha**(`v`: number): *void*

*Defined in [awtk.ts:9282](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9282)*

当前全局alpha。

**Parameters:**

Name | Type |
------ | ------ |
`v` | number |

**Returns:** *void*

___

###  ox

• **get ox**(): *number*

*Defined in [awtk.ts:9242](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9242)*

x坐标偏移。

**Returns:** *number*

___

###  oy

• **get oy**(): *number*

*Defined in [awtk.ts:9251](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9251)*

y坐标偏移。

**Returns:** *number*

## Methods

###  drawHline

▸ **drawHline**(`x`: number, `y`: number, `w`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9069](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9069)*

画水平线。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x坐标。 |
`y` | number | y坐标。 |
`w` | number | 宽度。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  drawIcon

▸ **drawIcon**(`img`: [TBitmap](_awtk_.tbitmap.md), `cx`: number, `cy`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9171](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9171)*

绘制图标。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`img` | [TBitmap](_awtk_.tbitmap.md) | 图片对象。 |
`cx` | number | 中心点x坐标。 |
`cy` | number | 中心点y坐标。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  drawImage

▸ **drawImage**(`img`: [TBitmap](_awtk_.tbitmap.md), `src`: [TRect](_awtk_.trect.md), `dst`: [TRect](_awtk_.trect.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9185](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9185)*

绘制图片。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`img` | [TBitmap](_awtk_.tbitmap.md) | 图片对象。 |
`src` | [TRect](_awtk_.trect.md) | 源区域。 |
`dst` | [TRect](_awtk_.trect.md) | 目的区域。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  drawImageEx

▸ **drawImageEx**(`img`: [TBitmap](_awtk_.tbitmap.md), `draw_type`: [TImageDrawType](../enums/_awtk_.timagedrawtype.md), `dst`: [TRect](_awtk_.trect.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9199](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9199)*

绘制图片。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`img` | [TBitmap](_awtk_.tbitmap.md) | 图片对象。 |
`draw_type` | [TImageDrawType](../enums/_awtk_.timagedrawtype.md) | 绘制类型。 |
`dst` | [TRect](_awtk_.trect.md) | 目的区域。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  drawText

▸ **drawText**(`str`: string, `x`: number, `y`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9142](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9142)*

绘制文本。

> 供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`str` | string | 字符串。 |
`x` | number | x坐标。 |
`y` | number | y坐标。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  drawTextInRect

▸ **drawTextInRect**(`str`: string, `r`: [TRect](_awtk_.trect.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9157](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9157)*

绘制文本。

> 供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`str` | string | 字符串。 |
`r` | [TRect](_awtk_.trect.md) | 矩形区域。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  drawVline

▸ **drawVline**(`x`: number, `y`: number, `h`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9055](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9055)*

画垂直线。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x坐标。 |
`y` | number | y坐标。 |
`h` | number | 高度。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  fillRect

▸ **fillRect**(`x`: number, `y`: number, `w`: number, `h`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9084](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9084)*

填充矩形。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x坐标。 |
`y` | number | y坐标。 |
`w` | number | 宽度。 |
`h` | number | 高度。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  getClipRect

▸ **getClipRect**(`r`: [TRect](_awtk_.trect.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:8936](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8936)*

获取裁剪区。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`r` | [TRect](_awtk_.trect.md) | rect对象。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  getHeight

▸ **getHeight**(): *number*

*Defined in [awtk.ts:8924](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8924)*

获取画布的高度。

**Returns:** *number*

返回画布的高度。

___

###  getVgcanvas

▸ **getVgcanvas**(): *[TVgcanvas](_awtk_.tvgcanvas.md)*

*Defined in [awtk.ts:9210](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9210)*

获取vgcanvas对象。

**Returns:** *[TVgcanvas](_awtk_.tvgcanvas.md)*

返回vgcanvas对象。

___

###  getWidth

▸ **getWidth**(): *number*

*Defined in [awtk.ts:8913](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8913)*

获取画布的宽度。

**Returns:** *number*

返回画布的宽度。

___

###  measureText

▸ **measureText**(`str`: string): *number*

*Defined in [awtk.ts:9126](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9126)*

计算文本所占的宽度。

> 供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`str` | string | 字符串。  |

**Returns:** *number*

返回文本所占的宽度。

___

###  reset

▸ **reset**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9233](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9233)*

释放相关资源。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setClipRect

▸ **setClipRect**(`r`: [TRect](_awtk_.trect.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:8948](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8948)*

设置裁剪区。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`r` | [TRect](_awtk_.trect.md) | rect对象。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setClipRectEx

▸ **setClipRectEx**(`r`: [TRect](_awtk_.trect.md), `translate`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:8961](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8961)*

设置裁剪区。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`r` | [TRect](_awtk_.trect.md) | rect对象。 |
`translate` | boolean | 是否将裁剪区的位置加上canvas当前的偏移。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFillColor

▸ **setFillColor**(`color`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:8975](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8975)*

设置填充颜色。

> 供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`color` | string | 颜色。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFont

▸ **setFont**(`name`: string, `size`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9112](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9112)*

设置字体。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 字体名称。 |
`size` | number | 字体大小。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setGlobalAlpha

▸ **setGlobalAlpha**(`alpha`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9015](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9015)*

设置全局alpha值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`alpha` | number | alpha值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setStrokeColor

▸ **setStrokeColor**(`color`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9003](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9003)*

设置线条颜色。

> 供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`color` | string | 颜色。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setTextColor

▸ **setTextColor**(`color`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:8989](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8989)*

设置文本颜色。

> 供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`color` | string | 颜色。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  strokeRect

▸ **strokeRect**(`x`: number, `y`: number, `w`: number, `h`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9099](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9099)*

绘制矩形。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x坐标。 |
`y` | number | y坐标。 |
`w` | number | 宽度。 |
`h` | number | 高度。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  translate

▸ **translate**(`dx`: number, `dy`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9028](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9028)*

平移原点坐标。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`dx` | number | x偏移。 |
`dy` | number | y偏移。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  untranslate

▸ **untranslate**(`dx`: number, `dy`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9041](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9041)*

反向平移原点坐标。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`dx` | number | x偏移。 |
`dy` | number | y偏移。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`c`: [TCanvas](_awtk_.tcanvas.md)): *[TCanvas](_awtk_.tcanvas.md)*

*Defined in [awtk.ts:9222](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L9222)*

转换为canvas对象(供脚本语言使用)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`c` | [TCanvas](_awtk_.tcanvas.md) | canvas对象。  |

**Returns:** *[TCanvas](_awtk_.tcanvas.md)*

canvas对象。
