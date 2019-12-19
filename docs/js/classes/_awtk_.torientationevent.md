[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TOrientationEvent](_awtk_.torientationevent.md)

# Class: TOrientationEvent

滚轮事件。

## Hierarchy

* [TEvent](_awtk_.tevent.md)

  ↳ **TOrientationEvent**

## Index

### Constructors

* [constructor](_awtk_.torientationevent.md#constructor)

### Properties

* [nativeObj](_awtk_.torientationevent.md#nativeobj)

### Accessors

* [orientation](_awtk_.torientationevent.md#orientation)
* [target](_awtk_.torientationevent.md#target)
* [time](_awtk_.torientationevent.md#time)
* [type](_awtk_.torientationevent.md#type)

### Methods

* [destroy](_awtk_.torientationevent.md#destroy)
* [cast](_awtk_.torientationevent.md#static-cast)
* [create](_awtk_.torientationevent.md#static-create)

## Constructors

###  constructor

\+ **new TOrientationEvent**(`nativeObj`: any): *[TOrientationEvent](_awtk_.torientationevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[constructor](_awtk_.tevent.md#constructor)*

*Defined in [awtk.ts:15918](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15918)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TOrientationEvent](_awtk_.torientationevent.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TEvent](_awtk_.tevent.md).[nativeObj](_awtk_.tevent.md#nativeobj)*

*Defined in [awtk.ts:15918](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15918)*

## Accessors

###  orientation

• **get orientation**(): *number*

*Defined in [awtk.ts:15940](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15940)*

屏幕方向。

**Returns:** *number*

___

###  target

• **get target**(): *any*

*Inherited from [TEvent](_awtk_.tevent.md).[target](_awtk_.tevent.md#target)*

*Defined in [awtk.ts:1703](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L1703)*

事件发生的目标对象。

**Returns:** *any*

___

###  time

• **get time**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[time](_awtk_.tevent.md#time)*

*Defined in [awtk.ts:1694](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L1694)*

事件发生的时间。

**Returns:** *number*

___

###  type

• **get type**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[type](_awtk_.tevent.md#type)*

*Defined in [awtk.ts:1685](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L1685)*

类型。

**Returns:** *number*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[destroy](_awtk_.tevent.md#destroy)*

*Defined in [awtk.ts:1676](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L1676)*

销毁事件对象。

主要给脚本语言使用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`event`: [TEvent](_awtk_.tevent.md)): *[TOrientationEvent](_awtk_.torientationevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[cast](_awtk_.tevent.md#static-cast)*

*Defined in [awtk.ts:15931](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15931)*

把event对象转orientation_event_t对象，主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`event` | [TEvent](_awtk_.tevent.md) | event对象。  |

**Returns:** *[TOrientationEvent](_awtk_.torientationevent.md)*

event对象。

___

### `Static` create

▸ **create**(`type`: number): *[TEvent](_awtk_.tevent.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[create](_awtk_.tevent.md#static-create)*

*Defined in [awtk.ts:1663](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L1663)*

创建event对象。

主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | number | 事件类型。  |

**Returns:** *[TEvent](_awtk_.tevent.md)*

返回事件对象。
