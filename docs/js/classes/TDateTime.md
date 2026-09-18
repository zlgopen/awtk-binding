[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TDateTime

# Class: TDateTime

Defined in: [awtk.ts:13880](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13880)

日期时间。

> 在嵌入式平台中，在系统初始时，需要调用date\_time\_global\_init设置实际获取/设置系统时间的函数。

## Constructors

### Constructor

> **new TDateTime**(`nativeObj`): `TDateTime`

Defined in: [awtk.ts:13882](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13882)

#### Parameters

##### nativeObj

`any`

#### Returns

`TDateTime`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:13881](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13881)

## Accessors

### day

#### Get Signature

> **get** **day**(): `number`

Defined in: [awtk.ts:14133](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14133)

日(1-31)。

##### Returns

`number`

#### Set Signature

> **set** **day**(`v`): `void`

Defined in: [awtk.ts:14137](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14137)

##### Parameters

###### v

`number`

##### Returns

`void`

***

### hour

#### Get Signature

> **get** **hour**(): `number`

Defined in: [awtk.ts:14120](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14120)

时(0 - 23)。

##### Returns

`number`

#### Set Signature

> **set** **hour**(`v`): `void`

Defined in: [awtk.ts:14124](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14124)

##### Parameters

###### v

`number`

##### Returns

`void`

***

### minute

#### Get Signature

> **get** **minute**(): `number`

Defined in: [awtk.ts:14107](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14107)

分(0 - 59)。

##### Returns

`number`

#### Set Signature

> **set** **minute**(`v`): `void`

Defined in: [awtk.ts:14111](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14111)

##### Parameters

###### v

`number`

##### Returns

`void`

***

### month

#### Get Signature

> **get** **month**(): `number`

Defined in: [awtk.ts:14155](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14155)

月(1-12)。

##### Returns

`number`

#### Set Signature

> **set** **month**(`v`): `void`

Defined in: [awtk.ts:14159](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14159)

##### Parameters

###### v

`number`

##### Returns

`void`

***

### second

#### Get Signature

> **get** **second**(): `number`

Defined in: [awtk.ts:14094](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14094)

秒(0 - 59)。

##### Returns

`number`

#### Set Signature

> **set** **second**(`v`): `void`

Defined in: [awtk.ts:14098](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14098)

##### Parameters

###### v

`number`

##### Returns

`void`

***

### wday

#### Get Signature

> **get** **wday**(): `number`

Defined in: [awtk.ts:14146](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14146)

星期几(0-6, Sunday = 0)。

##### Returns

`number`

***

### year

#### Get Signature

> **get** **year**(): `number`

Defined in: [awtk.ts:14168](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14168)

年。

##### Returns

`number`

#### Set Signature

> **set** **year**(`v`): `void`

Defined in: [awtk.ts:14172](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14172)

##### Parameters

###### v

`number`

##### Returns

`void`

## Methods

### addDelta()

> **addDelta**(`delta`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:14011](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14011)

加上一个偏移量(s)。

#### Parameters

##### delta

`number`

偏移量(s)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:14085](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14085)

销毁date_time对象(一般供脚本语言中使用)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### fromTime()

> **fromTime**(`time`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13988](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13988)

从time转换而来(按GMT转换)。

#### Parameters

##### time

`number`

时间。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### set()

> **set**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13976](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13976)

设置当前时间。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setDay()

> **setDay**(`day`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13929](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13929)

设置日。

#### Parameters

##### day

`number`

日。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setHour()

> **setHour**(`hour`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13941](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13941)

设置小时。

#### Parameters

##### hour

`number`

小时。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setMinute()

> **setMinute**(`minute`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13953](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13953)

设置分钟。

#### Parameters

##### minute

`number`

分钟。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setMonth()

> **setMonth**(`month`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13917](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13917)

设置月。

#### Parameters

##### month

`number`

月。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setSecond()

> **setSecond**(`second`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13965](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13965)

设置秒。

#### Parameters

##### second

`number`

秒。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setYear()

> **setYear**(`year`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13905](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13905)

设置年。

#### Parameters

##### year

`number`

年。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### toTime()

> **toTime**(): `number`

Defined in: [awtk.ts:13999](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13999)

转换成time(按GMT转换)。

#### Returns

`number`

返回time。

***

### create()

> `static` **create**(): `TDateTime`

Defined in: [awtk.ts:13893](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13893)

创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。

#### Returns

`TDateTime`

返回date_time对象。

***

### getDays()

> `static` **getDays**(`year`, `month`): `number`

Defined in: [awtk.ts:14036](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14036)

获取指定年份月份的天数。

#### Parameters

##### year

`number`

年份。

##### month

`number`

月份(1-12)。

#### Returns

`number`

返回大于0表示天数，否则表示失败。

***

### getMonthName()

> `static` **getMonthName**(`month`): `string`

Defined in: [awtk.ts:14062](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14062)

获取指定月份的英文名称(简写)。

#### Parameters

##### month

`number`

月份(1-12)。

#### Returns

`string`

返回指定月份的英文名称(简写)。

***

### getWday()

> `static` **getWday**(`year`, `month`, `day`): `number`

Defined in: [awtk.ts:14050](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14050)

获取指定日期是周几(0-6, Sunday = 0)。。

#### Parameters

##### year

`number`

年份。

##### month

`number`

月份(1-12)。

##### day

`number`

日(1-31)。

#### Returns

`number`

返回大于等于0表示周几(0-6)，否则表示失败。

***

### getWdayName()

> `static` **getWdayName**(`wday`): `string`

Defined in: [awtk.ts:14074](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14074)

获取周几的英文名称(简写)。

#### Parameters

##### wday

`number`

星期几(0-6, Sunday = 0)。

#### Returns

`string`

返回指定周几的英文名称(简写)。

***

### isLeap()

> `static` **isLeap**(`year`): `boolean`

Defined in: [awtk.ts:14023](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L14023)

是否是闰年。

#### Parameters

##### year

`number`

年份。

#### Returns

`boolean`

返回TRUE表示是，否则表示否。
