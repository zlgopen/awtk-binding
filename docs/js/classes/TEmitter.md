[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TEmitter

# Class: TEmitter

Defined in: [awtk.ts:2519](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2519)

事件分发器, 用于实现观察者模式。

## Extended by

- [`TObject`](TObject.md)
- [`TAssetsManager`](TAssetsManager.md)
- [`TFontManager`](TFontManager.md)
- [`TFileChooser`](TFileChooser.md)

## Constructors

### Constructor

> **new TEmitter**(`nativeObj`): `TEmitter`

Defined in: [awtk.ts:2521](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2521)

#### Parameters

##### nativeObj

`any`

#### Returns

`TEmitter`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:2520](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2520)

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2620](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2620)

销毁。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### disable()

> **disable**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2609](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2609)

禁用。

禁用后emitter_dispatch无效，但可以注册和注销。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### dispatch()

> **dispatch**(`e`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2545](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2545)

分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
禁用状态下，本函数不做任何事情。

#### Parameters

##### e

[`TEvent`](TEvent.md)

事件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

***

### dispatchSimpleEvent()

> **dispatchSimpleEvent**(`type`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2559](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2559)

分发事件。
> 对emitter_dispatch的包装，分发一个简单的事件。
如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Parameters

##### type

`number`

事件类型。

#### Returns

[`TRet`](../enumerations/TRet.md)

***

### enable()

> **enable**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2596](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2596)

启用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### off()

> **off**(`id`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2585](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2585)

注销指定事件的处理函数。

#### Parameters

##### id

`number`

emitter_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### on()

> **on**(`etype`, `handler`, `ctx`): `number`

Defined in: [awtk.ts:2573](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2573)

注册指定事件的处理函数。

#### Parameters

##### etype

`number`

事件类型。

##### handler

`Function`

事件处理函数。

##### ctx

`any`

事件处理函数上下文。

#### Returns

`number`

返回id，用于emitter_off。

***

### cast()

> `static` **cast**(`emitter`): `TEmitter`

Defined in: [awtk.ts:2634](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2634)

转换为emitter对象(供脚本语言使用)。

主要给脚本语言使用。

#### Parameters

##### emitter

`TEmitter`

emitter对象。

#### Returns

`TEmitter`

对象。

***

### create()

> `static` **create**(): `TEmitter`

Defined in: [awtk.ts:2532](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2532)

创建emitter对象。

#### Returns

`TEmitter`

对象。
