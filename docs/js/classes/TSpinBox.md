[AWTK](../README.md) / [Exports](../modules.md) / TSpinBox

# Class: TSpinBox

spinbox控件。

一个特殊的数值编辑器，将edit\_t和button\_t进行组合，方便编辑数值。

点击向上的按钮将数值增加一个step，点击向下的按钮将数值减小一个step。
step的值可以通过step属性进行设置。

spin_box\_t是[edit\_t](edit_t.md)的子类控件，edit\_t的函数均适用于spin\_box\_t控件。

在xml中使用"spin_box"标签创建spinbox控件。如：

```xml
<spin_box w="70%" input_type="int" min="-100" max="100" step="5">
```

>
更多用法请参考：[spin_box.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/spinbox.xml)

在c代码中使用函数spin_box\_create创建spinbox控件。如：

> 创建之后:
>
> 可以用edit相关函数去设置它的各种属性。

> 完整示例请参考：[spin_box
demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/spin_box.c)

可用通过style来设置控件的显示风格，如背景和边框等。如：

```xml
<spin_box>
<style name="default" border_color="#a0a0a0"  text_color="black" text_align_h="left">
<normal     bg_color="#f0f0f0" />
<focused    bg_color="#f0f0f0" border_color="black"/>
<disable    bg_color="gray" text_color="#d0d0d0" />
<error      bg_color="#f0f0f0" text_color="red" />
<empty      bg_color="#f0f0f0" text_color="#a0a0a0" />
</style>
</spin_box>
```

> 更多用法请参考：[theme
default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L128)

## Hierarchy

- [`TEdit`](TEdit.md)

  ↳ **`TSpinBox`**

## Table of contents

### Constructors

