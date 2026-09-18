[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TObject

# Class: TObject

Defined in: [awtk.ts:2945](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2945)

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

### Constructor

> **new TObject**(`nativeObj`): `TObject`

Defined in: [awtk.ts:2947](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2947)

#### Parameters

##### nativeObj

`any`

#### Returns

`TObject`

#### Overrides

[`TEmitter`](TEmitter.md).[`constructor`](TEmitter.md#constructor)

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:2946](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2946)

#### Overrides

[`TEmitter`](TEmitter.md).[`nativeObj`](TEmitter.md#nativeobj)

## Accessors

### name

#### Get Signature

> **get** **name**(): `string`

Defined in: [awtk.ts:3751](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3751)

对象的名称。

##### Returns

`string`

#### Set Signature

> **set** **name**(`v`): `void`

Defined in: [awtk.ts:3755](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3755)

##### Parameters

###### v

`string`

##### Returns

`void`

***

### refCount

#### Get Signature

> **get** **refCount**(): `number`

Defined in: [awtk.ts:3764](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3764)

引用计数。

##### Returns

`number`

## Methods

### canExec()

> **canExec**(`name`, `args`): `boolean`

Defined in: [awtk.ts:3306](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3306)

检查是否可以执行指定的命令。

#### Parameters

##### name

`string`

命令的名称。

##### args

`string`

命令的参数。

#### Returns

`boolean`

返回TRUE表示可以执行，否则表示不可以执行。

***

### canExecByPath()

> **canExecByPath**(`path`, `args`): `boolean`

Defined in: [awtk.ts:3510](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3510)

检查是否可以执行指定的命令。

#### Parameters

##### path

`string`

命令的path。

##### args

`string`

命令的参数。

#### Returns

`boolean`

返回TRUE表示可以执行，否则表示不可以执行。

***

### clearProps()

> **clearProps**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3742](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3742)

清除全部属性。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### compare()

> **compare**(`other`): `number`

Defined in: [awtk.ts:3038](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3038)

比较两个对象。

#### Parameters

##### other

`TObject`

比较的object对象。

#### Returns

`number`

返回比较结果。

***

### copyProp()

> **copyProp**(`src`, `name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3255](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3255)

拷贝指定的属性。

#### Parameters

##### src

`TObject`

源对象。

##### name

`string`

属性的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### copyProps()

> **copyProps**(`src`, `overwrite`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3268](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3268)

拷贝全部的属性。

#### Parameters

##### src

`TObject`

源对象。

##### overwrite

`boolean`

如果属性存在是否覆盖。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2620](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2620)

销毁。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`destroy`](TEmitter.md#destroy)

***

### disable()

> **disable**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2609](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2609)

禁用。

禁用后emitter_dispatch无效，但可以注册和注销。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`disable`](TEmitter.md#disable)

***

### dispatch()

> **dispatch**(`e`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2545](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2545)

分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
禁用状态下，本函数不做任何事情。

#### Parameters

##### e

[`TEvent`](TEvent.md)

事件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Inherited from

[`TEmitter`](TEmitter.md).[`dispatch`](TEmitter.md#dispatch)

***

### dispatchSimpleEvent()

> **dispatchSimpleEvent**(`type`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2559](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2559)

分发事件。
> 对emitter_dispatch的包装，分发一个简单的事件。
如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

#### Parameters

##### type

`number`

事件类型。

#### Returns

[`TRet`](../enumerations/TRet.md)

#### Inherited from

[`TEmitter`](TEmitter.md).[`dispatchSimpleEvent`](TEmitter.md#dispatchsimpleevent)

***

### enable()

> **enable**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2596](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2596)

启用。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`enable`](TEmitter.md#enable)

***

### eval()

> **eval**(`expr`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3293](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3293)

计算一个表达式，表达式中引用的变量从prop中获取。

#### Parameters

##### expr

`string`

表达式。

##### v

[`TValue`](TValue.md)

返回计算结果。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### execute()

> **execute**(`name`, `args`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3319](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3319)

执行指定的命令。

#### Parameters

##### name

`string`

命令的名称。

##### args

`string`

命令的参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### executeByPath()

> **executeByPath**(`path`, `args`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3523](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3523)

执行指定的命令。

#### Parameters

##### path

`string`

命令的path。

##### args

`string`

命令的参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### getDesc()

> **getDesc**(): `string`

Defined in: [awtk.ts:2992](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2992)

获取对象的描述信息。

#### Returns

`string`

返回对象的描述信息。

***

### getProp()

> **getProp**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3051](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3051)

获取指定属性的值。

#### Parameters

##### name

`string`

属性的名称。

##### v

[`TValue`](TValue.md)

返回属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### getPropBool()

> **getPropBool**(`name`, `defval`): `boolean`

Defined in: [awtk.ts:3113](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3113)

获取指定属性的bool类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`boolean`

缺省值。

#### Returns

`boolean`

返回指定属性的bool类型的值。

***

### getPropBoolByPath()

> **getPropBoolByPath**(`path`, `defval`): `boolean`

Defined in: [awtk.ts:3404](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3404)

获取指定属性的bool类型的值。

#### Parameters

##### path

`string`

属性的path。

##### defval

`boolean`

缺省值。

#### Returns

`boolean`

返回指定属性的bool类型的值。

***

### getPropDouble()

> **getPropDouble**(`name`, `defval`): `number`

Defined in: [awtk.ts:3139](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3139)

获取指定属性的浮点数类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回指定属性的浮点数类型的值。

***

### getPropFloat()

> **getPropFloat**(`name`, `defval`): `number`

Defined in: [awtk.ts:3126](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3126)

获取指定属性的浮点数类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回指定属性的浮点数类型的值。

***

### getPropFloatByPath()

> **getPropFloatByPath**(`path`, `defval`): `number`

Defined in: [awtk.ts:3419](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3419)

获取指定属性的浮点数类型的值。

e

#### Parameters

##### path

`string`

属性的path。

##### defval

`number`

缺省值。

#### Returns

`number`

返回指定属性的浮点数类型的值。

***

### getPropInt()

> **getPropInt**(`name`, `defval`): `number`

Defined in: [awtk.ts:3100](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3100)

获取指定属性的整数类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回指定属性的整数类型的值。

***

### getPropInt16()

> **getPropInt16**(`name`, `defval`): `number`

Defined in: [awtk.ts:3588](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3588)

获取指定属性的int16类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回指定属性的int16类型的值。

***

### getPropInt32()

> **getPropInt32**(`name`, `defval`): `number`

Defined in: [awtk.ts:3640](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3640)

获取指定属性的int32类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回指定属性的int32类型的值。

***

### getPropInt64()

> **getPropInt64**(`name`, `defval`): `number`

Defined in: [awtk.ts:3692](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3692)

获取指定属性的int64类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回指定属性的int64类型的值。

***

### getPropInt8()

> **getPropInt8**(`name`, `defval`): `number`

Defined in: [awtk.ts:3536](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3536)

获取指定属性的int8类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回指定属性的int8类型的值。

***

### getPropIntByPath()

> **getPropIntByPath**(`path`, `defval`): `number`

Defined in: [awtk.ts:3391](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3391)

获取指定属性的整数类型的值。

#### Parameters

##### path

`string`

属性的path。

##### defval

`number`

缺省值。

#### Returns

`number`

返回指定属性的整数类型的值。

***

### getPropObject()

> **getPropObject**(`name`): `TObject`

Defined in: [awtk.ts:3087](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3087)

获取指定属性的object类型的值。

#### Parameters

##### name

`string`

属性的名称。

#### Returns

`TObject`

返回指定属性的object类型的值。

***

### getPropObjectByPath()

> **getPropObjectByPath**(`path`): `TObject`

Defined in: [awtk.ts:3378](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3378)

获取指定属性的object类型的值。

#### Parameters

##### path

`string`

属性的path。

#### Returns

`TObject`

返回指定属性的object类型的值。

***

### getPropPointer()

> **getPropPointer**(`name`): `any`

Defined in: [awtk.ts:3075](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3075)

获取指定属性的指针类型的值。

#### Parameters

##### name

`string`

属性的名称。

#### Returns

`any`

返回指定属性的指针类型的值。

***

### getPropPointerByPath()

> **getPropPointerByPath**(`path`): `any`

Defined in: [awtk.ts:3366](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3366)

获取指定属性的指针类型的值。

#### Parameters

##### path

`string`

属性的path。

#### Returns

`any`

返回指定属性的指针类型的值。

***

### getPropStr()

> **getPropStr**(`name`): `string`

Defined in: [awtk.ts:3063](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3063)

获取指定属性的字符串类型的值。

#### Parameters

##### name

`string`

属性的名称。

#### Returns

`string`

返回指定属性的字符串类型的值。

***

### getPropStrByPath()

> **getPropStrByPath**(`path`): `string`

Defined in: [awtk.ts:3354](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3354)

获取指定属性的字符串类型的值。

#### Parameters

##### path

`string`

属性的path。

#### Returns

`string`

返回指定属性的字符串类型的值。

***

### getPropUint16()

> **getPropUint16**(`name`, `defval`): `number`

Defined in: [awtk.ts:3614](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3614)

获取指定属性的uint16类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回指定属性的uint16类型的值。

***

### getPropUint32()

> **getPropUint32**(`name`, `defval`): `number`

Defined in: [awtk.ts:3666](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3666)

获取指定属性的uint32类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回指定属性的uint32类型的值。

***

### getPropUint64()

> **getPropUint64**(`name`, `defval`): `number`

Defined in: [awtk.ts:3718](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3718)

获取指定属性的uint64类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回指定属性的uint64类型的值。

***

### getPropUint8()

> **getPropUint8**(`name`, `defval`): `number`

Defined in: [awtk.ts:3562](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3562)

获取指定属性的uint8类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回指定属性的uint8类型的值。

***

### getSize()

> **getSize**(): `number`

Defined in: [awtk.ts:3003](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3003)

获取对象占用内存的大小。

#### Returns

`number`

返回对象占用内存的大小。

***

### getType()

> **getType**(): `string`

Defined in: [awtk.ts:2981](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2981)

获取对象的类型名称。

#### Returns

`string`

返回对象的类型名称。

***

### hasProp()

> **hasProp**(`name`): `boolean`

Defined in: [awtk.ts:3280](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3280)

检查是否存在指定的属性。

#### Parameters

##### name

`string`

属性的名称。

#### Returns

`boolean`

返回TRUE表示存在，否则表示不存在。

***

### hasPropByPath()

> **hasPropByPath**(`path`): `boolean`

Defined in: [awtk.ts:3342](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3342)

检查是否存在指定的属性。

#### Parameters

##### path

`string`

属性的path，各级之间用.分隔。

#### Returns

`boolean`

返回TRUE表示存在，否则表示不存在。

***

### isCollection()

> **isCollection**(): `boolean`

Defined in: [awtk.ts:3014](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3014)

判断对象是否是集合。

#### Returns

`boolean`

返回TRUE表示是集合，否则不是。

***

### notifyChanged()

> **notifyChanged**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3330](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3330)

触发EVT_PROPS_CHANGED事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### off()

> **off**(`id`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2585](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2585)

注销指定事件的处理函数。

#### Parameters

##### id

`number`

emitter_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEmitter`](TEmitter.md).[`off`](TEmitter.md#off)

***

### on()

> **on**(`etype`, `handler`, `ctx`): `number`

Defined in: [awtk.ts:2573](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2573)

注册指定事件的处理函数。

#### Parameters

##### etype

`number`

事件类型。

##### handler

`Function`

事件处理函数。

##### ctx

`any`

事件处理函数上下文。

#### Returns

`number`

返回id，用于emitter_off。

#### Inherited from

[`TEmitter`](TEmitter.md).[`on`](TEmitter.md#on)

***

### removeProp()

> **removeProp**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3151](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3151)

删除指定属性。

#### Parameters

##### name

`string`

属性的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setName()

> **setName**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3026](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3026)

设置对象的名称。

#### Parameters

##### name

`string`

对象的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setProp()

> **setProp**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3164](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3164)

