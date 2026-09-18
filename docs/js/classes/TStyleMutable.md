[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TStyleMutable

# Class: TStyleMutable

Defined in: [awtk.ts:16859](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L16859)

可变的style(可实时修改并生效，主要用于在designer中被编辑的控件，或者一些特殊控件)。

style\_mutable也对style\_const进行了包装，当用户没修改某个值时，便从style\_const中获取。

## Extends

- [`TStyle`](TStyle.md)

## Constructors

### Constructor

> **new TStyleMutable**(`nativeObj`): `TStyleMutable`

Defined in: [awtk.ts:16861](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L16861)

#### Parameters

##### nativeObj

`any`

#### Returns

`TStyleMutable`

#### Overrides

[`TStyle`](TStyle.md).[`constructor`](TStyle.md#constructor)

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:16860](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L16860)

#### Overrides

[`TStyle`](TStyle.md).[`nativeObj`](TStyle.md#nativeobj)

## Accessors

### name

#### Get Signature

> **get** **name**(): `string`

Defined in: [awtk.ts:16922](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L16922)

名称。

##### Returns

`string`

#### Set Signature

> **set** **name**(`v`): `void`

Defined in: [awtk.ts:16926](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L16926)

##### Parameters

###### v

`string`

##### Returns

`void`

## Methods

### get()

> **get**(`state`, `name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7786](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7786)

获取指定状态的指定属性的值。

#### Parameters

##### state

`string`

状态。

##### name

`string`

属性名。

##### value

[`TValue`](TValue.md)

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TStyle`](TStyle.md).[`get`](TStyle.md#get)

***

### getInt()

> **getInt**(`name`, `defval`): `number`

Defined in: [awtk.ts:7746](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7746)

获取指定name的整数格式的值。

#### Parameters

##### name

`string`

属性名。

##### defval

`number`

缺省值。

#### Returns

`number`

返回整数格式的值。

#### Inherited from

[`TStyle`](TStyle.md).[`getInt`](TStyle.md#getint)

***

### getStr()

> **getStr**(`name`, `defval`): `string`

Defined in: [awtk.ts:7772](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7772)

获取指定name的字符串格式的值。

#### Parameters

##### name

`string`

属性名。

##### defval

`string`

缺省值。

#### Returns

`string`

返回字符串格式的值。

#### Inherited from

[`TStyle`](TStyle.md).[`getStr`](TStyle.md#getstr)

***

### getStyleState()

> **getStyleState**(): `string`

Defined in: [awtk.ts:7827](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7827)

获取风格对象的风格状态

#### Returns

`string`

返回风格状态。

#### Inherited from

[`TStyle`](TStyle.md).[`getStyleState`](TStyle.md#getstylestate)

***

### getStyleType()

> **getStyleType**(): `string`

Defined in: [awtk.ts:7849](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7849)

获取 style 的风格类型。

#### Returns

`string`

返回风格类型。

#### Inherited from

[`TStyle`](TStyle.md).[`getStyleType`](TStyle.md#getstyletype)

***

### getUint()

> **getUint**(`name`, `defval`): `number`

Defined in: [awtk.ts:7759](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7759)

获取指定name的无符号整数格式的值。

#### Parameters

##### name

`string`

属性名。

##### defval

`number`

缺省值。

#### Returns

`number`

返回无符号整数格式的值。

#### Inherited from

[`TStyle`](TStyle.md).[`getUint`](TStyle.md#getuint)

***

### isMutable()

> **isMutable**(): `boolean`

Defined in: [awtk.ts:7838](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7838)

检查style是否是mutable的。

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Inherited from

[`TStyle`](TStyle.md).[`isMutable`](TStyle.md#ismutable)

***

### isValid()

> **isValid**(): `boolean`

Defined in: [awtk.ts:7733](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7733)

检查style对象是否有效

#### Returns

`boolean`

返回是否有效。

#### Inherited from

[`TStyle`](TStyle.md).[`isValid`](TStyle.md#isvalid)

***

### notifyWidgetStateChanged()

> **notifyWidgetStateChanged**(`widget`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7722](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7722)

widget状态改变时，通知style更新数据。

#### Parameters

##### widget

[`TWidget`](TWidget.md)

控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TStyle`](TStyle.md).[`notifyWidgetStateChanged`](TStyle.md#notifywidgetstatechanged)

***

### set()

> **set**(`state`, `name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7800](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7800)

设置指定状态的指定属性的值(仅仅对mutable的style有效)。

#### Parameters

##### state

`string`

状态。

##### name

`string`

属性名。

##### value

[`TValue`](TValue.md)

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TStyle`](TStyle.md).[`set`](TStyle.md#set)

***

### setInt()

> **setInt**(`state`, `name`, `val`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:16887](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L16887)

设置指定名称整数格式的值。

#### Parameters

##### state

`string`

控件状态。

##### name

`string`

属性名。

##### val

`number`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setName()

> **setName**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:16873](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L16873)

设置style的名称。

#### Parameters

##### name

`string`

名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### updateState()

> **updateState**(`theme`, `widget_type`, `style_name`, `widget_state`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7816](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7816)

更新风格对象的状态以及对应的数据
备注：根据 widget_type 和 style_name 以及 widget_state 在 theme 对象中查找对应的数据并且更新到 style 对象中

#### Parameters

##### theme

[`TTheme`](TTheme.md)

theme对象。

##### widget\_type

`string`

控件的类型名。

##### style\_name

`string`

style的名称。

##### widget\_state

`string`

控件的状态。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TStyle`](TStyle.md).[`updateState`](TStyle.md#updatestate)

***

### cast()

> `static` **cast**(`s`): `TStyleMutable`

Defined in: [awtk.ts:16899](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L16899)

转换为style_mutable对象。

#### Parameters

##### s

[`TStyle`](TStyle.md)

style对象。

#### Returns

`TStyleMutable`

style对象。

***

### create()

> `static` **create**(`default_style`): `TStyleMutable`

Defined in: [awtk.ts:16913](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L16913)

创建style\_mutable对象。

> 除了测试程序外不需要直接调用，widget会通过style\_factory\_create创建。

#### Parameters

##### default\_style

[`TStyle`](TStyle.md)

缺省的style。

#### Returns

`TStyleMutable`

style对象。
