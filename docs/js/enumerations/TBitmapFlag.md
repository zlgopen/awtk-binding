[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TBitmapFlag

# Enumeration: TBitmapFlag

Defined in: [awtk.ts:8172](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8172)

位图标志常量定义。

## Enumeration Members

### CHANGED

> **CHANGED**: `number`

Defined in: [awtk.ts:8202](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8202)

如果是MUTABLE的图片，更新时需要设置此标志，底层可能会做特殊处理，比如更新图片到GPU。

***

### GPU\_FBO\_TEXTURE

> **GPU\_FBO\_TEXTURE**: `number`

Defined in: [awtk.ts:8220](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8220)

该位图为 GPU 的 fbo 数据。

***

### IMMUTABLE

> **IMMUTABLE**: `number`

Defined in: [awtk.ts:8190](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8190)

图片内容不会变化。

***

### LCD\_ORIENTATION

> **LCD\_ORIENTATION**: `number`

Defined in: [awtk.ts:8214](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8214)

位图数据已经处理了 lcd 旋转，同时说明 bitmap 的宽高和真实数据的宽高可能不一致

***

### NONE

> **NONE**: `number`

Defined in: [awtk.ts:8178](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8178)

无特殊标志。

***

### OPAQUE

> **OPAQUE**: `number`

Defined in: [awtk.ts:8184](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8184)

不透明图片。

***

### PREMULTI\_ALPHA

> **PREMULTI\_ALPHA**: `number`

Defined in: [awtk.ts:8208](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8208)

预乘alpha。

***

### TEXTURE

> **TEXTURE**: `number`

Defined in: [awtk.ts:8196](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L8196)

OpenGL Texture, bitmap的id是有效的texture id。
