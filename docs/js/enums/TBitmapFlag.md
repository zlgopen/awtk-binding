[AWTK](../README.md) / [Exports](../modules.md) / TBitmapFlag

# Enumeration: TBitmapFlag

位图标志常量定义。

## Table of contents

### Enumeration Members

- [CHANGED](TBitmapFlag.md#changed)
- [GPU\_FBO\_TEXTURE](TBitmapFlag.md#gpu_fbo_texture)
- [IMMUTABLE](TBitmapFlag.md#immutable)
- [LCD\_ORIENTATION](TBitmapFlag.md#lcd_orientation)
- [NONE](TBitmapFlag.md#none)
- [OPAQUE](TBitmapFlag.md#opaque)
- [PREMULTI\_ALPHA](TBitmapFlag.md#premulti_alpha)
- [TEXTURE](TBitmapFlag.md#texture)

## Enumeration Members

### CHANGED

• **CHANGED** = `number`

如果是MUTABLE的图片，更新时需要设置此标志，底层可能会做特殊处理，比如更新图片到GPU。

#### Defined in

[awtk.ts:7694](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L7694)

___

### GPU\_FBO\_TEXTURE

• **GPU\_FBO\_TEXTURE** = `number`

该位图为 GPU 的 fbo 数据。

#### Defined in

[awtk.ts:7712](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L7712)

___

### IMMUTABLE

• **IMMUTABLE** = `number`

图片内容不会变化。

#### Defined in

[awtk.ts:7682](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L7682)

___

### LCD\_ORIENTATION

• **LCD\_ORIENTATION** = `number`

位图数据已经处理了 lcd 旋转，同时说明 bitmap 的宽高和真实数据的宽高可能不一致

#### Defined in

[awtk.ts:7706](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L7706)

___

### NONE

• **NONE** = `number`

无特殊标志。

#### Defined in

[awtk.ts:7670](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L7670)

___

### OPAQUE

• **OPAQUE** = `number`

不透明图片。

#### Defined in

[awtk.ts:7676](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L7676)

___

### PREMULTI\_ALPHA

• **PREMULTI\_ALPHA** = `number`

预乘alpha。

#### Defined in

[awtk.ts:7700](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L7700)

___

### TEXTURE

• **TEXTURE** = `number`

OpenGL Texture, bitmap的id是有效的texture id。

#### Defined in

[awtk.ts:7688](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L7688)
