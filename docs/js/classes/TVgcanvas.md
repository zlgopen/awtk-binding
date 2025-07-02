[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TVgcanvas

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

## Constructors

### new TVgcanvas()

> **new TVgcanvas**(`nativeObj`): [`TVgcanvas`](TVgcanvas.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TVgcanvas`](TVgcanvas.md)

#### Defined in

[awtk.ts:8159](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8159)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:8158](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8158)

## Accessors

### antiAlias

> `get` **antiAlias**(): `boolean`

是否启用反走样功能。

#### Returns

`boolean`

#### Defined in

[awtk.ts:8870](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8870)

***

### font

> `get` **font**(): `string`

字体。

> `set` **font**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Defined in

[awtk.ts:8947](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8947)

***

### fontSize

> `get` **fontSize**(): `number`

字体大小。

> `set` **fontSize**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Defined in

[awtk.ts:8960](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8960)

***

### globalAlpha

> `get` **globalAlpha**(): `number`

全局alpha。

> `set` **globalAlpha**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Defined in

[awtk.ts:8892](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8892)

***

### h

> `get` **h**(): `number`

canvas的高度

#### Returns

`number`

#### Defined in

[awtk.ts:8843](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8843)

***

### lineCap

> `get` **lineCap**(): `string`

line\_cap。

#### See

http://www.w3school.com.cn/tags/canvas_linecap.asp

> `set` **lineCap**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Defined in

[awtk.ts:8920](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8920)

***

### lineJoin

> `get` **lineJoin**(): `string`

line\_join。

#### See

http://www.w3school.com.cn/tags/canvas_linejoin.asp

> `set` **lineJoin**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Defined in

[awtk.ts:8934](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8934)

***

### lineWidth

> `get` **lineWidth**(): `number`

线宽。

> `set` **lineWidth**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Defined in

[awtk.ts:8879](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8879)

***

### miterLimit

> `get` **miterLimit**(): `number`

miter\_limit。

#### See

http://www.w3school.com.cn/tags/canvas_miterlimit.asp

> `set` **miterLimit**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Defined in

[awtk.ts:8906](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8906)

***

### ratio

> `get` **ratio**(): `number`

显示比例。

#### Returns

`number`

#### Defined in

[awtk.ts:8861](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8861)

***

### stride

> `get` **stride**(): `number`

一行占的字节

#### Returns

`number`

#### Defined in

[awtk.ts:8852](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8852)

***

### textAlign

> `get` **textAlign**(): `string`

文本对齐方式。

#### See

http://www.w3school.com.cn/tags/canvas_textalign.asp

> `set` **textAlign**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Defined in

[awtk.ts:8975](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8975)

***

### textBaseline

> `get` **textBaseline**(): `string`

文本基线。

#### See

http://www.w3school.com.cn/tags/canvas_textbaseline.asp

> `set` **textBaseline**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Defined in

[awtk.ts:8990](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8990)

***

### w

> `get` **w**(): `number`

canvas的宽度

#### Returns

`number`

#### Defined in

[awtk.ts:8834](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8834)

## Methods

### arc()

> **arc**(`x`, `y`, `r`, `start_angle`, `end_angle`, `ccw`): [`TRet`](../enumerations/TRet.md)

生成一条圆弧。

#### Parameters

• **x**: `number`

原点x坐标。

• **y**: `number`

原点y坐标。

• **r**: `number`

半径。

• **start\_angle**: `number`

起始角度（单位：弧度）。

• **end\_angle**: `number`

结束角度（单位：弧度）。

• **ccw**: `boolean`

是否逆时针。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8284](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8284)

***

### arcTo()

> **arcTo**(`x1`, `y1`, `x2`, `y2`, `r`): [`TRet`](../enumerations/TRet.md)

生成一条圆弧路径到指定点。

#### Parameters

• **x1**: `number`

起始点x坐标。

• **y1**: `number`

起始点y坐标。

• **x2**: `number`

结束点x坐标。

• **y2**: `number`

结束点y坐标。

• **r**: `number`

半径。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8267](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8267)

***

### beginPath()

> **beginPath**(): [`TRet`](../enumerations/TRet.md)

清除之前的路径，并重新开始一条路径。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8193](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8193)

***

### bezierTo()

> **bezierTo**(`cp1x`, `cp1y`, `cp2x`, `cp2y`, `x`, `y`): [`TRet`](../enumerations/TRet.md)

生成一条三次贝塞尔曲线。

#### Parameters

• **cp1x**: `number`

控制点1x坐标。

• **cp1y**: `number`

控制点1y坐标。

• **cp2x**: `number`

控制点2x坐标。

• **cp2y**: `number`

控制点2y坐标。

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8251](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8251)

***

### clipPath()

> **clipPath**(): [`TRet`](../enumerations/TRet.md)

使用当前的path裁剪。
>目前只有部分backend支持(如cairo)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8452](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8452)

***

### clipRect()

> **clipRect**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

矩形裁剪。
备注：
1. 在绘图的时候脏矩形和裁剪区是一样的。
2. 该函数是不合并裁剪区的，所有可能出现裁剪区被扩大导致绘图在脏矩形以外的情况，导致残影的情况。
3. 该函数不支持旋转后调用，会导致裁剪区异常。
........
rect_t r;
rect_t r_save;
r = rectf_init(c->ox, c->oy, widget->w, widget->h);
r_save = *vgcanvas_get_clip_rect(vg);
r = rectf_intersect(&r, &r_save);
vgcanvas_clip_rect(vg, (float_t)r.x, (float_t)r.y, (float_t)r.w, (float_t)r.h);
........

#### Parameters

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

• **w**: `number`

宽度。

• **h**: `number`

高度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8479](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8479)

***

### closePath()

> **closePath**(): [`TRet`](../enumerations/TRet.md)

闭合路径。

>闭合路径是指把起点和终点连接起来，形成一个封闭的多边形。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8356](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8356)

***

### drawIcon()

> **drawIcon**(`img`, `sx`, `sy`, `sw`, `sh`, `dx`, `dy`, `dw`, `dh`): [`TRet`](../enumerations/TRet.md)

绘制图标。

绘制图标时会根据屏幕密度进行自动缩放，而绘制普通图片时不会。

#### Parameters

• **img**: [`TBitmap`](TBitmap.md)

图片。

• **sx**: `number`

原图区域的 x

• **sy**: `number`

原图区域的 y

• **sw**: `number`

原图区域的 w

• **sh**: `number`

原图区域的 h

• **dx**: `number`

绘制区域的 x

• **dy**: `number`

绘制区域的 y

• **dw**: `number`

绘制区域的 w

• **dh**: `number`

绘制区域的 h

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8703](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8703)

***

### drawImage()

> **drawImage**(`img`, `sx`, `sy`, `sw`, `sh`, `dx`, `dy`, `dw`, `dh`): [`TRet`](../enumerations/TRet.md)

绘制图片。

#### Parameters

• **img**: [`TBitmap`](TBitmap.md)

图片。

• **sx**: `number`

原图区域的 x

• **sy**: `number`

原图区域的 y

• **sw**: `number`

原图区域的 w

• **sh**: `number`

原图区域的 h

• **dx**: `number`

绘制区域的 x

• **dy**: `number`

绘制区域的 y

• **dw**: `number`

绘制区域的 w

• **dh**: `number`

绘制区域的 h

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8655](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8655)

***

### drawImageRepeat()

> **drawImageRepeat**(`img`, `sx`, `sy`, `sw`, `sh`, `dx`, `dy`, `dw`, `dh`, `dst_w`, `dst_h`): [`TRet`](../enumerations/TRet.md)

绘制图片。

备注：
当绘制区域大于原图区域时，多余的绘制区域会重复绘制原图区域的东西。（绘制图区按照绘制图片的宽高来绘制的）
当绘制图片的宽高和原图的不同，在重复绘制的同时加入缩放。

#### Parameters

• **img**: [`TBitmap`](TBitmap.md)

图片。

• **sx**: `number`

原图区域的 x

• **sy**: `number`

原图区域的 y

• **sw**: `number`

原图区域的 w

• **sh**: `number`

原图区域的 h

• **dx**: `number`

绘制区域的 x

• **dy**: `number`

绘制区域的 y

• **dw**: `number`

绘制区域的 w

• **dh**: `number`

绘制区域的 h

• **dst\_w**: `number`

绘制图片的宽

• **dst\_h**: `number`

绘制图片的高

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8681](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8681)

***

### ellipse()

> **ellipse**(`x`, `y`, `rx`, `ry`): [`TRet`](../enumerations/TRet.md)

生成一个椭圆路径。

#### Parameters

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

• **rx**: `number`

圆角半径。

• **ry**: `number`

圆角半径。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8343](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8343)

***

### fill()

> **fill**(): [`TRet`](../enumerations/TRet.md)

填充多边形。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8535](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8535)

***

### fillText()

> **fillText**(`text`, `x`, `y`, `max_width`): [`TRet`](../enumerations/TRet.md)

绘制文本。

#### Parameters

• **text**: `string`

text

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

• **max\_width**: `number`

最大宽度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8623](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8623)

***

### flush()

> **flush**(): [`TRet`](../enumerations/TRet.md)

flush

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8182](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8182)

***

### intersectClipRect()

> **intersectClipRect**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

设置一个与前一个裁剪区做交集的矩形裁剪区。
备注：
1. 如果下面这种情况，则不能直接调用 rect_intersect 函数来做矩形交集和 vgcanvas_clip_rect 函数设置裁剪区，而采用本函数做交集。
由于缩放和旋转以及平移会导致 vg 的坐标系和上一个裁剪区的坐标系不同，
导致直接使用做交集的话，裁剪区会出错。
2. 该函数不支持旋转后调用，会导致裁剪区异常。

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

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

• **w**: `number`

宽度。

• **h**: `number`

高度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8524](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8524)

***

### isPointInPath()

> **isPointInPath**(`x`, `y`): `boolean`

检查点是否在当前路径中。

#### Parameters

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

#### Returns

`boolean`

返回TRUE表示在，否则表示不在。

#### Defined in

[awtk.ts:8297](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8297)

***

### isRectfInClipRect()

> **isRectfInClipRect**(`left`, `top`, `right`, `bottom`): `boolean`

矩形区域是否在矩形裁剪中。

#### Parameters

• **left**: `number`

矩形区域左边。

• **top**: `number`

矩形区域上边。

• **right**: `number`

矩形区域右边。

• **bottom**: `number`

矩形区域下边。

#### Returns

`boolean`

返回 TURE 则在区域中，返回 FALSE 则不在区域中。

#### Defined in

[awtk.ts:8494](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8494)

***

### lineTo()

> **lineTo**(`x`, `y`): [`TRet`](../enumerations/TRet.md)

生成一条线段(从当前点到目标点)。

#### Parameters

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8219](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8219)

***

### measureText()

> **measureText**(`text`): `number`

测量文本的宽度。

#### Parameters

• **text**: `string`

text

#### Returns

`number`

返回text的宽度。

#### Defined in

[awtk.ts:8635](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8635)

***

### moveTo()

> **moveTo**(`x`, `y`): [`TRet`](../enumerations/TRet.md)

移动当前点到指定点。

#### Parameters

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8206](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8206)

***

### paint()

> **paint**(`stroke`, `img`): [`TRet`](../enumerations/TRet.md)

用图片填充/画多边形(可能存在可移植性问题，除非必要请勿使用)。
多边形的顶点必须在图片范围内，可以通过矩阵变化画到不同的位置。

#### Parameters

• **stroke**: `boolean`

TRUE表示画线FALSE表示填充。

• **img**: [`TBitmap`](TBitmap.md)

图片。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8560](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8560)

***

### quadTo()

> **quadTo**(`cpx`, `cpy`, `x`, `y`): [`TRet`](../enumerations/TRet.md)

生成一条二次贝塞尔曲线。

#### Parameters

• **cpx**: `number`

控制点x坐标。

• **cpy**: `number`

控制点y坐标。

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8234](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8234)

***

### rect()

> **rect**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

生成一个矩形路径。

#### Parameters

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

• **w**: `number`

宽度。

• **h**: `number`

高度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8312](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8312)

***

### restore()

> **restore**(): [`TRet`](../enumerations/TRet.md)

恢复上次save的状态。

> save/restore必须配套使用，否则可能导致状态混乱。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8825](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8825)

***

### rotate()

> **rotate**(`rad`): [`TRet`](../enumerations/TRet.md)

旋转。

#### Parameters

• **rad**: `number`

旋转角度(单位：弧度)

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8380](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8380)

***

### roundedRect()

> **roundedRect**(`x`, `y`, `w`, `h`, `r`): [`TRet`](../enumerations/TRet.md)

生成一个圆角矩形路径。

#### Parameters

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

• **w**: `number`

宽度。

• **h**: `number`

高度。

• **r**: `number`

圆角半径。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8328](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8328)

***

### save()

> **save**(): [`TRet`](../enumerations/TRet.md)

保存当前的状态。如颜色和矩阵等信息。

> save/restore必须配套使用，否则可能导致状态混乱。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8812](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8812)

***

### scale()

> **scale**(`x`, `y`): [`TRet`](../enumerations/TRet.md)

缩放。

#### Parameters

• **x**: `number`

x方向缩放比例。

• **y**: `number`

y方向缩放比例。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8393](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8393)

***

### setAntialias()

> **setAntialias**(`value`): [`TRet`](../enumerations/TRet.md)

设置是否启用反走样。

#### Parameters

• **value**: `any`

是否启用反走样。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8715](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8715)

***

### setFillColor()

> **setFillColor**(`color`): [`TRet`](../enumerations/TRet.md)

设置填充颜色。

#### Parameters

• **color**: `string`

颜色。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8751](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8751)

***

### setFillMode()

> **setFillMode**(`fill_mode`): [`TRet`](../enumerations/TRet.md)

设置填充规则。

#### Parameters

• **fill\_mode**: [`TVgcanvasFillMode`](../enumerations/TVgcanvasFillMode.md)

填充规则。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8368](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8368)

***

### setFont()

> **setFont**(`font`): [`TRet`](../enumerations/TRet.md)

设置字体的名称。

#### Parameters

• **font**: `string`

字体名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8572](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8572)

***

### setFontSize()

> **setFontSize**(`size`): [`TRet`](../enumerations/TRet.md)

设置字体的大小。

#### Parameters

• **size**: `number`

字体大小。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8584](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8584)

***

### setGlobalAlpha()

> **setGlobalAlpha**(`alpha`): [`TRet`](../enumerations/TRet.md)

设置全局透明度。

#### Parameters

• **alpha**: `number`

global alpha。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8727](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8727)

***

### setLineCap()

> **setLineCap**(`value`): [`TRet`](../enumerations/TRet.md)

设置line cap。

#### Parameters

• **value**: `string`

取值：butt|round|square，必须为常量字符串。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8775](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8775)

***

### setLineJoin()

> **setLineJoin**(`value`): [`TRet`](../enumerations/TRet.md)

设置line join。

#### Parameters

• **value**: `string`

取值：bevel|round|miter，必须为常量字符串。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8787](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8787)

***

### setLineWidth()

> **setLineWidth**(`value`): [`TRet`](../enumerations/TRet.md)

设置线条的宽度。

#### Parameters

• **value**: `any`

线宽。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8739](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8739)

***

### setMiterLimit()

> **setMiterLimit**(`value`): [`TRet`](../enumerations/TRet.md)

设置miter limit。

#### Parameters

• **value**: `any`

miter limit

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8799](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8799)

***

### setStrokeColor()

> **setStrokeColor**(`str`): [`TRet`](../enumerations/TRet.md)

设置线条颜色。

#### Parameters

• **str**: `string`

颜色。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8763](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8763)

***

### setTextAlign()

> **setTextAlign**(`value`): [`TRet`](../enumerations/TRet.md)

设置文本水平对齐的方式。

#### Parameters

• **value**: `string`

取值：left|center|right，必须为常量字符串。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8596](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8596)

***

### setTextBaseline()

> **setTextBaseline**(`value`): [`TRet`](../enumerations/TRet.md)

设置文本垂直对齐的方式。

#### Parameters

• **value**: `string`

取值：top|middle|bottom，必须为常量字符串。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8608](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8608)

***

### setTransform()

> **setTransform**(`a`, `b`, `c`, `d`, `e`, `f`): [`TRet`](../enumerations/TRet.md)

设置变换矩阵。

#### Parameters

• **a**: `number`

a

• **b**: `number`

b

• **c**: `number`

c

• **d**: `number`

d

• **e**: `number`

e

• **f**: `number`

f

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8440](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8440)

***

### stroke()

> **stroke**(): [`TRet`](../enumerations/TRet.md)

画线。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8546](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8546)

***

### transform()

> **transform**(`a`, `b`, `c`, `d`, `e`, `f`): [`TRet`](../enumerations/TRet.md)

变换矩阵。

#### Parameters

• **a**: `number`

a

• **b**: `number`

b

• **c**: `number`

c

• **d**: `number`

d

• **e**: `number`

e

• **f**: `number`

f

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8423](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8423)

***

### translate()

> **translate**(`x`, `y`): [`TRet`](../enumerations/TRet.md)

平移。

#### Parameters

• **x**: `number`

x方向偏移。

• **y**: `number`

y方向偏移。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:8406](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8406)

***

### cast()

> `static` **cast**(`vg`): [`TVgcanvas`](TVgcanvas.md)

转换为vgcanvas对象(供脚本语言使用)。

#### Parameters

• **vg**: [`TVgcanvas`](TVgcanvas.md)

vgcanvas对象。

#### Returns

[`TVgcanvas`](TVgcanvas.md)

vgcanvas对象。

#### Defined in

[awtk.ts:8171](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8171)
