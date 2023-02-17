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

[awtk.ts:12245](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12245)

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

[awtk.ts:12257](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12257)

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

[awtk.ts:12361](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12361)

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

[awtk.ts:12374](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12374)

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

[awtk.ts:12335](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12335)

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

[awtk.ts:12348](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12348)

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

[awtk.ts:12387](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12387)

___

### reload

▸ `Static` **reload**(): [`TRet`](../enums/TRet.md)

重新加载配置(内存中的配置丢失)。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12234](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12234)

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

[awtk.ts:12399](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12399)

___

### save

▸ `Static` **save**(): [`TRet`](../enums/TRet.md)

持久保存配置。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12223](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12223)

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

[awtk.ts:12296](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12296)

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

[awtk.ts:12309](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12309)

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

[awtk.ts:12270](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12270)

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

[awtk.ts:12283](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12283)

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

[awtk.ts:12322](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12322)
