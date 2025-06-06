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

[awtk.ts:8078](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L8078)

***

### GPU\_FBO\_TEXTURE

> **GPU\_FBO\_TEXTURE**: `number`

该位图为 GPU 的 fbo 数据。

#### Defined in

[awtk.ts:8096](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L8096)

***

### IMMUTABLE

> **IMMUTABLE**: `number`

图片内容不会变化。

#### Defined in

[awtk.ts:8066](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L8066)

***

### LCD\_ORIENTATION

> **LCD\_ORIENTATION**: `number`

位图数据已经处理了 lcd 旋转，同时说明 bitmap 的宽高和真实数据的宽高可能不一致

#### Defined in

[awtk.ts:8090](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L8090)

***

### NONE

> **NONE**: `number`

无特殊标志。

#### Defined in

[awtk.ts:8054](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L8054)

***

### OPAQUE

> **OPAQUE**: `number`

不透明图片。

#### Defined in

[awtk.ts:8060](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L8060)

***

### PREMULTI\_ALPHA

> **PREMULTI\_ALPHA**: `number`

预乘alpha。

#### Defined in

[awtk.ts:8084](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L8084)

***

### TEXTURE

> **TEXTURE**: `number`

OpenGL Texture, bitmap的id是有效的texture id。

#### Defined in

[awtk.ts:8072](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L8072)
