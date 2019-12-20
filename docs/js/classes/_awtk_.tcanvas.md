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

*Defined in [awtk.ts:8825](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8825)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TCanvas](_awtk_.tcanvas.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:8825](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8825)*

## Accessors

###  fontName

• **get fontName**(): *string*

*Defined in [awtk.ts:9184](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9184)*

当前字体名称。

**Returns:** *string*

___

###  fontSize

• **get fontSize**(): *number*

*Defined in [awtk.ts:9193](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9193)*

当前字体大小。

**Returns:** *number*

___

###  globalAlpha

• **get globalAlpha**(): *number*

*Defined in [awtk.ts:9202](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9202)*

当前全局alpha。

**Returns:** *number*

• **set globalAlpha**(`v`: number): *void*

*Defined in [awtk.ts:9206](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9206)*

当前全局alpha。

**Parameters:**

Name | Type |
------ | ------ |
`v` | number |

**Returns:** *void*

___

###  ox

• **get ox**(): *number*

*Defined in [awtk.ts:9166](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9166)*

x坐标偏移。

**Returns:** *number*

___

###  oy

• **get oy**(): *number*

*Defined in [awtk.ts:9175](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9175)*

y坐标偏移。

**Returns:** *number*

## Methods

###  drawHline

▸ **drawHline**(`x`: number, `y`: number, `w`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:8993](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8993)*

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

*Defined in [awtk.ts:9095](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9095)*

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

*Defined in [awtk.ts:9109](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9109)*

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

*Defined in [awtk.ts:9123](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9123)*

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

*Defined in [awtk.ts:9066](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9066)*

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

*Defined in [awtk.ts:9081](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9081)*

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

*Defined in [awtk.ts:8979](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8979)*

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

*Defined in [awtk.ts:9008](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9008)*

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

*Defined in [awtk.ts:8860](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8860)*

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

*Defined in [awtk.ts:8848](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8848)*

获取画布的高度。

**Returns:** *number*

返回画布的高度。

___

###  getVgcanvas

▸ **getVgcanvas**(): *[TVgcanvas](_awtk_.tvgcanvas.md)*

*Defined in [awtk.ts:9134](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9134)*

获取vgcanvas对象。

**Returns:** *[TVgcanvas](_awtk_.tvgcanvas.md)*

返回vgcanvas对象。

___

###  getWidth

▸ **getWidth**(): *number*

*Defined in [awtk.ts:8837](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8837)*

获取画布的宽度。

**Returns:** *number*

返回画布的宽度。

___

###  measureText

▸ **measureText**(`str`: string): *number*

*Defined in [awtk.ts:9050](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9050)*

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

*Defined in [awtk.ts:9157](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9157)*

释放相关资源。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setClipRect

▸ **setClipRect**(`r`: [TRect](_awtk_.trect.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:8872](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8872)*

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

*Defined in [awtk.ts:8885](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8885)*

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

*Defined in [awtk.ts:8899](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8899)*

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

*Defined in [awtk.ts:9036](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9036)*

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

*Defined in [awtk.ts:8939](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8939)*

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

*Defined in [awtk.ts:8927](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8927)*

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

*Defined in [awtk.ts:8913](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8913)*

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

*Defined in [awtk.ts:9023](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9023)*

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

*Defined in [awtk.ts:8952](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8952)*

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

*Defined in [awtk.ts:8965](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8965)*

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

*Defined in [awtk.ts:9146](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L9146)*

转换为canvas对象(供脚本语言使用)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`c` | [TCanvas](_awtk_.tcanvas.md) | canvas对象。  |

**Returns:** *[TCanvas](_awtk_.tcanvas.md)*

canvas对象。
