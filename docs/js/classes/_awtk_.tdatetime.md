[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TDateTime](_awtk_.tdatetime.md)

# Class: TDateTime

日期时间。

> 在嵌入式平台中，在系统初始时，需要调用date\_time\_global\_init设置实际获取/设置系统时间的函数。

## Hierarchy

* **TDateTime**

## Index

### Constructors

* [constructor](_awtk_.tdatetime.md#constructor)

### Properties

* [nativeObj](_awtk_.tdatetime.md#nativeobj)

### Accessors

* [day](_awtk_.tdatetime.md#day)
* [hour](_awtk_.tdatetime.md#hour)
* [minute](_awtk_.tdatetime.md#minute)
* [month](_awtk_.tdatetime.md#month)
* [second](_awtk_.tdatetime.md#second)
* [wday](_awtk_.tdatetime.md#wday)
* [year](_awtk_.tdatetime.md#year)

### Methods

* [destroy](_awtk_.tdatetime.md#destroy)
* [set](_awtk_.tdatetime.md#set)
* [create](_awtk_.tdatetime.md#static-create)

## Constructors

###  constructor

\+ **new TDateTime**(`nativeObj`: any): *[TDateTime](_awtk_.tdatetime.md)*

*Defined in [awtk.ts:10262](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10262)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TDateTime](_awtk_.tdatetime.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:10262](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10262)*

## Accessors

###  day

• **get day**(): *number*

*Defined in [awtk.ts:10332](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10332)*

日(1-31)。

**Returns:** *number*

___

###  hour

• **get hour**(): *number*

*Defined in [awtk.ts:10323](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10323)*

时(0 - 23)。

**Returns:** *number*

___

###  minute

• **get minute**(): *number*

*Defined in [awtk.ts:10314](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10314)*

分(0 - 59)。

**Returns:** *number*

___

###  month

• **get month**(): *number*

*Defined in [awtk.ts:10350](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10350)*

月(1-12)。

**Returns:** *number*

___

###  second

• **get second**(): *number*

*Defined in [awtk.ts:10305](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10305)*

秒(0 - 59)。

**Returns:** *number*

___

###  wday

• **get wday**(): *number*

*Defined in [awtk.ts:10341](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10341)*

星期几(0-6, Sunday = 0)。

**Returns:** *number*

___

###  year

• **get year**(): *number*

*Defined in [awtk.ts:10359](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10359)*

年。

**Returns:** *number*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:10296](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10296)*

销毁date_time对象(一般供脚本语言中使用)。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  set

▸ **set**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:10285](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10285)*

设置当前时间。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` create

▸ **create**(): *[TDateTime](_awtk_.tdatetime.md)*

*Defined in [awtk.ts:10274](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10274)*

创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。

**Returns:** *[TDateTime](_awtk_.tdatetime.md)*

返回date_time对象。
