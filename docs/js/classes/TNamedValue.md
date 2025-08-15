[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TNamedValue

# Class: TNamedValue

命名的值。

## Extends

- [`TValue`](TValue.md)

## Extended by

- [`TNamedValueHash`](TNamedValueHash.md)

## Constructors

### new TNamedValue()

> **new TNamedValue**(`nativeObj`): [`TNamedValue`](TNamedValue.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TNamedValue`](TNamedValue.md)

#### Overrides

[`TValue`](TValue.md).[`constructor`](TValue.md#constructors)

#### Defined in

[awtk.ts:24425](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L24425)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TValue`](TValue.md).[`nativeObj`](TValue.md#nativeobj)

#### Defined in

[awtk.ts:24424](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L24424)

## Accessors

### name

> `get` **name**(): `string`

名称。

> `set` **name**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Defined in

[awtk.ts:24503](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L24503)

## Methods

### bitmap()

> **bitmap**(): `any`

获取类型为位图对象。

#### Returns

`any`

位图对象。

#### Inherited from

[`TValue`](TValue.md).[`bitmap`](TValue.md#bitmap)

#### Defined in

[awtk.ts:4178](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4178)

***

### bool()

> **bool**(): `boolean`

获取类型为bool的值。

#### Returns

`boolean`

值。

#### Inherited from

[`TValue`](TValue.md).[`bool`](TValue.md#bool)

#### Defined in

[awtk.ts:3739](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3739)

***

### compare()

> **compare**(`other`): `number`

比较两个value。

#### Parameters

• **other**: [`TValue`](TValue.md)

value对象。

#### Returns

`number`

小于返回-1，等于返回0，大于返回1。

#### Inherited from

[`TValue`](TValue.md).[`compare`](TValue.md#compare)

#### Defined in

[awtk.ts:4029](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4029)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁named_value对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Overrides

[`TValue`](TValue.md).[`destroy`](TValue.md#destroy)

#### Defined in

[awtk.ts:24494](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L24494)

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

[`TValue`](TValue.md).[`equal`](TValue.md#equal)

#### Defined in

[awtk.ts:4017](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4017)

***

### float32()

> **float32**(): `number`

获取类型为float的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`float32`](TValue.md#float32)

#### Defined in

[awtk.ts:3935](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3935)

***

### float64()

> **float64**(): `number`

获取类型为double的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`float64`](TValue.md#float64)

#### Defined in

[awtk.ts:3958](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3958)

***

### func()

> **func**(): `any`

获取类型为func的值。

#### Returns

`any`

值。

#### Inherited from

[`TValue`](TValue.md).[`func`](TValue.md#func)

#### Defined in

[awtk.ts:4156](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4156)

***

### funcDef()

> **funcDef**(): `any`

获取类型为func_def的值。

#### Returns

`any`

值。

#### Inherited from

[`TValue`](TValue.md).[`funcDef`](TValue.md#funcdef)

#### Defined in

[awtk.ts:4167](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4167)

***

### getValue()

> **getValue**(): [`TValue`](TValue.md)

获取值对象(主要给脚本语言使用)。

#### Returns

[`TValue`](TValue.md)

返回值对象。

#### Defined in

[awtk.ts:24483](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L24483)

***

### id()

> **id**(): `string`

获取类型为ID的值。

#### Returns

`string`

值。

#### Inherited from

[`TValue`](TValue.md).[`id`](TValue.md#id)

#### Defined in

[awtk.ts:4145](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4145)

***

### int16()

> **int16**(): `number`

获取类型为int16的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`int16`](TValue.md#int16)

#### Defined in

[awtk.ts:3808](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3808)

***

### int32()

> **int32**(): `number`

获取类型为int32的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`int32`](TValue.md#int32)

#### Defined in

[awtk.ts:3854](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3854)

***

### int64()

> **int64**(): `number`

获取类型为int64的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`int64`](TValue.md#int64)

#### Defined in

[awtk.ts:3889](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3889)

***

### int8()

> **int8**(): `number`

获取类型为int8的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`int8`](TValue.md#int8)

#### Defined in

[awtk.ts:3762](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3762)

***

### isNull()

> **isNull**(): `boolean`

判断value是否为空值。

#### Returns

`boolean`

为空值返回TRUE，否则返回FALSE。

#### Inherited from

[`TValue`](TValue.md).[`isNull`](TValue.md#isnull)

#### Defined in

[awtk.ts:4005](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4005)

***

### object()

> **object**(): [`TObject`](TObject.md)

转换为object的值。

#### Returns

[`TObject`](TObject.md)

值。

#### Inherited from

[`TValue`](TValue.md).[`object`](TValue.md#object)

#### Defined in

[awtk.ts:4064](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4064)

***

### rect()

> **rect**(): [`TRect`](TRect.md)

获取类型为矩形区域数据。

#### Returns

[`TRect`](TRect.md)

返回矩形区域数据。

#### Inherited from

[`TValue`](TValue.md).[`rect`](TValue.md#rect)

#### Defined in

[awtk.ts:4189](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4189)

***

### reset()

> **reset**(): [`TRet`](../enumerations/TRet.md)

重置value对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TValue`](TValue.md).[`reset`](TValue.md#reset)

#### Defined in

[awtk.ts:4120](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4120)

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

[`TValue`](TValue.md).[`setBool`](TValue.md#setbool)

#### Defined in

[awtk.ts:3728](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3728)

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

[`TValue`](TValue.md).[`setFloat`](TValue.md#setfloat)

#### Defined in

[awtk.ts:3924](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3924)

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

[`TValue`](TValue.md).[`setFloat64`](TValue.md#setfloat64)

#### Defined in

[awtk.ts:3947](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3947)

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

[`TValue`](TValue.md).[`setInt`](TValue.md#setint)

#### Defined in

[awtk.ts:4041](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4041)

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

[`TValue`](TValue.md).[`setInt16`](TValue.md#setint16)

#### Defined in

[awtk.ts:3797](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3797)

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

[`TValue`](TValue.md).[`setInt32`](TValue.md#setint32)

#### Defined in

[awtk.ts:3843](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3843)

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

[`TValue`](TValue.md).[`setInt64`](TValue.md#setint64)

#### Defined in

[awtk.ts:3878](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3878)

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

[`TValue`](TValue.md).[`setInt8`](TValue.md#setint8)

#### Defined in

[awtk.ts:3751](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3751)

***

### setName()

> **setName**(`name`): [`TRet`](../enumerations/TRet.md)

设置名称。

#### Parameters

• **name**: `string`

名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:24460](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L24460)

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

[`TValue`](TValue.md).[`setObject`](TValue.md#setobject)

#### Defined in

[awtk.ts:4053](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4053)

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

[`TValue`](TValue.md).[`setStr`](TValue.md#setstr)

#### Defined in

[awtk.ts:3970](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3970)

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

[`TValue`](TValue.md).[`setToken`](TValue.md#settoken)

#### Defined in

[awtk.ts:4076](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4076)

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

[`TValue`](TValue.md).[`setUint16`](TValue.md#setuint16)

#### Defined in

[awtk.ts:3820](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3820)

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

[`TValue`](TValue.md).[`setUint32`](TValue.md#setuint32)

#### Defined in

[awtk.ts:3866](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3866)

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

[`TValue`](TValue.md).[`setUint64`](TValue.md#setuint64)

#### Defined in

[awtk.ts:3901](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3901)

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

[`TValue`](TValue.md).[`setUint8`](TValue.md#setuint8)

#### Defined in

[awtk.ts:3774](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3774)

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

#### Defined in

[awtk.ts:24472](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L24472)

***

### str()

> **str**(): `string`

获取类型为字符串的值。

#### Returns

`string`

值。

#### Inherited from

[`TValue`](TValue.md).[`str`](TValue.md#str)

#### Defined in

[awtk.ts:3981](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3981)

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

[`TValue`](TValue.md).[`strEx`](TValue.md#strex)

#### Defined in

[awtk.ts:3994](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3994)

***

### token()

> **token**(): `number`

获取token的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`token`](TValue.md#token)

#### Defined in

[awtk.ts:4087](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L4087)

***

### uint16()

> **uint16**(): `number`

获取类型为uint16的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`uint16`](TValue.md#uint16)

#### Defined in

[awtk.ts:3831](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3831)

***

### uint64()

> **uint64**(): `number`

获取类型为uint64的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`uint64`](TValue.md#uint64)

#### Defined in

[awtk.ts:3912](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3912)

***

### uint8()

> **uint8**(): `number`

获取类型为uint8的值。

#### Returns

`number`

值。

#### Inherited from

[`TValue`](TValue.md).[`uint8`](TValue.md#uint8)

#### Defined in

[awtk.ts:3785](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L3785)

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

#### Overrides

[`TValue`](TValue.md).[`cast`](TValue.md#cast)

#### Defined in

[awtk.ts:24448](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L24448)

***

### create()

> `static` **create**(): [`TNamedValue`](TNamedValue.md)

创建named_value对象。

#### Returns

[`TNamedValue`](TNamedValue.md)

返回named_value对象。

#### Overrides

[`TValue`](TValue.md).[`create`](TValue.md#create)

#### Defined in

[awtk.ts:24436](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L24436)
