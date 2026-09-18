[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TVgcanvas

# Class: TVgcanvas

Defined in: [awtk.ts:8272](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8272)

矢量图画布抽象基类。

具体实现时可以使用nanovg, cairo和skia等方式。

cairo和skia体积太大，不适合嵌入式平台，但在PC平台也是一种选择。

目前我们只提供了基于nanovg的实现，支持软件渲染和硬件渲染。

我们对nanovg进行了一些改进:

* 可以用agge实现软件渲染(暂时不支持文本绘制)。

示例：

>请参考：https://www.w3schools.com/tags/ref_canvas.asp

## Constructors

### Constructor

> **new TVgcanvas**(`nativeObj`): `TVgcanvas`

Defined in: [awtk.ts:8274](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8274)

#### Parameters

##### nativeObj

`any`

#### Returns

`TVgcanvas`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:8273](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8273)

## Accessors

### antiAlias

#### Get Signature

> **get** **antiAlias**(): `boolean`

Defined in: [awtk.ts:9002](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9002)

是否启用反走样功能。

##### Returns

`boolean`

***

### font

#### Get Signature

> **get** **font**(): `string`

Defined in: [awtk.ts:9079](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9079)

字体。

##### Returns

`string`

#### Set Signature

> **set** **font**(`v`): `void`

Defined in: [awtk.ts:9083](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9083)

##### Parameters

###### v

`string`

##### Returns

`void`

***

### fontSize

#### Get Signature

> **get** **fontSize**(): `number`

Defined in: [awtk.ts:9092](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9092)

字体大小。

##### Returns

`number`

#### Set Signature

> **set** **fontSize**(`v`): `void`

Defined in: [awtk.ts:9096](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9096)

##### Parameters

###### v

`number`

##### Returns

`void`

***

### globalAlpha

#### Get Signature

> **get** **globalAlpha**(): `number`

Defined in: [awtk.ts:9024](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9024)

全局alpha。

##### Returns

`number`

#### Set Signature

> **set** **globalAlpha**(`v`): `void`

Defined in: [awtk.ts:9028](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9028)

##### Parameters

###### v

`number`

##### Returns

`void`

***

### h

#### Get Signature

> **get** **h**(): `number`

Defined in: [awtk.ts:8975](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8975)

canvas的高度

##### Returns

`number`

***

### lineCap

#### Get Signature

> **get** **lineCap**(): `string`

Defined in: [awtk.ts:9052](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9052)

line\_cap。

##### See

http://www.w3school.com.cn/tags/canvas_linecap.asp

##### Returns

`string`

#### Set Signature

> **set** **lineCap**(`v`): `void`

Defined in: [awtk.ts:9056](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9056)

##### Parameters

###### v

`string`

##### Returns

`void`

***

### lineJoin

#### Get Signature

> **get** **lineJoin**(): `string`

Defined in: [awtk.ts:9066](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9066)

line\_join。

##### See

http://www.w3school.com.cn/tags/canvas_linejoin.asp

##### Returns

`string`

#### Set Signature

> **set** **lineJoin**(`v`): `void`

Defined in: [awtk.ts:9070](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9070)

##### Parameters

###### v

`string`

##### Returns

`void`

***

### lineWidth

#### Get Signature

> **get** **lineWidth**(): `number`

Defined in: [awtk.ts:9011](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9011)

线宽。

##### Returns

`number`

#### Set Signature

> **set** **lineWidth**(`v`): `void`

Defined in: [awtk.ts:9015](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9015)

##### Parameters

###### v

`number`

##### Returns

`void`

***

### miterLimit

#### Get Signature

> **get** **miterLimit**(): `number`

Defined in: [awtk.ts:9038](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9038)

miter\_limit。

##### See

http://www.w3school.com.cn/tags/canvas_miterlimit.asp

##### Returns

`number`

#### Set Signature

> **set** **miterLimit**(`v`): `void`

Defined in: [awtk.ts:9042](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9042)

##### Parameters

###### v

`number`

##### Returns

`void`

***

### ratio

#### Get Signature

> **get** **ratio**(): `number`

Defined in: [awtk.ts:8993](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8993)

显示比例。

##### Returns

`number`

***

### stride

#### Get Signature

> **get** **stride**(): `number`

Defined in: [awtk.ts:8984](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8984)

一行占的字节

##### Returns

`number`

***

### textAlign

#### Get Signature

> **get** **textAlign**(): `string`

Defined in: [awtk.ts:9107](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9107)

