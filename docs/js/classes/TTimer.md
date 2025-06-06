[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TTimer

# Class: TTimer

定时器系统。

> 本定时器精度较低，最高精度为1000/FPS，如果需要高精度的定时器，请用OS提供的定时器。

示例：

> 在非GUI线程请用timer\_queue。

## Constructors

### new TTimer()

> **new TTimer**(): [`TTimer`](TTimer.md)

#### Returns

[`TTimer`](TTimer.md)

## Methods

### add()

> `static` **add**(`on_timer`, `ctx`, `duration`): `number`

增加一个timer。

#### Parameters

• **on\_timer**: `Function`

timer回调函数。

• **ctx**: `any`

timer回调函数的上下文。

• **duration**: `number`

时间(毫秒)。

#### Returns

`number`

返回timer的ID，TK_INVALID_ID表示失败。

#### Defined in

[awtk.ts:7808](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L7808)

***

### modify()

> `static` **modify**(`timer_id`, `duration`): [`TRet`](../enumerations/TRet.md)

修改指定的timer的duration，修改之后定时器重新开始计时。

#### Parameters

• **timer\_id**: `number`

timerID。

• **duration**: `number`

新的时间(毫秒)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7869](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L7869)

***

### remove()

> `static` **remove**(`timer_id`): [`TRet`](../enumerations/TRet.md)

删除指定的timer。

#### Parameters

• **timer\_id**: `number`

timerID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7820](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L7820)

***

### reset()

> `static` **reset**(`timer_id`): [`TRet`](../enumerations/TRet.md)

重置指定的timer，重置之后定时器重新开始计时。

#### Parameters

• **timer\_id**: `number`

timerID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7832](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L7832)

***

### resume()

> `static` **resume**(`timer_id`): [`TRet`](../enumerations/TRet.md)

唤醒挂起指定的timer，并且重置定时器重新开始计时

#### Parameters

• **timer\_id**: `number`

timerID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7856](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L7856)

***

### suspend()

> `static` **suspend**(`timer_id`): [`TRet`](../enumerations/TRet.md)

挂起指定的timer，一般用于不断循环触发的计时器。

#### Parameters

• **timer\_id**: `number`

timerID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7844](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L7844)
