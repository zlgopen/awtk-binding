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

[awtk.ts:13581](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13581)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:13580](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13580)

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

[awtk.ts:13832](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13832)

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

[awtk.ts:13819](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13819)

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

[awtk.ts:13806](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13806)

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

[awtk.ts:13854](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13854)

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

[awtk.ts:13793](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13793)

***

### wday

> `get` **wday**(): `number`

星期几(0-6, Sunday = 0)。

#### Returns

`number`

#### Defined in

[awtk.ts:13845](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13845)

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

[awtk.ts:13867](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13867)

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

[awtk.ts:13710](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13710)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁date_time对象(一般供脚本语言中使用)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13784](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13784)

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

[awtk.ts:13687](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13687)

***

### set()

> **set**(): [`TRet`](../enumerations/TRet.md)

设置当前时间。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:13675](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13675)

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

[awtk.ts:13628](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13628)

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

[awtk.ts:13640](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13640)

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

[awtk.ts:13652](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13652)

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

[awtk.ts:13616](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13616)

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

[awtk.ts:13664](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13664)

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

[awtk.ts:13604](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13604)

***

### toTime()

> **toTime**(): `number`

转换成time(按GMT转换)。

#### Returns

`number`

返回time。

#### Defined in

[awtk.ts:13698](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13698)

***

### create()

> `static` **create**(): [`TDateTime`](TDateTime.md)

创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。

#### Returns

[`TDateTime`](TDateTime.md)

返回date_time对象。

#### Defined in

[awtk.ts:13592](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13592)

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

[awtk.ts:13735](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13735)

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

[awtk.ts:13761](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13761)

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

[awtk.ts:13749](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13749)

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

[awtk.ts:13773](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13773)

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

[awtk.ts:13722](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L13722)
