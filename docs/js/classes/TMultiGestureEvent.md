[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TMultiGestureEvent

# Class: TMultiGestureEvent

多点触摸手势事件。

## Extends

- [`TEvent`](TEvent.md)

## Constructors

### new TMultiGestureEvent()

> **new TMultiGestureEvent**(`nativeObj`): [`TMultiGestureEvent`](TMultiGestureEvent.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TMultiGestureEvent`](TMultiGestureEvent.md)

#### Overrides

[`TEvent`](TEvent.md).[`constructor`](TEvent.md#constructors)

#### Defined in

[awtk.ts:15958](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L15958)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TEvent`](TEvent.md).[`nativeObj`](TEvent.md#nativeobj)

#### Defined in

[awtk.ts:15957](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L15957)

## Accessors

### distance

> `get` **distance**(): `number`

两点间的距离增量。(-1,0)表示缩小，(0-1)表示增加。

#### Returns

`number`

#### Defined in

[awtk.ts:16006](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16006)

***

### rotation

> `get` **rotation**(): `number`

旋转角度(幅度)增量。（单位弧度）

#### Returns

`number`

#### Defined in

[awtk.ts:15997](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L15997)

***

### size

> `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Inherited from

[`TEvent`](TEvent.md).[`size`](TEvent.md#size)

#### Defined in

[awtk.ts:5897](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5897)

***

### target

> `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Inherited from

[`TEvent`](TEvent.md).[`target`](TEvent.md#target)

#### Defined in

[awtk.ts:5915](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5915)

***

### time

> `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Inherited from

[`TEvent`](TEvent.md).[`time`](TEvent.md#time)

#### Defined in

[awtk.ts:5906](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5906)

***

### type

> `get` **type**(): `number`

类型。

#### Returns

`number`

#### Inherited from

[`TEvent`](TEvent.md).[`type`](TEvent.md#type)

#### Defined in

[awtk.ts:5888](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5888)

***

### x

> `get` **x**(): `number`

中心点x坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:15979](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L15979)

***

### y

> `get` **y**(): `number`

中心点y坐标。

#### Returns

`number`

#### Defined in

[awtk.ts:15988](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L15988)

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

[awtk.ts:5879](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5879)

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

[awtk.ts:5852](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5852)

***

### cast()

> `static` **cast**(`event`): [`TMultiGestureEvent`](TMultiGestureEvent.md)

把event对象转multi_gesture_event_t对象。

#### Parameters

• **event**: [`TEvent`](TEvent.md)

event对象。

#### Returns

[`TMultiGestureEvent`](TMultiGestureEvent.md)

event对象。

#### Overrides

[`TEvent`](TEvent.md).[`cast`](TEvent.md#cast)

#### Defined in

[awtk.ts:15970](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L15970)

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

[awtk.ts:5866](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5866)

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

[awtk.ts:5802](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5802)

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

[awtk.ts:5815](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5815)

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

[awtk.ts:5827](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L5827)
