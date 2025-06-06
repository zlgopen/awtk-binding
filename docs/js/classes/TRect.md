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

[awtk.ts:2631](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2631)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:2630](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2630)

## Accessors

### h

> `get` **h**(): `number`

高度。

#### Returns

`number`

#### Defined in

[awtk.ts:2728](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2728)

***

### w

> `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Defined in

[awtk.ts:2719](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2719)

***

### x

> `get` **x**(): `number`

x坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:2701](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2701)

***

### y

> `get` **y**(): `number`

y坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:2710](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2710)

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁rect对象。

> 主要供脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2692](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2692)

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

[awtk.ts:2665](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2665)

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

[awtk.ts:2679](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2679)

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

[awtk.ts:2648](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2648)
