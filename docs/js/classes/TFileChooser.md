[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TFileChooser

# Class: TFileChooser

Defined in: [awtk.ts:18331](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L18331)

文件/目录选择器

## Extends

- [`TEmitter`](TEmitter.md)

## Constructors

### Constructor

> **new TFileChooser**(`nativeObj`): `TFileChooser`

Defined in: [awtk.ts:18333](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L18333)

#### Parameters

##### nativeObj

`any`

#### Returns

`TFileChooser`

#### Overrides

[`TEmitter`](TEmitter.md).[`constructor`](TEmitter.md#constructor)

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:18332](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L18332)

#### Overrides

[`TEmitter`](TEmitter.md).[`nativeObj`](TEmitter.md#nativeobj)

## Methods

### chooseFileForOpen()

> **chooseFileForOpen**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:18415](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L18415)

为了打开而选择文件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### chooseFileForSave()

> **chooseFileForSave**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:18404](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L18404)

为了保存而选择文件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### chooseFolder()

> **chooseFolder**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:18426](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L18426)

选择目录。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2620](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2620)

销毁。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`destroy`](TEmitter.md#destroy)

***

### disable()

> **disable**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2609](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2609)

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

#### Inherited from

[`TEmitter`](TEmitter.md).[`dispatch`](TEmitter.md#dispatch)

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

#### Inherited from

[`TEmitter`](TEmitter.md).[`dispatchSimpleEvent`](TEmitter.md#dispatchsimpleevent)

***

### enable()

> **enable**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2596](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2596)

启用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`enable`](TEmitter.md#enable)

***

### getDir()

> **getDir**(): `string`

Defined in: [awtk.ts:18437](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L18437)

获取目录。

#### Returns

`string`

返回选择的目录。

***

### getFilename()

> **getFilename**(): `string`

Defined in: [awtk.ts:18448](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L18448)

获取文件名。

#### Returns

`string`

返回选择的文件名。

***

### isAborted()

> **isAborted**(): `boolean`

Defined in: [awtk.ts:18459](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L18459)

用户是否取消了选择。

#### Returns

`boolean`

返回用户是否取消了选择。

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

#### Inherited from

[`TEmitter`](TEmitter.md).[`off`](TEmitter.md#off)

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

#### Inherited from

[`TEmitter`](TEmitter.md).[`on`](TEmitter.md#on)

***

### setFilter()

> **setFilter**(`filter`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:18381](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L18381)

设置过滤规则。
> files_only 表示只列出文件，dir_only 表示只列出目录，其它表示只列出满足扩展名文件集合(如：.jpg.png.gif)。

#### Parameters

##### filter

`string`

过滤规则。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setInitDir()

> **setInitDir**(`init_dir`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:18356](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L18356)

设置初始目录。

#### Parameters

##### init\_dir

`string`

初始目录

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setTopDir()

> **setTopDir**(`top_dir`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:18368](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L18368)

设置初始目录。

#### Parameters

##### top\_dir

`string`

初始目录

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### cast()

> `static` **cast**(`chooser`): `TFileChooser`

Defined in: [awtk.ts:18393](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L18393)

转换为file_chooser对象(供脚本语言使用)。

#### Parameters

##### chooser

`TFileChooser`

file_chooser对象。

#### Returns

`TFileChooser`

对象。

#### Overrides

[`TEmitter`](TEmitter.md).[`cast`](TEmitter.md#cast)

***

### create()

> `static` **create**(): `TFileChooser`

Defined in: [awtk.ts:18344](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L18344)

创建file_chooser对象

#### Returns

`TFileChooser`

对象。

#### Overrides

[`TEmitter`](TEmitter.md).[`create`](TEmitter.md#create)
