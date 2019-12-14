[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TTimer](_awtk_.ttimer.md)

# Class: TTimer

定时器系统。

本定时器精度较低，最高精度为1000/FPS，如果需要高精度的定时器，请用OS提供的定时器。

示例：

在非GUI线程请用timer\_queue。

## Hierarchy

* **TTimer**

## Index

### Methods

* [add](_awtk_.ttimer.md#static-add)
* [modify](_awtk_.ttimer.md#static-modify)
* [remove](_awtk_.ttimer.md#static-remove)
* [reset](_awtk_.ttimer.md#static-reset)

## Methods

### `Static` add

▸ **add**(`on_timer`: Function, `ctx`: any, `duration`: number): *number*

*Defined in [awtk.ts:5115](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L5115)*

增加一个timer。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`on_timer` | Function | timer回调函数。 |
`ctx` | any | timer回调函数的上下文。 |
`duration` | number | 时间。  |

**Returns:** *number*

返回timer的ID，TK_INVALID_ID表示失败。

___

### `Static` modify

▸ **modify**(`timer_id`: number, `duration`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5152](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L5152)*

修改指定的timer的duration，修改之后定时器重新开始计时。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`timer_id` | number | timerID。 |
`duration` | number | 新的时间。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` remove

▸ **remove**(`timer_id`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5127](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L5127)*

删除指定的timer。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`timer_id` | number | timerID。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` reset

▸ **reset**(`timer_id`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:5139](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L5139)*

重置指定的timer，重置之后定时器重新开始计时。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`timer_id` | number | timerID。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。
