[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TDateTime](_awtk_.tdatetime.md)

# Class: TDateTime

日期时间。> 在嵌入式平台中，在系统初始时，需要调用date\_time\_global\_init设置实际获取/设置系统时间的函数。

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

*Defined in [awtk.ts:10248](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L10248)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TDateTime](_awtk_.tdatetime.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:10248](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L10248)*

## Accessors

###  day

• **get day**(): *number*

*Defined in [awtk.ts:10320](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L10320)*

日(1-31)。

**Returns:** *number*

___

###  hour

• **get hour**(): *number*

*Defined in [awtk.ts:10311](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L10311)*

时(0 - 23)。

**Returns:** *number*

___

###  minute

• **get minute**(): *number*

*Defined in [awtk.ts:10302](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L10302)*

分(0 - 59)。

**Returns:** *number*

___

###  month

• **get month**(): *number*

*Defined in [awtk.ts:10338](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L10338)*

月(1-12)。

**Returns:** *number*

___

###  second

• **get second**(): *number*

*Defined in [awtk.ts:10293](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L10293)*

秒(0 - 59)。

**Returns:** *number*

___

###  wday

• **get wday**(): *number*

*Defined in [awtk.ts:10329](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L10329)*

星期几(0-6, Sunday = 0)。

**Returns:** *number*

___

###  year

• **get year**(): *number*

*Defined in [awtk.ts:10347](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L10347)*

年。

**Returns:** *number*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:10284](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L10284)*

销毁date_time对象(一般供脚本语言中使用)。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  set

▸ **set**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:10272](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L10272)*

设置当前时间。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` create

▸ **create**(): *[TDateTime](_awtk_.tdatetime.md)*

*Defined in [awtk.ts:10260](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L10260)*

创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。

**Returns:** *[TDateTime](_awtk_.tdatetime.md)*

返回date_time对象。
