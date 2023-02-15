[AWTK](../README.md) / [Exports](../modules.md) / TStyle

# Class: TStyle

控件风格。

widget从style对象中，获取诸如字体、颜色和图片相关的参数，根据这些参数来绘制界面。

属性名称的请参考[style\_id](style_id_t.md)

## Hierarchy

- **`TStyle`**

  ↳ [`TStyleMutable`](TStyleMutable.md)

## Table of contents

### Constructors

- [constructor](TStyle.md#constructor)

### Properties

- [nativeObj](TStyle.md#nativeobj)

### Methods

- [getInt](TStyle.md#getint)
- [getStr](TStyle.md#getstr)
- [getStyleState](TStyle.md#getstylestate)
- [getStyleType](TStyle.md#getstyletype)
- [getUint](TStyle.md#getuint)
- [isMutable](TStyle.md#ismutable)
- [isValid](TStyle.md#isvalid)
- [notifyWidgetStateChanged](TStyle.md#notifywidgetstatechanged)
- [set](TStyle.md#set)
- [updateState](TStyle.md#updatestate)

## Constructors

### constructor

• **new TStyle**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Defined in

[awtk.ts:7225](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7225)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Defined in

[awtk.ts:7224](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7224)

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

#### Defined in

[awtk.ts:7261](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7261)

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

#### Defined in

[awtk.ts:7287](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7287)

___

### getStyleState

▸ **getStyleState**(): `string`

获取风格对象的风格状态

#### Returns

`string`

返回风格状态。

#### Defined in

[awtk.ts:7328](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7328)

___

### getStyleType

▸ **getStyleType**(): `string`

获取 style 的风格类型。

#### Returns

`string`

返回风格类型。

#### Defined in

[awtk.ts:7350](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7350)

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

#### Defined in

[awtk.ts:7274](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7274)

___

### isMutable

▸ **isMutable**(): `boolean`

检查style是否是mutable的。

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Defined in

[awtk.ts:7339](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7339)

___

### isValid

▸ **isValid**(): `boolean`

检查style对象是否有效

#### Returns

`boolean`

返回是否有效。

#### Defined in

[awtk.ts:7248](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7248)

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

#### Defined in

[awtk.ts:7237](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7237)

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

#### Defined in

[awtk.ts:7301](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7301)

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

#### Defined in

[awtk.ts:7317](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L7317)
