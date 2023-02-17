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

[awtk.ts:16907](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L16907)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TEmitter](TEmitter.md).[nativeObj](TEmitter.md#nativeobj)

#### Defined in

[awtk.ts:16906](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L16906)

## Methods

### chooseFileForOpen

▸ **chooseFileForOpen**(): [`TRet`](../enums/TRet.md)

为了打开而选择文件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16989](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L16989)

___

### chooseFileForSave

▸ **chooseFileForSave**(): [`TRet`](../enums/TRet.md)

为了保存而选择文件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16978](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L16978)

___

### chooseFolder

▸ **chooseFolder**(): [`TRet`](../enums/TRet.md)

选择目录。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:17000](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L17000)

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

[awtk.ts:2392](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2392)

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

[awtk.ts:2381](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2381)

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

[awtk.ts:2317](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2317)

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

[awtk.ts:2331](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2331)

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

[awtk.ts:2368](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2368)

___

### getDir

▸ **getDir**(): `string`

获取目录。

#### Returns

`string`

返回选择的目录。

#### Defined in

[awtk.ts:17011](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L17011)

___

### getFilename

▸ **getFilename**(): `string`

获取文件名。

#### Returns

`string`

返回选择的文件名。

#### Defined in

[awtk.ts:17022](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L17022)

___

### isAborted

▸ **isAborted**(): `boolean`

用户是否取消了选择。

#### Returns

`boolean`

返回用户是否取消了选择。

#### Defined in

[awtk.ts:17033](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L17033)

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

[awtk.ts:2357](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2357)

___

### on

▸ **on**(`etype`, `handler`, `ctx`): `number`

注册指定事件的处理函数。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `etype` | `number` | 事件类型。 |
| `handler` | `Function` | 事件处理函数。 |
| `ctx` | `any` | 事件处理函数上下文。 |

#### Returns

`number`

返回id，用于emitter_off。

#### Inherited from

[TEmitter](TEmitter.md).[on](TEmitter.md#on)

#### Defined in

[awtk.ts:2345](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L2345)

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

[awtk.ts:16955](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L16955)

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

[awtk.ts:16930](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L16930)

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

[awtk.ts:16942](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L16942)

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

[awtk.ts:16967](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L16967)

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

[awtk.ts:16918](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L16918)
