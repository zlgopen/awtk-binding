[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TFontManager

# Class: TFontManager

字体管理器，负责字体的加载和缓存管理。
(如果使用nanovg，字体由nanovg内部管理)

## Extends

- [`TEmitter`](TEmitter.md)

## Constructors

### new TFontManager()

> **new TFontManager**(`nativeObj`): [`TFontManager`](TFontManager.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TFontManager`](TFontManager.md)

#### Overrides

[`TEmitter`](TEmitter.md).[`constructor`](TEmitter.md#constructors)

#### Defined in

[awtk.ts:16027](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L16027)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TEmitter`](TEmitter.md).[`nativeObj`](TEmitter.md#nativeobj)

#### Defined in

[awtk.ts:16026](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L16026)

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`destroy`](TEmitter.md#destroy)

#### Defined in

[awtk.ts:2537](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2537)

***

### disable()

> **disable**(): [`TRet`](../enumerations/TRet.md)

禁用。

禁用后emitter_dispatch无效，但可以注册和注销。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`disable`](TEmitter.md#disable)

#### Defined in

[awtk.ts:2526](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2526)

***

### dispatch()

> **dispatch**(`e`): [`TRet`](../enumerations/TRet.md)

分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
禁用状态下，本函数不做任何事情。

#### Parameters

• **e**: [`TEvent`](TEvent.md)

事件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Inherited from

[`TEmitter`](TEmitter.md).[`dispatch`](TEmitter.md#dispatch)

#### Defined in

[awtk.ts:2462](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2462)

***

### dispatchSimpleEvent()

> **dispatchSimpleEvent**(`type`): [`TRet`](../enumerations/TRet.md)

分发事件。
> 对emitter_dispatch的包装，分发一个简单的事件。
如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Parameters

• **type**: `number`

事件类型。

#### Returns

[`TRet`](../enumerations/TRet.md)

#### Inherited from

[`TEmitter`](TEmitter.md).[`dispatchSimpleEvent`](TEmitter.md#dispatchsimpleevent)

#### Defined in

[awtk.ts:2476](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2476)

***

### enable()

> **enable**(): [`TRet`](../enumerations/TRet.md)

启用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`enable`](TEmitter.md#enable)

#### Defined in

[awtk.ts:2513](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2513)

***

### getStandardFontSize()

> **getStandardFontSize**(): `boolean`

获取是否使用标准字号

#### Returns

`boolean`

返回TRUE表示使用标准字号，否则表示不是。

#### Defined in

[awtk.ts:16050](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L16050)

***

### off()

> **off**(`id`): [`TRet`](../enumerations/TRet.md)

注销指定事件的处理函数。

#### Parameters

• **id**: `number`

emitter_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`off`](TEmitter.md#off)

#### Defined in

[awtk.ts:2502](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2502)

***

### on()

> **on**(`etype`, `handler`, `ctx`): `number`

注册指定事件的处理函数。

#### Parameters

• **etype**: `number`

事件类型。

• **handler**: `Function`

事件处理函数。

• **ctx**: `any`

事件处理函数上下文。

#### Returns

`number`

返回id，用于emitter_off。

#### Inherited from

[`TEmitter`](TEmitter.md).[`on`](TEmitter.md#on)

#### Defined in

[awtk.ts:2490](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2490)

***

### setStandardFontSize()

> **setStandardFontSize**(`is_standard`): [`TRet`](../enumerations/TRet.md)

设置是否使用标准字号

#### Parameters

• **is\_standard**: `boolean`

是否使用标准字号

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16039](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L16039)

***

### shrinkCache()

> **shrinkCache**(`cache_size`): [`TRet`](../enumerations/TRet.md)

清除最久没有被使用的缓冲字模。

#### Parameters

• **cache\_size**: `number`

每种字体保留缓存字模的个数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16075](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L16075)

***

### unloadAll()

> **unloadAll**(): [`TRet`](../enumerations/TRet.md)

卸载全部字体。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16086](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L16086)

***

### unloadFont()

> **unloadFont**(`name`, `size`): [`TRet`](../enumerations/TRet.md)

卸载指定的字体。

#### Parameters

• **name**: `string`

字体名，为NULL时使用缺省字体。

• **size**: `number`

字体的大小(矢量字体指定为0即可)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16063](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L16063)

***

### cast()

> `static` **cast**(`emitter`): [`TEmitter`](TEmitter.md)

转换为emitter对象(供脚本语言使用)。

主要给脚本语言使用。

#### Parameters

• **emitter**: [`TEmitter`](TEmitter.md)

emitter对象。

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[`TEmitter`](TEmitter.md).[`cast`](TEmitter.md#cast)

#### Defined in

[awtk.ts:2551](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2551)

***

### create()

> `static` **create**(): [`TEmitter`](TEmitter.md)

创建emitter对象。

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[`TEmitter`](TEmitter.md).[`create`](TEmitter.md#create)

#### Defined in

[awtk.ts:2449](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2449)
