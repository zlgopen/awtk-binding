[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TValue](_awtk_.tvalue.md)

# Class: TValue

一个通用数据类型，用来存放整数、浮点数、字符串和其它对象。

在C/C++中，一般不需动态创建对象，直接声明并初始化即可。如：

> 在脚本语言中，需要动态创建对象。

## Hierarchy

* **TValue**

## Index

### Constructors

* [constructor](_awtk_.tvalue.md#constructor)

### Properties

* [nativeObj](_awtk_.tvalue.md#nativeobj)

### Methods

* [bool](_awtk_.tvalue.md#bool)
* [destroy](_awtk_.tvalue.md#destroy)
* [float32](_awtk_.tvalue.md#float32)
* [float64](_awtk_.tvalue.md#float64)
* [int16](_awtk_.tvalue.md#int16)
* [int32](_awtk_.tvalue.md#int32)
* [int64](_awtk_.tvalue.md#int64)
* [int8](_awtk_.tvalue.md#int8)
* [isNull](_awtk_.tvalue.md#isnull)
* [object](_awtk_.tvalue.md#object)
* [reset](_awtk_.tvalue.md#reset)
* [setBool](_awtk_.tvalue.md#setbool)
* [setFloat](_awtk_.tvalue.md#setfloat)
* [setFloat64](_awtk_.tvalue.md#setfloat64)
* [setInt](_awtk_.tvalue.md#setint)
* [setInt16](_awtk_.tvalue.md#setint16)
* [setInt32](_awtk_.tvalue.md#setint32)
* [setInt64](_awtk_.tvalue.md#setint64)
* [setInt8](_awtk_.tvalue.md#setint8)
* [setObject](_awtk_.tvalue.md#setobject)
* [setStr](_awtk_.tvalue.md#setstr)
* [setToken](_awtk_.tvalue.md#settoken)
* [setUint16](_awtk_.tvalue.md#setuint16)
* [setUint32](_awtk_.tvalue.md#setuint32)
* [setUint64](_awtk_.tvalue.md#setuint64)
* [setUint8](_awtk_.tvalue.md#setuint8)
* [str](_awtk_.tvalue.md#str)
* [token](_awtk_.tvalue.md#token)
* [uint16](_awtk_.tvalue.md#uint16)
* [uint64](_awtk_.tvalue.md#uint64)
* [uint8](_awtk_.tvalue.md#uint8)
* [cast](_awtk_.tvalue.md#static-cast)
* [create](_awtk_.tvalue.md#static-create)

## Constructors

###  constructor

\+ **new TValue**(`nativeObj`: any): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2096](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2096)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TValue](_awtk_.tvalue.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:2096](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2096)*

## Methods

###  bool

▸ **bool**(): *boolean*

*Defined in [awtk.ts:2120](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2120)*

获取类型为bool的值。

**Returns:** *boolean*

值。

___

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2455](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2455)*

销毁value对象。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  float32

▸ **float32**(): *number*

*Defined in [awtk.ts:2316](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2316)*

获取类型为float的值。

**Returns:** *number*

值。

___

###  float64

▸ **float64**(): *number*

*Defined in [awtk.ts:2339](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2339)*

获取类型为double的值。

**Returns:** *number*

值。

___

###  int16

▸ **int16**(): *number*

*Defined in [awtk.ts:2189](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2189)*

获取类型为int16的值。

**Returns:** *number*

值。

___

###  int32

▸ **int32**(): *number*

*Defined in [awtk.ts:2235](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2235)*

获取类型为int32的值。

**Returns:** *number*

值。

___

###  int64

▸ **int64**(): *number*

*Defined in [awtk.ts:2270](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2270)*

获取类型为int64的值。

**Returns:** *number*

值。

___

###  int8

▸ **int8**(): *number*

*Defined in [awtk.ts:2143](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2143)*

获取类型为int8的值。

**Returns:** *number*

值。

___

###  isNull

▸ **isNull**(): *boolean*

*Defined in [awtk.ts:2375](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2375)*

判断value是否为空值。

**Returns:** *boolean*

为空值返回TRUE，否则返回FALSE。

___

###  object

▸ **object**(): *[TObject](_awtk_.tobject.md)*

*Defined in [awtk.ts:2410](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2410)*

转换为object的值。

**Returns:** *[TObject](_awtk_.tobject.md)*

值。

___

###  reset

▸ **reset**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2466](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2466)*

重置value对象。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setBool

▸ **setBool**(`value`: any): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2109](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2109)*

设置类型为bool的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  setFloat

▸ **setFloat**(`value`: any): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2305](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2305)*

设置类型为float\_t的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  setFloat64

▸ **setFloat64**(`value`: any): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2328](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2328)*

设置类型为double的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  setInt

▸ **setInt**(`value`: any): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2387](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2387)*

设置类型为int的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  setInt16

▸ **setInt16**(`value`: any): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2178](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2178)*

设置类型为int16的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  setInt32

▸ **setInt32**(`value`: any): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2224](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2224)*

设置类型为int32的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  setInt64

▸ **setInt64**(`value`: any): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2259](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2259)*

设置类型为int64的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  setInt8

▸ **setInt8**(`value`: any): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2132](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2132)*

设置类型为int8的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  setObject

▸ **setObject**(`value`: [TObject](_awtk_.tobject.md)): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2399](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2399)*

设置类型为object的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | [TObject](_awtk_.tobject.md) | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  setStr

▸ **setStr**(`value`: string): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2353](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2353)*

设置类型为字符串的值(并拷贝字符串)。

> 供脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | string | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  setToken

▸ **setToken**(`value`: any): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2422](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2422)*

设置类型为token的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  setUint16

▸ **setUint16**(`value`: any): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2201](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2201)*

设置类型为uint16的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  setUint32

▸ **setUint32**(`value`: any): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2247](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2247)*

设置类型为uint32的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  setUint64

▸ **setUint64**(`value`: any): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2282](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2282)*

设置类型为uint64的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  setUint8

▸ **setUint8**(`value`: any): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2155](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2155)*

设置类型为uint8的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 待设置的值。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

value对象本身。

___

###  str

▸ **str**(): *string*

*Defined in [awtk.ts:2364](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2364)*

获取类型为字符串的值。

**Returns:** *string*

值。

___

###  token

▸ **token**(): *number*

*Defined in [awtk.ts:2433](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2433)*

获取token的值。

**Returns:** *number*

值。

___

###  uint16

▸ **uint16**(): *number*

*Defined in [awtk.ts:2212](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2212)*

获取类型为uint16的值。

**Returns:** *number*

值。

___

###  uint64

▸ **uint64**(): *number*

*Defined in [awtk.ts:2293](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2293)*

获取类型为uint64的值。

**Returns:** *number*

值。

___

###  uint8

▸ **uint8**(): *number*

*Defined in [awtk.ts:2166](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2166)*

获取类型为uint8的值。

**Returns:** *number*

值。

___

### `Static` cast

▸ **cast**(`value`: [TValue](_awtk_.tvalue.md)): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2480](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2480)*

转换为value对象。

> 供脚本语言使用

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | [TValue](_awtk_.tvalue.md) | value对象。  |

**Returns:** *[TValue](_awtk_.tvalue.md)*

对象。

___

### `Static` create

▸ **create**(): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:2444](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2444)*

创建value对象。

**Returns:** *[TValue](_awtk_.tvalue.md)*

对象。
