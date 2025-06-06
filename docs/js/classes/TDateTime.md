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

[awtk.ts:13472](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13472)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:13471](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13471)

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

[awtk.ts:13723](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13723)

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

[awtk.ts:13710](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13710)

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

[awtk.ts:13697](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13697)

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

[awtk.ts:13745](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13745)

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

[awtk.ts:13684](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13684)

***

### wday

> `get` **wday**(): `number`

星期几(0-6, Sunday = 0)。

#### Returns

`number`

#### Defined in

[awtk.ts:13736](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13736)

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

[awtk.ts:13758](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13758)

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

[awtk.ts:13601](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13601)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁date_time对象(一般供脚本语言中使用)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13675](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13675)

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

[awtk.ts:13578](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13578)

***

### set()

> **set**(): [`TRet`](../enumerations/TRet.md)

设置当前时间。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13566](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13566)

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

[awtk.ts:13519](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13519)

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

[awtk.ts:13531](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13531)

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

[awtk.ts:13543](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13543)

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

[awtk.ts:13507](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13507)

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

[awtk.ts:13555](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13555)

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

[awtk.ts:13495](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13495)

***

### toTime()

> **toTime**(): `number`

转换成time(按GMT转换)。

#### Returns

`number`

返回time。

#### Defined in

[awtk.ts:13589](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13589)

***

### create()

> `static` **create**(): [`TDateTime`](TDateTime.md)

创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。

#### Returns

[`TDateTime`](TDateTime.md)

返回date_time对象。

#### Defined in

[awtk.ts:13483](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13483)

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

[awtk.ts:13626](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13626)

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

[awtk.ts:13652](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13652)

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

[awtk.ts:13640](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13640)

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

[awtk.ts:13664](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13664)

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

[awtk.ts:13613](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L13613)
