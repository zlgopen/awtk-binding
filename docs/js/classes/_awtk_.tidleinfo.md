[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TIdleInfo](_awtk_.tidleinfo.md)

# Class: TIdleInfo

单个idle的信息。

## Hierarchy

  ↳ [TObject](_awtk_.tobject.md)

  ↳ **TIdleInfo**

## Index

### Constructors

* [constructor](_awtk_.tidleinfo.md#constructor)

### Properties

* [nativeObj](_awtk_.tidleinfo.md#nativeobj)

### Accessors

* [ctx](_awtk_.tidleinfo.md#ctx)
* [id](_awtk_.tidleinfo.md#id)
* [name](_awtk_.tidleinfo.md#name)
* [refCount](_awtk_.tidleinfo.md#refcount)

### Methods

* [canExec](_awtk_.tidleinfo.md#canexec)
* [compare](_awtk_.tidleinfo.md#compare)
* [copyProp](_awtk_.tidleinfo.md#copyprop)
* [destroy](_awtk_.tidleinfo.md#destroy)
* [disable](_awtk_.tidleinfo.md#disable)
* [dispatch](_awtk_.tidleinfo.md#dispatch)
* [dispatchSimpleEvent](_awtk_.tidleinfo.md#dispatchsimpleevent)
* [enable](_awtk_.tidleinfo.md#enable)
* [eval](_awtk_.tidleinfo.md#eval)
* [execute](_awtk_.tidleinfo.md#execute)
* [getDesc](_awtk_.tidleinfo.md#getdesc)
* [getProp](_awtk_.tidleinfo.md#getprop)
* [getPropBool](_awtk_.tidleinfo.md#getpropbool)
* [getPropBoolByPath](_awtk_.tidleinfo.md#getpropboolbypath)
* [getPropFloat](_awtk_.tidleinfo.md#getpropfloat)
* [getPropFloatByPath](_awtk_.tidleinfo.md#getpropfloatbypath)
* [getPropInt](_awtk_.tidleinfo.md#getpropint)
* [getPropIntByPath](_awtk_.tidleinfo.md#getpropintbypath)
* [getPropObject](_awtk_.tidleinfo.md#getpropobject)
* [getPropObjectByPath](_awtk_.tidleinfo.md#getpropobjectbypath)
* [getPropPointer](_awtk_.tidleinfo.md#getproppointer)
* [getPropPointerByPath](_awtk_.tidleinfo.md#getproppointerbypath)
* [getPropStr](_awtk_.tidleinfo.md#getpropstr)
* [getPropStrByPath](_awtk_.tidleinfo.md#getpropstrbypath)
* [getSize](_awtk_.tidleinfo.md#getsize)
* [getType](_awtk_.tidleinfo.md#gettype)
* [hasProp](_awtk_.tidleinfo.md#hasprop)
* [isCollection](_awtk_.tidleinfo.md#iscollection)
* [notifyChanged](_awtk_.tidleinfo.md#notifychanged)
* [off](_awtk_.tidleinfo.md#off)
* [on](_awtk_.tidleinfo.md#on)
* [removeProp](_awtk_.tidleinfo.md#removeprop)
* [setName](_awtk_.tidleinfo.md#setname)
* [setProp](_awtk_.tidleinfo.md#setprop)
* [setPropBool](_awtk_.tidleinfo.md#setpropbool)
* [setPropFloat](_awtk_.tidleinfo.md#setpropfloat)
* [setPropInt](_awtk_.tidleinfo.md#setpropint)
* [setPropObject](_awtk_.tidleinfo.md#setpropobject)
* [setPropStr](_awtk_.tidleinfo.md#setpropstr)
* [size](_awtk_.tidleinfo.md#size)
* [unref](_awtk_.tidleinfo.md#unref)
* [cast](_awtk_.tidleinfo.md#static-cast)
* [create](_awtk_.tidleinfo.md#static-create)
* [ref](_awtk_.tidleinfo.md#static-ref)

## Constructors

###  constructor

\+ **new TIdleInfo**(`nativeObj`: any): *[TIdleInfo](_awtk_.tidleinfo.md)*

*Overrides [TObject](_awtk_.tobject.md).[constructor](_awtk_.tobject.md#constructor)*

*Defined in [awtk.ts:19253](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L19253)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TIdleInfo](_awtk_.tidleinfo.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TObject](_awtk_.tobject.md).[nativeObj](_awtk_.tobject.md#nativeobj)*

*Defined in [awtk.ts:19253](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L19253)*

## Accessors

###  ctx

• **get ctx**(): *any*

*Defined in [awtk.ts:19275](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L19275)*

idle回调函数上下文。

**Returns:** *any*

___

###  id

• **get id**(): *number*

*Defined in [awtk.ts:19286](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L19286)*

idle的ID

> 为TK\_INVALID\_ID时表示无效idle。

**Returns:** *number*

___

###  name

• **get name**(): *string*

*Inherited from [TObject](_awtk_.tobject.md).[name](_awtk_.tobject.md#name)*

*Defined in [awtk.ts:2933](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2933)*

对象的名称。

**Returns:** *string*

• **set name**(`v`: string): *void*

*Inherited from [TObject](_awtk_.tobject.md).[name](_awtk_.tobject.md#name)*

*Defined in [awtk.ts:2937](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2937)*

对象的名称。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  refCount

• **get refCount**(): *number*

*Inherited from [TObject](_awtk_.tobject.md).[refCount](_awtk_.tobject.md#refcount)*

*Defined in [awtk.ts:2924](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2924)*

引用计数。

**Returns:** *number*

## Methods

###  canExec

▸ **canExec**(`name`: string, `args`: string): *boolean*

*Inherited from [TObject](_awtk_.tobject.md).[canExec](_awtk_.tobject.md#canexec)*

*Defined in [awtk.ts:2816](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2816)*

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

*Defined in [awtk.ts:2587](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2587)*

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

*Defined in [awtk.ts:2778](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2778)*

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

*Defined in [awtk.ts:1959](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1959)*

销毁。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  disable

▸ **disable**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[disable](_awtk_.temitter.md#disable)*

*Defined in [awtk.ts:1937](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1937)*

禁用。

禁用后emitter_dispatch无效，但可以注册和注销。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  dispatch

▸ **dispatch**(`e`: [TEvent](_awtk_.tevent.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[dispatch](_awtk_.temitter.md#dispatch)*

*Defined in [awtk.ts:1873](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1873)*

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

*Defined in [awtk.ts:1887](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1887)*

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

*Defined in [awtk.ts:1924](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1924)*

启用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  eval

▸ **eval**(`expr`: string, `v`: [TValue](_awtk_.tvalue.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[eval](_awtk_.tobject.md#eval)*

*Defined in [awtk.ts:2803](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2803)*

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

*Defined in [awtk.ts:2829](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2829)*

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

*Defined in [awtk.ts:2541](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2541)*

获取对象的描述信息。

**Returns:** *string*

返回对象的描述信息。

___

###  getProp

▸ **getProp**(`name`: string, `v`: [TValue](_awtk_.tvalue.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[getProp](_awtk_.tobject.md#getprop)*

*Defined in [awtk.ts:2600](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2600)*

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

*Defined in [awtk.ts:2662](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2662)*

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

*Defined in [awtk.ts:2902](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2902)*

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

*Defined in [awtk.ts:2675](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2675)*

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

*Defined in [awtk.ts:2915](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2915)*

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

*Defined in [awtk.ts:2649](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2649)*

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

*Defined in [awtk.ts:2889](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2889)*

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

*Defined in [awtk.ts:2636](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2636)*

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

*Defined in [awtk.ts:2876](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2876)*

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

*Defined in [awtk.ts:2624](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2624)*

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

*Defined in [awtk.ts:2864](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2864)*

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

*Defined in [awtk.ts:2612](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2612)*

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

*Defined in [awtk.ts:2852](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2852)*

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

*Defined in [awtk.ts:2552](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2552)*

获取对象占用内存的大小。

**Returns:** *number*

返回对象占用内存的大小。

___

###  getType

▸ **getType**(): *string*

*Inherited from [TObject](_awtk_.tobject.md).[getType](_awtk_.tobject.md#gettype)*

*Defined in [awtk.ts:2530](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2530)*

获取对象的类型名称。

**Returns:** *string*

返回对象的类型名称。

___

###  hasProp

▸ **hasProp**(`name`: string): *boolean*

*Inherited from [TObject](_awtk_.tobject.md).[hasProp](_awtk_.tobject.md#hasprop)*

*Defined in [awtk.ts:2790](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2790)*

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

*Defined in [awtk.ts:2563](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2563)*

判断对象是否是集合。

**Returns:** *boolean*

返回TRUE表示是集合，否则不是。

___

###  notifyChanged

▸ **notifyChanged**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[notifyChanged](_awtk_.tobject.md#notifychanged)*

*Defined in [awtk.ts:2840](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2840)*

触发EVT_PROPS_CHANGED事件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  off

▸ **off**(`id`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[off](_awtk_.temitter.md#off)*

*Defined in [awtk.ts:1913](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1913)*

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

*Defined in [awtk.ts:1901](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1901)*

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

*Defined in [awtk.ts:2687](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2687)*

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

*Defined in [awtk.ts:2575](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2575)*

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

*Defined in [awtk.ts:2700](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2700)*

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

*Defined in [awtk.ts:2752](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2752)*

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

*Defined in [awtk.ts:2765](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2765)*

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

*Defined in [awtk.ts:2739](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2739)*

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

*Defined in [awtk.ts:2726](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2726)*

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

*Defined in [awtk.ts:2713](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2713)*

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

*Defined in [awtk.ts:1948](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1948)*

获取注册的回调函数个数，主要用于辅助测试。

**Returns:** *number*

回调函数个数。

___

###  unref

▸ **unref**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[unref](_awtk_.tobject.md#unref)*

*Defined in [awtk.ts:2507](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2507)*

引用计数减1。引用计数为0时，销毁对象。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`idle`: [TIdleInfo](_awtk_.tidleinfo.md)): *[TIdleInfo](_awtk_.tidleinfo.md)*

*Overrides [TEmitter](_awtk_.temitter.md).[cast](_awtk_.temitter.md#static-cast)*

*Defined in [awtk.ts:19266](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L19266)*

转换为idle_info对象(供脚本语言使用)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`idle` | [TIdleInfo](_awtk_.tidleinfo.md) | idle_info对象。  |

**Returns:** *[TIdleInfo](_awtk_.tidleinfo.md)*

idle_info对象。

___

### `Static` create

▸ **create**(): *[TEmitter](_awtk_.temitter.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[create](_awtk_.temitter.md#static-create)*

*Defined in [awtk.ts:1860](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L1860)*

创建emitter对象。

**Returns:** *[TEmitter](_awtk_.temitter.md)*

对象。

___

### `Static` ref

▸ **ref**(`obj`: [TObject](_awtk_.tobject.md)): *[TObject](_awtk_.tobject.md)*

*Inherited from [TObject](_awtk_.tobject.md).[ref](_awtk_.tobject.md#static-ref)*

*Defined in [awtk.ts:2519](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L2519)*

引用计数加1。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`obj` | [TObject](_awtk_.tobject.md) | object对象。  |

**Returns:** *[TObject](_awtk_.tobject.md)*

返回object对象。
