[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TFontManager

# Class: TFontManager

Defined in: [awtk.ts:16546](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16546)

字体管理器，负责字体的加载和缓存管理。
(如果使用nanovg，字体由nanovg内部管理)

## Extends

- [`TEmitter`](TEmitter.md)

## Constructors

### Constructor

> **new TFontManager**(`nativeObj`): `TFontManager`

Defined in: [awtk.ts:16548](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16548)

#### Parameters

##### nativeObj

`any`

#### Returns

`TFontManager`

#### Overrides

[`TEmitter`](TEmitter.md).[`constructor`](TEmitter.md#constructor)

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:16547](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16547)

#### Overrides

[`TEmitter`](TEmitter.md).[`nativeObj`](TEmitter.md#nativeobj)

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2620](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2620)

销毁。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`destroy`](TEmitter.md#destroy)

***

### disable()

> **disable**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2609](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2609)

禁用。

禁用后emitter_dispatch无效，但可以注册和注销。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`disable`](TEmitter.md#disable)

***

### dispatch()

> **dispatch**(`e`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2545](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2545)

分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
禁用状态下，本函数不做任何事情。

#### Parameters

##### e

[`TEvent`](TEvent.md)

事件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Inherited from

[`TEmitter`](TEmitter.md).[`dispatch`](TEmitter.md#dispatch)

***

### dispatchSimpleEvent()

> **dispatchSimpleEvent**(`type`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2559](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2559)

分发事件。
> 对emitter_dispatch的包装，分发一个简单的事件。
如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Parameters

##### type

`number`

事件类型。

#### Returns

[`TRet`](../enumerations/TRet.md)

#### Inherited from

[`TEmitter`](TEmitter.md).[`dispatchSimpleEvent`](TEmitter.md#dispatchsimpleevent)

***

### enable()

> **enable**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2596](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2596)

启用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`enable`](TEmitter.md#enable)

***

### getStandardFontSize()

> **getStandardFontSize**(): `boolean`

Defined in: [awtk.ts:16571](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16571)

获取是否使用标准字号

#### Returns

`boolean`

返回TRUE表示使用标准字号，否则表示不是。

***

### off()

> **off**(`id`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2585](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2585)

注销指定事件的处理函数。

#### Parameters

##### id

`number`

emitter_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`off`](TEmitter.md#off)

***

### on()

> **on**(`etype`, `handler`, `ctx`): `number`

Defined in: [awtk.ts:2573](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2573)

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

#### Inherited from

[`TEmitter`](TEmitter.md).[`on`](TEmitter.md#on)

***

### setStandardFontSize()

> **setStandardFontSize**(`is_standard`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:16560](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16560)

设置是否使用标准字号

#### Parameters

##### is\_standard

`boolean`

是否使用标准字号

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### shrinkCache()

> **shrinkCache**(`cache_size`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:16596](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16596)

清除最久没有被使用的缓冲字模。

#### Parameters

##### cache\_size

`number`

每种字体保留缓存字模的个数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### unloadAll()

> **unloadAll**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:16607](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16607)

卸载全部字体。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### unloadFont()

> **unloadFont**(`name`, `size`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:16584](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16584)

卸载指定的字体。

#### Parameters

##### name

`string`

字体名，为NULL时使用缺省字体。

##### size

`number`

字体的大小(矢量字体指定为0即可)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### cast()

> `static` **cast**(`emitter`): [`TEmitter`](TEmitter.md)

Defined in: [awtk.ts:2634](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2634)

转换为emitter对象(供脚本语言使用)。

主要给脚本语言使用。

#### Parameters

##### emitter

[`TEmitter`](TEmitter.md)

emitter对象。

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[`TEmitter`](TEmitter.md).[`cast`](TEmitter.md#cast)

***

### create()

> `static` **create**(): [`TEmitter`](TEmitter.md)

Defined in: [awtk.ts:2532](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L2532)

创建emitter对象。

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[`TEmitter`](TEmitter.md).[`create`](TEmitter.md#create)