文本对齐方式。

##### See

http://www.w3school.com.cn/tags/canvas_textalign.asp

##### Returns

`string`

#### Set Signature

> **set** **textAlign**(`v`): `void`

Defined in: [awtk.ts:9111](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9111)

##### Parameters

###### v

`string`

##### Returns

`void`

***

### textBaseline

#### Get Signature

> **get** **textBaseline**(): `string`

Defined in: [awtk.ts:9122](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9122)

文本基线。

##### See

http://www.w3school.com.cn/tags/canvas_textbaseline.asp

##### Returns

`string`

#### Set Signature

> **set** **textBaseline**(`v`): `void`

Defined in: [awtk.ts:9126](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L9126)

##### Parameters

###### v

`string`

##### Returns

`void`

***

### w

#### Get Signature

> **get** **w**(): `number`

Defined in: [awtk.ts:8966](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8966)

canvas的宽度

##### Returns

`number`

## Methods

### arc()

> **arc**(`x`, `y`, `r`, `start_angle`, `end_angle`, `ccw`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8399](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8399)

生成一条圆弧。

#### Parameters

##### x

`number`

原点x坐标。

##### y

`number`

原点y坐标。

##### r

`number`

半径。

##### start\_angle

`number`

起始角度（单位：弧度）。

##### end\_angle

`number`

结束角度（单位：弧度）。

##### ccw

`boolean`

是否逆时针。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### arcTo()

> **arcTo**(`x1`, `y1`, `x2`, `y2`, `r`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8382](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8382)

生成一条圆弧路径到指定点。

#### Parameters

##### x1

`number`

起始点x坐标。

##### y1

`number`

起始点y坐标。

##### x2

`number`

结束点x坐标。

##### y2

`number`

结束点y坐标。

##### r

`number`

半径。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### beginPath()

> **beginPath**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8308](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8308)

清除之前的路径，并重新开始一条路径。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### bezierTo()

> **bezierTo**(`cp1x`, `cp1y`, `cp2x`, `cp2y`, `x`, `y`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8366](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8366)

生成一条三次贝塞尔曲线。

#### Parameters

##### cp1x

`number`

控制点1x坐标。

##### cp1y

`number`

控制点1y坐标。

##### cp2x

`number`

控制点2x坐标。

##### cp2y

`number`

控制点2y坐标。

##### x

`number`

x坐标。

##### y

`number`

y坐标。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### clipPath()

> **clipPath**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8567](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8567)

使用当前的path裁剪。
>目前只有部分backend支持(如cairo)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### clipRect()

> **clipRect**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8594](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8594)

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

##### x

`number`

x坐标。

##### y

`number`

y坐标。

##### w

`number`

宽度。

##### h

`number`

高度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### closePath()

> **closePath**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8471](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8471)

闭合路径。

>闭合路径是指把起点和终点连接起来，形成一个封闭的多边形。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### drawIcon()

> **drawIcon**(`img`, `sx`, `sy`, `sw`, `sh`, `dx`, `dy`, `dw`, `dh`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8835](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8835)

绘制图标。

绘制图标时会根据屏幕密度进行自动缩放，而绘制普通图片时不会。

#### Parameters

##### img

[`TBitmap`](TBitmap.md)

图片。

##### sx

`number`

原图区域的 x

##### sy

`number`

原图区域的 y

##### sw

`number`

原图区域的 w

##### sh

`number`

原图区域的 h

##### dx

`number`

绘制区域的 x

##### dy

`number`

绘制区域的 y

##### dw

`number`

绘制区域的 w

##### dh

`number`

绘制区域的 h

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### drawImage()

> **drawImage**(`img`, `sx`, `sy`, `sw`, `sh`, `dx`, `dy`, `dw`, `dh`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8787](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8787)

绘制图片。

#### Parameters

##### img

[`TBitmap`](TBitmap.md)

图片。

##### sx

`number`

原图区域的 x

##### sy

`number`

原图区域的 y

##### sw

`number`

原图区域的 w

##### sh

`number`

原图区域的 h

##### dx

`number`

绘制区域的 x

##### dy

`number`

绘制区域的 y

##### dw

`number`

绘制区域的 w

##### dh

`number`

绘制区域的 h

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### drawImageRepeat()

> **drawImageRepeat**(`img`, `sx`, `sy`, `sw`, `sh`, `dx`, `dy`, `dw`, `dh`, `dst_w`, `dst_h`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8813](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8813)

