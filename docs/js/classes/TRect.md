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

[awtk.ts:2638](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2638)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:2637](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2637)

## Accessors

### h

> `get` **h**(): `number`

高度。

#### Returns

`number`

#### Defined in

[awtk.ts:2735](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2735)

***

### w

> `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Defined in

[awtk.ts:2726](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2726)

***

### x

> `get` **x**(): `number`

x坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:2708](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2708)

***

### y

> `get` **y**(): `number`

y坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:2717](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2717)

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁rect对象。

> 主要供脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2699](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2699)

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

[awtk.ts:2672](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2672)

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

[awtk.ts:2686](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2686)

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

[awtk.ts:2655](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L2655)
