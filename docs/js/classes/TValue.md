[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TValue

# Class: TValue

一个通用数据类型，用来存放整数、浮点数、字符串和其它对象。

在C/C++中，一般不需动态创建对象，直接声明并初始化即可。如：

> 在脚本语言中，需要动态创建对象。

## Extended by

- [`TNamedValue`](TNamedValue.md)

## Constructors

### new TValue()

> **new TValue**(`nativeObj`): [`TValue`](TValue.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TValue`](TValue.md)

#### Defined in

[awtk.ts:3706](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3706)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:3705](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3705)

## Methods

### bitmap()

> **bitmap**(): `any`

获取类型为位图对象。

#### Returns

`any`

位图对象。

#### Defined in

[awtk.ts:4156](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4156)

***

### bool()

> **bool**(): `boolean`

获取类型为bool的值。

#### Returns

`boolean`

值。

#### Defined in

[awtk.ts:3729](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3729)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁value对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4087](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4087)

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

#### Defined in

[awtk.ts:4007](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4007)

***

### float32()

> **float32**(): `number`

获取类型为float的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3925](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3925)

***

### float64()

> **float64**(): `number`

获取类型为double的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3948](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3948)

***

### func()

> **func**(): `any`

获取类型为func的值。

#### Returns

`any`

值。

#### Defined in

[awtk.ts:4134](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4134)

***

### funcDef()

> **funcDef**(): `any`

获取类型为func_def的值。

#### Returns

`any`

值。

#### Defined in

[awtk.ts:4145](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4145)

***

### id()

> **id**(): `string`

获取类型为ID的值。

#### Returns

`string`

值。

#### Defined in

[awtk.ts:4123](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4123)

***

### int16()

> **int16**(): `number`

获取类型为int16的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3798](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3798)

***

### int32()

> **int32**(): `number`

获取类型为int32的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3844](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3844)

***

### int64()

> **int64**(): `number`

获取类型为int64的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3879](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3879)

***

### int8()

> **int8**(): `number`

获取类型为int8的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3752](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3752)

***

### isNull()

> **isNull**(): `boolean`

判断value是否为空值。

#### Returns

`boolean`

为空值返回TRUE，否则返回FALSE。

#### Defined in

[awtk.ts:3995](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3995)

***

### object()

> **object**(): [`TObject`](TObject.md)

转换为object的值。

#### Returns

[`TObject`](TObject.md)

值。

#### Defined in

[awtk.ts:4042](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4042)

***

### rect()

> **rect**(): [`TRect`](TRect.md)

获取类型为矩形区域数据。

#### Returns

[`TRect`](TRect.md)

返回矩形区域数据。

#### Defined in

[awtk.ts:4167](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4167)

***

### reset()

> **reset**(): [`TRet`](../enumerations/TRet.md)

重置value对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

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

#### Defined in

[awtk.ts:3741](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3741)

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

#### Defined in

[awtk.ts:3764](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3764)

***

### str()

> **str**(): `string`

获取类型为字符串的值。

#### Returns

`string`

值。

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

#### Defined in

[awtk.ts:3984](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3984)

***

### token()

> **token**(): `number`

获取token的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:4065](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4065)

***

### uint16()

> **uint16**(): `number`

获取类型为uint16的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3821](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3821)

***

### uint64()

> **uint64**(): `number`

获取类型为uint64的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3902](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3902)

***

### uint8()

> **uint8**(): `number`

获取类型为uint8的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3775](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3775)

***

### cast()

> `static` **cast**(`value`): [`TValue`](TValue.md)

转换为value对象。

> 供脚本语言使用

#### Parameters

• **value**: [`TValue`](TValue.md)

value对象。

#### Returns

[`TValue`](TValue.md)

对象。

#### Defined in

[awtk.ts:4112](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4112)

***

### create()

> `static` **create**(): [`TValue`](TValue.md)

创建value对象。

#### Returns

[`TValue`](TValue.md)

对象。

#### Defined in

[awtk.ts:4076](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4076)
