[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TObjectFifoValueChangeEvent

# Class: TObjectFifoValueChangeEvent

Defined in: [awtk.ts:25152](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L25152)

值改变事件。

## Extends

- [`TEvent`](TEvent.md)

## Constructors

### Constructor

> **new TObjectFifoValueChangeEvent**(`nativeObj`): `TObjectFifoValueChangeEvent`

Defined in: [awtk.ts:25154](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L25154)

#### Parameters

##### nativeObj

`any`

#### Returns

`TObjectFifoValueChangeEvent`

#### Overrides

[`TEvent`](TEvent.md).[`constructor`](TEvent.md#constructor)

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:25153](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L25153)

#### Overrides

[`TEvent`](TEvent.md).[`nativeObj`](TEvent.md#nativeobj)

## Accessors

### size

#### Get Signature

> **get** **size**(): `number`

Defined in: [awtk.ts:5927](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L5927)

结构体的大小。

##### Returns

`number`

#### Inherited from

[`TEvent`](TEvent.md).[`size`](TEvent.md#size)

***

### target

#### Get Signature

> **get** **target**(): `any`

Defined in: [awtk.ts:5945](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L5945)

事件发生的目标对象。

##### Returns

`any`

#### Inherited from

[`TEvent`](TEvent.md).[`target`](TEvent.md#target)

***

### time

#### Get Signature

> **get** **time**(): `number`

Defined in: [awtk.ts:5936](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L5936)

事件发生的时间点（该时间点并非真实时间）。

##### Returns

`number`

#### Inherited from

[`TEvent`](TEvent.md).[`time`](TEvent.md#time)

***

### type

#### Get Signature

> **get** **type**(): `number`

Defined in: [awtk.ts:25235](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L25235)

具体的事件类型。

##### Returns

`number`

#### Overrides

[`TEvent`](TEvent.md).[`type`](TEvent.md#type)

## Methods

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:5909](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L5909)

销毁事件对象。

主要给脚本语言使用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEvent`](TEvent.md).[`destroy`](TEvent.md#destroy)

***

### getType()

> **getType**(): `number`

Defined in: [awtk.ts:5882](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L5882)

获取event类型。

#### Returns

`number`

返回event类型。

#### Inherited from

[`TEvent`](TEvent.md).[`getType`](TEvent.md#gettype)

***

### cast()

> `static` **cast**(`event`): `TObjectFifoValueChangeEvent`

Defined in: [awtk.ts:25226](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L25226)

把event对象转object_fifo_value_change_event_t对象，主要给脚本语言使用。

#### Parameters

##### event

[`TEvent`](TEvent.md)

event对象。

#### Returns

`TObjectFifoValueChangeEvent`

event对象。

#### Overrides

[`TEvent`](TEvent.md).[`cast`](TEvent.md#cast)

***

### create()

> `static` **create**(`type`): [`TEvent`](TEvent.md)

Defined in: [awtk.ts:5896](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L5896)

创建event对象。

主要给脚本语言使用。

#### Parameters

##### type

`number`

事件类型。

#### Returns

[`TEvent`](TEvent.md)

返回事件对象。

#### Inherited from

[`TEvent`](TEvent.md).[`create`](TEvent.md#create)

***

### fromName()

> `static` **fromName**(`name`): `number`

Defined in: [awtk.ts:5832](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L5832)

将事件名转换成事件的类型。

#### Parameters

##### name

`string`

事件名。

#### Returns

`number`

返回事件的类型。

#### Inherited from

[`TEvent`](TEvent.md).[`fromName`](TEvent.md#fromname)

***

### objectFifoPopEventCast()

> `static` **objectFifoPopEventCast**(`event`): `TObjectFifoValueChangeEvent`

Defined in: [awtk.ts:25202](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L25202)

把event对象转object_fifo_pop_event_t对象，主要给脚本语言使用。

#### Parameters

##### event

[`TEvent`](TEvent.md)

event对象。

#### Returns

`TObjectFifoValueChangeEvent`

event对象。

***

### objectFifoPopTailEventCast()

> `static` **objectFifoPopTailEventCast**(`event`): `TObjectFifoValueChangeEvent`

Defined in: [awtk.ts:25214](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L25214)

把event对象转object_fifo_pop_tail_event_t对象，主要给脚本语言使用。

#### Parameters

##### event

[`TEvent`](TEvent.md)

event对象。

#### Returns

`TObjectFifoValueChangeEvent`

event对象。

***

### objectFifoPushEventCast()

> `static` **objectFifoPushEventCast**(`event`): `TObjectFifoValueChangeEvent`

Defined in: [awtk.ts:25178](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L25178)

把event对象转object_fifo_push_event_t对象，主要给脚本语言使用。

#### Parameters

##### event

[`TEvent`](TEvent.md)

event对象。

#### Returns

`TObjectFifoValueChangeEvent`

event对象。

***

### objectFifoPushHeadEventCast()

> `static` **objectFifoPushHeadEventCast**(`event`): `TObjectFifoValueChangeEvent`

Defined in: [awtk.ts:25190](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L25190)

把event对象转object_fifo_push_head_event_t对象，主要给脚本语言使用。

#### Parameters

##### event

[`TEvent`](TEvent.md)

event对象。

#### Returns

`TObjectFifoValueChangeEvent`

event对象。

***

### objectFifoSetEventCast()

> `static` **objectFifoSetEventCast**(`event`): `TObjectFifoValueChangeEvent`

Defined in: [awtk.ts:25166](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L25166)

把event对象转object_fifo_event_set_t对象，主要给脚本语言使用。

#### Parameters

##### event

[`TEvent`](TEvent.md)

event对象。

#### Returns

`TObjectFifoValueChangeEvent`

event对象。

***

### registerCustomName()

> `static` **registerCustomName**(`event_type`, `name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:5845](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L5845)

给事件注册名称。

#### Parameters

##### event\_type

`number`

事件类型。

##### name

`string`

事件名。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEvent`](TEvent.md).[`registerCustomName`](TEvent.md#registercustomname)

***

### unregisterCustomName()

> `static` **unregisterCustomName**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:5857](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L5857)

注销事件名称。

#### Parameters

##### name

`string`

事件名。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEvent`](TEvent.md).[`unregisterCustomName`](TEvent.md#unregistercustomname)
