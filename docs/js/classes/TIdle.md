[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TIdle

# Class: TIdle

Defined in: [awtk.ts:6050](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6050)

idle可以看作是duration为0的定时器。

> idle可以用来实现一些异步处理。

示例：

> 在非GUI线程请用idle\_queue。

## Constructors

### Constructor

> **new TIdle**(): `TIdle`

#### Returns

`TIdle`

## Methods

### add()

> `static` **add**(`on_idle`, `ctx`): `number`

Defined in: [awtk.ts:6060](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6060)

增加一个idle。

#### Parameters

##### on\_idle

`Function`

idle回调函数，回调函数返回RET_REPEAT，则下次继续执行，否则自动移出。

##### ctx

`any`

idle回调函数的上下文。

#### Returns

`number`

返回idle的ID，0表示失败。

***

### remove()

> `static` **remove**(`idle_id`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:6072](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6072)

删除指定的idle。

#### Parameters

##### idle\_id

`number`

idleID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。
