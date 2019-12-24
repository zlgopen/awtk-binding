[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TWindowEvent](_awtk_.twindowevent.md)

# Class: TWindowEvent

窗口事件，由窗口管理器触发。

## Hierarchy

* [TEvent](_awtk_.tevent.md)

  ↳ **TWindowEvent**

## Index

### Constructors

* [constructor](_awtk_.twindowevent.md#constructor)

### Properties

* [nativeObj](_awtk_.twindowevent.md#nativeobj)

### Accessors

* [target](_awtk_.twindowevent.md#target)
* [time](_awtk_.twindowevent.md#time)
* [type](_awtk_.twindowevent.md#type)
* [window](_awtk_.twindowevent.md#window)

### Methods

* [destroy](_awtk_.twindowevent.md#destroy)
* [cast](_awtk_.twindowevent.md#static-cast)
* [create](_awtk_.twindowevent.md#static-create)

## Constructors

###  constructor

\+ **new TWindowEvent**(`nativeObj`: any): *[TWindowEvent](_awtk_.twindowevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[constructor](_awtk_.tevent.md#constructor)*

*Defined in [awtk.ts:15657](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L15657)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TWindowEvent](_awtk_.twindowevent.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TEvent](_awtk_.tevent.md).[nativeObj](_awtk_.tevent.md#nativeobj)*

*Defined in [awtk.ts:15657](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L15657)*

## Accessors

###  target

• **get target**(): *any*

*Inherited from [TEvent](_awtk_.tevent.md).[target](_awtk_.tevent.md#target)*

*Defined in [awtk.ts:1708](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L1708)*

事件发生的目标对象。

**Returns:** *any*

___

###  time

• **get time**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[time](_awtk_.tevent.md#time)*

*Defined in [awtk.ts:1699](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L1699)*

事件发生的时间。

**Returns:** *number*

___

###  type

• **get type**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[type](_awtk_.tevent.md#type)*

*Defined in [awtk.ts:1690](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L1690)*

类型。

**Returns:** *number*

___

###  window

• **get window**(): *[TWidget](_awtk_.twidget.md)*

*Defined in [awtk.ts:15679](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L15679)*

canvas。

**Returns:** *[TWidget](_awtk_.twidget.md)*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[destroy](_awtk_.tevent.md#destroy)*

*Defined in [awtk.ts:1681](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L1681)*

销毁事件对象。

主要给脚本语言使用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`event`: [TEvent](_awtk_.tevent.md)): *[TWindowEvent](_awtk_.twindowevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[cast](_awtk_.tevent.md#static-cast)*

*Defined in [awtk.ts:15670](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L15670)*

把event对象转window_event_t对象。主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`event` | [TEvent](_awtk_.tevent.md) | event对象。  |

**Returns:** *[TWindowEvent](_awtk_.twindowevent.md)*

对象。

___

### `Static` create

▸ **create**(`type`: number): *[TEvent](_awtk_.tevent.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[create](_awtk_.tevent.md#static-create)*

*Defined in [awtk.ts:1668](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L1668)*

创建event对象。

主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | number | 事件类型。  |

**Returns:** *[TEvent](_awtk_.tevent.md)*

返回事件对象。
