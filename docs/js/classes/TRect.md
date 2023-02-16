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

[awtk.ts:2483](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2483)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:2482](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2482)

## Accessors

### h

• `get` **h**(): `number`

高度。

#### Returns

`number`

#### Defined in

[awtk.ts:2580](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2580)

___

### w

• `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Defined in

[awtk.ts:2571](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2571)

___

### x

• `get` **x**(): `number`

x坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:2553](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2553)

___

### y

• `get` **y**(): `number`

y坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:2562](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2562)

## Methods

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁rect对象。

> 主要供脚本语言使用。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2544](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2544)

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

[awtk.ts:2517](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2517)

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

[awtk.ts:2531](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2531)

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

[awtk.ts:2500](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L2500)
