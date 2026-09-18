[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TTimer

# Class: TTimer

Defined in: [awtk.ts:7907](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7907)

定时器系统。

> 本定时器精度较低，最高精度为1000/FPS，如果需要高精度的定时器，请用OS提供的定时器。

示例：

> 在非GUI线程请用timer\_queue。

## Constructors

### Constructor

> **new TTimer**(): `TTimer`

#### Returns

`TTimer`

## Methods

### add()

> `static` **add**(`on_timer`, `ctx`, `duration`): `number`

Defined in: [awtk.ts:7918](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7918)

增加一个timer。

#### Parameters

##### on\_timer

`Function`

timer回调函数。

##### ctx

`any`

timer回调函数的上下文。

##### duration

`number`

时间(毫秒)。

#### Returns

`number`

返回timer的ID，TK_INVALID_ID表示失败。

***

### modify()

> `static` **modify**(`timer_id`, `duration`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7979](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7979)

修改指定的timer的duration，修改之后定时器重新开始计时。

#### Parameters

##### timer\_id

`number`

timerID。

##### duration

`number`

新的时间(毫秒)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### modifyEx()

> `static` **modifyEx**(`timer_id`, `duration`, `reset_timer`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7993](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7993)

修改指定的timer的duration，修改之后定时器重新开始计时。

#### Parameters

##### timer\_id

`number`

timerID。

##### duration

`number`

新的时间(毫秒)。

##### reset\_timer

`boolean`

修改后是否重新计时。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### remove()

> `static` **remove**(`timer_id`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7930](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7930)

删除指定的timer。

#### Parameters

##### timer\_id

`number`

timerID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### reset()

> `static` **reset**(`timer_id`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7942](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7942)

重置指定的timer，重置之后定时器重新开始计时。

#### Parameters

##### timer\_id

`number`

timerID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### resume()

> `static` **resume**(`timer_id`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7966](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7966)

唤醒挂起指定的timer，并且重置定时器重新开始计时

#### Parameters

##### timer\_id

`number`

timerID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### suspend()

> `static` **suspend**(`timer_id`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7954](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7954)

挂起指定的timer，一般用于不断循环触发的计时器。

#### Parameters

##### timer\_id

`number`

timerID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。
