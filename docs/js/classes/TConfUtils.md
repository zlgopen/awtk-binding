[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TConfUtils

# Class: TConfUtils

Defined in: [awtk.ts:13328](https://github.com/zlgopen/awtk-binding/blob/a6237d7b8f7034c4858ebc4c519159cb37865e42/tools/code_gen/js/output/awtk.ts#L13328)

工具类。

## Constructors

### Constructor

> **new TConfUtils**(): `TConfUtils`

#### Returns

`TConfUtils`

## Methods

### objectLoadConf()

> `static` **objectLoadConf**(`obj`, `url`, `type`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:13339](https://github.com/zlgopen/awtk-binding/blob/a6237d7b8f7034c4858ebc4c519159cb37865e42/tools/code_gen/js/output/awtk.ts#L13339)

加载配置文件到对象中。

#### Parameters

##### obj

[`TObject`](TObject.md)

object对象。

##### url

`string`

配置文件路径。

##### type

`string`

配置文件类型, 如果为NULL，则自动检测。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。
