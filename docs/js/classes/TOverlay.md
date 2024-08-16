[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TOverlay

# Class: TOverlay

overlay窗口。

overlay窗口有点类似于非模态的dialog，但是它位置和大小是完全自由的，窗口管理器不会对它做任何限制。

如果overlay窗口有透明或半透效果，则不支持窗口动画，但可以通过移动窗口位置来实现类似动画的效果。

overlay\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于overlay\_t控件。

在xml中使用"overlay"标签创建窗口。需要指定坐标和大小，可以指定窗体样式和动画名称。如：

```xml
<overlay theme="basic" x="100" y="100" w="200" h="300">
...
</overlay>
```

>
更多用法请参考：[overlay.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)

在c代码中使用函数overlay\_create创建窗口。如：

> 完整示例请参考：[overlay
demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/)

可用通过style来设置窗口的风格，如背景颜色或图片等。如：

```xml
<style name="bricks">
<normal bg_image="bricks"  bg_image_draw_type="repeat"/>
</style>
```

> 更多用法请参考：[theme
default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L0)

## Extends

- [`TWindowBase`](TWindowBase.md)

## Constructors

### new TOverlay()

> **new TOverlay**(`nativeObj`): [`TOverlay`](TOverlay.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TOverlay`](TOverlay.md)

#### Overrides

[`TWindowBase`](TWindowBase.md).[`constructor`](TWindowBase.md#constructors)

#### Defined in

[awtk.ts:29723](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L29723)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TWindowBase`](TWindowBase.md).[`nativeObj`](TWindowBase.md#nativeobj)

#### Defined in

[awtk.ts:29722](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L29722)

## Accessors

### alwaysOnTop

> `get` **alwaysOnTop**(): `boolean`

是否总在最上面。

缺省不启用。

> `set` **alwaysOnTop**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Defined in

[awtk.ts:29813](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L29813)

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

[`TWindowBase`](TWindowBase.md).[`animation`](TWindowBase.md#animation)

#### Defined in

[awtk.ts:12544](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12544)

***

### appletName

> `get` **appletName**(): `string`

小应用程序(applet)的名称。

> 如果该窗口属于某个独立的小程序应用(applet)，需要指定它的名称，以便到对应的资源目录查找资源。

#### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`appletName`](TWindowBase.md#appletname)

#### Defined in

[awtk.ts:16429](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16429)

***

### autoAdjustSize

> `get` **autoAdjustSize**(): `boolean`

是否根据子控件和文本自动调整控件自身大小。

> 为true时，最好不要使用 layout 的相关东西，否则可能有冲突。
> 注意：只是调整控件的本身的宽高，不会修改控件本身的位置。

> `set` **autoAdjustSize**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`autoAdjustSize`](TWindowBase.md#autoadjustsize)

#### Defined in

[awtk.ts:12635](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12635)

***

### autoScaleChildrenH

> `get` **autoScaleChildrenH**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的高度。

#### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`autoScaleChildrenH`](TWindowBase.md#autoscalechildrenh)

#### Defined in

[awtk.ts:16306](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16306)

***

### autoScaleChildrenW

> `get` **autoScaleChildrenW**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的宽度。

#### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`autoScaleChildrenW`](TWindowBase.md#autoscalechildrenw)

#### Defined in

[awtk.ts:16297](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16297)

***

### autoScaleChildrenX

> `get` **autoScaleChildrenX**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的x坐标。

#### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`autoScaleChildrenX`](TWindowBase.md#autoscalechildrenx)

#### Defined in

[awtk.ts:16279](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16279)

***

### autoScaleChildrenY

> `get` **autoScaleChildrenY**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的y坐标。

#### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`autoScaleChildrenY`](TWindowBase.md#autoscalechildreny)

#### Defined in

[awtk.ts:16288](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16288)

***

### clickThrough

> `get` **clickThrough**(): `boolean`

点击穿透。点击没有子控件的位置，是否穿透到底层窗口。

缺省不启用。

> `set` **clickThrough**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Defined in

[awtk.ts:29798](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L29798)

***

### closable

> `get` **closable**(): [`TWindowClosable`](../enumerations/TWindowClosable.md)

收到EVT_REQUEST_CLOSE_WINDOW是否自动关闭窗口。

如果关闭窗口时，需要用户确认:

* 1.将closable设置为WINDOW\_CLOSABLE\_CONFIRM

* 2.处理窗口的EVT\_REQUEST\_CLOSE\_WINDOW事件

> closable在XML中取值为：yes/no/confirm，缺省为yes。

#### Returns

[`TWindowClosable`](../enumerations/TWindowClosable.md)

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`closable`](TWindowBase.md#closable)

#### Defined in

[awtk.ts:16332](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16332)

***

### closeAnimHint

> `get` **closeAnimHint**(): `string`

关闭窗口动画的名称。
请参考[窗口动画](https://github.com/zlgopen/awtk/blob/master/docs/window_animator.md)

#### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`closeAnimHint`](TWindowBase.md#closeanimhint)

#### Defined in

[awtk.ts:16352](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16352)

***

### designH

> `get` **designH**(): `number`

设计时高度。

#### Returns

`number`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`designH`](TWindowBase.md#designh)

#### Defined in

[awtk.ts:16270](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16270)

***

### designW

> `get` **designW**(): `number`

设计时宽度。

#### Returns

`number`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`designW`](TWindowBase.md#designw)

#### Defined in

[awtk.ts:16261](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16261)

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

[`TWindowBase`](TWindowBase.md).[`dirtyRectTolerance`](TWindowBase.md#dirtyrecttolerance)

#### Defined in

[awtk.ts:12676](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12676)

***

### disableAnim

> `get` **disableAnim**(): `boolean`

禁用窗口动画。

#### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`disableAnim`](TWindowBase.md#disableanim)

#### Defined in

[awtk.ts:16315](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16315)

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

[`TWindowBase`](TWindowBase.md).[`enable`](TWindowBase.md#enable)

#### Defined in

[awtk.ts:12557](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12557)

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

[`TWindowBase`](TWindowBase.md).[`feedback`](TWindowBase.md#feedback)

#### Defined in

[awtk.ts:12570](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12570)

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

[`TWindowBase`](TWindowBase.md).[`floating`](TWindowBase.md#floating)

#### Defined in

[awtk.ts:12648](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12648)

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

[`TWindowBase`](TWindowBase.md).[`focusable`](TWindowBase.md#focusable)

#### Defined in

[awtk.ts:12609](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12609)

***

### h

> `get` **h**(): `number`

高度。

#### Returns

`number`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`h`](TWindowBase.md#h)

#### Defined in

[awtk.ts:12487](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12487)

***

### modeless

> `get` **modeless**(): `boolean`

非模态窗口。

缺省不启用。

> `set` **modeless**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Defined in

[awtk.ts:29828](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L29828)

***

### moveFocusDownKey

> `get` **moveFocusDownKey**(): `string`

向下移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`moveFocusDownKey`](TWindowBase.md#movefocusdownkey)

#### Defined in

[awtk.ts:16396](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16396)

***

### moveFocusLeftKey

> `get` **moveFocusLeftKey**(): `string`

向左移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`moveFocusLeftKey`](TWindowBase.md#movefocusleftkey)

#### Defined in

[awtk.ts:16407](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16407)

***

### moveFocusNextKey

> `get` **moveFocusNextKey**(): `string`

向后移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`moveFocusNextKey`](TWindowBase.md#movefocusnextkey)

#### Defined in

[awtk.ts:16374](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16374)

***

### moveFocusPrevKey

> `get` **moveFocusPrevKey**(): `string`

向前移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`moveFocusPrevKey`](TWindowBase.md#movefocusprevkey)

#### Defined in

[awtk.ts:16363](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16363)

***

### moveFocusRightKey

> `get` **moveFocusRightKey**(): `string`

向右移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`moveFocusRightKey`](TWindowBase.md#movefocusrightkey)

#### Defined in

[awtk.ts:16418](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16418)

***

### moveFocusUpKey

> `get` **moveFocusUpKey**(): `string`

向上移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`moveFocusUpKey`](TWindowBase.md#movefocusupkey)

#### Defined in

[awtk.ts:16385](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16385)

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

[`TWindowBase`](TWindowBase.md).[`name`](TWindowBase.md#name)

#### Defined in

[awtk.ts:12496](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12496)

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

[`TWindowBase`](TWindowBase.md).[`opacity`](TWindowBase.md#opacity)

#### Defined in

[awtk.ts:12661](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12661)

***

### openAnimHint

> `get` **openAnimHint**(): `string`

打开窗口动画的名称。
请参考[窗口动画](https://github.com/zlgopen/awtk/blob/master/docs/window_animator.md)

#### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`openAnimHint`](TWindowBase.md#openanimhint)

#### Defined in

[awtk.ts:16342](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16342)

***

### parent

> `get` **parent**(): [`TWidget`](TWidget.md)

父控件

#### Returns

[`TWidget`](TWidget.md)

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`parent`](TWindowBase.md#parent)

#### Defined in

[awtk.ts:12689](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12689)

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

[`TWindowBase`](TWindowBase.md).[`pointerCursor`](TWindowBase.md#pointercursor)

#### Defined in

[awtk.ts:12509](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12509)

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

[`TWindowBase`](TWindowBase.md).[`sensitive`](TWindowBase.md#sensitive)

#### Defined in

[awtk.ts:12596](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12596)

***

### singleInstance

> `get` **singleInstance**(): `boolean`

单例。如果窗口存在，先关闭再打开。

#### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`singleInstance`](TWindowBase.md#singleinstance)

#### Defined in

[awtk.ts:16438](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16438)

***

### stronglyFocus

> `get` **stronglyFocus**(): `boolean`

点击非focusable控件时，是否让当前焦点控件失去焦点。比如点击窗口空白区域，是否让编辑器失去焦点。

#### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`stronglyFocus`](TWindowBase.md#stronglyfocus)

#### Defined in

[awtk.ts:16447](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16447)

***

### style

> `get` **style**(): `string`

style的名称。

#### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`style`](TWindowBase.md#style)

#### Defined in

[awtk.ts:12535](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12535)

***

### theme

> `get` **theme**(): `string`

窗体样式资源的名称。
每个窗口都可以有独立的窗体样式文件，如果没指定，则使用系统缺省的窗体样式文件。
窗体样式是一个XML文件，放在assets/raw/styles目录下。
请参考[窗体样式](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

#### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`theme`](TWindowBase.md#theme)

#### Defined in

[awtk.ts:16252](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L16252)

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

[`TWindowBase`](TWindowBase.md).[`trText`](TWindowBase.md#trtext)

#### Defined in

[awtk.ts:12522](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12522)

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

[`TWindowBase`](TWindowBase.md).[`visible`](TWindowBase.md#visible)

#### Defined in

[awtk.ts:12583](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12583)

***

### w

> `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`w`](TWindowBase.md#w)

#### Defined in

[awtk.ts:12478](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12478)

***

### withFocusState

> `get` **withFocusState**(): `boolean`

是否支持焦点状态。
> 如果希望style支持焦点状态，但又不希望焦点停留，可用本属性。

#### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`withFocusState`](TWindowBase.md#withfocusstate)

#### Defined in

[awtk.ts:12623](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12623)

***

### x

> `get` **x**(): `number`

x坐标(相对于父控件的x坐标)。

#### Returns

`number`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`x`](TWindowBase.md#x)

#### Defined in

[awtk.ts:12460](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12460)

***

### y

> `get` **y**(): `number`

y坐标(相对于父控件的y坐标)。

#### Returns

`number`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`y`](TWindowBase.md#y)

#### Defined in

[awtk.ts:12469](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12469)

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

[`TWindowBase`](TWindowBase.md).[`addChild`](TWindowBase.md#addchild)

#### Defined in

[awtk.ts:11551](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11551)

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

[`TWindowBase`](TWindowBase.md).[`addChildDefault`](TWindowBase.md#addchilddefault)

#### Defined in

[awtk.ts:12451](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12451)

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

[`TWindowBase`](TWindowBase.md).[`addValue`](TWindowBase.md#addvalue)

#### Defined in

[awtk.ts:10972](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10972)

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

[`TWindowBase`](TWindowBase.md).[`addValueInt`](TWindowBase.md#addvalueint)

#### Defined in

[awtk.ts:11009](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11009)

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

[`TWindowBase`](TWindowBase.md).[`animateValueTo`](TWindowBase.md#animatevalueto)

#### Defined in

[awtk.ts:11023](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11023)

***

### back()

> **back**(): [`TRet`](../enumerations/TRet.md)

请求返回到前一个窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`back`](TWindowBase.md#back)

#### Defined in

[awtk.ts:10856](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10856)

***

### backToHome()

> **backToHome**(): [`TRet`](../enumerations/TRet.md)

请求返回到home窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`backToHome`](TWindowBase.md#backtohome)

#### Defined in

[awtk.ts:10867](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10867)

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

[`TWindowBase`](TWindowBase.md).[`child`](TWindowBase.md#child)

#### Defined in

[awtk.ts:11600](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11600)

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

[`TWindowBase`](TWindowBase.md).[`clone`](TWindowBase.md#clone)

#### Defined in

[awtk.ts:12124](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12124)

***

### closeWindow()

> **closeWindow**(): [`TRet`](../enumerations/TRet.md)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`closeWindow`](TWindowBase.md#closewindow)

#### Defined in

[awtk.ts:10834](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10834)

***

### closeWindowForce()

> **closeWindowForce**(): [`TRet`](../enumerations/TRet.md)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`closeWindowForce`](TWindowBase.md#closewindowforce)

#### Defined in

[awtk.ts:10845](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10845)

***

### countChildren()

> **countChildren**(): `number`

获取子控件的个数。

#### Returns

`number`

子控件的个数。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`countChildren`](TWindowBase.md#countchildren)

#### Defined in

[awtk.ts:10754](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10754)

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

[`TWindowBase`](TWindowBase.md).[`createAnimator`](TWindowBase.md#createanimator)

#### Defined in

[awtk.ts:11331](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11331)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`destroy`](TWindowBase.md#destroy)

#### Defined in

[awtk.ts:12161](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12161)

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

[`TWindowBase`](TWindowBase.md).[`destroyAnimator`](TWindowBase.md#destroyanimator)

#### Defined in

[awtk.ts:11417](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11417)

***

### destroyAsync()

> **destroyAsync**(): [`TRet`](../enumerations/TRet.md)

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`destroyAsync`](TWindowBase.md#destroyasync)

#### Defined in

[awtk.ts:12174](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12174)

***

### destroyChildren()

> **destroyChildren**(): [`TRet`](../enumerations/TRet.md)

销毁全部子控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`destroyChildren`](TWindowBase.md#destroychildren)

#### Defined in

[awtk.ts:11539](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11539)

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

[`TWindowBase`](TWindowBase.md).[`dispatchToKeyTarget`](TWindowBase.md#dispatchtokeytarget)

#### Defined in

[awtk.ts:12250](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12250)

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

[`TWindowBase`](TWindowBase.md).[`dispatchToTarget`](TWindowBase.md#dispatchtotarget)

#### Defined in

[awtk.ts:12238](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12238)

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

[`TWindowBase`](TWindowBase.md).[`equal`](TWindowBase.md#equal)

#### Defined in

[awtk.ts:12136](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12136)

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

[`TWindowBase`](TWindowBase.md).[`fillBgRect`](TWindowBase.md#fillbgrect)

#### Defined in

[awtk.ts:12212](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12212)

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

[`TWindowBase`](TWindowBase.md).[`fillFgRect`](TWindowBase.md#fillfgrect)

#### Defined in

[awtk.ts:12226](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12226)

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

[`TWindowBase`](TWindowBase.md).[`findParentByName`](TWindowBase.md#findparentbyname)

#### Defined in

[awtk.ts:10778](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10778)

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

[`TWindowBase`](TWindowBase.md).[`findParentByType`](TWindowBase.md#findparentbytype)

#### Defined in

[awtk.ts:10790](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10790)

***

### focusNext()

> **focusNext**(): [`TRet`](../enumerations/TRet.md)

把焦点移动下一个控件。

>widget必须是当前焦点控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`focusNext`](TWindowBase.md#focusnext)

#### Defined in

[awtk.ts:12307](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12307)

***

### focusPrev()

> **focusPrev**(): [`TRet`](../enumerations/TRet.md)

把焦点移动前一个控件。

>widget必须是当前焦点控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`focusPrev`](TWindowBase.md#focusprev)

#### Defined in

[awtk.ts:12320](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12320)

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

[`TWindowBase`](TWindowBase.md).[`foreach`](TWindowBase.md#foreach)

#### Defined in

[awtk.ts:12079](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12079)

***

### getAutoAdjustSize()

> **getAutoAdjustSize**(): `boolean`

获取控件auto_adjust_size属性值。

#### Returns

`boolean`

返回auto_adjust_size。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getAutoAdjustSize`](TWindowBase.md#getautoadjustsize)

#### Defined in

[awtk.ts:11184](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11184)

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

[`TWindowBase`](TWindowBase.md).[`getChild`](TWindowBase.md#getchild)

#### Defined in

[awtk.ts:10766](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10766)

***

### getEnable()

> **getEnable**(): `boolean`

获取控件enable属性值。

#### Returns

`boolean`

返回enable。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getEnable`](TWindowBase.md#getenable)

#### Defined in

[awtk.ts:11162](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11162)

***

### getFeedback()

> **getFeedback**(): `boolean`

获取控件feedback属性值。

#### Returns

`boolean`

返回feedback。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getFeedback`](TWindowBase.md#getfeedback)

#### Defined in

[awtk.ts:11239](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11239)

***

### getFloating()

> **getFloating**(): `boolean`

获取控件floating属性值。

#### Returns

`boolean`

返回floating。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getFloating`](TWindowBase.md#getfloating)

#### Defined in

[awtk.ts:11173](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11173)

***

### getFocusable()

> **getFocusable**(): `boolean`

获取控件focusable属性值。

#### Returns

`boolean`

返回focusable。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getFocusable`](TWindowBase.md#getfocusable)

#### Defined in

[awtk.ts:11206](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11206)

***

### getFocusedWidget()

> **getFocusedWidget**(): [`TWidget`](TWidget.md)

获取当前窗口中的焦点控件。

#### Returns

[`TWidget`](TWidget.md)

焦点控件。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getFocusedWidget`](TWindowBase.md#getfocusedwidget)

#### Defined in

[awtk.ts:10801](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10801)

***

### getNativeWindow()

> **getNativeWindow**(): [`TNativeWindow`](TNativeWindow.md)

获取原生窗口对象。

#### Returns

[`TNativeWindow`](TNativeWindow.md)

原生窗口对象。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getNativeWindow`](TWindowBase.md#getnativewindow)

#### Defined in

[awtk.ts:10812](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10812)

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

[`TWindowBase`](TWindowBase.md).[`getProp`](TWindowBase.md#getprop)

#### Defined in

[awtk.ts:11716](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11716)

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

[`TWindowBase`](TWindowBase.md).[`getPropBool`](TWindowBase.md#getpropbool)

#### Defined in

[awtk.ts:11871](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11871)

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

[`TWindowBase`](TWindowBase.md).[`getPropFloat`](TWindowBase.md#getpropfloat)

#### Defined in

[awtk.ts:11819](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11819)

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

[`TWindowBase`](TWindowBase.md).[`getPropInt`](TWindowBase.md#getpropint)

#### Defined in

[awtk.ts:11845](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11845)

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

[`TWindowBase`](TWindowBase.md).[`getPropPointer`](TWindowBase.md#getproppointer)

#### Defined in

[awtk.ts:11793](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11793)

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

[`TWindowBase`](TWindowBase.md).[`getPropStr`](TWindowBase.md#getpropstr)

#### Defined in

[awtk.ts:11768](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11768)

***

### getSensitive()

> **getSensitive**(): `boolean`

获取控件sensitive属性值。

#### Returns

`boolean`

返回sensitive。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getSensitive`](TWindowBase.md#getsensitive)

#### Defined in

[awtk.ts:11217](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11217)

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

[`TWindowBase`](TWindowBase.md).[`getStateForStyle`](TWindowBase.md#getstateforstyle)

#### Defined in

[awtk.ts:12333](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12333)

***

### getStyleType()

> **getStyleType**(): `string`

获取 widget 对应风格类型

#### Returns

`string`

返回 widget 的对应风格类型。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getStyleType`](TWindowBase.md#getstyletype)

#### Defined in

[awtk.ts:12261](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12261)

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

[`TWindowBase`](TWindowBase.md).[`getText`](TWindowBase.md#gettext)

#### Defined in

[awtk.ts:11255](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11255)

***

### getThemeName()

> **getThemeName**(): `string`

获取 theme 的名称

#### Returns

`string`

成功返回主题名称，失败否则 NULL。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getThemeName`](TWindowBase.md#getthemename)

#### Defined in

[awtk.ts:11290](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11290)

***

### getType()

> **getType**(): `string`

获取当前控件的类型名称。

#### Returns

`string`

返回类型名。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getType`](TWindowBase.md#gettype)

#### Defined in

[awtk.ts:12112](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12112)

***

### getValue()

> **getValue**(): `number`

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getValue`](TWindowBase.md#getvalue)

#### Defined in

[awtk.ts:10946](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10946)

***

### getValueInt()

> **getValueInt**(): `number`

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getValueInt`](TWindowBase.md#getvalueint)

#### Defined in

[awtk.ts:10983](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10983)

***

### getVisible()

> **getVisible**(): `boolean`

获取控件visible属性值。

#### Returns

`boolean`

返回visible。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getVisible`](TWindowBase.md#getvisible)

#### Defined in

[awtk.ts:11228](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11228)

***

### getWindow()

> **getWindow**(): [`TWidget`](TWidget.md)

获取当前控件所在的窗口。

#### Returns

[`TWidget`](TWidget.md)

窗口对象。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getWindow`](TWindowBase.md#getwindow)

#### Defined in

[awtk.ts:12090](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12090)

***

### getWindowManager()

> **getWindowManager**(): [`TWidget`](TWidget.md)

获取当前的窗口管理器。

#### Returns

[`TWidget`](TWidget.md)

窗口管理器对象。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getWindowManager`](TWindowBase.md#getwindowmanager)

#### Defined in

[awtk.ts:12101](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12101)

***

### getWithFocusState()

> **getWithFocusState**(): `boolean`

获取控件with_focus_state属性值。

#### Returns

`boolean`

返回with_focus_state。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getWithFocusState`](TWindowBase.md#getwithfocusstate)

#### Defined in

[awtk.ts:11195](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11195)

***

### hasHighlighter()

> **hasHighlighter**(): `boolean`

判断widget拥有高亮属性。

#### Returns

`boolean`

拥有返回 TRUE，没有返回 FALSE。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`hasHighlighter`](TWindowBase.md#hashighlighter)

#### Defined in

[awtk.ts:11058](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11058)

***

### indexOf()

> **indexOf**(): `number`

获取控件在父控件中的索引编号。

#### Returns

`number`

在父控件中的索引编号。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`indexOf`](TWindowBase.md#indexof)

#### Defined in

[awtk.ts:10823](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10823)

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

[`TWindowBase`](TWindowBase.md).[`insertChild`](TWindowBase.md#insertchild)

#### Defined in

[awtk.ts:11576](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11576)

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

[`TWindowBase`](TWindowBase.md).[`invalidateForce`](TWindowBase.md#invalidateforce)

#### Defined in

[awtk.ts:11703](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11703)

***

### isAlwaysOnTop()

> **isAlwaysOnTop**(): `boolean`

检查控件是否总在最上层。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isAlwaysOnTop`](TWindowBase.md#isalwaysontop)

#### Defined in

[awtk.ts:12005](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12005)

***

### isDesigningWindow()

> **isDesigningWindow**(): `boolean`

判断当前控件是否是设计窗口。

#### Returns

`boolean`

返回当前控件是否是设计窗口。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isDesigningWindow`](TWindowBase.md#isdesigningwindow)

#### Defined in

[awtk.ts:12055](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12055)

***

### isDialog()

> **isDialog**(): `boolean`

检查控件是否是对话框类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isDialog`](TWindowBase.md#isdialog)

#### Defined in

[awtk.ts:11972](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11972)

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

[`TWindowBase`](TWindowBase.md).[`isDirectParentOf`](TWindowBase.md#isdirectparentof)

#### Defined in

[awtk.ts:11917](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11917)

***

### isFullscreenWindow()

> **isFullscreenWindow**(): `boolean`

检查控件是否是全屏窗口。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isFullscreenWindow`](TWindowBase.md#isfullscreenwindow)

#### Defined in

[awtk.ts:11961](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11961)

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

[`TWindowBase`](TWindowBase.md).[`isKeyboard`](TWindowBase.md#iskeyboard)

#### Defined in

[awtk.ts:12044](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12044)

***

### isNormalWindow()

> **isNormalWindow**(): `boolean`

检查控件是否是普通窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isNormalWindow`](TWindowBase.md#isnormalwindow)

#### Defined in

[awtk.ts:11950](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11950)

***

### isOpenedDialog()

> **isOpenedDialog**(): `boolean`

检查控件弹出对话框控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isOpenedDialog`](TWindowBase.md#isopeneddialog)

#### Defined in

[awtk.ts:12016](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12016)

***

### isOpenedPopup()

> **isOpenedPopup**(): `boolean`

检查控件弹出窗口控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isOpenedPopup`](TWindowBase.md#isopenedpopup)

#### Defined in

[awtk.ts:12027](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12027)

***

### isOverlay()

> **isOverlay**(): `boolean`

检查控件是否是overlay窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isOverlay`](TWindowBase.md#isoverlay)

#### Defined in

[awtk.ts:11994](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11994)

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

[`TWindowBase`](TWindowBase.md).[`isParentOf`](TWindowBase.md#isparentof)

#### Defined in

[awtk.ts:11905](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11905)

***

### isPopup()

> **isPopup**(): `boolean`

检查控件是否是弹出窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isPopup`](TWindowBase.md#ispopup)

#### Defined in

[awtk.ts:11983](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11983)

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

[`TWindowBase`](TWindowBase.md).[`isStyleExist`](TWindowBase.md#isstyleexist)

#### Defined in

[awtk.ts:11036](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11036)

***

### isSupportHighlighter()

> **isSupportHighlighter**(): `boolean`

判断widget是否支持高亮。

#### Returns

`boolean`

支持返回 TRUE，不支持返回 FALSE。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isSupportHighlighter`](TWindowBase.md#issupporthighlighter)

#### Defined in

[awtk.ts:11047](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11047)

***

### isSystemBar()

> **isSystemBar**(): `boolean`

检查控件是否是system bar类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isSystemBar`](TWindowBase.md#issystembar)

#### Defined in

[awtk.ts:11939](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11939)

***

### isWindow()

> **isWindow**(): `boolean`

判断当前控件是否是窗口。

#### Returns

`boolean`

返回当前控件是否是窗口。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isWindow`](TWindowBase.md#iswindow)

#### Defined in

[awtk.ts:11928](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11928)

***

### isWindowCreated()

> **isWindowCreated**(): `boolean`

判断窗口及子控件创建或加载是否完成。

#### Returns

`boolean`

返回创建或加载是否完成。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isWindowCreated`](TWindowBase.md#iswindowcreated)

#### Defined in

[awtk.ts:11893](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11893)

***

### isWindowManager()

> **isWindowManager**(): `boolean`

判断当前控件是否是窗口管理器。

#### Returns

`boolean`

返回当前控件是否是窗口管理器。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isWindowManager`](TWindowBase.md#iswindowmanager)

#### Defined in

[awtk.ts:12066](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12066)

***

### isWindowOpened()

> **isWindowOpened**(): `boolean`

判断当前控件所在的窗口是否已经打开。

#### Returns

`boolean`

返回当前控件所在的窗口是否已经打开。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isWindowOpened`](TWindowBase.md#iswindowopened)

#### Defined in

[awtk.ts:11882](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11882)

***

### layout()

> **layout**(): [`TRet`](../enumerations/TRet.md)

布局当前控件及子控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`layout`](TWindowBase.md#layout)

#### Defined in

[awtk.ts:12344](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12344)

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

[`TWindowBase`](TWindowBase.md).[`lookup`](TWindowBase.md#lookup)

#### Defined in

[awtk.ts:11613](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11613)

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

[`TWindowBase`](TWindowBase.md).[`lookupByType`](TWindowBase.md#lookupbytype)

#### Defined in

[awtk.ts:11626](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11626)

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

[`TWindowBase`](TWindowBase.md).[`move`](TWindowBase.md#move)

#### Defined in

[awtk.ts:10880](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10880)

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

[`TWindowBase`](TWindowBase.md).[`moveResize`](TWindowBase.md#moveresize)

#### Defined in

[awtk.ts:10919](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10919)

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

[`TWindowBase`](TWindowBase.md).[`moveResizeEx`](TWindowBase.md#moveresizeex)

#### Defined in

[awtk.ts:10935](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10935)

***

### moveToCenter()

> **moveToCenter**(): [`TRet`](../enumerations/TRet.md)

移动控件到父控件中间。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`moveToCenter`](TWindowBase.md#movetocenter)

#### Defined in

[awtk.ts:10891](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10891)

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

[`TWindowBase`](TWindowBase.md).[`off`](TWindowBase.md#off)

#### Defined in

[awtk.ts:11691](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11691)

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

[`TWindowBase`](TWindowBase.md).[`on`](TWindowBase.md#on)

#### Defined in

[awtk.ts:11679](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11679)

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

[`TWindowBase`](TWindowBase.md).[`pauseAnimator`](TWindowBase.md#pauseanimator)

#### Defined in

[awtk.ts:11383](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11383)

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

[`TWindowBase`](TWindowBase.md).[`removeChild`](TWindowBase.md#removechild)

#### Defined in

[awtk.ts:11563](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11563)

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

[`TWindowBase`](TWindowBase.md).[`resize`](TWindowBase.md#resize)

#### Defined in

[awtk.ts:10904](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10904)

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

[`TWindowBase`](TWindowBase.md).[`restack`](TWindowBase.md#restack)

#### Defined in

[awtk.ts:11588](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11588)

***

### setAlwaysOnTop()

> **setAlwaysOnTop**(`always_on_top`): [`TRet`](../enumerations/TRet.md)

设置是否总是在最上面。

#### Parameters

• **always\_on\_top**: `boolean`

是否总是在最上面。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:29763](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L29763)

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

[`TWindowBase`](TWindowBase.md).[`setAnimation`](TWindowBase.md#setanimation)

#### Defined in

[awtk.ts:11315](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11315)

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

[`TWindowBase`](TWindowBase.md).[`setAnimatorTimeScale`](TWindowBase.md#setanimatortimescale)

#### Defined in

[awtk.ts:11366](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11366)

***

### setAsKeyTarget()

> **setAsKeyTarget**(): [`TRet`](../enumerations/TRet.md)

递归的把父控件的key_target设置为自己。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`setAsKeyTarget`](TWindowBase.md#setaskeytarget)

#### Defined in

[awtk.ts:12294](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12294)

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

[`TWindowBase`](TWindowBase.md).[`setAutoAdjustSize`](TWindowBase.md#setautoadjustsize)

#### Defined in

[awtk.ts:11453](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11453)

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

[`TWindowBase`](TWindowBase.md).[`setChildText`](TWindowBase.md#setchildtext)

#### Defined in

[awtk.ts:11109](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11109)

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

[`TWindowBase`](TWindowBase.md).[`setChildTextWithDouble`](TWindowBase.md#setchildtextwithdouble)

#### Defined in

[awtk.ts:11124](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11124)

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

[`TWindowBase`](TWindowBase.md).[`setChildTextWithInt`](TWindowBase.md#setchildtextwithint)

#### Defined in

[awtk.ts:11139](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11139)

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

[`TWindowBase`](TWindowBase.md).[`setChildrenLayout`](TWindowBase.md#setchildrenlayout)

#### Defined in

[awtk.ts:12370](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12370)

***

### setClickThrough()

> **setClickThrough**(`click_through`): [`TRet`](../enumerations/TRet.md)

设置是否启用点击穿透。

#### Parameters

• **click\_through**: `boolean`

是否启用点击穿透。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:29751](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L29751)

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

[`TWindowBase`](TWindowBase.md).[`setDirtyRectTolerance`](TWindowBase.md#setdirtyrecttolerance)

#### Defined in

[awtk.ts:11528](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11528)

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

[`TWindowBase`](TWindowBase.md).[`setEnable`](TWindowBase.md#setenable)

#### Defined in

[awtk.ts:11429](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11429)

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

[`TWindowBase`](TWindowBase.md).[`setFeedback`](TWindowBase.md#setfeedback)

#### Defined in

[awtk.ts:11441](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11441)

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

[`TWindowBase`](TWindowBase.md).[`setFloating`](TWindowBase.md#setfloating)

#### Defined in

[awtk.ts:11466](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11466)

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

[`TWindowBase`](TWindowBase.md).[`setFocusable`](TWindowBase.md#setfocusable)

#### Defined in

[awtk.ts:11490](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11490)

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

[`TWindowBase`](TWindowBase.md).[`setFocused`](TWindowBase.md#setfocused)

#### Defined in

[awtk.ts:11478](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11478)

***

### setModeless()

> **setModeless**(`modeless`): [`TRet`](../enumerations/TRet.md)

设置是否非模态窗口模式。

#### Parameters

• **modeless**: `boolean`

是否非模态窗口模式。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:29775](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L29775)

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

[`TWindowBase`](TWindowBase.md).[`setName`](TWindowBase.md#setname)

#### Defined in

[awtk.ts:11267](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11267)

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

[`TWindowBase`](TWindowBase.md).[`setOpacity`](TWindowBase.md#setopacity)

#### Defined in

[awtk.ts:11516](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11516)

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

[`TWindowBase`](TWindowBase.md).[`setPointerCursor`](TWindowBase.md#setpointercursor)

#### Defined in

[awtk.ts:11302](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11302)

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

[`TWindowBase`](TWindowBase.md).[`setProp`](TWindowBase.md#setprop)

#### Defined in

[awtk.ts:11729](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11729)

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

[`TWindowBase`](TWindowBase.md).[`setPropBool`](TWindowBase.md#setpropbool)

#### Defined in

[awtk.ts:11858](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11858)

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

[`TWindowBase`](TWindowBase.md).[`setPropFloat`](TWindowBase.md#setpropfloat)

#### Defined in

[awtk.ts:11806](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11806)

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

[`TWindowBase`](TWindowBase.md).[`setPropInt`](TWindowBase.md#setpropint)

#### Defined in

[awtk.ts:11832](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11832)

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

[`TWindowBase`](TWindowBase.md).[`setPropPointer`](TWindowBase.md#setproppointer)

#### Defined in

[awtk.ts:11781](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11781)

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

[`TWindowBase`](TWindowBase.md).[`setPropStr`](TWindowBase.md#setpropstr)

#### Defined in

[awtk.ts:11755](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11755)

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

[`TWindowBase`](TWindowBase.md).[`setProps`](TWindowBase.md#setprops)

#### Defined in

[awtk.ts:11742](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11742)

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

[`TWindowBase`](TWindowBase.md).[`setSelfLayout`](TWindowBase.md#setselflayout)

#### Defined in

[awtk.ts:12357](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12357)

***

### setSelfLayoutParams()

> **setSelfLayoutParams**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

设置控件自己的布局(缺省布局器)参数(过时，请用widget\_set\_self\_layout)。
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

[`TWindowBase`](TWindowBase.md).[`setSelfLayoutParams`](TWindowBase.md#setselflayoutparams)

#### Defined in

[awtk.ts:12386](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12386)

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

[`TWindowBase`](TWindowBase.md).[`setSensitive`](TWindowBase.md#setsensitive)

#### Defined in

[awtk.ts:11662](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11662)

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

[`TWindowBase`](TWindowBase.md).[`setState`](TWindowBase.md#setstate)

#### Defined in

[awtk.ts:11502](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11502)

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

[`TWindowBase`](TWindowBase.md).[`setStyleColor`](TWindowBase.md#setstylecolor)

#### Defined in

[awtk.ts:12439](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12439)

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

[`TWindowBase`](TWindowBase.md).[`setStyleInt`](TWindowBase.md#setstyleint)

#### Defined in

[awtk.ts:12402](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12402)

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

[`TWindowBase`](TWindowBase.md).[`setStyleStr`](TWindowBase.md#setstylestr)

#### Defined in

[awtk.ts:12418](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12418)

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

[`TWindowBase`](TWindowBase.md).[`setText`](TWindowBase.md#settext)

#### Defined in

[awtk.ts:11082](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11082)

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

[`TWindowBase`](TWindowBase.md).[`setTextEx`](TWindowBase.md#settextex)

#### Defined in

[awtk.ts:11095](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11095)

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

[`TWindowBase`](TWindowBase.md).[`setTheme`](TWindowBase.md#settheme)

#### Defined in

[awtk.ts:11279](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11279)

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

[`TWindowBase`](TWindowBase.md).[`setTrText`](TWindowBase.md#settrtext)

#### Defined in

[awtk.ts:11151](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11151)

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

[`TWindowBase`](TWindowBase.md).[`setValue`](TWindowBase.md#setvalue)

#### Defined in

[awtk.ts:10959](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10959)

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

[`TWindowBase`](TWindowBase.md).[`setValueInt`](TWindowBase.md#setvalueint)

#### Defined in

[awtk.ts:10996](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L10996)

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

[`TWindowBase`](TWindowBase.md).[`setVisible`](TWindowBase.md#setvisible)

#### Defined in

[awtk.ts:11638](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11638)

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

[`TWindowBase`](TWindowBase.md).[`setVisibleOnly`](TWindowBase.md#setvisibleonly)

#### Defined in

[awtk.ts:11650](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11650)

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

[`TWindowBase`](TWindowBase.md).[`startAnimator`](TWindowBase.md#startanimator)

#### Defined in

[awtk.ts:11348](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11348)

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

[`TWindowBase`](TWindowBase.md).[`stopAnimator`](TWindowBase.md#stopanimator)

#### Defined in

[awtk.ts:11400](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11400)

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

[`TWindowBase`](TWindowBase.md).[`strokeBorderRect`](TWindowBase.md#strokeborderrect)

#### Defined in

[awtk.ts:12198](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12198)

***

### unref()

> **unref**(): [`TRet`](../enumerations/TRet.md)

减少控件的引用计数。引用计数为0时销毁控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`unref`](TWindowBase.md#unref)

#### Defined in

[awtk.ts:12185](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12185)

***

### updateStyle()

> **updateStyle**(): [`TRet`](../enumerations/TRet.md)

让控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`updateStyle`](TWindowBase.md#updatestyle)

#### Defined in

[awtk.ts:12272](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12272)

***

### updateStyleRecursive()

> **updateStyleRecursive**(): [`TRet`](../enumerations/TRet.md)

让控件及子控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`updateStyleRecursive`](TWindowBase.md#updatestylerecursive)

#### Defined in

[awtk.ts:12283](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L12283)

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

[`TWindowBase`](TWindowBase.md).[`useStyle`](TWindowBase.md#usestyle)

#### Defined in

[awtk.ts:11070](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L11070)

***

### cast()

> `static` **cast**(`widget`): [`TOverlay`](TOverlay.md)

转换为overlay对象(供脚本语言使用)。

#### Parameters

• **widget**: [`TWidget`](TWidget.md)

overlay对象。

#### Returns

[`TOverlay`](TOverlay.md)

overlay对象。

#### Overrides

[`TWindowBase`](TWindowBase.md).[`cast`](TWindowBase.md#cast)

#### Defined in

[awtk.ts:29787](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L29787)

***

### create()

> `static` **create**(`parent`, `x`, `y`, `w`, `h`): [`TOverlay`](TOverlay.md)

创建overlay对象

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

[`TOverlay`](TOverlay.md)

对象。

#### Defined in

[awtk.ts:29739](https://github.com/zlgopen/awtk-binding/blob/b1e618d759250c07a8449fe21dad19c89a7f6c51/tools/code_gen/js/output/awtk.ts#L29739)
