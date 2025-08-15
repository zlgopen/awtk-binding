[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TCanvas

# Class: TCanvas

提供基本的绘图功能和状态管理。

## Constructors

### new TCanvas()

> **new TCanvas**(`nativeObj`): [`TCanvas`](TCanvas.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TCanvas`](TCanvas.md)

#### Defined in

[awtk.ts:4511](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4511)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:4510](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4510)

## Accessors

### fontName

> `get` **fontName**(): `string`

当前字体名称。

#### Returns

`string`

#### Defined in

[awtk.ts:4924](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4924)

***

### fontSize

> `get` **fontSize**(): `number`

当前字体大小。

#### Returns

`number`

#### Defined in

[awtk.ts:4933](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4933)

***

### globalAlpha

> `get` **globalAlpha**(): `number`

当前全局alpha。

> `set` **globalAlpha**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Defined in

[awtk.ts:4942](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4942)

***

### ox

> `get` **ox**(): `number`

x坐标偏移。

#### Returns

`number`

#### Defined in

[awtk.ts:4906](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4906)

***

### oy

> `get` **oy**(): `number`

y坐标偏移。

#### Returns

`number`

#### Defined in

[awtk.ts:4915](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4915)

## Methods

### clearRect()

> **clearRect**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

用填充颜色填充指定矩形。

> 如果lcd的颜色格式带alpha通道，连同alpha的值一起修改。

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

[awtk.ts:4710](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4710)

***

### drawHline()

> **drawHline**(`x`, `y`, `w`): [`TRet`](../enumerations/TRet.md)

画水平线。

#### Parameters

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

• **w**: `number`

宽度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4678](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4678)

***

### drawIcon()

> **drawIcon**(`img`, `cx`, `cy`): [`TRet`](../enumerations/TRet.md)

绘制图标。

#### Parameters

• **img**: [`TBitmap`](TBitmap.md)

图片对象。

• **cx**: `number`

中心点x坐标。

• **cy**: `number`

中心点y坐标。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4808](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4808)

***

### drawImage()

> **drawImage**(`img`, `src`, `dst`): [`TRet`](../enumerations/TRet.md)

绘制图片。

#### Parameters

• **img**: [`TBitmap`](TBitmap.md)

图片对象。

• **src**: [`TRect`](TRect.md)

源区域。

• **dst**: [`TRect`](TRect.md)

目的区域。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4822](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4822)

***

### drawImageEx()

> **drawImageEx**(`img`, `draw_type`, `dst`): [`TRet`](../enumerations/TRet.md)

绘制图片。

#### Parameters

• **img**: [`TBitmap`](TBitmap.md)

图片对象。

• **draw\_type**: [`TImageDrawType`](../enumerations/TImageDrawType.md)

绘制类型。

• **dst**: [`TRect`](TRect.md)

目的区域。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4836](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4836)

***

### drawImageEx2()

> **drawImageEx2**(`img`, `draw_type`, `src`, `dst`): [`TRet`](../enumerations/TRet.md)

绘制图片。

#### Parameters

• **img**: [`TBitmap`](TBitmap.md)

图片对象。

• **draw\_type**: [`TImageDrawType`](../enumerations/TImageDrawType.md)

绘制类型。

• **src**: [`TRect`](TRect.md)

源区域。

• **dst**: [`TRect`](TRect.md)

目的区域。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4851](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4851)

***

### drawText()

> **drawText**(`str`, `x`, `y`): [`TRet`](../enumerations/TRet.md)

绘制文本。

> 供脚本语言使用。

#### Parameters

• **str**: `string`

字符串。

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4779](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4779)

***

### drawTextInRect()

> **drawTextInRect**(`str`, `r`): [`TRet`](../enumerations/TRet.md)

绘制文本。

> 供脚本语言使用。

#### Parameters

• **str**: `string`

字符串。

• **r**: [`TRect`](TRect.md)

矩形区域。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4794](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4794)

***

### drawVline()

> **drawVline**(`x`, `y`, `h`): [`TRet`](../enumerations/TRet.md)

画垂直线。

#### Parameters

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

• **h**: `number`

高度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4664](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4664)

***

### fillRect()

> **fillRect**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

绘制矩形。

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

[awtk.ts:4693](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4693)

***

### getClipRect()

> **getClipRect**(`r`): [`TRet`](../enumerations/TRet.md)

获取裁剪区。

#### Parameters

• **r**: [`TRect`](TRect.md)

rect对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4545](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4545)

***

### getHeight()

> **getHeight**(): `number`

获取画布的高度。

#### Returns

`number`

返回画布的高度。

#### Defined in

[awtk.ts:4533](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4533)

***

### getVgcanvas()

> **getVgcanvas**(): [`TVgcanvas`](TVgcanvas.md)

获取vgcanvas对象。

#### Returns

[`TVgcanvas`](TVgcanvas.md)

返回vgcanvas对象。

#### Defined in

[awtk.ts:4862](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4862)

***

### getWidth()

> **getWidth**(): `number`

获取画布的宽度。

#### Returns

`number`

返回画布的宽度。

#### Defined in

[awtk.ts:4522](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4522)

***

### measureText()

> **measureText**(`str`): `number`

计算文本所占的宽度。

> 供脚本语言使用。

#### Parameters

• **str**: `string`

字符串。

#### Returns

`number`

返回文本所占的宽度。

#### Defined in

[awtk.ts:4763](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4763)

***

### reset()

> **reset**(): [`TRet`](../enumerations/TRet.md)

释放相关资源。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4885](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4885)

***

### resetCache()

> **resetCache**(): [`TRet`](../enumerations/TRet.md)

清除canvas中缓存。
> 备注：主要用于窗口动画的离线画布绘制完成后重置在线画布，使下一帧中lcd对象的数据保持一致。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4897](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4897)

***

### resetFont()

> **resetFont**(): [`TRet`](../enumerations/TRet.md)

释放canvas中字体相关的资源。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4749](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4749)

***

### setClipRect()

> **setClipRect**(`r`): [`TRet`](../enumerations/TRet.md)

设置裁剪区。

#### Parameters

• **r**: [`TRect`](TRect.md)

rect对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4557](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4557)

***

### setClipRectEx()

> **setClipRectEx**(`r`, `translate`): [`TRet`](../enumerations/TRet.md)

设置裁剪区。

#### Parameters

• **r**: [`TRect`](TRect.md)

rect对象。

• **translate**: `boolean`

是否将裁剪区的位置加上canvas当前的偏移。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4570](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4570)

***

### setFillColor()

> **setFillColor**(`color`): [`TRet`](../enumerations/TRet.md)

设置填充颜色。

> 供脚本语言使用。

#### Parameters

• **color**: `string`

颜色。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4584](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4584)

***

### setFont()

> **setFont**(`name`, `size`): [`TRet`](../enumerations/TRet.md)

设置字体。

#### Parameters

• **name**: `string`

字体名称。

• **size**: `number`

字体大小。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4738](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4738)

***

### setGlobalAlpha()

> **setGlobalAlpha**(`alpha`): [`TRet`](../enumerations/TRet.md)

设置全局alpha值。

#### Parameters

• **alpha**: `number`

alpha值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4624](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4624)

***

### setStrokeColor()

> **setStrokeColor**(`color`): [`TRet`](../enumerations/TRet.md)

设置线条颜色。

> 供脚本语言使用。

#### Parameters

• **color**: `string`

颜色。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4612](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4612)

***

### setTextColor()

> **setTextColor**(`color`): [`TRet`](../enumerations/TRet.md)

设置文本颜色。

> 供脚本语言使用。

#### Parameters

• **color**: `string`

颜色。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4598](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4598)

***

### strokeRect()

> **strokeRect**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

绘制矩形。

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

[awtk.ts:4725](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4725)

***

### translate()

> **translate**(`dx`, `dy`): [`TRet`](../enumerations/TRet.md)

平移原点坐标。

#### Parameters

• **dx**: `number`

x偏移。

• **dy**: `number`

y偏移。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4637](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4637)

***

### untranslate()

> **untranslate**(`dx`, `dy`): [`TRet`](../enumerations/TRet.md)

反向平移原点坐标。

#### Parameters

• **dx**: `number`

x偏移。

• **dy**: `number`

y偏移。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4650](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4650)

***

### cast()

> `static` **cast**(`c`): [`TCanvas`](TCanvas.md)

转换为canvas对象(供脚本语言使用)。

#### Parameters

• **c**: [`TCanvas`](TCanvas.md)

canvas对象。

#### Returns

[`TCanvas`](TCanvas.md)

canvas对象。

#### Defined in

[awtk.ts:4874](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4874)
