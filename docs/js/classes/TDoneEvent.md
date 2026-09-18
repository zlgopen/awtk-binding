[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TDoneEvent

# Class: TDoneEvent

Defined in: [awtk.ts:24745](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L24745)

执行完成事件。

## Extends

- [`TEvent`](TEvent.md)

## Constructors

### Constructor

> **new TDoneEvent**(`nativeObj`): `TDoneEvent`

Defined in: [awtk.ts:24747](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L24747)

#### Parameters

##### nativeObj

`any`

#### Returns

`TDoneEvent`

#### Overrides

[`TEvent`](TEvent.md).[`constructor`](TEvent.md#constructor)

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:24746](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L24746)

#### Overrides

[`TEvent`](TEvent.md).[`nativeObj`](TEvent.md#nativeobj)

## Accessors

### result

#### Get Signature

> **get** **result**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:24768](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L24768)

执行结果。

##### Returns

[`TRet`](../enumerations/TRet.md)

***

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

Defined in: [awtk.ts:5918](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L5918)

类型。

##### Returns

`number`

#### Inherited from

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

> `static` **cast**(`event`): `TDoneEvent`

Defined in: [awtk.ts:24759](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L24759)

把event对象转done_event_t对象。

#### Parameters

##### event

[`TEvent`](TEvent.md)

event对象。

#### Returns

`TDoneEvent`

返回event对象。

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
