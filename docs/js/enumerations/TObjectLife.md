[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TObjectLife

# Enumeration: TObjectLife

Defined in: [awtk.ts:15025](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L15025)

对象生命周期的定义。如果需要保存对象的实例，如何决定对象的生命周期。

## Enumeration Members

### HOLD

> **HOLD**: `number`

Defined in: [awtk.ts:15043](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L15043)

持有对象的生命周期。当前上下文开始时，增加对象的引用计数。当前上下文结束时，自动减少(unref)对象引用计数。

***

### NONE

> **NONE**: `number`

Defined in: [awtk.ts:15031](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L15031)

不关心对象的生命周期(假设对象的生命周期长于当前的上下文)。

***

### OWN

> **OWN**: `number`

Defined in: [awtk.ts:15037](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L15037)

拥有对象的生命周期。当前上下文开始时，*不会* 增加对象的引用计数。当前上下文结束时，自动减少(unref)对象引用计数。
