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

[awtk.ts:24140](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L24140)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TEvent`](TEvent.md).[`nativeObj`](TEvent.md#nativeobj)

#### Defined in

[awtk.ts:24139](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L24139)

## Accessors

### code

> `get` **code**(): `number`

错误码。

#### Returns

`number`

#### Defined in

[awtk.ts:24161](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L24161)

***

### message

> `get` **message**(): `string`

错误信息。

#### Returns

`string`

#### Defined in

[awtk.ts:24170](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L24170)

***

### size

> `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Inherited from

[`TEvent`](TEvent.md).[`size`](TEvent.md#size)

#### Defined in

[awtk.ts:5874](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5874)

***

### target

> `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Inherited from

[`TEvent`](TEvent.md).[`target`](TEvent.md#target)

#### Defined in

[awtk.ts:5892](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5892)

***

### time

> `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Inherited from

[`TEvent`](TEvent.md).[`time`](TEvent.md#time)

#### Defined in

[awtk.ts:5883](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5883)

***

### type

> `get` **type**(): `number`

类型。

#### Returns

`number`

#### Inherited from

[`TEvent`](TEvent.md).[`type`](TEvent.md#type)

#### Defined in

[awtk.ts:5865](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5865)

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

[awtk.ts:5856](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5856)

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

[awtk.ts:5829](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5829)

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

[awtk.ts:24152](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L24152)

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

[awtk.ts:5843](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5843)

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

[awtk.ts:5779](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5779)

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

[awtk.ts:5792](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5792)

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

[awtk.ts:5804](https://github.com/zlgopen/awtk-binding/blob/a193834fdb1c1ee98bdcf84db4b6e5fd059e1d7c/tools/code_gen/js/output/awtk.ts#L5804)
