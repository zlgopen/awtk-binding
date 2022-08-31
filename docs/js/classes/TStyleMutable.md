[AWTK](../README.md) / [Exports](../modules.md) / TStyleMutable

# Class: TStyleMutable

可变的style(可实时修改并生效，主要用于在designer中被编辑的控件，或者一些特殊控件)。

style\_mutable也对style\_const进行了包装，当用户没修改某个值时，便从style\_const中获取。

## Hierarchy

- [`TStyle`](TStyle.md)

  ↳ **`TStyleMutable`**

## Table of contents

### Constructors

- [constructor](TStyleMutable.md#constructor)

### Properties

- [nativeObj](TStyleMutable.md#nativeobj)

### Accessors

- [name](TStyleMutable.md#name)

### Methods

- [getInt](TStyleMutable.md#getint)
- [getStr](TStyleMutable.md#getstr)
- [getStyleState](TStyleMutable.md#getstylestate)
- [getStyleType](TStyleMutable.md#getstyletype)
- [getUint](TStyleMutable.md#getuint)
- [isMutable](TStyleMutable.md#ismutable)
- [isValid](TStyleMutable.md#isvalid)
- [notifyWidgetStateChanged](TStyleMutable.md#notifywidgetstatechanged)
- [set](TStyleMutable.md#set)
- [setInt](TStyleMutable.md#setint)
- [setName](TStyleMutable.md#setname)
- [updateState](TStyleMutable.md#updatestate)
- [cast](TStyleMutable.md#cast)
- [create](TStyleMutable.md#create)

## Constructors

### constructor

• **new TStyleMutable**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TStyle](TStyle.md).[constructor](TStyle.md#constructor)

#### Defined in

[awtk.ts:15250](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L15250)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TStyle](TStyle.md).[nativeObj](TStyle.md#nativeobj)

#### Defined in

[awtk.ts:15249](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L15249)

## Accessors

### name

• `get` **name**(): `string`

名称。

#### Returns

`string`

#### Defined in

[awtk.ts:15311](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L15311)

• `set` **name**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Defined in

[awtk.ts:15315](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L15315)

## Methods

### getInt

▸ **getInt**(`name`, `defval`): `number`

获取指定name的整数格式的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性名。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回整数格式的值。

#### Inherited from

[TStyle](TStyle.md).[getInt](TStyle.md#getint)

#### Defined in

[awtk.ts:7149](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L7149)

___

### getStr

▸ **getStr**(`name`, `defval`): `string`

获取指定name的字符串格式的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性名。 |
| `defval` | `string` | 缺省值。 |

#### Returns

`string`

返回字符串格式的值。

#### Inherited from

[TStyle](TStyle.md).[getStr](TStyle.md#getstr)

#### Defined in

[awtk.ts:7175](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L7175)

___

### getStyleState

▸ **getStyleState**(): `string`

获取风格对象的风格状态

#### Returns

`string`

返回风格状态。

#### Inherited from

[TStyle](TStyle.md).[getStyleState](TStyle.md#getstylestate)

#### Defined in

[awtk.ts:7216](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L7216)

___

### getStyleType

▸ **getStyleType**(): `string`

获取 style 的风格类型。

#### Returns

`string`

返回风格类型。

#### Inherited from

[TStyle](TStyle.md).[getStyleType](TStyle.md#getstyletype)

#### Defined in

[awtk.ts:7238](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L7238)

___

### getUint

▸ **getUint**(`name`, `defval`): `number`

获取指定name的无符号整数格式的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性名。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回无符号整数格式的值。

#### Inherited from

[TStyle](TStyle.md).[getUint](TStyle.md#getuint)

#### Defined in

[awtk.ts:7162](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L7162)

___

### isMutable

▸ **isMutable**(): `boolean`

检查style是否是mutable的。

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Inherited from

[TStyle](TStyle.md).[isMutable](TStyle.md#ismutable)

#### Defined in

[awtk.ts:7227](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L7227)

___

### isValid

▸ **isValid**(): `boolean`

检查style对象是否有效

#### Returns

`boolean`

返回是否有效。

#### Inherited from

[TStyle](TStyle.md).[isValid](TStyle.md#isvalid)

#### Defined in

[awtk.ts:7136](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L7136)

___

### notifyWidgetStateChanged

▸ **notifyWidgetStateChanged**(`widget`): [`TRet`](../enums/TRet.md)

widget状态改变时，通知style更新数据。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `widget` | [`TWidget`](TWidget.md) | 控件对象。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TStyle](TStyle.md).[notifyWidgetStateChanged](TStyle.md#notifywidgetstatechanged)

#### Defined in

[awtk.ts:7125](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L7125)

___

### set

▸ **set**(`state`, `name`, `value`): [`TRet`](../enums/TRet.md)

设置指定状态的指定属性的值(仅仅对mutable的style有效)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `state` | `string` | 状态。 |
| `name` | `string` | 属性名。 |
| `value` | [`TValue`](TValue.md) | 值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TStyle](TStyle.md).[set](TStyle.md#set)

#### Defined in

[awtk.ts:7189](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L7189)

___

### setInt

▸ **setInt**(`state`, `name`, `val`): [`TRet`](../enums/TRet.md)

设置指定名称整数格式的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `state` | `string` | 控件状态。 |
| `name` | `string` | 属性名。 |
| `val` | `number` | 值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:15276](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L15276)

___

### setName

▸ **setName**(`name`): [`TRet`](../enums/TRet.md)

设置style的名称。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:15262](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L15262)

___

### updateState

▸ **updateState**(`theme`, `widget_type`, `style_name`, `widget_state`): [`TRet`](../enums/TRet.md)

更新风格对象的状态以及对应的数据
备注：根据 widget_type 和 style_name 以及 widget_state 在 theme 对象中查找对应的数据并且更新到 style 对象中

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `theme` | [`TTheme`](TTheme.md) | theme对象。 |
| `widget_type` | `string` | 控件的类型名。 |
| `style_name` | `string` | style的名称。 |
| `widget_state` | `string` | 控件的状态。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TStyle](TStyle.md).[updateState](TStyle.md#updatestate)

#### Defined in

[awtk.ts:7205](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L7205)

___

### cast

▸ `Static` **cast**(`s`): [`TStyleMutable`](TStyleMutable.md)

转换为style_mutable对象。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `s` | [`TStyle`](TStyle.md) | style对象。 |

#### Returns

[`TStyleMutable`](TStyleMutable.md)

style对象。

#### Defined in

[awtk.ts:15288](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L15288)

___

### create

▸ `Static` **create**(`default_style`): [`TStyleMutable`](TStyleMutable.md)

创建style\_mutable对象。

> 除了测试程序外不需要直接调用，widget会通过style\_factory\_create创建。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `default_style` | [`TStyle`](TStyle.md) | 缺省的style。 |

#### Returns

[`TStyleMutable`](TStyleMutable.md)

style对象。

#### Defined in

[awtk.ts:15302](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L15302)
