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

[awtk.ts:12785](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12785)

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

[awtk.ts:12797](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12797)

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

[awtk.ts:12901](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12901)

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

[awtk.ts:12914](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12914)

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

[awtk.ts:12875](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12875)

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

[awtk.ts:12888](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12888)

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

[awtk.ts:12927](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12927)

***

### reload()

> `static` **reload**(): [`TRet`](../enumerations/TRet.md)

重新加载配置(内存中的配置丢失)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12774](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12774)

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

[awtk.ts:12939](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12939)

***

### save()

> `static` **save**(): [`TRet`](../enumerations/TRet.md)

持久保存配置。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12763](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12763)

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

[awtk.ts:12836](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12836)

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

[awtk.ts:12849](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12849)

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

[awtk.ts:12810](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12810)

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

[awtk.ts:12823](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12823)

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

[awtk.ts:12862](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L12862)
