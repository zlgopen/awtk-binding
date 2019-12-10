[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TStyle](_awtk_.tstyle.md)

# Class: TStyle

控件风格。
widget从style对象中，获取诸如字体、颜色和图片相关的参数，根据这些参数来绘制界面。
属性名称的请参考[style\_id](style_id_t.md)

## Hierarchy

* **TStyle**

  ↳ [TStyleMutable](_awtk_.tstylemutable.md)

## Index

### Constructors

* [constructor](_awtk_.tstyle.md#constructor)

### Properties

* [nativeObj](_awtk_.tstyle.md#nativeobj)

### Methods

* [getInt](_awtk_.tstyle.md#getint)
* [getStr](_awtk_.tstyle.md#getstr)
* [isMutable](_awtk_.tstyle.md#ismutable)
* [isValid](_awtk_.tstyle.md#isvalid)
* [notifyWidgetStateChanged](_awtk_.tstyle.md#notifywidgetstatechanged)
* [set](_awtk_.tstyle.md#set)

## Constructors

###  constructor

\+ **new TStyle**(`nativeObj`: any): *[TStyle](_awtk_.tstyle.md)*

*Defined in [awtk.ts:5173](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5173)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TStyle](_awtk_.tstyle.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:5173](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5173)*

## Methods

###  getInt

▸ **getInt**(`name`: string, `defval`: number): *number*

*Defined in [awtk.ts:5216](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5216)*

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

*Defined in [awtk.ts:5231](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5231)*

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

*Defined in [awtk.ts:5260](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5260)*

检查style是否是mutable的。

**Returns:** *boolean*

返回TRUE表示是，否则表示不是。

___

###  isValid

▸ **isValid**(): *boolean*

*Defined in [awtk.ts:5201](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5201)*

检查style对象是否有效

**Returns:** *boolean*

返回是否有效。

___

###  notifyWidgetStateChanged

▸ **notifyWidgetStateChanged**(`widget`: [TWidget](_awtk_.twidget.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5188](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5188)*

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

*Defined in [awtk.ts:5247](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L5247)*

设置指定状态的指定属性的值(仅仅对mutable的style有效)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`state` | string | 状态。 |
`name` | string | 属性名。 |
`value` | [TValue](_awtk_.tvalue.md) | 值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。
