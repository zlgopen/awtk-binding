[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TBitmap

# Class: TBitmap

位图。

## Constructors

### new TBitmap()

> **new TBitmap**(`nativeObj`): [`TBitmap`](TBitmap.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TBitmap`](TBitmap.md)

#### Defined in

[awtk.ts:2746](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2746)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:2745](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2745)

## Accessors

### flags

> `get` **flags**(): `number`

标志。请参考{bitmap_flag_t}。

#### Returns

`number`

#### Defined in

[awtk.ts:2842](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2842)

***

### format

> `get` **format**(): `number`

格式。请参考{bitmap_format_t}。

#### Returns

`number`

#### Defined in

[awtk.ts:2851](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2851)

***

### h

> `get` **h**(): `number`

高度。

#### Returns

`number`

#### Defined in

[awtk.ts:2824](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2824)

***

### lineLength

> `get` **lineLength**(): `number`

每一行实际占用的内存(也称为stride或pitch)，一般情况下为w*bpp。

#### Returns

`number`

#### Defined in

[awtk.ts:2833](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2833)

***

### name

> `get` **name**(): `string`

名称。

#### Returns

`string`

#### Defined in

[awtk.ts:2860](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2860)

***

### w

> `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Defined in

[awtk.ts:2815](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2815)

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁图片(for script only)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2794](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2794)

***

### getBpp()

> **getBpp**(): `number`

获取图片一个像素占用的字节数。

#### Returns

`number`

返回一个像素占用的字节数。

#### Defined in

[awtk.ts:2783](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2783)

***

### create()

> `static` **create**(): [`TBitmap`](TBitmap.md)

创建图片对象(一般供脚本语言中使用)。

#### Returns

[`TBitmap`](TBitmap.md)

返回bitmap对象。

#### Defined in

[awtk.ts:2757](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2757)

***

### createEx()

> `static` **createEx**(`w`, `h`, `line_length`, `format`): [`TBitmap`](TBitmap.md)

创建图片对象。

#### Parameters

• **w**: `number`

宽度。

• **h**: `number`

高度。

• **line\_length**: `number`

line_length。

• **format**: [`TBitmapFormat`](../enumerations/TBitmapFormat.md)

格式。

#### Returns

[`TBitmap`](TBitmap.md)

返回bitmap对象。

#### Defined in

[awtk.ts:2772](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2772)

***

### getBppOfFormat()

> `static` **getBppOfFormat**(`format`): `number`

获取位图格式对应的颜色位数。

#### Parameters

• **format**: [`TBitmapFormat`](../enumerations/TBitmapFormat.md)

位图格式。

#### Returns

`number`

成功返回颜色位数，失败返回0。

#### Defined in

[awtk.ts:2806](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2806)
