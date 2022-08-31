[AWTK](../README.md) / [Exports](../modules.md) / TCanvas

# Class: TCanvas

提供基本的绘图功能和状态管理。

## Table of contents

### Constructors

- [constructor](TCanvas.md#constructor)

### Properties

- [nativeObj](TCanvas.md#nativeobj)

### Accessors

- [fontName](TCanvas.md#fontname)
- [fontSize](TCanvas.md#fontsize)
- [globalAlpha](TCanvas.md#globalalpha)
- [ox](TCanvas.md#ox)
- [oy](TCanvas.md#oy)

### Methods

- [clearRect](TCanvas.md#clearrect)
- [drawHline](TCanvas.md#drawhline)
- [drawIcon](TCanvas.md#drawicon)
- [drawImage](TCanvas.md#drawimage)
- [drawImageEx](TCanvas.md#drawimageex)
- [drawImageEx2](TCanvas.md#drawimageex2)
- [drawText](TCanvas.md#drawtext)
- [drawTextInRect](TCanvas.md#drawtextinrect)
- [drawVline](TCanvas.md#drawvline)
- [fillRect](TCanvas.md#fillrect)
- [getClipRect](TCanvas.md#getcliprect)
- [getHeight](TCanvas.md#getheight)
- [getVgcanvas](TCanvas.md#getvgcanvas)
- [getWidth](TCanvas.md#getwidth)
- [measureText](TCanvas.md#measuretext)
- [reset](TCanvas.md#reset)
- [resetCache](TCanvas.md#resetcache)
- [resetFont](TCanvas.md#resetfont)
- [setClipRect](TCanvas.md#setcliprect)
- [setClipRectEx](TCanvas.md#setcliprectex)
- [setFillColor](TCanvas.md#setfillcolor)
- [setFont](TCanvas.md#setfont)
- [setGlobalAlpha](TCanvas.md#setglobalalpha)
- [setStrokeColor](TCanvas.md#setstrokecolor)
- [setTextColor](TCanvas.md#settextcolor)
- [strokeRect](TCanvas.md#strokerect)
- [translate](TCanvas.md#translate)
- [untranslate](TCanvas.md#untranslate)
- [cast](TCanvas.md#cast)

## Constructors

### constructor

• **new TCanvas**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:4228](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4228)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:4227](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4227)

## Accessors

### fontName

• `get` **fontName**(): `string`

当前字体名称。

#### Returns

`string`

#### Defined in

[awtk.ts:4641](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4641)

___

### fontSize

• `get` **fontSize**(): `number`

当前字体大小。

#### Returns

`number`

#### Defined in

[awtk.ts:4650](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4650)

___

### globalAlpha

• `get` **globalAlpha**(): `number`

当前全局alpha。

#### Returns

`number`

#### Defined in

[awtk.ts:4659](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4659)

• `set` **globalAlpha**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:4663](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4663)

___

### ox

• `get` **ox**(): `number`

x坐标偏移。

#### Returns

`number`

#### Defined in

[awtk.ts:4623](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4623)

___

### oy

• `get` **oy**(): `number`

y坐标偏移。

#### Returns

`number`

#### Defined in

[awtk.ts:4632](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4632)

## Methods

### clearRect

▸ **clearRect**(`x`, `y`, `w`, `h`): [`TRet`](../enums/TRet.md)

用填充颜色填充指定矩形。

> 如果lcd的颜色格式带alpha通道，连同alpha的值一起修改。

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

[awtk.ts:4427](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4427)

___

### drawHline

▸ **drawHline**(`x`, `y`, `w`): [`TRet`](../enums/TRet.md)

画水平线。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |
| `w` | `number` | 宽度。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4395](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4395)

___

### drawIcon

▸ **drawIcon**(`img`, `cx`, `cy`): [`TRet`](../enums/TRet.md)

绘制图标。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `img` | [`TBitmap`](TBitmap.md) | 图片对象。 |
| `cx` | `number` | 中心点x坐标。 |
| `cy` | `number` | 中心点y坐标。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4525](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4525)

___

### drawImage

▸ **drawImage**(`img`, `src`, `dst`): [`TRet`](../enums/TRet.md)

绘制图片。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `img` | [`TBitmap`](TBitmap.md) | 图片对象。 |
| `src` | [`TRect`](TRect.md) | 源区域。 |
| `dst` | [`TRect`](TRect.md) | 目的区域。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4539](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4539)

___

### drawImageEx

▸ **drawImageEx**(`img`, `draw_type`, `dst`): [`TRet`](../enums/TRet.md)

绘制图片。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `img` | [`TBitmap`](TBitmap.md) | 图片对象。 |
| `draw_type` | [`TImageDrawType`](../enums/TImageDrawType.md) | 绘制类型。 |
| `dst` | [`TRect`](TRect.md) | 目的区域。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4553](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4553)

___

### drawImageEx2

▸ **drawImageEx2**(`img`, `draw_type`, `src`, `dst`): [`TRet`](../enums/TRet.md)

绘制图片。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `img` | [`TBitmap`](TBitmap.md) | 图片对象。 |
| `draw_type` | [`TImageDrawType`](../enums/TImageDrawType.md) | 绘制类型。 |
| `src` | [`TRect`](TRect.md) | 源区域。 |
| `dst` | [`TRect`](TRect.md) | 目的区域。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4568](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4568)

___

### drawText

▸ **drawText**(`str`, `x`, `y`): [`TRet`](../enums/TRet.md)

绘制文本。

> 供脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `str` | `string` | 字符串。 |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4496](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4496)

___

### drawTextInRect

▸ **drawTextInRect**(`str`, `r`): [`TRet`](../enums/TRet.md)

绘制文本。

> 供脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `str` | `string` | 字符串。 |
| `r` | [`TRect`](TRect.md) | 矩形区域。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4511](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4511)

___

### drawVline

▸ **drawVline**(`x`, `y`, `h`): [`TRet`](../enums/TRet.md)

画垂直线。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |
| `h` | `number` | 高度。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4381](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4381)

___

### fillRect

▸ **fillRect**(`x`, `y`, `w`, `h`): [`TRet`](../enums/TRet.md)

绘制矩形。

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

[awtk.ts:4410](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4410)

___

### getClipRect

▸ **getClipRect**(`r`): [`TRet`](../enums/TRet.md)

获取裁剪区。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `r` | [`TRect`](TRect.md) | rect对象。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4262](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4262)

___

### getHeight

▸ **getHeight**(): `number`

获取画布的高度。

#### Returns

`number`

返回画布的高度。

#### Defined in

[awtk.ts:4250](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4250)

___

### getVgcanvas

▸ **getVgcanvas**(): [`TVgcanvas`](TVgcanvas.md)

获取vgcanvas对象。

#### Returns

[`TVgcanvas`](TVgcanvas.md)

返回vgcanvas对象。

#### Defined in

[awtk.ts:4579](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4579)

___

### getWidth

▸ **getWidth**(): `number`

获取画布的宽度。

#### Returns

`number`

返回画布的宽度。

#### Defined in

[awtk.ts:4239](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4239)

___

### measureText

▸ **measureText**(`str`): `number`

计算文本所占的宽度。

> 供脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `str` | `string` | 字符串。 |

#### Returns

`number`

返回文本所占的宽度。

#### Defined in

[awtk.ts:4480](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4480)

___

### reset

▸ **reset**(): [`TRet`](../enums/TRet.md)

释放相关资源。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4602](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4602)

___

### resetCache

▸ **resetCache**(): [`TRet`](../enums/TRet.md)

清除canvas中缓存。
> 备注：主要用于窗口动画的离线画布绘制完成后重置在线画布，使下一帧中lcd对象的数据保持一致。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4614](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4614)

___

### resetFont

▸ **resetFont**(): [`TRet`](../enums/TRet.md)

释放canvas中字体相关的资源。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4466](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4466)

___

### setClipRect

▸ **setClipRect**(`r`): [`TRet`](../enums/TRet.md)

设置裁剪区。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `r` | [`TRect`](TRect.md) | rect对象。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4274](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4274)

___

### setClipRectEx

▸ **setClipRectEx**(`r`, `translate`): [`TRet`](../enums/TRet.md)

设置裁剪区。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `r` | [`TRect`](TRect.md) | rect对象。 |
| `translate` | `boolean` | 是否将裁剪区的位置加上canvas当前的偏移。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4287](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4287)

___

### setFillColor

▸ **setFillColor**(`color`): [`TRet`](../enums/TRet.md)

设置填充颜色。

> 供脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `color` | `string` | 颜色。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4301](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4301)

___

### setFont

▸ **setFont**(`name`, `size`): [`TRet`](../enums/TRet.md)

设置字体。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 字体名称。 |
| `size` | `number` | 字体大小。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4455](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4455)

___

### setGlobalAlpha

▸ **setGlobalAlpha**(`alpha`): [`TRet`](../enums/TRet.md)

设置全局alpha值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `alpha` | `number` | alpha值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4341](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4341)

___

### setStrokeColor

▸ **setStrokeColor**(`color`): [`TRet`](../enums/TRet.md)

设置线条颜色。

> 供脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `color` | `string` | 颜色。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4329](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4329)

___

### setTextColor

▸ **setTextColor**(`color`): [`TRet`](../enums/TRet.md)

设置文本颜色。

> 供脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `color` | `string` | 颜色。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4315](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4315)

___

### strokeRect

▸ **strokeRect**(`x`, `y`, `w`, `h`): [`TRet`](../enums/TRet.md)

绘制矩形。

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

[awtk.ts:4442](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4442)

___

### translate

▸ **translate**(`dx`, `dy`): [`TRet`](../enums/TRet.md)

平移原点坐标。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `dx` | `number` | x偏移。 |
| `dy` | `number` | y偏移。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4354](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4354)

___

### untranslate

▸ **untranslate**(`dx`, `dy`): [`TRet`](../enums/TRet.md)

反向平移原点坐标。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `dx` | `number` | x偏移。 |
| `dy` | `number` | y偏移。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4367](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4367)

___

### cast

▸ `Static` **cast**(`c`): [`TCanvas`](TCanvas.md)

转换为canvas对象(供脚本语言使用)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `c` | [`TCanvas`](TCanvas.md) | canvas对象。 |

#### Returns

[`TCanvas`](TCanvas.md)

canvas对象。

#### Defined in

[awtk.ts:4591](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4591)
