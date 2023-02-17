[AWTK](../README.md) / [Exports](../modules.md) / TWindow

# Class: TWindow

窗口。

缺省的应用程序窗口，占用除system\_bar\_t之外的整个区域，请不要修改它的位置和大小(除非你清楚后果)。

window\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于window\_t控件。

在xml中使用"window"标签创建窗口。无需指定坐标和大小，可以指定窗体样式和动画名称。如：

```xml
<window theme="basic" anim_hint="htranslate">
...
</window>
```

>
更多用法请参考：[window.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)

在c代码中使用函数window\_create创建窗口。如：

> 无需指定父控件、坐标和大小，使用0即可。

> 完整示例请参考：[window
demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/)

可用通过style来设置窗口的风格，如背景颜色或图片等。如：

```xml
<style name="bricks">
<normal bg_image="bricks"  bg_image_draw_type="repeat"/>
</style>
```

> 更多用法请参考：[theme
default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L0)

## Hierarchy

- [`TWindowBase`](TWindowBase.md)

  ↳ **`TWindow`**

## Table of contents

### Constructors

- [constructor](TWindow.md#constructor)

### Properties

- [nativeObj](TWindow.md#nativeobj)

### Accessors

- [animation](TWindow.md#animation)
- [appletName](TWindow.md#appletname)
- [autoAdjustSize](TWindow.md#autoadjustsize)
- [autoScaleChildrenH](TWindow.md#autoscalechildrenh)
- [autoScaleChildrenW](TWindow.md#autoscalechildrenw)
- [autoScaleChildrenX](TWindow.md#autoscalechildrenx)
- [autoScaleChildrenY](TWindow.md#autoscalechildreny)
- [closable](TWindow.md#closable)
- [closeAnimHint](TWindow.md#closeanimhint)
- [designH](TWindow.md#designh)
- [designW](TWindow.md#designw)
- [dirtyRectTolerance](TWindow.md#dirtyrecttolerance)
- [disableAnim](TWindow.md#disableanim)
- [enable](TWindow.md#enable)
- [feedback](TWindow.md#feedback)
- [floating](TWindow.md#floating)
- [focusable](TWindow.md#focusable)
- [fullscreen](TWindow.md#fullscreen)
- [h](TWindow.md#h)
- [moveFocusDownKey](TWindow.md#movefocusdownkey)
- [moveFocusLeftKey](TWindow.md#movefocusleftkey)
- [moveFocusNextKey](TWindow.md#movefocusnextkey)
- [moveFocusPrevKey](TWindow.md#movefocusprevkey)
- [moveFocusRightKey](TWindow.md#movefocusrightkey)
- [moveFocusUpKey](TWindow.md#movefocusupkey)
- [name](TWindow.md#name)
- [opacity](TWindow.md#opacity)
- [openAnimHint](TWindow.md#openanimhint)
- [parent](TWindow.md#parent)
- [pointerCursor](TWindow.md#pointercursor)
- [sensitive](TWindow.md#sensitive)
- [singleInstance](TWindow.md#singleinstance)
- [stronglyFocus](TWindow.md#stronglyfocus)
- [style](TWindow.md#style)
- [theme](TWindow.md#theme)
- [trText](TWindow.md#trtext)
- [visible](TWindow.md#visible)
- [w](TWindow.md#w)
- [withFocusState](TWindow.md#withfocusstate)
- [x](TWindow.md#x)
- [y](TWindow.md#y)

### Methods

- [addChild](TWindow.md#addchild)
- [addChildDefault](TWindow.md#addchilddefault)
- [addValue](TWindow.md#addvalue)
- [addValueInt](TWindow.md#addvalueint)
- [animateValueTo](TWindow.md#animatevalueto)
- [back](TWindow.md#back)
- [backToHome](TWindow.md#backtohome)
- [child](TWindow.md#child)
- [clone](TWindow.md#clone)
- [close](TWindow.md#close)
- [closeForce](TWindow.md#closeforce)
- [closeWindow](TWindow.md#closewindow)
- [closeWindowForce](TWindow.md#closewindowforce)
- [countChildren](TWindow.md#countchildren)
- [createAnimator](TWindow.md#createanimator)
- [destroy](TWindow.md#destroy)
- [destroyAnimator](TWindow.md#destroyanimator)
- [destroyAsync](TWindow.md#destroyasync)
- [destroyChildren](TWindow.md#destroychildren)
- [dispatchToKeyTarget](TWindow.md#dispatchtokeytarget)
- [dispatchToTarget](TWindow.md#dispatchtotarget)
- [equal](TWindow.md#equal)
- [fillBgRect](TWindow.md#fillbgrect)
- [fillFgRect](TWindow.md#fillfgrect)
- [findParentByName](TWindow.md#findparentbyname)
- [findParentByType](TWindow.md#findparentbytype)
- [focusNext](TWindow.md#focusnext)
- [focusPrev](TWindow.md#focusprev)
- [foreach](TWindow.md#foreach)
- [getAutoAdjustSize](TWindow.md#getautoadjustsize)
- [getChild](TWindow.md#getchild)
- [getEnable](TWindow.md#getenable)
- [getFeedback](TWindow.md#getfeedback)
- [getFloating](TWindow.md#getfloating)
- [getFocusable](TWindow.md#getfocusable)
- [getFocusedWidget](TWindow.md#getfocusedwidget)
- [getNativeWindow](TWindow.md#getnativewindow)
- [getPropBool](TWindow.md#getpropbool)
- [getPropFloat](TWindow.md#getpropfloat)
- [getPropInt](TWindow.md#getpropint)
- [getPropPointer](TWindow.md#getproppointer)
- [getPropStr](TWindow.md#getpropstr)
- [getSensitive](TWindow.md#getsensitive)
- [getStateForStyle](TWindow.md#getstateforstyle)
- [getStyleType](TWindow.md#getstyletype)
- [getText](TWindow.md#gettext)
- [getThemeName](TWindow.md#getthemename)
- [getType](TWindow.md#gettype)
- [getValue](TWindow.md#getvalue)
- [getValueInt](TWindow.md#getvalueint)
- [getVisible](TWindow.md#getvisible)
- [getWindow](TWindow.md#getwindow)
- [getWindowManager](TWindow.md#getwindowmanager)
- [getWithFocusState](TWindow.md#getwithfocusstate)
- [indexOf](TWindow.md#indexof)
- [insertChild](TWindow.md#insertchild)
- [invalidateForce](TWindow.md#invalidateforce)
- [isDesigningWindow](TWindow.md#isdesigningwindow)
- [isDialog](TWindow.md#isdialog)
- [isDirectParentOf](TWindow.md#isdirectparentof)
- [isKeyboard](TWindow.md#iskeyboard)
- [isNormalWindow](TWindow.md#isnormalwindow)
- [isOpenedDialog](TWindow.md#isopeneddialog)
- [isOpenedPopup](TWindow.md#isopenedpopup)
- [isOverlay](TWindow.md#isoverlay)
- [isParentOf](TWindow.md#isparentof)
- [isPopup](TWindow.md#ispopup)
- [isStyleExist](TWindow.md#isstyleexist)
- [isSystemBar](TWindow.md#issystembar)
- [isWindow](TWindow.md#iswindow)
- [isWindowCreated](TWindow.md#iswindowcreated)
- [isWindowManager](TWindow.md#iswindowmanager)
- [isWindowOpened](TWindow.md#iswindowopened)
- [layout](TWindow.md#layout)
- [lookup](TWindow.md#lookup)
- [lookupByType](TWindow.md#lookupbytype)
- [move](TWindow.md#move)
- [moveResize](TWindow.md#moveresize)
- [moveResizeEx](TWindow.md#moveresizeex)
- [moveToCenter](TWindow.md#movetocenter)
- [off](TWindow.md#off)
- [on](TWindow.md#on)
- [pauseAnimator](TWindow.md#pauseanimator)
- [removeChild](TWindow.md#removechild)
- [resize](TWindow.md#resize)
- [restack](TWindow.md#restack)
- [setAnimation](TWindow.md#setanimation)
- [setAnimatorTimeScale](TWindow.md#setanimatortimescale)
- [setAsKeyTarget](TWindow.md#setaskeytarget)
- [setAutoAdjustSize](TWindow.md#setautoadjustsize)
- [setAutoScaleChildren](TWindow.md#setautoscalechildren)
- [setChildText](TWindow.md#setchildtext)
- [setChildTextWithDouble](TWindow.md#setchildtextwithdouble)
- [setChildTextWithInt](TWindow.md#setchildtextwithint)
- [setChildrenLayout](TWindow.md#setchildrenlayout)
- [setDirtyRectTolerance](TWindow.md#setdirtyrecttolerance)
- [setEnable](TWindow.md#setenable)
- [setFeedback](TWindow.md#setfeedback)
- [setFloating](TWindow.md#setfloating)
- [setFocusable](TWindow.md#setfocusable)
- [setFocused](TWindow.md#setfocused)
- [setFullscreen](TWindow.md#setfullscreen)
- [setName](TWindow.md#setname)
- [setOpacity](TWindow.md#setopacity)
- [setPointerCursor](TWindow.md#setpointercursor)
- [setPropBool](TWindow.md#setpropbool)
- [setPropFloat](TWindow.md#setpropfloat)
- [setPropInt](TWindow.md#setpropint)
- [setPropPointer](TWindow.md#setproppointer)
- [setPropStr](TWindow.md#setpropstr)
- [setProps](TWindow.md#setprops)
- [setSelfLayout](TWindow.md#setselflayout)
- [setSelfLayoutParams](TWindow.md#setselflayoutparams)
- [setSensitive](TWindow.md#setsensitive)
- [setState](TWindow.md#setstate)
- [setStyleColor](TWindow.md#setstylecolor)
- [setStyleInt](TWindow.md#setstyleint)
- [setStyleStr](TWindow.md#setstylestr)
- [setText](TWindow.md#settext)
- [setTextEx](TWindow.md#settextex)
- [setTheme](TWindow.md#settheme)
- [setTrText](TWindow.md#settrtext)
- [setValue](TWindow.md#setvalue)
- [setValueInt](TWindow.md#setvalueint)
- [setVisible](TWindow.md#setvisible)
- [setVisibleOnly](TWindow.md#setvisibleonly)
- [startAnimator](TWindow.md#startanimator)
- [stopAnimator](TWindow.md#stopanimator)
- [strokeBorderRect](TWindow.md#strokeborderrect)
- [unref](TWindow.md#unref)
- [updateStyle](TWindow.md#updatestyle)
- [updateStyleRecursive](TWindow.md#updatestylerecursive)
- [useStyle](TWindow.md#usestyle)
- [cast](TWindow.md#cast)
- [create](TWindow.md#create)
- [createDefault](TWindow.md#createdefault)
- [open](TWindow.md#open)
- [openAndClose](TWindow.md#openandclose)

## Constructors

### constructor

• **new TWindow**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TWindowBase](TWindowBase.md).[constructor](TWindowBase.md#constructor)

#### Defined in

[awtk.ts:26894](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L26894)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TWindowBase](TWindowBase.md).[nativeObj](TWindowBase.md#nativeobj)

#### Defined in

[awtk.ts:26893](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L26893)

## Accessors

### animation

• `get` **animation**(): `string`

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

#### Returns

`string`

#### Inherited from

TWindowBase.animation

#### Defined in

[awtk.ts:12060](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12060)

• `set` **animation**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Inherited from

TWindowBase.animation

#### Defined in

[awtk.ts:12064](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12064)

___

### appletName

• `get` **appletName**(): `string`

小应用程序(applet)的名称。

> 如果该窗口属于某个独立的小程序应用(applet)，需要指定它的名称，以便到对应的资源目录查找资源。

#### Returns

`string`

#### Inherited from

TWindowBase.appletName

#### Defined in

[awtk.ts:15802](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15802)

___

### autoAdjustSize

• `get` **autoAdjustSize**(): `boolean`

是否根据子控件和文本自动调整控件自身大小。

> 为true时，最好不要使用 layout 的相关东西，否则可能有冲突。
> 注意：只是调整控件的本身的宽高，不会修改控件本身的位置。

#### Returns

`boolean`

#### Inherited from

TWindowBase.autoAdjustSize

#### Defined in

[awtk.ts:12151](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12151)

• `set` **autoAdjustSize**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TWindowBase.autoAdjustSize

#### Defined in

[awtk.ts:12155](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12155)

___

### autoScaleChildrenH

• `get` **autoScaleChildrenH**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的高度。

#### Returns

`boolean`

#### Inherited from

TWindowBase.autoScaleChildrenH

#### Defined in

[awtk.ts:15679](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15679)

___

### autoScaleChildrenW

• `get` **autoScaleChildrenW**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的宽度。

#### Returns

`boolean`

#### Inherited from

TWindowBase.autoScaleChildrenW

#### Defined in

[awtk.ts:15670](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15670)

___

### autoScaleChildrenX

• `get` **autoScaleChildrenX**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的x坐标。

#### Returns

`boolean`

#### Inherited from

TWindowBase.autoScaleChildrenX

#### Defined in

[awtk.ts:15652](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15652)

___

### autoScaleChildrenY

• `get` **autoScaleChildrenY**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的y坐标。

#### Returns

`boolean`

#### Inherited from

TWindowBase.autoScaleChildrenY

#### Defined in

[awtk.ts:15661](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15661)

___

### closable

• `get` **closable**(): [`TWindowClosable`](../enums/TWindowClosable.md)

收到EVT_REQUEST_CLOSE_WINDOW是否自动关闭窗口。

如果关闭窗口时，需要用户确认:

* 1.将closable设置为WINDOW\_CLOSABLE\_CONFIRM

* 2.处理窗口的EVT\_REQUEST\_CLOSE\_WINDOW事件

> closable在XML中取值为：yes/no/confirm，缺省为yes。

#### Returns

[`TWindowClosable`](../enums/TWindowClosable.md)

#### Inherited from

TWindowBase.closable

#### Defined in

[awtk.ts:15705](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15705)

___

### closeAnimHint

• `get` **closeAnimHint**(): `string`

关闭窗口动画的名称。
请参考[窗口动画](https://github.com/zlgopen/awtk/blob/master/docs/window_animator.md)

#### Returns

`string`

#### Inherited from

TWindowBase.closeAnimHint

#### Defined in

[awtk.ts:15725](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15725)

___

### designH

• `get` **designH**(): `number`

设计时高度。

#### Returns

`number`

#### Inherited from

TWindowBase.designH

#### Defined in

[awtk.ts:15643](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15643)

___

### designW

• `get` **designW**(): `number`

设计时宽度。

#### Returns

`number`

#### Inherited from

TWindowBase.designW

#### Defined in

[awtk.ts:15634](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15634)

___

### dirtyRectTolerance

• `get` **dirtyRectTolerance**(): `number`

脏矩形超出控件本身大小的最大范围(一般不用指定)。

> 如果 border 太粗或 offset 太大等原因，导致脏矩形超出控件本身大小太多（大于缺省值）时，才需要指定。

#### Returns

`number`

#### Inherited from

TWindowBase.dirtyRectTolerance

#### Defined in

[awtk.ts:12192](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12192)

• `set` **dirtyRectTolerance**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Inherited from

TWindowBase.dirtyRectTolerance

#### Defined in

[awtk.ts:12196](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12196)

___

### disableAnim

• `get` **disableAnim**(): `boolean`

禁用窗口动画。

#### Returns

`boolean`

#### Inherited from

TWindowBase.disableAnim

#### Defined in

[awtk.ts:15688](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15688)

___

### enable

• `get` **enable**(): `boolean`

启用/禁用状态。

#### Returns

`boolean`

#### Inherited from

TWindowBase.enable

#### Defined in

[awtk.ts:12073](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12073)

• `set` **enable**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TWindowBase.enable

#### Defined in

[awtk.ts:12077](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12077)

___

### feedback

• `get` **feedback**(): `boolean`

是否启用按键音、触屏音和震动等反馈。

#### Returns

`boolean`

#### Inherited from

TWindowBase.feedback

#### Defined in

[awtk.ts:12086](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12086)

• `set` **feedback**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TWindowBase.feedback

#### Defined in

[awtk.ts:12090](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12090)

___

### floating

• `get` **floating**(): `boolean`

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

#### Returns

`boolean`

#### Inherited from

TWindowBase.floating

#### Defined in

[awtk.ts:12164](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12164)

• `set` **floating**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TWindowBase.floating

#### Defined in

[awtk.ts:12168](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12168)

___

### focusable

• `get` **focusable**(): `boolean`

是否支持焦点停留。

#### Returns

`boolean`

#### Inherited from

TWindowBase.focusable

#### Defined in

[awtk.ts:12125](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12125)

• `set` **focusable**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TWindowBase.focusable

#### Defined in

[awtk.ts:12129](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12129)

___

### fullscreen

• `get` **fullscreen**(): `boolean`

是否全屏。

>对于模拟器，全屏是让窗口和LCD具有相同大小，而非让SDL窗口全屏。

#### Returns

`boolean`

#### Defined in

[awtk.ts:27020](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L27020)

• `set` **fullscreen**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Defined in

[awtk.ts:27024](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L27024)

___

### h

• `get` **h**(): `number`

高度。

#### Returns

`number`

#### Inherited from

TWindowBase.h

#### Defined in

[awtk.ts:12003](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12003)

___

### moveFocusDownKey

• `get` **moveFocusDownKey**(): `string`

向下移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Inherited from

TWindowBase.moveFocusDownKey

#### Defined in

[awtk.ts:15769](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15769)

___

### moveFocusLeftKey

• `get` **moveFocusLeftKey**(): `string`

向左移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Inherited from

TWindowBase.moveFocusLeftKey

#### Defined in

[awtk.ts:15780](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15780)

___

### moveFocusNextKey

• `get` **moveFocusNextKey**(): `string`

向后移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Inherited from

TWindowBase.moveFocusNextKey

#### Defined in

[awtk.ts:15747](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15747)

___

### moveFocusPrevKey

• `get` **moveFocusPrevKey**(): `string`

向前移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Inherited from

TWindowBase.moveFocusPrevKey

#### Defined in

[awtk.ts:15736](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15736)

___

### moveFocusRightKey

• `get` **moveFocusRightKey**(): `string`

向右移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Inherited from

TWindowBase.moveFocusRightKey

#### Defined in

[awtk.ts:15791](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15791)

___

### moveFocusUpKey

• `get` **moveFocusUpKey**(): `string`

向上移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Inherited from

TWindowBase.moveFocusUpKey

#### Defined in

[awtk.ts:15758](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15758)

___

### name

• `get` **name**(): `string`

控件名字。

#### Returns

`string`

#### Inherited from

TWindowBase.name

#### Defined in

[awtk.ts:12012](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12012)

• `set` **name**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Inherited from

TWindowBase.name

#### Defined in

[awtk.ts:12016](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12016)

___

### opacity

• `get` **opacity**(): `number`

不透明度(0-255)，0完全透明，255完全不透明。

#### Returns

`number`

#### Inherited from

TWindowBase.opacity

#### Defined in

[awtk.ts:12177](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12177)

• `set` **opacity**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Inherited from

TWindowBase.opacity

#### Defined in

[awtk.ts:12181](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12181)

___

### openAnimHint

• `get` **openAnimHint**(): `string`

打开窗口动画的名称。
请参考[窗口动画](https://github.com/zlgopen/awtk/blob/master/docs/window_animator.md)

#### Returns

`string`

#### Inherited from

TWindowBase.openAnimHint

#### Defined in

[awtk.ts:15715](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15715)

___

### parent

• `get` **parent**(): [`TWidget`](TWidget.md)

父控件

#### Returns

[`TWidget`](TWidget.md)

#### Inherited from

TWindowBase.parent

#### Defined in

[awtk.ts:12205](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12205)

___

### pointerCursor

• `get` **pointerCursor**(): `string`

鼠标光标图片名称。

#### Returns

`string`

#### Inherited from

TWindowBase.pointerCursor

#### Defined in

[awtk.ts:12025](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12025)

• `set` **pointerCursor**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Inherited from

TWindowBase.pointerCursor

#### Defined in

[awtk.ts:12029](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12029)

___

### sensitive

• `get` **sensitive**(): `boolean`

是否接受用户事件。

#### Returns

`boolean`

#### Inherited from

TWindowBase.sensitive

#### Defined in

[awtk.ts:12112](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12112)

• `set` **sensitive**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TWindowBase.sensitive

#### Defined in

[awtk.ts:12116](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12116)

___

### singleInstance

• `get` **singleInstance**(): `boolean`

单例。如果窗口存在，先关闭再打开。

#### Returns

`boolean`

#### Inherited from

TWindowBase.singleInstance

#### Defined in

[awtk.ts:15811](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15811)

___

### stronglyFocus

• `get` **stronglyFocus**(): `boolean`

点击非focusable控件时，是否让当前焦点控件失去焦点。比如点击窗口空白区域，是否让编辑器失去焦点。

#### Returns

`boolean`

#### Inherited from

TWindowBase.stronglyFocus

#### Defined in

[awtk.ts:15820](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15820)

___

### style

• `get` **style**(): `string`

style的名称。

#### Returns

`string`

#### Inherited from

TWindowBase.style

#### Defined in

[awtk.ts:12051](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12051)

___

### theme

• `get` **theme**(): `string`

窗体样式资源的名称。
每个窗口都可以有独立的窗体样式文件，如果没指定，则使用系统缺省的窗体样式文件。
窗体样式是一个XML文件，放在assets/raw/styles目录下。
请参考[窗体样式](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

#### Returns

`string`

#### Inherited from

TWindowBase.theme

#### Defined in

[awtk.ts:15625](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L15625)

___

### trText

• `get` **trText**(): `string`

保存用于翻译的字符串。

#### Returns

`string`

#### Inherited from

TWindowBase.trText

#### Defined in

[awtk.ts:12038](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12038)

• `set` **trText**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Inherited from

TWindowBase.trText

#### Defined in

[awtk.ts:12042](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12042)

___

### visible

• `get` **visible**(): `boolean`

是否可见。

#### Returns

`boolean`

#### Inherited from

TWindowBase.visible

#### Defined in

[awtk.ts:12099](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12099)

• `set` **visible**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TWindowBase.visible

#### Defined in

[awtk.ts:12103](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12103)

___

### w

• `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Inherited from

TWindowBase.w

#### Defined in

[awtk.ts:11994](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11994)

___

### withFocusState

• `get` **withFocusState**(): `boolean`

是否支持焦点状态。
> 如果希望style支持焦点状态，但又不希望焦点停留，可用本属性。

#### Returns

`boolean`

#### Inherited from

TWindowBase.withFocusState

#### Defined in

[awtk.ts:12139](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L12139)

___

### x

• `get` **x**(): `number`

x坐标(相对于父控件的x坐标)。

#### Returns

`number`

#### Inherited from

TWindowBase.x

#### Defined in

[awtk.ts:11976](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11976)

___

### y

• `get` **y**(): `number`

y坐标(相对于父控件的y坐标)。

#### Returns

`number`

#### Inherited from

TWindowBase.y

#### Defined in

[awtk.ts:11985](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11985)

## Methods

### addChild

▸ **addChild**(`child`): [`TRet`](../enums/TRet.md)

加入一个子控件。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `child` | [`TWidget`](TWidget.md) | 子控件对象。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[addChild](TWindowBase.md#addchild)

#### Defined in

[awtk.ts:11130](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11130)

___

### addChildDefault

▸ **addChildDefault**(`child`): [`TRet`](../enums/TRet.md)

加入一个子控件默认实现(供子类调用)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `child` | [`TWidget`](TWidget.md) | 子控件对象。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[addChildDefault](TWindowBase.md#addchilddefault)

#### Defined in

[awtk.ts:11967](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11967)

___

### addValue

▸ **addValue**(`delta`): [`TRet`](../enums/TRet.md)

增加控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `delta` | `number` | 增量。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[addValue](TWindowBase.md#addvalue)

#### Defined in

[awtk.ts:10573](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10573)

___

### addValueInt

▸ **addValueInt**(`delta`): [`TRet`](../enums/TRet.md)

增加控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `delta` | `number` | 增量。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[addValueInt](TWindowBase.md#addvalueint)

#### Defined in

[awtk.ts:10610](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10610)

___

### animateValueTo

▸ **animateValueTo**(`value`, `duration`): [`TRet`](../enums/TRet.md)

设置控件的值(以动画形式变化到指定的值)。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 值。 |
| `duration` | `number` | 动画持续时间(毫秒)。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[animateValueTo](TWindowBase.md#animatevalueto)

#### Defined in

[awtk.ts:10624](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10624)

___

### back

▸ **back**(): [`TRet`](../enums/TRet.md)

请求返回到前一个窗口。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[back](TWindowBase.md#back)

#### Defined in

[awtk.ts:10457](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10457)

___

### backToHome

▸ **backToHome**(): [`TRet`](../enums/TRet.md)

请求返回到home窗口。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[backToHome](TWindowBase.md#backtohome)

#### Defined in

[awtk.ts:10468](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10468)

___

### child

▸ **child**(`name`): [`TWidget`](TWidget.md)

查找指定名称的子控件(同widget_lookup(widget, name, FALSE))。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 子控件的名称。 |

#### Returns

[`TWidget`](TWidget.md)

子控件或NULL。

#### Inherited from

[TWindowBase](TWindowBase.md).[child](TWindowBase.md#child)

#### Defined in

[awtk.ts:11179](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11179)

___

### clone

▸ **clone**(`parent`): [`TWidget`](TWidget.md)

clone。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `parent` | [`TWidget`](TWidget.md) | clone新控件的parent对象。 |

#### Returns

[`TWidget`](TWidget.md)

返回clone的对象。

#### Inherited from

[TWindowBase](TWindowBase.md).[clone](TWindowBase.md#clone)

#### Defined in

[awtk.ts:11650](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11650)

___

### close

▸ **close**(): [`TRet`](../enums/TRet.md)

关闭窗口。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26986](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L26986)

___

### closeForce

▸ **closeForce**(): [`TRet`](../enums/TRet.md)

立即无条件关闭窗口(无动画)。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26997](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L26997)

___

### closeWindow

▸ **closeWindow**(): [`TRet`](../enums/TRet.md)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[closeWindow](TWindowBase.md#closewindow)

#### Defined in

[awtk.ts:10435](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10435)

___

### closeWindowForce

▸ **closeWindowForce**(): [`TRet`](../enums/TRet.md)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[closeWindowForce](TWindowBase.md#closewindowforce)

#### Defined in

[awtk.ts:10446](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10446)

___

### countChildren

▸ **countChildren**(): `number`

获取子控件的个数。

#### Returns

`number`

子控件的个数。

#### Inherited from

[TWindowBase](TWindowBase.md).[countChildren](TWindowBase.md#countchildren)

#### Defined in

[awtk.ts:10355](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10355)

___

### createAnimator

▸ **createAnimator**(`animation`): [`TRet`](../enums/TRet.md)

创建动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 除非指定auto_start=false，动画创建后自动启动。
* 除非指定auto_destroy=false，动画播放完成后自动销毁。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `animation` | `string` | 动画参数。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[createAnimator](TWindowBase.md#createanimator)

#### Defined in

[awtk.ts:10910](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10910)

___

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[destroy](TWindowBase.md#destroy)

#### Defined in

[awtk.ts:11687](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11687)

___

### destroyAnimator

▸ **destroyAnimator**(`name`): [`TRet`](../enums/TRet.md)

销毁动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，销毁所有名称为name的动画。
* 2.name为NULL时，销毁所有widget相关的动画。
* 3.widget和name均为NULL，销毁所有动画。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 动画名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[destroyAnimator](TWindowBase.md#destroyanimator)

#### Defined in

[awtk.ts:10996](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10996)

___

### destroyAsync

▸ **destroyAsync**(): [`TRet`](../enums/TRet.md)

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[destroyAsync](TWindowBase.md#destroyasync)

#### Defined in

[awtk.ts:11700](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11700)

___

### destroyChildren

▸ **destroyChildren**(): [`TRet`](../enums/TRet.md)

销毁全部子控件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[destroyChildren](TWindowBase.md#destroychildren)

#### Defined in

[awtk.ts:11118](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11118)

___

### dispatchToKeyTarget

▸ **dispatchToKeyTarget**(`e`): [`TRet`](../enums/TRet.md)

递归的分发一个事件到所有key_target子控件。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `e` | [`TEvent`](TEvent.md) | 事件。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[dispatchToKeyTarget](TWindowBase.md#dispatchtokeytarget)

#### Defined in

[awtk.ts:11776](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11776)

___

### dispatchToTarget

▸ **dispatchToTarget**(`e`): [`TRet`](../enums/TRet.md)

递归的分发一个事件到所有target子控件。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `e` | [`TEvent`](TEvent.md) | 事件。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[dispatchToTarget](TWindowBase.md#dispatchtotarget)

#### Defined in

[awtk.ts:11764](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11764)

___

### equal

▸ **equal**(`other`): `boolean`

判断两个widget是否相同。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `other` | [`TWidget`](TWidget.md) | 要比较的控件对象。 |

#### Returns

`boolean`

返回TRUE表示相同，否则表示不同。

#### Inherited from

[TWindowBase](TWindowBase.md).[equal](TWindowBase.md#equal)

#### Defined in

[awtk.ts:11662](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11662)

___

### fillBgRect

▸ **fillBgRect**(`c`, `r`, `draw_type`): [`TRet`](../enums/TRet.md)

根据控件的style绘制背景矩形。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `c` | [`TCanvas`](TCanvas.md) | 画布对象。 |
| `r` | [`TRect`](TRect.md) | 矩形区域。 |
| `draw_type` | [`TImageDrawType`](../enums/TImageDrawType.md) | 图片缺省绘制方式。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[fillBgRect](TWindowBase.md#fillbgrect)

#### Defined in

[awtk.ts:11738](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11738)

___

### fillFgRect

▸ **fillFgRect**(`c`, `r`, `draw_type`): [`TRet`](../enums/TRet.md)

根据控件的style绘制前景矩形。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `c` | [`TCanvas`](TCanvas.md) | 画布对象。 |
| `r` | [`TRect`](TRect.md) | 矩形区域。 |
| `draw_type` | [`TImageDrawType`](../enums/TImageDrawType.md) | 图片缺省绘制方式。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[fillFgRect](TWindowBase.md#fillfgrect)

#### Defined in

[awtk.ts:11752](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11752)

___

### findParentByName

▸ **findParentByName**(`name`): [`TWidget`](TWidget.md)

通过名称查找父控件。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 名称。 |

#### Returns

[`TWidget`](TWidget.md)

父控件。

#### Inherited from

[TWindowBase](TWindowBase.md).[findParentByName](TWindowBase.md#findparentbyname)

#### Defined in

[awtk.ts:10379](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10379)

___

### findParentByType

▸ **findParentByType**(`type`): [`TWidget`](TWidget.md)

通过类型查找父控件。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `type` | `string` | 类型。 |

#### Returns

[`TWidget`](TWidget.md)

父控件。

#### Inherited from

[TWindowBase](TWindowBase.md).[findParentByType](TWindowBase.md#findparentbytype)

#### Defined in

[awtk.ts:10391](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10391)

___

### focusNext

▸ **focusNext**(): [`TRet`](../enums/TRet.md)

把焦点移动下一个控件。

>widget必须是当前焦点控件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[focusNext](TWindowBase.md#focusnext)

#### Defined in

[awtk.ts:11833](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11833)

___

### focusPrev

▸ **focusPrev**(): [`TRet`](../enums/TRet.md)

把焦点移动前一个控件。

>widget必须是当前焦点控件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[focusPrev](TWindowBase.md#focusprev)

#### Defined in

[awtk.ts:11846](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11846)

___

### foreach

▸ **foreach**(`visit`, `ctx`): [`TRet`](../enums/TRet.md)

遍历当前控件及子控件。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `visit` | `Function` | 遍历的回调函数。 |
| `ctx` | `any` | 回调函数的上下文。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[foreach](TWindowBase.md#foreach)

#### Defined in

[awtk.ts:11605](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11605)

___

### getAutoAdjustSize

▸ **getAutoAdjustSize**(): `boolean`

获取控件auto_adjust_size属性值。

#### Returns

`boolean`

返回auto_adjust_size。

#### Inherited from

[TWindowBase](TWindowBase.md).[getAutoAdjustSize](TWindowBase.md#getautoadjustsize)

#### Defined in

[awtk.ts:10763](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10763)

___

### getChild

▸ **getChild**(`index`): [`TWidget`](TWidget.md)

获取指定索引的子控件。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `index` | `number` | 索引。 |

#### Returns

[`TWidget`](TWidget.md)

子控件。

#### Inherited from

[TWindowBase](TWindowBase.md).[getChild](TWindowBase.md#getchild)

#### Defined in

[awtk.ts:10367](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10367)

___

### getEnable

▸ **getEnable**(): `boolean`

获取控件enable属性值。

#### Returns

`boolean`

返回enable。

#### Inherited from

[TWindowBase](TWindowBase.md).[getEnable](TWindowBase.md#getenable)

#### Defined in

[awtk.ts:10741](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10741)

___

### getFeedback

▸ **getFeedback**(): `boolean`

获取控件feedback属性值。

#### Returns

`boolean`

返回feedback。

#### Inherited from

[TWindowBase](TWindowBase.md).[getFeedback](TWindowBase.md#getfeedback)

#### Defined in

[awtk.ts:10818](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10818)

___

### getFloating

▸ **getFloating**(): `boolean`

获取控件floating属性值。

#### Returns

`boolean`

返回floating。

#### Inherited from

[TWindowBase](TWindowBase.md).[getFloating](TWindowBase.md#getfloating)

#### Defined in

[awtk.ts:10752](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10752)

___

### getFocusable

▸ **getFocusable**(): `boolean`

获取控件focusable属性值。

#### Returns

`boolean`

返回focusable。

#### Inherited from

[TWindowBase](TWindowBase.md).[getFocusable](TWindowBase.md#getfocusable)

#### Defined in

[awtk.ts:10785](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10785)

___

### getFocusedWidget

▸ **getFocusedWidget**(): [`TWidget`](TWidget.md)

获取当前窗口中的焦点控件。

#### Returns

[`TWidget`](TWidget.md)

焦点控件。

#### Inherited from

[TWindowBase](TWindowBase.md).[getFocusedWidget](TWindowBase.md#getfocusedwidget)

#### Defined in

[awtk.ts:10402](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10402)

___

### getNativeWindow

▸ **getNativeWindow**(): [`TNativeWindow`](TNativeWindow.md)

获取原生窗口对象。

#### Returns

[`TNativeWindow`](TNativeWindow.md)

原生窗口对象。

#### Inherited from

[TWindowBase](TWindowBase.md).[getNativeWindow](TWindowBase.md#getnativewindow)

#### Defined in

[awtk.ts:10413](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10413)

___

### getPropBool

▸ **getPropBool**(`name`, `defval`): `boolean`

获取布尔格式的属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `boolean` | 缺省值。 |

#### Returns

`boolean`

返回属性的值。

#### Inherited from

[TWindowBase](TWindowBase.md).[getPropBool](TWindowBase.md#getpropbool)

#### Defined in

[awtk.ts:11424](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11424)

___

### getPropFloat

▸ **getPropFloat**(`name`, `defval`): `number`

获取浮点数格式的属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回属性的值。

#### Inherited from

[TWindowBase](TWindowBase.md).[getPropFloat](TWindowBase.md#getpropfloat)

#### Defined in

[awtk.ts:11372](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11372)

___

### getPropInt

▸ **getPropInt**(`name`, `defval`): `number`

获取整数格式的属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `number` | 缺省值。 |

#### Returns

`number`

返回属性的值。

#### Inherited from

[TWindowBase](TWindowBase.md).[getPropInt](TWindowBase.md#getpropint)

#### Defined in

[awtk.ts:11398](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11398)

___

### getPropPointer

▸ **getPropPointer**(`name`): `any`

获取指针格式的属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |

#### Returns

`any`

返回属性的值。

#### Inherited from

[TWindowBase](TWindowBase.md).[getPropPointer](TWindowBase.md#getproppointer)

#### Defined in

[awtk.ts:11346](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11346)

___

### getPropStr

▸ **getPropStr**(`name`, `defval`): `string`

获取字符串格式的属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `defval` | `string` | 缺省值。 |

#### Returns

`string`

返回属性的值。

#### Inherited from

[TWindowBase](TWindowBase.md).[getPropStr](TWindowBase.md#getpropstr)

#### Defined in

[awtk.ts:11321](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11321)

___

### getSensitive

▸ **getSensitive**(): `boolean`

获取控件sensitive属性值。

#### Returns

`boolean`

返回sensitive。

#### Inherited from

[TWindowBase](TWindowBase.md).[getSensitive](TWindowBase.md#getsensitive)

#### Defined in

[awtk.ts:10796](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10796)

___

### getStateForStyle

▸ **getStateForStyle**(`active`, `checked`): `string`

把控件的状态转成获取style选要的状态，一般只在子类中使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `active` | `boolean` | 控件是否为当前项。 |
| `checked` | `boolean` | 控件是否为选中项。 |

#### Returns

`string`

返回状态值。

#### Inherited from

[TWindowBase](TWindowBase.md).[getStateForStyle](TWindowBase.md#getstateforstyle)

#### Defined in

[awtk.ts:11859](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11859)

___

### getStyleType

▸ **getStyleType**(): `string`

获取 widget 对应风格类型

#### Returns

`string`

返回 widget 的对应风格类型。

#### Inherited from

[TWindowBase](TWindowBase.md).[getStyleType](TWindowBase.md#getstyletype)

#### Defined in

[awtk.ts:11787](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11787)

___

### getText

▸ **getText**(): `any`

str_t str;
str_init(&str, 0);
str_from_wstr(&str, widget_get_text(target));
log_debug("%s: %s\n", target->name, str.str);
str_reset(&str);
```

@returns 返回文本。

#### Returns

`any`

#### Inherited from

[TWindowBase](TWindowBase.md).[getText](TWindowBase.md#gettext)

#### Defined in

[awtk.ts:10834](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10834)

___

### getThemeName

▸ **getThemeName**(): `string`

获取 theme 的名称

#### Returns

`string`

成功返回主题名称，失败否则 NULL。

#### Inherited from

[TWindowBase](TWindowBase.md).[getThemeName](TWindowBase.md#getthemename)

#### Defined in

[awtk.ts:10869](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10869)

___

### getType

▸ **getType**(): `string`

获取当前控件的类型名称。

#### Returns

`string`

返回类型名。

#### Inherited from

[TWindowBase](TWindowBase.md).[getType](TWindowBase.md#gettype)

#### Defined in

[awtk.ts:11638](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11638)

___

### getValue

▸ **getValue**(): `number`

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[TWindowBase](TWindowBase.md).[getValue](TWindowBase.md#getvalue)

#### Defined in

[awtk.ts:10547](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10547)

___

### getValueInt

▸ **getValueInt**(): `number`

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[TWindowBase](TWindowBase.md).[getValueInt](TWindowBase.md#getvalueint)

#### Defined in

[awtk.ts:10584](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10584)

___

### getVisible

▸ **getVisible**(): `boolean`

获取控件visible属性值。

#### Returns

`boolean`

返回visible。

#### Inherited from

[TWindowBase](TWindowBase.md).[getVisible](TWindowBase.md#getvisible)

#### Defined in

[awtk.ts:10807](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10807)

___

### getWindow

▸ **getWindow**(): [`TWidget`](TWidget.md)

获取当前控件所在的窗口。

#### Returns

[`TWidget`](TWidget.md)

窗口对象。

#### Inherited from

[TWindowBase](TWindowBase.md).[getWindow](TWindowBase.md#getwindow)

#### Defined in

[awtk.ts:11616](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11616)

___

### getWindowManager

▸ **getWindowManager**(): [`TWidget`](TWidget.md)

获取当前的窗口管理器。

#### Returns

[`TWidget`](TWidget.md)

窗口管理器对象。

#### Inherited from

[TWindowBase](TWindowBase.md).[getWindowManager](TWindowBase.md#getwindowmanager)

#### Defined in

[awtk.ts:11627](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11627)

___

### getWithFocusState

▸ **getWithFocusState**(): `boolean`

获取控件with_focus_state属性值。

#### Returns

`boolean`

返回with_focus_state。

#### Inherited from

[TWindowBase](TWindowBase.md).[getWithFocusState](TWindowBase.md#getwithfocusstate)

#### Defined in

[awtk.ts:10774](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10774)

___

### indexOf

▸ **indexOf**(): `number`

获取控件在父控件中的索引编号。

#### Returns

`number`

在父控件中的索引编号。

#### Inherited from

[TWindowBase](TWindowBase.md).[indexOf](TWindowBase.md#indexof)

#### Defined in

[awtk.ts:10424](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10424)

___

### insertChild

▸ **insertChild**(`index`, `child`): [`TRet`](../enums/TRet.md)

插入子控件到指定的位置。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `index` | `number` | 位置序数(大于等于总个数，则放到最后)。 |
| `child` | [`TWidget`](TWidget.md) | 子控件对象。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[insertChild](TWindowBase.md#insertchild)

#### Defined in

[awtk.ts:11155](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11155)

___

### invalidateForce

▸ **invalidateForce**(`r`): [`TRet`](../enums/TRet.md)

请求强制重绘控件。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `r` | [`TRect`](TRect.md) | 矩形对象(widget本地坐标)。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[invalidateForce](TWindowBase.md#invalidateforce)

#### Defined in

[awtk.ts:11282](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11282)

___

### isDesigningWindow

▸ **isDesigningWindow**(): `boolean`

判断当前控件是否是设计窗口。

#### Returns

`boolean`

返回当前控件是否是设计窗口。

#### Inherited from

[TWindowBase](TWindowBase.md).[isDesigningWindow](TWindowBase.md#isdesigningwindow)

#### Defined in

[awtk.ts:11581](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11581)

___

### isDialog

▸ **isDialog**(): `boolean`

检查控件是否是对话框类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[TWindowBase](TWindowBase.md).[isDialog](TWindowBase.md#isdialog)

#### Defined in

[awtk.ts:11514](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11514)

___

### isDirectParentOf

▸ **isDirectParentOf**(`child`): `boolean`

判断当前控件是否是指定控件的直系父控件。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `child` | [`TWidget`](TWidget.md) | 控件对象。 |

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Inherited from

[TWindowBase](TWindowBase.md).[isDirectParentOf](TWindowBase.md#isdirectparentof)

#### Defined in

[awtk.ts:11470](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11470)

___

### isKeyboard

▸ **isKeyboard**(): `boolean`

widget_set_prop_bool(group, WIDGET_PROP_IS_KEYBOARD, TRUE);
```

@returns 返回FALSE表示不是，否则表示是。

#### Returns

`boolean`

#### Inherited from

[TWindowBase](TWindowBase.md).[isKeyboard](TWindowBase.md#iskeyboard)

#### Defined in

[awtk.ts:11570](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11570)

___

### isNormalWindow

▸ **isNormalWindow**(): `boolean`

检查控件是否是普通窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[TWindowBase](TWindowBase.md).[isNormalWindow](TWindowBase.md#isnormalwindow)

#### Defined in

[awtk.ts:11503](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11503)

___

### isOpenedDialog

▸ **isOpenedDialog**(): `boolean`

检查控件弹出对话框控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[TWindowBase](TWindowBase.md).[isOpenedDialog](TWindowBase.md#isopeneddialog)

#### Defined in

[awtk.ts:11547](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11547)

___

### isOpenedPopup

▸ **isOpenedPopup**(): `boolean`

检查控件弹出窗口控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[TWindowBase](TWindowBase.md).[isOpenedPopup](TWindowBase.md#isopenedpopup)

#### Defined in

[awtk.ts:11558](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11558)

___

### isOverlay

▸ **isOverlay**(): `boolean`

检查控件是否是overlay窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[TWindowBase](TWindowBase.md).[isOverlay](TWindowBase.md#isoverlay)

#### Defined in

[awtk.ts:11536](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11536)

___

### isParentOf

▸ **isParentOf**(`child`): `boolean`

判断当前控件是否是指定控件的父控件(包括非直系)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `child` | [`TWidget`](TWidget.md) | 控件对象。 |

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Inherited from

[TWindowBase](TWindowBase.md).[isParentOf](TWindowBase.md#isparentof)

#### Defined in

[awtk.ts:11458](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11458)

___

### isPopup

▸ **isPopup**(): `boolean`

检查控件是否是弹出窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[TWindowBase](TWindowBase.md).[isPopup](TWindowBase.md#ispopup)

#### Defined in

[awtk.ts:11525](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11525)

___

### isStyleExist

▸ **isStyleExist**(`style_name`, `state_name`): `boolean`

查询指定的style是否存在。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `style_name` | `string` | style的名称（如果为 NULL，则默认为 default）。 |
| `state_name` | `string` | state的名称（如果为 NULL，则默认为 normal）。 |

#### Returns

`boolean`

存在返回 TRUE，不存在返回 FALSE。

#### Inherited from

[TWindowBase](TWindowBase.md).[isStyleExist](TWindowBase.md#isstyleexist)

#### Defined in

[awtk.ts:10637](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10637)

___

### isSystemBar

▸ **isSystemBar**(): `boolean`

检查控件是否是system bar类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[TWindowBase](TWindowBase.md).[isSystemBar](TWindowBase.md#issystembar)

#### Defined in

[awtk.ts:11492](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11492)

___

### isWindow

▸ **isWindow**(): `boolean`

判断当前控件是否是窗口。

#### Returns

`boolean`

返回当前控件是否是窗口。

#### Inherited from

[TWindowBase](TWindowBase.md).[isWindow](TWindowBase.md#iswindow)

#### Defined in

[awtk.ts:11481](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11481)

___

### isWindowCreated

▸ **isWindowCreated**(): `boolean`

判断窗口及子控件创建或加载是否完成。

#### Returns

`boolean`

返回创建或加载是否完成。

#### Inherited from

[TWindowBase](TWindowBase.md).[isWindowCreated](TWindowBase.md#iswindowcreated)

#### Defined in

[awtk.ts:11446](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11446)

___

### isWindowManager

▸ **isWindowManager**(): `boolean`

判断当前控件是否是窗口管理器。

#### Returns

`boolean`

返回当前控件是否是窗口管理器。

#### Inherited from

[TWindowBase](TWindowBase.md).[isWindowManager](TWindowBase.md#iswindowmanager)

#### Defined in

[awtk.ts:11592](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11592)

___

### isWindowOpened

▸ **isWindowOpened**(): `boolean`

判断当前控件所在的窗口是否已经打开。

#### Returns

`boolean`

返回当前控件所在的窗口是否已经打开。

#### Inherited from

[TWindowBase](TWindowBase.md).[isWindowOpened](TWindowBase.md#iswindowopened)

#### Defined in

[awtk.ts:11435](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11435)

___

### layout

▸ **layout**(): [`TRet`](../enums/TRet.md)

布局当前控件及子控件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[layout](TWindowBase.md#layout)

#### Defined in

[awtk.ts:11870](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11870)

___

### lookup

▸ **lookup**(`name`, `recursive`): [`TWidget`](TWidget.md)

查找指定名称的子控件(返回第一个)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 子控件的名称。 |
| `recursive` | `boolean` | 是否递归查找全部子控件。 |

#### Returns

[`TWidget`](TWidget.md)

子控件或NULL。

#### Inherited from

[TWindowBase](TWindowBase.md).[lookup](TWindowBase.md#lookup)

#### Defined in

[awtk.ts:11192](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11192)

___

### lookupByType

▸ **lookupByType**(`type`, `recursive`): [`TWidget`](TWidget.md)

查找指定类型的子控件(返回第一个)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `type` | `string` | 子控件的名称。 |
| `recursive` | `boolean` | 是否递归查找全部子控件。 |

#### Returns

[`TWidget`](TWidget.md)

子控件或NULL。

#### Inherited from

[TWindowBase](TWindowBase.md).[lookupByType](TWindowBase.md#lookupbytype)

#### Defined in

[awtk.ts:11205](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11205)

___

### move

▸ **move**(`x`, `y`): [`TRet`](../enums/TRet.md)

移动控件。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标 |
| `y` | `number` | y坐标 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[move](TWindowBase.md#move)

#### Defined in

[awtk.ts:10481](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10481)

___

### moveResize

▸ **moveResize**(`x`, `y`, `w`, `h`): [`TRet`](../enums/TRet.md)

移动控件并调整控件的大小。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标 |
| `y` | `number` | y坐标 |
| `w` | `number` | 宽度 |
| `h` | `number` | 高度 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[moveResize](TWindowBase.md#moveresize)

#### Defined in

[awtk.ts:10520](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10520)

___

### moveResizeEx

▸ **moveResizeEx**(`x`, `y`, `w`, `h`, `update_layout`): [`TRet`](../enums/TRet.md)

移动控件并调整控件的大小。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `number` | x坐标 |
| `y` | `number` | y坐标 |
| `w` | `number` | 宽度 |
| `h` | `number` | 高度 |
| `update_layout` | `boolean` | 是否更新布局 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[moveResizeEx](TWindowBase.md#moveresizeex)

#### Defined in

[awtk.ts:10536](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10536)

___

### moveToCenter

▸ **moveToCenter**(): [`TRet`](../enums/TRet.md)

移动控件到父控件中间。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[moveToCenter](TWindowBase.md#movetocenter)

#### Defined in

[awtk.ts:10492](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10492)

___

### off

▸ **off**(`id`): [`TRet`](../enums/TRet.md)

注销指定事件的处理函数。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `id` | `number` | widget_on返回的ID。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[off](TWindowBase.md#off)

#### Defined in

[awtk.ts:11270](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11270)

___

### on

▸ **on**(`type`, `on_event`, `ctx`): `number`

widget_t* ok = button_create(win, 10, 10, 80, 30);
widget_on(ok, EVT_CLICK, on_click, NULL);

```

@param type 事件类型。
@param on_event 事件处理函数。
@param ctx 事件处理函数上下文。

@returns 返回id，用于widget_off。

#### Parameters

| Name | Type |
| :------ | :------ |
| `type` | `number` |
| `on_event` | `Function` |
| `ctx` | `any` |

#### Returns

`number`

#### Inherited from

[TWindowBase](TWindowBase.md).[on](TWindowBase.md#on)

#### Defined in

[awtk.ts:11258](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11258)

___

### pauseAnimator

▸ **pauseAnimator**(`name`): [`TRet`](../enums/TRet.md)

暂停动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，暂停所有名称为name的动画。
* 2.name为NULL时，暂停所有widget相关的动画。
* 3.widget和name均为NULL，暂停所有动画。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 动画名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[pauseAnimator](TWindowBase.md#pauseanimator)

#### Defined in

[awtk.ts:10962](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10962)

___

### removeChild

▸ **removeChild**(`child`): [`TRet`](../enums/TRet.md)

移出指定的子控件(并不销毁)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `child` | [`TWidget`](TWidget.md) | 子控件对象。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[removeChild](TWindowBase.md#removechild)

#### Defined in

[awtk.ts:11142](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11142)

___

### resize

▸ **resize**(`w`, `h`): [`TRet`](../enums/TRet.md)

调整控件的大小。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `w` | `number` | 宽度 |
| `h` | `number` | 高度 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[resize](TWindowBase.md#resize)

#### Defined in

[awtk.ts:10505](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10505)

___

### restack

▸ **restack**(`index`): [`TRet`](../enums/TRet.md)

调整控件在父控件中的位置序数。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `index` | `number` | 位置序数(大于等于总个数，则放到最后)。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[restack](TWindowBase.md#restack)

#### Defined in

[awtk.ts:11167](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11167)

___

### setAnimation

▸ **setAnimation**(`animation`): [`TRet`](../enums/TRet.md)

设置控件的动画参数(仅用于在UI文件使用)。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `animation` | `string` | 动画参数。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setAnimation](TWindowBase.md#setanimation)

#### Defined in

[awtk.ts:10894](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10894)

___

### setAnimatorTimeScale

▸ **setAnimatorTimeScale**(`name`, `time_scale`): [`TRet`](../enums/TRet.md)

设置动画的时间倍率，<0: 时间倒退，<1: 时间变慢，>1 时间变快。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，设置所有名称为name的动画的时间倍率。
* 2.name为NULL时，设置所有widget相关的动画的时间倍率。
* 3.widget和name均为NULL，设置所有动画的时间倍率。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 动画名称。 |
| `time_scale` | `number` | 时间倍率。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setAnimatorTimeScale](TWindowBase.md#setanimatortimescale)

#### Defined in

[awtk.ts:10945](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10945)

___

### setAsKeyTarget

▸ **setAsKeyTarget**(): [`TRet`](../enums/TRet.md)

递归的把父控件的key_target设置为自己。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setAsKeyTarget](TWindowBase.md#setaskeytarget)

#### Defined in

[awtk.ts:11820](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11820)

___

### setAutoAdjustSize

▸ **setAutoAdjustSize**(`auto_adjust_size`): [`TRet`](../enums/TRet.md)

设置控件是否根据子控件和文本自动调整控件自身大小。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `auto_adjust_size` | `boolean` | 是否根据子控件和文本自动调整控件自身大小。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setAutoAdjustSize](TWindowBase.md#setautoadjustsize)

#### Defined in

[awtk.ts:11032](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11032)

___

### setAutoScaleChildren

▸ **setAutoScaleChildren**(`design_w`, `design_h`): [`TRet`](../enums/TRet.md)

当设计分辨率和实际分辨率不一致时，自动调整子控件的位置和大小。

> 当子控件有self_layout参数或者子控件的父控件有children_layout参数时，不会自动调整。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `design_w` | `number` | 设计时宽度。 |
| `design_h` | `number` | 设计时高度。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26950](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L26950)

___

### setChildText

▸ **setChildText**(`name`, `text`): [`TRet`](../enums/TRet.md)

设置子控件的文本。
只是对widget\_set\_prop的包装，文本的意义由子类控件决定。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 子控件的名称。 |
| `text` | `string` | 文本。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setChildText](TWindowBase.md#setchildtext)

#### Defined in

[awtk.ts:10688](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10688)

___

### setChildTextWithDouble

▸ **setChildTextWithDouble**(`name`, `format`, `value`): [`TRet`](../enums/TRet.md)

用一个浮点数去设置子控件的文本。
只是对widget\_set\_prop的包装，文本的意义由子类控件决定。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 子控件的名称。 |
| `format` | `string` | 格式字符串(如："%2.2lf")。 |
| `value` | `any` | 浮点数值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setChildTextWithDouble](TWindowBase.md#setchildtextwithdouble)

#### Defined in

[awtk.ts:10703](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10703)

___

### setChildTextWithInt

▸ **setChildTextWithInt**(`name`, `format`, `value`): [`TRet`](../enums/TRet.md)

用一个整数去设置子控件的文本。
只是对widget\_set\_prop的包装，文本的意义由子类控件决定。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 子控件的名称。 |
| `format` | `string` | 格式字符串(如："%d")。 |
| `value` | `any` | 值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setChildTextWithInt](TWindowBase.md#setchildtextwithint)

#### Defined in

[awtk.ts:10718](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10718)

___

### setChildrenLayout

▸ **setChildrenLayout**(`params`): [`TRet`](../enums/TRet.md)

设置子控件的布局参数。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `params` | `string` | 布局参数。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setChildrenLayout](TWindowBase.md#setchildrenlayout)

#### Defined in

[awtk.ts:11894](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11894)

___

### setDirtyRectTolerance

▸ **setDirtyRectTolerance**(`dirty_rect_tolerance`): [`TRet`](../enums/TRet.md)

设置控件脏矩形超出控件本身大小的最大范围(一般不用指定)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `dirty_rect_tolerance` | `number` | 控件脏脏矩形超出控件本身大小的最大范。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setDirtyRectTolerance](TWindowBase.md#setdirtyrecttolerance)

#### Defined in

[awtk.ts:11107](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11107)

___

### setEnable

▸ **setEnable**(`enable`): [`TRet`](../enums/TRet.md)

设置控件的可用性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `enable` | `boolean` | 是否可用性。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setEnable](TWindowBase.md#setenable)

#### Defined in

[awtk.ts:11008](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11008)

___

### setFeedback

▸ **setFeedback**(`feedback`): [`TRet`](../enums/TRet.md)

设置控件是否启用反馈。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `feedback` | `boolean` | 是否启用反馈。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setFeedback](TWindowBase.md#setfeedback)

#### Defined in

[awtk.ts:11020](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11020)

___

### setFloating

▸ **setFloating**(`floating`): [`TRet`](../enums/TRet.md)

设置控件的floating标志。
> floating的控件不受父控件的子控件布局参数的影响。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `floating` | `boolean` | 是否启用floating布局。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setFloating](TWindowBase.md#setfloating)

#### Defined in

[awtk.ts:11045](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11045)

___

### setFocusable

▸ **setFocusable**(`focusable`): [`TRet`](../enums/TRet.md)

设置控件是否可获得焦点。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `focusable` | `boolean` | 是否可获得焦点。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setFocusable](TWindowBase.md#setfocusable)

#### Defined in

[awtk.ts:11069](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11069)

___

### setFocused

▸ **setFocused**(`focused`): [`TRet`](../enums/TRet.md)

设置控件是否获得焦点。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `focused` | `boolean` | 是否获得焦点。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setFocused](TWindowBase.md#setfocused)

#### Defined in

[awtk.ts:11057](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11057)

___

### setFullscreen

▸ **setFullscreen**(`fullscreen`): [`TRet`](../enums/TRet.md)

设置为全屏窗口。

>如果app_type是SIMULATOR，全屏是指与LCD相同大小，而非让SDL窗口全屏。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `fullscreen` | `boolean` | 是否全屏。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:26935](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L26935)

___

### setName

▸ **setName**(`name`): [`TRet`](../enums/TRet.md)

设置控件的名称。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setName](TWindowBase.md#setname)

#### Defined in

[awtk.ts:10846](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10846)

___

### setOpacity

▸ **setOpacity**(`opacity`): [`TRet`](../enums/TRet.md)

设置控件的不透明度。

>在嵌入式平台，半透明效果会使性能大幅下降，请谨慎使用。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `opacity` | `number` | 不透明度(取值0-255，0表示完全透明，255表示完全不透明)。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setOpacity](TWindowBase.md#setopacity)

#### Defined in

[awtk.ts:11095](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11095)

___

### setPointerCursor

▸ **setPointerCursor**(`cursor`): [`TRet`](../enums/TRet.md)

设置鼠标指针的图片名。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `cursor` | `string` | 图片名称(无扩展名)。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setPointerCursor](TWindowBase.md#setpointercursor)

#### Defined in

[awtk.ts:10881](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10881)

___

### setPropBool

▸ **setPropBool**(`name`, `v`): [`TRet`](../enums/TRet.md)

设置布尔格式的属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `v` | `boolean` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setPropBool](TWindowBase.md#setpropbool)

#### Defined in

[awtk.ts:11411](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11411)

___

### setPropFloat

▸ **setPropFloat**(`name`, `v`): [`TRet`](../enums/TRet.md)

设置浮点数格式的属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `v` | `number` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setPropFloat](TWindowBase.md#setpropfloat)

#### Defined in

[awtk.ts:11359](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11359)

___

### setPropInt

▸ **setPropInt**(`name`, `v`): [`TRet`](../enums/TRet.md)

设置整数格式的属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `v` | `number` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setPropInt](TWindowBase.md#setpropint)

#### Defined in

[awtk.ts:11385](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11385)

___

### setPropPointer

▸ **setPropPointer**(`name`, `v`): [`TRet`](../enums/TRet.md)

设置指针格式的属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `v` | `any` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setPropPointer](TWindowBase.md#setproppointer)

#### Defined in

[awtk.ts:11334](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11334)

___

### setPropStr

▸ **setPropStr**(`name`, `v`): [`TRet`](../enums/TRet.md)

设置字符串格式的属性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 属性的名称。 |
| `v` | `string` | 属性的值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setPropStr](TWindowBase.md#setpropstr)

#### Defined in

[awtk.ts:11308](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11308)

___

### setProps

▸ **setProps**(`params`): [`TRet`](../enums/TRet.md)

设置多个参数。
>参数之间用&分隔，名称和值之间用=分隔。如: name=awtk&min=10&max=100

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `params` | `string` | 参数列表。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setProps](TWindowBase.md#setprops)

#### Defined in

[awtk.ts:11295](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11295)

___

### setSelfLayout

▸ **setSelfLayout**(`params`): [`TRet`](../enums/TRet.md)

设置控件自己的布局参数。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `params` | `string` | 布局参数。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setSelfLayout](TWindowBase.md#setselflayout)

#### Defined in

[awtk.ts:11882](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11882)

___

### setSelfLayoutParams

▸ **setSelfLayoutParams**(`x`, `y`, `w`, `h`): [`TRet`](../enums/TRet.md)

设置控件自己的布局(缺省布局器)参数(过时，请用widget\_set\_self\_layout)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `x` | `string` | x参数。 |
| `y` | `string` | y参数。 |
| `w` | `string` | w参数。 |
| `h` | `string` | h参数。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setSelfLayoutParams](TWindowBase.md#setselflayoutparams)

#### Defined in

[awtk.ts:11909](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11909)

___

### setSensitive

▸ **setSensitive**(`sensitive`): [`TRet`](../enums/TRet.md)

设置控件是否接受用户事件。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `sensitive` | `boolean` | 是否接受用户事件。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setSensitive](TWindowBase.md#setsensitive)

#### Defined in

[awtk.ts:11241](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11241)

___

### setState

▸ **setState**(`state`): [`TRet`](../enums/TRet.md)

设置控件的状态。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `state` | `string` | 状态(必须为真正的常量字符串，在widget的整个生命周期有效)。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setState](TWindowBase.md#setstate)

#### Defined in

[awtk.ts:11081](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11081)

___

### setStyleColor

▸ **setStyleColor**(`state_and_name`, `value`): [`TRet`](../enums/TRet.md)

widget_set_style_color(label, "normal:bg_color", 0xFF332211);
```

@param state_and_name 状态和名字，用英文的冒号分隔。
@param value 值。颜色值一般用十六进制表示，每两个数字表示一个颜色通道，从高位到低位，依次是ABGR。

@returns 返回RET_OK表示成功，否则表示失败。

#### Parameters

| Name | Type |
| :------ | :------ |
| `state_and_name` | `string` |
| `value` | `any` |

#### Returns

[`TRet`](../enums/TRet.md)

#### Inherited from

[TWindowBase](TWindowBase.md).[setStyleColor](TWindowBase.md#setstylecolor)

#### Defined in

[awtk.ts:11955](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11955)

___

### setStyleInt

▸ **setStyleInt**(`state_and_name`, `value`): [`TRet`](../enums/TRet.md)

设置整数类型的style。

> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `state_and_name` | `string` | 状态和名字，用英文的冒号分隔。 |
| `value` | `any` | 值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setStyleInt](TWindowBase.md#setstyleint)

#### Defined in

[awtk.ts:11925](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11925)

___

### setStyleStr

▸ **setStyleStr**(`state_and_name`, `value`): [`TRet`](../enums/TRet.md)

设置字符串类型的style。

> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `state_and_name` | `string` | 状态和名字，用英文的冒号分隔。 |
| `value` | `string` | 值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setStyleStr](TWindowBase.md#setstylestr)

#### Defined in

[awtk.ts:11941](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11941)

___

### setText

▸ **setText**(`text`): [`TRet`](../enums/TRet.md)

设置控件的文本。（如果字符串相同，则不会重复设置以及触发事件）

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `text` | `string` | 文本。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setText](TWindowBase.md#settext)

#### Defined in

[awtk.ts:10661](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10661)

___

### setTextEx

▸ **setTextEx**(`text`, `check_diff`): [`TRet`](../enums/TRet.md)

设置控件的文本。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `text` | `string` | 文本。 |
| `check_diff` | `boolean` | 是否检查设置的文本是否和控件中的文本一样。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setTextEx](TWindowBase.md#settextex)

#### Defined in

[awtk.ts:10674](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10674)

___

### setTheme

▸ **setTheme**(`name`): [`TRet`](../enums/TRet.md)

设置theme的名称，用于动态切换主题。名称与当前主题名称相同，则重新加载全部资源。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 主题的名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setTheme](TWindowBase.md#settheme)

#### Defined in

[awtk.ts:10858](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10858)

___

### setTrText

▸ **setTrText**(`text`): [`TRet`](../enums/TRet.md)

获取翻译之后的文本，然后调用widget_set_text。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `text` | `string` | 文本。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setTrText](TWindowBase.md#settrtext)

#### Defined in

[awtk.ts:10730](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10730)

___

### setValue

▸ **setValue**(`value`): [`TRet`](../enums/TRet.md)

设置控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setValue](TWindowBase.md#setvalue)

#### Defined in

[awtk.ts:10560](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10560)

___

### setValueInt

▸ **setValueInt**(`value`): [`TRet`](../enums/TRet.md)

设置控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setValueInt](TWindowBase.md#setvalueint)

#### Defined in

[awtk.ts:10597](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10597)

___

### setVisible

▸ **setVisible**(`visible`): [`TRet`](../enums/TRet.md)

设置控件的可见性。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `visible` | `boolean` | 是否可见。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setVisible](TWindowBase.md#setvisible)

#### Defined in

[awtk.ts:11217](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11217)

___

### setVisibleOnly

▸ **setVisibleOnly**(`visible`): [`TRet`](../enums/TRet.md)

设置控件的可见性(不触发repaint和relayout)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `visible` | `boolean` | 是否可见。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[setVisibleOnly](TWindowBase.md#setvisibleonly)

#### Defined in

[awtk.ts:11229](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11229)

___

### startAnimator

▸ **startAnimator**(`name`): [`TRet`](../enums/TRet.md)

播放动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，播放所有名称为name的动画。
* 2.name为NULL时，播放所有widget相关的动画。
* 3.widget和name均为NULL，播放所有动画。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 动画名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[startAnimator](TWindowBase.md#startanimator)

#### Defined in

[awtk.ts:10927](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10927)

___

### stopAnimator

▸ **stopAnimator**(`name`): [`TRet`](../enums/TRet.md)

停止动画(控件的相应属性回归原位)。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，停止所有名称为name的动画。
* 2.name为NULL时，停止所有widget相关的动画。
* 3.widget和name均为NULL，停止所有动画。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 动画名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[stopAnimator](TWindowBase.md#stopanimator)

#### Defined in

[awtk.ts:10979](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10979)

___

### strokeBorderRect

▸ **strokeBorderRect**(`c`, `r`): [`TRet`](../enums/TRet.md)

根据控件的style绘制边框矩形。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `c` | [`TCanvas`](TCanvas.md) | 画布对象。 |
| `r` | [`TRect`](TRect.md) | 矩形区域。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[strokeBorderRect](TWindowBase.md#strokeborderrect)

#### Defined in

[awtk.ts:11724](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11724)

___

### unref

▸ **unref**(): [`TRet`](../enums/TRet.md)

减少控件的引用计数。引用计数为0时销毁控件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[unref](TWindowBase.md#unref)

#### Defined in

[awtk.ts:11711](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11711)

___

### updateStyle

▸ **updateStyle**(): [`TRet`](../enums/TRet.md)

让控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[updateStyle](TWindowBase.md#updatestyle)

#### Defined in

[awtk.ts:11798](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11798)

___

### updateStyleRecursive

▸ **updateStyleRecursive**(): [`TRet`](../enums/TRet.md)

让控件及子控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[updateStyleRecursive](TWindowBase.md#updatestylerecursive)

#### Defined in

[awtk.ts:11809](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L11809)

___

### useStyle

▸ **useStyle**(`style`): [`TRet`](../enums/TRet.md)

启用指定的style。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `style` | `string` | style的名称。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWindowBase](TWindowBase.md).[useStyle](TWindowBase.md#usestyle)

#### Defined in

[awtk.ts:10649](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L10649)

___

### cast

▸ `Static` **cast**(`widget`): [`TWindow`](TWindow.md)

转换为window对象(供脚本语言使用)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `widget` | [`TWidget`](TWidget.md) | window对象。 |

#### Returns

[`TWindow`](TWindow.md)

window对象。

#### Overrides

[TWindowBase](TWindowBase.md).[cast](TWindowBase.md#cast)

#### Defined in

[awtk.ts:27009](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L27009)

___

### create

▸ `Static` **create**(`parent`, `x`, `y`, `w`, `h`): [`TWindow`](TWindow.md)

创建window对象

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `parent` | [`TWidget`](TWidget.md) | 父控件 |
| `x` | `number` | x坐标 |
| `y` | `number` | y坐标 |
| `w` | `number` | 宽度 |
| `h` | `number` | 高度 |

#### Returns

[`TWindow`](TWindow.md)

对象。

#### Defined in

[awtk.ts:26910](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L26910)

___

### createDefault

▸ `Static` **createDefault**(): [`TWindow`](TWindow.md)

以缺省的方式创建window对象。

#### Returns

[`TWindow`](TWindow.md)

对象。

#### Defined in

[awtk.ts:26921](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L26921)

___

### open

▸ `Static` **open**(`name`): [`TWindow`](TWindow.md)

从资源文件中加载并创建window_base对象。本函数在ui_loader/ui_builder_default里实现。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | window的名称。 |

#### Returns

[`TWindow`](TWindow.md)

对象。

#### Defined in

[awtk.ts:26962](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L26962)

___

### openAndClose

▸ `Static` **openAndClose**(`name`, `to_close`): [`TWindow`](TWindow.md)

从资源文件中加载并创建window对象。本函数在ui_loader/ui_builder_default里实现。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | window的名称。 |
| `to_close` | [`TWidget`](TWidget.md) | 关闭该窗口。 |

#### Returns

[`TWindow`](TWindow.md)

对象。

#### Defined in

[awtk.ts:26975](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L26975)
