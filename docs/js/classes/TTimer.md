[AWTK](../README.md) / [Exports](../modules.md) / TTimer

# Class: TTimer

定时器系统。

> 本定时器精度较低，最高精度为1000/FPS，如果需要高精度的定时器，请用OS提供的定时器。

示例：

> 在非GUI线程请用timer\_queue。

## Table of contents

### Constructors

- [constructor](TTimer.md#constructor)

### Methods

- [add](TTimer.md#add)
- [modify](TTimer.md#modify)
- [remove](TTimer.md#remove)
- [removeAllByCtx](TTimer.md#removeallbyctx)
- [reset](TTimer.md#reset)
- [resume](TTimer.md#resume)
- [suspend](TTimer.md#suspend)

## Constructors

### constructor

• **new TTimer**()

## Methods

### add

▸ `Static` **add**(`on_timer`, `ctx`, `duration`): `number`

增加一个timer。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `on_timer` | `Function` | timer回调函数。 |
| `ctx` | `any` | timer回调函数的上下文。 |
| `duration` | `number` | 时间。 |

#### Returns

`number`

返回timer的ID，TK_INVALID_ID表示失败。

#### Defined in

[awtk.ts:7432](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L7432)

___

### modify

▸ `Static` **modify**(`timer_id`, `duration`): [`TRet`](../enums/TRet.md)

修改指定的timer的duration，修改之后定时器重新开始计时。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `timer_id` | `number` | timerID。 |
| `duration` | `number` | 新的时间。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7505](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L7505)

___

### remove

▸ `Static` **remove**(`timer_id`): [`TRet`](../enums/TRet.md)

删除指定的timer。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `timer_id` | `number` | timerID。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7444](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L7444)

___

### removeAllByCtx

▸ `Static` **removeAllByCtx**(`ctx`): [`TRet`](../enums/TRet.md)

根据上下文删除所有对应的timer。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `ctx` | `any` | timer回调函数的上下文。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7456](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L7456)

___

### reset

▸ `Static` **reset**(`timer_id`): [`TRet`](../enums/TRet.md)

重置指定的timer，重置之后定时器重新开始计时。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `timer_id` | `number` | timerID。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7468](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L7468)

___

### resume

▸ `Static` **resume**(`timer_id`): [`TRet`](../enums/TRet.md)

唤醒挂起指定的timer，并且重置定时器重新开始计时

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `timer_id` | `number` | timerID。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7492](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L7492)

___

### suspend

▸ `Static` **suspend**(`timer_id`): [`TRet`](../enums/TRet.md)

挂起指定的timer，一般用于不断循环触发的计时器。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `timer_id` | `number` | timerID。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7480](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L7480)
