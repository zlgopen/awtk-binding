[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TTimerInfo](_awtk_.ttimerinfo.md)

# Class: TTimerInfo

单个定时器的信息。

## Hierarchy

  ↳ [TObject](_awtk_.tobject.md)

  ↳ **TTimerInfo**

## Index

### Constructors

* [constructor](_awtk_.ttimerinfo.md#constructor)

### Properties

* [nativeObj](_awtk_.ttimerinfo.md#nativeobj)

### Accessors

* [ctx](_awtk_.ttimerinfo.md#ctx)
* [id](_awtk_.ttimerinfo.md#id)
* [name](_awtk_.ttimerinfo.md#name)
* [now](_awtk_.ttimerinfo.md#now)
* [refCount](_awtk_.ttimerinfo.md#refcount)

### Methods

* [canExec](_awtk_.ttimerinfo.md#canexec)
* [compare](_awtk_.ttimerinfo.md#compare)
* [copyProp](_awtk_.ttimerinfo.md#copyprop)
* [destroy](_awtk_.ttimerinfo.md#destroy)
* [disable](_awtk_.ttimerinfo.md#disable)
* [dispatch](_awtk_.ttimerinfo.md#dispatch)
* [dispatchSimpleEvent](_awtk_.ttimerinfo.md#dispatchsimpleevent)
* [enable](_awtk_.ttimerinfo.md#enable)
* [eval](_awtk_.ttimerinfo.md#eval)
* [execute](_awtk_.ttimerinfo.md#execute)
* [getDesc](_awtk_.ttimerinfo.md#getdesc)
* [getProp](_awtk_.ttimerinfo.md#getprop)
* [getPropBool](_awtk_.ttimerinfo.md#getpropbool)
* [getPropBoolByPath](_awtk_.ttimerinfo.md#getpropboolbypath)
* [getPropFloat](_awtk_.ttimerinfo.md#getpropfloat)
* [getPropFloatByPath](_awtk_.ttimerinfo.md#getpropfloatbypath)
* [getPropInt](_awtk_.ttimerinfo.md#getpropint)
* [getPropIntByPath](_awtk_.ttimerinfo.md#getpropintbypath)
* [getPropObject](_awtk_.ttimerinfo.md#getpropobject)
* [getPropObjectByPath](_awtk_.ttimerinfo.md#getpropobjectbypath)
* [getPropPointer](_awtk_.ttimerinfo.md#getproppointer)
* [getPropPointerByPath](_awtk_.ttimerinfo.md#getproppointerbypath)
* [getPropStr](_awtk_.ttimerinfo.md#getpropstr)
* [getPropStrByPath](_awtk_.ttimerinfo.md#getpropstrbypath)
* [getSize](_awtk_.ttimerinfo.md#getsize)
* [getType](_awtk_.ttimerinfo.md#gettype)
* [hasProp](_awtk_.ttimerinfo.md#hasprop)
* [isCollection](_awtk_.ttimerinfo.md#iscollection)
* [notifyChanged](_awtk_.ttimerinfo.md#notifychanged)
* [off](_awtk_.ttimerinfo.md#off)
* [on](_awtk_.ttimerinfo.md#on)
* [removeProp](_awtk_.ttimerinfo.md#removeprop)
* [setName](_awtk_.ttimerinfo.md#setname)
* [setProp](_awtk_.ttimerinfo.md#setprop)
* [setPropBool](_awtk_.ttimerinfo.md#setpropbool)
* [setPropFloat](_awtk_.ttimerinfo.md#setpropfloat)
* [setPropInt](_awtk_.ttimerinfo.md#setpropint)
* [setPropObject](_awtk_.ttimerinfo.md#setpropobject)
* [setPropStr](_awtk_.ttimerinfo.md#setpropstr)
* [size](_awtk_.ttimerinfo.md#size)
* [unref](_awtk_.ttimerinfo.md#unref)
* [cast](_awtk_.ttimerinfo.md#static-cast)
* [create](_awtk_.ttimerinfo.md#static-create)
* [ref](_awtk_.ttimerinfo.md#static-ref)

## Constructors

###  constructor

\+ **new TTimerInfo**(`nativeObj`: any): *[TTimerInfo](_awtk_.ttimerinfo.md)*

*Overrides [TObject](_awtk_.tobject.md).[constructor](_awtk_.tobject.md#constructor)*

*Defined in [awtk.ts:19832](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L19832)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TTimerInfo](_awtk_.ttimerinfo.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TObject](_awtk_.tobject.md).[nativeObj](_awtk_.tobject.md#nativeobj)*

*Defined in [awtk.ts:19832](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L19832)*

## Accessors

###  ctx

• **get ctx**(): *any*

*Defined in [awtk.ts:19854](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L19854)*

定时器回调函数的上下文

**Returns:** *any*

___

###  id

• **get id**(): *number*

*Defined in [awtk.ts:19865](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L19865)*

定时器的ID

> 为TK\_INVALID\_ID时表示无效定时器。

**Returns:** *number*

___

###  name

• **get name**(): *string*

*Inherited from [TObject](_awtk_.tobject.md).[name](_awtk_.tobject.md#name)*

*Defined in [awtk.ts:2928](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2928)*

对象的名称。

**Returns:** *string*

• **set name**(`v`: string): *void*

*Inherited from [TObject](_awtk_.tobject.md).[name](_awtk_.tobject.md#name)*

*Defined in [awtk.ts:2932](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2932)*

对象的名称。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  now

• **get now**(): *number*

*Defined in [awtk.ts:19874](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L19874)*

当前时间(相对时间，单位为毫秒)。

**Returns:** *number*

___

###  refCount

• **get refCount**(): *number*

*Inherited from [TObject](_awtk_.tobject.md).[refCount](_awtk_.tobject.md#refcount)*

*Defined in [awtk.ts:2919](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2919)*

引用计数。

**Returns:** *number*

## Methods

###  canExec

▸ **canExec**(`name`: string, `args`: string): *boolean*

*Inherited from [TObject](_awtk_.tobject.md).[canExec](_awtk_.tobject.md#canexec)*

*Defined in [awtk.ts:2811](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2811)*

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

*Inherited from [TObject](_awtk_.tobject.md).[compare](_awtk_.tobject.md#compare)*

*Defined in [awtk.ts:2582](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2582)*

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

*Inherited from [TObject](_awtk_.tobject.md).[copyProp](_awtk_.tobject.md#copyprop)*

*Defined in [awtk.ts:2773](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2773)*

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

*Defined in [awtk.ts:1954](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L1954)*

销毁。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  disable

▸ **disable**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[disable](_awtk_.temitter.md#disable)*

*Defined in [awtk.ts:1932](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L1932)*

禁用。

禁用后emitter_dispatch无效，但可以注册和注销。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  dispatch

▸ **dispatch**(`e`: [TEvent](_awtk_.tevent.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[dispatch](_awtk_.temitter.md#dispatch)*

*Defined in [awtk.ts:1868](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L1868)*

分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
禁用状态下，本函数不做任何事情。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`e` | [TEvent](_awtk_.tevent.md) | 事件对象。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

___

###  dispatchSimpleEvent

▸ **dispatchSimpleEvent**(`type`: [TEventType](../enums/_awtk_.teventtype.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[dispatchSimpleEvent](_awtk_.temitter.md#dispatchsimpleevent)*

*Defined in [awtk.ts:1882](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L1882)*

分发事件。
> 对emitter_dispatch的包装，分发一个简单的事件。
如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | [TEventType](../enums/_awtk_.teventtype.md) | 事件类型。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

___

###  enable

▸ **enable**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[enable](_awtk_.temitter.md#enable)*

*Defined in [awtk.ts:1919](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L1919)*

启用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  eval

▸ **eval**(`expr`: string, `v`: [TValue](_awtk_.tvalue.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[eval](_awtk_.tobject.md#eval)*

*Defined in [awtk.ts:2798](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2798)*

计算一个表达式，表达式中引用的变量从prop中获取。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`expr` | string | 表达式。 |
`v` | [TValue](_awtk_.tvalue.md) | 返回计算结果。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  execute

▸ **execute**(`name`: string, `args`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[execute](_awtk_.tobject.md#execute)*

*Defined in [awtk.ts:2824](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2824)*

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

*Inherited from [TObject](_awtk_.tobject.md).[getDesc](_awtk_.tobject.md#getdesc)*

*Defined in [awtk.ts:2536](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2536)*

获取对象的描述信息。

**Returns:** *string*

返回对象的描述信息。

___

###  getProp

▸ **getProp**(`name`: string, `v`: [TValue](_awtk_.tvalue.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[getProp](_awtk_.tobject.md#getprop)*

*Defined in [awtk.ts:2595](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2595)*

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

*Inherited from [TObject](_awtk_.tobject.md).[getPropBool](_awtk_.tobject.md#getpropbool)*

*Defined in [awtk.ts:2657](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2657)*

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

*Inherited from [TObject](_awtk_.tobject.md).[getPropBoolByPath](_awtk_.tobject.md#getpropboolbypath)*

*Defined in [awtk.ts:2897](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2897)*

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

*Inherited from [TObject](_awtk_.tobject.md).[getPropFloat](_awtk_.tobject.md#getpropfloat)*

*Defined in [awtk.ts:2670](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2670)*

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

*Inherited from [TObject](_awtk_.tobject.md).[getPropFloatByPath](_awtk_.tobject.md#getpropfloatbypath)*

*Defined in [awtk.ts:2910](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2910)*

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

*Inherited from [TObject](_awtk_.tobject.md).[getPropInt](_awtk_.tobject.md#getpropint)*

*Defined in [awtk.ts:2644](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2644)*

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

*Inherited from [TObject](_awtk_.tobject.md).[getPropIntByPath](_awtk_.tobject.md#getpropintbypath)*

*Defined in [awtk.ts:2884](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2884)*

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

*Inherited from [TObject](_awtk_.tobject.md).[getPropObject](_awtk_.tobject.md#getpropobject)*

*Defined in [awtk.ts:2631](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2631)*

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

*Inherited from [TObject](_awtk_.tobject.md).[getPropObjectByPath](_awtk_.tobject.md#getpropobjectbypath)*

*Defined in [awtk.ts:2871](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2871)*

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

*Inherited from [TObject](_awtk_.tobject.md).[getPropPointer](_awtk_.tobject.md#getproppointer)*

*Defined in [awtk.ts:2619](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2619)*

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

*Inherited from [TObject](_awtk_.tobject.md).[getPropPointerByPath](_awtk_.tobject.md#getproppointerbypath)*

*Defined in [awtk.ts:2859](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2859)*

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

*Inherited from [TObject](_awtk_.tobject.md).[getPropStr](_awtk_.tobject.md#getpropstr)*

*Defined in [awtk.ts:2607](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2607)*

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

*Inherited from [TObject](_awtk_.tobject.md).[getPropStrByPath](_awtk_.tobject.md#getpropstrbypath)*

*Defined in [awtk.ts:2847](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2847)*

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

*Inherited from [TObject](_awtk_.tobject.md).[getSize](_awtk_.tobject.md#getsize)*

*Defined in [awtk.ts:2547](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2547)*

获取对象占用内存的大小。

**Returns:** *number*

返回对象占用内存的大小。

___

###  getType

▸ **getType**(): *string*

*Inherited from [TObject](_awtk_.tobject.md).[getType](_awtk_.tobject.md#gettype)*

*Defined in [awtk.ts:2525](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2525)*

获取对象的类型名称。

**Returns:** *string*

返回对象的类型名称。

___

###  hasProp

▸ **hasProp**(`name`: string): *boolean*

*Inherited from [TObject](_awtk_.tobject.md).[hasProp](_awtk_.tobject.md#hasprop)*

*Defined in [awtk.ts:2785](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2785)*

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

*Inherited from [TObject](_awtk_.tobject.md).[isCollection](_awtk_.tobject.md#iscollection)*

*Defined in [awtk.ts:2558](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2558)*

判断对象是否是集合。

**Returns:** *boolean*

返回TRUE表示是集合，否则不是。

___

###  notifyChanged

▸ **notifyChanged**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[notifyChanged](_awtk_.tobject.md#notifychanged)*

*Defined in [awtk.ts:2835](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2835)*

触发EVT_PROPS_CHANGED事件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  off

▸ **off**(`id`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[off](_awtk_.temitter.md#off)*

*Defined in [awtk.ts:1908](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L1908)*

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

*Defined in [awtk.ts:1896](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L1896)*

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

*Inherited from [TObject](_awtk_.tobject.md).[removeProp](_awtk_.tobject.md#removeprop)*

*Defined in [awtk.ts:2682](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2682)*

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

*Inherited from [TObject](_awtk_.tobject.md).[setName](_awtk_.tobject.md#setname)*

*Defined in [awtk.ts:2570](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2570)*

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

*Inherited from [TObject](_awtk_.tobject.md).[setProp](_awtk_.tobject.md#setprop)*

*Defined in [awtk.ts:2695](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2695)*

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

*Inherited from [TObject](_awtk_.tobject.md).[setPropBool](_awtk_.tobject.md#setpropbool)*

*Defined in [awtk.ts:2747](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2747)*

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

*Inherited from [TObject](_awtk_.tobject.md).[setPropFloat](_awtk_.tobject.md#setpropfloat)*

*Defined in [awtk.ts:2760](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2760)*

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

*Inherited from [TObject](_awtk_.tobject.md).[setPropInt](_awtk_.tobject.md#setpropint)*

*Defined in [awtk.ts:2734](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2734)*

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

*Inherited from [TObject](_awtk_.tobject.md).[setPropObject](_awtk_.tobject.md#setpropobject)*

*Defined in [awtk.ts:2721](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2721)*

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

*Inherited from [TObject](_awtk_.tobject.md).[setPropStr](_awtk_.tobject.md#setpropstr)*

*Defined in [awtk.ts:2708](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2708)*

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

*Defined in [awtk.ts:1943](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L1943)*

获取注册的回调函数个数，主要用于辅助测试。

**Returns:** *number*

回调函数个数。

___

###  unref

▸ **unref**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[unref](_awtk_.tobject.md#unref)*

*Defined in [awtk.ts:2502](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2502)*

引用计数减1。引用计数为0时，销毁对象。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`timer`: [TTimerInfo](_awtk_.ttimerinfo.md)): *[TTimerInfo](_awtk_.ttimerinfo.md)*

*Overrides [TEmitter](_awtk_.temitter.md).[cast](_awtk_.temitter.md#static-cast)*

*Defined in [awtk.ts:19845](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L19845)*

转换为timer_info对象(供脚本语言使用)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`timer` | [TTimerInfo](_awtk_.ttimerinfo.md) | timer_info对象。  |

**Returns:** *[TTimerInfo](_awtk_.ttimerinfo.md)*

timer_info对象。

___

### `Static` create

▸ **create**(): *[TEmitter](_awtk_.temitter.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[create](_awtk_.temitter.md#static-create)*

*Defined in [awtk.ts:1855](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L1855)*

创建emitter对象。

**Returns:** *[TEmitter](_awtk_.temitter.md)*

对象。

___

### `Static` ref

▸ **ref**(`obj`: [TObject](_awtk_.tobject.md)): *[TObject](_awtk_.tobject.md)*

*Inherited from [TObject](_awtk_.tobject.md).[ref](_awtk_.tobject.md#static-ref)*

*Defined in [awtk.ts:2514](https://github.com/zlgopen/awtk-binding/blob/5d4a8e9/tools/code_gen/js/output/awtk.ts#L2514)*

引用计数加1。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`obj` | [TObject](_awtk_.tobject.md) | object对象。  |

**Returns:** *[TObject](_awtk_.tobject.md)*

返回object对象。
