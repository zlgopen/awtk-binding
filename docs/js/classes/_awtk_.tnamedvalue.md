[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TNamedValue](_awtk_.tnamedvalue.md)

# Class: TNamedValue

命名的值。

## Hierarchy

* **TNamedValue**

## Index

### Constructors

* [constructor](_awtk_.tnamedvalue.md#constructor)

### Properties

* [nativeObj](_awtk_.tnamedvalue.md#nativeobj)

### Accessors

* [name](_awtk_.tnamedvalue.md#name)

### Methods

* [destroy](_awtk_.tnamedvalue.md#destroy)
* [getValue](_awtk_.tnamedvalue.md#getvalue)
* [setName](_awtk_.tnamedvalue.md#setname)
* [setValue](_awtk_.tnamedvalue.md#setvalue)
* [cast](_awtk_.tnamedvalue.md#static-cast)
* [create](_awtk_.tnamedvalue.md#static-create)

## Constructors

###  constructor

\+ **new TNamedValue**(`nativeObj`: any): *[TNamedValue](_awtk_.tnamedvalue.md)*

*Defined in [awtk.ts:9262](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L9262)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TNamedValue](_awtk_.tnamedvalue.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:9262](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L9262)*

## Accessors

###  name

• **get name**(): *string*

*Defined in [awtk.ts:9349](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L9349)*

名称。

**Returns:** *string*

• **set name**(`v`: string): *void*

*Defined in [awtk.ts:9340](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L9340)*

名称。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9336](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L9336)*

销毁named_value对象。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  getValue

▸ **getValue**(): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:9324](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L9324)*

获取值对象(主要给脚本语言使用)。

**Returns:** *[TValue](_awtk_.tvalue.md)*

返回值对象。

___

###  setName

▸ **setName**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9299](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L9299)*

设置名称。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setValue

▸ **setValue**(`value`: [TValue](_awtk_.tvalue.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:9312](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L9312)*

设置值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | [TValue](_awtk_.tvalue.md) | 值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`nv`: [TNamedValue](_awtk_.tnamedvalue.md)): *[TNamedValue](_awtk_.tnamedvalue.md)*

*Defined in [awtk.ts:9286](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L9286)*

转换为named_value对象(供脚本语言使用)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`nv` | [TNamedValue](_awtk_.tnamedvalue.md) | named_value对象。  |

**Returns:** *[TNamedValue](_awtk_.tnamedvalue.md)*

返回named_value对象。

___

### `Static` create

▸ **create**(): *[TNamedValue](_awtk_.tnamedvalue.md)*

*Defined in [awtk.ts:9274](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L9274)*

创建named_value对象。

**Returns:** *[TNamedValue](_awtk_.tnamedvalue.md)*

返回named_value对象。
