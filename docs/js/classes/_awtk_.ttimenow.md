[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TTimeNow](_awtk_.ttimenow.md)

# Class: TTimeNow

获取当前时间的函数。
这里的当前时间是相对的，在嵌入式系统一般相对于开机时间。
它本身并没有任何意义，一般用来计算时间间隔，如实现定时器和动画等等。

## Hierarchy

* **TTimeNow**

## Index

### Constructors

* [constructor](_awtk_.ttimenow.md#constructor)

### Properties

* [nativeObj](_awtk_.ttimenow.md#nativeobj)

### Methods

* [ms](_awtk_.ttimenow.md#static-ms)
* [s](_awtk_.ttimenow.md#static-s)

## Constructors

###  constructor

\+ **new TTimeNow**(`nativeObj`: any): *[TTimeNow](_awtk_.ttimenow.md)*

*Defined in [awtk.ts:9352](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L9352)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TTimeNow](_awtk_.ttimenow.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:9352](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L9352)*

## Methods

### `Static` ms

▸ **ms**(): *number*

*Defined in [awtk.ts:9377](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L9377)*

获取当前时间(毫秒)。

**Returns:** *number*

返回当前时间(毫秒)。

___

### `Static` s

▸ **s**(): *number*

*Defined in [awtk.ts:9365](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L9365)*

获取当前时间(秒)。

**Returns:** *number*

返回当前时间(秒)。