设置指定属性的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

[`TValue`](TValue.md)

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropBool()

> **setPropBool**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3216](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3216)

设置指定属性的bool类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropBoolByPath()

> **setPropBoolByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3484](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3484)

设置指定属性的bool类型的值。

#### Parameters

##### path

`string`

属性的path。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropByPath()

> **setPropByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3432](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3432)

设置指定属性的值。

#### Parameters

##### path

`string`

属性的path。

##### value

[`TValue`](TValue.md)

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropDouble()

> **setPropDouble**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3242](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3242)

设置指定属性的浮点数类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropFloat()

> **setPropFloat**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3229](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3229)

设置指定属性的浮点数类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropFloatByPath()

> **setPropFloatByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3497](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3497)

设置指定属性的浮点数类型的值。

#### Parameters

##### path

`string`

属性的path。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropInt()

> **setPropInt**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3203](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3203)

设置指定属性的整数类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropInt16()

> **setPropInt16**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3601](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3601)

设置指定属性的int16类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropInt32()

> **setPropInt32**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3653](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3653)

设置指定属性的int32类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropInt64()

> **setPropInt64**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3705](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3705)

设置指定属性的int64类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropInt8()

> **setPropInt8**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3549](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3549)

设置指定属性的int8类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropIntByPath()

