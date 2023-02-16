[AWTK](../README.md) / [Exports](../modules.md) / TRlog

# Class: TRlog

循环记录日志(支持多线程访问)。
如果我们把日志写入文件中，随着时间的推移，日志文件会越来越大，最终占满这个磁盘，出现不可预料的错误。
rlog提供一个循环记录日志的功能，让日志文件始终不会超出指定的大小，达到指定大小后再从头开始写。

> 为了实现简单，我们把日志文件分成0和1两个文件，先写文件0，到达指定最大值的一半时，再写文件1。
> 文件1到达指定最大值的一半时，删除文件0，并将文件1改名为文件0，重新创建文件1，继续写文件1，重复此过程。

## Table of contents

### Constructors

- [constructor](TRlog.md#constructor)

### Properties

- [nativeObj](TRlog.md#nativeobj)

### Methods

- [write](TRlog.md#write)
- [create](TRlog.md#create)

## Constructors

### constructor

• **new TRlog**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:14067](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14067)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:14066](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14066)

## Methods

### write

▸ **write**(`str`): [`TRet`](../enums/TRet.md)

写入一条日志记录。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `str` | `string` | 日志字符串。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:14096](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14096)

___

### create

▸ `Static` **create**(`filename_pattern`, `max_size`, `buff_size`): [`TRlog`](TRlog.md)

rlog_t* log = rlog_create("./logs/%d.log", 1020*1024, 256);
rlog_write(log, "hello\n");
rlog_destroy(log);
```

@param filename_pattern 用来确定文件名的路径和文件名。
@param max_size log文件占用最大磁盘空间(字节)。
@param buff_size 用于指定print时的buff大小。

@returns 返回rlog对象。

#### Parameters

| Name | Type |
| :------ | :------ |
| `filename_pattern` | `string` |
| `max_size` | `number` |
| `buff_size` | `number` |

#### Returns

[`TRlog`](TRlog.md)

#### Defined in

[awtk.ts:14084](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14084)