绘制图片。

备注：
当绘制区域大于原图区域时，多余的绘制区域会重复绘制原图区域的东西。（绘制图区按照绘制图片的宽高来绘制的）
当绘制图片的宽高和原图的不同，在重复绘制的同时加入缩放。

#### Parameters

##### img

[`TBitmap`](TBitmap.md)

图片。

##### sx

`number`

原图区域的 x

##### sy

`number`

原图区域的 y

##### sw

`number`

原图区域的 w

##### sh

`number`

原图区域的 h

##### dx

`number`

绘制区域的 x

##### dy

`number`

绘制区域的 y

##### dw

`number`

绘制区域的 w

##### dh

`number`

绘制区域的 h

##### dst\_w

`number`

绘制图片的宽

##### dst\_h

`number`

绘制图片的高

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### ellipse()

> **ellipse**(`x`, `y`, `rx`, `ry`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8458](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8458)

生成一个椭圆路径。

#### Parameters

##### x

`number`

x坐标。

##### y

`number`

y坐标。

##### rx

`number`

圆角半径。

##### ry

`number`

圆角半径。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### fill()

> **fill**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8650](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8650)

填充多边形。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### fillText()

> **fillText**(`text`, `x`, `y`, `max_width`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8738](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8738)

绘制文本。

#### Parameters

##### text

`string`

text

##### x

`number`

x坐标。

##### y

`number`

y坐标。

##### max\_width

`number`

最大宽度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### fillTextByGlyphs()

> **fillTextByGlyphs**(`glyphs`, `start`, `len`, `x`, `y`, `max_width`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8755](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8755)

绘制文本。

#### Parameters

##### glyphs

`any`

字模列表对象。

##### start

`number`

字模开始序号。

##### len

`number`

字模长度。

##### x

`number`

x坐标。

##### y

`number`

y坐标。

##### max\_width

`number`

最大宽度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### flush()

> **flush**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8297](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8297)

flush

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### intersectClipRect()

> **intersectClipRect**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8639](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8639)

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

##### x

`number`

x坐标。

##### y

`number`

y坐标。

##### w

`number`

宽度。

##### h

`number`

高度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### isPointInPath()

> **isPointInPath**(`x`, `y`): `boolean`

Defined in: [awtk.ts:8412](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8412)

检查点是否在当前路径中。

#### Parameters

##### x

`number`

x坐标。

##### y

`number`

y坐标。

#### Returns

`boolean`

返回TRUE表示在，否则表示不在。

***

### isRectfInClipRect()

> **isRectfInClipRect**(`left`, `top`, `right`, `bottom`): `boolean`

Defined in: [awtk.ts:8609](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8609)

矩形区域是否在矩形裁剪中。

#### Parameters

##### left

`number`

矩形区域左边。

##### top

`number`

矩形区域上边。

##### right

`number`

矩形区域右边。

##### bottom

`number`

矩形区域下边。

#### Returns

`boolean`

返回 TURE 则在区域中，返回 FALSE 则不在区域中。

***

### lineTo()

> **lineTo**(`x`, `y`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8334](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8334)

生成一条线段(从当前点到目标点)。

#### Parameters

##### x

`number`

x坐标。

##### y

`number`

y坐标。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### measureText()

> **measureText**(`text`): `number`

Defined in: [awtk.ts:8767](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8767)

测量文本的宽度。

#### Parameters

##### text

`string`

text

#### Returns

`number`

返回text的宽度。

***

### moveTo()

> **moveTo**(`x`, `y`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8321](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8321)

移动当前点到指定点。

#### Parameters

##### x

`number`

x坐标。

##### y

`number`

y坐标。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### paint()

> **paint**(`stroke`, `img`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8675](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8675)

用图片填充/画多边形(可能存在可移植性问题，除非必要请勿使用)。
多边形的顶点必须在图片范围内，可以通过矩阵变化画到不同的位置。

#### Parameters

##### stroke

`boolean`

TRUE表示画线FALSE表示填充。

##### img

[`TBitmap`](TBitmap.md)

图片。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### quadTo()

> **quadTo**(`cpx`, `cpy`, `x`, `y`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8349](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8349)

生成一条二次贝塞尔曲线。

#### Parameters

##### cpx

`number`

控制点x坐标。

##### cpy

`number`

控制点y坐标。

##### x

`number`

x坐标。

##### y

`number`

y坐标。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### rect()

> **rect**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8427](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8427)

生成一个矩形路径。

#### Parameters

