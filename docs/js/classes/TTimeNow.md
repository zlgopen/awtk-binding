[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TTimeNow

# Class: TTimeNow

Defined in: [awtk.ts:15223](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L15223)

获取当前时间的函数。
这里的当前时间是相对的，在嵌入式系统一般相对于开机时间(毫秒)。
它本身并没有任何意义，一般用来计算时间间隔，如实现定时器和动画等等。

## Constructors

### Constructor

> **new TTimeNow**(): `TTimeNow`

#### Returns

`TTimeNow`

## Methods

### ms()

> `static` **ms**(): `number`

Defined in: [awtk.ts:15246](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L15246)

获取当前时间(毫秒)。

备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。

#### Returns

`number`

返回当前时间(毫秒)。

***

### s()

> `static` **s**(): `number`

Defined in: [awtk.ts:15233](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L15233)

获取当前时间(秒)。

备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。

#### Returns

`number`

返回当前时间(秒)。

***

### us()

> `static` **us**(): `number`

Defined in: [awtk.ts:15259](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L15259)

获取当前时间(微秒)。

备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。

#### Returns

`number`

返回当前时间(微秒)。
