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

*Defined in [awtk.ts:8801](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8801)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TCanvas](_awtk_.tcanvas.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:8801](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8801)*

## Accessors

###  fontName

• **get fontName**(): *string*

*Defined in [awtk.ts:9160](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9160)*

当前字体名称。

**Returns:** *string*

___

###  fontSize

• **get fontSize**(): *number*

*Defined in [awtk.ts:9169](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9169)*

当前字体大小。

**Returns:** *number*

___

###  globalAlpha

• **get globalAlpha**(): *number*

*Defined in [awtk.ts:9182](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9182)*

当前全局alpha。

**Returns:** *number*

• **set globalAlpha**(`v`: number): *void*

*Defined in [awtk.ts:9173](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9173)*

当前全局alpha。

**Parameters:**

Name | Type |
------ | ------ |
`v` | number |

**Returns:** *void*

___

###  ox

• **get ox**(): *number*

*Defined in [awtk.ts:9142](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9142)*

x坐标偏移。

**Returns:** *number*

___

###  oy

• **get oy**(): *number*

*Defined in [awtk.ts:9151](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9151)*

y坐标偏移。

**Returns:** *number*

## Methods

###  drawHline

▸ **drawHline**(`x`: number, `y`: number, `w`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:8969](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8969)*

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

*Defined in [awtk.ts:9071](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9071)*

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

*Defined in [awtk.ts:9085](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9085)*

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

*Defined in [awtk.ts:9099](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9099)*

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

*Defined in [awtk.ts:9042](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9042)*

绘制文本。

供脚本语言使用。

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

*Defined in [awtk.ts:9057](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9057)*

绘制文本。

供脚本语言使用。

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

*Defined in [awtk.ts:8955](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8955)*

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

*Defined in [awtk.ts:8984](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8984)*

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

*Defined in [awtk.ts:8836](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8836)*

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

*Defined in [awtk.ts:8824](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8824)*

获取画布的高度。

**Returns:** *number*

返回画布的高度。

___

###  getVgcanvas

▸ **getVgcanvas**(): *[TVgcanvas](_awtk_.tvgcanvas.md)*

*Defined in [awtk.ts:9110](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9110)*

获取vgcanvas对象。

**Returns:** *[TVgcanvas](_awtk_.tvgcanvas.md)*

返回vgcanvas对象。

___

###  getWidth

▸ **getWidth**(): *number*

*Defined in [awtk.ts:8813](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8813)*

获取画布的宽度。

**Returns:** *number*

返回画布的宽度。

___

###  measureText

▸ **measureText**(`str`: string): *number*

*Defined in [awtk.ts:9026](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9026)*

计算文本所占的宽度。

供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`str` | string | 字符串。  |

**Returns:** *number*

返回文本所占的宽度。

___

###  reset

▸ **reset**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9133](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9133)*

释放相关资源。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setClipRect

▸ **setClipRect**(`r`: [TRect](_awtk_.trect.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:8848](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8848)*

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

*Defined in [awtk.ts:8861](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8861)*

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

*Defined in [awtk.ts:8875](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8875)*

设置填充颜色。

供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`color` | string | 颜色。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFont

▸ **setFont**(`name`: string, `size`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9012](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9012)*

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

*Defined in [awtk.ts:8915](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8915)*

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

*Defined in [awtk.ts:8903](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8903)*

设置线条颜色。

供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`color` | string | 颜色。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setTextColor

▸ **setTextColor**(`color`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:8889](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8889)*

设置文本颜色。

供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`color` | string | 颜色。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  strokeRect

▸ **strokeRect**(`x`: number, `y`: number, `w`: number, `h`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:8999](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8999)*

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

*Defined in [awtk.ts:8928](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8928)*

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

*Defined in [awtk.ts:8941](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8941)*

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

*Defined in [awtk.ts:9122](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L9122)*

转换为canvas对象(供脚本语言使用)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`c` | [TCanvas](_awtk_.tcanvas.md) | canvas对象。  |

**Returns:** *[TCanvas](_awtk_.tcanvas.md)*

canvas对象。
