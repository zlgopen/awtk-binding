[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TPaintEvent](_awtk_.tpaintevent.md)

# Class: TPaintEvent

绘制事件。

## Hierarchy

* [TEvent](_awtk_.tevent.md)

  ↳ **TPaintEvent**

## Index

### Constructors

* [constructor](_awtk_.tpaintevent.md#constructor)

### Properties

* [nativeObj](_awtk_.tpaintevent.md#nativeobj)

### Accessors

* [c](_awtk_.tpaintevent.md#c)
* [target](_awtk_.tpaintevent.md#target)
* [time](_awtk_.tpaintevent.md#time)
* [type](_awtk_.tpaintevent.md#type)

### Methods

* [destroy](_awtk_.tpaintevent.md#destroy)
* [cast](_awtk_.tpaintevent.md#static-cast)
* [create](_awtk_.tpaintevent.md#static-create)

## Constructors

###  constructor

\+ **new TPaintEvent**(`nativeObj`: any): *[TPaintEvent](_awtk_.tpaintevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[constructor](_awtk_.tevent.md#constructor)*

*Defined in [awtk.ts:15721](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L15721)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TPaintEvent](_awtk_.tpaintevent.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TEvent](_awtk_.tevent.md).[nativeObj](_awtk_.tevent.md#nativeobj)*

*Defined in [awtk.ts:15721](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L15721)*

## Accessors

###  c

• **get c**(): *[TCanvas](_awtk_.tcanvas.md)*

*Defined in [awtk.ts:15743](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L15743)*

canvas。

**Returns:** *[TCanvas](_awtk_.tcanvas.md)*

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

▸ **cast**(`event`: [TEvent](_awtk_.tevent.md)): *[TPaintEvent](_awtk_.tpaintevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[cast](_awtk_.tevent.md#static-cast)*

*Defined in [awtk.ts:15734](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L15734)*

把event对象转paint_event_t对象。主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`event` | [TEvent](_awtk_.tevent.md) | event对象。  |

**Returns:** *[TPaintEvent](_awtk_.tpaintevent.md)*

event 对象。

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
