[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TLog

# Class: TLog

Defined in: [awtk.ts:14376](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L14376)

log。

## Constructors

### Constructor

> **new TLog**(): `TLog`

#### Returns

`TLog`

## Methods

### getLogLevel()

> `static` **getLogLevel**(): [`TTkLogLevel`](../enumerations/TTkLogLevel.md)

Defined in: [awtk.ts:14384](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L14384)

获取log的级别。

#### Returns

[`TTkLogLevel`](../enumerations/TTkLogLevel.md)

返回log的级别。

***

### setLogLevel()

> `static` **setLogLevel**(`log_level`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:14396](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L14396)

设置log的级别。

#### Parameters

##### log\_level

[`TTkLogLevel`](../enumerations/TTkLogLevel.md)

log的级别。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。