- [constructor](TSpinBox.md#constructor)

### Properties

- [nativeObj](TSpinBox.md#nativeobj)

### Accessors

- [actionText](TSpinBox.md#actiontext)
- [animation](TSpinBox.md#animation)
- [autoAdjustSize](TSpinBox.md#autoadjustsize)
- [autoFix](TSpinBox.md#autofix)
- [cancelable](TSpinBox.md#cancelable)
- [closeImWhenBlured](TSpinBox.md#closeimwhenblured)
- [dirtyRectTolerance](TSpinBox.md#dirtyrecttolerance)
- [easyTouchMode](TSpinBox.md#easytouchmode)
- [enable](TSpinBox.md#enable)
- [feedback](TSpinBox.md#feedback)
- [floating](TSpinBox.md#floating)
- [focusable](TSpinBox.md#focusable)
- [h](TSpinBox.md#h)
- [inputType](TSpinBox.md#inputtype)
- [keyboard](TSpinBox.md#keyboard)
- [max](TSpinBox.md#max)
- [min](TSpinBox.md#min)
- [name](TSpinBox.md#name)
- [opacity](TSpinBox.md#opacity)
- [openImWhenFocused](TSpinBox.md#openimwhenfocused)
- [parent](TSpinBox.md#parent)
- [passwordVisible](TSpinBox.md#passwordvisible)
- [pointerCursor](TSpinBox.md#pointercursor)
- [readonly](TSpinBox.md#readonly)
- [selectNoneWhenFocused](TSpinBox.md#selectnonewhenfocused)
- [sensitive](TSpinBox.md#sensitive)
- [step](TSpinBox.md#step)
- [style](TSpinBox.md#style)
- [tips](TSpinBox.md#tips)
- [trText](TSpinBox.md#trtext)
- [trTips](TSpinBox.md#trtips)
- [visible](TSpinBox.md#visible)
- [w](TSpinBox.md#w)
- [withFocusState](TSpinBox.md#withfocusstate)
- [x](TSpinBox.md#x)
- [y](TSpinBox.md#y)

### Methods

- [addChild](TSpinBox.md#addchild)
- [addChildDefault](TSpinBox.md#addchilddefault)
- [addValue](TSpinBox.md#addvalue)
- [addValueInt](TSpinBox.md#addvalueint)
- [animateValueTo](TSpinBox.md#animatevalueto)
- [back](TSpinBox.md#back)
- [backToHome](TSpinBox.md#backtohome)
- [child](TSpinBox.md#child)
- [clone](TSpinBox.md#clone)
- [closeWindow](TSpinBox.md#closewindow)
- [closeWindowForce](TSpinBox.md#closewindowforce)
- [countChildren](TSpinBox.md#countchildren)
- [createAnimator](TSpinBox.md#createanimator)
- [destroy](TSpinBox.md#destroy)
- [destroyAnimator](TSpinBox.md#destroyanimator)
- [destroyAsync](TSpinBox.md#destroyasync)
- [destroyChildren](TSpinBox.md#destroychildren)
- [dispatchToKeyTarget](TSpinBox.md#dispatchtokeytarget)
- [dispatchToTarget](TSpinBox.md#dispatchtotarget)
- [equal](TSpinBox.md#equal)
- [fillBgRect](TSpinBox.md#fillbgrect)
- [fillFgRect](TSpinBox.md#fillfgrect)
- [findParentByName](TSpinBox.md#findparentbyname)
- [findParentByType](TSpinBox.md#findparentbytype)
- [focusNext](TSpinBox.md#focusnext)
- [focusPrev](TSpinBox.md#focusprev)
- [foreach](TSpinBox.md#foreach)
- [getAutoAdjustSize](TSpinBox.md#getautoadjustsize)
- [getChild](TSpinBox.md#getchild)
- [getCursor](TSpinBox.md#getcursor)
- [getDouble](TSpinBox.md#getdouble)
- [getEnable](TSpinBox.md#getenable)
- [getFeedback](TSpinBox.md#getfeedback)
- [getFloating](TSpinBox.md#getfloating)
- [getFocusable](TSpinBox.md#getfocusable)
- [getFocusedWidget](TSpinBox.md#getfocusedwidget)
- [getInt](TSpinBox.md#getint)
- [getNativeWindow](TSpinBox.md#getnativewindow)
- [getPropBool](TSpinBox.md#getpropbool)
- [getPropFloat](TSpinBox.md#getpropfloat)
- [getPropInt](TSpinBox.md#getpropint)
- [getPropPointer](TSpinBox.md#getproppointer)
- [getPropStr](TSpinBox.md#getpropstr)
- [getSelectedText](TSpinBox.md#getselectedtext)
- [getSensitive](TSpinBox.md#getsensitive)
- [getStateForStyle](TSpinBox.md#getstateforstyle)
- [getStyleType](TSpinBox.md#getstyletype)
- [getText](TSpinBox.md#gettext)
- [getThemeName](TSpinBox.md#getthemename)
- [getType](TSpinBox.md#gettype)
- [getValue](TSpinBox.md#getvalue)
- [getValueInt](TSpinBox.md#getvalueint)
- [getVisible](TSpinBox.md#getvisible)
- [getWindow](TSpinBox.md#getwindow)
- [getWindowManager](TSpinBox.md#getwindowmanager)
- [getWithFocusState](TSpinBox.md#getwithfocusstate)
- [indexOf](TSpinBox.md#indexof)
- [insertChild](TSpinBox.md#insertchild)
- [invalidateForce](TSpinBox.md#invalidateforce)
- [isDesigningWindow](TSpinBox.md#isdesigningwindow)
- [isDialog](TSpinBox.md#isdialog)
- [isDirectParentOf](TSpinBox.md#isdirectparentof)
- [isKeyboard](TSpinBox.md#iskeyboard)
- [isNormalWindow](TSpinBox.md#isnormalwindow)
- [isOpenedDialog](TSpinBox.md#isopeneddialog)
- [isOpenedPopup](TSpinBox.md#isopenedpopup)
- [isOverlay](TSpinBox.md#isoverlay)
- [isParentOf](TSpinBox.md#isparentof)
- [isPopup](TSpinBox.md#ispopup)
- [isStyleExist](TSpinBox.md#isstyleexist)
- [isSystemBar](TSpinBox.md#issystembar)
- [isWindow](TSpinBox.md#iswindow)
- [isWindowCreated](TSpinBox.md#iswindowcreated)
- [isWindowManager](TSpinBox.md#iswindowmanager)
- [isWindowOpened](TSpinBox.md#iswindowopened)
- [layout](TSpinBox.md#layout)
- [lookup](TSpinBox.md#lookup)
- [lookupByType](TSpinBox.md#lookupbytype)
- [move](TSpinBox.md#move)
- [moveResize](TSpinBox.md#moveresize)
- [moveToCenter](TSpinBox.md#movetocenter)
- [off](TSpinBox.md#off)
- [on](TSpinBox.md#on)
- [pauseAnimator](TSpinBox.md#pauseanimator)
- [removeChild](TSpinBox.md#removechild)
- [resize](TSpinBox.md#resize)
- [restack](TSpinBox.md#restack)
- [setActionText](TSpinBox.md#setactiontext)
- [setAnimation](TSpinBox.md#setanimation)
- [setAnimatorTimeScale](TSpinBox.md#setanimatortimescale)
- [setAsKeyTarget](TSpinBox.md#setaskeytarget)
- [setAutoAdjustSize](TSpinBox.md#setautoadjustsize)
- [setAutoFix](TSpinBox.md#setautofix)
- [setCancelable](TSpinBox.md#setcancelable)
- [setChildText](TSpinBox.md#setchildtext)
- [setChildTextWithDouble](TSpinBox.md#setchildtextwithdouble)
- [setChildTextWithInt](TSpinBox.md#setchildtextwithint)
- [setChildrenLayout](TSpinBox.md#setchildrenlayout)
- [setCloseImWhenBlured](TSpinBox.md#setcloseimwhenblured)
- [setCursor](TSpinBox.md#setcursor)
- [setDirtyRectTolerance](TSpinBox.md#setdirtyrecttolerance)
- [setDouble](TSpinBox.md#setdouble)
- [setDoubleEx](TSpinBox.md#setdoubleex)
- [setEasyTouchMode](TSpinBox.md#seteasytouchmode)
- [setEnable](TSpinBox.md#setenable)
- [setFeedback](TSpinBox.md#setfeedback)
- [setFloatLimit](TSpinBox.md#setfloatlimit)
- [setFloating](TSpinBox.md#setfloating)
- [setFocus](TSpinBox.md#setfocus)
- [setFocusable](TSpinBox.md#setfocusable)
- [setFocused](TSpinBox.md#setfocused)
- [setInputType](TSpinBox.md#setinputtype)
- [setInt](TSpinBox.md#setint)
- [setIntLimit](TSpinBox.md#setintlimit)
- [setKeyboard](TSpinBox.md#setkeyboard)
- [setName](TSpinBox.md#setname)
- [setOpacity](TSpinBox.md#setopacity)
- [setOpenImWhenFocused](TSpinBox.md#setopenimwhenfocused)
- [setPasswordVisible](TSpinBox.md#setpasswordvisible)
- [setPointerCursor](TSpinBox.md#setpointercursor)
- [setPropBool](TSpinBox.md#setpropbool)
- [setPropFloat](TSpinBox.md#setpropfloat)
- [setPropInt](TSpinBox.md#setpropint)
- [setPropPointer](TSpinBox.md#setproppointer)
- [setPropStr](TSpinBox.md#setpropstr)
- [setProps](TSpinBox.md#setprops)
- [setReadonly](TSpinBox.md#setreadonly)
- [setSelect](TSpinBox.md#setselect)
- [setSelectNoneWhenFocused](TSpinBox.md#setselectnonewhenfocused)
- [setSelfLayout](TSpinBox.md#setselflayout)
- [setSelfLayoutParams](TSpinBox.md#setselflayoutparams)
- [setSensitive](TSpinBox.md#setsensitive)
- [setState](TSpinBox.md#setstate)
- [setStyleColor](TSpinBox.md#setstylecolor)
- [setStyleInt](TSpinBox.md#setstyleint)
- [setStyleStr](TSpinBox.md#setstylestr)
- [setText](TSpinBox.md#settext)
- [setTextEx](TSpinBox.md#settextex)
- [setTextLimit](TSpinBox.md#settextlimit)
- [setTheme](TSpinBox.md#settheme)
- [setTips](TSpinBox.md#settips)
- [setTrText](TSpinBox.md#settrtext)
- [setTrTips](TSpinBox.md#settrtips)
- [setValue](TSpinBox.md#setvalue)
- [setValueInt](TSpinBox.md#setvalueint)
- [setVisible](TSpinBox.md#setvisible)
- [setVisibleOnly](TSpinBox.md#setvisibleonly)
- [spinSetRepeat](TSpinBox.md#spinsetrepeat)
- [startAnimator](TSpinBox.md#startanimator)
- [stopAnimator](TSpinBox.md#stopanimator)
- [strokeBorderRect](TSpinBox.md#strokeborderrect)
- [unref](TSpinBox.md#unref)
- [updateStyle](TSpinBox.md#updatestyle)
- [updateStyleRecursive](TSpinBox.md#updatestylerecursive)
- [useStyle](TSpinBox.md#usestyle)
- [cast](TSpinBox.md#cast)
- [create](TSpinBox.md#create)

## Constructors

### constructor

• **new TSpinBox**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TEdit](TEdit.md).[constructor](TEdit.md#constructor)

#### Defined in

[awtk.ts:28183](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L28183)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TEdit](TEdit.md).[nativeObj](TEdit.md#nativeobj)

#### Defined in

[awtk.ts:28182](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L28182)

## Accessors

### actionText

• `get` **actionText**(): `string`

软键盘上action按钮的文本。内置取值有：

* next 将焦点切换到下一个控件。
* done 完成，关闭软键盘。

也可以使用其它文本，比如send表示发送。这个需要自己实现相应的功能，处理EVT\_IM\_ACTION事件即可。

#### Returns

`string`

#### Inherited from

TEdit.actionText

#### Defined in

[awtk.ts:24054](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24054)

• `set` **actionText**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Inherited from

TEdit.actionText

#### Defined in

[awtk.ts:24058](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24058)

___

### animation

• `get` **animation**(): `string`

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

#### Returns

`string`

#### Inherited from

TEdit.animation

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

TEdit.animation

#### Defined in

[awtk.ts:11901](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11901)

___

### autoAdjustSize

• `get` **autoAdjustSize**(): `boolean`

是否根据子控件和文本自动调整控件自身大小。

> 为true时，最好不要使用 layout 的相关东西，否则可能有冲突。
> 注意：只是调整控件的本身的宽高，不会修改控件本身的位置。

#### Returns

`boolean`

#### Inherited from

TEdit.autoAdjustSize

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

TEdit.autoAdjustSize

#### Defined in

[awtk.ts:11992](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11992)

___

### autoFix

• `get` **autoFix**(): `boolean`

输入无效时，是否自动改正。

#### Returns

`boolean`

#### Inherited from

TEdit.autoFix

#### Defined in

[awtk.ts:24147](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24147)

• `set` **autoFix**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TEdit.autoFix

#### Defined in

[awtk.ts:24151](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24151)

___

### cancelable

• `get` **cancelable**(): `boolean`

是否支持撤销编辑。如果为TRUE，在失去焦点之前可以撤销所有修改(恢复获得焦点之前的内容)。

> * 1.一般配合keyboard的"cancel"按钮使用。
> * 2.为TRUE时，如果内容有变化，会设置编辑器的状态为changed，所以此时编辑器需要支持changed状态的style。

#### Returns

`boolean`

#### Inherited from

TEdit.cancelable

#### Defined in

[awtk.ts:24206](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24206)

• `set` **cancelable**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TEdit.cancelable

#### Defined in

[awtk.ts:24210](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24210)

___

### closeImWhenBlured

• `get` **closeImWhenBlured**(): `boolean`

是否在失去焦点时关闭输入法(默认是)。

#### Returns

`boolean`

#### Inherited from

TEdit.closeImWhenBlured

#### Defined in

[awtk.ts:24190](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24190)

• `set` **closeImWhenBlured**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TEdit.closeImWhenBlured

#### Defined in

[awtk.ts:24194](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24194)

___

### dirtyRectTolerance

• `get` **dirtyRectTolerance**(): `number`

脏矩形超出控件本身大小的最大范围(一般不用指定)。

> 如果 border 太粗或 offset 太大等原因，导致脏矩形超出控件本身大小太多（大于缺省值）时，才需要指定。

#### Returns

`number`

#### Inherited from

TEdit.dirtyRectTolerance

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

TEdit.dirtyRectTolerance

#### Defined in

[awtk.ts:12033](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12033)

___

### easyTouchMode

• `get` **easyTouchMode**(): `boolean`

是否启用易点击模式(在电容屏设备上建议启用)。
> 在该模式下：
> * 1.当高度大于font size的3倍时，inc按钮在顶部(style名为spinbox_top)，dec按钮在底部(style名为spinbox_bottom)。
> * 2.当高度正常时，dec按钮在左边(style名为spinbox_left)，inc按钮在右边(style名为spinbox_right)。
> 不在该模式下：
> inc按钮在右上角(style名为spinbox_up)，dec按钮在右下角(style名为spinbox_down)。

#### Returns

`boolean`

#### Defined in

[awtk.ts:28250](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L28250)

• `set` **easyTouchMode**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Defined in

[awtk.ts:28254](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L28254)

___

### enable

• `get` **enable**(): `boolean`

启用/禁用状态。

#### Returns

`boolean`

#### Inherited from

TEdit.enable

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

TEdit.enable

#### Defined in

[awtk.ts:11914](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11914)

___

### feedback

• `get` **feedback**(): `boolean`

是否启用按键音、触屏音和震动等反馈。

#### Returns

`boolean`

#### Inherited from

TEdit.feedback

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

TEdit.feedback

#### Defined in

[awtk.ts:11927](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11927)

___

### floating

• `get` **floating**(): `boolean`

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

#### Returns

`boolean`

#### Inherited from

TEdit.floating

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

TEdit.floating

#### Defined in

[awtk.ts:12005](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12005)

___

### focusable

• `get` **focusable**(): `boolean`

是否支持焦点停留。

#### Returns

`boolean`

#### Inherited from

TEdit.focusable

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

TEdit.focusable

#### Defined in

[awtk.ts:11966](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11966)

___

### h

• `get` **h**(): `number`

高度。

#### Returns

`number`

#### Inherited from

TEdit.h

#### Defined in

[awtk.ts:11840](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11840)

___

### inputType

• `get` **inputType**(): [`TInputType`](../enums/TInputType.md)

输入类型。

#### Returns

[`TInputType`](../enums/TInputType.md)

#### Inherited from

TEdit.inputType

#### Defined in

[awtk.ts:24108](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24108)

• `set` **inputType**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | [`TInputType`](../enums/TInputType.md) |

#### Returns

`void`

#### Inherited from

TEdit.inputType

#### Defined in

[awtk.ts:24112](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24112)

___

### keyboard

• `get` **keyboard**(): `string`

自定义软键盘名称。AWTK优先查找keyboard属性设置的键盘文件名（该键盘的XML文件需要在default\raw\ui目录下存在），如果没有指定keyboard，就找input_type设置的键盘类型。如果指定为空字符串，则表示不需要软键盘。

#### Returns

`string`

#### Inherited from

TEdit.keyboard

#### Defined in

[awtk.ts:24067](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24067)

• `set` **keyboard**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Inherited from

TEdit.keyboard

#### Defined in

[awtk.ts:24071](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24071)

___

### max

• `get` **max**(): `number`

最大值或最大长度。

#### Returns

`number`

#### Inherited from

TEdit.max

#### Defined in

[awtk.ts:24089](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24089)

___

### min

• `get` **min**(): `number`

最小值或最小长度。

#### Returns

`number`

#### Inherited from

TEdit.min

#### Defined in

[awtk.ts:24080](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24080)

___

### name

• `get` **name**(): `string`

控件名字。

#### Returns

`string`

#### Inherited from

TEdit.name

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

TEdit.name

#### Defined in

[awtk.ts:11853](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11853)

___

### opacity

• `get` **opacity**(): `number`

不透明度(0-255)，0完全透明，255完全不透明。

#### Returns

`number`

#### Inherited from

TEdit.opacity

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

TEdit.opacity

#### Defined in

[awtk.ts:12018](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12018)

___

### openImWhenFocused

• `get` **openImWhenFocused**(): `boolean`

获得焦点时打开输入法。

> 主要用于没有指针设备的情况，否则每次切换焦点时都打开输入法。

#### Returns

`boolean`

#### Inherited from

TEdit.openImWhenFocused

#### Defined in

[awtk.ts:24177](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24177)

• `set` **openImWhenFocused**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TEdit.openImWhenFocused

#### Defined in

[awtk.ts:24181](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24181)

___

### parent

• `get` **parent**(): [`TWidget`](TWidget.md)

父控件

#### Returns

[`TWidget`](TWidget.md)

#### Inherited from

TEdit.parent

#### Defined in

[awtk.ts:12042](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L12042)

___

### passwordVisible

• `get` **passwordVisible**(): `boolean`

密码是否可见。

#### Returns

`boolean`

#### Inherited from

TEdit.passwordVisible

#### Defined in

[awtk.ts:24134](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24134)

• `set` **passwordVisible**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TEdit.passwordVisible

#### Defined in

[awtk.ts:24138](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24138)

___

### pointerCursor

• `get` **pointerCursor**(): `string`

鼠标光标图片名称。

#### Returns

`string`

#### Inherited from

TEdit.pointerCursor

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

TEdit.pointerCursor

#### Defined in

[awtk.ts:11866](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11866)

___

### readonly

• `get` **readonly**(): `boolean`

编辑器是否为只读。

#### Returns

`boolean`

#### Inherited from

TEdit.readonly

#### Defined in

[awtk.ts:24121](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24121)

• `set` **readonly**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TEdit.readonly

#### Defined in

[awtk.ts:24125](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24125)

___

### selectNoneWhenFocused

• `get` **selectNoneWhenFocused**(): `boolean`

获得焦点时不选中文本。

> 主要用于没有指针设备的情况，否则软键盘无法取消选中文本。

#### Returns

`boolean`

#### Inherited from

TEdit.selectNoneWhenFocused

#### Defined in

[awtk.ts:24162](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24162)

• `set` **selectNoneWhenFocused**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TEdit.selectNoneWhenFocused

#### Defined in

[awtk.ts:24166](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24166)

___

### sensitive

• `get` **sensitive**(): `boolean`

是否接受用户事件。

#### Returns

`boolean`

#### Inherited from

TEdit.sensitive

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

TEdit.sensitive

#### Defined in

[awtk.ts:11953](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11953)

___

### step

• `get` **step**(): `number`

步长。
作为数值型编辑器时，一次增加和减少时的数值。

#### Returns

`number`

#### Inherited from

TEdit.step

#### Defined in

[awtk.ts:24099](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24099)

___

### style

• `get` **style**(): `string`

style的名称。

#### Returns

`string`

#### Inherited from

TEdit.style

#### Defined in

[awtk.ts:11888](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11888)

___

### tips

• `get` **tips**(): `string`

输入提示。

#### Returns

`string`

#### Inherited from

TEdit.tips

#### Defined in

[awtk.ts:24023](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24023)

• `set` **tips**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Inherited from

TEdit.tips

#### Defined in

[awtk.ts:24027](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24027)

___

### trText

• `get` **trText**(): `string`

保存用于翻译的字符串。

#### Returns

`string`

#### Inherited from

TEdit.trText

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

TEdit.trText

#### Defined in

[awtk.ts:11879](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11879)

___

### trTips

• `get` **trTips**(): `string`

保存用于翻译的提示信息。

#### Returns

`string`

#### Inherited from

TEdit.trTips

#### Defined in

[awtk.ts:24036](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24036)

• `set` **trTips**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Inherited from

TEdit.trTips

#### Defined in

[awtk.ts:24040](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24040)

___

### visible

• `get` **visible**(): `boolean`

是否可见。

#### Returns

`boolean`

#### Inherited from

TEdit.visible

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

TEdit.visible

#### Defined in

[awtk.ts:11940](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11940)

___

### w

• `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Inherited from

TEdit.w

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

TEdit.withFocusState

#### Defined in

[awtk.ts:11976](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11976)

___

### x

• `get` **x**(): `number`

x坐标(相对于父控件的x坐标)。

#### Returns

`number`

#### Inherited from

TEdit.x

#### Defined in

[awtk.ts:11813](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11813)

___

### y

• `get` **y**(): `number`

y坐标(相对于父控件的y坐标)。

#### Returns

`number`

#### Inherited from

TEdit.y

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

[TEdit](TEdit.md).[addChild](TEdit.md#addchild)

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

[TEdit](TEdit.md).[addChildDefault](TEdit.md#addchilddefault)

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

[TEdit](TEdit.md).[addValue](TEdit.md#addvalue)

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

[TEdit](TEdit.md).[addValueInt](TEdit.md#addvalueint)

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

[TEdit](TEdit.md).[animateValueTo](TEdit.md#animatevalueto)

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

[TEdit](TEdit.md).[back](TEdit.md#back)

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

[TEdit](TEdit.md).[backToHome](TEdit.md#backtohome)

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

[TEdit](TEdit.md).[child](TEdit.md#child)

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

[TEdit](TEdit.md).[clone](TEdit.md#clone)

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

[TEdit](TEdit.md).[closeWindow](TEdit.md#closewindow)

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

[TEdit](TEdit.md).[closeWindowForce](TEdit.md#closewindowforce)

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

[TEdit](TEdit.md).[countChildren](TEdit.md#countchildren)

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

[TEdit](TEdit.md).[createAnimator](TEdit.md#createanimator)

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

[TEdit](TEdit.md).[destroy](TEdit.md#destroy)

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

[TEdit](TEdit.md).[destroyAnimator](TEdit.md#destroyanimator)

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

[TEdit](TEdit.md).[destroyAsync](TEdit.md#destroyasync)

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

[TEdit](TEdit.md).[destroyChildren](TEdit.md#destroychildren)

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

[TEdit](TEdit.md).[dispatchToKeyTarget](TEdit.md#dispatchtokeytarget)

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

[TEdit](TEdit.md).[dispatchToTarget](TEdit.md#dispatchtotarget)

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

[TEdit](TEdit.md).[equal](TEdit.md#equal)

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

[TEdit](TEdit.md).[fillBgRect](TEdit.md#fillbgrect)

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

[TEdit](TEdit.md).[fillFgRect](TEdit.md#fillfgrect)

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

[TEdit](TEdit.md).[findParentByName](TEdit.md#findparentbyname)

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

[TEdit](TEdit.md).[findParentByType](TEdit.md#findparentbytype)

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

[TEdit](TEdit.md).[focusNext](TEdit.md#focusnext)

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

[TEdit](TEdit.md).[focusPrev](TEdit.md#focusprev)

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

[TEdit](TEdit.md).[foreach](TEdit.md#foreach)

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

[TEdit](TEdit.md).[getAutoAdjustSize](TEdit.md#getautoadjustsize)

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

[TEdit](TEdit.md).[getChild](TEdit.md#getchild)

#### Defined in

[awtk.ts:10220](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10220)

___

### getCursor

▸ **getCursor**(): `number`

获取输入框的光标位置。

#### Returns

`number`

返回光标位置。

#### Inherited from

[TEdit](TEdit.md).[getCursor](TEdit.md#getcursor)

#### Defined in

[awtk.ts:23989](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23989)

___

### getDouble

▸ **getDouble**(): `number`

获取double类型的值。

#### Returns

`number`

返回double的值。

#### Inherited from

[TEdit](TEdit.md).[getDouble](TEdit.md#getdouble)

#### Defined in

[awtk.ts:23729](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23729)

___

### getEnable

▸ **getEnable**(): `boolean`

获取控件enable属性值。

#### Returns

`boolean`

返回enable。

#### Inherited from

[TEdit](TEdit.md).[getEnable](TEdit.md#getenable)

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

[TEdit](TEdit.md).[getFeedback](TEdit.md#getfeedback)

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

[TEdit](TEdit.md).[getFloating](TEdit.md#getfloating)

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

[TEdit](TEdit.md).[getFocusable](TEdit.md#getfocusable)

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

[TEdit](TEdit.md).[getFocusedWidget](TEdit.md#getfocusedwidget)

#### Defined in

[awtk.ts:10255](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10255)

___

### getInt

▸ **getInt**(): `number`

获取int类型的值。

#### Returns

`number`

返回int的值。

#### Inherited from

[TEdit](TEdit.md).[getInt](TEdit.md#getint)

#### Defined in

[awtk.ts:23718](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23718)

___

### getNativeWindow

▸ **getNativeWindow**(): [`TNativeWindow`](TNativeWindow.md)

获取原生窗口对象。

#### Returns

[`TNativeWindow`](TNativeWindow.md)

原生窗口对象。

#### Inherited from

[TEdit](TEdit.md).[getNativeWindow](TEdit.md#getnativewindow)

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

[TEdit](TEdit.md).[getPropBool](TEdit.md#getpropbool)

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

[TEdit](TEdit.md).[getPropFloat](TEdit.md#getpropfloat)

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

[TEdit](TEdit.md).[getPropInt](TEdit.md#getpropint)

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

[TEdit](TEdit.md).[getPropPointer](TEdit.md#getproppointer)

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

[TEdit](TEdit.md).[getPropStr](TEdit.md#getpropstr)

#### Defined in

[awtk.ts:11158](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11158)

___

### getSelectedText

▸ **getSelectedText**(): `string`

获取选中的文本。
使用完后需调用 TKMEM_FREE() 进行释放文本占有内存。

#### Returns

`string`

返回选中文本。

#### Inherited from

[TEdit](TEdit.md).[getSelectedText](TEdit.md#getselectedtext)

#### Defined in

[awtk.ts:24014](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24014)

___

### getSensitive

▸ **getSensitive**(): `boolean`

获取控件sensitive属性值。

#### Returns

`boolean`

返回sensitive。

#### Inherited from

[TEdit](TEdit.md).[getSensitive](TEdit.md#getsensitive)

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

[TEdit](TEdit.md).[getStateForStyle](TEdit.md#getstateforstyle)

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

[TEdit](TEdit.md).[getStyleType](TEdit.md#getstyletype)

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

[TEdit](TEdit.md).[getText](TEdit.md#gettext)

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

[TEdit](TEdit.md).[getThemeName](TEdit.md#getthemename)

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

[TEdit](TEdit.md).[getType](TEdit.md#gettype)

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

[TEdit](TEdit.md).[getValue](TEdit.md#getvalue)

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

[TEdit](TEdit.md).[getValueInt](TEdit.md#getvalueint)

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

[TEdit](TEdit.md).[getVisible](TEdit.md#getvisible)

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

[TEdit](TEdit.md).[getWindow](TEdit.md#getwindow)

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

[TEdit](TEdit.md).[getWindowManager](TEdit.md#getwindowmanager)

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

[TEdit](TEdit.md).[getWithFocusState](TEdit.md#getwithfocusstate)

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

[TEdit](TEdit.md).[indexOf](TEdit.md#indexof)

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

[TEdit](TEdit.md).[insertChild](TEdit.md#insertchild)

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

[TEdit](TEdit.md).[invalidateForce](TEdit.md#invalidateforce)

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

[TEdit](TEdit.md).[isDesigningWindow](TEdit.md#isdesigningwindow)

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

[TEdit](TEdit.md).[isDialog](TEdit.md#isdialog)

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

[TEdit](TEdit.md).[isDirectParentOf](TEdit.md#isdirectparentof)

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

[TEdit](TEdit.md).[isKeyboard](TEdit.md#iskeyboard)

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

[TEdit](TEdit.md).[isNormalWindow](TEdit.md#isnormalwindow)

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

[TEdit](TEdit.md).[isOpenedDialog](TEdit.md#isopeneddialog)

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

[TEdit](TEdit.md).[isOpenedPopup](TEdit.md#isopenedpopup)

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

[TEdit](TEdit.md).[isOverlay](TEdit.md#isoverlay)

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

[TEdit](TEdit.md).[isParentOf](TEdit.md#isparentof)

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

[TEdit](TEdit.md).[isPopup](TEdit.md#ispopup)

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

[TEdit](TEdit.md).[isStyleExist](TEdit.md#isstyleexist)

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

[TEdit](TEdit.md).[isSystemBar](TEdit.md#issystembar)

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

[TEdit](TEdit.md).[isWindow](TEdit.md#iswindow)

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

[TEdit](TEdit.md).[isWindowCreated](TEdit.md#iswindowcreated)

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

[TEdit](TEdit.md).[isWindowManager](TEdit.md#iswindowmanager)

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

[TEdit](TEdit.md).[isWindowOpened](TEdit.md#iswindowopened)

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

[TEdit](TEdit.md).[layout](TEdit.md#layout)

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

[TEdit](TEdit.md).[lookup](TEdit.md#lookup)

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

[TEdit](TEdit.md).[lookupByType](TEdit.md#lookupbytype)

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

[TEdit](TEdit.md).[move](TEdit.md#move)

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

[TEdit](TEdit.md).[moveResize](TEdit.md#moveresize)

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

[TEdit](TEdit.md).[moveToCenter](TEdit.md#movetocenter)

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

[TEdit](TEdit.md).[off](TEdit.md#off)

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

[TEdit](TEdit.md).[on](TEdit.md#on)

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

[TEdit](TEdit.md).[pauseAnimator](TEdit.md#pauseanimator)

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

[TEdit](TEdit.md).[removeChild](TEdit.md#removechild)

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

[TEdit](TEdit.md).[resize](TEdit.md#resize)

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

[TEdit](TEdit.md).[restack](TEdit.md#restack)

#### Defined in

[awtk.ts:11004](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11004)

___

### setActionText

▸ **setActionText**(`action_text`): [`TRet`](../enums/TRet.md)

设置软键盘上action按钮的文本。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `action_text` | `string` | 软键盘上action按钮的文本。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setActionText](TEdit.md#setactiontext)

#### Defined in

[awtk.ts:23906](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23906)

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

[TEdit](TEdit.md).[setAnimation](TEdit.md#setanimation)

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

[TEdit](TEdit.md).[setAnimatorTimeScale](TEdit.md#setanimatortimescale)

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

[TEdit](TEdit.md).[setAsKeyTarget](TEdit.md#setaskeytarget)

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

[TEdit](TEdit.md).[setAutoAdjustSize](TEdit.md#setautoadjustsize)

#### Defined in

[awtk.ts:10869](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10869)

___

### setAutoFix

▸ **setAutoFix**(`auto_fix`): [`TRet`](../enums/TRet.md)

设置编辑器是否为自动改正。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `auto_fix` | `boolean` | 自动改正。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setAutoFix](TEdit.md#setautofix)

#### Defined in

[awtk.ts:23843](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23843)

___

### setCancelable

▸ **setCancelable**(`cancelable`): [`TRet`](../enums/TRet.md)

设置编辑器是否为可撤销修改。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `cancelable` | `boolean` | 是否为可撤销修。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setCancelable](TEdit.md#setcancelable)

#### Defined in

[awtk.ts:23831](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23831)

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

[TEdit](TEdit.md).[setChildText](TEdit.md#setchildtext)

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

[TEdit](TEdit.md).[setChildTextWithDouble](TEdit.md#setchildtextwithdouble)

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

[TEdit](TEdit.md).[setChildTextWithInt](TEdit.md#setchildtextwithint)

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

[TEdit](TEdit.md).[setChildrenLayout](TEdit.md#setchildrenlayout)

#### Defined in

[awtk.ts:11731](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11731)

___

### setCloseImWhenBlured

▸ **setCloseImWhenBlured**(`close_im_when_blured`): [`TRet`](../enums/TRet.md)

设置编辑器是否在失去焦点时关闭输入法。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `close_im_when_blured` | `boolean` | 是否是否在失去焦点时关闭输入法。在失去焦点时关闭输入法。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setCloseImWhenBlured](TEdit.md#setcloseimwhenblured)

#### Defined in

[awtk.ts:23882](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23882)

___

### setCursor

▸ **setCursor**(`cursor`): [`TRet`](../enums/TRet.md)

设置输入框的光标位置。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `cursor` | `number` | 光标位置。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setCursor](TEdit.md#setcursor)

#### Defined in

[awtk.ts:23978](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23978)

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

[TEdit](TEdit.md).[setDirtyRectTolerance](TEdit.md#setdirtyrecttolerance)

#### Defined in

[awtk.ts:10944](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10944)

___

### setDouble

▸ **setDouble**(`value`): [`TRet`](../enums/TRet.md)

设置double类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setDouble](TEdit.md#setdouble)

#### Defined in

[awtk.ts:23753](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23753)

___

### setDoubleEx

▸ **setDoubleEx**(`format`, `value`): [`TRet`](../enums/TRet.md)

设置double类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `format` | `string` | 格式(缺省为"%2.2lf")。 |
| `value` | `any` | 值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setDoubleEx](TEdit.md#setdoubleex)

#### Defined in

[awtk.ts:23766](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23766)

___

### setEasyTouchMode

▸ **setEasyTouchMode**(`easy_touch_mode`): [`TRet`](../enums/TRet.md)

设置是否启用易点击模式。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `easy_touch_mode` | `boolean` | 易点击模式。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28223](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L28223)

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

[TEdit](TEdit.md).[setEnable](TEdit.md#setenable)

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

[TEdit](TEdit.md).[setFeedback](TEdit.md#setfeedback)

#### Defined in

[awtk.ts:10857](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10857)

___

### setFloatLimit

▸ **setFloatLimit**(`min`, `max`, `step`): [`TRet`](../enums/TRet.md)

设置为浮点数输入及取值范围。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `min` | `number` | 最小值。 |
| `max` | `number` | 最大值。 |
| `step` | `number` | 步长。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setFloatLimit](TEdit.md#setfloatlimit)

#### Defined in

[awtk.ts:23807](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23807)

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

[TEdit](TEdit.md).[setFloating](TEdit.md#setfloating)

#### Defined in

[awtk.ts:10882](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10882)

___

### setFocus

▸ **setFocus**(`focus`): [`TRet`](../enums/TRet.md)

设置为焦点。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `focus` | `boolean` | 是否为焦点。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setFocus](TEdit.md#setfocus)

#### Defined in

[awtk.ts:23966](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23966)

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

[TEdit](TEdit.md).[setFocusable](TEdit.md#setfocusable)

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

[TEdit](TEdit.md).[setFocused](TEdit.md#setfocused)

#### Defined in

[awtk.ts:10894](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10894)

___

### setInputType

▸ **setInputType**(`type`): [`TRet`](../enums/TRet.md)

设置编辑器的输入类型。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `type` | [`TInputType`](../enums/TInputType.md) | 输入类型。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setInputType](TEdit.md#setinputtype)

#### Defined in

[awtk.ts:23894](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23894)

___

### setInt

▸ **setInt**(`value`): [`TRet`](../enums/TRet.md)

设置int类型的值。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `value` | `any` | 值。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setInt](TEdit.md#setint)

#### Defined in

[awtk.ts:23741](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23741)

___

### setIntLimit

▸ **setIntLimit**(`min`, `max`, `step`): [`TRet`](../enums/TRet.md)

设置为整数输入及取值范围。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `min` | `number` | 最小值。 |
| `max` | `number` | 最大值。 |
| `step` | `number` | 步长。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setIntLimit](TEdit.md#setintlimit)

#### Defined in

[awtk.ts:23793](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23793)

___

### setKeyboard

▸ **setKeyboard**(`keyboard`): [`TRet`](../enums/TRet.md)

设置自定义软键盘名称。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `keyboard` | `string` | 键盘名称(相应UI资源必须存在)。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setKeyboard](TEdit.md#setkeyboard)

#### Defined in

[awtk.ts:23942](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23942)

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

[TEdit](TEdit.md).[setName](TEdit.md#setname)

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

[TEdit](TEdit.md).[setOpacity](TEdit.md#setopacity)

#### Defined in

[awtk.ts:10932](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10932)

___

### setOpenImWhenFocused

▸ **setOpenImWhenFocused**(`open_im_when_focused`): [`TRet`](../enums/TRet.md)

设置编辑器是否在获得焦点时打开输入法。

> * 设置默认焦点时，打开窗口时不弹出软键盘。
> * 用键盘切换焦点时，编辑器获得焦点时不弹出软键盘。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `open_im_when_focused` | `boolean` | 是否在获得焦点时打开输入法。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setOpenImWhenFocused](TEdit.md#setopenimwhenfocused)

#### Defined in

[awtk.ts:23870](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23870)

___

### setPasswordVisible

▸ **setPasswordVisible**(`password_visible`): [`TRet`](../enums/TRet.md)

当编辑器输入类型为密码时，设置密码是否可见。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `password_visible` | `boolean` | 密码是否可见。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setPasswordVisible](TEdit.md#setpasswordvisible)

#### Defined in

[awtk.ts:23954](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23954)

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

[TEdit](TEdit.md).[setPointerCursor](TEdit.md#setpointercursor)

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

[TEdit](TEdit.md).[setPropBool](TEdit.md#setpropbool)

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

[TEdit](TEdit.md).[setPropFloat](TEdit.md#setpropfloat)

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

[TEdit](TEdit.md).[setPropInt](TEdit.md#setpropint)

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

[TEdit](TEdit.md).[setPropPointer](TEdit.md#setproppointer)

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

[TEdit](TEdit.md).[setPropStr](TEdit.md#setpropstr)

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

[TEdit](TEdit.md).[setProps](TEdit.md#setprops)

#### Defined in

[awtk.ts:11132](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11132)

___

### setReadonly

▸ **setReadonly**(`readonly`): [`TRet`](../enums/TRet.md)

设置编辑器是否为只读。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `readonly` | `boolean` | 只读。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setReadonly](TEdit.md#setreadonly)

#### Defined in

[awtk.ts:23819](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23819)

___

### setSelect

▸ **setSelect**(`start`, `end`): [`TRet`](../enums/TRet.md)

选择指定范围的文本。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `start` | `number` | 起始偏移。 |
| `end` | `number` | 结束偏移。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setSelect](TEdit.md#setselect)

#### Defined in

[awtk.ts:24002](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L24002)

___

### setSelectNoneWhenFocused

▸ **setSelectNoneWhenFocused**(`select_none_when_focused`): [`TRet`](../enums/TRet.md)

设置编辑器是否在获得焦点时不选中文本。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `select_none_when_focused` | `boolean` | 是否在获得焦点时不选中文本。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setSelectNoneWhenFocused](TEdit.md#setselectnonewhenfocused)

#### Defined in

[awtk.ts:23855](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23855)

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

[TEdit](TEdit.md).[setSelfLayout](TEdit.md#setselflayout)

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

[TEdit](TEdit.md).[setSelfLayoutParams](TEdit.md#setselflayoutparams)

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

[TEdit](TEdit.md).[setSensitive](TEdit.md#setsensitive)

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

[TEdit](TEdit.md).[setState](TEdit.md#setstate)

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

[TEdit](TEdit.md).[setStyleColor](TEdit.md#setstylecolor)

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

[TEdit](TEdit.md).[setStyleInt](TEdit.md#setstyleint)

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

[TEdit](TEdit.md).[setStyleStr](TEdit.md#setstylestr)

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

[TEdit](TEdit.md).[setText](TEdit.md#settext)

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

[TEdit](TEdit.md).[setTextEx](TEdit.md#settextex)

#### Defined in

[awtk.ts:10511](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10511)

___

### setTextLimit

▸ **setTextLimit**(`min`, `max`): [`TRet`](../enums/TRet.md)

设置为文本输入及其长度限制，不允许输入超过max个字符，少于min个字符时进入error状态。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `min` | `number` | 最小长度。 |
| `max` | `number` | 最大长度。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setTextLimit](TEdit.md#settextlimit)

#### Defined in

[awtk.ts:23779](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23779)

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

[TEdit](TEdit.md).[setTheme](TEdit.md#settheme)

#### Defined in

[awtk.ts:10695](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10695)

___

### setTips

▸ **setTips**(`tips`): [`TRet`](../enums/TRet.md)

设置编辑器的输入提示。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `tips` | `string` | 输入提示。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setTips](TEdit.md#settips)

#### Defined in

[awtk.ts:23918](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23918)

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

[TEdit](TEdit.md).[setTrText](TEdit.md#settrtext)

#### Defined in

[awtk.ts:10567](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10567)

___

### setTrTips

▸ **setTrTips**(`tr_tips`): [`TRet`](../enums/TRet.md)

获取翻译之后的文本，然后调用edit_set_tips。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `tr_tips` | `string` | 提示信息。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TEdit](TEdit.md).[setTrTips](TEdit.md#settrtips)

#### Defined in

[awtk.ts:23930](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L23930)

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

[TEdit](TEdit.md).[setValue](TEdit.md#setvalue)

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

[TEdit](TEdit.md).[setValueInt](TEdit.md#setvalueint)

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

[TEdit](TEdit.md).[setVisible](TEdit.md#setvisible)

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

[TEdit](TEdit.md).[setVisibleOnly](TEdit.md#setvisibleonly)

#### Defined in

[awtk.ts:11066](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L11066)

___

### spinSetRepeat

▸ **spinSetRepeat**(`repeat`): [`TRet`](../enums/TRet.md)

设置连击的时间间隔。
备注：时间间隔越低，速度越快。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `repeat` | `number` | 连击的时间间隔。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28236](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L28236)

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

[TEdit](TEdit.md).[startAnimator](TEdit.md#startanimator)

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

[TEdit](TEdit.md).[stopAnimator](TEdit.md#stopanimator)

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

[TEdit](TEdit.md).[strokeBorderRect](TEdit.md#strokeborderrect)

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

[TEdit](TEdit.md).[unref](TEdit.md#unref)

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

[TEdit](TEdit.md).[updateStyle](TEdit.md#updatestyle)

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

[TEdit](TEdit.md).[updateStyleRecursive](TEdit.md#updatestylerecursive)

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

[TEdit](TEdit.md).[useStyle](TEdit.md#usestyle)

#### Defined in

[awtk.ts:10486](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L10486)

___

### cast

▸ `Static` **cast**(`widget`): [`TSpinBox`](TSpinBox.md)

转换为spin_box对象(供脚本语言使用)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `widget` | [`TWidget`](TWidget.md) | spin_box对象。 |

#### Returns

[`TSpinBox`](TSpinBox.md)

spin_box对象。

#### Overrides

[TEdit](TEdit.md).[cast](TEdit.md#cast)

#### Defined in

[awtk.ts:28211](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L28211)

___

### create

▸ `Static` **create**(`parent`, `x`, `y`, `w`, `h`): [`TSpinBox`](TSpinBox.md)

创建spin_box对象

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `parent` | [`TWidget`](TWidget.md) | 父控件 |
| `x` | `number` | x坐标 |
| `y` | `number` | y坐标 |
| `w` | `number` | 宽度 |
| `h` | `number` | 高度 |

#### Returns

[`TSpinBox`](TSpinBox.md)

对象。

#### Overrides

[TEdit](TEdit.md).[create](TEdit.md#create)

#### Defined in

[awtk.ts:28199](https://github.com/zlgopen/awtk-binding/blob/527f1f8/tools/code_gen/js/output/awtk.ts#L28199)
