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

[awtk.ts:6756](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L6756)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:6755](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L6755)

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

[awtk.ts:6792](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L6792)

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

[awtk.ts:6804](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L6804)

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

[awtk.ts:6779](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L6779)

___

### instance

▸ `Static` **instance**(): [`TLocaleInfo`](TLocaleInfo.md)

获取缺省locale_info。

#### Returns

[`TLocaleInfo`](TLocaleInfo.md)

返回locale_info对象。

#### Defined in

[awtk.ts:6767](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L6767)
