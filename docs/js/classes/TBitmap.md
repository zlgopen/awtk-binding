[AWTK](../README.md) / [Exports](../modules.md) / TBitmap

# Class: TBitmap

位图。

## Table of contents

### Constructors

- [constructor](TBitmap.md#constructor)

### Properties

- [nativeObj](TBitmap.md#nativeobj)

### Accessors

- [flags](TBitmap.md#flags)
- [format](TBitmap.md#format)
- [h](TBitmap.md#h)
- [lineLength](TBitmap.md#linelength)
- [name](TBitmap.md#name)
- [w](TBitmap.md#w)

### Methods

- [destroy](TBitmap.md#destroy)
- [getBpp](TBitmap.md#getbpp)
- [create](TBitmap.md#create)
- [createEx](TBitmap.md#createex)
- [getBppOfFormat](TBitmap.md#getbppofformat)

## Constructors

### constructor

• **new TBitmap**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:2591](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2591)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:2590](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2590)

## Accessors

### flags

• `get` **flags**(): `number`

标志。请参考{bitmap_flag_t}。

#### Returns

`number`

#### Defined in

[awtk.ts:2687](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2687)

___

### format

• `get` **format**(): `number`

格式。请参考{bitmap_format_t}。

#### Returns

`number`

#### Defined in

[awtk.ts:2696](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2696)

___

### h

• `get` **h**(): `number`

高度。

#### Returns

`number`

#### Defined in

[awtk.ts:2669](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2669)

___

### lineLength

• `get` **lineLength**(): `number`

每一行实际占用的内存(也称为stride或pitch)，一般情况下为w*bpp。

#### Returns

`number`

#### Defined in

[awtk.ts:2678](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2678)

___

### name

• `get` **name**(): `string`

名称。

#### Returns

`string`

#### Defined in

[awtk.ts:2705](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2705)

___

### w

• `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Defined in

[awtk.ts:2660](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2660)

## Methods

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁图片(for script only)。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2639](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2639)

___

### getBpp

▸ **getBpp**(): `number`

获取图片一个像素占用的字节数。

#### Returns

`number`

返回一个像素占用的字节数。

#### Defined in

[awtk.ts:2628](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2628)

___

### create

▸ `Static` **create**(): [`TBitmap`](TBitmap.md)

创建图片对象(一般供脚本语言中使用)。

#### Returns

[`TBitmap`](TBitmap.md)

返回bitmap对象。

#### Defined in

[awtk.ts:2602](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2602)

___

### createEx

▸ `Static` **createEx**(`w`, `h`, `line_length`, `format`): [`TBitmap`](TBitmap.md)

创建图片对象。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `w` | `number` | 宽度。 |
| `h` | `number` | 高度。 |
| `line_length` | `number` | line_length。 |
| `format` | [`TBitmapFormat`](../enums/TBitmapFormat.md) | 格式。 |

#### Returns

[`TBitmap`](TBitmap.md)

返回bitmap对象。

#### Defined in

[awtk.ts:2617](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2617)

___

### getBppOfFormat

▸ `Static` **getBppOfFormat**(`format`): `number`

获取位图格式对应的颜色位数。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `format` | [`TBitmapFormat`](../enums/TBitmapFormat.md) | 位图格式。 |

#### Returns

`number`

成功返回颜色位数，失败返回0。

#### Defined in

[awtk.ts:2651](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2651)
