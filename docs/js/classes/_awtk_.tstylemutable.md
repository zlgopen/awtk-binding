[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TStyleMutable](_awtk_.tstylemutable.md)

# Class: TStyleMutable

可变的style(可实时修改并生效，主要用于在designer中被编辑的控件，或者一些特殊控件)。 style\_mutable也对style\_const进行了包装，当用户没修改某个值时，便从style\_const中获取。

## Hierarchy

* [TStyle](_awtk_.tstyle.md)

  ↳ **TStyleMutable**

## Index

### Constructors

* [constructor](_awtk_.tstylemutable.md#constructor)

### Properties

* [nativeObj](_awtk_.tstylemutable.md#nativeobj)

### Accessors

* [name](_awtk_.tstylemutable.md#name)

### Methods

* [getInt](_awtk_.tstylemutable.md#getint)
* [getStr](_awtk_.tstylemutable.md#getstr)
* [isMutable](_awtk_.tstylemutable.md#ismutable)
* [isValid](_awtk_.tstylemutable.md#isvalid)
* [notifyWidgetStateChanged](_awtk_.tstylemutable.md#notifywidgetstatechanged)
* [set](_awtk_.tstylemutable.md#set)
* [setInt](_awtk_.tstylemutable.md#setint)
* [setName](_awtk_.tstylemutable.md#setname)
* [cast](_awtk_.tstylemutable.md#static-cast)
* [create](_awtk_.tstylemutable.md#static-create)

## Constructors

###  constructor

\+ **new TStyleMutable**(`nativeObj`: any): *[TStyleMutable](_awtk_.tstylemutable.md)*

*Overrides [TStyle](_awtk_.tstyle.md).[constructor](_awtk_.tstyle.md#constructor)*

*Defined in [awtk.ts:15449](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L15449)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TStyleMutable](_awtk_.tstylemutable.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TStyle](_awtk_.tstyle.md).[nativeObj](_awtk_.tstyle.md#nativeobj)*

*Defined in [awtk.ts:15449](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L15449)*

## Accessors

###  name

• **get name**(): *string*

*Defined in [awtk.ts:15516](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L15516)*

名称。

**Returns:** *string*

• **set name**(`v`: string): *void*

*Defined in [awtk.ts:15507](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L15507)*

名称。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

## Methods

###  getInt

▸ **getInt**(`name`: string, `defval`: number): *number*

*Inherited from [TStyle](_awtk_.tstyle.md).[getInt](_awtk_.tstyle.md#getint)*

*Defined in [awtk.ts:5048](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L5048)*

获取指定name的整数格式的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性名。 |
`defval` | number | 缺省值。  |

**Returns:** *number*

返回整数格式的值。

___

###  getStr

▸ **getStr**(`name`: string, `defval`: string): *string*

*Inherited from [TStyle](_awtk_.tstyle.md).[getStr](_awtk_.tstyle.md#getstr)*

*Defined in [awtk.ts:5062](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L5062)*

获取指定name的字符串格式的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性名。 |
`defval` | string | 缺省值。  |

**Returns:** *string*

返回字符串格式的值。

___

###  isMutable

▸ **isMutable**(): *boolean*

*Inherited from [TStyle](_awtk_.tstyle.md).[isMutable](_awtk_.tstyle.md#ismutable)*

*Defined in [awtk.ts:5089](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L5089)*

检查style是否是mutable的。

**Returns:** *boolean*

返回TRUE表示是，否则表示不是。

___

###  isValid

▸ **isValid**(): *boolean*

*Inherited from [TStyle](_awtk_.tstyle.md).[isValid](_awtk_.tstyle.md#isvalid)*

*Defined in [awtk.ts:5034](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L5034)*

检查style对象是否有效

**Returns:** *boolean*

返回是否有效。

___

###  notifyWidgetStateChanged

▸ **notifyWidgetStateChanged**(`widget`: [TWidget](_awtk_.twidget.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TStyle](_awtk_.tstyle.md).[notifyWidgetStateChanged](_awtk_.tstyle.md#notifywidgetstatechanged)*

*Defined in [awtk.ts:5022](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L5022)*

widget状态改变时，通知style更新数据。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`widget` | [TWidget](_awtk_.twidget.md) | 控件对象。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  set

▸ **set**(`state`: string, `name`: string, `value`: [TValue](_awtk_.tvalue.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TStyle](_awtk_.tstyle.md).[set](_awtk_.tstyle.md#set)*

*Defined in [awtk.ts:5077](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L5077)*

设置指定状态的指定属性的值(仅仅对mutable的style有效)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`state` | string | 状态。 |
`name` | string | 属性名。 |
`value` | [TValue](_awtk_.tvalue.md) | 值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setInt

▸ **setInt**(`state`: string, `name`: string, `val`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:15478](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L15478)*

设置指定名称整数格式的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`state` | string | 控件状态。 |
`name` | string | 属性名。 |
`val` | number | 值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setName

▸ **setName**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:15463](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L15463)*

设置style的名称。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`s`: [TStyle](_awtk_.tstyle.md)): *[TStyleMutable](_awtk_.tstylemutable.md)*

*Defined in [awtk.ts:15490](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L15490)*

转换为style_mutable对象。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`s` | [TStyle](_awtk_.tstyle.md) | style对象。  |

**Returns:** *[TStyleMutable](_awtk_.tstylemutable.md)*

style对象。

___

### `Static` create

▸ **create**(`widget`: [TWidget](_awtk_.twidget.md), `default_style`: [TStyle](_awtk_.tstyle.md)): *[TStyle](_awtk_.tstyle.md)*

*Defined in [awtk.ts:15503](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L15503)*

创建style\_mutable对象。 除了测试程序外不需要直接调用，widget会通过style\_factory\_create创建。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`widget` | [TWidget](_awtk_.twidget.md) | 控件 |
`default_style` | [TStyle](_awtk_.tstyle.md) | 缺省的style。  |

**Returns:** *[TStyle](_awtk_.tstyle.md)*

style对象。
