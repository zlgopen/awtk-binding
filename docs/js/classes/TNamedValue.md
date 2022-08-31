[AWTK](../README.md) / [Exports](../modules.md) / TNamedValue

# Class: TNamedValue

命名的值。

## Table of contents

### Constructors

- [constructor](TNamedValue.md#constructor)

### Properties

- [nativeObj](TNamedValue.md#nativeobj)

### Accessors

- [name](TNamedValue.md#name)

### Methods

- [destroy](TNamedValue.md#destroy)
- [getValue](TNamedValue.md#getvalue)
- [setName](TNamedValue.md#setname)
- [setValue](TNamedValue.md#setvalue)
- [cast](TNamedValue.md#cast)
- [create](TNamedValue.md#create)

## Constructors

### constructor

• **new TNamedValue**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:13716](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L13716)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:13715](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L13715)

## Accessors

### name

• `get` **name**(): `string`

名称。

#### Returns

`string`

#### Defined in

[awtk.ts:13794](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L13794)

• `set` **name**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Defined in

[awtk.ts:13798](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L13798)

## Methods

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁named_value对象。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13785](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L13785)

___

### getValue

▸ **getValue**(): [`TValue`](TValue.md)

获取值对象(主要给脚本语言使用)。

#### Returns

[`TValue`](TValue.md)

返回值对象。

#### Defined in

[awtk.ts:13774](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L13774)

___

### setName

▸ **setName**(`name`): [`TRet`](../enums/TRet.md)

设置名称。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13751](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L13751)

___

### setValue

▸ **setValue**(`value`): [`TRet`](../enums/TRet.md)

设置值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | [`TValue`](TValue.md) | 值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13763](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L13763)

___

### cast

▸ `Static` **cast**(`nv`): [`TNamedValue`](TNamedValue.md)

转换为named_value对象(供脚本语言使用)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `nv` | [`TNamedValue`](TNamedValue.md) | named_value对象。 |

#### Returns

[`TNamedValue`](TNamedValue.md)

返回named_value对象。

#### Defined in

[awtk.ts:13739](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L13739)

___

### create

▸ `Static` **create**(): [`TNamedValue`](TNamedValue.md)

创建named_value对象。

#### Returns

[`TNamedValue`](TNamedValue.md)

返回named_value对象。

#### Defined in

[awtk.ts:13727](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L13727)
