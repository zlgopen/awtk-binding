[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TColor

# Class: TColor

颜色。

## Constructors

### new TColor()

> **new TColor**(`nativeObj`): [`TColor`](TColor.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TColor`](TColor.md)

#### Defined in

[awtk.ts:13201](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13201)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:13200](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13200)

## Accessors

### color

> `get` **color**(): `number`

颜色的数值。

> `set` **color**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Defined in

[awtk.ts:13332](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13332)

## Methods

### a()

> **a**(): `number`

获取alpha通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回alpha通道的值。

#### Defined in

[awtk.ts:13284](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13284)

***

### b()

> **b**(): `number`

获取蓝色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回蓝色通道的值。

#### Defined in

[awtk.ts:13271](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13271)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁color对象。
> 主要供脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13323](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13323)

***

### fromStr()

> **fromStr**(`str`): [`TColor`](TColor.md)

创建color对象。

> 主要供脚本语言使用。

#### Parameters

• **str**: `string`

css类似的颜色值。

#### Returns

[`TColor`](TColor.md)

color对象。

#### Defined in

[awtk.ts:13232](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13232)

***

### g()

> **g**(): `number`

获取绿色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回绿色通道的值。

#### Defined in

[awtk.ts:13258](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13258)

***

### getColor()

> **getColor**(): `number`

获取颜色值。

> 主要供脚本语言使用。

#### Returns

`number`

返回颜色值。

#### Defined in

[awtk.ts:13297](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13297)

***

### r()

> **r**(): `number`

获取红色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回红色通道的值。

#### Defined in

[awtk.ts:13245](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13245)

***

### cast()

> `static` **cast**(`color`): [`TColor`](TColor.md)

转换为color对象。

> 供脚本语言使用。

#### Parameters

• **color**: [`TColor`](TColor.md)

color对象。

#### Returns

[`TColor`](TColor.md)

color对象。

#### Defined in

[awtk.ts:13311](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13311)

***

### create()

> `static` **create**(`r`, `g`, `b`, `a`): [`TColor`](TColor.md)

创建color对象。

> 主要供脚本语言使用。

#### Parameters

• **r**: `number`

红色通道。

• **g**: `number`

绿色通道。

• **b**: `number`

蓝色通道。

• **a**: `number`

alpha通道。

#### Returns

[`TColor`](TColor.md)

color对象。

#### Defined in

[awtk.ts:13218](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13218)
