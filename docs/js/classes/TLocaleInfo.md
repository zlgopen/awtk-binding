[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TLocaleInfo

# Class: TLocaleInfo

本地化信息。提供字符串翻译数据管理，当前语言改变的事件通知等等。

## Extended by

- [`TLocaleInfoXml`](TLocaleInfoXml.md)

## Constructors

### new TLocaleInfo()

> **new TLocaleInfo**(`nativeObj`): [`TLocaleInfo`](TLocaleInfo.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TLocaleInfo`](TLocaleInfo.md)

#### Defined in

[awtk.ts:7166](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L7166)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:7165](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L7165)

## Methods

### change()

> **change**(`language`, `country`): [`TRet`](../enumerations/TRet.md)

设置当前的国家和语言。

#### Parameters

• **language**: `string`

语言。

• **country**: `string`

国家或地区。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7202](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L7202)

***

### off()

> **off**(`id`): [`TRet`](../enumerations/TRet.md)

注销指定事件的处理函数。

#### Parameters

• **id**: `number`

locale_info_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7214](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L7214)

***

### tr()

> **tr**(`text`): `string`

翻译字符串。

#### Parameters

• **text**: `string`

待翻译的文本。

#### Returns

`string`

返回翻译之后的字符串。

#### Defined in

[awtk.ts:7189](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L7189)

***

### instance()

> `static` **instance**(): [`TLocaleInfo`](TLocaleInfo.md)

获取缺省locale_info。

#### Returns

[`TLocaleInfo`](TLocaleInfo.md)

返回locale_info对象。

#### Defined in

[awtk.ts:7177](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L7177)
