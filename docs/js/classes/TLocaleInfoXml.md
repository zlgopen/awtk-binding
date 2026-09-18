[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TLocaleInfoXml

# Class: TLocaleInfoXml

Defined in: [awtk.ts:16846](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L16846)

本地化信息。
locale_info_t 的子类。
提供从 xml 文件中获取本地化信息的功能。

注意：fallback_tr2 回调已被设置用于从xml文件中获取本地化信息，不可再重复设置，否则将导致功能失效！

## Extends

- [`TLocaleInfo`](TLocaleInfo.md)

## Constructors

### Constructor

> **new TLocaleInfoXml**(`nativeObj`): `TLocaleInfoXml`

Defined in: [awtk.ts:16848](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L16848)

#### Parameters

##### nativeObj

`any`

#### Returns

`TLocaleInfoXml`

#### Overrides

[`TLocaleInfo`](TLocaleInfo.md).[`constructor`](TLocaleInfo.md#constructor)

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:16847](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L16847)

#### Overrides

[`TLocaleInfo`](TLocaleInfo.md).[`nativeObj`](TLocaleInfo.md#nativeobj)

## Methods

### change()

> **change**(`language`, `country`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7304](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7304)

设置当前的国家和语言。

#### Parameters

##### language

`string`

语言。

##### country

`string`

国家或地区。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TLocaleInfo`](TLocaleInfo.md).[`change`](TLocaleInfo.md#change)

***

### off()

> **off**(`id`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7316](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7316)

注销指定事件的处理函数。

#### Parameters

##### id

`number`

locale_info_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TLocaleInfo`](TLocaleInfo.md).[`off`](TLocaleInfo.md#off)

***

### tr()

> **tr**(`text`): `string`

Defined in: [awtk.ts:7291](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7291)

翻译字符串。

#### Parameters

##### text

`string`

待翻译的文本。

#### Returns

`string`

返回翻译之后的字符串。

#### Inherited from

[`TLocaleInfo`](TLocaleInfo.md).[`tr`](TLocaleInfo.md#tr)

***

### instance()

> `static` **instance**(): [`TLocaleInfo`](TLocaleInfo.md)

Defined in: [awtk.ts:7279](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7279)

获取缺省locale_info。

#### Returns

[`TLocaleInfo`](TLocaleInfo.md)

返回locale_info对象。

#### Inherited from

[`TLocaleInfo`](TLocaleInfo.md).[`instance`](TLocaleInfo.md#instance)
