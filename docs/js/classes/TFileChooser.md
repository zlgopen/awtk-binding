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

[awtk.ts:16585](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L16585)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TEmitter](TEmitter.md).[nativeObj](TEmitter.md#nativeobj)

#### Defined in

[awtk.ts:16584](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L16584)

## Methods

### chooseFileForOpen

▸ **chooseFileForOpen**(): [`TRet`](../enums/TRet.md)

为了打开而选择文件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16667](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L16667)

___

### chooseFileForSave

▸ **chooseFileForSave**(): [`TRet`](../enums/TRet.md)

为了保存而选择文件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16656](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L16656)

___

### chooseFolder

▸ **chooseFolder**(): [`TRet`](../enums/TRet.md)

选择目录。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16678](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L16678)

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

[awtk.ts:2334](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2334)

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

[awtk.ts:2323](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2323)

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

[awtk.ts:2259](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2259)

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

[awtk.ts:2273](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2273)

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

[awtk.ts:2310](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2310)

___

### getDir

▸ **getDir**(): `string`

获取目录。

#### Returns

`string`

返回选择的目录。

#### Defined in

[awtk.ts:16689](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L16689)

___

### getFilename

▸ **getFilename**(): `string`

获取文件名。

#### Returns

`string`

返回选择的文件名。

#### Defined in

[awtk.ts:16700](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L16700)

___

### isAborted

▸ **isAborted**(): `boolean`

用户是否取消了选择。

#### Returns

`boolean`

返回用户是否取消了选择。

#### Defined in

[awtk.ts:16711](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L16711)

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

[awtk.ts:2299](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2299)

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

[awtk.ts:2287](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L2287)

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

[awtk.ts:16633](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L16633)

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

[awtk.ts:16608](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L16608)

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

[awtk.ts:16620](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L16620)

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

[awtk.ts:16645](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L16645)

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

[awtk.ts:16596](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L16596)
