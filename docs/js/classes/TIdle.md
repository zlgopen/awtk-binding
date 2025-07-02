[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TIdle

# Class: TIdle

idle可以看作是duration为0的定时器。

> idle可以用来实现一些异步处理。

示例：

> 在非GUI线程请用idle\_queue。

## Constructors

### new TIdle()

> **new TIdle**(): [`TIdle`](TIdle.md)

#### Returns

[`TIdle`](TIdle.md)

## Methods

### add()

> `static` **add**(`on_idle`, `ctx`): `number`

增加一个idle。

#### Parameters

• **on\_idle**: `Function`

idle回调函数，回调函数返回RET_REPEAT，则下次继续执行，否则自动移出。

• **ctx**: `any`

idle回调函数的上下文。

#### Returns

`number`

返回idle的ID，0表示失败。

#### Defined in

[awtk.ts:5957](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5957)

***

### remove()

> `static` **remove**(`idle_id`): [`TRet`](../enumerations/TRet.md)

删除指定的idle。

#### Parameters

• **idle\_id**: `number`

idleID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5969](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5969)
