[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TNamedValueHash

# Class: TNamedValueHash

带有散列值的命名的值。

## Extends

- [`TNamedValue`](TNamedValue.md)

## Constructors

### new TNamedValueHash()

> **new TNamedValueHash**(`nativeObj`): [`TNamedValueHash`](TNamedValueHash.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TNamedValueHash`](TNamedValueHash.md)

#### Overrides

[`TNamedValue`](TNamedValue.md).[`constructor`](TNamedValue.md#constructors)

#### Defined in

[awtk.ts:29238](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L29238)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TNamedValue`](TNamedValue.md).[`nativeObj`](TNamedValue.md#nativeobj)

#### Defined in

[awtk.ts:29237](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L29237)

## Accessors

### name

> `get` **name**(): `string`

名称。

> `set` **name**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`name`](TNamedValue.md#name)

#### Defined in

[awtk.ts:24296](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L24296)

## Methods

### bitmap()

> **bitmap**(): `any`

获取类型为位图对象。

#### Returns

`any`

位图对象。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`bitmap`](TNamedValue.md#bitmap)

#### Defined in

[awtk.ts:4148](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4148)

***

### bool()

> **bool**(): `boolean`

获取类型为bool的值。

#### Returns

`boolean`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`bool`](TNamedValue.md#bool)

#### Defined in

[awtk.ts:3721](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3721)

***

### clone()

> **clone**(): [`TNamedValueHash`](TNamedValueHash.md)

克隆named_value_hash对象。

#### Returns

[`TNamedValueHash`](TNamedValueHash.md)

返回named_value_hash对象。

#### Defined in

[awtk.ts:29283](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L29283)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁named_value_hash对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Overrides

[`TNamedValue`](TNamedValue.md).[`destroy`](TNamedValue.md#destroy)

#### Defined in

[awtk.ts:29272](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L29272)

***

### equal()

> **equal**(`other`): `boolean`

判断两个value是否相同。

#### Parameters

• **other**: [`TValue`](TValue.md)

value对象。

#### Returns

`boolean`

为空值返回TRUE，否则返回FALSE。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`equal`](TNamedValue.md#equal)

#### Defined in

[awtk.ts:3999](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3999)

***

### float32()

> **float32**(): `number`

获取类型为float的值。

#### Returns

`number`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`float32`](TNamedValue.md#float32)

#### Defined in

[awtk.ts:3917](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3917)

***

### float64()

> **float64**(): `number`

获取类型为double的值。

#### Returns

`number`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`float64`](TNamedValue.md#float64)

#### Defined in

[awtk.ts:3940](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3940)

***

### func()

> **func**(): `any`

获取类型为func的值。

#### Returns

`any`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`func`](TNamedValue.md#func)

#### Defined in

[awtk.ts:4126](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4126)

***

### funcDef()

> **funcDef**(): `any`

获取类型为func_def的值。

#### Returns

`any`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`funcDef`](TNamedValue.md#funcdef)

#### Defined in

[awtk.ts:4137](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4137)

***

### getValue()

> **getValue**(): [`TValue`](TValue.md)

获取值对象(主要给脚本语言使用)。

#### Returns

[`TValue`](TValue.md)

返回值对象。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`getValue`](TNamedValue.md#getvalue)

#### Defined in

[awtk.ts:24276](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L24276)

***

### id()

> **id**(): `string`

获取类型为ID的值。

#### Returns

`string`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`id`](TNamedValue.md#id)

#### Defined in

[awtk.ts:4115](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4115)

***

### int16()

> **int16**(): `number`

获取类型为int16的值。

#### Returns

`number`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`int16`](TNamedValue.md#int16)

#### Defined in

[awtk.ts:3790](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3790)

***

### int32()

> **int32**(): `number`

获取类型为int32的值。

#### Returns

`number`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`int32`](TNamedValue.md#int32)

#### Defined in

[awtk.ts:3836](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3836)

***

### int64()

> **int64**(): `number`

获取类型为int64的值。

#### Returns

`number`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`int64`](TNamedValue.md#int64)

#### Defined in

[awtk.ts:3871](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3871)

***

### int8()

> **int8**(): `number`

获取类型为int8的值。

#### Returns

`number`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`int8`](TNamedValue.md#int8)

#### Defined in

[awtk.ts:3744](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3744)

***

### isNull()

> **isNull**(): `boolean`

判断value是否为空值。

#### Returns

`boolean`

为空值返回TRUE，否则返回FALSE。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`isNull`](TNamedValue.md#isnull)

#### Defined in

[awtk.ts:3987](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3987)

***

### object()

> **object**(): [`TObject`](TObject.md)

转换为object的值。

#### Returns

[`TObject`](TObject.md)

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`object`](TNamedValue.md#object)

#### Defined in

[awtk.ts:4034](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4034)

***

### rect()

> **rect**(): [`TRect`](TRect.md)

获取类型为矩形区域数据。

#### Returns

[`TRect`](TRect.md)

返回矩形区域数据。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`rect`](TNamedValue.md#rect)

#### Defined in

[awtk.ts:4159](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4159)

***

### reset()

> **reset**(): [`TRet`](../enumerations/TRet.md)

重置value对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`reset`](TNamedValue.md#reset)

#### Defined in

[awtk.ts:4090](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4090)

***

### setBool()

> **setBool**(`value`): [`TValue`](TValue.md)

设置类型为bool的值。

#### Parameters

• **value**: `any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setBool`](TNamedValue.md#setbool)

#### Defined in

[awtk.ts:3710](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3710)

***

### setFloat()

> **setFloat**(`value`): [`TValue`](TValue.md)

设置类型为float\_t的值。

#### Parameters

• **value**: `any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setFloat`](TNamedValue.md#setfloat)

#### Defined in

[awtk.ts:3906](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3906)

***

### setFloat64()

> **setFloat64**(`value`): [`TValue`](TValue.md)

设置类型为double的值。

#### Parameters

• **value**: `any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setFloat64`](TNamedValue.md#setfloat64)

#### Defined in

[awtk.ts:3929](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3929)

***

### setInt()

> **setInt**(`value`): [`TValue`](TValue.md)

设置类型为int的值。

#### Parameters

• **value**: `any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setInt`](TNamedValue.md#setint)

#### Defined in

[awtk.ts:4011](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4011)

***

### setInt16()

> **setInt16**(`value`): [`TValue`](TValue.md)

设置类型为int16的值。

#### Parameters

• **value**: `any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setInt16`](TNamedValue.md#setint16)

#### Defined in

[awtk.ts:3779](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3779)

***

### setInt32()

> **setInt32**(`value`): [`TValue`](TValue.md)

设置类型为int32的值。

#### Parameters

• **value**: `any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setInt32`](TNamedValue.md#setint32)

#### Defined in

[awtk.ts:3825](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3825)

***

### setInt64()

> **setInt64**(`value`): [`TValue`](TValue.md)

设置类型为int64的值。

#### Parameters

• **value**: `any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setInt64`](TNamedValue.md#setint64)

#### Defined in

[awtk.ts:3860](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3860)

***

### setInt8()

> **setInt8**(`value`): [`TValue`](TValue.md)

设置类型为int8的值。

#### Parameters

• **value**: `any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setInt8`](TNamedValue.md#setint8)

#### Defined in

[awtk.ts:3733](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3733)

***

### setName()

> **setName**(`name`): [`TRet`](../enumerations/TRet.md)

设置散列值。

#### Parameters

• **name**: `string`

名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Overrides

[`TNamedValue`](TNamedValue.md).[`setName`](TNamedValue.md#setname)

#### Defined in

[awtk.ts:29261](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L29261)

***

### setObject()

> **setObject**(`value`): [`TValue`](TValue.md)

设置类型为object的值。

#### Parameters

• **value**: [`TObject`](TObject.md)

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setObject`](TNamedValue.md#setobject)

#### Defined in

[awtk.ts:4023](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4023)

***

### setStr()

> **setStr**(`value`): [`TValue`](TValue.md)

设置类型为字符串的值(并拷贝字符串)。

#### Parameters

• **value**: `string`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setStr`](TNamedValue.md#setstr)

#### Defined in

[awtk.ts:3952](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3952)

***

### setToken()

> **setToken**(`value`): [`TValue`](TValue.md)

设置类型为token的值。

#### Parameters

• **value**: `any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setToken`](TNamedValue.md#settoken)

#### Defined in

[awtk.ts:4046](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4046)

***

### setUint16()

> **setUint16**(`value`): [`TValue`](TValue.md)

设置类型为uint16的值。

#### Parameters

• **value**: `any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setUint16`](TNamedValue.md#setuint16)

#### Defined in

[awtk.ts:3802](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3802)

***

### setUint32()

> **setUint32**(`value`): [`TValue`](TValue.md)

设置类型为uint32的值。

#### Parameters

• **value**: `any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setUint32`](TNamedValue.md#setuint32)

#### Defined in

[awtk.ts:3848](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3848)

***

### setUint64()

> **setUint64**(`value`): [`TValue`](TValue.md)

设置类型为uint64的值。

#### Parameters

• **value**: `any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setUint64`](TNamedValue.md#setuint64)

#### Defined in

[awtk.ts:3883](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3883)

***

### setUint8()

> **setUint8**(`value`): [`TValue`](TValue.md)

设置类型为uint8的值。

#### Parameters

• **value**: `any`

待设置的值。

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setUint8`](TNamedValue.md#setuint8)

#### Defined in

[awtk.ts:3756](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3756)

***

### setValue()

> **setValue**(`value`): [`TRet`](../enumerations/TRet.md)

设置值。

#### Parameters

• **value**: [`TValue`](TValue.md)

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`setValue`](TNamedValue.md#setvalue)

#### Defined in

[awtk.ts:24265](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L24265)

***

### str()

> **str**(): `string`

获取类型为字符串的值。

#### Returns

`string`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`str`](TNamedValue.md#str)

#### Defined in

[awtk.ts:3963](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3963)

***

### strEx()

> **strEx**(`buff`, `size`): `string`

获取类型为字符串的值。

#### Parameters

• **buff**: `string`

用于格式转换的缓冲区（如果 v 对象为 string 类型的话，不会把字符串数据拷贝到 buff 中）。

• **size**: `number`

缓冲区大小。

#### Returns

`string`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`strEx`](TNamedValue.md#strex)

#### Defined in

[awtk.ts:3976](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3976)

***

### token()

> **token**(): `number`

获取token的值。

#### Returns

`number`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`token`](TNamedValue.md#token)

#### Defined in

[awtk.ts:4057](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4057)

***

### uint16()

> **uint16**(): `number`

获取类型为uint16的值。

#### Returns

`number`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`uint16`](TNamedValue.md#uint16)

#### Defined in

[awtk.ts:3813](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3813)

***

### uint64()

> **uint64**(): `number`

获取类型为uint64的值。

#### Returns

`number`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`uint64`](TNamedValue.md#uint64)

#### Defined in

[awtk.ts:3894](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3894)

***

### uint8()

> **uint8**(): `number`

获取类型为uint8的值。

#### Returns

`number`

值。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`uint8`](TNamedValue.md#uint8)

#### Defined in

[awtk.ts:3767](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3767)

***

### cast()

> `static` **cast**(`nv`): [`TNamedValue`](TNamedValue.md)

转换为named_value对象(供脚本语言使用)。

#### Parameters

• **nv**: [`TNamedValue`](TNamedValue.md)

named_value对象。

#### Returns

[`TNamedValue`](TNamedValue.md)

返回named_value对象。

#### Inherited from

[`TNamedValue`](TNamedValue.md).[`cast`](TNamedValue.md#cast)

#### Defined in

[awtk.ts:24241](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L24241)

***

### create()

> `static` **create**(): [`TNamedValueHash`](TNamedValueHash.md)

创建named_value_hash对象。

#### Returns

[`TNamedValueHash`](TNamedValueHash.md)

返回named_value_hash对象。

#### Overrides

[`TNamedValue`](TNamedValue.md).[`create`](TNamedValue.md#create)

#### Defined in

[awtk.ts:29249](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L29249)

***

### getHashFromStr()

> `static` **getHashFromStr**(`str`): `number`

获取字符串散列值。

#### Parameters

• **str**: `string`

字符串。

#### Returns

`number`

返回散列值。

#### Defined in

[awtk.ts:29295](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L29295)
