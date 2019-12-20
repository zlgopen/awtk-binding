[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TGlobal](_awtk_.tglobal.md)

# Class: TGlobal

TK全局对象。

## Hierarchy

* **TGlobal**

## Index

### Methods

* [getPointerX](_awtk_.tglobal.md#static-getpointerx)
* [getPointerY](_awtk_.tglobal.md#static-getpointery)
* [init](_awtk_.tglobal.md#static-init)
* [isPointerPressed](_awtk_.tglobal.md#static-ispointerpressed)
* [quit](_awtk_.tglobal.md#static-quit)
* [run](_awtk_.tglobal.md#static-run)

## Methods

### `Static` getPointerX

▸ **getPointerX**(): *number*

*Defined in [awtk.ts:2987](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L2987)*

获取全局指针的X坐标。

**Returns:** *number*

返回全局指针的X坐标。

___

### `Static` getPointerY

▸ **getPointerY**(): *number*

*Defined in [awtk.ts:2998](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L2998)*

获取全局指针的Y坐标。

**Returns:** *number*

返回全局指针的X坐标。

___

### `Static` init

▸ **init**(`w`: number, `h`: number, `app_type`: [TAppType](../enums/_awtk_.tapptype.md), `app_name`: string, `app_root`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2954](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L2954)*

初始化TK。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`w` | number | LCD宽度。 |
`h` | number | LCD高度。 |
`app_type` | [TAppType](../enums/_awtk_.tapptype.md) | 应用程序的类型。 |
`app_name` | string | 应用程序的名称(必须为常量字符串)。 |
`app_root` | string | 应用程序的根目录，用于定位资源文件(必须为常量字符串)。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` isPointerPressed

▸ **isPointerPressed**(): *boolean*

*Defined in [awtk.ts:3009](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L3009)*

获取全局指针是否按下。

**Returns:** *boolean*

返回全局指针是否按下。

___

### `Static` quit

▸ **quit**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2976](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L2976)*

退出TK事件主循环。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` run

▸ **run**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2965](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L2965)*

进入TK事件主循环。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。
