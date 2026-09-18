[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TInputMethod

# Class: TInputMethod

Defined in: [awtk.ts:6245](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6245)

输入法接口。

常见的实现方式有以下几种：

* 空实现。用于不需要输入法的嵌入式平台。

* 缺省实现。用于需要输入法的嵌入式平台。

* 基于SDL实现的平台原生输入法。用于桌面系统和手机系统。

> 输入类型请参考：[input\_type](input_type_t.md)

## Constructors

### Constructor

> **new TInputMethod**(`nativeObj`): `TInputMethod`

Defined in: [awtk.ts:6247](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6247)

#### Parameters

##### nativeObj

`any`

#### Returns

`TInputMethod`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:6246](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6246)

## Methods

### commitText()

> **commitText**(`text`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:6259](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6259)

提交输入文本。

#### Parameters

##### text

`string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### dispatchKey()

> **dispatchKey**(`key`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:6299](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6299)

提交按键。

#### Parameters

##### key

`number`

键值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### dispatchKeys()

> **dispatchKeys**(`keys`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:6311](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6311)

提交按键。

#### Parameters

##### keys

`string`

键值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### dispatchPreedit()

> **dispatchPreedit**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:6322](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6322)

分发进入预编辑状态的事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### dispatchPreeditAbort()

> **dispatchPreeditAbort**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:6344](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6344)

分发取消预编辑状态的事件(提交预编辑内容，退出预编辑状态)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### dispatchPreeditConfirm()

> **dispatchPreeditConfirm**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:6333](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6333)

分发确认预编辑状态的事件(提交预编辑内容，退出预编辑状态)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### getLang()

> **getLang**(): `string`

Defined in: [awtk.ts:6287](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6287)

获取语言。

#### Returns

`string`

返回语言。

***

### setLang()

> **setLang**(`lang`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:6276](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6276)

设置语言。

> 有时在同一种语言环境下，也需要输入多种文字，典型的情况是同时输入中文和英文。
> 比如T9输入法，可以同时支持中文和英文输入，配合软键盘随时切换输入的语言。
> 数字、小写字母、大写字母和符合也可以视为输入的语言。
> 主要用于提示输入法引擎选择适当的输入方法。

#### Parameters

##### lang

`string`

语言。格式为语言+国家/地区码。如：zh_cn和en_us等。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### instance()

> `static` **instance**(): `TInputMethod`

Defined in: [awtk.ts:6355](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L6355)

获取全局输入法对象。

#### Returns

`TInputMethod`

成功返回输入法对象，失败返回NULL。
