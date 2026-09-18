[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TBitmap

# Class: TBitmap

Defined in: [awtk.ts:2820](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2820)

位图。

## Constructors

### Constructor

> **new TBitmap**(`nativeObj`): `TBitmap`

Defined in: [awtk.ts:2822](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2822)

#### Parameters

##### nativeObj

`any`

#### Returns

`TBitmap`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:2821](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2821)

## Accessors

### flags

#### Get Signature

> **get** **flags**(): `number`

Defined in: [awtk.ts:2918](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2918)

标志。请参考{bitmap_flag_t}。

##### Returns

`number`

***

### format

#### Get Signature

> **get** **format**(): `number`

Defined in: [awtk.ts:2927](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2927)

格式。请参考{bitmap_format_t}。

##### Returns

`number`

***

### h

#### Get Signature

> **get** **h**(): `number`

Defined in: [awtk.ts:2900](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2900)

高度。

##### Returns

`number`

***

### lineLength

#### Get Signature

> **get** **lineLength**(): `number`

Defined in: [awtk.ts:2909](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2909)

每一行实际占用的内存(也称为stride或pitch)，一般情况下为w*bpp。

##### Returns

`number`

***

### name

#### Get Signature

> **get** **name**(): `string`

Defined in: [awtk.ts:2936](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2936)

名称。

##### Returns

`string`

***

### w

#### Get Signature

> **get** **w**(): `number`

Defined in: [awtk.ts:2891](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2891)

宽度。

##### Returns

`number`

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2870](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2870)

销毁图片(for script only)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### getBpp()

> **getBpp**(): `number`

Defined in: [awtk.ts:2859](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2859)

获取图片一个像素占用的字节数。

#### Returns

`number`

返回一个像素占用的字节数。

***

### create()

> `static` **create**(): `TBitmap`

Defined in: [awtk.ts:2833](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2833)

创建图片对象(一般供脚本语言中使用)。

#### Returns

`TBitmap`

返回bitmap对象。

***

### createEx()

> `static` **createEx**(`w`, `h`, `line_length`, `format`): `TBitmap`

Defined in: [awtk.ts:2848](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2848)

创建图片对象。

#### Parameters

##### w

`number`

宽度。

##### h

`number`

高度。

##### line\_length

`number`

line_length。

##### format

[`TBitmapFormat`](../enumerations/TBitmapFormat.md)

格式。

#### Returns

`TBitmap`

返回bitmap对象。

***

### getBppOfFormat()

> `static` **getBppOfFormat**(`format`): `number`

Defined in: [awtk.ts:2882](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2882)

获取位图格式对应的颜色位数。

#### Parameters

##### format

[`TBitmapFormat`](../enumerations/TBitmapFormat.md)

位图格式。

#### Returns

`number`

成功返回颜色位数，失败返回0。
