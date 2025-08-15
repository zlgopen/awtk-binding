[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TStyleMutable

# Class: TStyleMutable

可变的style(可实时修改并生效，主要用于在designer中被编辑的控件，或者一些特殊控件)。

style\_mutable也对style\_const进行了包装，当用户没修改某个值时，便从style\_const中获取。

## Extends

- [`TStyle`](TStyle.md)

## Constructors

### new TStyleMutable()

> **new TStyleMutable**(`nativeObj`): [`TStyleMutable`](TStyleMutable.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TStyleMutable`](TStyleMutable.md)

#### Overrides

[`TStyle`](TStyle.md).[`constructor`](TStyle.md#constructors)

#### Defined in

[awtk.ts:16536](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16536)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TStyle`](TStyle.md).[`nativeObj`](TStyle.md#nativeobj)

#### Defined in

[awtk.ts:16535](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16535)

## Accessors

### name

> `get` **name**(): `string`

名称。

> `set` **name**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Defined in

[awtk.ts:16597](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16597)

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

#### Inherited from

[`TStyle`](TStyle.md).[`get`](TStyle.md#get)

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

#### Inherited from

[`TStyle`](TStyle.md).[`getInt`](TStyle.md#getint)

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

#### Inherited from

[`TStyle`](TStyle.md).[`getStr`](TStyle.md#getstr)

#### Defined in

[awtk.ts:7692](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7692)

***

### getStyleState()

> **getStyleState**(): `string`

获取风格对象的风格状态

#### Returns

`string`

返回风格状态。

#### Inherited from

[`TStyle`](TStyle.md).[`getStyleState`](TStyle.md#getstylestate)

#### Defined in

[awtk.ts:7747](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7747)

***

### getStyleType()

> **getStyleType**(): `string`

获取 style 的风格类型。

#### Returns

`string`

返回风格类型。

#### Inherited from

[`TStyle`](TStyle.md).[`getStyleType`](TStyle.md#getstyletype)

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

#### Inherited from

[`TStyle`](TStyle.md).[`getUint`](TStyle.md#getuint)

#### Defined in

[awtk.ts:7679](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7679)

***

### isMutable()

> **isMutable**(): `boolean`

检查style是否是mutable的。

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Inherited from

[`TStyle`](TStyle.md).[`isMutable`](TStyle.md#ismutable)

#### Defined in

[awtk.ts:7758](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7758)

***

### isValid()

> **isValid**(): `boolean`

检查style对象是否有效

#### Returns

`boolean`

返回是否有效。

#### Inherited from

[`TStyle`](TStyle.md).[`isValid`](TStyle.md#isvalid)

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

#### Inherited from

[`TStyle`](TStyle.md).[`notifyWidgetStateChanged`](TStyle.md#notifywidgetstatechanged)

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

#### Inherited from

[`TStyle`](TStyle.md).[`set`](TStyle.md#set)

#### Defined in

[awtk.ts:7720](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7720)

***

### setInt()

> **setInt**(`state`, `name`, `val`): [`TRet`](../enumerations/TRet.md)

设置指定名称整数格式的值。

#### Parameters

• **state**: `string`

控件状态。

• **name**: `string`

属性名。

• **val**: `number`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16562](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16562)

***

### setName()

> **setName**(`name`): [`TRet`](../enumerations/TRet.md)

设置style的名称。

#### Parameters

• **name**: `string`

名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:16548](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16548)

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

#### Inherited from

[`TStyle`](TStyle.md).[`updateState`](TStyle.md#updatestate)

#### Defined in

[awtk.ts:7736](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7736)

***

### cast()

> `static` **cast**(`s`): [`TStyleMutable`](TStyleMutable.md)

转换为style_mutable对象。

#### Parameters

• **s**: [`TStyle`](TStyle.md)

style对象。

#### Returns

[`TStyleMutable`](TStyleMutable.md)

style对象。

#### Defined in

[awtk.ts:16574](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16574)

***

### create()

> `static` **create**(`default_style`): [`TStyleMutable`](TStyleMutable.md)

创建style\_mutable对象。

> 除了测试程序外不需要直接调用，widget会通过style\_factory\_create创建。

#### Parameters

• **default\_style**: [`TStyle`](TStyle.md)

缺省的style。

#### Returns

[`TStyleMutable`](TStyleMutable.md)

style对象。

#### Defined in

[awtk.ts:16588](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16588)
