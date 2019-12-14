[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TGlobal](_awtk_.tglobal.md)

# Class: TGlobal

TK全局对象。

## Hierarchy

* **TGlobal**

## Index

### Methods

* [getPointerX](_awtk_.tglobal.md#static-getpointerx)
* [getPointerY](_awtk_.tglobal.md#static-getpointery)
* [isPointerPressed](_awtk_.tglobal.md#static-ispointerpressed)
* [quit](_awtk_.tglobal.md#static-quit)

## Methods

### `Static` getPointerX

▸ **getPointerX**(): *number*

*Defined in [awtk.ts:3014](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L3014)*

获取全局指针的X坐标。

**Returns:** *number*

返回全局指针的X坐标。

___

### `Static` getPointerY

▸ **getPointerY**(): *number*

*Defined in [awtk.ts:3025](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L3025)*

获取全局指针的Y坐标。

**Returns:** *number*

返回全局指针的X坐标。

___

### `Static` isPointerPressed

▸ **isPointerPressed**(): *boolean*

*Defined in [awtk.ts:3036](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L3036)*

获取全局指针是否按下。

**Returns:** *boolean*

返回全局指针是否按下。

___

### `Static` quit

▸ **quit**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:3003](https://github.com/zlgopen/awtk-binding/blob/2f56731/tools/code_gen/js/output/awtk.ts#L3003)*

退出TK事件主循环。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。
