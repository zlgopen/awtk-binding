[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TStyle

# Class: TStyle

控件风格。

widget从style对象中，获取诸如字体、颜色和图片相关的参数，根据这些参数来绘制界面。

属性名称的请参考[style\_id](style_id_t.md)

## Extended by

- [`TStyleMutable`](TStyleMutable.md)

## Constructors

### new TStyle()

> **new TStyle**(`nativeObj`): [`TStyle`](TStyle.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TStyle`](TStyle.md)

#### Defined in

[awtk.ts:7630](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7630)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Defined in

[awtk.ts:7629](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7629)

## Methods

### get()

> **get**(`state`, `name`, `value`): [`TRet`](../enumerations/TRet.md)

获取指定状态的指定属性的值。

#### Parameters

• **state**: `string`

状态。

• **name**: `string`

属性名。

• **value**: [`TValue`](TValue.md)

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7706](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7706)

***

### getInt()

> **getInt**(`name`, `defval`): `number`

获取指定name的整数格式的值。

#### Parameters

• **name**: `string`

属性名。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回整数格式的值。

#### Defined in

[awtk.ts:7666](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7666)

***

### getStr()

> **getStr**(`name`, `defval`): `string`

获取指定name的字符串格式的值。

#### Parameters

• **name**: `string`

属性名。

• **defval**: `string`

缺省值。

#### Returns

`string`

返回字符串格式的值。

#### Defined in

[awtk.ts:7692](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7692)

***

### getStyleState()

> **getStyleState**(): `string`

获取风格对象的风格状态

#### Returns

`string`

返回风格状态。

#### Defined in

[awtk.ts:7747](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7747)

***

### getStyleType()

> **getStyleType**(): `string`

获取 style 的风格类型。

#### Returns

`string`

返回风格类型。

#### Defined in

[awtk.ts:7769](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7769)

***

### getUint()

> **getUint**(`name`, `defval`): `number`

获取指定name的无符号整数格式的值。

#### Parameters

• **name**: `string`

属性名。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回无符号整数格式的值。

#### Defined in

[awtk.ts:7679](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7679)

***

### isMutable()

> **isMutable**(): `boolean`

检查style是否是mutable的。

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Defined in

[awtk.ts:7758](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7758)

***

### isValid()

> **isValid**(): `boolean`

检查style对象是否有效

#### Returns

`boolean`

返回是否有效。

#### Defined in

[awtk.ts:7653](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7653)

***

### notifyWidgetStateChanged()

> **notifyWidgetStateChanged**(`widget`): [`TRet`](../enumerations/TRet.md)

widget状态改变时，通知style更新数据。

#### Parameters

• **widget**: [`TWidget`](TWidget.md)

控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7642](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7642)

***

### set()

> **set**(`state`, `name`, `value`): [`TRet`](../enumerations/TRet.md)

设置指定状态的指定属性的值(仅仅对mutable的style有效)。

#### Parameters

• **state**: `string`

状态。

• **name**: `string`

属性名。

• **value**: [`TValue`](TValue.md)

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7720](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7720)

***

### updateState()

> **updateState**(`theme`, `widget_type`, `style_name`, `widget_state`): [`TRet`](../enumerations/TRet.md)

更新风格对象的状态以及对应的数据
备注：根据 widget_type 和 style_name 以及 widget_state 在 theme 对象中查找对应的数据并且更新到 style 对象中

#### Parameters

• **theme**: [`TTheme`](TTheme.md)

theme对象。

• **widget\_type**: `string`

控件的类型名。

• **style\_name**: `string`

style的名称。

• **widget\_state**: `string`

控件的状态。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7736](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7736)
