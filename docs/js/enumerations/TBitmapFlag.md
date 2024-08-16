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

[awtk.ts:8000](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L8000)

***

### GPU\_FBO\_TEXTURE

> **GPU\_FBO\_TEXTURE**: `number`

该位图为 GPU 的 fbo 数据。

#### Defined in

[awtk.ts:8018](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L8018)

***

### IMMUTABLE

> **IMMUTABLE**: `number`

图片内容不会变化。

#### Defined in

[awtk.ts:7988](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L7988)

***

### LCD\_ORIENTATION

> **LCD\_ORIENTATION**: `number`

位图数据已经处理了 lcd 旋转，同时说明 bitmap 的宽高和真实数据的宽高可能不一致

#### Defined in

[awtk.ts:8012](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L8012)

***

### NONE

> **NONE**: `number`

无特殊标志。

#### Defined in

[awtk.ts:7976](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L7976)

***

### OPAQUE

> **OPAQUE**: `number`

不透明图片。

#### Defined in

[awtk.ts:7982](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L7982)

***

### PREMULTI\_ALPHA

> **PREMULTI\_ALPHA**: `number`

预乘alpha。

#### Defined in

[awtk.ts:8006](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L8006)

***

### TEXTURE

> **TEXTURE**: `number`

OpenGL Texture, bitmap的id是有效的texture id。

#### Defined in

[awtk.ts:7994](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L7994)
