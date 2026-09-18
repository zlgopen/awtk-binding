[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TAppConf

# Class: TAppConf

Defined in: [awtk.ts:13135](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13135)

应用程序的配置信息。

底层实现可以是任何格式，比如INI，XML，JSON和UBJSON。

对于树状的文档，key可以是多级的，用.分隔。如network.ip。

conf-io是可选组件，需要自己包含头文件，否则64位数据类型会被截断成32位的数据。

## Constructors

### Constructor

> **new TAppConf**(): `TAppConf`

#### Returns

`TAppConf`

## Methods

### deinit()

> `static` **deinit**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13165](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13165)

释放conf对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### exist()

> `static` **exist**(`key`): `boolean`

Defined in: [awtk.ts:13177](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13177)

检查配置项是否存在。

#### Parameters

##### key

`string`

配置项的名称。

#### Returns

`boolean`

返回TRUE表示存在，FALSE表示不存在。

***

### getBool()

> `static` **getBool**(`key`, `defval`): `boolean`

Defined in: [awtk.ts:13281](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13281)

获取bool类型配置项的值。

#### Parameters

##### key

`string`

配置项的名称。

##### defval

`boolean`

缺省值。

#### Returns

`boolean`

返回配置项的值（如果不存在返回缺省值）。

***

### getDouble()

> `static` **getDouble**(`key`, `defval`): `number`

Defined in: [awtk.ts:13294](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13294)

获取单精度浮点数类型配置项的值。

#### Parameters

##### key

`string`

配置项的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回配置项的值（如果不存在返回缺省值）。

***

### getInt()

> `static` **getInt**(`key`, `defval`): `number`

Defined in: [awtk.ts:13255](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13255)

获取整数类型配置项的值。

#### Parameters

##### key

`string`

配置项的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回配置项的值（如果不存在返回缺省值）。

***

### getInt64()

> `static` **getInt64**(`key`, `defval`): `number`

Defined in: [awtk.ts:13268](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13268)

获取64位整数类型配置项的值。

#### Parameters

##### key

`string`

配置项的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回配置项的值（如果不存在返回缺省值）。

***

### getStr()

> `static` **getStr**(`key`, `defval`): `string`

Defined in: [awtk.ts:13307](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13307)

获取字符串类型配置项的值。

#### Parameters

##### key

`string`

配置项的名称。

##### defval

`string`

缺省值。

#### Returns

`string`

返回配置项的值（如果不存在返回缺省值）。

***

### reload()

> `static` **reload**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13154](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13154)

重新加载配置(内存中的配置丢失)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### remove()

> `static` **remove**(`key`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13319](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13319)

删除配置项。

#### Parameters

##### key

`string`

配置项的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### save()

> `static` **save**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13143](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13143)

持久保存配置。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setBool()

> `static` **setBool**(`key`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13216](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13216)

设置bool类型配置项的值。

#### Parameters

##### key

`string`

配置项的名称。

##### v

`boolean`

配置项的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setDouble()

> `static` **setDouble**(`key`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13229](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13229)

设置双精度类型配置项的值。

#### Parameters

##### key

`string`

配置项的名称。

##### v

`number`

配置项的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setInt()

> `static` **setInt**(`key`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13190](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13190)

设置整数类型配置项的值。

#### Parameters

##### key

`string`

配置项的名称。

##### v

`number`

配置项的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setInt64()

> `static` **setInt64**(`key`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13203](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13203)

设置64位整数类型配置项的值。

#### Parameters

##### key

`string`

配置项的名称。

##### v

`number`

配置项的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setStr()

> `static` **setStr**(`key`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13242](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13242)

设置字符串类型配置项的值。

#### Parameters

##### key

`string`

配置项的名称。

##### v

`string`

配置项的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。
