[AWTK](../README.md) / [Exports](../modules.md) / TVgcanvas

# Class: TVgcanvas

矢量图画布抽象基类。

具体实现时可以使用agg，nanovg, cairo和skia等方式。

cairo和skia体积太大，不适合嵌入式平台，但在PC平台也是一种选择。

目前我们只提供了基于nanovg的实现，支持软件渲染和硬件渲染。

我们对nanovg进行了一些改进:

* 可以用agg/agge实现软件渲染(暂时不支持文本绘制)。

* 可以用bgfx使用DirectX(Windows平台)和Metal(iOS)平台硬件加速。

示例：

>请参考：https://www.w3schools.com/tags/ref_canvas.asp

## Table of contents

### Constructors

- [constructor](TVgcanvas.md#constructor)

### Properties

- [nativeObj](TVgcanvas.md#nativeobj)

### Accessors

- [antiAlias](TVgcanvas.md#antialias)
- [font](TVgcanvas.md#font)
- [fontSize](TVgcanvas.md#fontsize)
- [globalAlpha](TVgcanvas.md#globalalpha)
- [h](TVgcanvas.md#h)
- [lineCap](TVgcanvas.md#linecap)
- [lineJoin](TVgcanvas.md#linejoin)
- [lineWidth](TVgcanvas.md#linewidth)
- [miterLimit](TVgcanvas.md#miterlimit)
- [ratio](TVgcanvas.md#ratio)
- [stride](TVgcanvas.md#stride)
- [textAlign](TVgcanvas.md#textalign)
- [textBaseline](TVgcanvas.md#textbaseline)
- [w](TVgcanvas.md#w)

### Methods

- [arc](TVgcanvas.md#arc)
- [arcTo](TVgcanvas.md#arcto)
- [beginPath](TVgcanvas.md#beginpath)
- [bezierTo](TVgcanvas.md#bezierto)
- [clipPath](TVgcanvas.md#clippath)
- [clipRect](TVgcanvas.md#cliprect)
- [closePath](TVgcanvas.md#closepath)
- [drawIcon](TVgcanvas.md#drawicon)
- [drawImage](TVgcanvas.md#drawimage)
- [drawImageRepeat](TVgcanvas.md#drawimagerepeat)
- [ellipse](TVgcanvas.md#ellipse)
- [fill](TVgcanvas.md#fill)
- [fillText](TVgcanvas.md#filltext)
- [flush](TVgcanvas.md#flush)
- [intersectClipRect](TVgcanvas.md#intersectcliprect)
- [isPointInPath](TVgcanvas.md#ispointinpath)
- [isRectfInClipRect](TVgcanvas.md#isrectfincliprect)
- [lineTo](TVgcanvas.md#lineto)
- [measureText](TVgcanvas.md#measuretext)
- [moveTo](TVgcanvas.md#moveto)
- [paint](TVgcanvas.md#paint)
- [pathWinding](TVgcanvas.md#pathwinding)
- [quadTo](TVgcanvas.md#quadto)
- [rect](TVgcanvas.md#rect)
- [restore](TVgcanvas.md#restore)
- [rotate](TVgcanvas.md#rotate)
- [roundedRect](TVgcanvas.md#roundedrect)
- [save](TVgcanvas.md#save)
- [scale](TVgcanvas.md#scale)
- [setAntialias](TVgcanvas.md#setantialias)
- [setFillColor](TVgcanvas.md#setfillcolor)
- [setFont](TVgcanvas.md#setfont)
- [setFontSize](TVgcanvas.md#setfontsize)
- [setGlobalAlpha](TVgcanvas.md#setglobalalpha)
- [setLineCap](TVgcanvas.md#setlinecap)
- [setLineJoin](TVgcanvas.md#setlinejoin)
- [setLineWidth](TVgcanvas.md#setlinewidth)
- [setMiterLimit](TVgcanvas.md#setmiterlimit)
- [setStrokeColor](TVgcanvas.md#setstrokecolor)
- [setTextAlign](TVgcanvas.md#settextalign)
- [setTextBaseline](TVgcanvas.md#settextbaseline)
- [setTransform](TVgcanvas.md#settransform)
- [stroke](TVgcanvas.md#stroke)
- [transform](TVgcanvas.md#transform)
- [translate](TVgcanvas.md#translate)
- [cast](TVgcanvas.md#cast)

## Constructors

### constructor

• **new TVgcanvas**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:7741](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7741)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:7740](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7740)

## Accessors

### antiAlias

• `get` **antiAlias**(): `boolean`

是否启用反走样功能。

#### Returns

`boolean`

#### Defined in

[awtk.ts:8440](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8440)

___

### font

• `get` **font**(): `string`

字体。

#### Returns

`string`

#### Defined in

[awtk.ts:8517](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8517)

• `set` **font**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Defined in

[awtk.ts:8521](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8521)

___

### fontSize

• `get` **fontSize**(): `number`

字体大小。

#### Returns

`number`

#### Defined in

[awtk.ts:8530](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8530)

• `set` **fontSize**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:8534](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8534)

___

### globalAlpha

• `get` **globalAlpha**(): `number`

全局alpha。

#### Returns

`number`

#### Defined in

[awtk.ts:8462](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8462)

• `set` **globalAlpha**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:8466](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8466)

___

### h

• `get` **h**(): `number`

canvas的高度

#### Returns

`number`

#### Defined in

[awtk.ts:8413](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8413)

___

### lineCap

• `get` **lineCap**(): `string`

line\_cap。

**`See`**

http://www.w3school.com.cn/tags/canvas_linecap.asp

#### Returns

`string`

#### Defined in

[awtk.ts:8490](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8490)

• `set` **lineCap**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Defined in

[awtk.ts:8494](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8494)

___

### lineJoin

• `get` **lineJoin**(): `string`

line\_join。

**`See`**

http://www.w3school.com.cn/tags/canvas_linejoin.asp

#### Returns

`string`

#### Defined in

[awtk.ts:8504](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8504)

• `set` **lineJoin**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Defined in

[awtk.ts:8508](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8508)

___

### lineWidth

• `get` **lineWidth**(): `number`

线宽。

#### Returns

`number`

#### Defined in

[awtk.ts:8449](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8449)

• `set` **lineWidth**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:8453](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8453)

___

### miterLimit

• `get` **miterLimit**(): `number`

miter\_limit。

**`See`**

http://www.w3school.com.cn/tags/canvas_miterlimit.asp

#### Returns

`number`

#### Defined in

[awtk.ts:8476](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8476)

• `set` **miterLimit**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:8480](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8480)

___

### ratio

• `get` **ratio**(): `number`

显示比例。

#### Returns

`number`

#### Defined in

[awtk.ts:8431](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8431)

___

### stride

• `get` **stride**(): `number`

一行占的字节

#### Returns

`number`

#### Defined in

[awtk.ts:8422](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8422)

___

### textAlign

• `get` **textAlign**(): `string`

文本对齐方式。

**`See`**

http://www.w3school.com.cn/tags/canvas_textalign.asp

#### Returns

`string`

#### Defined in

[awtk.ts:8545](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8545)

• `set` **textAlign**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Defined in

[awtk.ts:8549](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8549)

___

### textBaseline

• `get` **textBaseline**(): `string`

文本基线。

**`See`**

http://www.w3school.com.cn/tags/canvas_textbaseline.asp

#### Returns

`string`

#### Defined in

[awtk.ts:8560](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8560)

• `set` **textBaseline**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Defined in

[awtk.ts:8564](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8564)

___

### w

• `get` **w**(): `number`

canvas的宽度

#### Returns

`number`

#### Defined in

[awtk.ts:8404](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8404)

## Methods

### arc

▸ **arc**(`x`, `y`, `r`, `start_angle`, `end_angle`, `ccw`): [`TRet`](../enums/TRet.md)

生成一条圆弧。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | 原点x坐标。 |
| `y` | `number` | 原点y坐标。 |
| `r` | `number` | 半径。 |
| `start_angle` | `number` | 起始角度。 |
| `end_angle` | `number` | 结束角度。 |
| `ccw` | `boolean` | 是否逆时针。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7866](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7866)

___

### arcTo

▸ **arcTo**(`x1`, `y1`, `x2`, `y2`, `r`): [`TRet`](../enums/TRet.md)

生成一条圆弧路径到指定点。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x1` | `number` | 起始点x坐标。 |
| `y1` | `number` | 起始点y坐标。 |
| `x2` | `number` | 结束点x坐标。 |
| `y2` | `number` | 结束点y坐标。 |
| `r` | `number` | 半径。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7849](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7849)

___

### beginPath

▸ **beginPath**(): [`TRet`](../enums/TRet.md)

清除之前的路径，并重新开始一条路径。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7775](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7775)

___

### bezierTo

▸ **bezierTo**(`cp1x`, `cp1y`, `cp2x`, `cp2y`, `x`, `y`): [`TRet`](../enums/TRet.md)

生成一条三次贝塞尔曲线。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `cp1x` | `number` | 控制点1x坐标。 |
| `cp1y` | `number` | 控制点1y坐标。 |
| `cp2x` | `number` | 控制点2x坐标。 |
| `cp2y` | `number` | 控制点2y坐标。 |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7833](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7833)

___

### clipPath

▸ **clipPath**(): [`TRet`](../enums/TRet.md)

使用当前的path裁剪。
>目前只有部分backend支持(如cairo)。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8036](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8036)

___

### clipRect

▸ **clipRect**(`x`, `y`, `w`, `h`): [`TRet`](../enums/TRet.md)

矩形裁剪。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |
| `w` | `number` | 宽度。 |
| `h` | `number` | 高度。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8051](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8051)

___

### closePath

▸ **closePath**(): [`TRet`](../enums/TRet.md)

闭合路径。

>闭合路径是指把起点和终点连接起来，形成一个封闭的多边形。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7938](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7938)

___

### drawIcon

▸ **drawIcon**(`img`, `sx`, `sy`, `sw`, `sh`, `dx`, `dy`, `dw`, `dh`): [`TRet`](../enums/TRet.md)

绘制图标。

绘制图标时会根据屏幕密度进行自动缩放，而绘制普通图片时不会。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `img` | [`TBitmap`](TBitmap.md) | 图片。 |
| `sx` | `number` | sx |
| `sy` | `number` | sy |
| `sw` | `number` | sw |
| `sh` | `number` | sh |
| `dx` | `number` | dx |
| `dy` | `number` | dy |
| `dw` | `number` | dw |
| `dh` | `number` | dh |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8273](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8273)

___

### drawImage

▸ **drawImage**(`img`, `sx`, `sy`, `sw`, `sh`, `dx`, `dy`, `dw`, `dh`): [`TRet`](../enums/TRet.md)

绘制图片。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `img` | [`TBitmap`](TBitmap.md) | 图片。 |
| `sx` | `number` | sx |
| `sy` | `number` | sy |
| `sw` | `number` | sw |
| `sh` | `number` | sh |
| `dx` | `number` | dx |
| `dy` | `number` | dy |
| `dw` | `number` | dw |
| `dh` | `number` | dh |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8225](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8225)

___

### drawImageRepeat

▸ **drawImageRepeat**(`img`, `sx`, `sy`, `sw`, `sh`, `dx`, `dy`, `dw`, `dh`, `dst_w`, `dst_h`): [`TRet`](../enums/TRet.md)

绘制图片。

备注：
当绘制区域大于原图区域时，多余的绘制区域会重复绘制原图区域的东西。（绘制图区按照绘制图片的宽高来绘制的）
当绘制图片的宽高和原图的不同，在重复绘制的同时加入缩放。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `img` | [`TBitmap`](TBitmap.md) | 图片。 |
| `sx` | `number` | 原图区域的 x |
| `sy` | `number` | 原图区域的 y |
| `sw` | `number` | 原图区域的 w |
| `sh` | `number` | 原图区域的 h |
| `dx` | `number` | 绘制区域的 x |
| `dy` | `number` | 绘制区域的 y |
| `dw` | `number` | 绘制区域的 w |
| `dh` | `number` | 绘制区域的 h |
| `dst_w` | `number` | 绘制图片的宽 |
| `dst_h` | `number` | 绘制图片的高 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8251](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8251)

___

### ellipse

▸ **ellipse**(`x`, `y`, `rx`, `ry`): [`TRet`](../enums/TRet.md)

生成一个椭圆路径。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |
| `rx` | `number` | 圆角半径。 |
| `ry` | `number` | 圆角半径。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7925](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7925)

___

### fill

▸ **fill**(): [`TRet`](../enums/TRet.md)

填充多边形。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8105](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8105)

___

### fillText

▸ **fillText**(`text`, `x`, `y`, `max_width`): [`TRet`](../enums/TRet.md)

绘制文本。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `text` | `string` | text |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |
| `max_width` | `number` | 最大宽度。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8193](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8193)

___

### flush

▸ **flush**(): [`TRet`](../enums/TRet.md)

flush

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7764](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7764)

___

### intersectClipRect

▸ **intersectClipRect**(`x`, `y`, `w`, `h`): [`TRet`](../enums/TRet.md)

设置一个与前一个裁剪区做交集的矩形裁剪区。
如果下面这种情况，则不能直接调用 rect_intersect 函数来做矩形交集和 vgcanvas_clip_rect 函数设置裁剪区，而采用本函数做交集。
由于缩放和旋转以及平移会导致 vg 的坐标系和上一个裁剪区的坐标系不同，
导致直接使用做交集的话，裁剪区会出错。

```
vgcanvas_clip_rect(vg, old_r.x, old_r.y, old_r.w, old_r.h);
vgcanvas_save(vg);
vgcanvas_scale(vg, scale_x, scale_y);
vgcanvas_rotate(vg, TK_D2R(15));
vgcanvas_intersect_clip_rect(vg, r.x, r.y, r.w, r.h);
..................
vgcanvas_restore(vg);
```

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |
| `w` | `number` | 宽度。 |
| `h` | `number` | 高度。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8094](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8094)

___

### isPointInPath

▸ **isPointInPath**(`x`, `y`): `boolean`

检查点是否在当前路径中。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |

#### Returns

`boolean`

返回TRUE表示在，否则表示不在。

#### Defined in

[awtk.ts:7879](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7879)

___

### isRectfInClipRect

▸ **isRectfInClipRect**(`left`, `top`, `right`, `bottom`): `boolean`

矩形区域是否在矩形裁剪中。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `left` | `number` | 矩形区域左边。 |
| `top` | `number` | 矩形区域上边。 |
| `right` | `number` | 矩形区域右边。 |
| `bottom` | `number` | 矩形区域下边。 |

#### Returns

`boolean`

返回 TURE 则在区域中，返回 FALSE 则不在区域中。

#### Defined in

[awtk.ts:8066](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8066)

___

### lineTo

▸ **lineTo**(`x`, `y`): [`TRet`](../enums/TRet.md)

生成一条线段(从当前点到目标点)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7801](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7801)

___

### measureText

▸ **measureText**(`text`): `number`

测量文本的宽度。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `text` | `string` | text |

#### Returns

`number`

返回text的宽度。

#### Defined in

[awtk.ts:8205](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8205)

___

### moveTo

▸ **moveTo**(`x`, `y`): [`TRet`](../enums/TRet.md)

移动当前点到指定点。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7788](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7788)

___

### paint

▸ **paint**(`stroke`, `img`): [`TRet`](../enums/TRet.md)

用图片填充/画多边形(可能存在可移植性问题，除非必要请勿使用)。
多边形的顶点必须在图片范围内，可以通过矩阵变化画到不同的位置。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `stroke` | `boolean` | TRUE表示画线FALSE表示填充。 |
| `img` | [`TBitmap`](TBitmap.md) | 图片。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8130](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8130)

___

### pathWinding

▸ **pathWinding**(`dir`): [`TRet`](../enums/TRet.md)

设置路径填充实心与否。

>CCW(1)为实心，CW(2)为镂空，设置其他则默认根据非零环绕规则判断(nonzero)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `dir` | `boolean` | 填充方法。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7952](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7952)

___

### quadTo

▸ **quadTo**(`cpx`, `cpy`, `x`, `y`): [`TRet`](../enums/TRet.md)

生成一条二次贝塞尔曲线。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `cpx` | `number` | 控制点x坐标。 |
| `cpy` | `number` | 控制点y坐标。 |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7816](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7816)

___

### rect

▸ **rect**(`x`, `y`, `w`, `h`): [`TRet`](../enums/TRet.md)

生成一个矩形路径。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |
| `w` | `number` | 宽度。 |
| `h` | `number` | 高度。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7894](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7894)

___

### restore

▸ **restore**(): [`TRet`](../enums/TRet.md)

恢复上次save的状态。

> save/restore必须配套使用，否则可能导致状态混乱。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8395](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8395)

___

### rotate

▸ **rotate**(`rad`): [`TRet`](../enums/TRet.md)

旋转。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `rad` | `number` | 角度 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7964](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7964)

___

### roundedRect

▸ **roundedRect**(`x`, `y`, `w`, `h`, `r`): [`TRet`](../enums/TRet.md)

生成一个圆角矩形路径。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |
| `w` | `number` | 宽度。 |
| `h` | `number` | 高度。 |
| `r` | `number` | 圆角半径。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7910](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7910)

___

### save

▸ **save**(): [`TRet`](../enums/TRet.md)

保存当前的状态。如颜色和矩阵等信息。

> save/restore必须配套使用，否则可能导致状态混乱。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8382](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8382)

___

### scale

▸ **scale**(`x`, `y`): [`TRet`](../enums/TRet.md)

缩放。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x方向缩放比例。 |
| `y` | `number` | y方向缩放比例。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7977](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7977)

___

### setAntialias

▸ **setAntialias**(`value`): [`TRet`](../enums/TRet.md)

设置是否启用反走样。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 是否启用反走样。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8285](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8285)

___

### setFillColor

▸ **setFillColor**(`color`): [`TRet`](../enums/TRet.md)

设置填充颜色。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `color` | `string` | 颜色。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8321](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8321)

___

### setFont

▸ **setFont**(`font`): [`TRet`](../enums/TRet.md)

设置字体的名称。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `font` | `string` | 字体名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8142](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8142)

___

### setFontSize

▸ **setFontSize**(`font`): [`TRet`](../enums/TRet.md)

设置字体的大小。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `font` | `number` | 字体大小。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8154](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8154)

___

### setGlobalAlpha

▸ **setGlobalAlpha**(`alpha`): [`TRet`](../enums/TRet.md)

设置全局透明度。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `alpha` | `number` | global alpha。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8297](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8297)

___

### setLineCap

▸ **setLineCap**(`value`): [`TRet`](../enums/TRet.md)

设置line cap。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `string` | 取值：butt\|round\|square，必须为常量字符串。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8345](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8345)

___

### setLineJoin

▸ **setLineJoin**(`value`): [`TRet`](../enums/TRet.md)

设置line join。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `string` | 取值：bevel\|round\|miter，必须为常量字符串。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8357](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8357)

___

### setLineWidth

▸ **setLineWidth**(`value`): [`TRet`](../enums/TRet.md)

设置线条的宽度。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 线宽。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8309](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8309)

___

### setMiterLimit

▸ **setMiterLimit**(`value`): [`TRet`](../enums/TRet.md)

设置miter limit。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | miter limit |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8369](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8369)

___

### setStrokeColor

▸ **setStrokeColor**(`color`): [`TRet`](../enums/TRet.md)

设置线条颜色。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `color` | `string` | 颜色。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8333](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8333)

___

### setTextAlign

▸ **setTextAlign**(`value`): [`TRet`](../enums/TRet.md)

设置文本水平对齐的方式。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `string` | 取值：left\|center\|right，必须为常量字符串。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8166](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8166)

___

### setTextBaseline

▸ **setTextBaseline**(`value`): [`TRet`](../enums/TRet.md)

设置文本垂直对齐的方式。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `string` | 取值：top\|middle\|bottom，必须为常量字符串。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8178](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8178)

___

### setTransform

▸ **setTransform**(`a`, `b`, `c`, `d`, `e`, `f`): [`TRet`](../enums/TRet.md)

设置变换矩阵。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `a` | `number` | a |
| `b` | `number` | b |
| `c` | `number` | c |
| `d` | `number` | d |
| `e` | `number` | e |
| `f` | `number` | f |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8024](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8024)

___

### stroke

▸ **stroke**(): [`TRet`](../enums/TRet.md)

画线。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8116](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8116)

___

### transform

▸ **transform**(`a`, `b`, `c`, `d`, `e`, `f`): [`TRet`](../enums/TRet.md)

变换矩阵。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `a` | `number` | a |
| `b` | `number` | b |
| `c` | `number` | c |
| `d` | `number` | d |
| `e` | `number` | e |
| `f` | `number` | f |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8007](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L8007)

___

### translate

▸ **translate**(`x`, `y`): [`TRet`](../enums/TRet.md)

平移。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x方向偏移。 |
| `y` | `number` | y方向偏移。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7990](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7990)

___

### cast

▸ `Static` **cast**(`vg`): [`TVgcanvas`](TVgcanvas.md)

转换为vgcanvas对象(供脚本语言使用)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `vg` | [`TVgcanvas`](TVgcanvas.md) | vgcanvas对象。 |

#### Returns

[`TVgcanvas`](TVgcanvas.md)

vgcanvas对象。

#### Defined in

[awtk.ts:7753](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7753)
