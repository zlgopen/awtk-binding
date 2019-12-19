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

*Defined in [awtk.ts:15672](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15672)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TKeyEvent](_awtk_.tkeyevent.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TEvent](_awtk_.tevent.md).[nativeObj](_awtk_.tevent.md#nativeobj)*

*Defined in [awtk.ts:15672](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15672)*

## Accessors

###  alt

• **get alt**(): *boolean*

*Defined in [awtk.ts:15703](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15703)*

alt键是否按下。

**Returns:** *boolean*

___

###  capslock

• **get capslock**(): *boolean*

*Defined in [awtk.ts:15804](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15804)*

capslock键是否按下。

**Returns:** *boolean*

___

###  cmd

• **get cmd**(): *boolean*

*Defined in [awtk.ts:15786](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15786)*

left shift键是否按下。
cmd/win键是否按下。

**Returns:** *boolean*

___

###  ctrl

• **get ctrl**(): *boolean*

*Defined in [awtk.ts:15731](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15731)*

right alt键是否按下。
ctrl键是否按下。

**Returns:** *boolean*

___

###  key

• **get key**(): *number*

*Defined in [awtk.ts:15694](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15694)*

键值。

**Returns:** *number*

___

###  lalt

• **get lalt**(): *boolean*

*Defined in [awtk.ts:15712](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15712)*

left alt键是否按下。

**Returns:** *boolean*

___

###  lctrl

• **get lctrl**(): *boolean*

*Defined in [awtk.ts:15740](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15740)*

left ctrl键是否按下。

**Returns:** *boolean*

___

###  lshift

• **get lshift**(): *boolean*

*Defined in [awtk.ts:15767](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15767)*

left shift键是否按下。

**Returns:** *boolean*

___

###  menu

• **get menu**(): *boolean*

*Defined in [awtk.ts:15795](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15795)*

menu键是否按下。

**Returns:** *boolean*

___

###  ralt

• **get ralt**(): *boolean*

*Defined in [awtk.ts:15721](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15721)*

right alt键是否按下。

**Returns:** *boolean*

___

###  rctrl

• **get rctrl**(): *boolean*

*Defined in [awtk.ts:15749](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15749)*

right ctrl键是否按下。

**Returns:** *boolean*

___

###  rshift

• **get rshift**(): *boolean*

*Defined in [awtk.ts:15776](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15776)*

right shift键是否按下。

**Returns:** *boolean*

___

###  shift

• **get shift**(): *boolean*

*Defined in [awtk.ts:15758](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15758)*

shift键是否按下。

**Returns:** *boolean*

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

▸ **cast**(`event`: [TEvent](_awtk_.tevent.md)): *[TKeyEvent](_awtk_.tkeyevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[cast](_awtk_.tevent.md#static-cast)*

*Defined in [awtk.ts:15685](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L15685)*

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

*Defined in [awtk.ts:1663](https://github.com/zlgopen/awtk-binding/blob/d304871/tools/code_gen/js/output/awtk.ts#L1663)*

创建event对象。

主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | number | 事件类型。  |

**Returns:** *[TEvent](_awtk_.tevent.md)*

返回事件对象。
