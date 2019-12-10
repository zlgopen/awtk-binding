[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TGlobal](_awtk_.tglobal.md)

# Class: TGlobal

TK全局对象。

## Hierarchy

* **TGlobal**

## Index

### Constructors

* [constructor](_awtk_.tglobal.md#constructor)

### Properties

* [nativeObj](_awtk_.tglobal.md#nativeobj)

### Methods

* [getPointerX](_awtk_.tglobal.md#static-getpointerx)
* [getPointerY](_awtk_.tglobal.md#static-getpointery)
* [isPointerPressed](_awtk_.tglobal.md#static-ispointerpressed)
* [quit](_awtk_.tglobal.md#static-quit)

## Constructors

###  constructor

\+ **new TGlobal**(`nativeObj`: any): *[TGlobal](_awtk_.tglobal.md)*

*Defined in [awtk.ts:1618](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L1618)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TGlobal](_awtk_.tglobal.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:1618](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L1618)*

## Methods

### `Static` getPointerX

▸ **getPointerX**(): *number*

*Defined in [awtk.ts:1643](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L1643)*

获取全局指针的X坐标。

**Returns:** *number*

返回全局指针的X坐标。

___

### `Static` getPointerY

▸ **getPointerY**(): *number*

*Defined in [awtk.ts:1655](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L1655)*

获取全局指针的Y坐标。

**Returns:** *number*

返回全局指针的X坐标。

___

### `Static` isPointerPressed

▸ **isPointerPressed**(): *boolean*

*Defined in [awtk.ts:1667](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L1667)*

获取全局指针是否按下。

**Returns:** *boolean*

返回全局指针是否按下。

___

### `Static` quit

▸ **quit**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:1631](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L1631)*

退出TK事件主循环。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。
