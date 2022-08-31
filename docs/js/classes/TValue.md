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

[awtk.ts:3486](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3486)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:3485](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3485)

## Methods

### bitmap

▸ **bitmap**(): [`TBitmap`](TBitmap.md)

获取类型为位图对象。

#### Returns

[`TBitmap`](TBitmap.md)

位图对象。

#### Defined in

[awtk.ts:3924](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3924)

___

### bool

▸ **bool**(): `boolean`

获取类型为bool的值。

#### Returns

`boolean`

值。

#### Defined in

[awtk.ts:3509](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3509)

___

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁value对象。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3855](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3855)

___

### float32

▸ **float32**(): `number`

获取类型为float的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3705](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3705)

___

### float64

▸ **float64**(): `number`

获取类型为double的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3728](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3728)

___

### func

▸ **func**(): `any`

获取类型为func的值。

#### Returns

`any`

值。

#### Defined in

[awtk.ts:3902](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3902)

___

### funcDef

▸ **funcDef**(): `any`

获取类型为func_def的值。

#### Returns

`any`

值。

#### Defined in

[awtk.ts:3913](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3913)

___

### id

▸ **id**(): `string`

获取类型为ID的值。

#### Returns

`string`

值。

#### Defined in

[awtk.ts:3891](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3891)

___

### int16

▸ **int16**(): `number`

获取类型为int16的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3578](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3578)

___

### int32

▸ **int32**(): `number`

获取类型为int32的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3624](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3624)

___

### int64

▸ **int64**(): `number`

获取类型为int64的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3659](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3659)

___

### int8

▸ **int8**(): `number`

获取类型为int8的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3532](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3532)

___

### isNull

▸ **isNull**(): `boolean`

判断value是否为空值。

#### Returns

`boolean`

为空值返回TRUE，否则返回FALSE。

#### Defined in

[awtk.ts:3775](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3775)

___

### object

▸ **object**(): [`TObject`](TObject.md)

转换为object的值。

#### Returns

[`TObject`](TObject.md)

值。

#### Defined in

[awtk.ts:3810](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3810)

___

### reset

▸ **reset**(): [`TRet`](../enums/TRet.md)

重置value对象。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3866](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3866)

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

[awtk.ts:3498](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3498)

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

[awtk.ts:3694](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3694)

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

[awtk.ts:3717](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3717)

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

[awtk.ts:3787](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3787)

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

[awtk.ts:3567](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3567)

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

[awtk.ts:3613](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3613)

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

[awtk.ts:3648](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3648)

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

[awtk.ts:3521](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3521)

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

[awtk.ts:3799](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3799)

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

[awtk.ts:3740](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3740)

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

[awtk.ts:3822](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3822)

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

[awtk.ts:3590](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3590)

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

[awtk.ts:3636](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3636)

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

[awtk.ts:3671](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3671)

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

[awtk.ts:3544](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3544)

___

### str

▸ **str**(): `string`

获取类型为字符串的值。

#### Returns

`string`

值。

#### Defined in

[awtk.ts:3751](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3751)

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

[awtk.ts:3764](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3764)

___

### token

▸ **token**(): `number`

获取token的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3833](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3833)

___

### uint16

▸ **uint16**(): `number`

获取类型为uint16的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3601](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3601)

___

### uint64

▸ **uint64**(): `number`

获取类型为uint64的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3682](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3682)

___

### uint8

▸ **uint8**(): `number`

获取类型为uint8的值。

#### Returns

`number`

值。

#### Defined in

[awtk.ts:3555](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3555)

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

[awtk.ts:3880](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3880)

___

### create

▸ `Static` **create**(): [`TValue`](TValue.md)

创建value对象。

#### Returns

[`TValue`](TValue.md)

对象。

#### Defined in

[awtk.ts:3844](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3844)
