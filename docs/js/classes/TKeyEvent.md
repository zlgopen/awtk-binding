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

[awtk.ts:14722](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14722)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TEvent](TEvent.md).[nativeObj](TEvent.md#nativeobj)

#### Defined in

[awtk.ts:14721](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14721)

## Accessors

### alt

• `get` **alt**(): `boolean`

alt键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14752](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14752)

___

### capslock

• `get` **capslock**(): `boolean`

capslock键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14853](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14853)

___

### cmd

• `get` **cmd**(): `boolean`

left shift键是否按下。
cmd/win键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14835](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14835)

___

### ctrl

• `get` **ctrl**(): `boolean`

right alt键是否按下。
ctrl键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14780](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14780)

___

### key

• `get` **key**(): `number`

键值。

#### Returns

`number`

#### Defined in

[awtk.ts:14743](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14743)

___

### lalt

• `get` **lalt**(): `boolean`

left alt键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14761](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14761)

___

### lctrl

• `get` **lctrl**(): `boolean`

left ctrl键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14789](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14789)

___

### lshift

• `get` **lshift**(): `boolean`

left shift键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14816](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14816)

___

### menu

• `get` **menu**(): `boolean`

menu键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14844](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14844)

___

### ralt

• `get` **ralt**(): `boolean`

right alt键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14770](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14770)

___

### rctrl

• `get` **rctrl**(): `boolean`

right ctrl键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14798](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14798)

___

### rshift

• `get` **rshift**(): `boolean`

right shift键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14825](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14825)

___

### shift

• `get` **shift**(): `boolean`

shift键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14807](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14807)

___

### size

• `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Inherited from

TEvent.size

#### Defined in

[awtk.ts:5508](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5508)

___

### target

• `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Inherited from

TEvent.target

#### Defined in

[awtk.ts:5526](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5526)

___

### time

• `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Inherited from

TEvent.time

#### Defined in

[awtk.ts:5517](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5517)

___

### type

• `get` **type**(): `number`

类型。

#### Returns

`number`

#### Inherited from

TEvent.type

#### Defined in

[awtk.ts:5499](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5499)

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

[awtk.ts:5490](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5490)

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

[awtk.ts:5463](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5463)

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

[awtk.ts:14734](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L14734)

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

[awtk.ts:5477](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5477)

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

[awtk.ts:5438](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L5438)
