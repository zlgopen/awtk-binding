[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TCmdExecEvent

# Class: TCmdExecEvent

对象执行命令的事件。

## Extends

- [`TEvent`](TEvent.md)

## Constructors

### new TCmdExecEvent()

> **new TCmdExecEvent**(`nativeObj`): [`TCmdExecEvent`](TCmdExecEvent.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TCmdExecEvent`](TCmdExecEvent.md)

#### Overrides

[`TEvent`](TEvent.md).[`constructor`](TEvent.md#constructors)

#### Defined in

[awtk.ts:23876](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L23876)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TEvent`](TEvent.md).[`nativeObj`](TEvent.md#nativeobj)

#### Defined in

[awtk.ts:23875](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L23875)

## Accessors

### args

> `get` **args**(): `string`

命令的参数。

#### Returns

`string`

#### Defined in

[awtk.ts:23906](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L23906)

***

### canExec

> `get` **canExec**(): `boolean`

标识命令是否可以执行(适用于CAN_EXEC)。

#### Returns

`boolean`

#### Defined in

[awtk.ts:23924](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L23924)

***

### name

> `get` **name**(): `string`

命令的名称。

#### Returns

`string`

#### Defined in

[awtk.ts:23897](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L23897)

***

### result

> `get` **result**(): [`TRet`](../enumerations/TRet.md)

执行结果(适用于EXECED)。

#### Returns

[`TRet`](../enumerations/TRet.md)

#### Defined in

[awtk.ts:23915](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L23915)

***

### size

> `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Inherited from

[`TEvent`](TEvent.md).[`size`](TEvent.md#size)

#### Defined in

[awtk.ts:5765](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5765)

***

### target

> `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Inherited from

[`TEvent`](TEvent.md).[`target`](TEvent.md#target)

#### Defined in

[awtk.ts:5783](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5783)

***

### time

> `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Inherited from

[`TEvent`](TEvent.md).[`time`](TEvent.md#time)

#### Defined in

[awtk.ts:5774](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5774)

***

### type

> `get` **type**(): `number`

类型。

#### Returns

`number`

#### Inherited from

[`TEvent`](TEvent.md).[`type`](TEvent.md#type)

#### Defined in

[awtk.ts:5756](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5756)

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁事件对象。

主要给脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEvent`](TEvent.md).[`destroy`](TEvent.md#destroy)

#### Defined in

[awtk.ts:5747](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5747)

***

### getType()

> **getType**(): `number`

获取event类型。

#### Returns

`number`

返回event类型。

#### Inherited from

[`TEvent`](TEvent.md).[`getType`](TEvent.md#gettype)

#### Defined in

[awtk.ts:5720](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5720)

***

### cast()

> `static` **cast**(`event`): [`TCmdExecEvent`](TCmdExecEvent.md)

把event对象转cmd_exec_event_t对象。

#### Parameters

• **event**: [`TEvent`](TEvent.md)

event对象。

#### Returns

[`TCmdExecEvent`](TCmdExecEvent.md)

返回event对象。

#### Overrides

[`TEvent`](TEvent.md).[`cast`](TEvent.md#cast)

#### Defined in

[awtk.ts:23888](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L23888)

***

### create()

> `static` **create**(`type`): [`TEvent`](TEvent.md)

创建event对象。

主要给脚本语言使用。

#### Parameters

• **type**: `number`

事件类型。

#### Returns

[`TEvent`](TEvent.md)

返回事件对象。

#### Inherited from

[`TEvent`](TEvent.md).[`create`](TEvent.md#create)

#### Defined in

[awtk.ts:5734](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5734)

***

### fromName()

> `static` **fromName**(`name`): `number`

将事件名转换成事件的值。

#### Parameters

• **name**: `string`

事件名。

#### Returns

`number`

返回事件的值。

#### Inherited from

[`TEvent`](TEvent.md).[`fromName`](TEvent.md#fromname)

#### Defined in

[awtk.ts:5695](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L5695)
