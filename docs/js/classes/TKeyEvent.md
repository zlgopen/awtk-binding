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

[awtk.ts:14905](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14905)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TEvent](TEvent.md).[nativeObj](TEvent.md#nativeobj)

#### Defined in

[awtk.ts:14904](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14904)

## Accessors

### alt

• `get` **alt**(): `boolean`

alt键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14935](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14935)

___

### capslock

• `get` **capslock**(): `boolean`

capslock键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15036](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15036)

___

### cmd

• `get` **cmd**(): `boolean`

left shift键是否按下。
cmd/win键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15018](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15018)

___

### ctrl

• `get` **ctrl**(): `boolean`

right alt键是否按下。
ctrl键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14963](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14963)

___

### key

• `get` **key**(): `number`

键值。

#### Returns

`number`

#### Defined in

[awtk.ts:14926](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14926)

___

### lalt

• `get` **lalt**(): `boolean`

left alt键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14944](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14944)

___

### lctrl

• `get` **lctrl**(): `boolean`

left ctrl键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14972](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14972)

___

### lshift

• `get` **lshift**(): `boolean`

left shift键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14999](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14999)

___

### menu

• `get` **menu**(): `boolean`

menu键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15027](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15027)

___

### numlock

• `get` **numlock**(): `boolean`

numlock键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15045](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15045)

___

### ralt

• `get` **ralt**(): `boolean`

right alt键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14953](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14953)

___

### rctrl

• `get` **rctrl**(): `boolean`

right ctrl键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14981](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14981)

___

### rshift

• `get` **rshift**(): `boolean`

right shift键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15008](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15008)

___

### shift

• `get` **shift**(): `boolean`

shift键是否按下。

#### Returns

`boolean`

#### Defined in

[awtk.ts:14990](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14990)

___

### size

• `get` **size**(): `number`

结构体的大小。

#### Returns

`number`

#### Inherited from

TEvent.size

#### Defined in

[awtk.ts:5583](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5583)

___

### target

• `get` **target**(): `any`

事件发生的目标对象。

#### Returns

`any`

#### Inherited from

TEvent.target

#### Defined in

[awtk.ts:5601](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5601)

___

### time

• `get` **time**(): `number`

事件发生的时间点（该时间点并非真实时间）。

#### Returns

`number`

#### Inherited from

TEvent.time

#### Defined in

[awtk.ts:5592](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5592)

___

### type

• `get` **type**(): `number`

类型。

#### Returns

`number`

#### Inherited from

TEvent.type

#### Defined in

[awtk.ts:5574](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5574)

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

[awtk.ts:5565](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5565)

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

[awtk.ts:5538](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5538)

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

[awtk.ts:14917](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L14917)

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

[awtk.ts:5552](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5552)

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

[awtk.ts:5513](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5513)
