[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TCanvas

# Class: TCanvas

Defined in: [awtk.ts:4524](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4524)

提供基本的绘图功能和状态管理。

## Constructors

### Constructor

> **new TCanvas**(`nativeObj`): `TCanvas`

Defined in: [awtk.ts:4526](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4526)

#### Parameters

##### nativeObj

`any`

#### Returns

`TCanvas`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:4525](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4525)

## Accessors

### fontName

#### Get Signature

> **get** **fontName**(): `string`

Defined in: [awtk.ts:4939](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4939)

当前字体名称。

##### Returns

`string`

***

### fontSize

#### Get Signature

> **get** **fontSize**(): `number`

Defined in: [awtk.ts:4948](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4948)

当前字体大小。

##### Returns

`number`

***

### globalAlpha

#### Get Signature

> **get** **globalAlpha**(): `number`

Defined in: [awtk.ts:4957](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4957)

当前全局alpha。

##### Returns

`number`

#### Set Signature

> **set** **globalAlpha**(`v`): `void`

Defined in: [awtk.ts:4961](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4961)

##### Parameters

###### v

`number`

##### Returns

`void`

***

### ox

#### Get Signature

> **get** **ox**(): `number`

Defined in: [awtk.ts:4921](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4921)

x坐标偏移。

##### Returns

`number`

***

### oy

#### Get Signature

> **get** **oy**(): `number`

Defined in: [awtk.ts:4930](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4930)

y坐标偏移。

##### Returns

`number`

## Methods

### clearRect()

> **clearRect**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4725](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4725)

用填充颜色填充指定矩形。

> 如果lcd的颜色格式带alpha通道，连同alpha的值一起修改。

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

### drawHline()

> **drawHline**(`x`, `y`, `w`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4693](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4693)

画水平线。

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

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### drawIcon()

> **drawIcon**(`img`, `cx`, `cy`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4823](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4823)

绘制图标。

#### Parameters

##### img

[`TBitmap`](TBitmap.md)

图片对象。

##### cx

`number`

中心点x坐标。

##### cy

`number`

中心点y坐标。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### drawImage()

> **drawImage**(`img`, `src`, `dst`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4837](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4837)

绘制图片。

#### Parameters

##### img

[`TBitmap`](TBitmap.md)

图片对象。

##### src

[`TRect`](TRect.md)

源区域。

##### dst

[`TRect`](TRect.md)

目的区域。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### drawImageEx()

> **drawImageEx**(`img`, `draw_type`, `dst`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4851](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4851)

绘制图片。

#### Parameters

##### img

[`TBitmap`](TBitmap.md)

图片对象。

##### draw\_type

[`TImageDrawType`](../enumerations/TImageDrawType.md)

绘制类型。

##### dst

[`TRect`](TRect.md)

目的区域。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### drawImageEx2()

> **drawImageEx2**(`img`, `draw_type`, `src`, `dst`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4866](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4866)

绘制图片。

#### Parameters

##### img

[`TBitmap`](TBitmap.md)

图片对象。

##### draw\_type

[`TImageDrawType`](../enumerations/TImageDrawType.md)

绘制类型。

##### src

[`TRect`](TRect.md)

源区域。

##### dst

[`TRect`](TRect.md)

目的区域。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### drawText()

> **drawText**(`str`, `x`, `y`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4794](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4794)

绘制文本。

> 供脚本语言使用。

#### Parameters

##### str

`string`

字符串。

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

### drawTextInRect()

> **drawTextInRect**(`str`, `r`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4809](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4809)

绘制文本。

> 供脚本语言使用。

#### Parameters

##### str

`string`

字符串。

##### r

[`TRect`](TRect.md)

矩形区域。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### drawVline()

> **drawVline**(`x`, `y`, `h`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4679](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4679)

画垂直线。

#### Parameters

##### x

`number`

x坐标。

##### y

`number`

y坐标。

##### h

`number`

高度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### fillRect()

> **fillRect**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4708](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4708)

绘制矩形。

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

### getClipRect()

> **getClipRect**(`r`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4560](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4560)

获取裁剪区。

#### Parameters

##### r

[`TRect`](TRect.md)

rect对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### getHeight()

> **getHeight**(): `number`

Defined in: [awtk.ts:4548](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4548)

获取画布的高度。

#### Returns

`number`

返回画布的高度。

***

### getVgcanvas()

> **getVgcanvas**(): [`TVgcanvas`](TVgcanvas.md)

Defined in: [awtk.ts:4877](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4877)

获取vgcanvas对象。

#### Returns

[`TVgcanvas`](TVgcanvas.md)

返回vgcanvas对象。

***

### getWidth()

> **getWidth**(): `number`

Defined in: [awtk.ts:4537](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4537)

获取画布的宽度。

#### Returns

`number`

返回画布的宽度。

***

### measureText()

> **measureText**(`str`): `number`

Defined in: [awtk.ts:4778](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4778)

计算文本所占的宽度。

> 供脚本语言使用。

#### Parameters

##### str

`string`

字符串。

#### Returns

`number`

返回文本所占的宽度。

***

### reset()

> **reset**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4900](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4900)

释放相关资源。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### resetCache()

> **resetCache**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4912](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4912)

清除canvas中缓存。
> 备注：主要用于窗口动画的离线画布绘制完成后重置在线画布，使下一帧中lcd对象的数据保持一致。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### resetFont()

> **resetFont**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4764](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4764)

释放canvas中字体相关的资源。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setClipRect()

> **setClipRect**(`r`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4572](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4572)

设置裁剪区。

#### Parameters

##### r

[`TRect`](TRect.md)

rect对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setClipRectEx()

> **setClipRectEx**(`r`, `translate`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4585](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4585)

设置裁剪区。

#### Parameters

##### r

[`TRect`](TRect.md)

rect对象。

##### translate

`boolean`

是否将裁剪区的位置加上canvas当前的偏移。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setFillColor()

> **setFillColor**(`color`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4599](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4599)

设置填充颜色。

> 供脚本语言使用。

#### Parameters

##### color

`string`

颜色。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setFont()

> **setFont**(`name`, `size`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4753](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4753)

设置字体。

#### Parameters

##### name

`string`

字体名称。

##### size

`number`

字体大小。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setGlobalAlpha()

> **setGlobalAlpha**(`alpha`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4639](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4639)

设置全局alpha值。

#### Parameters

##### alpha

`number`

alpha值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setStrokeColor()

> **setStrokeColor**(`color`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4627](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4627)

设置线条颜色。

> 供脚本语言使用。

#### Parameters

##### color

`string`

颜色。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setTextColor()

> **setTextColor**(`color`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4613](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4613)

设置文本颜色。

> 供脚本语言使用。

#### Parameters

##### color

`string`

颜色。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### strokeRect()

> **strokeRect**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4740](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4740)

绘制矩形。

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

### translate()

> **translate**(`dx`, `dy`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4652](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4652)

平移原点坐标。

#### Parameters

##### dx

`number`

x偏移。

##### dy

`number`

y偏移。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### untranslate()

> **untranslate**(`dx`, `dy`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4665](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4665)

反向平移原点坐标。

#### Parameters

##### dx

`number`

x偏移。

##### dy

`number`

y偏移。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### cast()

> `static` **cast**(`c`): `TCanvas`

Defined in: [awtk.ts:4889](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4889)

转换为canvas对象(供脚本语言使用)。

#### Parameters

##### c

`TCanvas`

canvas对象。

#### Returns

`TCanvas`

canvas对象。
