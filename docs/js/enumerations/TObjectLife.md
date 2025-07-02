[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TObjectLife

# Enumeration: TObjectLife

对象生命周期的定义。如果需要保存对象的实例，如何决定对象的生命周期。

## Enumeration Members

### HOLD

> **HOLD**: `number`

持有对象的生命周期。当前上下文开始时，增加对象的引用计数。当前上下文结束时，自动减少(unref)对象引用计数。

#### Defined in

[awtk.ts:14719](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L14719)

***

### NONE

> **NONE**: `number`

不关心对象的生命周期(假设对象的生命周期长于当前的上下文)。

#### Defined in

[awtk.ts:14707](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L14707)

***

### OWN

> **OWN**: `number`

拥有对象的生命周期。当前上下文开始时，*不会* 增加对象的引用计数。当前上下文结束时，自动减少(unref)对象引用计数。

#### Defined in

[awtk.ts:14713](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L14713)
