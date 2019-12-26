[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TPropChangeEvent](_awtk_.tpropchangeevent.md)

# Class: TPropChangeEvent

对象属性变化事件。

## Hierarchy

* [TEvent](_awtk_.tevent.md)

  ↳ **TPropChangeEvent**

## Index

### Constructors

* [constructor](_awtk_.tpropchangeevent.md#constructor)

### Properties

* [nativeObj](_awtk_.tpropchangeevent.md#nativeobj)

### Accessors

* [name](_awtk_.tpropchangeevent.md#name)
* [target](_awtk_.tpropchangeevent.md#target)
* [time](_awtk_.tpropchangeevent.md#time)
* [type](_awtk_.tpropchangeevent.md#type)
* [value](_awtk_.tpropchangeevent.md#value)

### Methods

* [destroy](_awtk_.tpropchangeevent.md#destroy)
* [cast](_awtk_.tpropchangeevent.md#static-cast)
* [create](_awtk_.tpropchangeevent.md#static-create)

## Constructors

###  constructor

\+ **new TPropChangeEvent**(`nativeObj`: any): *[TPropChangeEvent](_awtk_.tpropchangeevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[constructor](_awtk_.tevent.md#constructor)*

*Defined in [awtk.ts:11371](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L11371)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TPropChangeEvent](_awtk_.tpropchangeevent.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TEvent](_awtk_.tevent.md).[nativeObj](_awtk_.tevent.md#nativeobj)*

*Defined in [awtk.ts:11371](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L11371)*

## Accessors

###  name

• **get name**(): *string*

*Defined in [awtk.ts:11393](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L11393)*

属性的名称。

**Returns:** *string*

___

###  target

• **get target**(): *any*

*Inherited from [TEvent](_awtk_.tevent.md).[target](_awtk_.tevent.md#target)*

*Defined in [awtk.ts:1710](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1710)*

事件发生的目标对象。

**Returns:** *any*

___

###  time

• **get time**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[time](_awtk_.tevent.md#time)*

*Defined in [awtk.ts:1701](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1701)*

事件发生的时间。

**Returns:** *number*

___

###  type

• **get type**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[type](_awtk_.tevent.md#type)*

*Defined in [awtk.ts:1692](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1692)*

类型。

**Returns:** *number*

___

###  value

• **get value**(): *[TValue](_awtk_.tvalue.md)*

*Defined in [awtk.ts:11402](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L11402)*

属性的值。

**Returns:** *[TValue](_awtk_.tvalue.md)*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[destroy](_awtk_.tevent.md#destroy)*

*Defined in [awtk.ts:1683](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1683)*

销毁事件对象。

主要给脚本语言使用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`event`: [TEvent](_awtk_.tevent.md)): *[TPropChangeEvent](_awtk_.tpropchangeevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[cast](_awtk_.tevent.md#static-cast)*

*Defined in [awtk.ts:11384](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L11384)*

把event对象转prop_change_event_t对象，主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`event` | [TEvent](_awtk_.tevent.md) | event对象。  |

**Returns:** *[TPropChangeEvent](_awtk_.tpropchangeevent.md)*

返回event对象。

___

### `Static` create

▸ **create**(`type`: number): *[TEvent](_awtk_.tevent.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[create](_awtk_.tevent.md#static-create)*

*Defined in [awtk.ts:1670](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1670)*

创建event对象。

主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | number | 事件类型。  |

**Returns:** *[TEvent](_awtk_.tevent.md)*

返回事件对象。
