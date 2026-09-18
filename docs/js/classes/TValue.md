[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TValue

# Class: TValue

Defined in: [awtk.ts:3779](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3779)

一个通用数据类型，用来存放整数、浮点数、字符串和其它对象。

在C/C++中，一般不需动态创建对象，直接声明并初始化即可。如：

> 在脚本语言中，需要动态创建对象。

## Extended by

- [`TNamedValue`](TNamedValue.md)

## Constructors

### Constructor

> **new TValue**(`nativeObj`): `TValue`

Defined in: [awtk.ts:3781](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3781)

#### Parameters

##### nativeObj

`any`

#### Returns

`TValue`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:3780](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3780)

## Methods

### bitmap()

> **bitmap**(): `any`

Defined in: [awtk.ts:4243](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4243)

获取类型为位图对象。

#### Returns

`any`

位图对象。

***

### bool()

> **bool**(): `boolean`

Defined in: [awtk.ts:3804](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3804)

获取类型为bool的值。

#### Returns

`boolean`

值。

***

### compare()

> **compare**(`other`): `number`

Defined in: [awtk.ts:4094](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4094)

比较两个value。

#### Parameters

##### other

`TValue`

value对象。

#### Returns

`number`

小于返回-1，等于返回0，大于返回1。

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4174](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4174)

销毁value对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### equal()

> **equal**(`other`): `boolean`

Defined in: [awtk.ts:4082](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4082)

判断两个value是否相同。

#### Parameters

##### other

`TValue`

value对象。

#### Returns

`boolean`

为空值返回TRUE，否则返回FALSE。

***

### float32()

> **float32**(): `number`

Defined in: [awtk.ts:4000](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4000)

获取类型为float的值。

#### Returns

`number`

值。

***

### float64()

> **float64**(): `number`

Defined in: [awtk.ts:4023](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4023)

获取类型为double的值。

#### Returns

`number`

值。

***

### func()

> **func**(): `any`

Defined in: [awtk.ts:4221](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4221)

获取类型为func的值。

#### Returns

`any`

值。

***

### funcDef()

> **funcDef**(): `any`

Defined in: [awtk.ts:4232](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4232)

获取类型为func_def的值。

#### Returns

`any`

值。

***

### id()

> **id**(): `string`

Defined in: [awtk.ts:4210](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4210)

获取类型为ID的值。

#### Returns

`string`

值。

***

### int16()

> **int16**(): `number`

Defined in: [awtk.ts:3873](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3873)

获取类型为int16的值。

#### Returns

`number`

值。

***

### int32()

> **int32**(): `number`

Defined in: [awtk.ts:3919](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3919)

获取类型为int32的值。

#### Returns

`number`

值。

***

### int64()

> **int64**(): `number`

Defined in: [awtk.ts:3954](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3954)

获取类型为int64的值。

#### Returns

`number`

值。

***

### int8()

> **int8**(): `number`

Defined in: [awtk.ts:3827](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3827)

获取类型为int8的值。

#### Returns

`number`

值。

***

### isNull()

> **isNull**(): `boolean`

Defined in: [awtk.ts:4070](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4070)

判断value是否为空值。

#### Returns

`boolean`

为空值返回TRUE，否则返回FALSE。

***

### object()

> **object**(): [`TObject`](TObject.md)

Defined in: [awtk.ts:4129](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4129)

转换为object的值。

#### Returns

[`TObject`](TObject.md)

值。

***

### rect()

> **rect**(): [`TRect`](TRect.md)

Defined in: [awtk.ts:4254](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4254)

获取类型为矩形区域数据。

#### Returns

[`TRect`](TRect.md)

返回矩形区域数据。

***

### reset()

> **reset**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4185](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4185)

重置value对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setBool()

> **setBool**(`value`): `TValue`

Defined in: [awtk.ts:3793](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3793)

设置类型为bool的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### setFloat()

> **setFloat**(`value`): `TValue`

Defined in: [awtk.ts:3989](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3989)

设置类型为float\_t的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### setFloat64()

> **setFloat64**(`value`): `TValue`

Defined in: [awtk.ts:4012](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4012)

设置类型为double的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### setInt()

> **setInt**(`value`): `TValue`

Defined in: [awtk.ts:4106](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4106)

设置类型为int的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### setInt16()

> **setInt16**(`value`): `TValue`

Defined in: [awtk.ts:3862](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3862)

设置类型为int16的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### setInt32()

> **setInt32**(`value`): `TValue`

Defined in: [awtk.ts:3908](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3908)

设置类型为int32的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### setInt64()

> **setInt64**(`value`): `TValue`

Defined in: [awtk.ts:3943](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3943)

设置类型为int64的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### setInt8()

> **setInt8**(`value`): `TValue`

Defined in: [awtk.ts:3816](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3816)

设置类型为int8的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### setObject()

> **setObject**(`value`): `TValue`

Defined in: [awtk.ts:4118](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4118)

设置类型为object的值。

#### Parameters

##### value

[`TObject`](TObject.md)

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### setStr()

> **setStr**(`value`): `TValue`

Defined in: [awtk.ts:4035](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4035)

设置类型为字符串的值(并拷贝字符串)。

#### Parameters

##### value

`string`

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### setToken()

> **setToken**(`value`): `TValue`

Defined in: [awtk.ts:4141](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4141)

设置类型为token的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### setUint16()

> **setUint16**(`value`): `TValue`

Defined in: [awtk.ts:3885](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3885)

设置类型为uint16的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### setUint32()

> **setUint32**(`value`): `TValue`

Defined in: [awtk.ts:3931](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3931)

设置类型为uint32的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### setUint64()

> **setUint64**(`value`): `TValue`

Defined in: [awtk.ts:3966](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3966)

设置类型为uint64的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### setUint8()

> **setUint8**(`value`): `TValue`

Defined in: [awtk.ts:3839](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3839)

设置类型为uint8的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

`TValue`

value对象本身。

***

### str()

> **str**(): `string`

Defined in: [awtk.ts:4046](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4046)

获取类型为字符串的值。

#### Returns

`string`

值。

***

### strEx()

> **strEx**(`buff`, `size`): `string`

Defined in: [awtk.ts:4059](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4059)

获取类型为字符串的值。

#### Parameters

##### buff

`string`

用于格式转换的缓冲区（如果 v 对象为 string 类型的话，不会把字符串数据拷贝到 buff 中）。

##### size

`number`

缓冲区大小。

#### Returns

`string`

值。

***

### token()

> **token**(): `number`

Defined in: [awtk.ts:4152](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4152)

获取token的值。

#### Returns

`number`

值。

***

### uint16()

> **uint16**(): `number`

Defined in: [awtk.ts:3896](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3896)

获取类型为uint16的值。

#### Returns

`number`

值。

***

### uint64()

> **uint64**(): `number`

Defined in: [awtk.ts:3977](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3977)

获取类型为uint64的值。

#### Returns

`number`

值。

***

### uint8()

> **uint8**(): `number`

Defined in: [awtk.ts:3850](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L3850)

获取类型为uint8的值。

#### Returns

`number`

值。

***

### cast()

> `static` **cast**(`value`): `TValue`

Defined in: [awtk.ts:4199](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4199)

转换为value对象。

> 供脚本语言使用

#### Parameters

##### value

`TValue`

value对象。

#### Returns

`TValue`

对象。

***

### create()

> `static` **create**(): `TValue`

Defined in: [awtk.ts:4163](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4163)

创建value对象。

#### Returns

`TValue`

对象。
