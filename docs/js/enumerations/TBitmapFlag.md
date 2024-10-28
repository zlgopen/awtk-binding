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

[awtk.ts:8049](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L8049)

***

### GPU\_FBO\_TEXTURE

> **GPU\_FBO\_TEXTURE**: `number`

该位图为 GPU 的 fbo 数据。

#### Defined in

[awtk.ts:8067](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L8067)

***

### IMMUTABLE

> **IMMUTABLE**: `number`

图片内容不会变化。

#### Defined in

[awtk.ts:8037](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L8037)

***

### LCD\_ORIENTATION

> **LCD\_ORIENTATION**: `number`

位图数据已经处理了 lcd 旋转，同时说明 bitmap 的宽高和真实数据的宽高可能不一致

#### Defined in

[awtk.ts:8061](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L8061)

***

### NONE

> **NONE**: `number`

无特殊标志。

#### Defined in

[awtk.ts:8025](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L8025)

***

### OPAQUE

> **OPAQUE**: `number`

不透明图片。

#### Defined in

[awtk.ts:8031](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L8031)

***

### PREMULTI\_ALPHA

> **PREMULTI\_ALPHA**: `number`

预乘alpha。

#### Defined in

[awtk.ts:8055](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L8055)

***

### TEXTURE

> **TEXTURE**: `number`

OpenGL Texture, bitmap的id是有效的texture id。

#### Defined in

[awtk.ts:8043](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L8043)
