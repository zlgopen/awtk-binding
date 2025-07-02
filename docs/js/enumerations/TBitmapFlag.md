[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TBitmapFlag

# Enumeration: TBitmapFlag

位图标志常量定义。

## Enumeration Members

### CHANGED

> **CHANGED**: `number`

如果是MUTABLE的图片，更新时需要设置此标志，底层可能会做特殊处理，比如更新图片到GPU。

#### Defined in

[awtk.ts:8086](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L8086)

***

### GPU\_FBO\_TEXTURE

> **GPU\_FBO\_TEXTURE**: `number`

该位图为 GPU 的 fbo 数据。

#### Defined in

[awtk.ts:8104](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L8104)

***

### IMMUTABLE

> **IMMUTABLE**: `number`

图片内容不会变化。

#### Defined in

[awtk.ts:8074](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L8074)

***

### LCD\_ORIENTATION

> **LCD\_ORIENTATION**: `number`

位图数据已经处理了 lcd 旋转，同时说明 bitmap 的宽高和真实数据的宽高可能不一致

#### Defined in

[awtk.ts:8098](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L8098)

***

### NONE

> **NONE**: `number`

无特殊标志。

#### Defined in

[awtk.ts:8062](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L8062)

***

### OPAQUE

> **OPAQUE**: `number`

不透明图片。

#### Defined in

[awtk.ts:8068](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L8068)

***

### PREMULTI\_ALPHA

> **PREMULTI\_ALPHA**: `number`

预乘alpha。

#### Defined in

[awtk.ts:8092](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L8092)

***

### TEXTURE

> **TEXTURE**: `number`

OpenGL Texture, bitmap的id是有效的texture id。

#### Defined in

[awtk.ts:8080](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L8080)
