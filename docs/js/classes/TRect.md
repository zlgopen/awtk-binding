[AWTK](../README.md) / [Exports](../modules.md) / TRect

# Class: TRect

矩形。包括一个x坐标、y坐标、宽度和高度。

## Table of contents

### Constructors

- [constructor](TRect.md#constructor)

### Properties

- [nativeObj](TRect.md#nativeobj)

### Accessors

- [h](TRect.md#h)
- [w](TRect.md#w)
- [x](TRect.md#x)
- [y](TRect.md#y)

### Methods

- [destroy](TRect.md#destroy)
- [set](TRect.md#set)
- [cast](TRect.md#cast)
- [create](TRect.md#create)

## Constructors

### constructor

• **new TRect**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:2428](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2428)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:2427](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2427)

## Accessors

### h

• `get` **h**(): `number`

高度。

#### Returns

`number`

#### Defined in

[awtk.ts:2525](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2525)

___

### w

• `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Defined in

[awtk.ts:2516](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2516)

___

### x

• `get` **x**(): `number`

x坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:2498](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2498)

___

### y

• `get` **y**(): `number`

y坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:2507](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2507)

## Methods

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁rect对象。

> 主要供脚本语言使用。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2489](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2489)

___

### set

▸ **set**(`x`, `y`, `w`, `h`): [`TRect`](TRect.md)

设置rect对象的xywh。

> 主要供脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |
| `w` | `number` | 宽度。 |
| `h` | `number` | 高度。 |

#### Returns

[`TRect`](TRect.md)

rect对象。

#### Defined in

[awtk.ts:2462](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2462)

___

### cast

▸ `Static` **cast**(`rect`): [`TRect`](TRect.md)

转换为rect对象。

> 供脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `rect` | [`TRect`](TRect.md) | rect对象。 |

#### Returns

[`TRect`](TRect.md)

rect对象。

#### Defined in

[awtk.ts:2476](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2476)

___

### create

▸ `Static` **create**(`x`, `y`, `w`, `h`): [`TRect`](TRect.md)

创建rect对象。

> 主要供脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标。 |
| `y` | `number` | y坐标。 |
| `w` | `number` | 宽度。 |
| `h` | `number` | 高度。 |

#### Returns

[`TRect`](TRect.md)

rect对象。

#### Defined in

[awtk.ts:2445](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2445)
