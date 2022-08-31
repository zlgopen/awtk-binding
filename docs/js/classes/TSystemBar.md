[AWTK](../README.md) / [Exports](../modules.md) / TSystemBar

# Class: TSystemBar

system\_bar窗口。

system\_bar窗口是一种特殊的窗口，独占LCD顶部区域，用来显示当前窗口的标题和关闭按钮等内容。

> system\_bar窗口需要在打开第一个应用程序窗口之前打开。

system_bar对两个子控件会做特殊处理：

* 1.名为"title"的label控件，自动显示当前主窗口的name或text。
* 2.名为"close"的button控件，点击之后向当前主窗口发送EVT\_REQUEST\_CLOSE\_WINDOW消息。

system\_bar\_t是[window\_base\_t](window_base_t.md)的子类控件，
window\_base\_t的函数均适用于system\_bar\_t控件。

在xml中使用"system\_bar"标签创建system\_bar窗口。如：

```xml
<system_bar h="30">
<column x="0" y="0" w="-40" h="100%">
<label style="title" x="10" y="m" w="55%" h="100%" name="title"/>
<digit_clock style="time" x="r" y="m" w="40%" h="100%" format="hh:mm"/>
</column>
<button style="close" x="r:5" y="m" w="26" h="26" name="close" text="x"/>
</system_bar>
```

