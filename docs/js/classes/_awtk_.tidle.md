[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TIdle](_awtk_.tidle.md)

# Class: TIdle

idle可以看作是duration为0的定时器。

idle可以用来实现一些异步处理。

示例：

在非GUI线程请用idle\_queue。

## Hierarchy

* **TIdle**

## Index

### Methods

* [add](_awtk_.tidle.md#static-add)
* [remove](_awtk_.tidle.md#static-remove)

## Methods

### `Static` add

▸ **add**(`on_idle`: Function, `ctx`: any): *number*

*Defined in [awtk.ts:3584](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L3584)*

增加一个idle。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`on_idle` | Function | idle回调函数，回调函数返回RET_REPEAT，则下次继续执行，否则自动移出。 |
`ctx` | any | idle回调函数的上下文。  |

**Returns:** *number*

返回idle的ID，0表示失败。

___

### `Static` remove

▸ **remove**(`idle_id`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:3596](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L3596)*

删除指定的idle。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`idle_id` | number | idleID。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。
