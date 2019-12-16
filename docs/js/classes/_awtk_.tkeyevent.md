[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TKeyEvent](_awtk_.tkeyevent.md)

# Class: TKeyEvent

按键事件。

## Hierarchy

* [TEvent](_awtk_.tevent.md)

  ↳ **TKeyEvent**

## Index

### Constructors

* [constructor](_awtk_.tkeyevent.md#constructor)

### Properties

* [nativeObj](_awtk_.tkeyevent.md#nativeobj)

### Accessors

* [alt](_awtk_.tkeyevent.md#alt)
* [capslock](_awtk_.tkeyevent.md#capslock)
* [cmd](_awtk_.tkeyevent.md#cmd)
* [ctrl](_awtk_.tkeyevent.md#ctrl)
* [key](_awtk_.tkeyevent.md#key)
* [lalt](_awtk_.tkeyevent.md#lalt)
* [lctrl](_awtk_.tkeyevent.md#lctrl)
* [lshift](_awtk_.tkeyevent.md#lshift)
* [menu](_awtk_.tkeyevent.md#menu)
* [ralt](_awtk_.tkeyevent.md#ralt)
* [rctrl](_awtk_.tkeyevent.md#rctrl)
* [rshift](_awtk_.tkeyevent.md#rshift)
* [shift](_awtk_.tkeyevent.md#shift)
* [target](_awtk_.tkeyevent.md#target)
* [time](_awtk_.tkeyevent.md#time)
* [type](_awtk_.tkeyevent.md#type)

### Methods

* [destroy](_awtk_.tkeyevent.md#destroy)
* [cast](_awtk_.tkeyevent.md#static-cast)
* [create](_awtk_.tkeyevent.md#static-create)

## Constructors

###  constructor

\+ **new TKeyEvent**(`nativeObj`: any): *[TKeyEvent](_awtk_.tkeyevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[constructor](_awtk_.tevent.md#constructor)*

*Defined in [awtk.ts:15784](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15784)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TKeyEvent](_awtk_.tkeyevent.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TEvent](_awtk_.tevent.md).[nativeObj](_awtk_.tevent.md#nativeobj)*

*Defined in [awtk.ts:15784](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15784)*

## Accessors

###  alt

• **get alt**(): *boolean*

*Defined in [awtk.ts:15815](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15815)*

alt键是否按下。

**Returns:** *boolean*

___

###  capslock

• **get capslock**(): *boolean*

*Defined in [awtk.ts:15916](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15916)*

capslock键是否按下。

**Returns:** *boolean*

___

###  cmd

• **get cmd**(): *boolean*

*Defined in [awtk.ts:15898](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15898)*

left shift键是否按下。
cmd/win键是否按下。

**Returns:** *boolean*

___

###  ctrl

• **get ctrl**(): *boolean*

*Defined in [awtk.ts:15843](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15843)*

right alt键是否按下。
ctrl键是否按下。

**Returns:** *boolean*

___

###  key

• **get key**(): *number*

*Defined in [awtk.ts:15806](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15806)*

键值。

**Returns:** *number*

___

###  lalt

• **get lalt**(): *boolean*

*Defined in [awtk.ts:15824](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15824)*

left alt键是否按下。

**Returns:** *boolean*

___

###  lctrl

• **get lctrl**(): *boolean*

*Defined in [awtk.ts:15852](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15852)*

left ctrl键是否按下。

**Returns:** *boolean*

___

###  lshift

• **get lshift**(): *boolean*

*Defined in [awtk.ts:15879](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15879)*

left shift键是否按下。

**Returns:** *boolean*

___

###  menu

• **get menu**(): *boolean*

*Defined in [awtk.ts:15907](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15907)*

menu键是否按下。

**Returns:** *boolean*

___

###  ralt

• **get ralt**(): *boolean*

*Defined in [awtk.ts:15833](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15833)*

right alt键是否按下。

**Returns:** *boolean*

___

###  rctrl

• **get rctrl**(): *boolean*

*Defined in [awtk.ts:15861](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15861)*

right ctrl键是否按下。

**Returns:** *boolean*

___

###  rshift

• **get rshift**(): *boolean*

*Defined in [awtk.ts:15888](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15888)*

right shift键是否按下。

**Returns:** *boolean*

___

###  shift

• **get shift**(): *boolean*

*Defined in [awtk.ts:15870](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15870)*

shift键是否按下。

**Returns:** *boolean*

___

###  target

• **get target**(): *any*

*Inherited from [TEvent](_awtk_.tevent.md).[target](_awtk_.tevent.md#target)*

*Defined in [awtk.ts:1696](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L1696)*

事件发生的目标对象。

**Returns:** *any*

___

###  time

• **get time**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[time](_awtk_.tevent.md#time)*

*Defined in [awtk.ts:1687](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L1687)*

事件发生的时间。

**Returns:** *number*

___

###  type

• **get type**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[type](_awtk_.tevent.md#type)*

*Defined in [awtk.ts:1678](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L1678)*

类型。

**Returns:** *number*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[destroy](_awtk_.tevent.md#destroy)*

*Defined in [awtk.ts:1669](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L1669)*

销毁事件对象。

主要给脚本语言使用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`event`: [TEvent](_awtk_.tevent.md)): *[TKeyEvent](_awtk_.tkeyevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[cast](_awtk_.tevent.md#static-cast)*

*Defined in [awtk.ts:15797](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L15797)*

把event对象转key_event_t对象，主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`event` | [TEvent](_awtk_.tevent.md) | event对象。  |

**Returns:** *[TKeyEvent](_awtk_.tkeyevent.md)*

event对象。

___

### `Static` create

▸ **create**(`type`: number): *[TEvent](_awtk_.tevent.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[create](_awtk_.tevent.md#static-create)*

*Defined in [awtk.ts:1656](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L1656)*

创建event对象。

主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | number | 事件类型。  |

**Returns:** *[TEvent](_awtk_.tevent.md)*

返回事件对象。
