[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TWheelEvent

# Class: TWheelEvent

滚轮事件。

## Extends

- [`TEvent`](TEvent.md)

## Constructors

### new TWheelEvent()

> **new TWheelEvent**(`nativeObj`): [`TWheelEvent`](TWheelEvent.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TWheelEvent`](TWheelEvent.md)

#### Overrides

[`TEvent`](TEvent.md).[`constructor`](TEvent.md#constructors)

#### Defined in

[awtk.ts:15213](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L15213)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TEvent`](TEvent.md).[`nativeObj`](TEvent.md#nativeobj)

#### Defined in

[awtk.ts:15212](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L15212)

## Accessors

### alt

> `get` **alt**(): `boolean`

alt键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15261](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L15261)

***

### ctrl

> `get` **ctrl**(): `boolean`

ctrl键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15270](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L15270)

***

### dy

> `get` **dy**(): `number`

滚轮的y值。

#### Returns

`number`

#### Defined in

[awtk.ts:15252](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L15252)

***

### shift

> `get` **shift**(): `boolean`

shift键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15279](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L15279)

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

***

### x

> `get` **x**(): `number`

x坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:15234](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L15234)

***

### y

> `get` **y**(): `number`

y坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:15243](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L15243)

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

> `static` **cast**(`event`): [`TWheelEvent`](TWheelEvent.md)

把event对象转wheel_event_t对象。

#### Parameters

• **event**: [`TEvent`](TEvent.md)

event对象。

#### Returns

[`TWheelEvent`](TWheelEvent.md)

event对象。

#### Overrides

[`TEvent`](TEvent.md).[`cast`](TEvent.md#cast)

#### Defined in

[awtk.ts:15225](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L15225)

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
