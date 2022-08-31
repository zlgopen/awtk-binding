[AWTK](../README.md) / [Exports](../modules.md) / TTimeNow

# Class: TTimeNow

获取当前时间的函数。
这里的当前时间是相对的，在嵌入式系统一般相对于开机时间。
它本身并没有任何意义，一般用来计算时间间隔，如实现定时器和动画等等。

## Table of contents

### Constructors

- [constructor](TTimeNow.md#constructor)

### Methods

- [ms](TTimeNow.md#ms)
- [s](TTimeNow.md#s)
- [us](TTimeNow.md#us)

## Constructors

### constructor

• **new TTimeNow**()

## Methods

### ms

▸ `Static` **ms**(): `number`

获取当前时间(毫秒)。

备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。

#### Returns

`number`

返回当前时间(毫秒)。

#### Defined in

[awtk.ts:13973](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L13973)

___

### s

▸ `Static` **s**(): `number`

获取当前时间(秒)。

备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。

#### Returns

`number`

返回当前时间(秒)。

#### Defined in

[awtk.ts:13960](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L13960)

___

### us

▸ `Static` **us**(): `number`

获取当前时间(微秒)。

备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。

#### Returns

`number`

返回当前时间(微秒)。

#### Defined in

[awtk.ts:13986](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L13986)
