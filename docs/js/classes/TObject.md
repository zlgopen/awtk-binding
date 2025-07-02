[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TObject

# Class: TObject

对象接口。

## Extends

- [`TEmitter`](TEmitter.md)

## Extended by

- [`TNativeWindow`](TNativeWindow.md)
- [`TIdleInfo`](TIdleInfo.md)
- [`TObjectArray`](TObjectArray.md)
- [`TObjectDefault`](TObjectDefault.md)
- [`TObjectHash`](TObjectHash.md)
- [`TTimerInfo`](TTimerInfo.md)

## Constructors

### new TObject()

> **new TObject**(`nativeObj`): [`TObject`](TObject.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TObject`](TObject.md)

#### Overrides

[`TEmitter`](TEmitter.md).[`constructor`](TEmitter.md#constructors)

#### Defined in

[awtk.ts:2872](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2872)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TEmitter`](TEmitter.md).[`nativeObj`](TEmitter.md#nativeobj)

#### Defined in

[awtk.ts:2871](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2871)

## Accessors

### name

> `get` **name**(): `string`

对象的名称。

> `set` **name**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Defined in

[awtk.ts:3685](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3685)

***

### refCount

> `get` **refCount**(): `number`

引用计数。

#### Returns

`number`

#### Defined in

[awtk.ts:3676](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3676)

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

#### Defined in

[awtk.ts:3231](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3231)

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

#### Defined in

[awtk.ts:3435](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3435)

***

### clearProps()

> **clearProps**(): [`TRet`](../enumerations/TRet.md)

清除全部属性。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3667](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3667)

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

#### Defined in

[awtk.ts:2963](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2963)

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

#### Defined in

[awtk.ts:3180](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3180)

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

#### Defined in

[awtk.ts:3193](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3193)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

销毁。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`destroy`](TEmitter.md#destroy)

#### Defined in

[awtk.ts:2545](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2545)

***

### disable()

> **disable**(): [`TRet`](../enumerations/TRet.md)

禁用。

禁用后emitter_dispatch无效，但可以注册和注销。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`disable`](TEmitter.md#disable)

#### Defined in

[awtk.ts:2534](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2534)

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

[`TEmitter`](TEmitter.md).[`dispatch`](TEmitter.md#dispatch)

#### Defined in

[awtk.ts:2470](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2470)

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

[`TEmitter`](TEmitter.md).[`dispatchSimpleEvent`](TEmitter.md#dispatchsimpleevent)

#### Defined in

[awtk.ts:2484](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2484)

***

### enable()

> **enable**(): [`TRet`](../enumerations/TRet.md)

启用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`enable`](TEmitter.md#enable)

#### Defined in

[awtk.ts:2521](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2521)

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

#### Defined in

[awtk.ts:3218](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3218)

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

#### Defined in

[awtk.ts:3244](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3244)

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

#### Defined in

[awtk.ts:3448](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3448)

***

### getDesc()

> **getDesc**(): `string`

获取对象的描述信息。

#### Returns

`string`

返回对象的描述信息。

#### Defined in

[awtk.ts:2917](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2917)

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

#### Defined in

[awtk.ts:2976](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2976)

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

#### Defined in

[awtk.ts:3038](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3038)

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

#### Defined in

[awtk.ts:3329](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3329)

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

#### Defined in

[awtk.ts:3064](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3064)

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

#### Defined in

[awtk.ts:3051](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3051)

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

#### Defined in

[awtk.ts:3344](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3344)

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

#### Defined in

[awtk.ts:3025](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3025)

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

#### Defined in

[awtk.ts:3513](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3513)

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

#### Defined in

[awtk.ts:3565](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3565)

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

#### Defined in

[awtk.ts:3617](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3617)

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

#### Defined in

[awtk.ts:3461](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3461)

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

#### Defined in

[awtk.ts:3316](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3316)

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

#### Defined in

[awtk.ts:3012](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3012)

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

#### Defined in

[awtk.ts:3303](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3303)

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

#### Defined in

[awtk.ts:3000](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3000)

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

#### Defined in

[awtk.ts:3291](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3291)

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

#### Defined in

[awtk.ts:2988](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2988)

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

#### Defined in

[awtk.ts:3279](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3279)

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

#### Defined in

[awtk.ts:3539](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3539)

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

#### Defined in

[awtk.ts:3591](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3591)

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

#### Defined in

[awtk.ts:3643](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3643)

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

#### Defined in

[awtk.ts:3487](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3487)

***

### getSize()

> **getSize**(): `number`

获取对象占用内存的大小。

#### Returns

`number`

返回对象占用内存的大小。

#### Defined in

[awtk.ts:2928](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2928)

***

### getType()

> **getType**(): `string`

获取对象的类型名称。

#### Returns

`string`

返回对象的类型名称。

#### Defined in

[awtk.ts:2906](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2906)

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

#### Defined in

[awtk.ts:3205](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3205)

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

#### Defined in

[awtk.ts:3267](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3267)

***

### isCollection()

> **isCollection**(): `boolean`

判断对象是否是集合。

#### Returns

`boolean`

返回TRUE表示是集合，否则不是。

#### Defined in

[awtk.ts:2939](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2939)

***

### notifyChanged()

> **notifyChanged**(): [`TRet`](../enumerations/TRet.md)

触发EVT_PROPS_CHANGED事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3255](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3255)

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

[`TEmitter`](TEmitter.md).[`off`](TEmitter.md#off)

#### Defined in

[awtk.ts:2510](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2510)

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

[`TEmitter`](TEmitter.md).[`on`](TEmitter.md#on)

#### Defined in

[awtk.ts:2498](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2498)

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

#### Defined in

[awtk.ts:3076](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3076)

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

#### Defined in

[awtk.ts:2951](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2951)

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

#### Defined in

[awtk.ts:3089](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3089)

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

#### Defined in

[awtk.ts:3141](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3141)

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

#### Defined in

[awtk.ts:3409](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3409)

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

#### Defined in

[awtk.ts:3357](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3357)

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

#### Defined in

[awtk.ts:3167](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3167)

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

#### Defined in

[awtk.ts:3154](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3154)

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

#### Defined in

[awtk.ts:3422](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3422)

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

#### Defined in

[awtk.ts:3128](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3128)

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

#### Defined in

[awtk.ts:3526](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3526)

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

#### Defined in

[awtk.ts:3578](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3578)

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

#### Defined in

[awtk.ts:3630](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3630)

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

#### Defined in

[awtk.ts:3474](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3474)

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

#### Defined in

[awtk.ts:3396](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3396)

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

#### Defined in

[awtk.ts:3115](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3115)

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

#### Defined in

[awtk.ts:3383](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3383)

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

#### Defined in

[awtk.ts:3102](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3102)

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

#### Defined in

[awtk.ts:3370](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3370)

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

#### Defined in

[awtk.ts:3552](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3552)

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

#### Defined in

[awtk.ts:3604](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3604)

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

#### Defined in

[awtk.ts:3656](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3656)

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

#### Defined in

[awtk.ts:3500](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L3500)

***

### unref()

> **unref**(): [`TRet`](../enumerations/TRet.md)

引用计数减1。引用计数为0时，销毁对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:2883](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2883)

***

### cast()

> `static` **cast**(`emitter`): [`TEmitter`](TEmitter.md)

转换为emitter对象(供脚本语言使用)。

主要给脚本语言使用。

#### Parameters

• **emitter**: [`TEmitter`](TEmitter.md)

emitter对象。

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[`TEmitter`](TEmitter.md).[`cast`](TEmitter.md#cast)

#### Defined in

[awtk.ts:2559](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2559)

***

### create()

> `static` **create**(): [`TEmitter`](TEmitter.md)

创建emitter对象。

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[`TEmitter`](TEmitter.md).[`create`](TEmitter.md#create)

#### Defined in

[awtk.ts:2457](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2457)

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

#### Defined in

[awtk.ts:2895](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L2895)