> 更多用法请参考：
[system_bar](https://github.com/zlgopen/awtk/blob/master/design/default/ui/system_bar.xml)

在c代码中使用函数system\_bar\_create创建system\_bar窗口。如：

> 创建之后，和使用普通窗口是一样的。

可用通过style来设置控件的显示风格，如背景颜色等等。如：

```xml
<system_bar>
<style name="default">
<normal bg_color="#a0a0a0"/>
</style>
</system_bar>
```

> 更多用法请参考：
[system_bar.xml](https://github.com/zlgopen/awtk/blob/master/design/default/styles/system_bar.xml)

## Hierarchy

- [`TWindowBase`](TWindowBase.md)

  ↳ **`TSystemBar`**

## Table of contents

### Constructors

- [constructor](TSystemBar.md#constructor)

### Properties

- [nativeObj](TSystemBar.md#nativeobj)

### Accessors

- [animation](TSystemBar.md#animation)
- [appletName](TSystemBar.md#appletname)
- [autoAdjustSize](TSystemBar.md#autoadjustsize)
- [autoScaleChildrenH](TSystemBar.md#autoscalechildrenh)
- [autoScaleChildrenW](TSystemBar.md#autoscalechildrenw)
- [autoScaleChildrenX](TSystemBar.md#autoscalechildrenx)
- [autoScaleChildrenY](TSystemBar.md#autoscalechildreny)
- [closable](TSystemBar.md#closable)
- [closeAnimHint](TSystemBar.md#closeanimhint)
- [designH](TSystemBar.md#designh)
- [designW](TSystemBar.md#designw)
- [dirtyRectTolerance](TSystemBar.md#dirtyrecttolerance)
- [disableAnim](TSystemBar.md#disableanim)
- [enable](TSystemBar.md#enable)
- [feedback](TSystemBar.md#feedback)
- [floating](TSystemBar.md#floating)
- [focusable](TSystemBar.md#focusable)
- [h](TSystemBar.md#h)
- [moveFocusDownKey](TSystemBar.md#movefocusdownkey)
- [moveFocusLeftKey](TSystemBar.md#movefocusleftkey)
- [moveFocusNextKey](TSystemBar.md#movefocusnextkey)
- [moveFocusPrevKey](TSystemBar.md#movefocusprevkey)
- [moveFocusRightKey](TSystemBar.md#movefocusrightkey)
- [moveFocusUpKey](TSystemBar.md#movefocusupkey)
- [name](TSystemBar.md#name)
- [opacity](TSystemBar.md#opacity)
- [openAnimHint](TSystemBar.md#openanimhint)
- [parent](TSystemBar.md#parent)
- [pointerCursor](TSystemBar.md#pointercursor)
- [sensitive](TSystemBar.md#sensitive)
- [singleInstance](TSystemBar.md#singleinstance)
- [stronglyFocus](TSystemBar.md#stronglyfocus)
- [style](TSystemBar.md#style)
- [theme](TSystemBar.md#theme)
- [trText](TSystemBar.md#trtext)
- [visible](TSystemBar.md#visible)
- [w](TSystemBar.md#w)
- [withFocusState](TSystemBar.md#withfocusstate)
- [x](TSystemBar.md#x)
- [y](TSystemBar.md#y)

### Methods

- [addChild](TSystemBar.md#addchild)
- [addChildDefault](TSystemBar.md#addchilddefault)
- [addValue](TSystemBar.md#addvalue)
- [addValueInt](TSystemBar.md#addvalueint)
- [animateValueTo](TSystemBar.md#animatevalueto)
- [back](TSystemBar.md#back)
- [backToHome](TSystemBar.md#backtohome)
- [child](TSystemBar.md#child)
- [clone](TSystemBar.md#clone)
- [closeWindow](TSystemBar.md#closewindow)
- [closeWindowForce](TSystemBar.md#closewindowforce)
- [countChildren](TSystemBar.md#countchildren)
- [createAnimator](TSystemBar.md#createanimator)
- [destroy](TSystemBar.md#destroy)
- [destroyAnimator](TSystemBar.md#destroyanimator)
- [destroyAsync](TSystemBar.md#destroyasync)
- [destroyChildren](TSystemBar.md#destroychildren)
- [dispatchToKeyTarget](TSystemBar.md#dispatchtokeytarget)
- [dispatchToTarget](TSystemBar.md#dispatchtotarget)
- [equal](TSystemBar.md#equal)
- [fillBgRect](TSystemBar.md#fillbgrect)
- [fillFgRect](TSystemBar.md#fillfgrect)
- [findParentByName](TSystemBar.md#findparentbyname)
- [findParentByType](TSystemBar.md#findparentbytype)
- [focusNext](TSystemBar.md#focusnext)
- [focusPrev](TSystemBar.md#focusprev)
- [foreach](TSystemBar.md#foreach)
- [getAutoAdjustSize](TSystemBar.md#getautoadjustsize)
- [getChild](TSystemBar.md#getchild)
- [getEnable](TSystemBar.md#getenable)
- [getFeedback](TSystemBar.md#getfeedback)
- [getFloating](TSystemBar.md#getfloating)
- [getFocusable](TSystemBar.md#getfocusable)
- [getFocusedWidget](TSystemBar.md#getfocusedwidget)
- [getNativeWindow](TSystemBar.md#getnativewindow)
- [getPropBool](TSystemBar.md#getpropbool)
- [getPropFloat](TSystemBar.md#getpropfloat)
- [getPropInt](TSystemBar.md#getpropint)
- [getPropPointer](TSystemBar.md#getproppointer)
- [getPropStr](TSystemBar.md#getpropstr)
- [getSensitive](TSystemBar.md#getsensitive)
- [getStateForStyle](TSystemBar.md#getstateforstyle)
- [getStyleType](TSystemBar.md#getstyletype)
- [getText](TSystemBar.md#gettext)
- [getThemeName](TSystemBar.md#getthemename)
- [getType](TSystemBar.md#gettype)
- [getValue](TSystemBar.md#getvalue)
- [getValueInt](TSystemBar.md#getvalueint)
- [getVisible](TSystemBar.md#getvisible)
- [getWindow](TSystemBar.md#getwindow)
- [getWindowManager](TSystemBar.md#getwindowmanager)
- [getWithFocusState](TSystemBar.md#getwithfocusstate)
- [indexOf](TSystemBar.md#indexof)
- [insertChild](TSystemBar.md#insertchild)
- [invalidateForce](TSystemBar.md#invalidateforce)
- [isDesigningWindow](TSystemBar.md#isdesigningwindow)
- [isDialog](TSystemBar.md#isdialog)
- [isDirectParentOf](TSystemBar.md#isdirectparentof)
- [isKeyboard](TSystemBar.md#iskeyboard)
- [isNormalWindow](TSystemBar.md#isnormalwindow)
- [isOpenedDialog](TSystemBar.md#isopeneddialog)
- [isOpenedPopup](TSystemBar.md#isopenedpopup)
- [isOverlay](TSystemBar.md#isoverlay)
- [isParentOf](TSystemBar.md#isparentof)
- [isPopup](TSystemBar.md#ispopup)
- [isStyleExist](TSystemBar.md#isstyleexist)
- [isSystemBar](TSystemBar.md#issystembar)
- [isWindow](TSystemBar.md#iswindow)
- [isWindowCreated](TSystemBar.md#iswindowcreated)
- [isWindowManager](TSystemBar.md#iswindowmanager)
- [isWindowOpened](TSystemBar.md#iswindowopened)
- [layout](TSystemBar.md#layout)
- [lookup](TSystemBar.md#lookup)
- [lookupByType](TSystemBar.md#lookupbytype)
- [move](TSystemBar.md#move)
- [moveResize](TSystemBar.md#moveresize)
- [moveToCenter](TSystemBar.md#movetocenter)
- [off](TSystemBar.md#off)
- [on](TSystemBar.md#on)
- [pauseAnimator](TSystemBar.md#pauseanimator)
- [removeChild](TSystemBar.md#removechild)
- [resize](TSystemBar.md#resize)
- [restack](TSystemBar.md#restack)
- [setAnimation](TSystemBar.md#setanimation)
- [setAnimatorTimeScale](TSystemBar.md#setanimatortimescale)
- [setAsKeyTarget](TSystemBar.md#setaskeytarget)
- [setAutoAdjustSize](TSystemBar.md#setautoadjustsize)
- [setChildText](TSystemBar.md#setchildtext)
- [setChildTextWithDouble](TSystemBar.md#setchildtextwithdouble)
- [setChildTextWithInt](TSystemBar.md#setchildtextwithint)
- [setChildrenLayout](TSystemBar.md#setchildrenlayout)
- [setDirtyRectTolerance](TSystemBar.md#setdirtyrecttolerance)
- [setEnable](TSystemBar.md#setenable)
- [setFeedback](TSystemBar.md#setfeedback)
- [setFloating](TSystemBar.md#setfloating)
- [setFocusable](TSystemBar.md#setfocusable)
- [setFocused](TSystemBar.md#setfocused)
- [setName](TSystemBar.md#setname)
- [setOpacity](TSystemBar.md#setopacity)
- [setPointerCursor](TSystemBar.md#setpointercursor)
- [setPropBool](TSystemBar.md#setpropbool)
- [setPropFloat](TSystemBar.md#setpropfloat)
- [setPropInt](TSystemBar.md#setpropint)
- [setPropPointer](TSystemBar.md#setproppointer)
- [setPropStr](TSystemBar.md#setpropstr)
- [setProps](TSystemBar.md#setprops)
- [setSelfLayout](TSystemBar.md#setselflayout)
- [setSelfLayoutParams](TSystemBar.md#setselflayoutparams)
- [setSensitive](TSystemBar.md#setsensitive)
- [setState](TSystemBar.md#setstate)
- [setStyleColor](TSystemBar.md#setstylecolor)
- [setStyleInt](TSystemBar.md#setstyleint)
- [setStyleStr](TSystemBar.md#setstylestr)
- [setText](TSystemBar.md#settext)
- [setTextEx](TSystemBar.md#settextex)
- [setTheme](TSystemBar.md#settheme)
- [setTrText](TSystemBar.md#settrtext)
- [setValue](TSystemBar.md#setvalue)
- [setValueInt](TSystemBar.md#setvalueint)
- [setVisible](TSystemBar.md#setvisible)
- [setVisibleOnly](TSystemBar.md#setvisibleonly)
- [startAnimator](TSystemBar.md#startanimator)
- [stopAnimator](TSystemBar.md#stopanimator)
- [strokeBorderRect](TSystemBar.md#strokeborderrect)
- [unref](TSystemBar.md#unref)
- [updateStyle](TSystemBar.md#updatestyle)
- [updateStyleRecursive](TSystemBar.md#updatestylerecursive)
- [useStyle](TSystemBar.md#usestyle)
- [cast](TSystemBar.md#cast)
- [create](TSystemBar.md#create)

## Constructors

### constructor

• **new TSystemBar**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TWindowBase](TWindowBase.md).[constructor](TWindowBase.md#constructor)

#### Defined in

[awtk.ts:28310](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L28310)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TWindowBase](TWindowBase.md).[nativeObj](TWindowBase.md#nativeobj)

#### Defined in

[awtk.ts:28309](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L28309)

## Accessors

### animation

• `get` **animation**(): `string`

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

#### Returns

`string`

#### Inherited from

TWindowBase.animation

#### Defined in

[awtk.ts:11897](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11897)

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

[awtk.ts:11901](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11901)

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

[awtk.ts:15530](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15530)

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

[awtk.ts:11988](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11988)

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

[awtk.ts:11992](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11992)

___

### autoScaleChildrenH

• `get` **autoScaleChildrenH**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的高度。

#### Returns

`boolean`

#### Inherited from

TWindowBase.autoScaleChildrenH

#### Defined in

[awtk.ts:15407](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15407)

___

### autoScaleChildrenW

• `get` **autoScaleChildrenW**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的宽度。

#### Returns

`boolean`

#### Inherited from

TWindowBase.autoScaleChildrenW

#### Defined in

[awtk.ts:15398](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15398)

___

### autoScaleChildrenX

• `get` **autoScaleChildrenX**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的x坐标。

#### Returns

`boolean`

#### Inherited from

TWindowBase.autoScaleChildrenX

#### Defined in

[awtk.ts:15380](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15380)

___

### autoScaleChildrenY

• `get` **autoScaleChildrenY**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的y坐标。

#### Returns

`boolean`

#### Inherited from

TWindowBase.autoScaleChildrenY

#### Defined in

[awtk.ts:15389](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15389)

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

[awtk.ts:15433](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15433)

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

[awtk.ts:15453](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15453)

___

### designH

• `get` **designH**(): `number`

设计时高度。

#### Returns

`number`

#### Inherited from

TWindowBase.designH

#### Defined in

[awtk.ts:15371](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15371)

___

### designW

• `get` **designW**(): `number`

设计时宽度。

#### Returns

`number`

#### Inherited from

TWindowBase.designW

#### Defined in

[awtk.ts:15362](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15362)

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

[awtk.ts:12029](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12029)

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

[awtk.ts:12033](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12033)

___

### disableAnim

• `get` **disableAnim**(): `boolean`

禁用窗口动画。

#### Returns

`boolean`

#### Inherited from

TWindowBase.disableAnim

#### Defined in

[awtk.ts:15416](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15416)

___

### enable

• `get` **enable**(): `boolean`

启用/禁用状态。

#### Returns

`boolean`

#### Inherited from

TWindowBase.enable

#### Defined in

[awtk.ts:11910](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11910)

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

[awtk.ts:11914](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11914)

___

### feedback

• `get` **feedback**(): `boolean`

是否启用按键音、触屏音和震动等反馈。

#### Returns

`boolean`

#### Inherited from

TWindowBase.feedback

#### Defined in

[awtk.ts:11923](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11923)

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

[awtk.ts:11927](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11927)

___

### floating

• `get` **floating**(): `boolean`

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

#### Returns

`boolean`

#### Inherited from

TWindowBase.floating

#### Defined in

[awtk.ts:12001](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12001)

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

[awtk.ts:12005](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12005)

___

### focusable

• `get` **focusable**(): `boolean`

是否支持焦点停留。

#### Returns

`boolean`

#### Inherited from

TWindowBase.focusable

#### Defined in

[awtk.ts:11962](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11962)

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

[awtk.ts:11966](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11966)

___

### h

• `get` **h**(): `number`

高度。

#### Returns

`number`

#### Inherited from

TWindowBase.h

#### Defined in

[awtk.ts:11840](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11840)

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

[awtk.ts:15497](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15497)

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

[awtk.ts:15508](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15508)

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

[awtk.ts:15475](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15475)

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

[awtk.ts:15464](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15464)

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

[awtk.ts:15519](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15519)

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

[awtk.ts:15486](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15486)

___

### name

• `get` **name**(): `string`

控件名字。

#### Returns

`string`

#### Inherited from

TWindowBase.name

#### Defined in

[awtk.ts:11849](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11849)

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

[awtk.ts:11853](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11853)

___

### opacity

• `get` **opacity**(): `number`

不透明度(0-255)，0完全透明，255完全不透明。

#### Returns

`number`

#### Inherited from

TWindowBase.opacity

#### Defined in

[awtk.ts:12014](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12014)

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

[awtk.ts:12018](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12018)

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

[awtk.ts:15443](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15443)

___

### parent

• `get` **parent**(): [`TWidget`](TWidget.md)

父控件

#### Returns

[`TWidget`](TWidget.md)

#### Inherited from

TWindowBase.parent

#### Defined in

[awtk.ts:12042](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12042)

___

### pointerCursor

• `get` **pointerCursor**(): `string`

鼠标光标图片名称。

#### Returns

`string`

#### Inherited from

TWindowBase.pointerCursor

#### Defined in

[awtk.ts:11862](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11862)

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

[awtk.ts:11866](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11866)

___

### sensitive

• `get` **sensitive**(): `boolean`

是否接受用户事件。

#### Returns

`boolean`

#### Inherited from

TWindowBase.sensitive

#### Defined in

[awtk.ts:11949](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11949)

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

[awtk.ts:11953](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11953)

___

### singleInstance

• `get` **singleInstance**(): `boolean`

单例。如果窗口存在，先关闭再打开。

#### Returns

`boolean`

#### Inherited from

TWindowBase.singleInstance

#### Defined in

[awtk.ts:15539](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15539)

___

### stronglyFocus

• `get` **stronglyFocus**(): `boolean`

点击非focusable控件时，是否让当前焦点控件失去焦点。比如点击窗口空白区域，是否让编辑器失去焦点。

#### Returns

`boolean`

#### Inherited from

TWindowBase.stronglyFocus

#### Defined in

[awtk.ts:15548](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15548)

___

### style

• `get` **style**(): `string`

style的名称。

#### Returns

`string`

#### Inherited from

TWindowBase.style

#### Defined in

[awtk.ts:11888](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11888)

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

[awtk.ts:15353](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L15353)

___

### trText

• `get` **trText**(): `string`

保存用于翻译的字符串。

#### Returns

`string`

#### Inherited from

TWindowBase.trText

#### Defined in

[awtk.ts:11875](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11875)

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

[awtk.ts:11879](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11879)

___

### visible

• `get` **visible**(): `boolean`

是否可见。

#### Returns

`boolean`

#### Inherited from

TWindowBase.visible

#### Defined in

[awtk.ts:11936](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11936)

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

[awtk.ts:11940](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11940)

___

### w

• `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Inherited from

TWindowBase.w

#### Defined in

[awtk.ts:11831](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11831)

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

[awtk.ts:11976](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11976)

___

### x

• `get` **x**(): `number`

x坐标(相对于父控件的x坐标)。

#### Returns

`number`

#### Inherited from

TWindowBase.x

#### Defined in

[awtk.ts:11813](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11813)

___

### y

• `get` **y**(): `number`

y坐标(相对于父控件的y坐标)。

#### Returns

`number`

#### Inherited from

TWindowBase.y

#### Defined in

[awtk.ts:11822](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11822)

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

[awtk.ts:10967](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10967)

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

[awtk.ts:11804](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11804)

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

[awtk.ts:10410](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10410)

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

[awtk.ts:10447](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10447)

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

[awtk.ts:10461](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10461)

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

[awtk.ts:10310](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10310)

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

[awtk.ts:10321](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10321)

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

[awtk.ts:11016](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11016)

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

[awtk.ts:11487](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11487)

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

[awtk.ts:10288](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10288)

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

[awtk.ts:10299](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10299)

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

[awtk.ts:10208](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10208)

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

[awtk.ts:10747](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10747)

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

[awtk.ts:11524](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11524)

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

[awtk.ts:10833](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10833)

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

[awtk.ts:11537](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11537)

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

[awtk.ts:10955](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10955)

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

[awtk.ts:11613](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11613)

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

[awtk.ts:11601](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11601)

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

[awtk.ts:11499](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11499)

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

[awtk.ts:11575](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11575)

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

[awtk.ts:11589](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11589)

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

[awtk.ts:10232](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10232)

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

[awtk.ts:10244](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10244)

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

[awtk.ts:11670](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11670)

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

[awtk.ts:11683](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11683)

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

[awtk.ts:11442](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11442)

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

[awtk.ts:10600](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10600)

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

[awtk.ts:10220](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10220)

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

[awtk.ts:10578](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10578)

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

[awtk.ts:10655](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10655)

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

[awtk.ts:10589](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10589)

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

[awtk.ts:10622](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10622)

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

[awtk.ts:10255](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10255)

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

[awtk.ts:10266](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10266)

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

[awtk.ts:11261](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11261)

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

[awtk.ts:11209](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11209)

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

[awtk.ts:11235](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11235)

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

[awtk.ts:11183](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11183)

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

[awtk.ts:11158](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11158)

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

[awtk.ts:10633](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10633)

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

[awtk.ts:11696](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11696)

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

[awtk.ts:11624](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11624)

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

[awtk.ts:10671](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10671)

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

[awtk.ts:10706](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10706)

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

[awtk.ts:11475](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11475)

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

[awtk.ts:10384](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10384)

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

[awtk.ts:10421](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10421)

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

[awtk.ts:10644](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10644)

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

[awtk.ts:11453](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11453)

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

[awtk.ts:11464](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11464)

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

[awtk.ts:10611](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10611)

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

[awtk.ts:10277](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10277)

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

[awtk.ts:10992](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10992)

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

[awtk.ts:11119](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11119)

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

[awtk.ts:11418](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11418)

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

[awtk.ts:11351](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11351)

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

[awtk.ts:11307](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11307)

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

[awtk.ts:11407](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11407)

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

[awtk.ts:11340](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11340)

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

[awtk.ts:11384](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11384)

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

[awtk.ts:11395](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11395)

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

[awtk.ts:11373](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11373)

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

[awtk.ts:11295](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11295)

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

[awtk.ts:11362](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11362)

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

[awtk.ts:10474](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10474)

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

[awtk.ts:11329](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11329)

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

[awtk.ts:11318](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11318)

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

[awtk.ts:11283](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11283)

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

[awtk.ts:11429](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11429)

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

[awtk.ts:11272](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11272)

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

[awtk.ts:11707](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11707)

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

[awtk.ts:11029](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11029)

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

[awtk.ts:11042](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11042)

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

[awtk.ts:10334](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10334)

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

[awtk.ts:10373](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10373)

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

[awtk.ts:10345](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10345)

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

[awtk.ts:11107](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11107)

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
| `type` | [`TEventType`](../enums/TEventType.md) |
| `on_event` | `Function` |
| `ctx` | `any` |

#### Returns

`number`

#### Inherited from

[TWindowBase](TWindowBase.md).[on](TWindowBase.md#on)

#### Defined in

[awtk.ts:11095](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11095)

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

[awtk.ts:10799](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10799)

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

[awtk.ts:10979](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10979)

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

[awtk.ts:10358](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10358)

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

[awtk.ts:11004](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11004)

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

[awtk.ts:10731](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10731)

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

[awtk.ts:10782](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10782)

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

[awtk.ts:11657](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11657)

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

[awtk.ts:10869](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10869)

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

[awtk.ts:10525](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10525)

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

[awtk.ts:10540](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10540)

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

[awtk.ts:10555](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10555)

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

[awtk.ts:11731](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11731)

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

[awtk.ts:10944](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10944)

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

[awtk.ts:10845](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10845)

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

[awtk.ts:10857](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10857)

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

[awtk.ts:10882](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10882)

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

[awtk.ts:10906](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10906)

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

[awtk.ts:10894](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10894)

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

[awtk.ts:10683](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10683)

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

[awtk.ts:10932](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10932)

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

[awtk.ts:10718](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10718)

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

[awtk.ts:11248](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11248)

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

[awtk.ts:11196](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11196)

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

[awtk.ts:11222](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11222)

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

[awtk.ts:11171](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11171)

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

[awtk.ts:11145](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11145)

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

[awtk.ts:11132](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11132)

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

[awtk.ts:11719](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11719)

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

[awtk.ts:11746](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11746)

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

[awtk.ts:11078](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11078)

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

[awtk.ts:10918](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10918)

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

[awtk.ts:11792](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11792)

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

[awtk.ts:11762](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11762)

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

[awtk.ts:11778](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11778)

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

[awtk.ts:10498](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10498)

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

[awtk.ts:10511](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10511)

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

[awtk.ts:10695](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10695)

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

[awtk.ts:10567](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10567)

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

[awtk.ts:10397](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10397)

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

[awtk.ts:10434](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10434)

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

[awtk.ts:11054](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11054)

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

[awtk.ts:11066](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11066)

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

[awtk.ts:10764](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10764)

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

[awtk.ts:10816](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10816)

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

[awtk.ts:11561](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11561)

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

[awtk.ts:11548](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11548)

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

[awtk.ts:11635](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11635)

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

[awtk.ts:11646](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11646)

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

[awtk.ts:10486](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10486)

___

### cast

▸ `Static` **cast**(`widget`): [`TSystemBar`](TSystemBar.md)

转换为system_bar对象(供脚本语言使用)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `widget` | [`TWidget`](TWidget.md) | system_bar对象。 |

#### Returns

[`TSystemBar`](TSystemBar.md)

system_bar对象。

#### Overrides

[TWindowBase](TWindowBase.md).[cast](TWindowBase.md#cast)

#### Defined in

[awtk.ts:28338](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L28338)

___

### create

▸ `Static` **create**(`parent`, `x`, `y`, `w`, `h`): [`TSystemBar`](TSystemBar.md)

创建system_bar对象。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `parent` | [`TWidget`](TWidget.md) | 父控件 |
| `x` | `number` | x坐标 |
| `y` | `number` | y坐标 |
| `w` | `number` | 宽度 |
| `h` | `number` | 高度 |

#### Returns

[`TSystemBar`](TSystemBar.md)

system_bar对象。

#### Defined in

[awtk.ts:28326](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L28326)
