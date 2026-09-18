[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TColor

# Class: TColor

Defined in: [awtk.ts:13732](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13732)

颜色。

## Constructors

### Constructor

> **new TColor**(`nativeObj`): `TColor`

Defined in: [awtk.ts:13734](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13734)

#### Parameters

##### nativeObj

`any`

#### Returns

`TColor`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:13733](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13733)

## Accessors

### color

#### Get Signature

> **get** **color**(): `number`

Defined in: [awtk.ts:13865](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13865)

颜色的数值。

##### Returns

`number`

#### Set Signature

> **set** **color**(`v`): `void`

Defined in: [awtk.ts:13869](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13869)

##### Parameters

###### v

`number`

##### Returns

`void`

## Methods

### a()

> **a**(): `number`

Defined in: [awtk.ts:13817](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13817)

获取alpha通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回alpha通道的值。

***

### b()

> **b**(): `number`

Defined in: [awtk.ts:13804](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13804)

获取蓝色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回蓝色通道的值。

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13856](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13856)

销毁color对象。
> 主要供脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### fromStr()

> **fromStr**(`str`): `TColor`

Defined in: [awtk.ts:13765](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13765)

创建color对象。

> 主要供脚本语言使用。

#### Parameters

##### str

`string`

css类似的颜色值。

#### Returns

`TColor`

color对象。

***

### g()

> **g**(): `number`

Defined in: [awtk.ts:13791](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13791)

获取绿色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回绿色通道的值。

***

### getColor()

> **getColor**(): `number`

Defined in: [awtk.ts:13830](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13830)

获取颜色值。

> 主要供脚本语言使用。

#### Returns

`number`

返回颜色值。

***

### r()

> **r**(): `number`

Defined in: [awtk.ts:13778](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13778)

获取红色通道的值。

> 主要供脚本语言使用。

#### Returns

`number`

返回红色通道的值。

***

### cast()

> `static` **cast**(`color`): `TColor`

Defined in: [awtk.ts:13844](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13844)

转换为color对象。

> 供脚本语言使用。

#### Parameters

##### color

`TColor`

color对象。

#### Returns

`TColor`

color对象。

***

### create()

> `static` **create**(`r`, `g`, `b`, `a`): `TColor`

Defined in: [awtk.ts:13751](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13751)

创建color对象。

> 主要供脚本语言使用。

#### Parameters

##### r

`number`

红色通道。

##### g

`number`

绿色通道。

##### b

`number`

蓝色通道。

##### a

`number`

alpha通道。

#### Returns

`TColor`

color对象。
