[AWTK](../README.md) / [Exports](../modules.md) / TAppConf

# Class: TAppConf

#include "conf_io/app_conf.h"
```

## Table of contents

### Constructors

- [constructor](TAppConf.md#constructor)

### Methods

- [deinit](TAppConf.md#deinit)
- [exist](TAppConf.md#exist)
- [getBool](TAppConf.md#getbool)
- [getDouble](TAppConf.md#getdouble)
- [getInt](TAppConf.md#getint)
- [getInt64](TAppConf.md#getint64)
- [getStr](TAppConf.md#getstr)
- [reload](TAppConf.md#reload)
- [remove](TAppConf.md#remove)
- [save](TAppConf.md#save)
- [setBool](TAppConf.md#setbool)
- [setDouble](TAppConf.md#setdouble)
- [setInt](TAppConf.md#setint)
- [setInt64](TAppConf.md#setint64)
- [setStr](TAppConf.md#setstr)

## Constructors

### constructor

• **new TAppConf**()

## Methods

### deinit

▸ `Static` **deinit**(): [`TRet`](../enums/TRet.md)

释放conf对象。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12225](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12225)

___

### exist

▸ `Static` **exist**(`key`): `boolean`

检查配置项是否存在。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `key` | `string` | 配置项的名称。 |

#### Returns

`boolean`

返回TRUE表示存在，FALSE表示不存在。

#### Defined in

[awtk.ts:12237](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12237)

___

### getBool

▸ `Static` **getBool**(`key`, `defval`): `boolean`

获取bool类型配置项的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `key` | `string` | 配置项的名称。 |
| `defval` | `boolean` | 缺省值。 |

#### Returns

`boolean`

返回配置项的值（如果不存在返回缺省值）。

#### Defined in

[awtk.ts:12341](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12341)

___

### getDouble

▸ `Static` **getDouble**(`key`, `defval`): `number`

获取单精度浮点数类型配置项的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `key` | `string` | 配置项的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回配置项的值（如果不存在返回缺省值）。

#### Defined in

[awtk.ts:12354](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12354)

___

### getInt

▸ `Static` **getInt**(`key`, `defval`): `number`

获取整数类型配置项的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `key` | `string` | 配置项的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回配置项的值（如果不存在返回缺省值）。

#### Defined in

[awtk.ts:12315](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12315)

___

### getInt64

▸ `Static` **getInt64**(`key`, `defval`): `number`

获取64位整数类型配置项的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `key` | `string` | 配置项的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回配置项的值（如果不存在返回缺省值）。

#### Defined in

[awtk.ts:12328](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12328)

___

### getStr

▸ `Static` **getStr**(`key`, `defval`): `string`

获取字符串类型配置项的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `key` | `string` | 配置项的名称。 |
| `defval` | `string` | 缺省值。 |

#### Returns

`string`

返回配置项的值（如果不存在返回缺省值）。

#### Defined in

[awtk.ts:12367](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12367)

___

### reload

▸ `Static` **reload**(): [`TRet`](../enums/TRet.md)

重新加载配置(内存中的配置丢失)。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12214](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12214)

___

### remove

▸ `Static` **remove**(`key`): [`TRet`](../enums/TRet.md)

删除配置项。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `key` | `string` | 配置项的名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12379](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12379)

___

### save

▸ `Static` **save**(): [`TRet`](../enums/TRet.md)

持久保存配置。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12203](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12203)

___

### setBool

▸ `Static` **setBool**(`key`, `v`): [`TRet`](../enums/TRet.md)

设置bool类型配置项的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `key` | `string` | 配置项的名称。 |
| `v` | `boolean` | 配置项的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12276](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12276)

___

### setDouble

▸ `Static` **setDouble**(`key`, `v`): [`TRet`](../enums/TRet.md)

设置双精度类型配置项的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `key` | `string` | 配置项的名称。 |
| `v` | `number` | 配置项的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12289](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12289)

___

### setInt

▸ `Static` **setInt**(`key`, `v`): [`TRet`](../enums/TRet.md)

设置整数类型配置项的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `key` | `string` | 配置项的名称。 |
| `v` | `number` | 配置项的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12250](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12250)

___

### setInt64

▸ `Static` **setInt64**(`key`, `v`): [`TRet`](../enums/TRet.md)

设置64位整数类型配置项的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `key` | `string` | 配置项的名称。 |
| `v` | `number` | 配置项的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12263](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12263)

___

### setStr

▸ `Static` **setStr**(`key`, `v`): [`TRet`](../enums/TRet.md)

设置字符串类型配置项的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `key` | `string` | 配置项的名称。 |
| `v` | `string` | 配置项的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12302](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L12302)
