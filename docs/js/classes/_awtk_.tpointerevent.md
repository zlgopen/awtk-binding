[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TPointerEvent](_awtk_.tpointerevent.md)

# Class: TPointerEvent

指针事件。

## Hierarchy

* [TEvent](_awtk_.tevent.md)

  ↳ **TPointerEvent**

## Index

### Constructors

* [constructor](_awtk_.tpointerevent.md#constructor)

### Properties

* [nativeObj](_awtk_.tpointerevent.md#nativeobj)

### Accessors

* [alt](_awtk_.tpointerevent.md#alt)
* [button](_awtk_.tpointerevent.md#button)
* [cmd](_awtk_.tpointerevent.md#cmd)
* [ctrl](_awtk_.tpointerevent.md#ctrl)
* [menu](_awtk_.tpointerevent.md#menu)
* [pressed](_awtk_.tpointerevent.md#pressed)
* [shift](_awtk_.tpointerevent.md#shift)
* [target](_awtk_.tpointerevent.md#target)
* [time](_awtk_.tpointerevent.md#time)
* [type](_awtk_.tpointerevent.md#type)
* [x](_awtk_.tpointerevent.md#x)
* [y](_awtk_.tpointerevent.md#y)

### Methods

* [destroy](_awtk_.tpointerevent.md#destroy)
* [cast](_awtk_.tpointerevent.md#static-cast)
* [create](_awtk_.tpointerevent.md#static-create)

## Constructors

###  constructor

\+ **new TPointerEvent**(`nativeObj`: any): *[TPointerEvent](_awtk_.tpointerevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[constructor](_awtk_.tevent.md#constructor)*

*Defined in [awtk.ts:15979](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L15979)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TPointerEvent](_awtk_.tpointerevent.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TEvent](_awtk_.tevent.md).[nativeObj](_awtk_.tevent.md#nativeobj)*

*Defined in [awtk.ts:15979](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L15979)*

## Accessors

###  alt

• **get alt**(): *boolean*

*Defined in [awtk.ts:16037](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L16037)*

alt键是否按下。

**Returns:** *boolean*

___

###  button

• **get button**(): *number*

*Defined in [awtk.ts:16019](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L16019)*

button。

**Returns:** *number*

___

###  cmd

• **get cmd**(): *boolean*

*Defined in [awtk.ts:16055](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L16055)*

cmd键是否按下。

**Returns:** *boolean*

___

###  ctrl

• **get ctrl**(): *boolean*

*Defined in [awtk.ts:16046](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L16046)*

ctrl键是否按下。

**Returns:** *boolean*

___

###  menu

• **get menu**(): *boolean*

*Defined in [awtk.ts:16064](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L16064)*

menu键是否按下。

**Returns:** *boolean*

___

###  pressed

• **get pressed**(): *boolean*

*Defined in [awtk.ts:16028](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L16028)*

指针是否按下。

**Returns:** *boolean*

___

###  shift

• **get shift**(): *boolean*

*Defined in [awtk.ts:16073](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L16073)*

shift键是否按下。

**Returns:** *boolean*

___

###  target

• **get target**(): *any*

*Inherited from [TEvent](_awtk_.tevent.md).[target](_awtk_.tevent.md#target)*

*Defined in [awtk.ts:1689](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1689)*

事件发生的目标对象。

**Returns:** *any*

___

###  time

• **get time**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[time](_awtk_.tevent.md#time)*

*Defined in [awtk.ts:1680](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1680)*

事件发生的时间。

**Returns:** *number*

___

###  type

• **get type**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[type](_awtk_.tevent.md#type)*

*Defined in [awtk.ts:1671](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1671)*

类型。

**Returns:** *number*

___

###  x

• **get x**(): *number*

*Defined in [awtk.ts:16001](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L16001)*

x坐标。

**Returns:** *number*

___

###  y

• **get y**(): *number*

*Defined in [awtk.ts:16010](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L16010)*

y坐标。

**Returns:** *number*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[destroy](_awtk_.tevent.md#destroy)*

*Defined in [awtk.ts:1662](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1662)*

销毁事件对象。 主要给脚本语言使用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`event`: [TEvent](_awtk_.tevent.md)): *[TPointerEvent](_awtk_.tpointerevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[cast](_awtk_.tevent.md#static-cast)*

*Defined in [awtk.ts:15992](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L15992)*

把event对象转pointer_event_t对象，主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`event` | [TEvent](_awtk_.tevent.md) | event对象。  |

**Returns:** *[TPointerEvent](_awtk_.tpointerevent.md)*

event对象。

___

### `Static` create

▸ **create**(`type`: number): *[TEvent](_awtk_.tevent.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[create](_awtk_.tevent.md#static-create)*

*Defined in [awtk.ts:1650](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1650)*

创建event对象。 主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | number | 事件类型。  |

**Returns:** *[TEvent](_awtk_.tevent.md)*

返回事件对象。
