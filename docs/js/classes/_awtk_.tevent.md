[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TEvent](_awtk_.tevent.md)

# Class: TEvent

事件基类。

## Hierarchy

* **TEvent**

  ↳ [TPropChangeEvent](_awtk_.tpropchangeevent.md)

  ↳ [TProgressEvent](_awtk_.tprogressevent.md)

  ↳ [TWindowEvent](_awtk_.twindowevent.md)

  ↳ [TPaintEvent](_awtk_.tpaintevent.md)

  ↳ [TKeyEvent](_awtk_.tkeyevent.md)

  ↳ [TPointerEvent](_awtk_.tpointerevent.md)

  ↳ [TOrientationEvent](_awtk_.torientationevent.md)

  ↳ [TWheelEvent](_awtk_.twheelevent.md)

## Index

### Constructors

* [constructor](_awtk_.tevent.md#constructor)

### Properties

* [nativeObj](_awtk_.tevent.md#nativeobj)

### Accessors

* [target](_awtk_.tevent.md#target)
* [time](_awtk_.tevent.md#time)
* [type](_awtk_.tevent.md#type)

### Methods

* [destroy](_awtk_.tevent.md#destroy)
* [cast](_awtk_.tevent.md#static-cast)
* [create](_awtk_.tevent.md#static-create)

## Constructors

###  constructor

\+ **new TEvent**(`nativeObj`: any): *[TEvent](_awtk_.tevent.md)*

*Defined in [awtk.ts:1639](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1639)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TEvent](_awtk_.tevent.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:1639](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1639)*

## Accessors

###  target

• **get target**(): *any*

*Defined in [awtk.ts:1708](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1708)*

事件发生的目标对象。

**Returns:** *any*

___

###  time

• **get time**(): *number*

*Defined in [awtk.ts:1699](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1699)*

事件发生的时间。

**Returns:** *number*

___

###  type

• **get type**(): *number*

*Defined in [awtk.ts:1690](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1690)*

类型。

**Returns:** *number*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:1681](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1681)*

销毁事件对象。

主要给脚本语言使用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`event`: [TEvent](_awtk_.tevent.md)): *[TEvent](_awtk_.tevent.md)*

*Defined in [awtk.ts:1654](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1654)*

转换为event对象。

> 供脚本语言使用

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`event` | [TEvent](_awtk_.tevent.md) | event对象。  |

**Returns:** *[TEvent](_awtk_.tevent.md)*

event对象。

___

### `Static` create

▸ **create**(`type`: number): *[TEvent](_awtk_.tevent.md)*

*Defined in [awtk.ts:1668](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1668)*

创建event对象。

主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | number | 事件类型。  |

**Returns:** *[TEvent](_awtk_.tevent.md)*

返回事件对象。
