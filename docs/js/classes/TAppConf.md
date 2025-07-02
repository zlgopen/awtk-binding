[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TAppConf

# Class: TAppConf

应用程序的配置信息。

底层实现可以是任何格式，比如INI，XML，JSON和UBJSON。

对于树状的文档，key可以是多级的，用.分隔。如network.ip。

conf-io是可选组件，需要自己包含头文件，否则64位数据类型会被截断成32位的数据。

## Constructors

### new TAppConf()

> **new TAppConf**(): [`TAppConf`](TAppConf.md)

#### Returns

[`TAppConf`](TAppConf.md)

## Methods

### deinit()

> `static` **deinit**(): [`TRet`](../enumerations/TRet.md)

释放conf对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12939](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L12939)

***

### exist()

> `static` **exist**(`key`): `boolean`

检查配置项是否存在。

#### Parameters

• **key**: `string`

配置项的名称。

#### Returns

`boolean`

返回TRUE表示存在，FALSE表示不存在。

#### Defined in

[awtk.ts:12951](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L12951)

***

### getBool()

> `static` **getBool**(`key`, `defval`): `boolean`

获取bool类型配置项的值。

#### Parameters

• **key**: `string`

配置项的名称。

• **defval**: `boolean`

缺省值。

#### Returns

`boolean`

返回配置项的值（如果不存在返回缺省值）。

#### Defined in

[awtk.ts:13055](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L13055)

***

### getDouble()

> `static` **getDouble**(`key`, `defval`): `number`

获取单精度浮点数类型配置项的值。

#### Parameters

• **key**: `string`

配置项的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回配置项的值（如果不存在返回缺省值）。

#### Defined in

[awtk.ts:13068](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L13068)

***

### getInt()

> `static` **getInt**(`key`, `defval`): `number`

获取整数类型配置项的值。

#### Parameters

• **key**: `string`

配置项的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回配置项的值（如果不存在返回缺省值）。

#### Defined in

[awtk.ts:13029](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L13029)

***

### getInt64()

> `static` **getInt64**(`key`, `defval`): `number`

获取64位整数类型配置项的值。

#### Parameters

• **key**: `string`

配置项的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回配置项的值（如果不存在返回缺省值）。

#### Defined in

[awtk.ts:13042](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L13042)

***

### getStr()

> `static` **getStr**(`key`, `defval`): `string`

获取字符串类型配置项的值。

#### Parameters

• **key**: `string`

配置项的名称。

• **defval**: `string`

缺省值。

#### Returns

`string`

返回配置项的值（如果不存在返回缺省值）。

#### Defined in

[awtk.ts:13081](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L13081)

***

### reload()

> `static` **reload**(): [`TRet`](../enumerations/TRet.md)

重新加载配置(内存中的配置丢失)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12928](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L12928)

***

### remove()

> `static` **remove**(`key`): [`TRet`](../enumerations/TRet.md)

删除配置项。

#### Parameters

• **key**: `string`

配置项的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13093](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L13093)

***

### save()

> `static` **save**(): [`TRet`](../enumerations/TRet.md)

持久保存配置。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12917](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L12917)

***

### setBool()

> `static` **setBool**(`key`, `v`): [`TRet`](../enumerations/TRet.md)

设置bool类型配置项的值。

#### Parameters

• **key**: `string`

配置项的名称。

• **v**: `boolean`

配置项的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12990](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L12990)

***

### setDouble()

> `static` **setDouble**(`key`, `v`): [`TRet`](../enumerations/TRet.md)

设置双精度类型配置项的值。

#### Parameters

• **key**: `string`

配置项的名称。

• **v**: `number`

配置项的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13003](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L13003)

***

### setInt()

> `static` **setInt**(`key`, `v`): [`TRet`](../enumerations/TRet.md)

设置整数类型配置项的值。

#### Parameters

• **key**: `string`

配置项的名称。

• **v**: `number`

配置项的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12964](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L12964)

***

### setInt64()

> `static` **setInt64**(`key`, `v`): [`TRet`](../enumerations/TRet.md)

设置64位整数类型配置项的值。

#### Parameters

• **key**: `string`

配置项的名称。

• **v**: `number`

配置项的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12977](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L12977)

***

### setStr()

> `static` **setStr**(`key`, `v`): [`TRet`](../enumerations/TRet.md)

设置字符串类型配置项的值。

#### Parameters

• **key**: `string`

配置项的名称。

• **v**: `string`

配置项的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13016](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L13016)
