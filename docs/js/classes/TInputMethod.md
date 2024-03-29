[AWTK](../README.md) / [Exports](../modules.md) / TInputMethod

# Class: TInputMethod

输入法接口。

常见的实现方式有以下几种：

* 空实现。用于不需要输入法的嵌入式平台。

* 缺省实现。用于需要输入法的嵌入式平台。

* 基于SDL实现的平台原生输入法。用于桌面系统和手机系统。

> 输入类型请参考：[input\_type](input_type_t.md)

## Table of contents

### Constructors

- [constructor](TInputMethod.md#constructor)

### Properties

- [nativeObj](TInputMethod.md#nativeobj)

### Methods

- [commitText](TInputMethod.md#committext)
- [dispatchKey](TInputMethod.md#dispatchkey)
- [dispatchKeys](TInputMethod.md#dispatchkeys)
- [dispatchPreedit](TInputMethod.md#dispatchpreedit)
- [dispatchPreeditAbort](TInputMethod.md#dispatchpreeditabort)
- [dispatchPreeditConfirm](TInputMethod.md#dispatchpreeditconfirm)
- [getLang](TInputMethod.md#getlang)
- [setLang](TInputMethod.md#setlang)
- [instance](TInputMethod.md#instance)

## Constructors

### constructor

• **new TInputMethod**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:5864](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5864)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:5863](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5863)

## Methods

### commitText

▸ **commitText**(`text`): [`TRet`](../enums/TRet.md)

提交输入文本。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `text` | `string` | 文本。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5876](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5876)

___

### dispatchKey

▸ **dispatchKey**(`key`): [`TRet`](../enums/TRet.md)

提交按键。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `key` | `number` | 键值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5916](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5916)

___

### dispatchKeys

▸ **dispatchKeys**(`key`): [`TRet`](../enums/TRet.md)

提交按键。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `key` | `string` | 键值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5928](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5928)

___

### dispatchPreedit

▸ **dispatchPreedit**(): [`TRet`](../enums/TRet.md)

分发进入预编辑状态的事件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5939](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5939)

___

### dispatchPreeditAbort

▸ **dispatchPreeditAbort**(): [`TRet`](../enums/TRet.md)

分发取消预编辑状态的事件(提交预编辑内容，退出预编辑状态)。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5961](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5961)

___

### dispatchPreeditConfirm

▸ **dispatchPreeditConfirm**(): [`TRet`](../enums/TRet.md)

分发确认预编辑状态的事件(提交预编辑内容，退出预编辑状态)。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5950](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5950)

___

### getLang

▸ **getLang**(): `string`

获取语言。

#### Returns

`string`

返回语言。

#### Defined in

[awtk.ts:5904](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5904)

___

### setLang

▸ **setLang**(`lang`): [`TRet`](../enums/TRet.md)

设置语言。

> 有时在同一种语言环境下，也需要输入多种文字，典型的情况是同时输入中文和英文。
> 比如T9输入法，可以同时支持中文和英文输入，配合软键盘随时切换输入的语言。
> 数字、小写字母、大写字母和符合也可以视为输入的语言。
> 主要用于提示输入法引擎选择适当的输入方法。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `lang` | `string` | 语言。格式为语言+国家/地区码。如：zh_cn和en_us等。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:5893](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5893)

___

### instance

▸ `Static` **instance**(): [`TInputMethod`](TInputMethod.md)

获取全局输入法对象。

#### Returns

[`TInputMethod`](TInputMethod.md)

成功返回输入法对象，失败返回NULL。

#### Defined in

[awtk.ts:5972](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5972)
