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

*Defined in [awtk.ts:19298](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L19298)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TPointerEvent](_awtk_.tpointerevent.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TEvent](_awtk_.tevent.md).[nativeObj](_awtk_.tevent.md#nativeobj)*

*Defined in [awtk.ts:19298](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L19298)*

## Accessors

###  alt

• **get alt**(): *boolean*

*Defined in [awtk.ts:19362](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L19362)*

alt键是否按下。

**Returns:** *boolean*

___

###  button

• **get button**(): *number*

*Defined in [awtk.ts:19342](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L19342)*

button。

**Returns:** *number*

___

###  cmd

• **get cmd**(): *boolean*

*Defined in [awtk.ts:19382](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L19382)*

cmd键是否按下。

**Returns:** *boolean*

___

###  ctrl

• **get ctrl**(): *boolean*

*Defined in [awtk.ts:19372](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L19372)*

ctrl键是否按下。

**Returns:** *boolean*

___

###  menu

• **get menu**(): *boolean*

*Defined in [awtk.ts:19392](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L19392)*

menu键是否按下。

**Returns:** *boolean*

___

###  pressed

• **get pressed**(): *boolean*

*Defined in [awtk.ts:19352](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L19352)*

指针是否按下。

**Returns:** *boolean*

___

###  shift

• **get shift**(): *boolean*

*Defined in [awtk.ts:19402](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L19402)*

shift键是否按下。

**Returns:** *boolean*

___

###  target

• **get target**(): *any*

*Inherited from [TEvent](_awtk_.tevent.md).[target](_awtk_.tevent.md#target)*

*Defined in [awtk.ts:10525](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L10525)*

事件发生的目标对象。

**Returns:** *any*

___

###  time

• **get time**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[time](_awtk_.tevent.md#time)*

*Defined in [awtk.ts:10515](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L10515)*

事件发生的时间。

**Returns:** *number*

___

###  type

• **get type**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[type](_awtk_.tevent.md#type)*

*Defined in [awtk.ts:10505](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L10505)*

类型。

**Returns:** *number*

___

###  x

• **get x**(): *number*

*Defined in [awtk.ts:19322](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L19322)*

x坐标。

**Returns:** *number*

___

###  y

• **get y**(): *number*

*Defined in [awtk.ts:19332](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L19332)*

y坐标。

**Returns:** *number*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[destroy](_awtk_.tevent.md#destroy)*

*Defined in [awtk.ts:10495](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L10495)*

销毁事件对象。
主要给脚本语言使用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`event`: [TEvent](_awtk_.tevent.md)): *[TPointerEvent](_awtk_.tpointerevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[cast](_awtk_.tevent.md#static-cast)*

*Defined in [awtk.ts:19312](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L19312)*

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

*Defined in [awtk.ts:10481](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L10481)*

创建event对象。
主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | number | 事件类型。  |

**Returns:** *[TEvent](_awtk_.tevent.md)*

返回事件对象。
