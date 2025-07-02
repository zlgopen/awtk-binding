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

[awtk.ts:8085](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8085)

***

### GPU\_FBO\_TEXTURE

> **GPU\_FBO\_TEXTURE**: `number`

该位图为 GPU 的 fbo 数据。

#### Defined in

[awtk.ts:8103](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8103)

***

### IMMUTABLE

> **IMMUTABLE**: `number`

图片内容不会变化。

#### Defined in

[awtk.ts:8073](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8073)

***

### LCD\_ORIENTATION

> **LCD\_ORIENTATION**: `number`

位图数据已经处理了 lcd 旋转，同时说明 bitmap 的宽高和真实数据的宽高可能不一致

#### Defined in

[awtk.ts:8097](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8097)

***

### NONE

> **NONE**: `number`

无特殊标志。

#### Defined in

[awtk.ts:8061](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8061)

***

### OPAQUE

> **OPAQUE**: `number`

不透明图片。

#### Defined in

[awtk.ts:8067](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8067)

***

### PREMULTI\_ALPHA

> **PREMULTI\_ALPHA**: `number`

预乘alpha。

#### Defined in

[awtk.ts:8091](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8091)

***

### TEXTURE

> **TEXTURE**: `number`

OpenGL Texture, bitmap的id是有效的texture id。

#### Defined in

[awtk.ts:8079](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L8079)
