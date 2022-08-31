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

[awtk.ts:12632](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12632)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:12631](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12631)

## Accessors

### day

• `get` **day**(): `number`

日(1-31)。

#### Returns

`number`

#### Defined in

[awtk.ts:12883](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12883)

• `set` **day**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:12887](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12887)

___

### hour

• `get` **hour**(): `number`

时(0 - 23)。

#### Returns

`number`

#### Defined in

[awtk.ts:12870](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12870)

• `set` **hour**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:12874](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12874)

___

### minute

• `get` **minute**(): `number`

分(0 - 59)。

#### Returns

`number`

#### Defined in

[awtk.ts:12857](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12857)

• `set` **minute**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:12861](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12861)

___

### month

• `get` **month**(): `number`

月(1-12)。

#### Returns

`number`

#### Defined in

[awtk.ts:12905](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12905)

• `set` **month**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:12909](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12909)

___

### second

• `get` **second**(): `number`

秒(0 - 59)。

#### Returns

`number`

#### Defined in

[awtk.ts:12844](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12844)

• `set` **second**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:12848](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12848)

___

### wday

• `get` **wday**(): `number`

星期几(0-6, Sunday = 0)。

#### Returns

`number`

#### Defined in

[awtk.ts:12896](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12896)

___

### year

• `get` **year**(): `number`

年。

#### Returns

`number`

#### Defined in

[awtk.ts:12918](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12918)

• `set` **year**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Defined in

[awtk.ts:12922](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12922)

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

[awtk.ts:12761](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12761)

___

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁date_time对象(一般供脚本语言中使用)。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12835](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12835)

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

[awtk.ts:12738](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12738)

___

### set

▸ **set**(): [`TRet`](../enums/TRet.md)

设置当前时间。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:12726](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12726)

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

[awtk.ts:12679](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12679)

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

[awtk.ts:12691](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12691)

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

[awtk.ts:12703](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12703)

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

[awtk.ts:12667](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12667)

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

[awtk.ts:12715](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12715)

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

[awtk.ts:12655](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12655)

___

### toTime

▸ **toTime**(): `number`

转换成time。

#### Returns

`number`

返回time。

#### Defined in

[awtk.ts:12749](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12749)

___

### create

▸ `Static` **create**(): [`TDateTime`](TDateTime.md)

创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。

#### Returns

[`TDateTime`](TDateTime.md)

返回date_time对象。

#### Defined in

[awtk.ts:12643](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12643)

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

[awtk.ts:12786](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12786)

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

[awtk.ts:12812](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12812)

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

[awtk.ts:12800](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12800)

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

[awtk.ts:12824](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12824)

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

[awtk.ts:12773](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12773)
