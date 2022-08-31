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

[awtk.ts:2536](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2536)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:2535](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2535)

## Accessors

### flags

• `get` **flags**(): `number`

标志。请参考{bitmap_flag_t}。

#### Returns

`number`

#### Defined in

[awtk.ts:2632](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2632)

___

### format

• `get` **format**(): `number`

格式。请参考{bitmap_format_t}。

#### Returns

`number`

#### Defined in

[awtk.ts:2641](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2641)

___

### h

• `get` **h**(): `number`

高度。

#### Returns

`number`

#### Defined in

[awtk.ts:2614](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2614)

___

### lineLength

• `get` **lineLength**(): `number`

每一行实际占用的内存(也称为stride或pitch)，一般情况下为w*bpp。

#### Returns

`number`

#### Defined in

[awtk.ts:2623](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2623)

___

### name

• `get` **name**(): `string`

名称。

#### Returns

`string`

#### Defined in

[awtk.ts:2650](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2650)

___

### w

• `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Defined in

[awtk.ts:2605](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2605)

## Methods

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁图片(for script only)。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2584](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2584)

___

### getBpp

▸ **getBpp**(): `number`

获取图片一个像素占用的字节数。

#### Returns

`number`

返回一个像素占用的字节数。

#### Defined in

[awtk.ts:2573](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2573)

___

### create

▸ `Static` **create**(): [`TBitmap`](TBitmap.md)

创建图片对象(一般供脚本语言中使用)。

#### Returns

[`TBitmap`](TBitmap.md)

返回bitmap对象。

#### Defined in

[awtk.ts:2547](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2547)

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

[awtk.ts:2562](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2562)

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

[awtk.ts:2596](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2596)
