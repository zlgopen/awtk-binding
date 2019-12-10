[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TVgcanvas](_awtk_.tvgcanvas.md)

# Class: TVgcanvas

矢量图画布抽象基类。
具体实现时可以使用agg，nanovg, cairo和skia等方式。
cairo和skia体积太大，不适合嵌入式平台，但在PC平台也是一种选择。
目前我们只提供了基于nanovg的实现，支持软件渲染和硬件渲染。
我们对nanovg进行了一些改进:
* 可以用agg/agge实现软件渲染(暂时不支持文本绘制)。
* 可以用bgfx使用DirectX(Windows平台)和Metal(iOS)平台硬件加速。
示例：
请参考：https://www.w3schools.com/tags/ref_canvas.asp

## Hierarchy

* **TVgcanvas**

## Index

### Constructors

* [constructor](_awtk_.tvgcanvas.md#constructor)

### Properties

* [nativeObj](_awtk_.tvgcanvas.md#nativeobj)

### Accessors

* [antiAlias](_awtk_.tvgcanvas.md#antialias)
* [font](_awtk_.tvgcanvas.md#font)
* [fontSize](_awtk_.tvgcanvas.md#fontsize)
* [globalAlpha](_awtk_.tvgcanvas.md#globalalpha)
* [h](_awtk_.tvgcanvas.md#h)
* [lineCap](_awtk_.tvgcanvas.md#linecap)
* [lineJoin](_awtk_.tvgcanvas.md#linejoin)
* [lineWidth](_awtk_.tvgcanvas.md#linewidth)
* [miterLimit](_awtk_.tvgcanvas.md#miterlimit)
* [ratio](_awtk_.tvgcanvas.md#ratio)
* [textAlign](_awtk_.tvgcanvas.md#textalign)
* [textBaseline](_awtk_.tvgcanvas.md#textbaseline)
* [w](_awtk_.tvgcanvas.md#w)

### Methods

* [arc](_awtk_.tvgcanvas.md#arc)
* [arcTo](_awtk_.tvgcanvas.md#arcto)
* [beginPath](_awtk_.tvgcanvas.md#beginpath)
* [bezierTo](_awtk_.tvgcanvas.md#bezierto)
* [clipRect](_awtk_.tvgcanvas.md#cliprect)
* [closePath](_awtk_.tvgcanvas.md#closepath)
* [drawIcon](_awtk_.tvgcanvas.md#drawicon)
* [drawImage](_awtk_.tvgcanvas.md#drawimage)
* [ellipse](_awtk_.tvgcanvas.md#ellipse)
* [fill](_awtk_.tvgcanvas.md#fill)
* [fillText](_awtk_.tvgcanvas.md#filltext)
* [flush](_awtk_.tvgcanvas.md#flush)
* [isPointInPath](_awtk_.tvgcanvas.md#ispointinpath)
* [lineTo](_awtk_.tvgcanvas.md#lineto)
* [measureText](_awtk_.tvgcanvas.md#measuretext)
* [moveTo](_awtk_.tvgcanvas.md#moveto)
* [paint](_awtk_.tvgcanvas.md#paint)
* [quadTo](_awtk_.tvgcanvas.md#quadto)
* [rect](_awtk_.tvgcanvas.md#rect)
* [restore](_awtk_.tvgcanvas.md#restore)
* [rotate](_awtk_.tvgcanvas.md#rotate)
* [roundedRect](_awtk_.tvgcanvas.md#roundedrect)
* [save](_awtk_.tvgcanvas.md#save)
* [scale](_awtk_.tvgcanvas.md#scale)
* [setAntialias](_awtk_.tvgcanvas.md#setantialias)
* [setFillColor](_awtk_.tvgcanvas.md#setfillcolor)
* [setFont](_awtk_.tvgcanvas.md#setfont)
* [setFontSize](_awtk_.tvgcanvas.md#setfontsize)
* [setGlobalAlpha](_awtk_.tvgcanvas.md#setglobalalpha)
* [setLineCap](_awtk_.tvgcanvas.md#setlinecap)
* [setLineJoin](_awtk_.tvgcanvas.md#setlinejoin)
* [setLineWidth](_awtk_.tvgcanvas.md#setlinewidth)
* [setMiterLimit](_awtk_.tvgcanvas.md#setmiterlimit)
* [setStrokeColor](_awtk_.tvgcanvas.md#setstrokecolor)
* [setTextAlign](_awtk_.tvgcanvas.md#settextalign)
* [setTextBaseline](_awtk_.tvgcanvas.md#settextbaseline)
* [setTransform](_awtk_.tvgcanvas.md#settransform)
* [stroke](_awtk_.tvgcanvas.md#stroke)
* [transform](_awtk_.tvgcanvas.md#transform)
* [translate](_awtk_.tvgcanvas.md#translate)
* [cast](_awtk_.tvgcanvas.md#static-cast)

## Constructors

###  constructor

\+ **new TVgcanvas**(`nativeObj`: any): *[TVgcanvas](_awtk_.tvgcanvas.md)*

*Defined in [awtk.ts:5621](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5621)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TVgcanvas](_awtk_.tvgcanvas.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:5621](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5621)*

## Accessors

###  antiAlias

• **get antiAlias**(): *boolean*

*Defined in [awtk.ts:6298](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6298)*

是否启用反走样功能。

**Returns:** *boolean*

___

###  font

• **get font**(): *string*

*Defined in [awtk.ts:6385](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6385)*

字体。

**Returns:** *string*

• **set font**(`v`: string): *void*

*Defined in [awtk.ts:6375](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6375)*

字体。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  fontSize

• **get fontSize**(): *number*

*Defined in [awtk.ts:6399](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6399)*

字体大小。

**Returns:** *number*

• **set fontSize**(`v`: number): *void*

*Defined in [awtk.ts:6389](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6389)*

字体大小。

**Parameters:**

Name | Type |
------ | ------ |
`v` | number |

**Returns:** *void*

___

###  globalAlpha

• **get globalAlpha**(): *number*

*Defined in [awtk.ts:6326](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6326)*

全局alpha。

**Returns:** *number*

• **set globalAlpha**(`v`: number): *void*

*Defined in [awtk.ts:6316](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6316)*

全局alpha。

**Parameters:**

Name | Type |
------ | ------ |
`v` | number |

**Returns:** *void*

___

###  h

• **get h**(): *number*

*Defined in [awtk.ts:6278](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6278)*

canvas的高度

**Returns:** *number*

___

###  lineCap

• **get lineCap**(): *string*

*Defined in [awtk.ts:6356](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6356)*

line\_cap。

**`see`** http://www.w3school.com.cn/tags/canvas_linecap.asp

**Returns:** *string*

• **set lineCap**(`v`: string): *void*

*Defined in [awtk.ts:6345](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6345)*

line\_cap。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  lineJoin

• **get lineJoin**(): *string*

*Defined in [awtk.ts:6371](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6371)*

line\_join。

**`see`** http://www.w3school.com.cn/tags/canvas_linejoin.asp

**Returns:** *string*

• **set lineJoin**(`v`: string): *void*

*Defined in [awtk.ts:6360](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6360)*

line\_join。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  lineWidth

• **get lineWidth**(): *number*

*Defined in [awtk.ts:6312](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6312)*

线宽。

**Returns:** *number*

• **set lineWidth**(`v`: number): *void*

*Defined in [awtk.ts:6302](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6302)*

线宽。

**Parameters:**

Name | Type |
------ | ------ |
`v` | number |

**Returns:** *void*

___

###  miterLimit

• **get miterLimit**(): *number*

*Defined in [awtk.ts:6341](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6341)*

miter\_limit。

**`see`** http://www.w3school.com.cn/tags/canvas_miterlimit.asp

**Returns:** *number*

• **set miterLimit**(`v`: number): *void*

*Defined in [awtk.ts:6330](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6330)*

miter\_limit。

**Parameters:**

Name | Type |
------ | ------ |
`v` | number |

**Returns:** *void*

___

###  ratio

• **get ratio**(): *number*

*Defined in [awtk.ts:6288](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6288)*

显示比例。

**Returns:** *number*

___

###  textAlign

• **get textAlign**(): *string*

*Defined in [awtk.ts:6414](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6414)*

文本对齐方式。

**`see`** http://www.w3school.com.cn/tags/canvas_textalign.asp

**Returns:** *string*

• **set textAlign**(`v`: string): *void*

*Defined in [awtk.ts:6403](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6403)*

文本对齐方式。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  textBaseline

• **get textBaseline**(): *string*

*Defined in [awtk.ts:6429](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6429)*

文本基线。

**`see`** http://www.w3school.com.cn/tags/canvas_textbaseline.asp

**Returns:** *string*

• **set textBaseline**(`v`: string): *void*

*Defined in [awtk.ts:6418](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6418)*

文本基线。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  w

• **get w**(): *number*

*Defined in [awtk.ts:6268](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6268)*

canvas的宽度

**Returns:** *number*

## Methods

###  arc

▸ **arc**(`x`: number, `y`: number, `r`: number, `start_angle`: number, `end_angle`: number, `ccw`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5764](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5764)*

生成一条圆弧。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | 原点x坐标。 |
`y` | number | 原点y坐标。 |
`r` | number | 半径。 |
`start_angle` | number | 起始角度。 |
`end_angle` | number | 结束角度。 |
`ccw` | boolean | 是否逆时针。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  arcTo

▸ **arcTo**(`x1`: number, `y1`: number, `x2`: number, `y2`: number, `r`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5745](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5745)*

生成一条圆弧路径到指定点。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x1` | number | 起始点x坐标。 |
`y1` | number | 起始点y坐标。 |
`x2` | number | 结束点x坐标。 |
`y2` | number | 结束点y坐标。 |
`r` | number | 半径。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  beginPath

▸ **beginPath**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5661](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5661)*

清除之前的路径，并重新开始一条路径。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  bezierTo

▸ **bezierTo**(`cp1x`: number, `cp1y`: number, `cp2x`: number, `cp2y`: number, `x`: number, `y`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5727](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5727)*

生成一条三次贝塞尔曲线。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`cp1x` | number | 控制点1x坐标。 |
`cp1y` | number | 控制点1y坐标。 |
`cp2x` | number | 控制点2x坐标。 |
`cp2y` | number | 控制点3y坐标。 |
`x` | number | x坐标。 |
`y` | number | y坐标。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  clipRect

▸ **clipRect**(`x`: number, `y`: number, `w`: number, `h`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5944](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5944)*

矩形裁剪。

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

###  closePath

▸ **closePath**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5845](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5845)*

闭合路径。
闭合路径是指把起点和终点连接起来，形成一个封闭的多边形。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  drawIcon

▸ **drawIcon**(`img`: [TBitmap](_awtk_.tbitmap.md), `sx`: number, `sy`: number, `sw`: number, `sh`: number, `dx`: number, `dy`: number, `dw`: number, `dh`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6118](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6118)*

绘制图标。
绘制图标时会根据屏幕密度进行自动缩放，而绘制普通图片时不会。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`img` | [TBitmap](_awtk_.tbitmap.md) | 图片。 |
`sx` | number | sx |
`sy` | number | sy |
`sw` | number | sw |
`sh` | number | sh |
`dx` | number | dx |
`dy` | number | dy |
`dw` | number | dw |
`dh` | number | dh  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  drawImage

▸ **drawImage**(`img`: [TBitmap](_awtk_.tbitmap.md), `sx`: number, `sy`: number, `sw`: number, `sh`: number, `dx`: number, `dy`: number, `dw`: number, `dh`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6095](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6095)*

绘制图片。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`img` | [TBitmap](_awtk_.tbitmap.md) | 图片。 |
`sx` | number | sx |
`sy` | number | sy |
`sw` | number | sw |
`sh` | number | sh |
`dx` | number | dx |
`dy` | number | dy |
`dw` | number | dw |
`dh` | number | dh  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  ellipse

▸ **ellipse**(`x`: number, `y`: number, `rx`: number, `ry`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5831](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5831)*

生成一个椭圆路径。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x坐标。 |
`y` | number | y坐标。 |
`rx` | number | 圆角半径。 |
`ry` | number | 圆角半径。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  fill

▸ **fill**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5957](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5957)*

填充多边形。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  fillText

▸ **fillText**(`text`: string, `x`: number, `y`: number, `max_width`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6059](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6059)*

绘制文本。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`text` | string | text |
`x` | number | x坐标。 |
`y` | number | y坐标。 |
`max_width` | number | 最大宽度。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  flush

▸ **flush**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5648](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5648)*

flush

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  isPointInPath

▸ **isPointInPath**(`x`: number, `y`: number): *boolean*

*Defined in [awtk.ts:5779](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5779)*

检查点是否在当前路径中。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x坐标。 |
`y` | number | y坐标。  |

**Returns:** *boolean*

返回TRUE表示在，否则表示不在。

___

###  lineTo

▸ **lineTo**(`x`: number, `y`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5691](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5691)*

生成一条线段(从当前点到目标点)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x坐标。 |
`y` | number | y坐标。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  measureText

▸ **measureText**(`text`: string): *number*

*Defined in [awtk.ts:6073](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6073)*

测量文本的宽度。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`text` | string | text  |

**Returns:** *number*

返回text的宽度。

___

###  moveTo

▸ **moveTo**(`x`: number, `y`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5676](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5676)*

移动当前点到指定点。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x坐标。 |
`y` | number | y坐标。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  paint

▸ **paint**(`stroke`: boolean, `img`: [TBitmap](_awtk_.tbitmap.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5986](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5986)*

用图片填充/画多边形(可能存在可移植性问题，除非必要请勿使用)。
多边形的顶点必须在图片范围内，可以通过矩阵变化画到不同的位置。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`stroke` | boolean | TRUE表示画线FALSE表示填充。 |
`img` | [TBitmap](_awtk_.tbitmap.md) | 图片。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  quadTo

▸ **quadTo**(`cpx`: number, `cpy`: number, `x`: number, `y`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5708](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5708)*

生成一条二次贝塞尔曲线。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`cpx` | number | 控制点x坐标。 |
`cpy` | number | 控制点y坐标。 |
`x` | number | x坐标。 |
`y` | number | y坐标。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  rect

▸ **rect**(`x`: number, `y`: number, `w`: number, `h`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5796](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5796)*

生成一个矩形路径。

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

###  restore

▸ **restore**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6258](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6258)*

恢复上次save的状态。
save/restore必须配套使用，否则可能导致状态混乱。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  rotate

▸ **rotate**(`rad`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5859](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5859)*

旋转。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`rad` | number | 角度  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  roundedRect

▸ **roundedRect**(`x`: number, `y`: number, `w`: number, `h`: number, `r`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5814](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5814)*

生成一个圆角矩形路径。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x坐标。 |
`y` | number | y坐标。 |
`w` | number | 宽度。 |
`h` | number | 高度。 |
`r` | number | 圆角半径。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  save

▸ **save**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6244](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6244)*

保存当前的状态。如颜色和矩阵等信息。
save/restore必须配套使用，否则可能导致状态混乱。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  scale

▸ **scale**(`x`: number, `y`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5874](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5874)*

缩放。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x方向缩放比例。 |
`y` | number | y方向缩放比例。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setAntialias

▸ **setAntialias**(`value`: any): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6132](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6132)*

设置是否启用反走样。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 是否启用反走样。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFillColor

▸ **setFillColor**(`color`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6174](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6174)*

设置填充颜色。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`color` | string | 颜色。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFont

▸ **setFont**(`font`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6000](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6000)*

设置字体的名称。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`font` | string | 字体名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFontSize

▸ **setFontSize**(`font`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6014](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6014)*

设置字体的大小。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`font` | number | 字体大小。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setGlobalAlpha

▸ **setGlobalAlpha**(`alpha`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6146](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6146)*

设置全局透明度。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`alpha` | number | global alpha。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setLineCap

▸ **setLineCap**(`value`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6202](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6202)*

设置line cap。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | string | 取值：butt|round|square，必须为常量字符串。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setLineJoin

▸ **setLineJoin**(`value`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6216](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6216)*

设置line join。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | string | 取值：bevel|round|miter，必须为常量字符串。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setLineWidth

▸ **setLineWidth**(`value`: any): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6160](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6160)*

设置线条的宽度。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 线宽。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setMiterLimit

▸ **setMiterLimit**(`value`: any): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6230](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6230)*

设置miter limit。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | miter limit  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setStrokeColor

▸ **setStrokeColor**(`color`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6188](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6188)*

设置线条颜色。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`color` | string | 颜色。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setTextAlign

▸ **setTextAlign**(`value`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6028](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6028)*

设置文本水平对齐的方式。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | string | 取值：left|center|right，必须为常量字符串。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setTextBaseline

▸ **setTextBaseline**(`value`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:6042](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L6042)*

设置文本垂直对齐的方式。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | string | 取值：top|middle|bottom，必须为常量字符串。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setTransform

▸ **setTransform**(`a`: number, `b`: number, `c`: number, `d`: number, `e`: number, `f`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5927](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5927)*

设置变换矩阵。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`a` | number | a |
`b` | number | b |
`c` | number | c |
`d` | number | d |
`e` | number | e |
`f` | number | f  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  stroke

▸ **stroke**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5970](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5970)*

画线。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  transform

▸ **transform**(`a`: number, `b`: number, `c`: number, `d`: number, `e`: number, `f`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5908](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5908)*

变换矩阵。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`a` | number | a |
`b` | number | b |
`c` | number | c |
`d` | number | d |
`e` | number | e |
`f` | number | f  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  translate

▸ **translate**(`x`: number, `y`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5889](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5889)*

平移。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x方向偏移。 |
`y` | number | y方向偏移。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`vg`: [TVgcanvas](_awtk_.tvgcanvas.md)): *[TVgcanvas](_awtk_.tvgcanvas.md)*

*Defined in [awtk.ts:5635](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5635)*

转换为vgcanvas对象(供脚本语言使用)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`vg` | [TVgcanvas](_awtk_.tvgcanvas.md) | vgcanvas对象。  |

**Returns:** *[TVgcanvas](_awtk_.tvgcanvas.md)*

vgcanvas对象。