> **setPropIntByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3471](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3471)

设置指定属性的整数类型的值。

#### Parameters

##### path

`string`

属性的path。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropObject()

> **setPropObject**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3190](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3190)

设置指定属性的object类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

`TObject`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropObjectByPath()

> **setPropObjectByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3458](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3458)

设置指定属性的object类型的值。

#### Parameters

##### path

`string`

属性的path。

##### value

`TObject`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropStr()

> **setPropStr**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3177](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3177)

设置指定属性的字符串类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

`string`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropStrByPath()

> **setPropStrByPath**(`path`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3445](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3445)

设置指定属性的字符串类型的值。

#### Parameters

##### path

`string`

属性的path。

##### value

`string`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropUint16()

> **setPropUint16**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3627](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3627)

设置指定属性的uint16类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropUint32()

> **setPropUint32**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3679](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3679)

设置指定属性的uint32类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropUint64()

> **setPropUint64**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3731](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3731)

设置指定属性的uint64类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPropUint8()

> **setPropUint8**(`name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:3575](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L3575)

设置指定属性的uint8类型的值。

#### Parameters

##### name

`string`

属性的名称。

##### value

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### unref()

> **unref**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:2958](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2958)

引用计数减1。引用计数为0时，销毁对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### cast()

> `static` **cast**(`emitter`): [`TEmitter`](TEmitter.md)

Defined in: [awtk.ts:2634](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2634)

转换为emitter对象(供脚本语言使用)。

主要给脚本语言使用。

#### Parameters

##### emitter

[`TEmitter`](TEmitter.md)

emitter对象。

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[`TEmitter`](TEmitter.md).[`cast`](TEmitter.md#cast)

***

### create()

> `static` **create**(): [`TEmitter`](TEmitter.md)

Defined in: [awtk.ts:2532](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2532)

创建emitter对象。

#### Returns

[`TEmitter`](TEmitter.md)

对象。

#### Inherited from

[`TEmitter`](TEmitter.md).[`create`](TEmitter.md#create)

***

### ref()

> `static` **ref**(`obj`): `TObject`

Defined in: [awtk.ts:2970](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L2970)

引用计数加1。

#### Parameters

##### obj

`TObject`

object对象。

#### Returns

`TObject`

返回object对象。
