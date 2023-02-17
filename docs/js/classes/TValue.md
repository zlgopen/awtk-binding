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
- [rect](TValue.md#rect)
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

[awtk.ts:3541](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3541)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:3540](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3540)

## Methods

### bitmap

▸ **bitmap**(): `any`

获取类型为位图对象。

#### Returns

`any`

位图对象。

#### Defined in

[awtk.ts:3979](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3979)

___

### bool

▸ **bool**(): `boolean`

获取类型为bool的值。

#### Returns

`boolean`

值。

#### Defined in

[awtk.ts:3564](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3564)

___

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁value对象。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3910](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3910)

___

### float32

▸ **float32**(): `number`

获取类型为float的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3760](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3760)

___

### float64

▸ **float64**(): `number`

获取类型为double的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3783](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3783)

___

### func

▸ **func**(): `any`

获取类型为func的值。

#### Returns

`any`

值。

#### Defined in

[awtk.ts:3957](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3957)

___

### funcDef

▸ **funcDef**(): `any`

获取类型为func_def的值。

#### Returns

`any`

值。

#### Defined in

[awtk.ts:3968](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3968)

___

### id

▸ **id**(): `string`

获取类型为ID的值。

#### Returns

`string`

值。

#### Defined in

[awtk.ts:3946](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3946)

___

### int16

▸ **int16**(): `number`

获取类型为int16的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3633](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3633)

___

### int32

▸ **int32**(): `number`

获取类型为int32的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3679](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3679)

___

### int64

▸ **int64**(): `number`

获取类型为int64的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3714](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3714)

___

### int8

▸ **int8**(): `number`

获取类型为int8的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3587](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3587)

___

### isNull

▸ **isNull**(): `boolean`

判断value是否为空值。

#### Returns

`boolean`

为空值返回TRUE，否则返回FALSE。

#### Defined in

[awtk.ts:3830](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3830)

___

### object

▸ **object**(): [`TObject`](TObject.md)

转换为object的值。

#### Returns

[`TObject`](TObject.md)

值。

#### Defined in

[awtk.ts:3865](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3865)

___

### rect

▸ **rect**(): [`TRect`](TRect.md)

获取类型为矩形区域数据。

#### Returns

[`TRect`](TRect.md)

返回矩形区域数据。

#### Defined in

[awtk.ts:3990](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3990)

___

### reset

▸ **reset**(): [`TRet`](../enums/TRet.md)

重置value对象。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3921](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3921)

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

[awtk.ts:3553](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3553)

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

[awtk.ts:3749](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3749)

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

[awtk.ts:3772](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3772)

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

[awtk.ts:3842](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3842)

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

[awtk.ts:3622](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3622)

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

[awtk.ts:3668](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3668)

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

[awtk.ts:3703](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3703)

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

[awtk.ts:3576](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3576)

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

[awtk.ts:3854](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3854)

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

[awtk.ts:3795](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3795)

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

[awtk.ts:3877](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3877)

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

[awtk.ts:3645](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3645)

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

[awtk.ts:3691](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3691)

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

[awtk.ts:3726](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3726)

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

[awtk.ts:3599](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3599)

___

### str

▸ **str**(): `string`

获取类型为字符串的值。

#### Returns

`string`

值。

#### Defined in

[awtk.ts:3806](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3806)

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

[awtk.ts:3819](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3819)

___

### token

▸ **token**(): `number`

获取token的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3888](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3888)

___

### uint16

▸ **uint16**(): `number`

获取类型为uint16的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3656](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3656)

___

### uint64

▸ **uint64**(): `number`

获取类型为uint64的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3737](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3737)

___

### uint8

▸ **uint8**(): `number`

获取类型为uint8的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3610](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3610)

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

[awtk.ts:3935](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3935)

___

### create

▸ `Static` **create**(): [`TValue`](TValue.md)

创建value对象。

#### Returns

[`TValue`](TValue.md)

对象。

#### Defined in

[awtk.ts:3899](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L3899)
