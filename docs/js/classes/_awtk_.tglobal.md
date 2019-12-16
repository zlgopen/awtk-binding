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
* [tkInit](_awtk_.tglobal.md#static-tkinit)
* [tkRun](_awtk_.tglobal.md#static-tkrun)

## Methods

### `Static` getPointerX

▸ **getPointerX**(): *number*

*Defined in [awtk.ts:2996](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L2996)*

获取全局指针的X坐标。

**Returns:** *number*

返回全局指针的X坐标。

___

### `Static` getPointerY

▸ **getPointerY**(): *number*

*Defined in [awtk.ts:3007](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L3007)*

获取全局指针的Y坐标。

**Returns:** *number*

返回全局指针的X坐标。

___

### `Static` isPointerPressed

▸ **isPointerPressed**(): *boolean*

*Defined in [awtk.ts:3018](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L3018)*

获取全局指针是否按下。

**Returns:** *boolean*

返回全局指针是否按下。

___

### `Static` quit

▸ **quit**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2985](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L2985)*

退出TK事件主循环。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` tkInit

▸ **tkInit**(`w`: number, `h`: number, `app_type`: [TAppType](../enums/_awtk_.tapptype.md), `app_name`: string, `app_root`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2963](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L2963)*

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

### `Static` tkRun

▸ **tkRun**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2974](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L2974)*

进入TK事件主循环。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。
