[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TFileChooser

# Class: TFileChooser

文件/目录选择器

## Extends

- [`TEmitter`](TEmitter.md)

## Constructors

### new TFileChooser()

> **new TFileChooser**(`nativeObj`): [`TFileChooser`](TFileChooser.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TFileChooser`](TFileChooser.md)

#### Overrides

[`TEmitter`](TEmitter.md).[`constructor`](TEmitter.md#constructors)

#### Defined in

[awtk.ts:17883](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L17883)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TEmitter`](TEmitter.md).[`nativeObj`](TEmitter.md#nativeobj)

#### Defined in

[awtk.ts:17882](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L17882)

## Methods

### chooseFileForOpen()

> **chooseFileForOpen**(): [`TRet`](../enumerations/TRet.md)

为了打开而选择文件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:17965](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L17965)

***

### chooseFileForSave()

> **chooseFileForSave**(): [`TRet`](../enumerations/TRet.md)

为了保存而选择文件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:17954](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L17954)

***

### chooseFolder()

> **chooseFolder**(): [`TRet`](../enumerations/TRet.md)

选择目录。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:17976](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L17976)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`destroy`](TEmitter.md#destroy)

#### Defined in

[awtk.ts:2545](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2545)

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

[awtk.ts:2534](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2534)

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

[awtk.ts:2470](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2470)

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

[awtk.ts:2484](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2484)

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

[awtk.ts:2521](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2521)

***

### getDir()

> **getDir**(): `string`

获取目录。

#### Returns

`string`

返回选择的目录。

#### Defined in

[awtk.ts:17987](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L17987)

***

### getFilename()

> **getFilename**(): `string`

获取文件名。

#### Returns

`string`

返回选择的文件名。

#### Defined in

[awtk.ts:17998](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L17998)

***

### isAborted()

> **isAborted**(): `boolean`

用户是否取消了选择。

#### Returns

`boolean`

返回用户是否取消了选择。

#### Defined in

[awtk.ts:18009](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L18009)

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

[awtk.ts:2510](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2510)

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

[awtk.ts:2498](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2498)

***

### setFilter()

> **setFilter**(`filter`): [`TRet`](../enumerations/TRet.md)

设置过滤规则。
> files_only 表示只列出文件，dir_only 表示只列出目录，其它表示只列出满足扩展名文件集合(如：.jpg.png.gif)。

#### Parameters

• **filter**: `string`

过滤规则。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:17931](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L17931)

***

### setInitDir()

> **setInitDir**(`init_dir`): [`TRet`](../enumerations/TRet.md)

设置初始目录。

#### Parameters

• **init\_dir**: `string`

初始目录

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:17906](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L17906)

***

### setTopDir()

> **setTopDir**(`top_dir`): [`TRet`](../enumerations/TRet.md)

设置初始目录。

#### Parameters

• **top\_dir**: `string`

初始目录

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:17918](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L17918)

***

### cast()

> `static` **cast**(`chooser`): [`TFileChooser`](TFileChooser.md)

转换为file_chooser对象(供脚本语言使用)。

#### Parameters

• **chooser**: [`TFileChooser`](TFileChooser.md)

file_chooser对象。

#### Returns

[`TFileChooser`](TFileChooser.md)

对象。

#### Overrides

[`TEmitter`](TEmitter.md).[`cast`](TEmitter.md#cast)

#### Defined in

[awtk.ts:17943](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L17943)

***

### create()

> `static` **create**(): [`TFileChooser`](TFileChooser.md)

创建file_chooser对象

#### Returns

[`TFileChooser`](TFileChooser.md)

对象。

#### Overrides

[`TEmitter`](TEmitter.md).[`create`](TEmitter.md#create)

#### Defined in

[awtk.ts:17894](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L17894)
