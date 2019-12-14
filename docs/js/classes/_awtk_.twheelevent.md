[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TWheelEvent](_awtk_.twheelevent.md)

# Class: TWheelEvent

滚轮事件。

## Hierarchy

* [TEvent](_awtk_.tevent.md)

  ↳ **TWheelEvent**

## Index

### Constructors

* [constructor](_awtk_.twheelevent.md#constructor)

### Properties

* [nativeObj](_awtk_.twheelevent.md#nativeobj)

### Accessors

* [alt](_awtk_.twheelevent.md#alt)
* [ctrl](_awtk_.twheelevent.md#ctrl)
* [dy](_awtk_.twheelevent.md#dy)
* [shift](_awtk_.twheelevent.md#shift)
* [target](_awtk_.twheelevent.md#target)
* [time](_awtk_.twheelevent.md#time)
* [type](_awtk_.twheelevent.md#type)

### Methods

* [destroy](_awtk_.twheelevent.md#destroy)
* [cast](_awtk_.twheelevent.md#static-cast)
* [create](_awtk_.twheelevent.md#static-create)

## Constructors

###  constructor

\+ **new TWheelEvent**(`nativeObj`: any): *[TWheelEvent](_awtk_.twheelevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[constructor](_awtk_.tevent.md#constructor)*

*Defined in [awtk.ts:16039](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L16039)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TWheelEvent](_awtk_.twheelevent.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TEvent](_awtk_.tevent.md).[nativeObj](_awtk_.tevent.md#nativeobj)*

*Defined in [awtk.ts:16039](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L16039)*

## Accessors

###  alt

• **get alt**(): *boolean*

*Defined in [awtk.ts:16070](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L16070)*

alt键是否按下。

**Returns:** *boolean*

___

###  ctrl

• **get ctrl**(): *boolean*

*Defined in [awtk.ts:16079](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L16079)*

ctrl键是否按下。

**Returns:** *boolean*

___

###  dy

• **get dy**(): *number*

*Defined in [awtk.ts:16061](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L16061)*

滚轮的y值。

**Returns:** *number*

___

###  shift

• **get shift**(): *boolean*

*Defined in [awtk.ts:16088](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L16088)*

shift键是否按下。

**Returns:** *boolean*

___

###  target

• **get target**(): *any*

*Inherited from [TEvent](_awtk_.tevent.md).[target](_awtk_.tevent.md#target)*

*Defined in [awtk.ts:1694](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L1694)*

事件发生的目标对象。

**Returns:** *any*

___

###  time

• **get time**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[time](_awtk_.tevent.md#time)*

*Defined in [awtk.ts:1685](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L1685)*

事件发生的时间。

**Returns:** *number*

___

###  type

• **get type**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[type](_awtk_.tevent.md#type)*

*Defined in [awtk.ts:1676](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L1676)*

类型。

**Returns:** *number*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[destroy](_awtk_.tevent.md#destroy)*

*Defined in [awtk.ts:1667](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L1667)*

销毁事件对象。

主要给脚本语言使用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`event`: [TEvent](_awtk_.tevent.md)): *[TWheelEvent](_awtk_.twheelevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[cast](_awtk_.tevent.md#static-cast)*

*Defined in [awtk.ts:16052](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L16052)*

把event对象转wheel_event_t对象，主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`event` | [TEvent](_awtk_.tevent.md) | event对象。  |

**Returns:** *[TWheelEvent](_awtk_.twheelevent.md)*

event对象。

___

### `Static` create

▸ **create**(`type`: number): *[TEvent](_awtk_.tevent.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[create](_awtk_.tevent.md#static-create)*

*Defined in [awtk.ts:1654](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L1654)*

创建event对象。

主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | number | 事件类型。  |

**Returns:** *[TEvent](_awtk_.tevent.md)*

返回事件对象。
