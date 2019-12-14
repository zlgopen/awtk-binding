[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TInputMethod](_awtk_.tinputmethod.md)

# Class: TInputMethod

输入法接口。 常见的实现方式有以下几种： * 空实现。用于不需要输入法的嵌入式平台。 * 缺省实现。用于需要输入法的嵌入式平台。 * 基于SDL实现的平台原生输入法。用于桌面系统和手机系统。 ```graphviz  [default_style]  input_method_default_t -> input_method_t [arrowhead=empty style=dashed]  input_method_sdl_t -> input_method_t [arrowhead=empty style=dashed]  input_method_null_t -> input_method_t [arrowhead=empty style=dashed] ``` 输入类型请参考：[input\_type](input_type_t.md)

## Hierarchy

* **TInputMethod**

## Index

### Constructors

* [constructor](_awtk_.tinputmethod.md#constructor)

### Properties

* [nativeObj](_awtk_.tinputmethod.md#nativeobj)

### Methods

* [commitText](_awtk_.tinputmethod.md#committext)
* [dispatchKey](_awtk_.tinputmethod.md#dispatchkey)
* [instance](_awtk_.tinputmethod.md#static-instance)

## Constructors

###  constructor

\+ **new TInputMethod**(`nativeObj`: any): *[TInputMethod](_awtk_.tinputmethod.md)*

*Defined in [awtk.ts:3888](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L3888)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TInputMethod](_awtk_.tinputmethod.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:3888](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L3888)*

## Methods

###  commitText

▸ **commitText**(`text`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:3902](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L3902)*

提交输入文本。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`text` | string | 文本。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  dispatchKey

▸ **dispatchKey**(`key`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:3915](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L3915)*

提交按键。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`key` | number | 键值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` instance

▸ **instance**(): *[TInputMethod](_awtk_.tinputmethod.md)*

*Defined in [awtk.ts:3926](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L3926)*

获取全局输入法对象。

**Returns:** *[TInputMethod](_awtk_.tinputmethod.md)*

成功返回输入法对象，失败返回NULL。
