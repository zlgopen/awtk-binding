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

[awtk.ts:2649](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2649)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:2648](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2648)

## Accessors

### h

> `get` **h**(): `number`

高度。

#### Returns

`number`

#### Defined in

[awtk.ts:2746](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2746)

***

### w

> `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Defined in

[awtk.ts:2737](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2737)

***

### x

> `get` **x**(): `number`

x坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:2719](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2719)

***

### y

> `get` **y**(): `number`

y坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:2728](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2728)

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁rect对象。

> 主要供脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2710](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2710)

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

[awtk.ts:2683](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2683)

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

[awtk.ts:2697](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2697)

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

[awtk.ts:2666](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L2666)
