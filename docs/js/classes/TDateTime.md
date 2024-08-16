[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TDateTime

# Class: TDateTime

日期时间。

> 在嵌入式平台中，在系统初始时，需要调用date\_time\_global\_init设置实际获取/设置系统时间的函数。

## Constructors

### new TDateTime()

> **new TDateTime**(`nativeObj`): [`TDateTime`](TDateTime.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TDateTime`](TDateTime.md)

#### Defined in

[awtk.ts:13300](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13300)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:13299](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13299)

## Accessors

### day

> `get` **day**(): `number`

日(1-31)。

> `set` **day**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Defined in

[awtk.ts:13551](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13551)

***

### hour

> `get` **hour**(): `number`

时(0 - 23)。

> `set` **hour**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Defined in

[awtk.ts:13538](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13538)

***

### minute

> `get` **minute**(): `number`

分(0 - 59)。

> `set` **minute**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Defined in

[awtk.ts:13525](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13525)

***

### month

> `get` **month**(): `number`

月(1-12)。

> `set` **month**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Defined in

[awtk.ts:13573](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13573)

***

### second

> `get` **second**(): `number`

秒(0 - 59)。

> `set` **second**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Defined in

[awtk.ts:13512](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13512)

***

### wday

> `get` **wday**(): `number`

星期几(0-6, Sunday = 0)。

#### Returns

`number`

#### Defined in

[awtk.ts:13564](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13564)

***

### year

> `get` **year**(): `number`

年。

> `set` **year**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Defined in

[awtk.ts:13586](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13586)

## Methods

### addDelta()

> **addDelta**(`delta`): [`TRet`](../enumerations/TRet.md)

加上一个偏移量(s)。

#### Parameters

• **delta**: `number`

偏移量(s)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13429](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13429)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁date_time对象(一般供脚本语言中使用)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13503](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13503)

***

### fromTime()

> **fromTime**(`time`): [`TRet`](../enumerations/TRet.md)

从time转换而来(按GMT转换)。

#### Parameters

• **time**: `number`

时间。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13406](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13406)

***

### set()

> **set**(): [`TRet`](../enumerations/TRet.md)

设置当前时间。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13394](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13394)

***

### setDay()

> **setDay**(`day`): [`TRet`](../enumerations/TRet.md)

设置日。

#### Parameters

• **day**: `number`

日。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13347](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13347)

***

### setHour()

> **setHour**(`hour`): [`TRet`](../enumerations/TRet.md)

设置小时。

#### Parameters

• **hour**: `number`

小时。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13359](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13359)

***

### setMinute()

> **setMinute**(`minute`): [`TRet`](../enumerations/TRet.md)

设置分钟。

#### Parameters

• **minute**: `number`

分钟。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13371](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13371)

***

### setMonth()

> **setMonth**(`month`): [`TRet`](../enumerations/TRet.md)

设置月。

#### Parameters

• **month**: `number`

月。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13335](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13335)

***

### setSecond()

> **setSecond**(`second`): [`TRet`](../enumerations/TRet.md)

设置秒。

#### Parameters

• **second**: `number`

秒。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13383](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13383)

***

### setYear()

> **setYear**(`year`): [`TRet`](../enumerations/TRet.md)

设置年。

#### Parameters

• **year**: `number`

年。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13323](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13323)

***

### toTime()

> **toTime**(): `number`

转换成time(按GMT转换)。

#### Returns

`number`

返回time。

#### Defined in

[awtk.ts:13417](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13417)

***

### create()

> `static` **create**(): [`TDateTime`](TDateTime.md)

创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。

#### Returns

[`TDateTime`](TDateTime.md)

返回date_time对象。

#### Defined in

[awtk.ts:13311](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13311)

***

### getDays()

> `static` **getDays**(`year`, `month`): `number`

获取指定年份月份的天数。

#### Parameters

• **year**: `number`

年份。

• **month**: `number`

月份(1-12)。

#### Returns

`number`

返回大于0表示天数，否则表示失败。

#### Defined in

[awtk.ts:13454](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13454)

***

### getMonthName()

> `static` **getMonthName**(`month`): `string`

获取指定月份的英文名称(简写)。

#### Parameters

• **month**: `number`

月份(1-12)。

#### Returns

`string`

返回指定月份的英文名称(简写)。

#### Defined in

[awtk.ts:13480](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13480)

***

### getWday()

> `static` **getWday**(`year`, `month`, `day`): `number`

获取指定日期是周几(0-6, Sunday = 0)。。

#### Parameters

• **year**: `number`

年份。

• **month**: `number`

月份(1-12)。

• **day**: `number`

日(1-31)。

#### Returns

`number`

返回大于等于0表示周几(0-6)，否则表示失败。

#### Defined in

[awtk.ts:13468](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13468)

***

### getWdayName()

> `static` **getWdayName**(`wday`): `string`

获取周几的英文名称(简写)。

#### Parameters

• **wday**: `number`

星期几(0-6, Sunday = 0)。

#### Returns

`string`

返回指定周几的英文名称(简写)。

#### Defined in

[awtk.ts:13492](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13492)

***

### isLeap()

> `static` **isLeap**(`year`): `boolean`

是否是闰年。

#### Parameters

• **year**: `number`

年份。

#### Returns

`boolean`

返回TRUE表示是，否则表示否。

#### Defined in

[awtk.ts:13441](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L13441)
