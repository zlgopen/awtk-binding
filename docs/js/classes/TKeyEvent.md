[AWTK](../README.md) / [Exports](../modules.md) / TKeyEvent

# Class: TKeyEvent

按键事件。

## Hierarchy

- [`TEvent`](TEvent.md)

  ↳ **`TKeyEvent`**

## Table of contents

### Constructors

- [constructor](TKeyEvent.md#constructor)

### Properties

- [nativeObj](TKeyEvent.md#nativeobj)

### Accessors

- [alt](TKeyEvent.md#alt)
- [capslock](TKeyEvent.md#capslock)
- [cmd](TKeyEvent.md#cmd)
- [ctrl](TKeyEvent.md#ctrl)
- [key](TKeyEvent.md#key)
- [lalt](TKeyEvent.md#lalt)
- [lctrl](TKeyEvent.md#lctrl)
- [lshift](TKeyEvent.md#lshift)
- [menu](TKeyEvent.md#menu)
- [numlock](TKeyEvent.md#numlock)
- [ralt](TKeyEvent.md#ralt)
- [rctrl](TKeyEvent.md#rctrl)
- [rshift](TKeyEvent.md#rshift)
- [shift](TKeyEvent.md#shift)
- [size](TKeyEvent.md#size)
- [target](TKeyEvent.md#target)
- [time](TKeyEvent.md#time)
- [type](TKeyEvent.md#type)

### Methods

- [destroy](TKeyEvent.md#destroy)
- [getType](TKeyEvent.md#gettype)
- [cast](TKeyEvent.md#cast)
- [create](TKeyEvent.md#create)
- [fromName](TKeyEvent.md#fromname)

## Constructors

### constructor

• **new TKeyEvent**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TEvent](TEvent.md).[constructor](TEvent.md#constructor)

#### Defined in

[awtk.ts:14879](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14879)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TEvent](TEvent.md).[nativeObj](TEvent.md#nativeobj)

#### Defined in

[awtk.ts:14878](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14878)

## Accessors

### alt

• `get` **alt**(): `boolean`

alt键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14909](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14909)

___

### capslock

• `get` **capslock**(): `boolean`

capslock键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15010](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L15010)

___

### cmd

• `get` **cmd**(): `boolean`

left shift键是否按下。
cmd/win键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14992](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14992)

___

### ctrl

• `get` **ctrl**(): `boolean`

right alt键是否按下。
ctrl键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14937](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14937)

___

### key

• `get` **key**(): `number`

键值。

#### Returns

`number`

#### Defined in

[awtk.ts:14900](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14900)

___

### lalt

• `get` **lalt**(): `boolean`

left alt键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14918](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14918)

___

### lctrl

• `get` **lctrl**(): `boolean`

left ctrl键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14946](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14946)

___

### lshift

• `get` **lshift**(): `boolean`

left shift键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14973](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14973)

___

### menu

• `get` **menu**(): `boolean`

menu键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15001](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L15001)

___

### numlock

• `get` **numlock**(): `boolean`

numlock键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15019](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L15019)

___

### ralt

• `get` **ralt**(): `boolean`

right alt键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14927](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14927)

___

### rctrl

• `get` **rctrl**(): `boolean`

right ctrl键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14955](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14955)

___

### rshift

• `get` **rshift**(): `boolean`

right shift键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14982](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14982)

___

### shift

• `get` **shift**(): `boolean`

shift键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14964](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14964)

___

### size

• `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Inherited from

TEvent.size

#### Defined in

[awtk.ts:5569](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5569)

___

### target

• `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Inherited from

TEvent.target

#### Defined in

[awtk.ts:5587](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5587)

___

### time

• `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Inherited from

TEvent.time

#### Defined in

[awtk.ts:5578](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5578)

___

### type

• `get` **type**(): `number`

类型。

#### Returns

`number`

#### Inherited from

TEvent.type

#### Defined in

[awtk.ts:5560](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5560)

## Methods

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

销毁事件对象。

主要给脚本语言使用。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEvent](TEvent.md).[destroy](TEvent.md#destroy)

#### Defined in

[awtk.ts:5551](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5551)

___

### getType

▸ **getType**(): `number`

获取event类型。

#### Returns

`number`

返回event类型。

#### Inherited from

[TEvent](TEvent.md).[getType](TEvent.md#gettype)

#### Defined in

[awtk.ts:5524](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5524)

___

### cast

▸ `Static` **cast**(`event`): [`TKeyEvent`](TKeyEvent.md)

把event对象转key_event_t对象，主要给脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `event` | [`TEvent`](TEvent.md) | event对象。 |

#### Returns

[`TKeyEvent`](TKeyEvent.md)

event对象。

#### Overrides

[TEvent](TEvent.md).[cast](TEvent.md#cast)

#### Defined in

[awtk.ts:14891](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L14891)

___

### create

▸ `Static` **create**(`type`): [`TEvent`](TEvent.md)

创建event对象。

主要给脚本语言使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `type` | `number` | 事件类型。 |

#### Returns

[`TEvent`](TEvent.md)

返回事件对象。

#### Inherited from

[TEvent](TEvent.md).[create](TEvent.md#create)

#### Defined in

[awtk.ts:5538](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5538)

___

### fromName

▸ `Static` **fromName**(`name`): `number`

将事件名转换成事件的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 事件名。 |

#### Returns

`number`

返回事件的值。

#### Inherited from

[TEvent](TEvent.md).[fromName](TEvent.md#fromname)

#### Defined in

[awtk.ts:5499](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5499)
