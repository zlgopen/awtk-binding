[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TRect

# Class: TRect

矩形。包括一个x坐标、y坐标、宽度和高度。

## Constructors

### new TRect()

> **new TRect**(`nativeObj`): [`TRect`](TRect.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TRect`](TRect.md)

#### Defined in

[awtk.ts:2583](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L2583)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:2582](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L2582)

## Accessors

### h

> `get` **h**(): `number`

高度。

#### Returns

`number`

#### Defined in

[awtk.ts:2680](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L2680)

***

### w

> `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Defined in

[awtk.ts:2671](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L2671)

***

### x

> `get` **x**(): `number`

x坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:2653](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L2653)

***

### y

> `get` **y**(): `number`

y坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:2662](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L2662)

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁rect对象。

> 主要供脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2644](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L2644)

***

### set()

> **set**(`x`, `y`, `w`, `h`): [`TRect`](TRect.md)

设置rect对象的xywh。

> 主要供脚本语言使用。

#### Parameters

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

• **w**: `number`

宽度。

• **h**: `number`

高度。

#### Returns

[`TRect`](TRect.md)

rect对象。

#### Defined in

[awtk.ts:2617](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L2617)

***

### cast()

> `static` **cast**(`rect`): [`TRect`](TRect.md)

转换为rect对象。

> 供脚本语言使用。

#### Parameters

• **rect**: [`TRect`](TRect.md)

rect对象。

#### Returns

[`TRect`](TRect.md)

rect对象。

#### Defined in

[awtk.ts:2631](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L2631)

***

### create()

> `static` **create**(`x`, `y`, `w`, `h`): [`TRect`](TRect.md)

创建rect对象。

> 主要供脚本语言使用。

#### Parameters

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

• **w**: `number`

宽度。

• **h**: `number`

高度。

#### Returns

[`TRect`](TRect.md)

rect对象。

#### Defined in

[awtk.ts:2600](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L2600)
