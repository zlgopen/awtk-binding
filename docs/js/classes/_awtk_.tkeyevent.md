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

*Defined in [awtk.ts:15837](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15837)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TKeyEvent](_awtk_.tkeyevent.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TEvent](_awtk_.tevent.md).[nativeObj](_awtk_.tevent.md#nativeobj)*

*Defined in [awtk.ts:15837](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15837)*

## Accessors

###  alt

• **get alt**(): *boolean*

*Defined in [awtk.ts:15868](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15868)*

alt键是否按下。

**Returns:** *boolean*

___

###  capslock

• **get capslock**(): *boolean*

*Defined in [awtk.ts:15967](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15967)*

capslock键是否按下。

**Returns:** *boolean*

___

###  cmd

• **get cmd**(): *boolean*

*Defined in [awtk.ts:15949](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15949)*

left shift键是否按下。 cmd/win键是否按下。

**Returns:** *boolean*

___

###  ctrl

• **get ctrl**(): *boolean*

*Defined in [awtk.ts:15895](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15895)*

right alt键是否按下。 ctrl键是否按下。

**Returns:** *boolean*

___

###  key

• **get key**(): *number*

*Defined in [awtk.ts:15859](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15859)*

键值。

**Returns:** *number*

___

###  lalt

• **get lalt**(): *boolean*

*Defined in [awtk.ts:15877](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15877)*

left alt键是否按下。

**Returns:** *boolean*

___

###  lctrl

• **get lctrl**(): *boolean*

*Defined in [awtk.ts:15904](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15904)*

left ctrl键是否按下。

**Returns:** *boolean*

___

###  lshift

• **get lshift**(): *boolean*

*Defined in [awtk.ts:15931](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15931)*

left shift键是否按下。

**Returns:** *boolean*

___

###  menu

• **get menu**(): *boolean*

*Defined in [awtk.ts:15958](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15958)*

menu键是否按下。

**Returns:** *boolean*

___

###  ralt

• **get ralt**(): *boolean*

*Defined in [awtk.ts:15886](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15886)*

right alt键是否按下。

**Returns:** *boolean*

___

###  rctrl

• **get rctrl**(): *boolean*

*Defined in [awtk.ts:15913](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15913)*

right ctrl键是否按下。

**Returns:** *boolean*

___

###  rshift

• **get rshift**(): *boolean*

*Defined in [awtk.ts:15940](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15940)*

right shift键是否按下。

**Returns:** *boolean*

___

###  shift

• **get shift**(): *boolean*

*Defined in [awtk.ts:15922](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15922)*

shift键是否按下。

**Returns:** *boolean*

___

###  target

• **get target**(): *any*

*Inherited from [TEvent](_awtk_.tevent.md).[target](_awtk_.tevent.md#target)*

*Defined in [awtk.ts:1689](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L1689)*

事件发生的目标对象。

**Returns:** *any*

___

###  time

• **get time**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[time](_awtk_.tevent.md#time)*

*Defined in [awtk.ts:1680](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L1680)*

事件发生的时间。

**Returns:** *number*

___

###  type

• **get type**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[type](_awtk_.tevent.md#type)*

*Defined in [awtk.ts:1671](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L1671)*

类型。

**Returns:** *number*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[destroy](_awtk_.tevent.md#destroy)*

*Defined in [awtk.ts:1662](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L1662)*

销毁事件对象。 主要给脚本语言使用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`event`: [TEvent](_awtk_.tevent.md)): *[TKeyEvent](_awtk_.tkeyevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[cast](_awtk_.tevent.md#static-cast)*

*Defined in [awtk.ts:15850](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L15850)*

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

*Defined in [awtk.ts:1650](https://github.com/zlgopen/awtk-binding/blob/346f0a7/tools/code_gen/js/output/awtk.ts#L1650)*

创建event对象。 主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | number | 事件类型。  |

**Returns:** *[TEvent](_awtk_.tevent.md)*

返回事件对象。
