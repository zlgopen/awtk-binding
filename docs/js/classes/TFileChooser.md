[AWTK](../README.md) / [Exports](../modules.md) / TFileChooser

# Class: TFileChooser

文件/目录选择器

## Hierarchy

- [`TEmitter`](TEmitter.md)

  ↳ **`TFileChooser`**

## Table of contents

### Constructors

- [constructor](TFileChooser.md#constructor)

### Properties

- [nativeObj](TFileChooser.md#nativeobj)

### Methods

- [chooseFileForOpen](TFileChooser.md#choosefileforopen)
- [chooseFileForSave](TFileChooser.md#choosefileforsave)
- [chooseFolder](TFileChooser.md#choosefolder)
- [destroy](TFileChooser.md#destroy)
- [disable](TFileChooser.md#disable)
- [dispatch](TFileChooser.md#dispatch)
- [dispatchSimpleEvent](TFileChooser.md#dispatchsimpleevent)
- [enable](TFileChooser.md#enable)
- [getDir](TFileChooser.md#getdir)
- [getFilename](TFileChooser.md#getfilename)
- [isAborted](TFileChooser.md#isaborted)
- [off](TFileChooser.md#off)
- [on](TFileChooser.md#on)
- [setFilter](TFileChooser.md#setfilter)
- [setInitDir](TFileChooser.md#setinitdir)
- [setTopDir](TFileChooser.md#settopdir)
- [cast](TFileChooser.md#cast)
- [create](TFileChooser.md#create)

## Constructors

### constructor

• **new TFileChooser**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TEmitter](TEmitter.md).[constructor](TEmitter.md#constructor)

#### Defined in

[awtk.ts:16588](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L16588)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TEmitter](TEmitter.md).[nativeObj](TEmitter.md#nativeobj)

#### Defined in

[awtk.ts:16587](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L16587)

## Methods

### chooseFileForOpen

▸ **chooseFileForOpen**(): [`TRet`](../enums/TRet.md)

为了打开而选择文件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16670](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L16670)

___

### chooseFileForSave

▸ **chooseFileForSave**(): [`TRet`](../enums/TRet.md)

为了保存而选择文件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16659](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L16659)

___

### chooseFolder

▸ **chooseFolder**(): [`TRet`](../enums/TRet.md)

选择目录。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16681](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L16681)

___

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEmitter](TEmitter.md).[destroy](TEmitter.md#destroy)

#### Defined in

[awtk.ts:2337](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L2337)

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

[awtk.ts:2326](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L2326)

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

[awtk.ts:2262](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L2262)

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

[awtk.ts:2276](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L2276)

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

[awtk.ts:2313](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L2313)

___

### getDir

▸ **getDir**(): `string`

获取目录。

#### Returns

`string`

返回选择的目录。

#### Defined in

[awtk.ts:16692](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L16692)

___

### getFilename

▸ **getFilename**(): `string`

获取文件名。

#### Returns

`string`

返回选择的文件名。

#### Defined in

[awtk.ts:16703](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L16703)

___

### isAborted

▸ **isAborted**(): `boolean`

用户是否取消了选择。

#### Returns

`boolean`

返回用户是否取消了选择。

#### Defined in

[awtk.ts:16714](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L16714)

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

[awtk.ts:2302](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L2302)

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

[awtk.ts:2290](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L2290)

___

### setFilter

▸ **setFilter**(`filter`): [`TRet`](../enums/TRet.md)

设置过滤规则。
> files_only 表示只列出文件，dir_only 表示只列出目录，其它表示只列出满足扩展名文件集合(如：.jpg.png.gif)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `filter` | `string` | 过滤规则。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16636](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L16636)

___

### setInitDir

▸ **setInitDir**(`init_dir`): [`TRet`](../enums/TRet.md)

设置初始目录。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `init_dir` | `string` | 初始目录 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16611](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L16611)

___

### setTopDir

▸ **setTopDir**(`top_dir`): [`TRet`](../enums/TRet.md)

设置初始目录。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `top_dir` | `string` | 初始目录 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16623](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L16623)

___

### cast

▸ `Static` **cast**(`chooser`): [`TFileChooser`](TFileChooser.md)

转换为file_chooser对象(供脚本语言使用)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `chooser` | [`TFileChooser`](TFileChooser.md) | file_chooser对象。 |

#### Returns

[`TFileChooser`](TFileChooser.md)

对象。

#### Overrides

[TEmitter](TEmitter.md).[cast](TEmitter.md#cast)

#### Defined in

[awtk.ts:16648](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L16648)

___

### create

▸ `Static` **create**(): [`TFileChooser`](TFileChooser.md)

创建file_chooser对象

#### Returns

[`TFileChooser`](TFileChooser.md)

对象。

#### Overrides

[TEmitter](TEmitter.md).[create](TEmitter.md#create)

#### Defined in

[awtk.ts:16599](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L16599)
