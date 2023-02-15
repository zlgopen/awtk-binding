[AWTK](../README.md) / [Exports](../modules.md) / TWindowBase

# Class: TWindowBase

窗口。

本类把窗口相关的公共行为进行抽象，放到一起方便重用。目前已知的具体实现如下图：

> 本类是一个抽象类，不能进行实例化。请在应用程序中使用具体的类，如window\_t。

## Hierarchy

- [`TWidget`](TWidget.md)

  ↳ **`TWindowBase`**

  ↳↳ [`TDialog`](TDialog.md)

  ↳↳ [`TWindow`](TWindow.md)

  ↳↳ [`TKeyboard`](TKeyboard.md)

  ↳↳ [`TCalibrationWin`](TCalibrationWin.md)

  ↳↳ [`TOverlay`](TOverlay.md)

  ↳↳ [`TPopup`](TPopup.md)

  ↳↳ [`TSystemBar`](TSystemBar.md)

## Table of contents

### Constructors

- [constructor](TWindowBase.md#constructor)

### Properties

- [nativeObj](TWindowBase.md#nativeobj)

### Accessors

- [animation](TWindowBase.md#animation)
- [appletName](TWindowBase.md#appletname)
- [autoAdjustSize](TWindowBase.md#autoadjustsize)
- [autoScaleChildrenH](TWindowBase.md#autoscalechildrenh)
- [autoScaleChildrenW](TWindowBase.md#autoscalechildrenw)
- [autoScaleChildrenX](TWindowBase.md#autoscalechildrenx)
- [autoScaleChildrenY](TWindowBase.md#autoscalechildreny)
- [closable](TWindowBase.md#closable)
- [closeAnimHint](TWindowBase.md#closeanimhint)
- [designH](TWindowBase.md#designh)
- [designW](TWindowBase.md#designw)
- [dirtyRectTolerance](TWindowBase.md#dirtyrecttolerance)
- [disableAnim](TWindowBase.md#disableanim)
- [enable](TWindowBase.md#enable)
- [feedback](TWindowBase.md#feedback)
- [floating](TWindowBase.md#floating)
- [focusable](TWindowBase.md#focusable)
- [h](TWindowBase.md#h)
- [moveFocusDownKey](TWindowBase.md#movefocusdownkey)
- [moveFocusLeftKey](TWindowBase.md#movefocusleftkey)
- [moveFocusNextKey](TWindowBase.md#movefocusnextkey)
- [moveFocusPrevKey](TWindowBase.md#movefocusprevkey)
- [moveFocusRightKey](TWindowBase.md#movefocusrightkey)
- [moveFocusUpKey](TWindowBase.md#movefocusupkey)
- [name](TWindowBase.md#name)
- [opacity](TWindowBase.md#opacity)
- [openAnimHint](TWindowBase.md#openanimhint)
- [parent](TWindowBase.md#parent)
- [pointerCursor](TWindowBase.md#pointercursor)
- [sensitive](TWindowBase.md#sensitive)
- [singleInstance](TWindowBase.md#singleinstance)
- [stronglyFocus](TWindowBase.md#stronglyfocus)
- [style](TWindowBase.md#style)
- [theme](TWindowBase.md#theme)
- [trText](TWindowBase.md#trtext)
- [visible](TWindowBase.md#visible)
- [w](TWindowBase.md#w)
- [withFocusState](TWindowBase.md#withfocusstate)
- [x](TWindowBase.md#x)
- [y](TWindowBase.md#y)

### Methods

- [addChild](TWindowBase.md#addchild)
- [addChildDefault](TWindowBase.md#addchilddefault)
- [addValue](TWindowBase.md#addvalue)
- [addValueInt](TWindowBase.md#addvalueint)
- [animateValueTo](TWindowBase.md#animatevalueto)
- [back](TWindowBase.md#back)
- [backToHome](TWindowBase.md#backtohome)
- [child](TWindowBase.md#child)
- [clone](TWindowBase.md#clone)
- [closeWindow](TWindowBase.md#closewindow)
- [closeWindowForce](TWindowBase.md#closewindowforce)
- [countChildren](TWindowBase.md#countchildren)
- [createAnimator](TWindowBase.md#createanimator)
- [destroy](TWindowBase.md#destroy)
- [destroyAnimator](TWindowBase.md#destroyanimator)
- [destroyAsync](TWindowBase.md#destroyasync)
- [destroyChildren](TWindowBase.md#destroychildren)
- [dispatchToKeyTarget](TWindowBase.md#dispatchtokeytarget)
- [dispatchToTarget](TWindowBase.md#dispatchtotarget)
- [equal](TWindowBase.md#equal)
- [fillBgRect](TWindowBase.md#fillbgrect)
- [fillFgRect](TWindowBase.md#fillfgrect)
- [findParentByName](TWindowBase.md#findparentbyname)
- [findParentByType](TWindowBase.md#findparentbytype)
- [focusNext](TWindowBase.md#focusnext)
- [focusPrev](TWindowBase.md#focusprev)
- [foreach](TWindowBase.md#foreach)
- [getAutoAdjustSize](TWindowBase.md#getautoadjustsize)
- [getChild](TWindowBase.md#getchild)
- [getEnable](TWindowBase.md#getenable)
- [getFeedback](TWindowBase.md#getfeedback)
- [getFloating](TWindowBase.md#getfloating)
- [getFocusable](TWindowBase.md#getfocusable)
- [getFocusedWidget](TWindowBase.md#getfocusedwidget)
- [getNativeWindow](TWindowBase.md#getnativewindow)
- [getPropBool](TWindowBase.md#getpropbool)
- [getPropFloat](TWindowBase.md#getpropfloat)
- [getPropInt](TWindowBase.md#getpropint)
- [getPropPointer](TWindowBase.md#getproppointer)
- [getPropStr](TWindowBase.md#getpropstr)
- [getSensitive](TWindowBase.md#getsensitive)
- [getStateForStyle](TWindowBase.md#getstateforstyle)
- [getStyleType](TWindowBase.md#getstyletype)
- [getText](TWindowBase.md#gettext)
- [getThemeName](TWindowBase.md#getthemename)
- [getType](TWindowBase.md#gettype)
- [getValue](TWindowBase.md#getvalue)
- [getValueInt](TWindowBase.md#getvalueint)
- [getVisible](TWindowBase.md#getvisible)
- [getWindow](TWindowBase.md#getwindow)
- [getWindowManager](TWindowBase.md#getwindowmanager)
- [getWithFocusState](TWindowBase.md#getwithfocusstate)
- [indexOf](TWindowBase.md#indexof)
- [insertChild](TWindowBase.md#insertchild)
- [invalidateForce](TWindowBase.md#invalidateforce)
- [isDesigningWindow](TWindowBase.md#isdesigningwindow)
- [isDialog](TWindowBase.md#isdialog)
- [isDirectParentOf](TWindowBase.md#isdirectparentof)
- [isKeyboard](TWindowBase.md#iskeyboard)
- [isNormalWindow](TWindowBase.md#isnormalwindow)
- [isOpenedDialog](TWindowBase.md#isopeneddialog)
- [isOpenedPopup](TWindowBase.md#isopenedpopup)
- [isOverlay](TWindowBase.md#isoverlay)
- [isParentOf](TWindowBase.md#isparentof)
- [isPopup](TWindowBase.md#ispopup)
- [isStyleExist](TWindowBase.md#isstyleexist)
- [isSystemBar](TWindowBase.md#issystembar)
- [isWindow](TWindowBase.md#iswindow)
- [isWindowCreated](TWindowBase.md#iswindowcreated)
- [isWindowManager](TWindowBase.md#iswindowmanager)
- [isWindowOpened](TWindowBase.md#iswindowopened)
- [layout](TWindowBase.md#layout)
- [lookup](TWindowBase.md#lookup)
- [lookupByType](TWindowBase.md#lookupbytype)
- [move](TWindowBase.md#move)
- [moveResize](TWindowBase.md#moveresize)
- [moveResizeEx](TWindowBase.md#moveresizeex)
- [moveToCenter](TWindowBase.md#movetocenter)
- [off](TWindowBase.md#off)
- [on](TWindowBase.md#on)
- [pauseAnimator](TWindowBase.md#pauseanimator)
- [removeChild](TWindowBase.md#removechild)
- [resize](TWindowBase.md#resize)
- [restack](TWindowBase.md#restack)
- [setAnimation](TWindowBase.md#setanimation)
- [setAnimatorTimeScale](TWindowBase.md#setanimatortimescale)
- [setAsKeyTarget](TWindowBase.md#setaskeytarget)
- [setAutoAdjustSize](TWindowBase.md#setautoadjustsize)
- [setChildText](TWindowBase.md#setchildtext)
- [setChildTextWithDouble](TWindowBase.md#setchildtextwithdouble)
- [setChildTextWithInt](TWindowBase.md#setchildtextwithint)
- [setChildrenLayout](TWindowBase.md#setchildrenlayout)
- [setDirtyRectTolerance](TWindowBase.md#setdirtyrecttolerance)
- [setEnable](TWindowBase.md#setenable)
- [setFeedback](TWindowBase.md#setfeedback)
- [setFloating](TWindowBase.md#setfloating)
- [setFocusable](TWindowBase.md#setfocusable)
- [setFocused](TWindowBase.md#setfocused)
- [setName](TWindowBase.md#setname)
- [setOpacity](TWindowBase.md#setopacity)
- [setPointerCursor](TWindowBase.md#setpointercursor)
- [setPropBool](TWindowBase.md#setpropbool)
- [setPropFloat](TWindowBase.md#setpropfloat)
- [setPropInt](TWindowBase.md#setpropint)
- [setPropPointer](TWindowBase.md#setproppointer)
- [setPropStr](TWindowBase.md#setpropstr)
- [setProps](TWindowBase.md#setprops)
- [setSelfLayout](TWindowBase.md#setselflayout)
- [setSelfLayoutParams](TWindowBase.md#setselflayoutparams)
- [setSensitive](TWindowBase.md#setsensitive)
- [setState](TWindowBase.md#setstate)
- [setStyleColor](TWindowBase.md#setstylecolor)
- [setStyleInt](TWindowBase.md#setstyleint)
- [setStyleStr](TWindowBase.md#setstylestr)
- [setText](TWindowBase.md#settext)
- [setTextEx](TWindowBase.md#settextex)
- [setTheme](TWindowBase.md#settheme)
- [setTrText](TWindowBase.md#settrtext)
- [setValue](TWindowBase.md#setvalue)
- [setValueInt](TWindowBase.md#setvalueint)
- [setVisible](TWindowBase.md#setvisible)
- [setVisibleOnly](TWindowBase.md#setvisibleonly)
- [startAnimator](TWindowBase.md#startanimator)
- [stopAnimator](TWindowBase.md#stopanimator)
- [strokeBorderRect](TWindowBase.md#strokeborderrect)
- [unref](TWindowBase.md#unref)
- [updateStyle](TWindowBase.md#updatestyle)
- [updateStyleRecursive](TWindowBase.md#updatestylerecursive)
- [useStyle](TWindowBase.md#usestyle)
- [cast](TWindowBase.md#cast)

## Constructors

### constructor

• **new TWindowBase**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TWidget](TWidget.md).[constructor](TWidget.md#constructor)

#### Defined in

[awtk.ts:15575](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15575)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TWidget](TWidget.md).[nativeObj](TWidget.md#nativeobj)

#### Defined in

[awtk.ts:15574](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15574)

## Accessors

### animation

• `get` **animation**(): `string`

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

#### Returns

`string`

#### Inherited from

TWidget.animation

#### Defined in

[awtk.ts:12040](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12040)

• `set` **animation**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Inherited from

TWidget.animation

#### Defined in

[awtk.ts:12044](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12044)

___

### appletName

• `get` **appletName**(): `string`

小应用程序(applet)的名称。

> 如果该窗口属于某个独立的小程序应用(applet)，需要指定它的名称，以便到对应的资源目录查找资源。

#### Returns

`string`

#### Defined in

[awtk.ts:15776](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15776)

___

### autoAdjustSize

• `get` **autoAdjustSize**(): `boolean`

是否根据子控件和文本自动调整控件自身大小。

> 为true时，最好不要使用 layout 的相关东西，否则可能有冲突。
> 注意：只是调整控件的本身的宽高，不会修改控件本身的位置。

#### Returns

`boolean`

#### Inherited from

TWidget.autoAdjustSize

#### Defined in

[awtk.ts:12131](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12131)

• `set` **autoAdjustSize**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TWidget.autoAdjustSize

#### Defined in

[awtk.ts:12135](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12135)

___

### autoScaleChildrenH

• `get` **autoScaleChildrenH**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的高度。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15653](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15653)

___

### autoScaleChildrenW

• `get` **autoScaleChildrenW**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的宽度。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15644](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15644)

___

### autoScaleChildrenX

• `get` **autoScaleChildrenX**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的x坐标。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15626](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15626)

___

### autoScaleChildrenY

• `get` **autoScaleChildrenY**(): `boolean`

窗口大小与设计时大小不同时，是否自动调整子控件的y坐标。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15635](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15635)

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

#### Defined in

[awtk.ts:15679](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15679)

___

### closeAnimHint

• `get` **closeAnimHint**(): `string`

关闭窗口动画的名称。
请参考[窗口动画](https://github.com/zlgopen/awtk/blob/master/docs/window_animator.md)

#### Returns

`string`

#### Defined in

[awtk.ts:15699](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15699)

___

### designH

• `get` **designH**(): `number`

设计时高度。

#### Returns

`number`

#### Defined in

[awtk.ts:15617](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15617)

___

### designW

• `get` **designW**(): `number`

设计时宽度。

#### Returns

`number`

#### Defined in

[awtk.ts:15608](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15608)

___

### dirtyRectTolerance

• `get` **dirtyRectTolerance**(): `number`

脏矩形超出控件本身大小的最大范围(一般不用指定)。

> 如果 border 太粗或 offset 太大等原因，导致脏矩形超出控件本身大小太多（大于缺省值）时，才需要指定。

#### Returns

`number`

#### Inherited from

TWidget.dirtyRectTolerance

#### Defined in

[awtk.ts:12172](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12172)

• `set` **dirtyRectTolerance**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Inherited from

TWidget.dirtyRectTolerance

#### Defined in

[awtk.ts:12176](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12176)

___

### disableAnim

• `get` **disableAnim**(): `boolean`

禁用窗口动画。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15662](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15662)

___

### enable

• `get` **enable**(): `boolean`

启用/禁用状态。

#### Returns

`boolean`

#### Inherited from

TWidget.enable

#### Defined in

[awtk.ts:12053](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12053)

• `set` **enable**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TWidget.enable

#### Defined in

[awtk.ts:12057](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12057)

___

### feedback

• `get` **feedback**(): `boolean`

是否启用按键音、触屏音和震动等反馈。

#### Returns

`boolean`

#### Inherited from

TWidget.feedback

#### Defined in

[awtk.ts:12066](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12066)

• `set` **feedback**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TWidget.feedback

#### Defined in

[awtk.ts:12070](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12070)

___

### floating

• `get` **floating**(): `boolean`

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

#### Returns

`boolean`

#### Inherited from

TWidget.floating

#### Defined in

[awtk.ts:12144](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12144)

• `set` **floating**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TWidget.floating

#### Defined in

[awtk.ts:12148](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12148)

___

### focusable

• `get` **focusable**(): `boolean`

是否支持焦点停留。

#### Returns

`boolean`

#### Inherited from

TWidget.focusable

#### Defined in

[awtk.ts:12105](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12105)

• `set` **focusable**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TWidget.focusable

#### Defined in

[awtk.ts:12109](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12109)

___

### h

• `get` **h**(): `number`

高度。

#### Returns

`number`

#### Inherited from

TWidget.h

#### Defined in

[awtk.ts:11983](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11983)

___

### moveFocusDownKey

• `get` **moveFocusDownKey**(): `string`

向下移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Defined in

[awtk.ts:15743](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15743)

___

### moveFocusLeftKey

• `get` **moveFocusLeftKey**(): `string`

向左移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Defined in

[awtk.ts:15754](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15754)

___

### moveFocusNextKey

• `get` **moveFocusNextKey**(): `string`

向后移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Defined in

[awtk.ts:15721](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15721)

___

### moveFocusPrevKey

• `get` **moveFocusPrevKey**(): `string`

向前移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Defined in

[awtk.ts:15710](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15710)

___

### moveFocusRightKey

• `get` **moveFocusRightKey**(): `string`

向右移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Defined in

[awtk.ts:15765](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15765)

___

### moveFocusUpKey

• `get` **moveFocusUpKey**(): `string`

向上移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

#### Returns

`string`

#### Defined in

[awtk.ts:15732](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15732)

___

### name

• `get` **name**(): `string`

控件名字。

#### Returns

`string`

#### Inherited from

TWidget.name

#### Defined in

[awtk.ts:11992](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11992)

• `set` **name**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Inherited from

TWidget.name

#### Defined in

[awtk.ts:11996](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11996)

___

### opacity

• `get` **opacity**(): `number`

不透明度(0-255)，0完全透明，255完全不透明。

#### Returns

`number`

#### Inherited from

TWidget.opacity

#### Defined in

[awtk.ts:12157](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12157)

• `set` **opacity**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Inherited from

TWidget.opacity

#### Defined in

[awtk.ts:12161](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12161)

___

### openAnimHint

• `get` **openAnimHint**(): `string`

打开窗口动画的名称。
请参考[窗口动画](https://github.com/zlgopen/awtk/blob/master/docs/window_animator.md)

#### Returns

`string`

#### Defined in

[awtk.ts:15689](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15689)

___

### parent

• `get` **parent**(): [`TWidget`](TWidget.md)

父控件

#### Returns

[`TWidget`](TWidget.md)

#### Inherited from

TWidget.parent

#### Defined in

[awtk.ts:12185](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12185)

___

### pointerCursor

• `get` **pointerCursor**(): `string`

鼠标光标图片名称。

#### Returns

`string`

#### Inherited from

TWidget.pointerCursor

#### Defined in

[awtk.ts:12005](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12005)

• `set` **pointerCursor**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Inherited from

TWidget.pointerCursor

#### Defined in

[awtk.ts:12009](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12009)

___

### sensitive

• `get` **sensitive**(): `boolean`

是否接受用户事件。

#### Returns

`boolean`

#### Inherited from

TWidget.sensitive

#### Defined in

[awtk.ts:12092](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12092)

• `set` **sensitive**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TWidget.sensitive

#### Defined in

[awtk.ts:12096](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12096)

___

### singleInstance

• `get` **singleInstance**(): `boolean`

单例。如果窗口存在，先关闭再打开。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15785](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15785)

___

### stronglyFocus

• `get` **stronglyFocus**(): `boolean`

点击非focusable控件时，是否让当前焦点控件失去焦点。比如点击窗口空白区域，是否让编辑器失去焦点。

#### Returns

`boolean`

#### Defined in

[awtk.ts:15794](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15794)

___

### style

• `get` **style**(): `string`

style的名称。

#### Returns

`string`

#### Inherited from

TWidget.style

#### Defined in

[awtk.ts:12031](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12031)

___

### theme

• `get` **theme**(): `string`

窗体样式资源的名称。
每个窗口都可以有独立的窗体样式文件，如果没指定，则使用系统缺省的窗体样式文件。
窗体样式是一个XML文件，放在assets/raw/styles目录下。
请参考[窗体样式](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

#### Returns

`string`

#### Defined in

[awtk.ts:15599](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15599)

___

### trText

• `get` **trText**(): `string`

保存用于翻译的字符串。

#### Returns

`string`

#### Inherited from

TWidget.trText

#### Defined in

[awtk.ts:12018](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12018)

• `set` **trText**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Inherited from

TWidget.trText

#### Defined in

[awtk.ts:12022](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12022)

___

### visible

• `get` **visible**(): `boolean`

是否可见。

#### Returns

`boolean`

#### Inherited from

TWidget.visible

#### Defined in

[awtk.ts:12079](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12079)

• `set` **visible**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TWidget.visible

#### Defined in

[awtk.ts:12083](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12083)

___

### w

• `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Inherited from

TWidget.w

#### Defined in

[awtk.ts:11974](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11974)

___

### withFocusState

• `get` **withFocusState**(): `boolean`

是否支持焦点状态。
> 如果希望style支持焦点状态，但又不希望焦点停留，可用本属性。

#### Returns

`boolean`

#### Inherited from

TWidget.withFocusState

#### Defined in

[awtk.ts:12119](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12119)

___

### x

• `get` **x**(): `number`

x坐标(相对于父控件的x坐标)。

#### Returns

`number`

#### Inherited from

TWidget.x

#### Defined in

[awtk.ts:11956](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11956)

___

### y

• `get` **y**(): `number`

y坐标(相对于父控件的y坐标)。

#### Returns

`number`

#### Inherited from

TWidget.y

#### Defined in

[awtk.ts:11965](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11965)

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

[TWidget](TWidget.md).[addChild](TWidget.md#addchild)

#### Defined in

[awtk.ts:11110](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11110)

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

[TWidget](TWidget.md).[addChildDefault](TWidget.md#addchilddefault)

#### Defined in

[awtk.ts:11947](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11947)

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

[TWidget](TWidget.md).[addValue](TWidget.md#addvalue)

#### Defined in

[awtk.ts:10553](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10553)

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

[TWidget](TWidget.md).[addValueInt](TWidget.md#addvalueint)

#### Defined in

[awtk.ts:10590](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10590)

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

[TWidget](TWidget.md).[animateValueTo](TWidget.md#animatevalueto)

#### Defined in

[awtk.ts:10604](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10604)

___

### back

▸ **back**(): [`TRet`](../enums/TRet.md)

请求返回到前一个窗口。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[back](TWidget.md#back)

#### Defined in

[awtk.ts:10437](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10437)

___

### backToHome

▸ **backToHome**(): [`TRet`](../enums/TRet.md)

请求返回到home窗口。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[backToHome](TWidget.md#backtohome)

#### Defined in

[awtk.ts:10448](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10448)

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

[TWidget](TWidget.md).[child](TWidget.md#child)

#### Defined in

[awtk.ts:11159](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11159)

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

[TWidget](TWidget.md).[clone](TWidget.md#clone)

#### Defined in

[awtk.ts:11630](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11630)

___

### closeWindow

▸ **closeWindow**(): [`TRet`](../enums/TRet.md)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[closeWindow](TWidget.md#closewindow)

#### Defined in

[awtk.ts:10415](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10415)

___

### closeWindowForce

▸ **closeWindowForce**(): [`TRet`](../enums/TRet.md)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[closeWindowForce](TWidget.md#closewindowforce)

#### Defined in

[awtk.ts:10426](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10426)

___

### countChildren

▸ **countChildren**(): `number`

获取子控件的个数。

#### Returns

`number`

子控件的个数。

#### Inherited from

[TWidget](TWidget.md).[countChildren](TWidget.md#countchildren)

#### Defined in

[awtk.ts:10335](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10335)

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

[TWidget](TWidget.md).[createAnimator](TWidget.md#createanimator)

#### Defined in

[awtk.ts:10890](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10890)

___

### destroy

▸ **destroy**(): [`TRet`](../enums/TRet.md)

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[destroy](TWidget.md#destroy)

#### Defined in

[awtk.ts:11667](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11667)

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

[TWidget](TWidget.md).[destroyAnimator](TWidget.md#destroyanimator)

#### Defined in

[awtk.ts:10976](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10976)

___

### destroyAsync

▸ **destroyAsync**(): [`TRet`](../enums/TRet.md)

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[destroyAsync](TWidget.md#destroyasync)

#### Defined in

[awtk.ts:11680](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11680)

___

### destroyChildren

▸ **destroyChildren**(): [`TRet`](../enums/TRet.md)

销毁全部子控件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[destroyChildren](TWidget.md#destroychildren)

#### Defined in

[awtk.ts:11098](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11098)

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

[TWidget](TWidget.md).[dispatchToKeyTarget](TWidget.md#dispatchtokeytarget)

#### Defined in

[awtk.ts:11756](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11756)

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

[TWidget](TWidget.md).[dispatchToTarget](TWidget.md#dispatchtotarget)

#### Defined in

[awtk.ts:11744](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11744)

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

[TWidget](TWidget.md).[equal](TWidget.md#equal)

#### Defined in

[awtk.ts:11642](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11642)

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

[TWidget](TWidget.md).[fillBgRect](TWidget.md#fillbgrect)

#### Defined in

[awtk.ts:11718](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11718)

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

[TWidget](TWidget.md).[fillFgRect](TWidget.md#fillfgrect)

#### Defined in

[awtk.ts:11732](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11732)

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

[TWidget](TWidget.md).[findParentByName](TWidget.md#findparentbyname)

#### Defined in

[awtk.ts:10359](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10359)

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

[TWidget](TWidget.md).[findParentByType](TWidget.md#findparentbytype)

#### Defined in

[awtk.ts:10371](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10371)

___

### focusNext

▸ **focusNext**(): [`TRet`](../enums/TRet.md)

把焦点移动下一个控件。

>widget必须是当前焦点控件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[focusNext](TWidget.md#focusnext)

#### Defined in

[awtk.ts:11813](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11813)

___

### focusPrev

▸ **focusPrev**(): [`TRet`](../enums/TRet.md)

把焦点移动前一个控件。

>widget必须是当前焦点控件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[focusPrev](TWidget.md#focusprev)

#### Defined in

[awtk.ts:11826](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11826)

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

[TWidget](TWidget.md).[foreach](TWidget.md#foreach)

#### Defined in

[awtk.ts:11585](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11585)

___

### getAutoAdjustSize

▸ **getAutoAdjustSize**(): `boolean`

获取控件auto_adjust_size属性值。

#### Returns

`boolean`

返回auto_adjust_size。

#### Inherited from

[TWidget](TWidget.md).[getAutoAdjustSize](TWidget.md#getautoadjustsize)

#### Defined in

[awtk.ts:10743](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10743)

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

[TWidget](TWidget.md).[getChild](TWidget.md#getchild)

#### Defined in

[awtk.ts:10347](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10347)

___

### getEnable

▸ **getEnable**(): `boolean`

获取控件enable属性值。

#### Returns

`boolean`

返回enable。

#### Inherited from

[TWidget](TWidget.md).[getEnable](TWidget.md#getenable)

#### Defined in

[awtk.ts:10721](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10721)

___

### getFeedback

▸ **getFeedback**(): `boolean`

获取控件feedback属性值。

#### Returns

`boolean`

返回feedback。

#### Inherited from

[TWidget](TWidget.md).[getFeedback](TWidget.md#getfeedback)

#### Defined in

[awtk.ts:10798](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10798)

___

### getFloating

▸ **getFloating**(): `boolean`

获取控件floating属性值。

#### Returns

`boolean`

返回floating。

#### Inherited from

[TWidget](TWidget.md).[getFloating](TWidget.md#getfloating)

#### Defined in

[awtk.ts:10732](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10732)

___

### getFocusable

▸ **getFocusable**(): `boolean`

获取控件focusable属性值。

#### Returns

`boolean`

返回focusable。

#### Inherited from

[TWidget](TWidget.md).[getFocusable](TWidget.md#getfocusable)

#### Defined in

[awtk.ts:10765](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10765)

___

### getFocusedWidget

▸ **getFocusedWidget**(): [`TWidget`](TWidget.md)

获取当前窗口中的焦点控件。

#### Returns

[`TWidget`](TWidget.md)

焦点控件。

#### Inherited from

[TWidget](TWidget.md).[getFocusedWidget](TWidget.md#getfocusedwidget)

#### Defined in

[awtk.ts:10382](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10382)

___

### getNativeWindow

▸ **getNativeWindow**(): [`TNativeWindow`](TNativeWindow.md)

获取原生窗口对象。

#### Returns

[`TNativeWindow`](TNativeWindow.md)

原生窗口对象。

#### Inherited from

[TWidget](TWidget.md).[getNativeWindow](TWidget.md#getnativewindow)

#### Defined in

[awtk.ts:10393](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10393)

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

[TWidget](TWidget.md).[getPropBool](TWidget.md#getpropbool)

#### Defined in

[awtk.ts:11404](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11404)

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

[TWidget](TWidget.md).[getPropFloat](TWidget.md#getpropfloat)

#### Defined in

[awtk.ts:11352](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11352)

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

[TWidget](TWidget.md).[getPropInt](TWidget.md#getpropint)

#### Defined in

[awtk.ts:11378](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11378)

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

[TWidget](TWidget.md).[getPropPointer](TWidget.md#getproppointer)

#### Defined in

[awtk.ts:11326](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11326)

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

[TWidget](TWidget.md).[getPropStr](TWidget.md#getpropstr)

#### Defined in

[awtk.ts:11301](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11301)

___

### getSensitive

▸ **getSensitive**(): `boolean`

获取控件sensitive属性值。

#### Returns

`boolean`

返回sensitive。

#### Inherited from

[TWidget](TWidget.md).[getSensitive](TWidget.md#getsensitive)

#### Defined in

[awtk.ts:10776](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10776)

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

[TWidget](TWidget.md).[getStateForStyle](TWidget.md#getstateforstyle)

#### Defined in

[awtk.ts:11839](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11839)

___

### getStyleType

▸ **getStyleType**(): `string`

获取 widget 对应风格类型

#### Returns

`string`

返回 widget 的对应风格类型。

#### Inherited from

[TWidget](TWidget.md).[getStyleType](TWidget.md#getstyletype)

#### Defined in

[awtk.ts:11767](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11767)

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

[TWidget](TWidget.md).[getText](TWidget.md#gettext)

#### Defined in

[awtk.ts:10814](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10814)

___

### getThemeName

▸ **getThemeName**(): `string`

获取 theme 的名称

#### Returns

`string`

成功返回主题名称，失败否则 NULL。

#### Inherited from

[TWidget](TWidget.md).[getThemeName](TWidget.md#getthemename)

#### Defined in

[awtk.ts:10849](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10849)

___

### getType

▸ **getType**(): `string`

获取当前控件的类型名称。

#### Returns

`string`

返回类型名。

#### Inherited from

[TWidget](TWidget.md).[getType](TWidget.md#gettype)

#### Defined in

[awtk.ts:11618](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11618)

___

### getValue

▸ **getValue**(): `number`

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[TWidget](TWidget.md).[getValue](TWidget.md#getvalue)

#### Defined in

[awtk.ts:10527](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10527)

___

### getValueInt

▸ **getValueInt**(): `number`

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[TWidget](TWidget.md).[getValueInt](TWidget.md#getvalueint)

#### Defined in

[awtk.ts:10564](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10564)

___

### getVisible

▸ **getVisible**(): `boolean`

获取控件visible属性值。

#### Returns

`boolean`

返回visible。

#### Inherited from

[TWidget](TWidget.md).[getVisible](TWidget.md#getvisible)

#### Defined in

[awtk.ts:10787](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10787)

___

### getWindow

▸ **getWindow**(): [`TWidget`](TWidget.md)

获取当前控件所在的窗口。

#### Returns

[`TWidget`](TWidget.md)

窗口对象。

#### Inherited from

[TWidget](TWidget.md).[getWindow](TWidget.md#getwindow)

#### Defined in

[awtk.ts:11596](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11596)

___

### getWindowManager

▸ **getWindowManager**(): [`TWidget`](TWidget.md)

获取当前的窗口管理器。

#### Returns

[`TWidget`](TWidget.md)

窗口管理器对象。

#### Inherited from

[TWidget](TWidget.md).[getWindowManager](TWidget.md#getwindowmanager)

#### Defined in

[awtk.ts:11607](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11607)

___

### getWithFocusState

▸ **getWithFocusState**(): `boolean`

获取控件with_focus_state属性值。

#### Returns

`boolean`

返回with_focus_state。

#### Inherited from

[TWidget](TWidget.md).[getWithFocusState](TWidget.md#getwithfocusstate)

#### Defined in

[awtk.ts:10754](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10754)

___

### indexOf

▸ **indexOf**(): `number`

获取控件在父控件中的索引编号。

#### Returns

`number`

在父控件中的索引编号。

#### Inherited from

[TWidget](TWidget.md).[indexOf](TWidget.md#indexof)

#### Defined in

[awtk.ts:10404](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10404)

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

[TWidget](TWidget.md).[insertChild](TWidget.md#insertchild)

#### Defined in

[awtk.ts:11135](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11135)

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

[TWidget](TWidget.md).[invalidateForce](TWidget.md#invalidateforce)

#### Defined in

[awtk.ts:11262](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11262)

___

### isDesigningWindow

▸ **isDesigningWindow**(): `boolean`

判断当前控件是否是设计窗口。

#### Returns

`boolean`

返回当前控件是否是设计窗口。

#### Inherited from

[TWidget](TWidget.md).[isDesigningWindow](TWidget.md#isdesigningwindow)

#### Defined in

[awtk.ts:11561](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11561)

___

### isDialog

▸ **isDialog**(): `boolean`

检查控件是否是对话框类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[TWidget](TWidget.md).[isDialog](TWidget.md#isdialog)

#### Defined in

[awtk.ts:11494](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11494)

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

[TWidget](TWidget.md).[isDirectParentOf](TWidget.md#isdirectparentof)

#### Defined in

[awtk.ts:11450](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11450)

___

### isKeyboard

▸ **isKeyboard**(): `boolean`

widget_set_prop_bool(group, WIDGET_PROP_IS_KEYBOARD, TRUE);
```

@returns 返回FALSE表示不是，否则表示是。

#### Returns

`boolean`

#### Inherited from

[TWidget](TWidget.md).[isKeyboard](TWidget.md#iskeyboard)

#### Defined in

[awtk.ts:11550](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11550)

___

### isNormalWindow

▸ **isNormalWindow**(): `boolean`

检查控件是否是普通窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[TWidget](TWidget.md).[isNormalWindow](TWidget.md#isnormalwindow)

#### Defined in

[awtk.ts:11483](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11483)

___

### isOpenedDialog

▸ **isOpenedDialog**(): `boolean`

检查控件弹出对话框控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[TWidget](TWidget.md).[isOpenedDialog](TWidget.md#isopeneddialog)

#### Defined in

[awtk.ts:11527](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11527)

___

### isOpenedPopup

▸ **isOpenedPopup**(): `boolean`

检查控件弹出窗口控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[TWidget](TWidget.md).[isOpenedPopup](TWidget.md#isopenedpopup)

#### Defined in

[awtk.ts:11538](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11538)

___

### isOverlay

▸ **isOverlay**(): `boolean`

检查控件是否是overlay窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[TWidget](TWidget.md).[isOverlay](TWidget.md#isoverlay)

#### Defined in

[awtk.ts:11516](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11516)

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

[TWidget](TWidget.md).[isParentOf](TWidget.md#isparentof)

#### Defined in

[awtk.ts:11438](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11438)

___

### isPopup

▸ **isPopup**(): `boolean`

检查控件是否是弹出窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[TWidget](TWidget.md).[isPopup](TWidget.md#ispopup)

#### Defined in

[awtk.ts:11505](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11505)

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

[TWidget](TWidget.md).[isStyleExist](TWidget.md#isstyleexist)

#### Defined in

[awtk.ts:10617](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10617)

___

### isSystemBar

▸ **isSystemBar**(): `boolean`

检查控件是否是system bar类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[TWidget](TWidget.md).[isSystemBar](TWidget.md#issystembar)

#### Defined in

[awtk.ts:11472](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11472)

___

### isWindow

▸ **isWindow**(): `boolean`

判断当前控件是否是窗口。

#### Returns

`boolean`

返回当前控件是否是窗口。

#### Inherited from

[TWidget](TWidget.md).[isWindow](TWidget.md#iswindow)

#### Defined in

[awtk.ts:11461](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11461)

___

### isWindowCreated

▸ **isWindowCreated**(): `boolean`

判断窗口及子控件创建或加载是否完成。

#### Returns

`boolean`

返回创建或加载是否完成。

#### Inherited from

[TWidget](TWidget.md).[isWindowCreated](TWidget.md#iswindowcreated)

#### Defined in

[awtk.ts:11426](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11426)

___

### isWindowManager

▸ **isWindowManager**(): `boolean`

判断当前控件是否是窗口管理器。

#### Returns

`boolean`

返回当前控件是否是窗口管理器。

#### Inherited from

[TWidget](TWidget.md).[isWindowManager](TWidget.md#iswindowmanager)

#### Defined in

[awtk.ts:11572](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11572)

___

### isWindowOpened

▸ **isWindowOpened**(): `boolean`

判断当前控件所在的窗口是否已经打开。

#### Returns

`boolean`

返回当前控件所在的窗口是否已经打开。

#### Inherited from

[TWidget](TWidget.md).[isWindowOpened](TWidget.md#iswindowopened)

#### Defined in

[awtk.ts:11415](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11415)

___

### layout

▸ **layout**(): [`TRet`](../enums/TRet.md)

布局当前控件及子控件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[layout](TWidget.md#layout)

#### Defined in

[awtk.ts:11850](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11850)

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

[TWidget](TWidget.md).[lookup](TWidget.md#lookup)

#### Defined in

[awtk.ts:11172](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11172)

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

[TWidget](TWidget.md).[lookupByType](TWidget.md#lookupbytype)

#### Defined in

[awtk.ts:11185](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11185)

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

[TWidget](TWidget.md).[move](TWidget.md#move)

#### Defined in

[awtk.ts:10461](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10461)

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

[TWidget](TWidget.md).[moveResize](TWidget.md#moveresize)

#### Defined in

[awtk.ts:10500](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10500)

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

[TWidget](TWidget.md).[moveResizeEx](TWidget.md#moveresizeex)

#### Defined in

[awtk.ts:10516](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10516)

___

### moveToCenter

▸ **moveToCenter**(): [`TRet`](../enums/TRet.md)

移动控件到父控件中间。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[moveToCenter](TWidget.md#movetocenter)

#### Defined in

[awtk.ts:10472](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10472)

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

[TWidget](TWidget.md).[off](TWidget.md#off)

#### Defined in

[awtk.ts:11250](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11250)

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

[TWidget](TWidget.md).[on](TWidget.md#on)

#### Defined in

[awtk.ts:11238](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11238)

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

[TWidget](TWidget.md).[pauseAnimator](TWidget.md#pauseanimator)

#### Defined in

[awtk.ts:10942](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10942)

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

[TWidget](TWidget.md).[removeChild](TWidget.md#removechild)

#### Defined in

[awtk.ts:11122](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11122)

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

[TWidget](TWidget.md).[resize](TWidget.md#resize)

#### Defined in

[awtk.ts:10485](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10485)

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

[TWidget](TWidget.md).[restack](TWidget.md#restack)

#### Defined in

[awtk.ts:11147](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11147)

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

[TWidget](TWidget.md).[setAnimation](TWidget.md#setanimation)

#### Defined in

[awtk.ts:10874](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10874)

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

[TWidget](TWidget.md).[setAnimatorTimeScale](TWidget.md#setanimatortimescale)

#### Defined in

[awtk.ts:10925](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10925)

___

### setAsKeyTarget

▸ **setAsKeyTarget**(): [`TRet`](../enums/TRet.md)

递归的把父控件的key_target设置为自己。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[setAsKeyTarget](TWidget.md#setaskeytarget)

#### Defined in

[awtk.ts:11800](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11800)

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

[TWidget](TWidget.md).[setAutoAdjustSize](TWidget.md#setautoadjustsize)

#### Defined in

[awtk.ts:11012](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11012)

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

[TWidget](TWidget.md).[setChildText](TWidget.md#setchildtext)

#### Defined in

[awtk.ts:10668](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10668)

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

[TWidget](TWidget.md).[setChildTextWithDouble](TWidget.md#setchildtextwithdouble)

#### Defined in

[awtk.ts:10683](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10683)

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

[TWidget](TWidget.md).[setChildTextWithInt](TWidget.md#setchildtextwithint)

#### Defined in

[awtk.ts:10698](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10698)

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

[TWidget](TWidget.md).[setChildrenLayout](TWidget.md#setchildrenlayout)

#### Defined in

[awtk.ts:11874](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11874)

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

[TWidget](TWidget.md).[setDirtyRectTolerance](TWidget.md#setdirtyrecttolerance)

#### Defined in

[awtk.ts:11087](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11087)

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

[TWidget](TWidget.md).[setEnable](TWidget.md#setenable)

#### Defined in

[awtk.ts:10988](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10988)

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

[TWidget](TWidget.md).[setFeedback](TWidget.md#setfeedback)

#### Defined in

[awtk.ts:11000](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11000)

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

[TWidget](TWidget.md).[setFloating](TWidget.md#setfloating)

#### Defined in

[awtk.ts:11025](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11025)

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

[TWidget](TWidget.md).[setFocusable](TWidget.md#setfocusable)

#### Defined in

[awtk.ts:11049](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11049)

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

[TWidget](TWidget.md).[setFocused](TWidget.md#setfocused)

#### Defined in

[awtk.ts:11037](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11037)

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

[TWidget](TWidget.md).[setName](TWidget.md#setname)

#### Defined in

[awtk.ts:10826](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10826)

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

[TWidget](TWidget.md).[setOpacity](TWidget.md#setopacity)

#### Defined in

[awtk.ts:11075](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11075)

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

[TWidget](TWidget.md).[setPointerCursor](TWidget.md#setpointercursor)

#### Defined in

[awtk.ts:10861](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10861)

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

[TWidget](TWidget.md).[setPropBool](TWidget.md#setpropbool)

#### Defined in

[awtk.ts:11391](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11391)

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

[TWidget](TWidget.md).[setPropFloat](TWidget.md#setpropfloat)

#### Defined in

[awtk.ts:11339](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11339)

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

[TWidget](TWidget.md).[setPropInt](TWidget.md#setpropint)

#### Defined in

[awtk.ts:11365](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11365)

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

[TWidget](TWidget.md).[setPropPointer](TWidget.md#setproppointer)

#### Defined in

[awtk.ts:11314](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11314)

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

[TWidget](TWidget.md).[setPropStr](TWidget.md#setpropstr)

#### Defined in

[awtk.ts:11288](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11288)

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

[TWidget](TWidget.md).[setProps](TWidget.md#setprops)

#### Defined in

[awtk.ts:11275](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11275)

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

[TWidget](TWidget.md).[setSelfLayout](TWidget.md#setselflayout)

#### Defined in

[awtk.ts:11862](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11862)

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

[TWidget](TWidget.md).[setSelfLayoutParams](TWidget.md#setselflayoutparams)

#### Defined in

[awtk.ts:11889](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11889)

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

[TWidget](TWidget.md).[setSensitive](TWidget.md#setsensitive)

#### Defined in

[awtk.ts:11221](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11221)

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

[TWidget](TWidget.md).[setState](TWidget.md#setstate)

#### Defined in

[awtk.ts:11061](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11061)

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

[TWidget](TWidget.md).[setStyleColor](TWidget.md#setstylecolor)

#### Defined in

[awtk.ts:11935](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11935)

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

[TWidget](TWidget.md).[setStyleInt](TWidget.md#setstyleint)

#### Defined in

[awtk.ts:11905](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11905)

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

[TWidget](TWidget.md).[setStyleStr](TWidget.md#setstylestr)

#### Defined in

[awtk.ts:11921](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11921)

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

[TWidget](TWidget.md).[setText](TWidget.md#settext)

#### Defined in

[awtk.ts:10641](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10641)

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

[TWidget](TWidget.md).[setTextEx](TWidget.md#settextex)

#### Defined in

[awtk.ts:10654](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10654)

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

[TWidget](TWidget.md).[setTheme](TWidget.md#settheme)

#### Defined in

[awtk.ts:10838](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10838)

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

[TWidget](TWidget.md).[setTrText](TWidget.md#settrtext)

#### Defined in

[awtk.ts:10710](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10710)

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

[TWidget](TWidget.md).[setValue](TWidget.md#setvalue)

#### Defined in

[awtk.ts:10540](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10540)

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

[TWidget](TWidget.md).[setValueInt](TWidget.md#setvalueint)

#### Defined in

[awtk.ts:10577](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10577)

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

[TWidget](TWidget.md).[setVisible](TWidget.md#setvisible)

#### Defined in

[awtk.ts:11197](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11197)

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

[TWidget](TWidget.md).[setVisibleOnly](TWidget.md#setvisibleonly)

#### Defined in

[awtk.ts:11209](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11209)

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

[TWidget](TWidget.md).[startAnimator](TWidget.md#startanimator)

#### Defined in

[awtk.ts:10907](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10907)

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

[TWidget](TWidget.md).[stopAnimator](TWidget.md#stopanimator)

#### Defined in

[awtk.ts:10959](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10959)

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

[TWidget](TWidget.md).[strokeBorderRect](TWidget.md#strokeborderrect)

#### Defined in

[awtk.ts:11704](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11704)

___

### unref

▸ **unref**(): [`TRet`](../enums/TRet.md)

减少控件的引用计数。引用计数为0时销毁控件。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[unref](TWidget.md#unref)

#### Defined in

[awtk.ts:11691](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11691)

___

### updateStyle

▸ **updateStyle**(): [`TRet`](../enums/TRet.md)

让控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[updateStyle](TWidget.md#updatestyle)

#### Defined in

[awtk.ts:11778](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11778)

___

### updateStyleRecursive

▸ **updateStyleRecursive**(): [`TRet`](../enums/TRet.md)

让控件及子控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TWidget](TWidget.md).[updateStyleRecursive](TWidget.md#updatestylerecursive)

#### Defined in

[awtk.ts:11789](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11789)

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

[TWidget](TWidget.md).[useStyle](TWidget.md#usestyle)

#### Defined in

[awtk.ts:10629](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10629)

___

### cast

▸ `Static` **cast**(`widget`): [`TWindowBase`](TWindowBase.md)

转换为window_base对象(供脚本语言使用)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `widget` | [`TWidget`](TWidget.md) | window_base对象。 |

#### Returns

[`TWindowBase`](TWindowBase.md)

window_base对象。

#### Overrides

[TWidget](TWidget.md).[cast](TWidget.md#cast)

#### Defined in

[awtk.ts:15587](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15587)
