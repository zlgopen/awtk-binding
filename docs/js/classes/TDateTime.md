[AWTK](../README.md) / [Exports](../modules.md) / TDateTime

# Class: TDateTime

日期时间。

> 在嵌入式平台中，在系统初始时，需要调用date\_time\_global\_init设置实际获取/设置系统时间的函数。

## Table of contents

### Constructors

- [constructor](TDateTime.md#constructor)

### Properties

- [nativeObj](TDateTime.md#nativeobj)

### Accessors

- [day](TDateTime.md#day)
- [hour](TDateTime.md#hour)
- [minute](TDateTime.md#minute)
- [month](TDateTime.md#month)
- [second](TDateTime.md#second)
- [wday](TDateTime.md#wday)
- [year](TDateTime.md#year)

### Methods

- [addDelta](TDateTime.md#adddelta)
- [destroy](TDateTime.md#destroy)
- [fromTime](TDateTime.md#fromtime)
- [set](TDateTime.md#set)
- [setDay](TDateTime.md#setday)
- [setHour](TDateTime.md#sethour)
- [setMinute](TDateTime.md#setminute)
- [setMonth](TDateTime.md#setmonth)
- [setSecond](TDateTime.md#setsecond)
- [setYear](TDateTime.md#setyear)
- [toTime](TDateTime.md#totime)
- [create](TDateTime.md#create)
- [getDays](TDateTime.md#getdays)
- [getMonthName](TDateTime.md#getmonthname)
- [getWday](TDateTime.md#getwday)
- [getWdayName](TDateTime.md#getwdayname)
- [isLeap](TDateTime.md#isleap)

## Constructors

### constructor

• **new TDateTime**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:12809](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12809)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:12808](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12808)

## Accessors

### day

• `get` **day**(): `number`

日(1-31)。

#### Returns

`number`

#### Defined in

[awtk.ts:13060](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13060)

• `set` **day**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:13064](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13064)

___

### hour

• `get` **hour**(): `number`

时(0 - 23)。

#### Returns

`number`

#### Defined in

[awtk.ts:13047](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13047)

• `set` **hour**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:13051](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13051)

___

### minute

• `get` **minute**(): `number`

分(0 - 59)。

#### Returns

`number`

#### Defined in

[awtk.ts:13034](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13034)

• `set` **minute**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:13038](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13038)

___

### month

• `get` **month**(): `number`

月(1-12)。

#### Returns

`number`

#### Defined in

[awtk.ts:13082](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13082)

• `set` **month**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:13086](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13086)

___

### second

• `get` **second**(): `number`

秒(0 - 59)。

#### Returns

`number`

#### Defined in

[awtk.ts:13021](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13021)

• `set` **second**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:13025](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13025)

___

### wday

• `get` **wday**(): `number`

星期几(0-6, Sunday = 0)。

#### Returns

`number`

#### Defined in

[awtk.ts:13073](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13073)

___

### year

• `get` **year**(): `number`

年。

#### Returns

`number`

#### Defined in

[awtk.ts:13095](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13095)

• `set` **year**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:13099](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13099)

## Methods

### addDelta

▸ **addDelta**(`delta`): [`TRet`](../enums/TRet.md)

加上一个偏移量(s)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `delta` | `number` | 偏移量(s)。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12938](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12938)

___

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁date_time对象(一般供脚本语言中使用)。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13012](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13012)

___

### fromTime

▸ **fromTime**(`time`): [`TRet`](../enums/TRet.md)

从time转换而来。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `time` | `number` | 时间。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12915](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12915)

___

### set

▸ **set**(): [`TRet`](../enums/TRet.md)

设置当前时间。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12903](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12903)

___

### setDay

▸ **setDay**(`day`): [`TRet`](../enums/TRet.md)

设置日。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `day` | `number` | 日。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12856](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12856)

___

### setHour

▸ **setHour**(`hour`): [`TRet`](../enums/TRet.md)

设置小时。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `hour` | `number` | 小时。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12868](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12868)

___

### setMinute

▸ **setMinute**(`minute`): [`TRet`](../enums/TRet.md)

设置分钟。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `minute` | `number` | 分钟。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12880](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12880)

___

### setMonth

▸ **setMonth**(`month`): [`TRet`](../enums/TRet.md)

设置月。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `month` | `number` | 月。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12844](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12844)

___

### setSecond

▸ **setSecond**(`second`): [`TRet`](../enums/TRet.md)

设置秒。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `second` | `number` | 秒。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12892](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12892)

___

### setYear

▸ **setYear**(`year`): [`TRet`](../enums/TRet.md)

设置年。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `year` | `number` | 年。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12832](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12832)

___

### toTime

▸ **toTime**(): `number`

转换成time。

#### Returns

`number`

返回time。

#### Defined in

[awtk.ts:12926](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12926)

___

### create

▸ `Static` **create**(): [`TDateTime`](TDateTime.md)

创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。

#### Returns

[`TDateTime`](TDateTime.md)

返回date_time对象。

#### Defined in

[awtk.ts:12820](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12820)

___

### getDays

▸ `Static` **getDays**(`year`, `montn`): `number`

获取指定年份月份的天数。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `year` | `number` | 年份。 |
| `montn` | `number` | 月份(1-12)。 |

#### Returns

`number`

返回大于0表示天数，否则表示失败。

#### Defined in

[awtk.ts:12963](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12963)

___

### getMonthName

▸ `Static` **getMonthName**(`montn`): `string`

获取指定月份的英文名称(简写)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `montn` | `number` | 月份(1-12)。 |

#### Returns

`string`

返回指定月份的英文名称(简写)。

#### Defined in

[awtk.ts:12989](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12989)

___

### getWday

▸ `Static` **getWday**(`year`, `montn`, `day`): `number`

获取指定日期是周几(0-6, Sunday = 0)。。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `year` | `number` | 年份。 |
| `montn` | `number` | 月份(1-12)。 |
| `day` | `number` | 日(1-31)。 |

#### Returns

`number`

返回大于等于0表示周几(0-6)，否则表示失败。

#### Defined in

[awtk.ts:12977](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12977)

___

### getWdayName

▸ `Static` **getWdayName**(`wday`): `string`

获取周几的英文名称(简写)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `wday` | `number` | 星期几(0-6, Sunday = 0)。 |

#### Returns

`string`

返回指定周几的英文名称(简写)。

#### Defined in

[awtk.ts:13001](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L13001)

___

### isLeap

▸ `Static` **isLeap**(`year`): `boolean`

是否是闰年。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `year` | `number` | 年份。 |

#### Returns

`boolean`

返回TRUE表示是，否则表示否。

#### Defined in

[awtk.ts:12950](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12950)
