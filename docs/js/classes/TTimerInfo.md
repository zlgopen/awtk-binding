[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TTimerInfo

# Class: TTimerInfo

单个定时器的信息。

## Extends

- [`TObject`](TObject.md)

## Constructors

### new TTimerInfo()

> **new TTimerInfo**(`nativeObj`): [`TTimerInfo`](TTimerInfo.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TTimerInfo`](TTimerInfo.md)

#### Overrides

[`TObject`](TObject.md).[`constructor`](TObject.md#constructors)

#### Defined in

[awtk.ts:29600](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L29600)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TObject`](TObject.md).[`nativeObj`](TObject.md#nativeobj)

#### Defined in

[awtk.ts:29599](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L29599)

## Accessors

### ctx

> `get` **ctx**(): `any`

定时器回调函数的上下文

#### Returns

`any`

#### Defined in

[awtk.ts:29621](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L29621)

***

### extraCtx

> `get` **extraCtx**(): `any`

定时器回调函数的上下文

#### Returns

`any`

#### Defined in

[awtk.ts:29630](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L29630)

***

### id

> `get` **id**(): `number`

定时器的ID

> 为TK\_INVALID\_ID时表示无效定时器。

#### Returns

`number`

#### Defined in

[awtk.ts:29641](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L29641)

***

### name

> `get` **name**(): `string`

对象的名称。

> `set` **name**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TObject`](TObject.md).[`name`](TObject.md#name)

#### Defined in

[awtk.ts:3677](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3677)

***

### now

> `get` **now**(): `number`

当前时间(相对时间，单位为毫秒)。

#### Returns

`number`

#### Defined in

[awtk.ts:29650](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L29650)

***

### refCount

> `get` **refCount**(): `number`

引用计数。

#### Returns

`number`

#### Inherited from

[`TObject`](TObject.md).[`refCount`](TObject.md#refcount)

#### Defined in

[awtk.ts:3668](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3668)

## Methods

### canExec()

> **canExec**(`name`, `args`): `boolean`

检查是否可以执行指定的命令。

#### Parameters

• **name**: `string`

命令的名称。

• **args**: `string`

命令的参数。

#### Returns

`boolean`

返回TRUE表示可以执行，否则表示不可以执行。

#### Inherited from

[`TObject`](TObject.md).[`canExec`](TObject.md#canexec)

#### Defined in

[awtk.ts:3223](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3223)

***

### canExecByPath()

> **canExecByPath**(`path`, `args`): `boolean`

检查是否可以执行指定的命令。

#### Parameters

• **path**: `string`

命令的path。

• **args**: `string`

命令的参数。

#### Returns

`boolean`

返回TRUE表示可以执行，否则表示不可以执行。

#### Inherited from

[`TObject`](TObject.md).[`canExecByPath`](TObject.md#canexecbypath)

#### Defined in

[awtk.ts:3427](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3427)

***

### clearProps()

> **clearProps**(): [`TRet`](../enumerations/TRet.md)

清除全部属性。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`clearProps`](TObject.md#clearprops)

#### Defined in

[awtk.ts:3659](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3659)

***

### compare()

> **compare**(`other`): `number`

比较两个对象。

#### Parameters

• **other**: [`TObject`](TObject.md)

比较的object对象。

#### Returns

`number`

返回比较结果。

#### Inherited from

[`TObject`](TObject.md).[`compare`](TObject.md#compare)

#### Defined in

[awtk.ts:2955](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2955)

***

### copyProp()

> **copyProp**(`src`, `name`): [`TRet`](../enumerations/TRet.md)

拷贝指定的属性。

#### Parameters

• **src**: [`TObject`](TObject.md)

源对象。

• **name**: `string`

属性的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`copyProp`](TObject.md#copyprop)

#### Defined in

[awtk.ts:3172](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3172)

***

### copyProps()

> **copyProps**(`src`, `overwrite`): [`TRet`](../enumerations/TRet.md)

拷贝全部的属性。

#### Parameters

• **src**: [`TObject`](TObject.md)

源对象。

• **overwrite**: `boolean`

如果属性存在是否覆盖。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`copyProps`](TObject.md#copyprops)

#### Defined in

[awtk.ts:3185](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3185)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`destroy`](TObject.md#destroy)

#### Defined in

[awtk.ts:2537](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2537)

***

### disable()

> **disable**(): [`TRet`](../enumerations/TRet.md)

禁用。

禁用后emitter_dispatch无效，但可以注册和注销。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`disable`](TObject.md#disable)

#### Defined in

[awtk.ts:2526](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2526)

***

### dispatch()

> **dispatch**(`e`): [`TRet`](../enumerations/TRet.md)

分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
禁用状态下，本函数不做任何事情。

#### Parameters

• **e**: [`TEvent`](TEvent.md)

事件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Inherited from

[`TObject`](TObject.md).[`dispatch`](TObject.md#dispatch)

#### Defined in

[awtk.ts:2462](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2462)

***

### dispatchSimpleEvent()

> **dispatchSimpleEvent**(`type`): [`TRet`](../enumerations/TRet.md)

分发事件。
> 对emitter_dispatch的包装，分发一个简单的事件。
如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Parameters

• **type**: `number`

事件类型。

#### Returns

[`TRet`](../enumerations/TRet.md)

#### Inherited from

[`TObject`](TObject.md).[`dispatchSimpleEvent`](TObject.md#dispatchsimpleevent)

#### Defined in

[awtk.ts:2476](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2476)

***

### enable()

> **enable**(): [`TRet`](../enumerations/TRet.md)

启用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`enable`](TObject.md#enable)

#### Defined in

[awtk.ts:2513](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2513)

***

### eval()

> **eval**(`expr`, `v`): [`TRet`](../enumerations/TRet.md)

计算一个表达式，表达式中引用的变量从prop中获取。

#### Parameters

• **expr**: `string`

表达式。

• **v**: [`TValue`](TValue.md)

返回计算结果。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`eval`](TObject.md#eval)

#### Defined in

[awtk.ts:3210](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3210)

***

### execute()

> **execute**(`name`, `args`): [`TRet`](../enumerations/TRet.md)

执行指定的命令。

#### Parameters

• **name**: `string`

命令的名称。

• **args**: `string`

命令的参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`execute`](TObject.md#execute)

#### Defined in

[awtk.ts:3236](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3236)

***

### executeByPath()

> **executeByPath**(`path`, `args`): [`TRet`](../enumerations/TRet.md)

执行指定的命令。

#### Parameters

• **path**: `string`

命令的path。

• **args**: `string`

命令的参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`executeByPath`](TObject.md#executebypath)

#### Defined in

[awtk.ts:3440](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3440)

***

### getDesc()

> **getDesc**(): `string`

获取对象的描述信息。

#### Returns

`string`

返回对象的描述信息。

#### Inherited from

[`TObject`](TObject.md).[`getDesc`](TObject.md#getdesc)

#### Defined in

[awtk.ts:2909](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2909)

***

### getProp()

> **getProp**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

获取指定属性的值。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: [`TValue`](TValue.md)

返回属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`getProp`](TObject.md#getprop)

#### Defined in

[awtk.ts:2968](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2968)

***

### getPropBool()

> **getPropBool**(`name`, `defval`): `boolean`

获取指定属性的bool类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `boolean`

缺省值。

#### Returns

`boolean`

返回指定属性的bool类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropBool`](TObject.md#getpropbool)

#### Defined in

[awtk.ts:3030](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3030)

***

### getPropBoolByPath()

> **getPropBoolByPath**(`path`, `defval`): `boolean`

获取指定属性的bool类型的值。

#### Parameters

• **path**: `string`

属性的path。

• **defval**: `boolean`

缺省值。

#### Returns

`boolean`

返回指定属性的bool类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropBoolByPath`](TObject.md#getpropboolbypath)

#### Defined in

[awtk.ts:3321](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3321)

***

### getPropDouble()

> **getPropDouble**(`name`, `defval`): `number`

获取指定属性的浮点数类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的浮点数类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropDouble`](TObject.md#getpropdouble)

#### Defined in

[awtk.ts:3056](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3056)

***

### getPropFloat()

> **getPropFloat**(`name`, `defval`): `number`

获取指定属性的浮点数类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的浮点数类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropFloat`](TObject.md#getpropfloat)

#### Defined in

[awtk.ts:3043](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3043)

***

### getPropFloatByPath()

> **getPropFloatByPath**(`path`, `defval`): `number`

获取指定属性的浮点数类型的值。

e

#### Parameters

• **path**: `string`

属性的path。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的浮点数类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropFloatByPath`](TObject.md#getpropfloatbypath)

#### Defined in

[awtk.ts:3336](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3336)

***

### getPropInt()

> **getPropInt**(`name`, `defval`): `number`

获取指定属性的整数类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的整数类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropInt`](TObject.md#getpropint)

#### Defined in

[awtk.ts:3017](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3017)

***

### getPropInt16()

> **getPropInt16**(`name`, `defval`): `number`

获取指定属性的int16类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的int16类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropInt16`](TObject.md#getpropint16)

#### Defined in

[awtk.ts:3505](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3505)

***

### getPropInt32()

> **getPropInt32**(`name`, `defval`): `number`

获取指定属性的int32类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的int32类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropInt32`](TObject.md#getpropint32)

#### Defined in

[awtk.ts:3557](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3557)

***

### getPropInt64()

> **getPropInt64**(`name`, `defval`): `number`

获取指定属性的int64类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的int64类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropInt64`](TObject.md#getpropint64)

#### Defined in

[awtk.ts:3609](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3609)

***

### getPropInt8()

> **getPropInt8**(`name`, `defval`): `number`

获取指定属性的int8类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的int8类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropInt8`](TObject.md#getpropint8)

#### Defined in

[awtk.ts:3453](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3453)

***

### getPropIntByPath()

> **getPropIntByPath**(`path`, `defval`): `number`

获取指定属性的整数类型的值。

#### Parameters

• **path**: `string`

属性的path。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的整数类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropIntByPath`](TObject.md#getpropintbypath)

#### Defined in

[awtk.ts:3308](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3308)

***

### getPropObject()

> **getPropObject**(`name`): [`TObject`](TObject.md)

获取指定属性的object类型的值。

#### Parameters

• **name**: `string`

属性的名称。

#### Returns

[`TObject`](TObject.md)

返回指定属性的object类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropObject`](TObject.md#getpropobject)

#### Defined in

[awtk.ts:3004](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3004)

***

### getPropObjectByPath()

> **getPropObjectByPath**(`path`): [`TObject`](TObject.md)

获取指定属性的object类型的值。

#### Parameters

• **path**: `string`

属性的path。

#### Returns

[`TObject`](TObject.md)

返回指定属性的object类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropObjectByPath`](TObject.md#getpropobjectbypath)

#### Defined in

[awtk.ts:3295](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3295)

***

### getPropPointer()

> **getPropPointer**(`name`): `any`

获取指定属性的指针类型的值。

#### Parameters

• **name**: `string`

属性的名称。

#### Returns

`any`

返回指定属性的指针类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropPointer`](TObject.md#getproppointer)

#### Defined in

[awtk.ts:2992](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2992)

***

### getPropPointerByPath()

> **getPropPointerByPath**(`path`): `any`

获取指定属性的指针类型的值。

#### Parameters

• **path**: `string`

属性的path。

#### Returns

`any`

返回指定属性的指针类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropPointerByPath`](TObject.md#getproppointerbypath)

#### Defined in

[awtk.ts:3283](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3283)

***

### getPropStr()

> **getPropStr**(`name`): `string`

获取指定属性的字符串类型的值。

#### Parameters

• **name**: `string`

属性的名称。

#### Returns

`string`

返回指定属性的字符串类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropStr`](TObject.md#getpropstr)

#### Defined in

[awtk.ts:2980](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2980)

***

### getPropStrByPath()

> **getPropStrByPath**(`path`): `string`

获取指定属性的字符串类型的值。

#### Parameters

• **path**: `string`

属性的path。

#### Returns

`string`

返回指定属性的字符串类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropStrByPath`](TObject.md#getpropstrbypath)

#### Defined in

[awtk.ts:3271](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3271)

***

### getPropUint16()

> **getPropUint16**(`name`, `defval`): `number`

获取指定属性的uint16类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的uint16类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropUint16`](TObject.md#getpropuint16)

#### Defined in

[awtk.ts:3531](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3531)

***

### getPropUint32()

> **getPropUint32**(`name`, `defval`): `number`

获取指定属性的uint32类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的uint32类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropUint32`](TObject.md#getpropuint32)

#### Defined in

[awtk.ts:3583](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3583)

***

### getPropUint64()

> **getPropUint64**(`name`, `defval`): `number`

获取指定属性的uint64类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的uint64类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropUint64`](TObject.md#getpropuint64)

#### Defined in

[awtk.ts:3635](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3635)

***

### getPropUint8()

> **getPropUint8**(`name`, `defval`): `number`

获取指定属性的uint8类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回指定属性的uint8类型的值。

#### Inherited from

[`TObject`](TObject.md).[`getPropUint8`](TObject.md#getpropuint8)

#### Defined in

[awtk.ts:3479](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3479)

***

### getSize()

> **getSize**(): `number`

获取对象占用内存的大小。

#### Returns

`number`

返回对象占用内存的大小。

#### Inherited from

[`TObject`](TObject.md).[`getSize`](TObject.md#getsize)

#### Defined in

[awtk.ts:2920](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2920)

***

### getType()

> **getType**(): `string`

获取对象的类型名称。

#### Returns

`string`

返回对象的类型名称。

#### Inherited from

[`TObject`](TObject.md).[`getType`](TObject.md#gettype)

#### Defined in

[awtk.ts:2898](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2898)

***

### hasProp()

> **hasProp**(`name`): `boolean`

检查是否存在指定的属性。

#### Parameters

• **name**: `string`

属性的名称。

#### Returns

`boolean`

返回TRUE表示存在，否则表示不存在。

#### Inherited from

[`TObject`](TObject.md).[`hasProp`](TObject.md#hasprop)

#### Defined in

[awtk.ts:3197](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3197)

***

### hasPropByPath()

> **hasPropByPath**(`path`): `boolean`

检查是否存在指定的属性。

#### Parameters

• **path**: `string`

属性的path，各级之间用.分隔。

#### Returns

`boolean`

返回TRUE表示存在，否则表示不存在。

#### Inherited from

[`TObject`](TObject.md).[`hasPropByPath`](TObject.md#haspropbypath)

#### Defined in

[awtk.ts:3259](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3259)

***

### isCollection()

> **isCollection**(): `boolean`

判断对象是否是集合。

#### Returns

`boolean`

返回TRUE表示是集合，否则不是。

#### Inherited from

[`TObject`](TObject.md).[`isCollection`](TObject.md#iscollection)

#### Defined in

[awtk.ts:2931](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2931)

***

### notifyChanged()

> **notifyChanged**(): [`TRet`](../enumerations/TRet.md)

触发EVT_PROPS_CHANGED事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`notifyChanged`](TObject.md#notifychanged)

#### Defined in

[awtk.ts:3247](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3247)

***

### off()

> **off**(`id`): [`TRet`](../enumerations/TRet.md)

注销指定事件的处理函数。

#### Parameters

• **id**: `number`

emitter_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`off`](TObject.md#off)

#### Defined in

[awtk.ts:2502](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2502)

***

### on()

> **on**(`etype`, `handler`, `ctx`): `number`

注册指定事件的处理函数。

#### Parameters

• **etype**: `number`

事件类型。

• **handler**: `Function`

事件处理函数。

• **ctx**: `any`

事件处理函数上下文。

#### Returns

`number`

返回id，用于emitter_off。

#### Inherited from

[`TObject`](TObject.md).[`on`](TObject.md#on)

#### Defined in

[awtk.ts:2490](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2490)

***

### removeProp()

> **removeProp**(`name`): [`TRet`](../enumerations/TRet.md)

删除指定属性。

#### Parameters

• **name**: `string`

属性的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`removeProp`](TObject.md#removeprop)

#### Defined in

[awtk.ts:3068](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3068)

***

### setName()

> **setName**(`name`): [`TRet`](../enumerations/TRet.md)

设置对象的名称。

#### Parameters

• **name**: `string`

对象的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setName`](TObject.md#setname)

#### Defined in

[awtk.ts:2943](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2943)

***

### setProp()

> **setProp**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: [`TValue`](TValue.md)

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setProp`](TObject.md#setprop)

#### Defined in

[awtk.ts:3081](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3081)

***

### setPropBool()

> **setPropBool**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的bool类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropBool`](TObject.md#setpropbool)

#### Defined in

[awtk.ts:3133](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3133)

***

### setPropBoolByPath()

> **setPropBoolByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的bool类型的值。

#### Parameters

• **path**: `string`

属性的path。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropBoolByPath`](TObject.md#setpropboolbypath)

#### Defined in

[awtk.ts:3401](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3401)

***

### setPropByPath()

> **setPropByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的值。

#### Parameters

• **path**: `string`

属性的path。

• **value**: [`TValue`](TValue.md)

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropByPath`](TObject.md#setpropbypath)

#### Defined in

[awtk.ts:3349](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3349)

***

### setPropDouble()

> **setPropDouble**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的浮点数类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropDouble`](TObject.md#setpropdouble)

#### Defined in

[awtk.ts:3159](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3159)

***

### setPropFloat()

> **setPropFloat**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的浮点数类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropFloat`](TObject.md#setpropfloat)

#### Defined in

[awtk.ts:3146](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3146)

***

### setPropFloatByPath()

> **setPropFloatByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的浮点数类型的值。

#### Parameters

• **path**: `string`

属性的path。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropFloatByPath`](TObject.md#setpropfloatbypath)

#### Defined in

[awtk.ts:3414](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3414)

***

### setPropInt()

> **setPropInt**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的整数类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropInt`](TObject.md#setpropint)

#### Defined in

[awtk.ts:3120](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3120)

***

### setPropInt16()

> **setPropInt16**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的int16类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropInt16`](TObject.md#setpropint16)

#### Defined in

[awtk.ts:3518](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3518)

***

### setPropInt32()

> **setPropInt32**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的int32类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropInt32`](TObject.md#setpropint32)

#### Defined in

[awtk.ts:3570](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3570)

***

### setPropInt64()

> **setPropInt64**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的int64类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropInt64`](TObject.md#setpropint64)

#### Defined in

[awtk.ts:3622](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3622)

***

### setPropInt8()

> **setPropInt8**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的int8类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropInt8`](TObject.md#setpropint8)

#### Defined in

[awtk.ts:3466](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3466)

***

### setPropIntByPath()

> **setPropIntByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的整数类型的值。

#### Parameters

• **path**: `string`

属性的path。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropIntByPath`](TObject.md#setpropintbypath)

#### Defined in

[awtk.ts:3388](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3388)

***

### setPropObject()

> **setPropObject**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的object类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: [`TObject`](TObject.md)

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropObject`](TObject.md#setpropobject)

#### Defined in

[awtk.ts:3107](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3107)

***

### setPropObjectByPath()

> **setPropObjectByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的object类型的值。

#### Parameters

• **path**: `string`

属性的path。

• **value**: [`TObject`](TObject.md)

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropObjectByPath`](TObject.md#setpropobjectbypath)

#### Defined in

[awtk.ts:3375](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3375)

***

### setPropStr()

> **setPropStr**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的字符串类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `string`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropStr`](TObject.md#setpropstr)

#### Defined in

[awtk.ts:3094](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3094)

***

### setPropStrByPath()

> **setPropStrByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的字符串类型的值。

#### Parameters

• **path**: `string`

属性的path。

• **value**: `string`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropStrByPath`](TObject.md#setpropstrbypath)

#### Defined in

[awtk.ts:3362](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3362)

***

### setPropUint16()

> **setPropUint16**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的uint16类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropUint16`](TObject.md#setpropuint16)

#### Defined in

[awtk.ts:3544](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3544)

***

### setPropUint32()

> **setPropUint32**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的uint32类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropUint32`](TObject.md#setpropuint32)

#### Defined in

[awtk.ts:3596](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3596)

***

### setPropUint64()

> **setPropUint64**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的uint64类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropUint64`](TObject.md#setpropuint64)

#### Defined in

[awtk.ts:3648](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3648)

***

### setPropUint8()

> **setPropUint8**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定属性的uint8类型的值。

#### Parameters

• **name**: `string`

属性的名称。

• **value**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`setPropUint8`](TObject.md#setpropuint8)

#### Defined in

[awtk.ts:3492](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L3492)

***

### unref()

> **unref**(): [`TRet`](../enumerations/TRet.md)

引用计数减1。引用计数为0时，销毁对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TObject`](TObject.md).[`unref`](TObject.md#unref)

#### Defined in

[awtk.ts:2875](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2875)

***

### cast()

> `static` **cast**(`timer`): [`TTimerInfo`](TTimerInfo.md)

转换为timer_info对象(供脚本语言使用)。

#### Parameters

• **timer**: [`TTimerInfo`](TTimerInfo.md)

timer_info对象。

#### Returns

[`TTimerInfo`](TTimerInfo.md)

timer_info对象。

#### Overrides

[`TObject`](TObject.md).[`cast`](TObject.md#cast)

#### Defined in

[awtk.ts:29612](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L29612)

***

### create()

> `static` **create**(): [`TEmitter`](TEmitter.md)

创建emitter对象。

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[`TObject`](TObject.md).[`create`](TObject.md#create)

#### Defined in

[awtk.ts:2449](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2449)

***

### ref()

> `static` **ref**(`obj`): [`TObject`](TObject.md)

引用计数加1。

#### Parameters

• **obj**: [`TObject`](TObject.md)

object对象。

#### Returns

[`TObject`](TObject.md)

返回object对象。

#### Inherited from

[`TObject`](TObject.md).[`ref`](TObject.md#ref)

#### Defined in

[awtk.ts:2887](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L2887)
