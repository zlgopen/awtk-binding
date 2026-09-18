[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TNamedValue

# Class: TNamedValue

Defined in: [awtk.ts:24923](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24923)

命名的值。

## Extends

- [`TValue`](TValue.md)

## Extended by

- [`TNamedValueHash`](TNamedValueHash.md)

## Constructors

### Constructor

> **new TNamedValue**(`nativeObj`): `TNamedValue`

Defined in: [awtk.ts:24925](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24925)

#### Parameters

##### nativeObj

`any`

#### Returns

`TNamedValue`

#### Overrides

[`TValue`](TValue.md).[`constructor`](TValue.md#constructor)

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:24924](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24924)

#### Overrides

[`TValue`](TValue.md).[`nativeObj`](TValue.md#nativeobj)

## Accessors

### name

#### Get Signature

> **get** **name**(): `string`

Defined in: [awtk.ts:25003](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L25003)

名称。

##### Returns

`string`

#### Set Signature

> **set** **name**(`v`): `void`

Defined in: [awtk.ts:25007](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L25007)

##### Parameters

###### v

`string`

##### Returns

`void`

## Methods

### bitmap()

> **bitmap**(): `any`

Defined in: [awtk.ts:4243](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4243)

获取类型为位图对象。

#### Returns

`any`

位图对象。

#### Inherited from

[`TValue`](TValue.md).[`bitmap`](TValue.md#bitmap)

***

### bool()

> **bool**(): `boolean`

Defined in: [awtk.ts:3804](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3804)

获取类型为bool的值。

#### Returns

`boolean`

值。

#### Inherited from

[`TValue`](TValue.md).[`bool`](TValue.md#bool)

***

### compare()

> **compare**(`other`): `number`

Defined in: [awtk.ts:4094](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4094)

比较两个value。

#### Parameters

##### other

[`TValue`](TValue.md)

value对象。

#### Returns

`number`

小于返回-1，等于返回0，大于返回1。

#### Inherited from

[`TValue`](TValue.md).[`compare`](TValue.md#compare)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:24994](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24994)

销毁named_value对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Overrides

[`TValue`](TValue.md).[`destroy`](TValue.md#destroy)

***

### equal()

> **equal**(`other`): `boolean`

Defined in: [awtk.ts:4082](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4082)

判断两个value是否相同。

#### Parameters

##### other

[`TValue`](TValue.md)

value对象。

#### Returns

`boolean`

为空值返回TRUE，否则返回FALSE。

#### Inherited from

[`TValue`](TValue.md).[`equal`](TValue.md#equal)

***

### float32()

> **float32**(): `number`

Defined in: [awtk.ts:4000](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4000)

获取类型为float的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`float32`](TValue.md#float32)

***

### float64()

> **float64**(): `number`

Defined in: [awtk.ts:4023](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4023)

获取类型为double的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`float64`](TValue.md#float64)

***

### func()

> **func**(): `any`

Defined in: [awtk.ts:4221](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4221)

获取类型为func的值。

#### Returns

`any`

值。

#### Inherited from

[`TValue`](TValue.md).[`func`](TValue.md#func)

***

### funcDef()

> **funcDef**(): `any`

Defined in: [awtk.ts:4232](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4232)

获取类型为func_def的值。

#### Returns

`any`

值。

#### Inherited from

[`TValue`](TValue.md).[`funcDef`](TValue.md#funcdef)

***

### getValue()

> **getValue**(): [`TValue`](TValue.md)

Defined in: [awtk.ts:24983](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24983)

获取值对象(主要给脚本语言使用)。

#### Returns

[`TValue`](TValue.md)

返回值对象。

***

### id()

> **id**(): `string`

Defined in: [awtk.ts:4210](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4210)

获取类型为ID的值。

#### Returns

`string`

值。

#### Inherited from

[`TValue`](TValue.md).[`id`](TValue.md#id)

***

### int16()

> **int16**(): `number`

Defined in: [awtk.ts:3873](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3873)

获取类型为int16的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`int16`](TValue.md#int16)

***

### int32()

> **int32**(): `number`

Defined in: [awtk.ts:3919](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3919)

获取类型为int32的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`int32`](TValue.md#int32)

***

### int64()

> **int64**(): `number`

Defined in: [awtk.ts:3954](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3954)

获取类型为int64的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`int64`](TValue.md#int64)

***

### int8()

> **int8**(): `number`

Defined in: [awtk.ts:3827](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3827)

获取类型为int8的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`int8`](TValue.md#int8)

***

### isNull()

> **isNull**(): `boolean`

Defined in: [awtk.ts:4070](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4070)

判断value是否为空值。

#### Returns

`boolean`

为空值返回TRUE，否则返回FALSE。

#### Inherited from

[`TValue`](TValue.md).[`isNull`](TValue.md#isnull)

***

### object()

> **object**(): [`TObject`](TObject.md)

Defined in: [awtk.ts:4129](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4129)

转换为object的值。

#### Returns

[`TObject`](TObject.md)

值。

#### Inherited from

[`TValue`](TValue.md).[`object`](TValue.md#object)

***

### rect()

> **rect**(): [`TRect`](TRect.md)

Defined in: [awtk.ts:4254](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4254)

获取类型为矩形区域数据。

#### Returns

[`TRect`](TRect.md)

返回矩形区域数据。

#### Inherited from

[`TValue`](TValue.md).[`rect`](TValue.md#rect)

***

### reset()

> **reset**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4185](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4185)

重置value对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TValue`](TValue.md).[`reset`](TValue.md#reset)

***

### setBool()

> **setBool**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:3793](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3793)

设置类型为bool的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setBool`](TValue.md#setbool)

***

### setFloat()

> **setFloat**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:3989](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3989)

设置类型为float\_t的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setFloat`](TValue.md#setfloat)

***

### setFloat64()

> **setFloat64**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:4012](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4012)

设置类型为double的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setFloat64`](TValue.md#setfloat64)

***

### setInt()

> **setInt**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:4106](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4106)

设置类型为int的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setInt`](TValue.md#setint)

***

### setInt16()

> **setInt16**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:3862](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3862)

设置类型为int16的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setInt16`](TValue.md#setint16)

***

### setInt32()

> **setInt32**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:3908](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3908)

设置类型为int32的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setInt32`](TValue.md#setint32)

***

### setInt64()

> **setInt64**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:3943](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3943)

设置类型为int64的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setInt64`](TValue.md#setint64)

***

### setInt8()

> **setInt8**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:3816](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3816)

设置类型为int8的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setInt8`](TValue.md#setint8)

***

### setName()

> **setName**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:24960](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24960)

设置名称。

#### Parameters

##### name

`string`

名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setObject()

> **setObject**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:4118](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4118)

设置类型为object的值。

#### Parameters

##### value

[`TObject`](TObject.md)

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setObject`](TValue.md#setobject)

***

### setStr()

> **setStr**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:4035](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4035)

设置类型为字符串的值(并拷贝字符串)。

#### Parameters

##### value

`string`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setStr`](TValue.md#setstr)

***

### setToken()

> **setToken**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:4141](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4141)

设置类型为token的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setToken`](TValue.md#settoken)

***

### setUint16()

> **setUint16**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:3885](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3885)

设置类型为uint16的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setUint16`](TValue.md#setuint16)

***

### setUint32()

> **setUint32**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:3931](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3931)

设置类型为uint32的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setUint32`](TValue.md#setuint32)

***

### setUint64()

> **setUint64**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:3966](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3966)

设置类型为uint64的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setUint64`](TValue.md#setuint64)

***

### setUint8()

> **setUint8**(`value`): [`TValue`](TValue.md)

Defined in: [awtk.ts:3839](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3839)

设置类型为uint8的值。

#### Parameters

##### value

`any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TValue`](TValue.md).[`setUint8`](TValue.md#setuint8)

***

### setValue()

> **setValue**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:24972](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24972)

设置值。

#### Parameters

##### value

[`TValue`](TValue.md)

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### str()

> **str**(): `string`

Defined in: [awtk.ts:4046](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4046)

获取类型为字符串的值。

#### Returns

`string`

值。

#### Inherited from

[`TValue`](TValue.md).[`str`](TValue.md#str)

***

### strEx()

> **strEx**(`buff`, `size`): `string`

Defined in: [awtk.ts:4059](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4059)

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

#### Inherited from

[`TValue`](TValue.md).[`strEx`](TValue.md#strex)

***

### token()

> **token**(): `number`

Defined in: [awtk.ts:4152](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L4152)

获取token的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`token`](TValue.md#token)

***

### uint16()

> **uint16**(): `number`

Defined in: [awtk.ts:3896](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3896)

获取类型为uint16的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`uint16`](TValue.md#uint16)

***

### uint64()

> **uint64**(): `number`

Defined in: [awtk.ts:3977](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3977)

获取类型为uint64的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`uint64`](TValue.md#uint64)

***

### uint8()

> **uint8**(): `number`

Defined in: [awtk.ts:3850](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3850)

获取类型为uint8的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`uint8`](TValue.md#uint8)

***

### cast()

> `static` **cast**(`nv`): `TNamedValue`

Defined in: [awtk.ts:24948](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24948)

转换为named_value对象(供脚本语言使用)。

#### Parameters

##### nv

`TNamedValue`

named_value对象。

#### Returns

`TNamedValue`

返回named_value对象。

#### Overrides

[`TValue`](TValue.md).[`cast`](TValue.md#cast)

***

### create()

> `static` **create**(): `TNamedValue`

Defined in: [awtk.ts:24936](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24936)

创建named_value对象。

#### Returns

`TNamedValue`

返回named_value对象。

#### Overrides

[`TValue`](TValue.md).[`create`](TValue.md#create)
