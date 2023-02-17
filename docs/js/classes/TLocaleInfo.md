[AWTK](../README.md) / [Exports](../modules.md) / TLocaleInfo

# Class: TLocaleInfo

本地化信息。提供字符串翻译数据管理，当前语言改变的事件通知等等。

## Table of contents

### Constructors

- [constructor](TLocaleInfo.md#constructor)

### Properties

- [nativeObj](TLocaleInfo.md#nativeobj)

### Methods

- [change](TLocaleInfo.md#change)
- [off](TLocaleInfo.md#off)
- [tr](TLocaleInfo.md#tr)
- [instance](TLocaleInfo.md#instance)

## Constructors

### constructor

• **new TLocaleInfo**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:6885](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L6885)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:6884](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L6884)

## Methods

### change

▸ **change**(`language`, `country`): [`TRet`](../enums/TRet.md)

设置当前的国家和语言。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `language` | `string` | 语言。 |
| `country` | `string` | 国家或地区。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:6921](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L6921)

___

### off

▸ **off**(`id`): [`TRet`](../enums/TRet.md)

注销指定事件的处理函数。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `id` | `number` | locale_info_on返回的ID。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:6933](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L6933)

___

### tr

▸ **tr**(`text`): `string`

翻译字符串。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `text` | `string` | 待翻译的文本。 |

#### Returns

`string`

返回翻译之后的字符串。

#### Defined in

[awtk.ts:6908](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L6908)

___

### instance

▸ `Static` **instance**(): [`TLocaleInfo`](TLocaleInfo.md)

获取缺省locale_info。

#### Returns

[`TLocaleInfo`](TLocaleInfo.md)

返回locale_info对象。

#### Defined in

[awtk.ts:6896](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L6896)
