[AWTK](../README.md) / [Exports](../modules.md) / TIdle

# Class: TIdle

idle可以看作是duration为0的定时器。

> idle可以用来实现一些异步处理。

示例：

> 在非GUI线程请用idle\_queue。

## Table of contents

### Constructors

- [constructor](TIdle.md#constructor)

### Methods

- [add](TIdle.md#add)
- [remove](TIdle.md#remove)
- [removeAllByCtx](TIdle.md#removeallbyctx)

## Constructors

### constructor

• **new TIdle**()

## Methods

### add

▸ `Static` **add**(`on_idle`, `ctx`): `number`

增加一个idle。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `on_idle` | `Function` | idle回调函数，回调函数返回RET_REPEAT，则下次继续执行，否则自动移出。 |
| `ctx` | `any` | idle回调函数的上下文。 |

#### Returns

`number`

返回idle的ID，0表示失败。

#### Defined in

[awtk.ts:5641](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L5641)

___

### remove

▸ `Static` **remove**(`idle_id`): [`TRet`](../enums/TRet.md)

删除指定的idle。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `idle_id` | `number` | idleID。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5653](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L5653)

___

### removeAllByCtx

▸ `Static` **removeAllByCtx**(`ctx`): [`TRet`](../enums/TRet.md)

根据上下文删除所有对应的idle。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `ctx` | `any` | idle回调函数的上下文 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5665](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L5665)
