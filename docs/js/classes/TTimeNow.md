[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TTimeNow

# Class: TTimeNow

获取当前时间的函数。
这里的当前时间是相对的，在嵌入式系统一般相对于开机时间(毫秒)。
它本身并没有任何意义，一般用来计算时间间隔，如实现定时器和动画等等。

## Constructors

### new TTimeNow()

> **new TTimeNow**(): [`TTimeNow`](TTimeNow.md)

#### Returns

[`TTimeNow`](TTimeNow.md)

## Methods

### ms()

> `static` **ms**(): `number`

获取当前时间(毫秒)。

备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。

#### Returns

`number`

返回当前时间(毫秒)。

#### Defined in

[awtk.ts:14796](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L14796)

***

### s()

> `static` **s**(): `number`

获取当前时间(秒)。

备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。

#### Returns

`number`

返回当前时间(秒)。

#### Defined in

[awtk.ts:14783](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L14783)

***

### us()

> `static` **us**(): `number`

获取当前时间(微秒)。

备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。

#### Returns

`number`

返回当前时间(微秒)。

#### Defined in

[awtk.ts:14809](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L14809)
