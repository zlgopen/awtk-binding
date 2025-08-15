[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TMutableImage

# Class: TMutableImage

mutable图片控件。

像摄像头和视频的图像是变化的，每一帧都不同，我们把这类图片称为mutable image。

本控件辅助实现摄像头和视频的显示功能。

mutable\_image\_t是[image\_base\_t](image_base_t.md)的子类控件，image\_base\_t的函数均适用于mutable\_image\_t控件。

在xml中使用"mutable\_image"标签创建mutable图片控件。如：

```xml
<mutable_image w="100%" h="100%"/>
```

>更多用法请参考：
[mutable
image](https://github.com/zlgopen/awtk/blob/master/design/default/ui/mutable_image.xml)

在c代码中使用函数mutable\_image\_create创建mutable图片控件。如：

> 创建之后:
>
> 需要用mutable\_image\_set\_create\_image设置创建图片的回调函数。
> 需要用mutable\_image\_set\_prepare\_image设置准备图片的回调函数。

> 完整示例请参考：[mutable image demo](
https://github.com/zlgopen/awtk-c-demos/blob/master/demos/mutable_image.c)

一般不需通过style来设置控件的显示风格，如果在特殊情况下需要，可以参考其它控件。

## Extends

- [`TImageBase`](TImageBase.md)

## Constructors

### new TMutableImage()

> **new TMutableImage**(`nativeObj`): [`TMutableImage`](TMutableImage.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TMutableImage`](TMutableImage.md)

#### Overrides

[`TImageBase`](TImageBase.md).[`constructor`](TImageBase.md#constructors)

#### Defined in

[awtk.ts:29150](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L29150)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TImageBase`](TImageBase.md).[`nativeObj`](TImageBase.md#nativeobj)

#### Defined in

[awtk.ts:29149](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L29149)

## Accessors

### anchorX

> `get` **anchorX**(): `number`

锚点X(0-1)。0在控件左边，0.5在控件中间，1在控件右边。

#### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`anchorX`](TImageBase.md#anchorx)

#### Defined in

[awtk.ts:16429](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16429)

***

### anchorY

> `get` **anchorY**(): `number`

锚点Y(0-1)。0在控件顶部，0.5在控件中间，1在控件底部。

#### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`anchorY`](TImageBase.md#anchory)

#### Defined in

[awtk.ts:16438](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16438)

***

### animation

> `get` **animation**(): `string`

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

> `set` **animation**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TImageBase`](TImageBase.md).[`animation`](TImageBase.md#animation)

#### Defined in

[awtk.ts:12799](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12799)

***

### autoAdjustSize

> `get` **autoAdjustSize**(): `boolean`

是否根据子控件和文本自动调整控件自身大小。

> 为true时，最好不要使用 layout 的相关东西，否则可能有冲突。
> 注意：只是调整控件的本身的宽高，不会修改控件本身的位置，仅部分控件实现该效果。

> `set` **autoAdjustSize**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TImageBase`](TImageBase.md).[`autoAdjustSize`](TImageBase.md#autoadjustsize)

#### Defined in

[awtk.ts:12890](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12890)

***

### clickable

> `get` **clickable**(): `boolean`

点击时，是否触发EVT_CLICK事件。

> `set` **clickable**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TImageBase`](TImageBase.md).[`clickable`](TImageBase.md#clickable)

#### Defined in

[awtk.ts:16478](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16478)

***

### dirtyRectTolerance

> `get` **dirtyRectTolerance**(): `number`

脏矩形超出控件本身大小的最大范围(一般不用指定)。

> 如果 border 太粗或 offset 太大等原因，导致脏矩形超出控件本身大小太多（大于缺省值）时，才需要指定。

> `set` **dirtyRectTolerance**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`dirtyRectTolerance`](TImageBase.md#dirtyrecttolerance)

#### Defined in

[awtk.ts:12957](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12957)

***

### enable

> `get` **enable**(): `boolean`

启用/禁用状态。

> `set` **enable**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TImageBase`](TImageBase.md).[`enable`](TImageBase.md#enable)

#### Defined in

[awtk.ts:12812](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12812)

***

### feedback

> `get` **feedback**(): `boolean`

是否启用按键音、触屏音和震动等反馈。

> `set` **feedback**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TImageBase`](TImageBase.md).[`feedback`](TImageBase.md#feedback)

#### Defined in

[awtk.ts:12825](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12825)

***

### floating

> `get` **floating**(): `boolean`

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

> `set` **floating**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TImageBase`](TImageBase.md).[`floating`](TImageBase.md#floating)

#### Defined in

[awtk.ts:12903](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12903)

***

### focusable

> `get` **focusable**(): `boolean`

是否支持焦点停留。

> `set` **focusable**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TImageBase`](TImageBase.md).[`focusable`](TImageBase.md#focusable)

#### Defined in

[awtk.ts:12864](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12864)

***

### h

> `get` **h**(): `number`

高度。

#### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`h`](TImageBase.md#h)

#### Defined in

[awtk.ts:12742](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12742)

***

### image

> `get` **image**(): `string`

图片的名称。

> `set` **image**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TImageBase`](TImageBase.md).[`image`](TImageBase.md#image)

#### Defined in

[awtk.ts:16416](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16416)

***

### name

> `get` **name**(): `string`

控件名字。

> `set` **name**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TImageBase`](TImageBase.md).[`name`](TImageBase.md#name)

#### Defined in

[awtk.ts:12751](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12751)

***

### opacity

> `get` **opacity**(): `number`

不透明度(0-255)，0完全透明，255完全不透明。

> `set` **opacity**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`opacity`](TImageBase.md#opacity)

#### Defined in

[awtk.ts:12942](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12942)

***

### parent

> `get` **parent**(): [`TWidget`](TWidget.md)

父控件

#### Returns

[`TWidget`](TWidget.md)

#### Inherited from

[`TImageBase`](TImageBase.md).[`parent`](TImageBase.md#parent)

#### Defined in

[awtk.ts:12970](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12970)

***

### pointerCursor

> `get` **pointerCursor**(): `string`

鼠标光标图片名称。

> `set` **pointerCursor**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TImageBase`](TImageBase.md).[`pointerCursor`](TImageBase.md#pointercursor)

#### Defined in

[awtk.ts:12764](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12764)

***

### rotation

> `get` **rotation**(): `number`

控件的旋转角度(幅度)。

> `set` **rotation**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`rotation`](TImageBase.md#rotation)

#### Defined in

[awtk.ts:16465](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16465)

***

### scaleX

> `get` **scaleX**(): `number`

控件在X方向上的缩放比例。

#### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`scaleX`](TImageBase.md#scalex)

#### Defined in

[awtk.ts:16447](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16447)

***

### scaleY

> `get` **scaleY**(): `number`

控件在Y方向上的缩放比例。

#### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`scaleY`](TImageBase.md#scaley)

#### Defined in

[awtk.ts:16456](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16456)

***

### selectable

> `get` **selectable**(): `boolean`

是否设置选中状态。

> `set` **selectable**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TImageBase`](TImageBase.md).[`selectable`](TImageBase.md#selectable)

#### Defined in

[awtk.ts:16491](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16491)

***

### selected

> `get` **selected**(): `boolean`

当前是否被选中。

> `set` **selected**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TImageBase`](TImageBase.md).[`selected`](TImageBase.md#selected)

#### Defined in

[awtk.ts:16504](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16504)

***

### sensitive

> `get` **sensitive**(): `boolean`

是否接受用户事件。

> `set` **sensitive**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TImageBase`](TImageBase.md).[`sensitive`](TImageBase.md#sensitive)

#### Defined in

[awtk.ts:12851](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12851)

***

### stateFromParentSync

> `get` **stateFromParentSync**(): `boolean`

标识是否接收父控件的状态同步。

> `set` **stateFromParentSync**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TImageBase`](TImageBase.md).[`stateFromParentSync`](TImageBase.md#statefromparentsync)

#### Defined in

[awtk.ts:12929](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12929)

***

### style

> `get` **style**(): `string`

style的名称。

#### Returns

`string`

#### Inherited from

[`TImageBase`](TImageBase.md).[`style`](TImageBase.md#style)

#### Defined in

[awtk.ts:12790](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12790)

***

### syncStateToChildren

> `get` **syncStateToChildren**(): `boolean`

标识是否将当前控件状态同步到子控件中。

> `set` **syncStateToChildren**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TImageBase`](TImageBase.md).[`syncStateToChildren`](TImageBase.md#syncstatetochildren)

#### Defined in

[awtk.ts:12916](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12916)

***

### trText

> `get` **trText**(): `string`

保存用于翻译的字符串。

> `set` **trText**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TImageBase`](TImageBase.md).[`trText`](TImageBase.md#trtext)

#### Defined in

[awtk.ts:12777](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12777)

***

### visible

> `get` **visible**(): `boolean`

是否可见。

> `set` **visible**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TImageBase`](TImageBase.md).[`visible`](TImageBase.md#visible)

#### Defined in

[awtk.ts:12838](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12838)

***

### w

> `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`w`](TImageBase.md#w)

#### Defined in

[awtk.ts:12733](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12733)

***

### withFocusState

> `get` **withFocusState**(): `boolean`

是否支持焦点状态。
> 如果希望style支持焦点状态，但又不希望焦点停留，可用本属性。

#### Returns

`boolean`

#### Inherited from

[`TImageBase`](TImageBase.md).[`withFocusState`](TImageBase.md#withfocusstate)

#### Defined in

[awtk.ts:12878](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12878)

***

### x

> `get` **x**(): `number`

x坐标(相对于父控件的x坐标)。

#### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`x`](TImageBase.md#x)

#### Defined in

[awtk.ts:12715](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12715)

***

### y

> `get` **y**(): `number`

y坐标(相对于父控件的y坐标)。

#### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`y`](TImageBase.md#y)

#### Defined in

[awtk.ts:12724](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12724)

## Methods

### addChild()

> **addChild**(`child`): [`TRet`](../enumerations/TRet.md)

加入一个子控件。

#### Parameters

• **child**: [`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`addChild`](TImageBase.md#addchild)

#### Defined in

[awtk.ts:11806](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11806)

***

### addChildDefault()

> **addChildDefault**(`child`): [`TRet`](../enumerations/TRet.md)

加入一个子控件默认实现(供子类调用)。

#### Parameters

• **child**: [`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`addChildDefault`](TImageBase.md#addchilddefault)

#### Defined in

[awtk.ts:12706](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12706)

***

### addValue()

> **addValue**(`delta`): [`TRet`](../enumerations/TRet.md)

增加控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

• **delta**: `number`

增量。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`addValue`](TImageBase.md#addvalue)

#### Defined in

[awtk.ts:11161](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11161)

***

### addValueInt()

> **addValueInt**(`delta`): [`TRet`](../enumerations/TRet.md)

增加控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

• **delta**: `number`

增量。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`addValueInt`](TImageBase.md#addvalueint)

#### Defined in

[awtk.ts:11198](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11198)

***

### animatePositionTo()

> **animatePositionTo**(`x`, `y`, `duration`): [`TRet`](../enumerations/TRet.md)

设置控件的位置(以动画形式变化到指定的位置)。

#### Parameters

• **x**: `number`

x坐标。

• **y**: `number`

y坐标。

• **duration**: `number`

动画持续时间(毫秒)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`animatePositionTo`](TImageBase.md#animatepositionto)

#### Defined in

[awtk.ts:11240](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11240)

***

### animatePropFloatTo()

> **animatePropFloatTo**(`name`, `value`, `duration`): [`TRet`](../enumerations/TRet.md)

设置控件的属性(以动画形式变化到指定的值)。

#### Parameters

• **name**: `string`

属性名称。

• **value**: `any`

值。

• **duration**: `number`

动画持续时间(毫秒)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`animatePropFloatTo`](TImageBase.md#animatepropfloatto)

#### Defined in

[awtk.ts:11226](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11226)

***

### animateSizeTo()

> **animateSizeTo**(`w`, `h`, `duration`): [`TRet`](../enumerations/TRet.md)

设置控件的大小(以动画形式变化到指定的大小)。

#### Parameters

• **w**: `number`

宽度。

• **h**: `number`

高度。

• **duration**: `number`

动画持续时间(毫秒)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`animateSizeTo`](TImageBase.md#animatesizeto)

#### Defined in

[awtk.ts:11254](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11254)

***

### animateValueTo()

> **animateValueTo**(`value`, `duration`): [`TRet`](../enumerations/TRet.md)

设置控件的值(以动画形式变化到指定的值)。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

• **value**: `any`

值。

• **duration**: `number`

动画持续时间(毫秒)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`animateValueTo`](TImageBase.md#animatevalueto)

#### Defined in

[awtk.ts:11212](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11212)

***

### back()

> **back**(): [`TRet`](../enumerations/TRet.md)

请求返回到前一个窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`back`](TImageBase.md#back)

#### Defined in

[awtk.ts:11045](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11045)

***

### backToHome()

> **backToHome**(): [`TRet`](../enumerations/TRet.md)

请求返回到home窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`backToHome`](TImageBase.md#backtohome)

#### Defined in

[awtk.ts:11056](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11056)

***

### child()

> **child**(`name`): [`TWidget`](TWidget.md)

查找指定名称的子控件(同widget_lookup(widget, name, FALSE))。

#### Parameters

• **name**: `string`

子控件的名称。

#### Returns

[`TWidget`](TWidget.md)

子控件或NULL。

#### Inherited from

[`TImageBase`](TImageBase.md).[`child`](TImageBase.md#child)

#### Defined in

[awtk.ts:11855](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11855)

***

### clone()

> **clone**(`parent`): [`TWidget`](TWidget.md)

clone。

#### Parameters

• **parent**: [`TWidget`](TWidget.md)

clone新控件的parent对象。

#### Returns

[`TWidget`](TWidget.md)

返回clone的对象。

#### Inherited from

[`TImageBase`](TImageBase.md).[`clone`](TImageBase.md#clone)

#### Defined in

[awtk.ts:12379](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12379)

***

### closeWindow()

> **closeWindow**(): [`TRet`](../enumerations/TRet.md)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`closeWindow`](TImageBase.md#closewindow)

#### Defined in

[awtk.ts:11023](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11023)

***

### closeWindowForce()

> **closeWindowForce**(): [`TRet`](../enumerations/TRet.md)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`closeWindowForce`](TImageBase.md#closewindowforce)

#### Defined in

[awtk.ts:11034](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11034)

***

### countChildren()

> **countChildren**(): `number`

获取子控件的个数。

#### Returns

`number`

子控件的个数。

#### Inherited from

[`TImageBase`](TImageBase.md).[`countChildren`](TImageBase.md#countchildren)

#### Defined in

[awtk.ts:10943](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L10943)

***

### createAnimator()

> **createAnimator**(`animation`): [`TRet`](../enumerations/TRet.md)

创建动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 除非指定auto_start=false，动画创建后自动启动。
* 除非指定auto_destroy=false，动画播放完成后自动销毁。

#### Parameters

• **animation**: `string`

动画参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`createAnimator`](TImageBase.md#createanimator)

#### Defined in

[awtk.ts:11562](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11562)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`destroy`](TImageBase.md#destroy)

#### Defined in

[awtk.ts:12416](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12416)

***

### destroyAnimator()

> **destroyAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

销毁动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，销毁所有名称为name的动画。
* 2.name为NULL时，销毁所有widget相关的动画。
* 3.widget和name均为NULL，销毁所有动画。

#### Parameters

• **name**: `string`

动画名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`destroyAnimator`](TImageBase.md#destroyanimator)

#### Defined in

[awtk.ts:11648](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11648)

***

### destroyAsync()

> **destroyAsync**(): [`TRet`](../enumerations/TRet.md)

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`destroyAsync`](TImageBase.md#destroyasync)

#### Defined in

[awtk.ts:12429](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12429)

***

### destroyChildren()

> **destroyChildren**(): [`TRet`](../enumerations/TRet.md)

销毁全部子控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`destroyChildren`](TImageBase.md#destroychildren)

#### Defined in

[awtk.ts:11794](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11794)

***

### dispatchToKeyTarget()

> **dispatchToKeyTarget**(`e`): [`TRet`](../enumerations/TRet.md)

递归的分发一个事件到所有key_target子控件。

#### Parameters

• **e**: [`TEvent`](TEvent.md)

事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`dispatchToKeyTarget`](TImageBase.md#dispatchtokeytarget)

#### Defined in

[awtk.ts:12505](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12505)

***

### dispatchToTarget()

> **dispatchToTarget**(`e`): [`TRet`](../enumerations/TRet.md)

递归的分发一个事件到所有target子控件。

#### Parameters

• **e**: [`TEvent`](TEvent.md)

事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`dispatchToTarget`](TImageBase.md#dispatchtotarget)

#### Defined in

[awtk.ts:12493](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12493)

***

### equal()

> **equal**(`other`): `boolean`

判断两个widget是否相同。

#### Parameters

• **other**: [`TWidget`](TWidget.md)

要比较的控件对象。

#### Returns

`boolean`

返回TRUE表示相同，否则表示不同。

#### Inherited from

[`TImageBase`](TImageBase.md).[`equal`](TImageBase.md#equal)

#### Defined in

[awtk.ts:12391](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12391)

***

### fillBgRect()

> **fillBgRect**(`c`, `r`, `draw_type`): [`TRet`](../enumerations/TRet.md)

根据控件的style绘制背景矩形。

#### Parameters

• **c**: [`TCanvas`](TCanvas.md)

画布对象。

• **r**: [`TRect`](TRect.md)

矩形区域。

• **draw\_type**: [`TImageDrawType`](../enumerations/TImageDrawType.md)

图片缺省绘制方式。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`fillBgRect`](TImageBase.md#fillbgrect)

#### Defined in

[awtk.ts:12467](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12467)

***

### fillFgRect()

> **fillFgRect**(`c`, `r`, `draw_type`): [`TRet`](../enumerations/TRet.md)

根据控件的style绘制前景矩形。

#### Parameters

• **c**: [`TCanvas`](TCanvas.md)

画布对象。

• **r**: [`TRect`](TRect.md)

矩形区域。

• **draw\_type**: [`TImageDrawType`](../enumerations/TImageDrawType.md)

图片缺省绘制方式。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`fillFgRect`](TImageBase.md#fillfgrect)

#### Defined in

[awtk.ts:12481](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12481)

***

### findParentByName()

> **findParentByName**(`name`): [`TWidget`](TWidget.md)

通过名称查找父控件。

#### Parameters

• **name**: `string`

名称。

#### Returns

[`TWidget`](TWidget.md)

父控件。

#### Inherited from

[`TImageBase`](TImageBase.md).[`findParentByName`](TImageBase.md#findparentbyname)

#### Defined in

[awtk.ts:10967](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L10967)

***

### findParentByType()

> **findParentByType**(`type`): [`TWidget`](TWidget.md)

通过类型查找父控件。

#### Parameters

• **type**: `string`

类型。

#### Returns

[`TWidget`](TWidget.md)

父控件。

#### Inherited from

[`TImageBase`](TImageBase.md).[`findParentByType`](TImageBase.md#findparentbytype)

#### Defined in

[awtk.ts:10979](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L10979)

***

### focusNext()

> **focusNext**(): [`TRet`](../enumerations/TRet.md)

把焦点移动下一个控件。

>widget必须是当前焦点控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`focusNext`](TImageBase.md#focusnext)

#### Defined in

[awtk.ts:12562](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12562)

***

### focusPrev()

> **focusPrev**(): [`TRet`](../enumerations/TRet.md)

把焦点移动前一个控件。

>widget必须是当前焦点控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`focusPrev`](TImageBase.md#focusprev)

#### Defined in

[awtk.ts:12575](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12575)

***

### foreach()

> **foreach**(`visit`, `ctx`): [`TRet`](../enumerations/TRet.md)

遍历当前控件及子控件。

#### Parameters

• **visit**: `Function`

遍历的回调函数。

• **ctx**: `any`

回调函数的上下文。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`foreach`](TImageBase.md#foreach)

#### Defined in

[awtk.ts:12334](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12334)

***

### getAutoAdjustSize()

> **getAutoAdjustSize**(): `boolean`

获取控件auto_adjust_size属性值。

#### Returns

`boolean`

返回auto_adjust_size。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getAutoAdjustSize`](TImageBase.md#getautoadjustsize)

#### Defined in

[awtk.ts:11415](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11415)

***

### getChild()

> **getChild**(`index`): [`TWidget`](TWidget.md)

获取指定索引的子控件。

#### Parameters

• **index**: `number`

索引。

#### Returns

[`TWidget`](TWidget.md)

子控件。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getChild`](TImageBase.md#getchild)

#### Defined in

[awtk.ts:10955](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L10955)

***

### getEnable()

> **getEnable**(): `boolean`

获取控件enable属性值。

#### Returns

`boolean`

返回enable。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getEnable`](TImageBase.md#getenable)

#### Defined in

[awtk.ts:11393](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11393)

***

### getFeedback()

> **getFeedback**(): `boolean`

获取控件feedback属性值。

#### Returns

`boolean`

返回feedback。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getFeedback`](TImageBase.md#getfeedback)

#### Defined in

[awtk.ts:11470](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11470)

***

### getFloating()

> **getFloating**(): `boolean`

获取控件floating属性值。

#### Returns

`boolean`

返回floating。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getFloating`](TImageBase.md#getfloating)

#### Defined in

[awtk.ts:11404](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11404)

***

### getFocusable()

> **getFocusable**(): `boolean`

获取控件focusable属性值。

#### Returns

`boolean`

返回focusable。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getFocusable`](TImageBase.md#getfocusable)

#### Defined in

[awtk.ts:11437](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11437)

***

### getFocusedWidget()

> **getFocusedWidget**(): [`TWidget`](TWidget.md)

获取当前窗口中的焦点控件。

#### Returns

[`TWidget`](TWidget.md)

焦点控件。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getFocusedWidget`](TImageBase.md#getfocusedwidget)

#### Defined in

[awtk.ts:10990](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L10990)

***

### getNativeWindow()

> **getNativeWindow**(): [`TNativeWindow`](TNativeWindow.md)

获取原生窗口对象。

#### Returns

[`TNativeWindow`](TNativeWindow.md)

原生窗口对象。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getNativeWindow`](TImageBase.md#getnativewindow)

#### Defined in

[awtk.ts:11001](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11001)

***

### getProp()

> **getProp**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

获取控件指定属性的值。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: [`TValue`](TValue.md)

返回属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getProp`](TImageBase.md#getprop)

#### Defined in

[awtk.ts:11971](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11971)

***

### getPropBool()

> **getPropBool**(`name`, `defval`): `boolean`

获取布尔格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `boolean`

缺省值。

#### Returns

`boolean`

返回属性的值。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getPropBool`](TImageBase.md#getpropbool)

#### Defined in

[awtk.ts:12126](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12126)

***

### getPropFloat()

> **getPropFloat**(`name`, `defval`): `number`

获取浮点数格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回属性的值。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getPropFloat`](TImageBase.md#getpropfloat)

#### Defined in

[awtk.ts:12074](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12074)

***

### getPropInt()

> **getPropInt**(`name`, `defval`): `number`

获取整数格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回属性的值。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getPropInt`](TImageBase.md#getpropint)

#### Defined in

[awtk.ts:12100](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12100)

***

### getPropPointer()

> **getPropPointer**(`name`): `any`

获取指针格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

#### Returns

`any`

返回属性的值。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getPropPointer`](TImageBase.md#getproppointer)

#### Defined in

[awtk.ts:12048](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12048)

***

### getPropStr()

> **getPropStr**(`name`, `defval`): `string`

获取字符串格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `string`

缺省值。

#### Returns

`string`

返回属性的值。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getPropStr`](TImageBase.md#getpropstr)

#### Defined in

[awtk.ts:12023](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12023)

***

### getSensitive()

> **getSensitive**(): `boolean`

获取控件sensitive属性值。

#### Returns

`boolean`

返回sensitive。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getSensitive`](TImageBase.md#getsensitive)

#### Defined in

[awtk.ts:11448](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11448)

***

### getStateForStyle()

> **getStateForStyle**(`active`, `checked`): `string`

把控件的状态转成获取style选要的状态，一般只在子类中使用。

#### Parameters

• **active**: `boolean`

控件是否为当前项。

• **checked**: `boolean`

控件是否为选中项。

#### Returns

`string`

返回状态值。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getStateForStyle`](TImageBase.md#getstateforstyle)

#### Defined in

[awtk.ts:12588](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12588)

***

### getStyleType()

> **getStyleType**(): `string`

获取 widget 对应风格类型

#### Returns

`string`

返回 widget 的对应风格类型。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getStyleType`](TImageBase.md#getstyletype)

#### Defined in

[awtk.ts:12516](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12516)

***

### getText()

> **getText**(): `any`

获取控件的文本。
只是对widget\_get\_prop的包装，文本的意义由子类控件决定。

如果希望获取UTF8格式的文本，可以参考下面的代码：

#### Returns

`any`

返回文本。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getText`](TImageBase.md#gettext)

#### Defined in

[awtk.ts:11486](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11486)

***

### getThemeName()

> **getThemeName**(): `string`

获取 theme 的名称

#### Returns

`string`

成功返回主题名称，失败否则 NULL。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getThemeName`](TImageBase.md#getthemename)

#### Defined in

[awtk.ts:11521](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11521)

***

### getType()

> **getType**(): `string`

获取当前控件的类型名称。

#### Returns

`string`

返回类型名。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getType`](TImageBase.md#gettype)

#### Defined in

[awtk.ts:12367](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12367)

***

### getValue()

> **getValue**(): `number`

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getValue`](TImageBase.md#getvalue)

#### Defined in

[awtk.ts:11135](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11135)

***

### getValueInt()

> **getValueInt**(): `number`

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getValueInt`](TImageBase.md#getvalueint)

#### Defined in

[awtk.ts:11172](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11172)

***

### getVisible()

> **getVisible**(): `boolean`

获取控件visible属性值。

#### Returns

`boolean`

返回visible。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getVisible`](TImageBase.md#getvisible)

#### Defined in

[awtk.ts:11459](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11459)

***

### getWindow()

> **getWindow**(): [`TWidget`](TWidget.md)

获取当前控件所在的窗口。

#### Returns

[`TWidget`](TWidget.md)

窗口对象。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getWindow`](TImageBase.md#getwindow)

#### Defined in

[awtk.ts:12345](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12345)

***

### getWindowManager()

> **getWindowManager**(): [`TWidget`](TWidget.md)

获取当前的窗口管理器。

#### Returns

[`TWidget`](TWidget.md)

窗口管理器对象。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getWindowManager`](TImageBase.md#getwindowmanager)

#### Defined in

[awtk.ts:12356](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12356)

***

### getWithFocusState()

> **getWithFocusState**(): `boolean`

获取控件with_focus_state属性值。

#### Returns

`boolean`

返回with_focus_state。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getWithFocusState`](TImageBase.md#getwithfocusstate)

#### Defined in

[awtk.ts:11426](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11426)

***

### hasHighlighter()

> **hasHighlighter**(): `boolean`

判断widget拥有高亮属性。

#### Returns

`boolean`

拥有返回 TRUE，没有返回 FALSE。

#### Inherited from

[`TImageBase`](TImageBase.md).[`hasHighlighter`](TImageBase.md#hashighlighter)

#### Defined in

[awtk.ts:11289](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11289)

***

### indexOf()

> **indexOf**(): `number`

获取控件在父控件中的索引编号。

#### Returns

`number`

在父控件中的索引编号。

#### Inherited from

[`TImageBase`](TImageBase.md).[`indexOf`](TImageBase.md#indexof)

#### Defined in

[awtk.ts:11012](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11012)

***

### insertChild()

> **insertChild**(`index`, `child`): [`TRet`](../enumerations/TRet.md)

插入子控件到指定的位置。

#### Parameters

• **index**: `number`

位置序数(大于等于总个数，则放到最后)。

• **child**: [`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`insertChild`](TImageBase.md#insertchild)

#### Defined in

[awtk.ts:11831](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11831)

***

### invalidateForce()

> **invalidateForce**(`r`): [`TRet`](../enumerations/TRet.md)

请求强制重绘控件。

#### Parameters

• **r**: [`TRect`](TRect.md)

矩形对象(widget本地坐标)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`invalidateForce`](TImageBase.md#invalidateforce)

#### Defined in

[awtk.ts:11958](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11958)

***

### isAlwaysOnTop()

> **isAlwaysOnTop**(): `boolean`

检查控件是否总在最上层。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isAlwaysOnTop`](TImageBase.md#isalwaysontop)

#### Defined in

[awtk.ts:12260](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12260)

***

### isDesigningWindow()

> **isDesigningWindow**(): `boolean`

判断当前控件是否是设计窗口。

#### Returns

`boolean`

返回当前控件是否是设计窗口。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isDesigningWindow`](TImageBase.md#isdesigningwindow)

#### Defined in

[awtk.ts:12310](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12310)

***

### isDialog()

> **isDialog**(): `boolean`

检查控件是否是对话框类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isDialog`](TImageBase.md#isdialog)

#### Defined in

[awtk.ts:12227](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12227)

***

### isDirectParentOf()

> **isDirectParentOf**(`child`): `boolean`

判断当前控件是否是指定控件的直系父控件。

#### Parameters

• **child**: [`TWidget`](TWidget.md)

控件对象。

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isDirectParentOf`](TImageBase.md#isdirectparentof)

#### Defined in

[awtk.ts:12172](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12172)

***

### isFullscreenWindow()

> **isFullscreenWindow**(): `boolean`

检查控件是否是全屏窗口。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isFullscreenWindow`](TImageBase.md#isfullscreenwindow)

#### Defined in

[awtk.ts:12216](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12216)

***

### isKeyboard()

> **isKeyboard**(): `boolean`

判断当前控件是否是keyboard。

> keyboard收到pointer事件时，不会让当前控件失去焦点。

在自定义软键盘时，将所有按钮放到一个容器当中，并设置为is_keyboard。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isKeyboard`](TImageBase.md#iskeyboard)

#### Defined in

[awtk.ts:12299](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12299)

***

### isNormalWindow()

> **isNormalWindow**(): `boolean`

检查控件是否是普通窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isNormalWindow`](TImageBase.md#isnormalwindow)

#### Defined in

[awtk.ts:12205](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12205)

***

### isOpenedDialog()

> **isOpenedDialog**(): `boolean`

检查控件弹出对话框控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isOpenedDialog`](TImageBase.md#isopeneddialog)

#### Defined in

[awtk.ts:12271](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12271)

***

### isOpenedPopup()

> **isOpenedPopup**(): `boolean`

检查控件弹出窗口控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isOpenedPopup`](TImageBase.md#isopenedpopup)

#### Defined in

[awtk.ts:12282](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12282)

***

### isOverlay()

> **isOverlay**(): `boolean`

检查控件是否是overlay窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isOverlay`](TImageBase.md#isoverlay)

#### Defined in

[awtk.ts:12249](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12249)

***

### isParentOf()

> **isParentOf**(`child`): `boolean`

判断当前控件是否是指定控件的父控件(包括非直系)。

#### Parameters

• **child**: [`TWidget`](TWidget.md)

控件对象。

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isParentOf`](TImageBase.md#isparentof)

#### Defined in

[awtk.ts:12160](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12160)

***

### isPopup()

> **isPopup**(): `boolean`

检查控件是否是弹出窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isPopup`](TImageBase.md#ispopup)

#### Defined in

[awtk.ts:12238](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12238)

***

### isStyleExist()

> **isStyleExist**(`style_name`, `state_name`): `boolean`

查询指定的style是否存在。

#### Parameters

• **style\_name**: `string`

style的名称（如果为 NULL，则默认为 default）。

• **state\_name**: `string`

state的名称（如果为 NULL，则默认为 normal）。

#### Returns

`boolean`

存在返回 TRUE，不存在返回 FALSE。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isStyleExist`](TImageBase.md#isstyleexist)

#### Defined in

[awtk.ts:11267](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11267)

***

### isSupportHighlighter()

> **isSupportHighlighter**(): `boolean`

判断widget是否支持高亮。

#### Returns

`boolean`

支持返回 TRUE，不支持返回 FALSE。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isSupportHighlighter`](TImageBase.md#issupporthighlighter)

#### Defined in

[awtk.ts:11278](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11278)

***

### isSystemBar()

> **isSystemBar**(): `boolean`

检查控件是否是system bar类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isSystemBar`](TImageBase.md#issystembar)

#### Defined in

[awtk.ts:12194](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12194)

***

### isWindow()

> **isWindow**(): `boolean`

判断当前控件是否是窗口。

#### Returns

`boolean`

返回当前控件是否是窗口。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isWindow`](TImageBase.md#iswindow)

#### Defined in

[awtk.ts:12183](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12183)

***

### isWindowCreated()

> **isWindowCreated**(): `boolean`

判断窗口及子控件创建或加载是否完成。

#### Returns

`boolean`

返回创建或加载是否完成。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isWindowCreated`](TImageBase.md#iswindowcreated)

#### Defined in

[awtk.ts:12148](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12148)

***

### isWindowManager()

> **isWindowManager**(): `boolean`

判断当前控件是否是窗口管理器。

#### Returns

`boolean`

返回当前控件是否是窗口管理器。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isWindowManager`](TImageBase.md#iswindowmanager)

#### Defined in

[awtk.ts:12321](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12321)

***

### isWindowOpened()

> **isWindowOpened**(): `boolean`

判断当前控件所在的窗口是否已经打开。

#### Returns

`boolean`

返回当前控件所在的窗口是否已经打开。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isWindowOpened`](TImageBase.md#iswindowopened)

#### Defined in

[awtk.ts:12137](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12137)

***

### layout()

> **layout**(): [`TRet`](../enumerations/TRet.md)

布局当前控件及子控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`layout`](TImageBase.md#layout)

#### Defined in

[awtk.ts:12599](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12599)

***

### lookup()

> **lookup**(`name`, `recursive`): [`TWidget`](TWidget.md)

查找指定名称的子控件(返回第一个)。

#### Parameters

• **name**: `string`

子控件的名称。

• **recursive**: `boolean`

是否递归查找全部子控件。

#### Returns

[`TWidget`](TWidget.md)

子控件或NULL。

#### Inherited from

[`TImageBase`](TImageBase.md).[`lookup`](TImageBase.md#lookup)

#### Defined in

[awtk.ts:11868](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11868)

***

### lookupByType()

> **lookupByType**(`type`, `recursive`): [`TWidget`](TWidget.md)

查找指定类型的子控件(返回第一个)。

#### Parameters

• **type**: `string`

子控件的名称。

• **recursive**: `boolean`

是否递归查找全部子控件。

#### Returns

[`TWidget`](TWidget.md)

子控件或NULL。

#### Inherited from

[`TImageBase`](TImageBase.md).[`lookupByType`](TImageBase.md#lookupbytype)

#### Defined in

[awtk.ts:11881](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11881)

***

### move()

> **move**(`x`, `y`): [`TRet`](../enumerations/TRet.md)

移动控件。

#### Parameters

• **x**: `number`

x坐标

• **y**: `number`

y坐标

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`move`](TImageBase.md#move)

#### Defined in

[awtk.ts:11069](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11069)

***

### moveResize()

> **moveResize**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

移动控件并调整控件的大小。

#### Parameters

• **x**: `number`

x坐标

• **y**: `number`

y坐标

• **w**: `number`

宽度

• **h**: `number`

高度

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`moveResize`](TImageBase.md#moveresize)

#### Defined in

[awtk.ts:11108](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11108)

***

### moveResizeEx()

> **moveResizeEx**(`x`, `y`, `w`, `h`, `update_layout`): [`TRet`](../enumerations/TRet.md)

移动控件并调整控件的大小。

#### Parameters

• **x**: `number`

x坐标

• **y**: `number`

y坐标

• **w**: `number`

宽度

• **h**: `number`

高度

• **update\_layout**: `boolean`

是否更新布局

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`moveResizeEx`](TImageBase.md#moveresizeex)

#### Defined in

[awtk.ts:11124](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11124)

***

### moveToCenter()

> **moveToCenter**(): [`TRet`](../enumerations/TRet.md)

移动控件到父控件中间。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`moveToCenter`](TImageBase.md#movetocenter)

#### Defined in

[awtk.ts:11080](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11080)

***

### off()

> **off**(`id`): [`TRet`](../enumerations/TRet.md)

注销指定事件的处理函数。

#### Parameters

• **id**: `number`

widget_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`off`](TImageBase.md#off)

#### Defined in

[awtk.ts:11946](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11946)

***

### on()

> **on**(`type`, `on_event`, `ctx`): `number`

注册指定事件的处理函数。
使用示例：

#### Parameters

• **type**: `number`

事件类型。

• **on\_event**: `Function`

事件处理函数。

• **ctx**: `any`

事件处理函数上下文。

#### Returns

`number`

返回id，用于widget_off。

#### Inherited from

[`TImageBase`](TImageBase.md).[`on`](TImageBase.md#on)

#### Defined in

[awtk.ts:11934](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11934)

***

### pauseAnimator()

> **pauseAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

暂停动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，暂停所有名称为name的动画。
* 2.name为NULL时，暂停所有widget相关的动画。
* 3.widget和name均为NULL，暂停所有动画。

#### Parameters

• **name**: `string`

动画名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`pauseAnimator`](TImageBase.md#pauseanimator)

#### Defined in

[awtk.ts:11614](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11614)

***

### removeChild()

> **removeChild**(`child`): [`TRet`](../enumerations/TRet.md)

移出指定的子控件(并不销毁)。

#### Parameters

• **child**: [`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`removeChild`](TImageBase.md#removechild)

#### Defined in

[awtk.ts:11818](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11818)

***

### resize()

> **resize**(`w`, `h`): [`TRet`](../enumerations/TRet.md)

调整控件的大小。

#### Parameters

• **w**: `number`

宽度

• **h**: `number`

高度

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`resize`](TImageBase.md#resize)

#### Defined in

[awtk.ts:11093](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11093)

***

### restack()

> **restack**(`index`): [`TRet`](../enumerations/TRet.md)

调整控件在父控件中的位置序数。

#### Parameters

• **index**: `number`

位置序数(大于等于总个数，则放到最后)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`restack`](TImageBase.md#restack)

#### Defined in

[awtk.ts:11843](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11843)

***

### setAnchor()

> **setAnchor**(`anchor_x`, `anchor_y`): [`TRet`](../enumerations/TRet.md)

设置控件的锚点(仅在WITH_VGCANVAS定义时生效)。

#### Parameters

• **anchor\_x**: `number`

锚点X(0-1)。0在控件左边，0.5在控件中间，1在控件右边。

• **anchor\_y**: `number`

锚点Y(0-1)。0在控件顶部，0.5在控件中间，1在控件底部。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setAnchor`](TImageBase.md#setanchor)

#### Defined in

[awtk.ts:16359](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16359)

***

### setAnimation()

> **setAnimation**(`animation`): [`TRet`](../enumerations/TRet.md)

设置控件的动画参数(仅用于在UI文件使用)。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

#### Parameters

• **animation**: `string`

动画参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setAnimation`](TImageBase.md#setanimation)

#### Defined in

[awtk.ts:11546](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11546)

***

### setAnimatorTimeScale()

> **setAnimatorTimeScale**(`name`, `time_scale`): [`TRet`](../enumerations/TRet.md)

设置动画的时间倍率，<0: 时间倒退，<1: 时间变慢，>1 时间变快。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，设置所有名称为name的动画的时间倍率。
* 2.name为NULL时，设置所有widget相关的动画的时间倍率。
* 3.widget和name均为NULL，设置所有动画的时间倍率。

#### Parameters

• **name**: `string`

动画名称。

• **time\_scale**: `number`

时间倍率。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setAnimatorTimeScale`](TImageBase.md#setanimatortimescale)

#### Defined in

[awtk.ts:11597](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11597)

***

### setAsKeyTarget()

> **setAsKeyTarget**(): [`TRet`](../enumerations/TRet.md)

递归的把父控件的key_target设置为自己。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setAsKeyTarget`](TImageBase.md#setaskeytarget)

#### Defined in

[awtk.ts:12549](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12549)

***

### setAutoAdjustSize()

> **setAutoAdjustSize**(`auto_adjust_size`): [`TRet`](../enumerations/TRet.md)

设置控件是否根据子控件和文本自动调整控件自身大小。

#### Parameters

• **auto\_adjust\_size**: `boolean`

是否根据子控件和文本自动调整控件自身大小。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setAutoAdjustSize`](TImageBase.md#setautoadjustsize)

#### Defined in

[awtk.ts:11684](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11684)

***

### setChildText()

> **setChildText**(`name`, `text`): [`TRet`](../enumerations/TRet.md)

设置子控件的文本。
只是对widget\_set\_prop的包装，文本的意义由子类控件决定。

#### Parameters

• **name**: `string`

子控件的名称。

• **text**: `string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setChildText`](TImageBase.md#setchildtext)

#### Defined in

[awtk.ts:11340](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11340)

***

### setChildTextWithDouble()

> **setChildTextWithDouble**(`name`, `format`, `value`): [`TRet`](../enumerations/TRet.md)

用一个浮点数去设置子控件的文本。
只是对widget\_set\_prop的包装，文本的意义由子类控件决定。

#### Parameters

• **name**: `string`

子控件的名称。

• **format**: `string`

格式字符串(如："%2.2lf")。

• **value**: `any`

浮点数值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setChildTextWithDouble`](TImageBase.md#setchildtextwithdouble)

#### Defined in

[awtk.ts:11355](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11355)

***

### setChildTextWithInt()

> **setChildTextWithInt**(`name`, `format`, `value`): [`TRet`](../enumerations/TRet.md)

用一个整数去设置子控件的文本。
只是对widget\_set\_prop的包装，文本的意义由子类控件决定。

#### Parameters

• **name**: `string`

子控件的名称。

• **format**: `string`

格式字符串(如："%d")。

• **value**: `any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setChildTextWithInt`](TImageBase.md#setchildtextwithint)

#### Defined in

[awtk.ts:11370](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11370)

***

### setChildrenLayout()

> **setChildrenLayout**(`params`): [`TRet`](../enumerations/TRet.md)

设置子控件的布局参数。
备注：下一帧才会生效数据

#### Parameters

• **params**: `string`

布局参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setChildrenLayout`](TImageBase.md#setchildrenlayout)

#### Defined in

[awtk.ts:12625](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12625)

***

### setClickable()

> **setClickable**(`clickable`): [`TRet`](../enumerations/TRet.md)

设置控件是否可以被点击。

#### Parameters

• **clickable**: `boolean`

是否可以被点击。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setClickable`](TImageBase.md#setclickable)

#### Defined in

[awtk.ts:16395](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16395)

***

### setDirtyRectTolerance()

> **setDirtyRectTolerance**(`dirty_rect_tolerance`): [`TRet`](../enumerations/TRet.md)

设置控件脏矩形超出控件本身大小的最大范围(一般不用指定)。

#### Parameters

• **dirty\_rect\_tolerance**: `number`

控件脏脏矩形超出控件本身大小的最大范。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setDirtyRectTolerance`](TImageBase.md#setdirtyrecttolerance)

#### Defined in

[awtk.ts:11783](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11783)

***

### setEnable()

> **setEnable**(`enable`): [`TRet`](../enumerations/TRet.md)

设置控件的可用性。

#### Parameters

• **enable**: `boolean`

是否可用性。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setEnable`](TImageBase.md#setenable)

#### Defined in

[awtk.ts:11660](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11660)

***

### setFeedback()

> **setFeedback**(`feedback`): [`TRet`](../enumerations/TRet.md)

设置控件是否启用反馈。

#### Parameters

• **feedback**: `boolean`

是否启用反馈。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setFeedback`](TImageBase.md#setfeedback)

#### Defined in

[awtk.ts:11672](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11672)

***

### setFloating()

> **setFloating**(`floating`): [`TRet`](../enumerations/TRet.md)

设置控件的floating标志。
> floating的控件不受父控件的子控件布局参数的影响。

#### Parameters

• **floating**: `boolean`

是否启用floating布局。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setFloating`](TImageBase.md#setfloating)

#### Defined in

[awtk.ts:11697](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11697)

***

### setFocusable()

> **setFocusable**(`focusable`): [`TRet`](../enumerations/TRet.md)

设置控件是否可获得焦点。

#### Parameters

• **focusable**: `boolean`

是否可获得焦点。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setFocusable`](TImageBase.md#setfocusable)

#### Defined in

[awtk.ts:11721](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11721)

***

### setFocused()

> **setFocused**(`focused`): [`TRet`](../enumerations/TRet.md)

设置控件是否获得焦点。

#### Parameters

• **focused**: `boolean`

是否获得焦点。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setFocused`](TImageBase.md#setfocused)

#### Defined in

[awtk.ts:11709](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11709)

***

### setImage()

> **setImage**(`name`): [`TRet`](../enumerations/TRet.md)

设置控件的图片名称。

> 如果需要显示文件系统中的图片，只需将图片名称换成实际的文件名，并加上"file://"前缀即可。

#### Parameters

• **name**: `string`

图片名称，该图片必须存在于资源管理器。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setImage`](TImageBase.md#setimage)

#### Defined in

[awtk.ts:16321](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16321)

***

### setName()

> **setName**(`name`): [`TRet`](../enumerations/TRet.md)

设置控件的名称。

#### Parameters

• **name**: `string`

名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setName`](TImageBase.md#setname)

#### Defined in

[awtk.ts:11498](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11498)

***

### setOpacity()

> **setOpacity**(`opacity`): [`TRet`](../enumerations/TRet.md)

设置控件的不透明度。

>在嵌入式平台，半透明效果会使性能大幅下降，请谨慎使用。

#### Parameters

• **opacity**: `number`

不透明度(取值0-255，0表示完全透明，255表示完全不透明)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setOpacity`](TImageBase.md#setopacity)

#### Defined in

[awtk.ts:11771](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11771)

***

### setPointerCursor()

> **setPointerCursor**(`cursor`): [`TRet`](../enumerations/TRet.md)

设置鼠标指针的图片名。

#### Parameters

• **cursor**: `string`

图片名称(无扩展名)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setPointerCursor`](TImageBase.md#setpointercursor)

#### Defined in

[awtk.ts:11533](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11533)

***

### setProp()

> **setProp**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

设置控件指定属性的值。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: [`TValue`](TValue.md)

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setProp`](TImageBase.md#setprop)

#### Defined in

[awtk.ts:11984](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11984)

***

### setPropBool()

> **setPropBool**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

设置布尔格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: `boolean`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setPropBool`](TImageBase.md#setpropbool)

#### Defined in

[awtk.ts:12113](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12113)

***

### setPropFloat()

> **setPropFloat**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

设置浮点数格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: `number`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setPropFloat`](TImageBase.md#setpropfloat)

#### Defined in

[awtk.ts:12061](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12061)

***

### setPropInt()

> **setPropInt**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

设置整数格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: `number`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setPropInt`](TImageBase.md#setpropint)

#### Defined in

[awtk.ts:12087](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12087)

***

### setPropPointer()

> **setPropPointer**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

设置指针格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setPropPointer`](TImageBase.md#setproppointer)

#### Defined in

[awtk.ts:12036](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12036)

***

### setPropStr()

> **setPropStr**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

设置字符串格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: `string`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setPropStr`](TImageBase.md#setpropstr)

#### Defined in

[awtk.ts:12010](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12010)

***

### setProps()

> **setProps**(`params`): [`TRet`](../enumerations/TRet.md)

设置多个参数。
>参数之间用&分隔，名称和值之间用=分隔。如: name=awtk&min=10&max=100

#### Parameters

• **params**: `string`

参数列表。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setProps`](TImageBase.md#setprops)

#### Defined in

[awtk.ts:11997](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11997)

***

### setRotation()

> **setRotation**(`rotation`): [`TRet`](../enumerations/TRet.md)

设置控件的旋转角度(仅在WITH_VGCANVAS定义时生效)。

#### Parameters

• **rotation**: `number`

旋转角度(幅度)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setRotation`](TImageBase.md#setrotation)

#### Defined in

[awtk.ts:16333](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16333)

***

### setScale()

> **setScale**(`scale_x`, `scale_y`): [`TRet`](../enumerations/TRet.md)

设置控件的缩放比例(仅在WITH_VGCANVAS定义时生效)。

#### Parameters

• **scale\_x**: `number`

X方向缩放比例。

• **scale\_y**: `number`

Y方向缩放比例。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setScale`](TImageBase.md#setscale)

#### Defined in

[awtk.ts:16346](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16346)

***

### setSelectable()

> **setSelectable**(`selectable`): [`TRet`](../enumerations/TRet.md)

设置控件是否可以被选中。

#### Parameters

• **selectable**: `boolean`

是否可以被选中。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setSelectable`](TImageBase.md#setselectable)

#### Defined in

[awtk.ts:16383](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16383)

***

### setSelected()

> **setSelected**(`selected`): [`TRet`](../enumerations/TRet.md)

设置控件的选中状态。

#### Parameters

• **selected**: `boolean`

是否被选中。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setSelected`](TImageBase.md#setselected)

#### Defined in

[awtk.ts:16371](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16371)

***

### setSelfLayout()

> **setSelfLayout**(`params`): [`TRet`](../enumerations/TRet.md)

设置控件自己的布局参数。
备注：下一帧才会生效数据

#### Parameters

• **params**: `string`

布局参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setSelfLayout`](TImageBase.md#setselflayout)

#### Defined in

[awtk.ts:12612](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12612)

***

### setSelfLayoutParams()

> **setSelfLayoutParams**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

设置控件自己的布局(缺省布局器)参数(建议用widget\_set\_self\_layout)。
备注：下一帧才会生效数据

#### Parameters

• **x**: `string`

x参数。

• **y**: `string`

y参数。

• **w**: `string`

w参数。

• **h**: `string`

h参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setSelfLayoutParams`](TImageBase.md#setselflayoutparams)

#### Defined in

[awtk.ts:12641](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12641)

***

### setSensitive()

> **setSensitive**(`sensitive`): [`TRet`](../enumerations/TRet.md)

设置控件是否接受用户事件。

#### Parameters

• **sensitive**: `boolean`

是否接受用户事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setSensitive`](TImageBase.md#setsensitive)

#### Defined in

[awtk.ts:11917](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11917)

***

### setState()

> **setState**(`state`): [`TRet`](../enumerations/TRet.md)

设置控件的状态。

#### Parameters

• **state**: `string`

状态。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setState`](TImageBase.md#setstate)

#### Defined in

[awtk.ts:11733](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11733)

***

### setStateFromParentSync()

> **setStateFromParentSync**(`state_from_parent_sync`): [`TRet`](../enumerations/TRet.md)

标识是否接收父控件的状态同步。

#### Parameters

• **state\_from\_parent\_sync**: `boolean`

是否接收父控件的状态同步。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setStateFromParentSync`](TImageBase.md#setstatefromparentsync)

#### Defined in

[awtk.ts:11757](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11757)

***

### setStyleColor()

> **setStyleColor**(`state_and_name`, `value`): [`TRet`](../enumerations/TRet.md)

设置颜色类型的style。

> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

在下面这个例子中，R=0x11 G=0x22 B=0x33 A=0xFF

#### Parameters

• **state\_and\_name**: `string`

状态和名字，用英文的冒号分隔。

• **value**: `any`

值。颜色值一般用十六进制表示，每两个数字表示一个颜色通道，从高位到低位，依次是ABGR。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setStyleColor`](TImageBase.md#setstylecolor)

#### Defined in

[awtk.ts:12694](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12694)

***

### setStyleInt()

> **setStyleInt**(`state_and_name`, `value`): [`TRet`](../enumerations/TRet.md)

设置整数类型的style。

> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

#### Parameters

• **state\_and\_name**: `string`

状态和名字，用英文的冒号分隔。

• **value**: `any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setStyleInt`](TImageBase.md#setstyleint)

#### Defined in

[awtk.ts:12657](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12657)

***

### setStyleStr()

> **setStyleStr**(`state_and_name`, `value`): [`TRet`](../enumerations/TRet.md)

设置字符串类型的style。

> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

#### Parameters

• **state\_and\_name**: `string`

状态和名字，用英文的冒号分隔。

• **value**: `string`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setStyleStr`](TImageBase.md#setstylestr)

#### Defined in

[awtk.ts:12673](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12673)

***

### setSyncStateToChildren()

> **setSyncStateToChildren**(`sync_state_to_children`): [`TRet`](../enumerations/TRet.md)

标识是否将当前控件状态同步到子控件中。

#### Parameters

• **sync\_state\_to\_children**: `boolean`

是否将当前控件状态同步到子控件中。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setSyncStateToChildren`](TImageBase.md#setsyncstatetochildren)

#### Defined in

[awtk.ts:11745](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11745)

***

### setText()

> **setText**(`text`): [`TRet`](../enumerations/TRet.md)

设置控件的文本。（如果字符串相同，则不会重复设置以及触发事件）

#### Parameters

• **text**: `string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setText`](TImageBase.md#settext)

#### Defined in

[awtk.ts:11313](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11313)

***

### setTextEx()

> **setTextEx**(`text`, `check_diff`): [`TRet`](../enumerations/TRet.md)

设置控件的文本。

#### Parameters

• **text**: `string`

文本。

• **check\_diff**: `boolean`

是否检查设置的文本是否和控件中的文本一样。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setTextEx`](TImageBase.md#settextex)

#### Defined in

[awtk.ts:11326](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11326)

***

### setTheme()

> **setTheme**(`name`): [`TRet`](../enumerations/TRet.md)

设置theme的名称，用于动态切换主题。名称与当前主题名称相同，则重新加载全部资源。

#### Parameters

• **name**: `string`

主题的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setTheme`](TImageBase.md#settheme)

#### Defined in

[awtk.ts:11510](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11510)

***

### setTrText()

> **setTrText**(`text`): [`TRet`](../enumerations/TRet.md)

获取翻译之后的文本，然后调用widget_set_text。

#### Parameters

• **text**: `string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setTrText`](TImageBase.md#settrtext)

#### Defined in

[awtk.ts:11382](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11382)

***

### setValue()

> **setValue**(`value`): [`TRet`](../enumerations/TRet.md)

设置控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

• **value**: `any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setValue`](TImageBase.md#setvalue)

#### Defined in

[awtk.ts:11148](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11148)

***

### setValueInt()

> **setValueInt**(`value`): [`TRet`](../enumerations/TRet.md)

设置控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

• **value**: `any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setValueInt`](TImageBase.md#setvalueint)

#### Defined in

[awtk.ts:11185](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11185)

***

### setVisible()

> **setVisible**(`visible`): [`TRet`](../enumerations/TRet.md)

设置控件的可见性。

#### Parameters

• **visible**: `boolean`

是否可见。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setVisible`](TImageBase.md#setvisible)

#### Defined in

[awtk.ts:11893](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11893)

***

### setVisibleOnly()

> **setVisibleOnly**(`visible`): [`TRet`](../enumerations/TRet.md)

设置控件的可见性(不触发repaint和relayout)。

#### Parameters

• **visible**: `boolean`

是否可见。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setVisibleOnly`](TImageBase.md#setvisibleonly)

#### Defined in

[awtk.ts:11905](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11905)

***

### startAnimator()

> **startAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

播放动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，播放所有名称为name的动画。
* 2.name为NULL时，播放所有widget相关的动画。
* 3.widget和name均为NULL，播放所有动画。

#### Parameters

• **name**: `string`

动画名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`startAnimator`](TImageBase.md#startanimator)

#### Defined in

[awtk.ts:11579](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11579)

***

### stopAnimator()

> **stopAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

停止动画(控件的相应属性回归原位)。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，停止所有名称为name的动画。
* 2.name为NULL时，停止所有widget相关的动画。
* 3.widget和name均为NULL，停止所有动画。

#### Parameters

• **name**: `string`

动画名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`stopAnimator`](TImageBase.md#stopanimator)

#### Defined in

[awtk.ts:11631](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11631)

***

### strokeBorderRect()

> **strokeBorderRect**(`c`, `r`): [`TRet`](../enumerations/TRet.md)

根据控件的style绘制边框矩形。

#### Parameters

• **c**: [`TCanvas`](TCanvas.md)

画布对象。

• **r**: [`TRect`](TRect.md)

矩形区域。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`strokeBorderRect`](TImageBase.md#strokeborderrect)

#### Defined in

[awtk.ts:12453](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12453)

***

### unref()

> **unref**(): [`TRet`](../enumerations/TRet.md)

减少控件的引用计数。引用计数为0时销毁控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`unref`](TImageBase.md#unref)

#### Defined in

[awtk.ts:12440](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12440)

***

### updateStyle()

> **updateStyle**(): [`TRet`](../enumerations/TRet.md)

让控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`updateStyle`](TImageBase.md#updatestyle)

#### Defined in

[awtk.ts:12527](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12527)

***

### updateStyleRecursive()

> **updateStyleRecursive**(): [`TRet`](../enumerations/TRet.md)

让控件及子控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`updateStyleRecursive`](TImageBase.md#updatestylerecursive)

#### Defined in

[awtk.ts:12538](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L12538)

***

### useStyle()

> **useStyle**(`style`): [`TRet`](../enumerations/TRet.md)

启用指定的style。

#### Parameters

• **style**: `string`

style的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`useStyle`](TImageBase.md#usestyle)

#### Defined in

[awtk.ts:11301](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L11301)

***

### cast()

> `static` **cast**(`widget`): [`TImageBase`](TImageBase.md)

转换为image_base对象(供脚本语言使用)。

#### Parameters

• **widget**: [`TWidget`](TWidget.md)

image_base对象。

#### Returns

[`TImageBase`](TImageBase.md)

image_base对象。

#### Inherited from

[`TImageBase`](TImageBase.md).[`cast`](TImageBase.md#cast)

#### Defined in

[awtk.ts:16407](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L16407)

***

### create()

> `static` **create**(`parent`, `x`, `y`, `w`, `h`): [`TMutableImage`](TMutableImage.md)

创建mutable_image对象

#### Parameters

• **parent**: [`TWidget`](TWidget.md)

父控件

• **x**: `number`

x坐标

• **y**: `number`

y坐标

• **w**: `number`

宽度

• **h**: `number`

高度

#### Returns

[`TMutableImage`](TMutableImage.md)

对象。

#### Defined in

[awtk.ts:29166](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L29166)
