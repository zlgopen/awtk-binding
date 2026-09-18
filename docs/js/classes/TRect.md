[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TRect

# Class: TRect

Defined in: [awtk.ts:2712](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2712)

矩形。包括一个x坐标、y坐标、宽度和高度。

## Constructors

### Constructor

> **new TRect**(`nativeObj`): `TRect`

Defined in: [awtk.ts:2714](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2714)

#### Parameters

##### nativeObj

`any`

#### Returns

`TRect`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:2713](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2713)

## Accessors

### h

#### Get Signature

> **get** **h**(): `number`

Defined in: [awtk.ts:2811](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2811)

高度。

##### Returns

`number`

***

### w

#### Get Signature

> **get** **w**(): `number`

Defined in: [awtk.ts:2802](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2802)

宽度。

##### Returns

`number`

***

### x

#### Get Signature

> **get** **x**(): `number`

Defined in: [awtk.ts:2784](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2784)

x坐标。

##### Returns

`number`

***

### y

#### Get Signature

> **get** **y**(): `number`

Defined in: [awtk.ts:2793](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2793)

y坐标。

##### Returns

`number`

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2775](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2775)

销毁rect对象。

> 主要供脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### set()

> **set**(`x`, `y`, `w`, `h`): `TRect`

Defined in: [awtk.ts:2748](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2748)

设置rect对象的xywh。

> 主要供脚本语言使用。

#### Parameters

##### x

`number`

x坐标。

##### y

`number`

y坐标。

##### w

`number`

宽度。

##### h

`number`

高度。

#### Returns

`TRect`

rect对象。

***

### cast()

> `static` **cast**(`rect`): `TRect`

Defined in: [awtk.ts:2762](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2762)

转换为rect对象。

> 供脚本语言使用。

#### Parameters

##### rect

`TRect`

rect对象。

#### Returns

`TRect`

rect对象。

***

### create()

> `static` **create**(`x`, `y`, `w`, `h`): `TRect`

Defined in: [awtk.ts:2731](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2731)

创建rect对象。

> 主要供脚本语言使用。

#### Parameters

##### x

`number`

x坐标。

##### y

`number`

y坐标。

##### w

`number`

宽度。

##### h

`number`

高度。

#### Returns

`TRect`

rect对象。
