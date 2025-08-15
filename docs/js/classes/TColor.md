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

[awtk.ts:13433](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13433)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:13432](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13432)

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

[awtk.ts:13564](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13564)

## Methods

### a()

> **a**(): `number`

获取alpha通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回alpha通道的值。

#### Defined in

[awtk.ts:13516](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13516)

***

### b()

> **b**(): `number`

获取蓝色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回蓝色通道的值。

#### Defined in

[awtk.ts:13503](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13503)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁color对象。
> 主要供脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13555](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13555)

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

[awtk.ts:13464](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13464)

***

### g()

> **g**(): `number`

获取绿色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回绿色通道的值。

#### Defined in

[awtk.ts:13490](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13490)

***

### getColor()

> **getColor**(): `number`

获取颜色值。

> 主要供脚本语言使用。

#### Returns

`number`

返回颜色值。

#### Defined in

[awtk.ts:13529](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13529)

***

### r()

> **r**(): `number`

获取红色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回红色通道的值。

#### Defined in

[awtk.ts:13477](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13477)

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

[awtk.ts:13543](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13543)

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

[awtk.ts:13450](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13450)
