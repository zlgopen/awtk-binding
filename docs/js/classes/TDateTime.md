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

[awtk.ts:13349](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13349)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:13348](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13348)

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

[awtk.ts:13600](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13600)

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

[awtk.ts:13587](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13587)

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

[awtk.ts:13574](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13574)

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

[awtk.ts:13622](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13622)

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

[awtk.ts:13561](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13561)

***

### wday

> `get` **wday**(): `number`

星期几(0-6, Sunday = 0)。

#### Returns

`number`

#### Defined in

[awtk.ts:13613](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13613)

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

[awtk.ts:13635](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13635)

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

[awtk.ts:13478](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13478)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁date_time对象(一般供脚本语言中使用)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13552](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13552)

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

[awtk.ts:13455](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13455)

***

### set()

> **set**(): [`TRet`](../enumerations/TRet.md)

设置当前时间。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13443](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13443)

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

[awtk.ts:13396](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13396)

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

[awtk.ts:13408](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13408)

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

[awtk.ts:13420](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13420)

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

[awtk.ts:13384](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13384)

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

[awtk.ts:13432](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13432)

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

[awtk.ts:13372](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13372)

***

### toTime()

> **toTime**(): `number`

转换成time(按GMT转换)。

#### Returns

`number`

返回time。

#### Defined in

[awtk.ts:13466](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13466)

***

### create()

> `static` **create**(): [`TDateTime`](TDateTime.md)

创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。

#### Returns

[`TDateTime`](TDateTime.md)

返回date_time对象。

#### Defined in

[awtk.ts:13360](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13360)

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

[awtk.ts:13503](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13503)

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

[awtk.ts:13529](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13529)

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

[awtk.ts:13517](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13517)

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

[awtk.ts:13541](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13541)

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

[awtk.ts:13490](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L13490)
