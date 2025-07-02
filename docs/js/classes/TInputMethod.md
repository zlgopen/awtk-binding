[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TInputMethod

# Class: TInputMethod

输入法接口。

常见的实现方式有以下几种：

* 空实现。用于不需要输入法的嵌入式平台。

* 缺省实现。用于需要输入法的嵌入式平台。

* 基于SDL实现的平台原生输入法。用于桌面系统和手机系统。

> 输入类型请参考：[input\_type](input_type_t.md)

## Constructors

### new TInputMethod()

> **new TInputMethod**(`nativeObj`): [`TInputMethod`](TInputMethod.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TInputMethod`](TInputMethod.md)

#### Defined in

[awtk.ts:6145](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L6145)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:6144](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L6144)

## Methods

### commitText()

> **commitText**(`text`): [`TRet`](../enumerations/TRet.md)

提交输入文本。

#### Parameters

• **text**: `string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:6157](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L6157)

***

### dispatchKey()

> **dispatchKey**(`key`): [`TRet`](../enumerations/TRet.md)

提交按键。

#### Parameters

• **key**: `number`

键值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:6197](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L6197)

***

### dispatchKeys()

> **dispatchKeys**(`keys`): [`TRet`](../enumerations/TRet.md)

提交按键。

#### Parameters

• **keys**: `string`

键值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:6209](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L6209)

***

### dispatchPreedit()

> **dispatchPreedit**(): [`TRet`](../enumerations/TRet.md)

分发进入预编辑状态的事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:6220](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L6220)

***

### dispatchPreeditAbort()

> **dispatchPreeditAbort**(): [`TRet`](../enumerations/TRet.md)

分发取消预编辑状态的事件(提交预编辑内容，退出预编辑状态)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:6242](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L6242)

***

### dispatchPreeditConfirm()

> **dispatchPreeditConfirm**(): [`TRet`](../enumerations/TRet.md)

分发确认预编辑状态的事件(提交预编辑内容，退出预编辑状态)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:6231](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L6231)

***

### getLang()

> **getLang**(): `string`

获取语言。

#### Returns

`string`

返回语言。

#### Defined in

[awtk.ts:6185](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L6185)

***

### setLang()

> **setLang**(`lang`): [`TRet`](../enumerations/TRet.md)

设置语言。

> 有时在同一种语言环境下，也需要输入多种文字，典型的情况是同时输入中文和英文。
> 比如T9输入法，可以同时支持中文和英文输入，配合软键盘随时切换输入的语言。
> 数字、小写字母、大写字母和符合也可以视为输入的语言。
> 主要用于提示输入法引擎选择适当的输入方法。

#### Parameters

• **lang**: `string`

语言。格式为语言+国家/地区码。如：zh_cn和en_us等。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:6174](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L6174)

***

### instance()

> `static` **instance**(): [`TInputMethod`](TInputMethod.md)

获取全局输入法对象。

#### Returns

[`TInputMethod`](TInputMethod.md)

成功返回输入法对象，失败返回NULL。

#### Defined in

[awtk.ts:6253](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L6253)
