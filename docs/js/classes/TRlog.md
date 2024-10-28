[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TRlog

# Class: TRlog

循环记录日志(支持多线程访问)。
如果我们把日志写入文件中，随着时间的推移，日志文件会越来越大，最终占满这个磁盘，出现不可预料的错误。
rlog提供一个循环记录日志的功能，让日志文件始终不会超出指定的大小，达到指定大小后再从头开始写。

> 为了实现简单，我们把日志文件分成0和1两个文件，先写文件0，到达指定最大值的一半时，再写文件1。
> 文件1到达指定最大值的一半时，删除文件0，并将文件1改名为文件0，重新创建文件1，继续写文件1，重复此过程。

## Constructors

### new TRlog()

> **new TRlog**(`nativeObj`): [`TRlog`](TRlog.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TRlog`](TRlog.md)

#### Defined in

[awtk.ts:14633](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L14633)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:14632](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L14632)

## Methods

### write()

> **write**(`str`): [`TRet`](../enumerations/TRet.md)

写入一条日志记录。

#### Parameters

• **str**: `string`

日志字符串。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:14661](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L14661)

***

### create()

> `static` **create**(`filename_pattern`, `max_size`, `buff_size`): [`TRlog`](TRlog.md)

创建rlog对象。

#### Parameters

• **filename\_pattern**: `string`

用来确定文件名的路径和文件名。

• **max\_size**: `number`

log文件占用最大磁盘空间(字节)。

• **buff\_size**: `number`

用于指定print时的buff大小。

#### Returns

[`TRlog`](TRlog.md)

返回rlog对象。

#### Defined in

[awtk.ts:14649](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L14649)
