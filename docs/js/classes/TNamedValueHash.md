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

[awtk.ts:29321](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L29321)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TNamedValue`](TNamedValue.md).[`nativeObj`](TNamedValue.md#nativeobj)

#### Defined in

[awtk.ts:29320](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L29320)

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

[awtk.ts:24378](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L24378)

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

[awtk.ts:4156](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4156)

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

[awtk.ts:3729](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3729)

***

### clone()

> **clone**(): [`TNamedValueHash`](TNamedValueHash.md)

克隆named_value_hash对象。

#### Returns

[`TNamedValueHash`](TNamedValueHash.md)

返回named_value_hash对象。

#### Defined in

[awtk.ts:29366](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L29366)

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

[awtk.ts:29355](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L29355)

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

[awtk.ts:4007](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4007)

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

[awtk.ts:3925](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3925)

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

[awtk.ts:3948](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3948)

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

[awtk.ts:4134](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4134)

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

[awtk.ts:4145](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4145)

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

[awtk.ts:24358](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L24358)

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

[awtk.ts:4123](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4123)

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

[awtk.ts:3798](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3798)

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

[awtk.ts:3844](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3844)

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

[awtk.ts:3879](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3879)

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

[awtk.ts:3752](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3752)

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

[awtk.ts:3995](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3995)

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

[awtk.ts:4042](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4042)

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

[awtk.ts:4167](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4167)

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

[awtk.ts:4098](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4098)

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

[awtk.ts:3718](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3718)

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

[awtk.ts:3914](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3914)

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

[awtk.ts:3937](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3937)

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

[awtk.ts:4019](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4019)

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

[awtk.ts:3787](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3787)

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

[awtk.ts:3833](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3833)

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

[awtk.ts:3868](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3868)

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

[awtk.ts:3741](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3741)

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

[awtk.ts:29344](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L29344)

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

[awtk.ts:4031](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4031)

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

[awtk.ts:3960](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3960)

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

[awtk.ts:4054](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4054)

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

[awtk.ts:3810](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3810)

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

[awtk.ts:3856](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3856)

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

[awtk.ts:3891](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3891)

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

[awtk.ts:3764](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3764)

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

[awtk.ts:24347](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L24347)

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

[awtk.ts:3971](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3971)

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

[awtk.ts:3984](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3984)

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

[awtk.ts:4065](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4065)

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

[awtk.ts:3821](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3821)

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

[awtk.ts:3902](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3902)

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

[awtk.ts:3775](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3775)

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

[awtk.ts:24323](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L24323)

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

[awtk.ts:29332](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L29332)

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

[awtk.ts:29378](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L29378)
