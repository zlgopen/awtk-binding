[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TLocaleInfo](_awtk_.tlocaleinfo.md)

# Class: TLocaleInfo

本地化信息。提供字符串翻译数据管理，当前语言改变的事件通知等等。

## Hierarchy

* **TLocaleInfo**

## Index

### Constructors

* [constructor](_awtk_.tlocaleinfo.md#constructor)

### Properties

* [nativeObj](_awtk_.tlocaleinfo.md#nativeobj)

### Methods

* [change](_awtk_.tlocaleinfo.md#change)
* [off](_awtk_.tlocaleinfo.md#off)
* [tr](_awtk_.tlocaleinfo.md#tr)
* [instance](_awtk_.tlocaleinfo.md#static-instance)

## Constructors

###  constructor

\+ **new TLocaleInfo**(`nativeObj`: any): *[TLocaleInfo](_awtk_.tlocaleinfo.md)*

*Defined in [awtk.ts:4708](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L4708)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TLocaleInfo](_awtk_.tlocaleinfo.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:4708](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L4708)*

## Methods

###  change

▸ **change**(`language`: string, `country`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:4745](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L4745)*

设置当前的国家和语言。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`language` | string | 语言。 |
`country` | string | 国家或地区。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  off

▸ **off**(`id`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:4757](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L4757)*

注销指定事件的处理函数。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`id` | number | locale_info_on返回的ID。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  tr

▸ **tr**(`text`: string): *string*

*Defined in [awtk.ts:4732](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L4732)*

翻译字符串。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`text` | string | 待翻译的文本。  |

**Returns:** *string*

返回翻译之后的字符串。

___

### `Static` instance

▸ **instance**(): *[TLocaleInfo](_awtk_.tlocaleinfo.md)*

*Defined in [awtk.ts:4720](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L4720)*

获取缺省locale_info。

**Returns:** *[TLocaleInfo](_awtk_.tlocaleinfo.md)*

返回locale_info对象。
