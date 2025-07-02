[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TLocaleInfoXml

# Class: TLocaleInfoXml

本地化信息。
locale_info_t 的子类。
提供从 xml 文件中获取本地化信息的功能。

注意：fallback_tr2 回调已被设置用于从xml文件中获取本地化信息，不可再重复设置，否则将导致功能失效！

## Extends

- [`TLocaleInfo`](TLocaleInfo.md)

## Constructors

### new TLocaleInfoXml()

> **new TLocaleInfoXml**(`nativeObj`): [`TLocaleInfoXml`](TLocaleInfoXml.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TLocaleInfoXml`](TLocaleInfoXml.md)

#### Overrides

[`TLocaleInfo`](TLocaleInfo.md).[`constructor`](TLocaleInfo.md#constructors)

#### Defined in

[awtk.ts:16398](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L16398)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TLocaleInfo`](TLocaleInfo.md).[`nativeObj`](TLocaleInfo.md#nativeobj)

#### Defined in

[awtk.ts:16397](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L16397)

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

#### Inherited from

[`TLocaleInfo`](TLocaleInfo.md).[`change`](TLocaleInfo.md#change)

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

#### Inherited from

[`TLocaleInfo`](TLocaleInfo.md).[`off`](TLocaleInfo.md#off)

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

#### Inherited from

[`TLocaleInfo`](TLocaleInfo.md).[`tr`](TLocaleInfo.md#tr)

#### Defined in

[awtk.ts:7189](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L7189)

***

### instance()

> `static` **instance**(): [`TLocaleInfo`](TLocaleInfo.md)

获取缺省locale_info。

#### Returns

[`TLocaleInfo`](TLocaleInfo.md)

返回locale_info对象。

#### Inherited from

[`TLocaleInfo`](TLocaleInfo.md).[`instance`](TLocaleInfo.md#instance)

#### Defined in

[awtk.ts:7177](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L7177)
