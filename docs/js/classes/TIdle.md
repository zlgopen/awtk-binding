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

[awtk.ts:5958](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5958)

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

[awtk.ts:5970](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5970)
