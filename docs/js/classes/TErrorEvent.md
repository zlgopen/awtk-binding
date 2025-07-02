[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TErrorEvent

# Class: TErrorEvent

执行完成事件。

## Extends

- [`TEvent`](TEvent.md)

## Constructors

### new TErrorEvent()

> **new TErrorEvent**(`nativeObj`): [`TErrorEvent`](TErrorEvent.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TErrorEvent`](TErrorEvent.md)

#### Overrides

[`TEvent`](TEvent.md).[`constructor`](TEvent.md#constructors)

#### Defined in

[awtk.ts:24154](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L24154)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TEvent`](TEvent.md).[`nativeObj`](TEvent.md#nativeobj)

#### Defined in

[awtk.ts:24153](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L24153)

## Accessors

### code

> `get` **code**(): `number`

错误码。

#### Returns

`number`

#### Defined in

[awtk.ts:24175](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L24175)

***

### message

> `get` **message**(): `string`

错误信息。

#### Returns

`string`

#### Defined in

[awtk.ts:24184](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L24184)

***

### size

> `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Inherited from

[`TEvent`](TEvent.md).[`size`](TEvent.md#size)

#### Defined in

[awtk.ts:5875](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5875)

***

### target

> `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Inherited from

[`TEvent`](TEvent.md).[`target`](TEvent.md#target)

#### Defined in

[awtk.ts:5893](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5893)

***

### time

> `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Inherited from

[`TEvent`](TEvent.md).[`time`](TEvent.md#time)

#### Defined in

[awtk.ts:5884](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5884)

***

### type

> `get` **type**(): `number`

类型。

#### Returns

`number`

#### Inherited from

[`TEvent`](TEvent.md).[`type`](TEvent.md#type)

#### Defined in

[awtk.ts:5866](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5866)

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

[awtk.ts:5857](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5857)

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

[awtk.ts:5830](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5830)

***

### cast()

> `static` **cast**(`event`): [`TErrorEvent`](TErrorEvent.md)

把event对象转error_event_t对象。

#### Parameters

• **event**: [`TEvent`](TEvent.md)

event对象。

#### Returns

[`TErrorEvent`](TErrorEvent.md)

返回event对象。

#### Overrides

[`TEvent`](TEvent.md).[`cast`](TEvent.md#cast)

#### Defined in

[awtk.ts:24166](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L24166)

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

[awtk.ts:5844](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5844)

***

### fromName()

> `static` **fromName**(`name`): `number`

将事件名转换成事件的类型。

#### Parameters

• **name**: `string`

事件名。

#### Returns

`number`

返回事件的类型。

#### Inherited from

[`TEvent`](TEvent.md).[`fromName`](TEvent.md#fromname)

#### Defined in

[awtk.ts:5780](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5780)

***

### registerCustomName()

> `static` **registerCustomName**(`event_type`, `name`): [`TRet`](../enumerations/TRet.md)

给事件注册名称。

#### Parameters

• **event\_type**: `number`

事件类型。

• **name**: `string`

事件名。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEvent`](TEvent.md).[`registerCustomName`](TEvent.md#registercustomname)

#### Defined in

[awtk.ts:5793](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5793)

***

### unregisterCustomName()

> `static` **unregisterCustomName**(`name`): [`TRet`](../enumerations/TRet.md)

注销事件名称。

#### Parameters

• **name**: `string`

事件名。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEvent`](TEvent.md).[`unregisterCustomName`](TEvent.md#unregistercustomname)

#### Defined in

[awtk.ts:5805](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L5805)
