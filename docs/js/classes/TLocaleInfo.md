[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TLocaleInfo

# Class: TLocaleInfo

Defined in: [awtk.ts:7266](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7266)

本地化信息。提供字符串翻译数据管理，当前语言改变的事件通知等等。

## Extended by

- [`TLocaleInfoXml`](TLocaleInfoXml.md)

## Constructors

### Constructor

> **new TLocaleInfo**(`nativeObj`): `TLocaleInfo`

Defined in: [awtk.ts:7268](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7268)

#### Parameters

##### nativeObj

`any`

#### Returns

`TLocaleInfo`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:7267](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7267)

## Methods

### change()

> **change**(`language`, `country`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7304](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7304)

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

***

### off()

> **off**(`id`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7316](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7316)

注销指定事件的处理函数。

#### Parameters

##### id

`number`

locale_info_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### tr()

> **tr**(`text`): `string`

Defined in: [awtk.ts:7291](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7291)

翻译字符串。

#### Parameters

##### text

`string`

待翻译的文本。

#### Returns

`string`

返回翻译之后的字符串。

***

### instance()

> `static` **instance**(): `TLocaleInfo`

Defined in: [awtk.ts:7279](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7279)

获取缺省locale_info。

#### Returns

`TLocaleInfo`

返回locale_info对象。
