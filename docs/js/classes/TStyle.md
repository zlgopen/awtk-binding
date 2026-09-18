[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TStyle

# Class: TStyle

Defined in: [awtk.ts:7708](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7708)

控件风格。

widget从style对象中，获取诸如字体、颜色和图片相关的参数，根据这些参数来绘制界面。

属性名称的请参考[style\_id](style_id_t.md)

## Extended by

- [`TStyleMutable`](TStyleMutable.md)

## Constructors

### Constructor

> **new TStyle**(`nativeObj`): `TStyle`

Defined in: [awtk.ts:7710](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7710)

#### Parameters

##### nativeObj

`any`

#### Returns

`TStyle`

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:7709](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7709)

## Methods

### get()

> **get**(`state`, `name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7786](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7786)

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

***

### getInt()

> **getInt**(`name`, `defval`): `number`

Defined in: [awtk.ts:7746](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7746)

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

***

### getStr()

> **getStr**(`name`, `defval`): `string`

Defined in: [awtk.ts:7772](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7772)

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

***

### getStyleState()

> **getStyleState**(): `string`

Defined in: [awtk.ts:7827](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7827)

获取风格对象的风格状态

#### Returns

`string`

返回风格状态。

***

### getStyleType()

> **getStyleType**(): `string`

Defined in: [awtk.ts:7849](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7849)

获取 style 的风格类型。

#### Returns

`string`

返回风格类型。

***

### getUint()

> **getUint**(`name`, `defval`): `number`

Defined in: [awtk.ts:7759](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7759)

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

***

### isMutable()

> **isMutable**(): `boolean`

Defined in: [awtk.ts:7838](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7838)

检查style是否是mutable的。

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

***

### isValid()

> **isValid**(): `boolean`

Defined in: [awtk.ts:7733](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7733)

检查style对象是否有效

#### Returns

`boolean`

返回是否有效。

***

### notifyWidgetStateChanged()

> **notifyWidgetStateChanged**(`widget`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7722](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7722)

widget状态改变时，通知style更新数据。

#### Parameters

##### widget

[`TWidget`](TWidget.md)

控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### set()

> **set**(`state`, `name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7800](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7800)

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

***

### updateState()

> **updateState**(`theme`, `widget_type`, `style_name`, `widget_state`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7816](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L7816)

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
