[AWTK](../README.md) / [Exports](../modules.md) / TFontManager

# Class: TFontManager

字体管理器，负责字体的加载和缓存管理。
(如果使用nanovg，字体由nanovg内部管理)

## Hierarchy

- [`TEmitter`](TEmitter.md)

  ↳ **`TFontManager`**

## Table of contents

### Constructors

- [constructor](TFontManager.md#constructor)

### Properties

- [nativeObj](TFontManager.md#nativeobj)

### Methods

- [destroy](TFontManager.md#destroy)
- [disable](TFontManager.md#disable)
- [dispatch](TFontManager.md#dispatch)
- [dispatchSimpleEvent](TFontManager.md#dispatchsimpleevent)
- [enable](TFontManager.md#enable)
- [off](TFontManager.md#off)
- [on](TFontManager.md#on)
- [shrinkCache](TFontManager.md#shrinkcache)
- [unloadAll](TFontManager.md#unloadall)
- [unloadFont](TFontManager.md#unloadfont)
- [cast](TFontManager.md#cast)
- [create](TFontManager.md#create)

## Constructors

### constructor

• **new TFontManager**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TEmitter](TEmitter.md).[constructor](TEmitter.md#constructor)

#### Defined in

[awtk.ts:15218](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15218)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TEmitter](TEmitter.md).[nativeObj](TEmitter.md#nativeobj)

#### Defined in

[awtk.ts:15217](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15217)

## Methods

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEmitter](TEmitter.md).[destroy](TEmitter.md#destroy)

#### Defined in

[awtk.ts:2389](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L2389)

___

### disable

▸ **disable**(): [`TRet`](../enums/TRet.md)

禁用。

禁用后emitter_dispatch无效，但可以注册和注销。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEmitter](TEmitter.md).[disable](TEmitter.md#disable)

#### Defined in

[awtk.ts:2378](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L2378)

___

### dispatch

▸ **dispatch**(`e`): [`TRet`](../enums/TRet.md)

分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
禁用状态下，本函数不做任何事情。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `e` | [`TEvent`](TEvent.md) | 事件对象。 |

#### Returns

[`TRet`](../enums/TRet.md)

如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Inherited from

[TEmitter](TEmitter.md).[dispatch](TEmitter.md#dispatch)

#### Defined in

[awtk.ts:2314](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L2314)

___

### dispatchSimpleEvent

▸ **dispatchSimpleEvent**(`type`): [`TRet`](../enums/TRet.md)

分发事件。
> 对emitter_dispatch的包装，分发一个简单的事件。
如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `type` | `number` | 事件类型。 |

#### Returns

[`TRet`](../enums/TRet.md)

#### Inherited from

[TEmitter](TEmitter.md).[dispatchSimpleEvent](TEmitter.md#dispatchsimpleevent)

#### Defined in

[awtk.ts:2328](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L2328)

___

### enable

▸ **enable**(): [`TRet`](../enums/TRet.md)

启用。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEmitter](TEmitter.md).[enable](TEmitter.md#enable)

#### Defined in

[awtk.ts:2365](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L2365)

___

### off

▸ **off**(`id`): [`TRet`](../enums/TRet.md)

注销指定事件的处理函数。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `id` | `number` | emitter_on返回的ID。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEmitter](TEmitter.md).[off](TEmitter.md#off)

#### Defined in

[awtk.ts:2354](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L2354)

___

### on

▸ **on**(`etype`, `handler`, `ctx`): `number`

注册指定事件的处理函数。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `etype` | [`TEventType`](../enums/TEventType.md) | 事件类型。 |
| `handler` | `Function` | 事件处理函数。 |
| `ctx` | `any` | 事件处理函数上下文。 |

#### Returns

`number`

返回id，用于emitter_off。

#### Inherited from

[TEmitter](TEmitter.md).[on](TEmitter.md#on)

#### Defined in

[awtk.ts:2342](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L2342)

___

### shrinkCache

▸ **shrinkCache**(`cache_size`): [`TRet`](../enums/TRet.md)

清除最久没有被使用的缓冲字模。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `cache_size` | `number` | 每种字体保留缓存字模的个数。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:15243](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15243)

___

### unloadAll

▸ **unloadAll**(): [`TRet`](../enums/TRet.md)

卸载全部字体。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:15254](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15254)

___

### unloadFont

▸ **unloadFont**(`name`, `size`): [`TRet`](../enums/TRet.md)

卸载指定的字体。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 字体名，为NULL时使用缺省字体。 |
| `size` | `number` | 字体的大小(矢量字体指定为0即可)。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:15231](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15231)

___

### cast

▸ `Static` **cast**(`emitter`): [`TEmitter`](TEmitter.md)

转换为emitter对象(供脚本语言使用)。

主要给脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `emitter` | [`TEmitter`](TEmitter.md) | emitter对象。 |

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[TEmitter](TEmitter.md).[cast](TEmitter.md#cast)

#### Defined in

[awtk.ts:2403](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L2403)

___

### create

▸ `Static` **create**(): [`TEmitter`](TEmitter.md)

创建emitter对象。

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[TEmitter](TEmitter.md).[create](TEmitter.md#create)

#### Defined in

[awtk.ts:2301](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L2301)
