[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TObject](_awtk_.tobject.md)

# Class: TObject

对象接口。

## Hierarchy

* [TEmitter](_awtk_.temitter.md)

  ↳ **TObject**

  ↳ [TIdleInfo](_awtk_.tidleinfo.md)

  ↳ [TObjectArray](_awtk_.tobjectarray.md)

  ↳ [TObjectDefault](_awtk_.tobjectdefault.md)

  ↳ [TTimerInfo](_awtk_.ttimerinfo.md)

## Index

### Constructors

* [constructor](_awtk_.tobject.md#constructor)

### Properties

* [nativeObj](_awtk_.tobject.md#nativeobj)

### Accessors

* [name](_awtk_.tobject.md#name)
* [refCount](_awtk_.tobject.md#refcount)

### Methods

* [canExec](_awtk_.tobject.md#canexec)
* [compare](_awtk_.tobject.md#compare)
* [copyProp](_awtk_.tobject.md#copyprop)
* [destroy](_awtk_.tobject.md#destroy)
* [disable](_awtk_.tobject.md#disable)
* [dispatch](_awtk_.tobject.md#dispatch)
* [dispatchSimpleEvent](_awtk_.tobject.md#dispatchsimpleevent)
* [enable](_awtk_.tobject.md#enable)
* [eval](_awtk_.tobject.md#eval)
* [exec](_awtk_.tobject.md#exec)
* [getDesc](_awtk_.tobject.md#getdesc)
* [getProp](_awtk_.tobject.md#getprop)
* [getPropBool](_awtk_.tobject.md#getpropbool)
* [getPropBoolByPath](_awtk_.tobject.md#getpropboolbypath)
* [getPropFloat](_awtk_.tobject.md#getpropfloat)
* [getPropFloatByPath](_awtk_.tobject.md#getpropfloatbypath)
* [getPropInt](_awtk_.tobject.md#getpropint)
* [getPropIntByPath](_awtk_.tobject.md#getpropintbypath)
* [getPropObject](_awtk_.tobject.md#getpropobject)
* [getPropObjectByPath](_awtk_.tobject.md#getpropobjectbypath)
* [getPropPointer](_awtk_.tobject.md#getproppointer)
* [getPropPointerByPath](_awtk_.tobject.md#getproppointerbypath)
* [getPropStr](_awtk_.tobject.md#getpropstr)
* [getPropStrByPath](_awtk_.tobject.md#getpropstrbypath)
* [getSize](_awtk_.tobject.md#getsize)
* [getType](_awtk_.tobject.md#gettype)
* [hasProp](_awtk_.tobject.md#hasprop)
* [isCollection](_awtk_.tobject.md#iscollection)
* [notifyChanged](_awtk_.tobject.md#notifychanged)
* [off](_awtk_.tobject.md#off)
* [on](_awtk_.tobject.md#on)
* [removeProp](_awtk_.tobject.md#removeprop)
* [setName](_awtk_.tobject.md#setname)
* [setProp](_awtk_.tobject.md#setprop)
* [setPropBool](_awtk_.tobject.md#setpropbool)
* [setPropFloat](_awtk_.tobject.md#setpropfloat)
* [setPropInt](_awtk_.tobject.md#setpropint)
* [setPropObject](_awtk_.tobject.md#setpropobject)
* [setPropStr](_awtk_.tobject.md#setpropstr)
* [size](_awtk_.tobject.md#size)
* [unref](_awtk_.tobject.md#unref)
* [cast](_awtk_.tobject.md#static-cast)
* [create](_awtk_.tobject.md#static-create)
* [ref](_awtk_.tobject.md#static-ref)

## Constructors

###  constructor

\+ **new TObject**(`nativeObj`: any): *[TObject](_awtk_.tobject.md)*

*Overrides [TEmitter](_awtk_.temitter.md).[constructor](_awtk_.temitter.md#constructor)*

*Defined in [awtk.ts:2509](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2509)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TObject](_awtk_.tobject.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TEmitter](_awtk_.temitter.md).[nativeObj](_awtk_.temitter.md#nativeobj)*

*Defined in [awtk.ts:2509](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2509)*

## Accessors

###  name

• **get name**(): *string*

*Defined in [awtk.ts:2984](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2984)*

对象的名称。

**Returns:** *string*

• **set name**(`v`: string): *void*

*Defined in [awtk.ts:2975](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2975)*

对象的名称。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  refCount

• **get refCount**(): *number*

*Defined in [awtk.ts:2971](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2971)*

引用计数。

**Returns:** *number*

## Methods

###  canExec

▸ **canExec**(`name`: string, `args`: string): *boolean*

*Defined in [awtk.ts:2855](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2855)*

检查是否可以执行指定的命令。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 命令的名称。 |
`args` | string | 命令的参数。  |

**Returns:** *boolean*

返回TRUE表示可以执行，否则表示不可以执行。

___

###  compare

▸ **compare**(`other`: [TObject](_awtk_.tobject.md)): *number*

*Defined in [awtk.ts:2608](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2608)*

比较两个对象。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`other` | [TObject](_awtk_.tobject.md) | 比较的object对象。  |

**Returns:** *number*

返回比较结果。

___

###  copyProp

▸ **copyProp**(`src`: [TObject](_awtk_.tobject.md), `name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2814](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2814)*

拷贝指定的属性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`src` | [TObject](_awtk_.tobject.md) | 源对象。 |
`name` | string | 属性的名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[destroy](_awtk_.temitter.md#destroy)*

*Defined in [awtk.ts:1945](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1945)*

销毁。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  disable

▸ **disable**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[disable](_awtk_.temitter.md#disable)*

*Defined in [awtk.ts:1921](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1921)*

禁用。 禁用后emitter_dispatch无效，但可以注册和注销。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  dispatch

▸ **dispatch**(`e`: [TEvent](_awtk_.tevent.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[dispatch](_awtk_.temitter.md#dispatch)*

*Defined in [awtk.ts:1856](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1856)*

分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。 禁用状态下，本函数不做任何事情。  如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`e` | [TEvent](_awtk_.tevent.md) | 事件对象。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

___

###  dispatchSimpleEvent

▸ **dispatchSimpleEvent**(`type`: [TEventType](../enums/_awtk_.teventtype.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[dispatchSimpleEvent](_awtk_.temitter.md#dispatchsimpleevent)*

*Defined in [awtk.ts:1869](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1869)*

分发事件。 对emitter_dispatch的包装，分发一个简单的事件。  如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | [TEventType](../enums/_awtk_.teventtype.md) | 事件类型。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

___

###  enable

▸ **enable**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[enable](_awtk_.temitter.md#enable)*

*Defined in [awtk.ts:1909](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1909)*

启用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  eval

▸ **eval**(`expr`: string, `v`: [TValue](_awtk_.tvalue.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2841](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2841)*

计算一个表达式，表达式中引用的变量从prop中获取。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`expr` | string | 表达式。 |
`v` | [TValue](_awtk_.tvalue.md) | 返回计算结果。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  exec

▸ **exec**(`name`: string, `args`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2869](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2869)*

执行指定的命令。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 命令的名称。 |
`args` | string | 命令的参数。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  getDesc

▸ **getDesc**(): *string*

*Defined in [awtk.ts:2558](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2558)*

获取对象的描述信息。

**Returns:** *string*

返回对象的描述信息。

___

###  getProp

▸ **getProp**(`name`: string, `v`: [TValue](_awtk_.tvalue.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2622](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2622)*

获取指定属性的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`v` | [TValue](_awtk_.tvalue.md) | 返回属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  getPropBool

▸ **getPropBool**(`name`: string, `defval`: boolean): *boolean*

*Defined in [awtk.ts:2689](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2689)*

获取指定属性的bool类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`defval` | boolean | 缺省值。  |

**Returns:** *boolean*

返回指定属性的bool类型的值。

___

###  getPropBoolByPath

▸ **getPropBoolByPath**(`path`: string, `defval`: boolean): *boolean*

*Defined in [awtk.ts:2948](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2948)*

获取指定属性的bool类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`path` | string | 属性的path。 |
`defval` | boolean | 缺省值。  |

**Returns:** *boolean*

返回指定属性的bool类型的值。

___

###  getPropFloat

▸ **getPropFloat**(`name`: string, `defval`: number): *number*

*Defined in [awtk.ts:2703](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2703)*

获取指定属性的浮点数类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`defval` | number | 缺省值。  |

**Returns:** *number*

返回指定属性的浮点数类型的值。

___

###  getPropFloatByPath

▸ **getPropFloatByPath**(`path`: string, `defval`: number): *number*

*Defined in [awtk.ts:2962](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2962)*

获取指定属性的浮点数类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`path` | string | 属性的path。 |
`defval` | number | 缺省值。  |

**Returns:** *number*

返回指定属性的浮点数类型的值。

___

###  getPropInt

▸ **getPropInt**(`name`: string, `defval`: number): *number*

*Defined in [awtk.ts:2675](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2675)*

获取指定属性的整数类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`defval` | number | 缺省值。  |

**Returns:** *number*

返回指定属性的整数类型的值。

___

###  getPropIntByPath

▸ **getPropIntByPath**(`path`: string, `defval`: number): *number*

*Defined in [awtk.ts:2934](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2934)*

获取指定属性的整数类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`path` | string | 属性的path。 |
`defval` | number | 缺省值。  |

**Returns:** *number*

返回指定属性的整数类型的值。

___

###  getPropObject

▸ **getPropObject**(`name`: string): *[TObject](_awtk_.tobject.md)*

*Defined in [awtk.ts:2661](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2661)*

获取指定属性的object类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。  |

**Returns:** *[TObject](_awtk_.tobject.md)*

返回指定属性的object类型的值。

___

###  getPropObjectByPath

▸ **getPropObjectByPath**(`path`: string): *[TObject](_awtk_.tobject.md)*

*Defined in [awtk.ts:2920](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2920)*

获取指定属性的object类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`path` | string | 属性的path。  |

**Returns:** *[TObject](_awtk_.tobject.md)*

返回指定属性的object类型的值。

___

###  getPropPointer

▸ **getPropPointer**(`name`: string): *any*

*Defined in [awtk.ts:2648](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2648)*

获取指定属性的指针类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。  |

**Returns:** *any*

返回指定属性的指针类型的值。

___

###  getPropPointerByPath

▸ **getPropPointerByPath**(`path`: string): *any*

*Defined in [awtk.ts:2907](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2907)*

获取指定属性的指针类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`path` | string | 属性的path。  |

**Returns:** *any*

返回指定属性的指针类型的值。

___

###  getPropStr

▸ **getPropStr**(`name`: string): *string*

*Defined in [awtk.ts:2635](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2635)*

获取指定属性的字符串类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。  |

**Returns:** *string*

返回指定属性的字符串类型的值。

___

###  getPropStrByPath

▸ **getPropStrByPath**(`path`: string): *string*

*Defined in [awtk.ts:2894](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2894)*

获取指定属性的字符串类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`path` | string | 属性的path。  |

**Returns:** *string*

返回指定属性的字符串类型的值。

___

###  getSize

▸ **getSize**(): *number*

*Defined in [awtk.ts:2570](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2570)*

获取对象占用内存的大小。

**Returns:** *number*

返回对象占用内存的大小。

___

###  getType

▸ **getType**(): *string*

*Defined in [awtk.ts:2546](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2546)*

获取对象的类型名称。

**Returns:** *string*

返回对象的类型名称。

___

###  hasProp

▸ **hasProp**(`name`: string): *boolean*

*Defined in [awtk.ts:2827](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2827)*

检查是否存在指定的属性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。  |

**Returns:** *boolean*

返回TRUE表示存在，否则表示不存在。

___

###  isCollection

▸ **isCollection**(): *boolean*

*Defined in [awtk.ts:2582](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2582)*

判断对象是否是集合。

**Returns:** *boolean*

返回TRUE表示是集合，否则不是。

___

###  notifyChanged

▸ **notifyChanged**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2881](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2881)*

触发EVT_PROPS_CHANGED事件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  off

▸ **off**(`id`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[off](_awtk_.temitter.md#off)*

*Defined in [awtk.ts:1897](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1897)*

注销指定事件的处理函数。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`id` | number | emitter_on返回的ID。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  on

▸ **on**(`type`: [TEventType](../enums/_awtk_.teventtype.md), `on_event`: Function, `ctx`: any): *number*

*Inherited from [TEmitter](_awtk_.temitter.md).[on](_awtk_.temitter.md#on)*

*Defined in [awtk.ts:1884](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1884)*

注册指定事件的处理函数。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | [TEventType](../enums/_awtk_.teventtype.md) | 事件类型。 |
`on_event` | Function | 事件处理函数。 |
`ctx` | any | 事件处理函数上下文。  |

**Returns:** *number*

返回id，用于emitter_off。

___

###  removeProp

▸ **removeProp**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2716](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2716)*

删除指定属性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setName

▸ **setName**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2595](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2595)*

设置对象的名称。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 对象的名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setProp

▸ **setProp**(`name`: string, `value`: [TValue](_awtk_.tvalue.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2730](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2730)*

设置指定属性的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`value` | [TValue](_awtk_.tvalue.md) | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPropBool

▸ **setPropBool**(`name`: string, `value`: any): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2786](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2786)*

设置指定属性的bool类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`value` | any | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPropFloat

▸ **setPropFloat**(`name`: string, `value`: any): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2800](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2800)*

设置指定属性的浮点数类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`value` | any | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPropInt

▸ **setPropInt**(`name`: string, `value`: any): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2772](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2772)*

设置指定属性的整数类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`value` | any | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPropObject

▸ **setPropObject**(`name`: string, `value`: [TObject](_awtk_.tobject.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2758](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2758)*

设置指定属性的object类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`value` | [TObject](_awtk_.tobject.md) | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPropStr

▸ **setPropStr**(`name`: string, `value`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2744](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2744)*

设置指定属性的字符串类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`value` | string | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  size

▸ **size**(): *number*

*Inherited from [TEmitter](_awtk_.temitter.md).[size](_awtk_.temitter.md#size)*

*Defined in [awtk.ts:1933](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1933)*

获取注册的回调函数个数，主要用于辅助测试。

**Returns:** *number*

回调函数个数。

___

###  unref

▸ **unref**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:2522](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2522)*

引用计数减1。引用计数为0时，销毁对象。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`emitter`: [TEmitter](_awtk_.temitter.md)): *[TEmitter](_awtk_.temitter.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[cast](_awtk_.temitter.md#static-cast)*

*Defined in [awtk.ts:1957](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1957)*

转换为emitter对象(供脚本语言使用)。 主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`emitter` | [TEmitter](_awtk_.temitter.md) | emitter对象。  |

**Returns:** *[TEmitter](_awtk_.temitter.md)*

对象。

___

### `Static` create

▸ **create**(): *[TEmitter](_awtk_.temitter.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[create](_awtk_.temitter.md#static-create)*

*Defined in [awtk.ts:1843](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L1843)*

创建emitter对象。

**Returns:** *[TEmitter](_awtk_.temitter.md)*

对象。

___

### `Static` ref

▸ **ref**(`obj`: [TObject](_awtk_.tobject.md)): *[TObject](_awtk_.tobject.md)*

*Defined in [awtk.ts:2534](https://github.com/zlgopen/awtk-binding/blob/b368e0d/tools/code_gen/js/output/awtk.ts#L2534)*

引用计数加1。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`obj` | [TObject](_awtk_.tobject.md) | object对象。  |

**Returns:** *[TObject](_awtk_.tobject.md)*

返回object对象。
