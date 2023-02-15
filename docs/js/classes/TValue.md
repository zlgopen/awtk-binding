[AWTK](../README.md) / [Exports](../modules.md) / TValue

# Class: TValue

一个通用数据类型，用来存放整数、浮点数、字符串和其它对象。

在C/C++中，一般不需动态创建对象，直接声明并初始化即可。如：

> 在脚本语言中，需要动态创建对象。

## Table of contents

### Constructors

- [constructor](TValue.md#constructor)

### Properties

- [nativeObj](TValue.md#nativeobj)

### Methods

- [bitmap](TValue.md#bitmap)
- [bool](TValue.md#bool)
- [destroy](TValue.md#destroy)
- [float32](TValue.md#float32)
- [float64](TValue.md#float64)
- [func](TValue.md#func)
- [funcDef](TValue.md#funcdef)
- [id](TValue.md#id)
- [int16](TValue.md#int16)
- [int32](TValue.md#int32)
- [int64](TValue.md#int64)
- [int8](TValue.md#int8)
- [isNull](TValue.md#isnull)
- [object](TValue.md#object)
- [reset](TValue.md#reset)
- [setBool](TValue.md#setbool)
- [setFloat](TValue.md#setfloat)
- [setFloat64](TValue.md#setfloat64)
- [setInt](TValue.md#setint)
- [setInt16](TValue.md#setint16)
- [setInt32](TValue.md#setint32)
- [setInt64](TValue.md#setint64)
- [setInt8](TValue.md#setint8)
- [setObject](TValue.md#setobject)
- [setStr](TValue.md#setstr)
- [setToken](TValue.md#settoken)
- [setUint16](TValue.md#setuint16)
- [setUint32](TValue.md#setuint32)
- [setUint64](TValue.md#setuint64)
- [setUint8](TValue.md#setuint8)
- [str](TValue.md#str)
- [strEx](TValue.md#strex)
- [token](TValue.md#token)
- [uint16](TValue.md#uint16)
- [uint64](TValue.md#uint64)
- [uint8](TValue.md#uint8)
- [cast](TValue.md#cast)
- [create](TValue.md#create)

## Constructors

### constructor

• **new TValue**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:3538](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3538)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:3537](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3537)

## Methods

### bitmap

▸ **bitmap**(): [`TBitmap`](TBitmap.md)

获取类型为位图对象。

#### Returns

[`TBitmap`](TBitmap.md)

位图对象。

#### Defined in

[awtk.ts:3976](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3976)

___

### bool

▸ **bool**(): `boolean`

获取类型为bool的值。

#### Returns

`boolean`

值。

#### Defined in

[awtk.ts:3561](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3561)

___

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁value对象。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3907](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3907)

___

### float32

▸ **float32**(): `number`

获取类型为float的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3757](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3757)

___

### float64

▸ **float64**(): `number`

获取类型为double的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3780](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3780)

___

### func

▸ **func**(): `any`

获取类型为func的值。

#### Returns

`any`

值。

#### Defined in

[awtk.ts:3954](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3954)

___

### funcDef

▸ **funcDef**(): `any`

获取类型为func_def的值。

#### Returns

`any`

值。

#### Defined in

[awtk.ts:3965](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3965)

___

### id

▸ **id**(): `string`

获取类型为ID的值。

#### Returns

`string`

值。

#### Defined in

[awtk.ts:3943](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3943)

___

### int16

▸ **int16**(): `number`

获取类型为int16的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3630](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3630)

___

### int32

▸ **int32**(): `number`

获取类型为int32的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3676](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3676)

___

### int64

▸ **int64**(): `number`

获取类型为int64的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3711](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3711)

___

### int8

▸ **int8**(): `number`

获取类型为int8的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3584](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3584)

___

### isNull

▸ **isNull**(): `boolean`

判断value是否为空值。

#### Returns

`boolean`

为空值返回TRUE，否则返回FALSE。

#### Defined in

[awtk.ts:3827](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3827)

___

### object

▸ **object**(): [`TObject`](TObject.md)

转换为object的值。

#### Returns

[`TObject`](TObject.md)

值。

#### Defined in

[awtk.ts:3862](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3862)

___

### reset

▸ **reset**(): [`TRet`](../enums/TRet.md)

重置value对象。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3918](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3918)

___

### setBool

▸ **setBool**(`value`): [`TValue`](TValue.md)

设置类型为bool的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3550](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3550)

___

### setFloat

▸ **setFloat**(`value`): [`TValue`](TValue.md)

设置类型为float\_t的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3746](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3746)

___

### setFloat64

▸ **setFloat64**(`value`): [`TValue`](TValue.md)

设置类型为double的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3769](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3769)

___

### setInt

▸ **setInt**(`value`): [`TValue`](TValue.md)

设置类型为int的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3839](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3839)

___

### setInt16

▸ **setInt16**(`value`): [`TValue`](TValue.md)

设置类型为int16的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3619](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3619)

___

### setInt32

▸ **setInt32**(`value`): [`TValue`](TValue.md)

设置类型为int32的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3665](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3665)

___

### setInt64

▸ **setInt64**(`value`): [`TValue`](TValue.md)

设置类型为int64的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3700](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3700)

___

### setInt8

▸ **setInt8**(`value`): [`TValue`](TValue.md)

设置类型为int8的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3573](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3573)

___

### setObject

▸ **setObject**(`value`): [`TValue`](TValue.md)

设置类型为object的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | [`TObject`](TObject.md) | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3851](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3851)

___

### setStr

▸ **setStr**(`value`): [`TValue`](TValue.md)

设置类型为字符串的值(并拷贝字符串)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `string` | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3792](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3792)

___

### setToken

▸ **setToken**(`value`): [`TValue`](TValue.md)

设置类型为token的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3874](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3874)

___

### setUint16

▸ **setUint16**(`value`): [`TValue`](TValue.md)

设置类型为uint16的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3642](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3642)

___

### setUint32

▸ **setUint32**(`value`): [`TValue`](TValue.md)

设置类型为uint32的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3688](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3688)

___

### setUint64

▸ **setUint64**(`value`): [`TValue`](TValue.md)

设置类型为uint64的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3723](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3723)

___

### setUint8

▸ **setUint8**(`value`): [`TValue`](TValue.md)

设置类型为uint8的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 待设置的值。 |

#### Returns

[`TValue`](TValue.md)

value对象本身。

#### Defined in

[awtk.ts:3596](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3596)

___

### str

▸ **str**(): `string`

获取类型为字符串的值。

#### Returns

`string`

值。

#### Defined in

[awtk.ts:3803](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3803)

___

### strEx

▸ **strEx**(`buff`, `size`): `string`

获取类型为字符串的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `buff` | `string` | 用于格式转换的缓冲区（如果 v 对象为 string 类型的话，不会把字符串数据拷贝到 buff 中）。 |
| `size` | `number` | 缓冲区大小。 |

#### Returns

`string`

值。

#### Defined in

[awtk.ts:3816](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3816)

___

### token

▸ **token**(): `number`

获取token的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3885](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3885)

___

### uint16

▸ **uint16**(): `number`

获取类型为uint16的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3653](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3653)

___

### uint64

▸ **uint64**(): `number`

获取类型为uint64的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3734](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3734)

___

### uint8

▸ **uint8**(): `number`

获取类型为uint8的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3607](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3607)

___

### cast

▸ `Static` **cast**(`value`): [`TValue`](TValue.md)

转换为value对象。

> 供脚本语言使用

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | [`TValue`](TValue.md) | value对象。 |

#### Returns

[`TValue`](TValue.md)

对象。

#### Defined in

[awtk.ts:3932](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3932)

___

### create

▸ `Static` **create**(): [`TValue`](TValue.md)

创建value对象。

#### Returns

[`TValue`](TValue.md)

对象。

#### Defined in

[awtk.ts:3896](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L3896)