##### x

`number`

x坐标。

##### y

`number`

y坐标。

##### w

`number`

宽度。

##### h

`number`

高度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### restore()

> **restore**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8957](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8957)

恢复上次save的状态。

> save/restore必须配套使用，否则可能导致状态混乱。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### rotate()

> **rotate**(`rad`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8495](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8495)

旋转。

#### Parameters

##### rad

`number`

旋转角度(单位：弧度)

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### roundedRect()

> **roundedRect**(`x`, `y`, `w`, `h`, `r`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8443](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8443)

生成一个圆角矩形路径。

#### Parameters

##### x

`number`

x坐标。

##### y

`number`

y坐标。

##### w

`number`

宽度。

##### h

`number`

高度。

##### r

`number`

圆角半径。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### save()

> **save**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8944](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8944)

保存当前的状态。如颜色和矩阵等信息。

> save/restore必须配套使用，否则可能导致状态混乱。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### scale()

> **scale**(`x`, `y`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8508](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8508)

缩放。

#### Parameters

##### x

`number`

x方向缩放比例。

##### y

`number`

y方向缩放比例。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setAntialias()

> **setAntialias**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8847](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8847)

设置是否启用反走样。

#### Parameters

##### value

`any`

是否启用反走样。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setFillColor()

> **setFillColor**(`color`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8883](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8883)

设置填充颜色。

#### Parameters

##### color

`string`

颜色。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setFillMode()

> **setFillMode**(`fill_mode`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8483](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8483)

设置填充规则。

#### Parameters

##### fill\_mode

[`TVgcanvasFillMode`](../enumerations/TVgcanvasFillMode.md)

填充规则。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setFont()

> **setFont**(`font`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8687](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8687)

设置字体的名称。

#### Parameters

##### font

`string`

字体名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setFontSize()

> **setFontSize**(`size`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8699](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8699)

设置字体的大小。

#### Parameters

##### size

`number`

字体大小。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setGlobalAlpha()

> **setGlobalAlpha**(`alpha`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8859](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8859)

设置全局透明度。

#### Parameters

##### alpha

`number`

global alpha。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setLineCap()

> **setLineCap**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8907](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8907)

设置line cap。

#### Parameters

##### value

`string`

取值：butt|round|square，必须为常量字符串。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setLineJoin()

> **setLineJoin**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8919](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8919)

设置line join。

#### Parameters

##### value

`string`

取值：bevel|round|miter，必须为常量字符串。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setLineWidth()

> **setLineWidth**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8871](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8871)

设置线条的宽度。

#### Parameters

##### value

`any`

线宽。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setMiterLimit()

> **setMiterLimit**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8931](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8931)

设置miter limit。

#### Parameters

##### value

`any`

miter limit

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setStrokeColor()

> **setStrokeColor**(`str`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8895](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8895)

设置线条颜色。

#### Parameters

##### str

`string`

颜色。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setTextAlign()

> **setTextAlign**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8711](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8711)

设置文本水平对齐的方式。

#### Parameters

##### value

`string`

取值：left|center|right，必须为常量字符串。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setTextBaseline()

> **setTextBaseline**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8723](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8723)

设置文本垂直对齐的方式。

#### Parameters

##### value

`string`

取值：top|middle|bottom，必须为常量字符串。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setTransform()

> **setTransform**(`a`, `b`, `c`, `d`, `e`, `f`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8555](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8555)

设置变换矩阵。

#### Parameters

##### a

`number`

a

##### b

`number`

b

##### c

`number`

c

##### d

`number`

d

##### e

`number`

e

##### f

`number`

f

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### stroke()

> **stroke**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8661](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8661)

画线。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### transform()

> **transform**(`a`, `b`, `c`, `d`, `e`, `f`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8538](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8538)

变换矩阵。

#### Parameters

##### a

`number`

a

##### b

`number`

b

##### c

`number`

c

##### d

`number`

d

##### e

`number`

e

##### f

`number`

f

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### translate()

> **translate**(`x`, `y`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:8521](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8521)

平移。

#### Parameters

##### x

`number`

x方向偏移。

##### y

`number`

y方向偏移。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### cast()

> `static` **cast**(`vg`): `TVgcanvas`

Defined in: [awtk.ts:8286](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8286)

转换为vgcanvas对象(供脚本语言使用)。

#### Parameters

##### vg

`TVgcanvas`

vgcanvas对象。

#### Returns

`TVgcanvas`

vgcanvas对象。
