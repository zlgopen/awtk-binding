[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TSpinBox](_awtk_.tspinbox.md)

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
更多用法请参考：[spin_box.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/spinbox.xml)

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
default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L128)

## Hierarchy

  ↳ [TEdit](_awtk_.tedit.md)

  ↳ **TSpinBox**

## Index

### Constructors

* [constructor](_awtk_.tspinbox.md#constructor)

### Properties

* [nativeObj](_awtk_.tspinbox.md#nativeobj)

### Accessors

* [animation](_awtk_.tspinbox.md#animation)
* [autoFix](_awtk_.tspinbox.md#autofix)
* [enable](_awtk_.tspinbox.md#enable)
* [feedback](_awtk_.tspinbox.md#feedback)
* [floating](_awtk_.tspinbox.md#floating)
* [focusable](_awtk_.tspinbox.md#focusable)
* [h](_awtk_.tspinbox.md#h)
* [inputType](_awtk_.tspinbox.md#inputtype)
* [max](_awtk_.tspinbox.md#max)
* [min](_awtk_.tspinbox.md#min)
* [name](_awtk_.tspinbox.md#name)
* [openImWhenFocused](_awtk_.tspinbox.md#openimwhenfocused)
* [parent](_awtk_.tspinbox.md#parent)
* [passwordVisible](_awtk_.tspinbox.md#passwordvisible)
* [readonly](_awtk_.tspinbox.md#readonly)
* [selectNoneWhenFocused](_awtk_.tspinbox.md#selectnonewhenfocused)
* [sensitive](_awtk_.tspinbox.md#sensitive)
* [step](_awtk_.tspinbox.md#step)
* [style](_awtk_.tspinbox.md#style)
* [tips](_awtk_.tspinbox.md#tips)
* [trText](_awtk_.tspinbox.md#trtext)
* [visible](_awtk_.tspinbox.md#visible)
* [w](_awtk_.tspinbox.md#w)
* [withFocusState](_awtk_.tspinbox.md#withfocusstate)
* [x](_awtk_.tspinbox.md#x)
* [y](_awtk_.tspinbox.md#y)

### Methods

* [addChild](_awtk_.tspinbox.md#addchild)
* [addValue](_awtk_.tspinbox.md#addvalue)
* [animateValueTo](_awtk_.tspinbox.md#animatevalueto)
* [child](_awtk_.tspinbox.md#child)
* [clone](_awtk_.tspinbox.md#clone)
* [closeWindow](_awtk_.tspinbox.md#closewindow)
* [countChildren](_awtk_.tspinbox.md#countchildren)
* [createAnimator](_awtk_.tspinbox.md#createanimator)
* [destroy](_awtk_.tspinbox.md#destroy)
* [destroyAnimator](_awtk_.tspinbox.md#destroyanimator)
* [destroyChildren](_awtk_.tspinbox.md#destroychildren)
* [equal](_awtk_.tspinbox.md#equal)
* [foreach](_awtk_.tspinbox.md#foreach)
* [getChild](_awtk_.tspinbox.md#getchild)
* [getDouble](_awtk_.tspinbox.md#getdouble)
* [getInt](_awtk_.tspinbox.md#getint)
* [getPropBool](_awtk_.tspinbox.md#getpropbool)
* [getPropInt](_awtk_.tspinbox.md#getpropint)
* [getPropStr](_awtk_.tspinbox.md#getpropstr)
* [getText](_awtk_.tspinbox.md#gettext)
* [getType](_awtk_.tspinbox.md#gettype)
* [getValue](_awtk_.tspinbox.md#getvalue)
* [getWindow](_awtk_.tspinbox.md#getwindow)
* [getWindowManager](_awtk_.tspinbox.md#getwindowmanager)
* [indexOf](_awtk_.tspinbox.md#indexof)
* [insertChild](_awtk_.tspinbox.md#insertchild)
* [invalidateForce](_awtk_.tspinbox.md#invalidateforce)
* [isDesigningWindow](_awtk_.tspinbox.md#isdesigningwindow)
* [isDialog](_awtk_.tspinbox.md#isdialog)
* [isNormalWindow](_awtk_.tspinbox.md#isnormalwindow)
* [isPopup](_awtk_.tspinbox.md#ispopup)
* [isSystemBar](_awtk_.tspinbox.md#issystembar)
* [isWindow](_awtk_.tspinbox.md#iswindow)
* [isWindowManager](_awtk_.tspinbox.md#iswindowmanager)
* [isWindowOpened](_awtk_.tspinbox.md#iswindowopened)
* [layout](_awtk_.tspinbox.md#layout)
* [lookup](_awtk_.tspinbox.md#lookup)
* [lookupByType](_awtk_.tspinbox.md#lookupbytype)
* [move](_awtk_.tspinbox.md#move)
* [moveResize](_awtk_.tspinbox.md#moveresize)
* [off](_awtk_.tspinbox.md#off)
* [on](_awtk_.tspinbox.md#on)
* [pauseAnimator](_awtk_.tspinbox.md#pauseanimator)
* [removeChild](_awtk_.tspinbox.md#removechild)
* [resize](_awtk_.tspinbox.md#resize)
* [restack](_awtk_.tspinbox.md#restack)
* [setAnimation](_awtk_.tspinbox.md#setanimation)
* [setAnimatorTimeScale](_awtk_.tspinbox.md#setanimatortimescale)
* [setAutoFix](_awtk_.tspinbox.md#setautofix)
* [setChildrenLayout](_awtk_.tspinbox.md#setchildrenlayout)
* [setCursor](_awtk_.tspinbox.md#setcursor)
* [setDouble](_awtk_.tspinbox.md#setdouble)
* [setEnable](_awtk_.tspinbox.md#setenable)
* [setFeedback](_awtk_.tspinbox.md#setfeedback)
* [setFloatLimit](_awtk_.tspinbox.md#setfloatlimit)
* [setFloating](_awtk_.tspinbox.md#setfloating)
* [setFocus](_awtk_.tspinbox.md#setfocus)
* [setFocusable](_awtk_.tspinbox.md#setfocusable)
* [setFocused](_awtk_.tspinbox.md#setfocused)
* [setInputTips](_awtk_.tspinbox.md#setinputtips)
* [setInputType](_awtk_.tspinbox.md#setinputtype)
* [setInt](_awtk_.tspinbox.md#setint)
* [setIntLimit](_awtk_.tspinbox.md#setintlimit)
* [setName](_awtk_.tspinbox.md#setname)
* [setOpacity](_awtk_.tspinbox.md#setopacity)
* [setOpenImWhenFocused](_awtk_.tspinbox.md#setopenimwhenfocused)
* [setPasswordVisible](_awtk_.tspinbox.md#setpasswordvisible)
* [setPointerCursor](_awtk_.tspinbox.md#setpointercursor)
* [setPropBool](_awtk_.tspinbox.md#setpropbool)
* [setPropInt](_awtk_.tspinbox.md#setpropint)
* [setPropStr](_awtk_.tspinbox.md#setpropstr)
* [setReadonly](_awtk_.tspinbox.md#setreadonly)
* [setSelectNoneWhenFocused](_awtk_.tspinbox.md#setselectnonewhenfocused)
* [setSelfLayout](_awtk_.tspinbox.md#setselflayout)
* [setSelfLayoutParams](_awtk_.tspinbox.md#setselflayoutparams)
* [setSensitive](_awtk_.tspinbox.md#setsensitive)
* [setState](_awtk_.tspinbox.md#setstate)
* [setStyleColor](_awtk_.tspinbox.md#setstylecolor)
* [setStyleInt](_awtk_.tspinbox.md#setstyleint)
* [setStyleStr](_awtk_.tspinbox.md#setstylestr)
* [setText](_awtk_.tspinbox.md#settext)
* [setTextLimit](_awtk_.tspinbox.md#settextlimit)
* [setTheme](_awtk_.tspinbox.md#settheme)
* [setTrText](_awtk_.tspinbox.md#settrtext)
* [setValue](_awtk_.tspinbox.md#setvalue)
* [setVisible](_awtk_.tspinbox.md#setvisible)
* [setVisibleOnly](_awtk_.tspinbox.md#setvisibleonly)
* [startAnimator](_awtk_.tspinbox.md#startanimator)
* [stopAnimator](_awtk_.tspinbox.md#stopanimator)
* [unref](_awtk_.tspinbox.md#unref)
* [useStyle](_awtk_.tspinbox.md#usestyle)
* [cast](_awtk_.tspinbox.md#static-cast)
* [create](_awtk_.tspinbox.md#static-create)

## Constructors

###  constructor

\+ **new TSpinBox**(`nativeObj`: any): *[TSpinBox](_awtk_.tspinbox.md)*

*Overrides [TEdit](_awtk_.tedit.md).[constructor](_awtk_.tedit.md#constructor)*

*Defined in [awtk.ts:20046](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L20046)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TSpinBox](_awtk_.tspinbox.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TEdit](_awtk_.tedit.md).[nativeObj](_awtk_.tedit.md#nativeobj)*

*Defined in [awtk.ts:20046](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L20046)*

## Accessors

###  animation

• **get animation**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[animation](_awtk_.twidget.md#animation)*

*Defined in [awtk.ts:8496](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8496)*

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

**Returns:** *string*

• **set animation**(`v`: string): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[animation](_awtk_.twidget.md#animation)*

*Defined in [awtk.ts:8500](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8500)*

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  autoFix

• **get autoFix**(): *boolean*

*Inherited from [TEdit](_awtk_.tedit.md).[autoFix](_awtk_.tedit.md#autofix)*

*Defined in [awtk.ts:17762](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17762)*

输入无效时，是否自动改正。

**Returns:** *boolean*

• **set autoFix**(`v`: boolean): *void*

*Inherited from [TEdit](_awtk_.tedit.md).[autoFix](_awtk_.tedit.md#autofix)*

*Defined in [awtk.ts:17766](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17766)*

输入无效时，是否自动改正。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  enable

• **get enable**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[enable](_awtk_.twidget.md#enable)*

*Defined in [awtk.ts:8509](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8509)*

启用/禁用状态。

**Returns:** *boolean*

• **set enable**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[enable](_awtk_.twidget.md#enable)*

*Defined in [awtk.ts:8513](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8513)*

启用/禁用状态。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  feedback

• **get feedback**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[feedback](_awtk_.twidget.md#feedback)*

*Defined in [awtk.ts:8522](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8522)*

是否启用按键音、触屏音和震动等反馈。

**Returns:** *boolean*

• **set feedback**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[feedback](_awtk_.twidget.md#feedback)*

*Defined in [awtk.ts:8526](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8526)*

是否启用按键音、触屏音和震动等反馈。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  floating

• **get floating**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[floating](_awtk_.twidget.md#floating)*

*Defined in [awtk.ts:8588](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8588)*

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

**Returns:** *boolean*

• **set floating**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[floating](_awtk_.twidget.md#floating)*

*Defined in [awtk.ts:8592](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8592)*

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  focusable

• **get focusable**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[focusable](_awtk_.twidget.md#focusable)*

*Defined in [awtk.ts:8561](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8561)*

是否支持焦点停留。

**Returns:** *boolean*

• **set focusable**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[focusable](_awtk_.twidget.md#focusable)*

*Defined in [awtk.ts:8565](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8565)*

是否支持焦点停留。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  h

• **get h**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[h](_awtk_.twidget.md#h)*

*Defined in [awtk.ts:8452](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8452)*

高度。

**Returns:** *number*

___

###  inputType

• **get inputType**(): *[TInputType](../enums/_awtk_.tinputtype.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[inputType](_awtk_.tedit.md#inputtype)*

*Defined in [awtk.ts:17814](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17814)*

输入类型。

**Returns:** *[TInputType](../enums/_awtk_.tinputtype.md)*

• **set inputType**(`v`: [TInputType](../enums/_awtk_.tinputtype.md)): *void*

*Inherited from [TEdit](_awtk_.tedit.md).[inputType](_awtk_.tedit.md#inputtype)*

*Defined in [awtk.ts:17818](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17818)*

输入类型。

**Parameters:**

Name | Type |
------ | ------ |
`v` | [TInputType](../enums/_awtk_.tinputtype.md) |

**Returns:** *void*

___

###  max

• **get max**(): *number*

*Inherited from [TEdit](_awtk_.tedit.md).[max](_awtk_.tedit.md#max)*

*Defined in [awtk.ts:17836](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17836)*

最大值或最大长度。

**Returns:** *number*

___

###  min

• **get min**(): *number*

*Inherited from [TEdit](_awtk_.tedit.md).[min](_awtk_.tedit.md#min)*

*Defined in [awtk.ts:17827](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17827)*

最小值或最小长度。

**Returns:** *number*

___

###  name

• **get name**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[name](_awtk_.twidget.md#name)*

*Defined in [awtk.ts:8461](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8461)*

控件名字。

**Returns:** *string*

• **set name**(`v`: string): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[name](_awtk_.twidget.md#name)*

*Defined in [awtk.ts:8465](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8465)*

控件名字。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  openImWhenFocused

• **get openImWhenFocused**(): *boolean*

*Inherited from [TEdit](_awtk_.tedit.md).[openImWhenFocused](_awtk_.tedit.md#openimwhenfocused)*

*Defined in [awtk.ts:17792](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17792)*

获得焦点时打开输入法。

> 主要用于没有指针设备的情况，否则每次切换焦点时都打开输入法。

**Returns:** *boolean*

• **set openImWhenFocused**(`v`: boolean): *void*

*Inherited from [TEdit](_awtk_.tedit.md).[openImWhenFocused](_awtk_.tedit.md#openimwhenfocused)*

*Defined in [awtk.ts:17796](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17796)*

获得焦点时打开输入法。

> 主要用于没有指针设备的情况，否则每次切换焦点时都打开输入法。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  parent

• **get parent**(): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[parent](_awtk_.twidget.md#parent)*

*Defined in [awtk.ts:8601](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8601)*

父控件

**Returns:** *[TWidget](_awtk_.twidget.md)*

___

###  passwordVisible

• **get passwordVisible**(): *boolean*

*Inherited from [TEdit](_awtk_.tedit.md).[passwordVisible](_awtk_.tedit.md#passwordvisible)*

*Defined in [awtk.ts:17749](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17749)*

密码是否可见。

**Returns:** *boolean*

• **set passwordVisible**(`v`: boolean): *void*

*Inherited from [TEdit](_awtk_.tedit.md).[passwordVisible](_awtk_.tedit.md#passwordvisible)*

*Defined in [awtk.ts:17753](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17753)*

密码是否可见。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  readonly

• **get readonly**(): *boolean*

*Inherited from [TEdit](_awtk_.tedit.md).[readonly](_awtk_.tedit.md#readonly)*

*Defined in [awtk.ts:17736](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17736)*

编辑器是否为只读。

**Returns:** *boolean*

• **set readonly**(`v`: boolean): *void*

*Inherited from [TEdit](_awtk_.tedit.md).[readonly](_awtk_.tedit.md#readonly)*

*Defined in [awtk.ts:17740](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17740)*

编辑器是否为只读。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  selectNoneWhenFocused

• **get selectNoneWhenFocused**(): *boolean*

*Inherited from [TEdit](_awtk_.tedit.md).[selectNoneWhenFocused](_awtk_.tedit.md#selectnonewhenfocused)*

*Defined in [awtk.ts:17777](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17777)*

获得焦点时不选中文本。

> 主要用于没有指针设备的情况，否则软键盘无法取消选中文本。

**Returns:** *boolean*

• **set selectNoneWhenFocused**(`v`: boolean): *void*

*Inherited from [TEdit](_awtk_.tedit.md).[selectNoneWhenFocused](_awtk_.tedit.md#selectnonewhenfocused)*

*Defined in [awtk.ts:17781](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17781)*

获得焦点时不选中文本。

> 主要用于没有指针设备的情况，否则软键盘无法取消选中文本。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  sensitive

• **get sensitive**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[sensitive](_awtk_.twidget.md#sensitive)*

*Defined in [awtk.ts:8548](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8548)*

是否接受用户事件。

**Returns:** *boolean*

• **set sensitive**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[sensitive](_awtk_.twidget.md#sensitive)*

*Defined in [awtk.ts:8552](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8552)*

是否接受用户事件。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  step

• **get step**(): *number*

*Inherited from [TEdit](_awtk_.tedit.md).[step](_awtk_.tedit.md#step)*

*Defined in [awtk.ts:17846](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17846)*

步长。
作为数值型编辑器时，一次增加和减少时的数值。

**Returns:** *number*

___

###  style

• **get style**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[style](_awtk_.twidget.md#style)*

*Defined in [awtk.ts:8487](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8487)*

style的名称。

**Returns:** *string*

___

###  tips

• **get tips**(): *string*

*Inherited from [TEdit](_awtk_.tedit.md).[tips](_awtk_.tedit.md#tips)*

*Defined in [awtk.ts:17805](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17805)*

输入提示。

**Returns:** *string*

___

###  trText

• **get trText**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[trText](_awtk_.twidget.md#trtext)*

*Defined in [awtk.ts:8474](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8474)*

保存用于翻译的字符串。

**Returns:** *string*

• **set trText**(`v`: string): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[trText](_awtk_.twidget.md#trtext)*

*Defined in [awtk.ts:8478](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8478)*

保存用于翻译的字符串。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  visible

• **get visible**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[visible](_awtk_.twidget.md#visible)*

*Defined in [awtk.ts:8535](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8535)*

是否可见。

**Returns:** *boolean*

• **set visible**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[visible](_awtk_.twidget.md#visible)*

*Defined in [awtk.ts:8539](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8539)*

是否可见。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  w

• **get w**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[w](_awtk_.twidget.md#w)*

*Defined in [awtk.ts:8443](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8443)*

宽度。

**Returns:** *number*

___

###  withFocusState

• **get withFocusState**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[withFocusState](_awtk_.twidget.md#withfocusstate)*

*Defined in [awtk.ts:8575](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8575)*

是否支持焦点状态。
> 如果希望style支持焦点状态，但有不希望焦点停留，可用本属性。

**Returns:** *boolean*

• **set withFocusState**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[withFocusState](_awtk_.twidget.md#withfocusstate)*

*Defined in [awtk.ts:8579](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8579)*

是否支持焦点状态。
> 如果希望style支持焦点状态，但有不希望焦点停留，可用本属性。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  x

• **get x**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[x](_awtk_.twidget.md#x)*

*Defined in [awtk.ts:8425](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8425)*

x坐标(相对于父控件的x坐标)。

**Returns:** *number*

___

###  y

• **get y**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[y](_awtk_.twidget.md#y)*

*Defined in [awtk.ts:8434](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8434)*

y坐标(相对于父控件的y坐标)。

**Returns:** *number*

## Methods

###  addChild

▸ **addChild**(`child`: [TWidget](_awtk_.twidget.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[addChild](_awtk_.twidget.md#addchild)*

*Defined in [awtk.ts:7902](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7902)*

加入一个子控件。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`child` | [TWidget](_awtk_.twidget.md) | 子控件对象。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  addValue

▸ **addValue**(`delta`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[addValue](_awtk_.twidget.md#addvalue)*

*Defined in [awtk.ts:7579](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7579)*

增加控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`delta` | number | 增量。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  animateValueTo

▸ **animateValueTo**(`value`: any, `duration`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[animateValueTo](_awtk_.twidget.md#animatevalueto)*

*Defined in [awtk.ts:7566](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7566)*

设置控件的值(以动画形式变化到指定的值)。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 值。 |
`duration` | number | 动画持续时间(毫秒)。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  child

▸ **child**(`name`: string): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[child](_awtk_.twidget.md#child)*

*Defined in [awtk.ts:7951](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7951)*

查找指定名称的子控件(同widget_lookup(widget, name, FALSE))。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 子控件的名称。  |

**Returns:** *[TWidget](_awtk_.twidget.md)*

子控件或NULL。

___

###  clone

▸ **clone**(`parent`: [TWidget](_awtk_.twidget.md)): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[clone](_awtk_.twidget.md#clone)*

*Defined in [awtk.ts:8235](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8235)*

clone。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`parent` | [TWidget](_awtk_.twidget.md) | clone新控件的parent对象。  |

**Returns:** *[TWidget](_awtk_.twidget.md)*

返回clone的对象。

___

###  closeWindow

▸ **closeWindow**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[closeWindow](_awtk_.twidget.md#closewindow)*

*Defined in [awtk.ts:7498](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7498)*

关闭控件所在的窗口。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  countChildren

▸ **countChildren**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[countChildren](_awtk_.twidget.md#countchildren)*

*Defined in [awtk.ts:7464](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7464)*

获取子控件的个数。

**Returns:** *number*

子控件的个数。

___

###  createAnimator

▸ **createAnimator**(`animation`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[createAnimator](_awtk_.twidget.md#createanimator)*

*Defined in [awtk.ts:7706](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7706)*

创建动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 除非指定auto_start=false，动画创建后自动启动。
* 除非指定auto_destroy=false，动画播放完成后自动销毁。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`animation` | string | 动画参数。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[destroy](_awtk_.twidget.md#destroy)*

*Defined in [awtk.ts:8272](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8272)*

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  destroyAnimator

▸ **destroyAnimator**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[destroyAnimator](_awtk_.twidget.md#destroyanimator)*

*Defined in [awtk.ts:7792](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7792)*

销毁动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，销毁所有名称为name的动画。
* 2.name为NULL时，销毁所有widget相关的动画。
* 3.widget和name均为NULL，销毁所有动画。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 动画名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  destroyChildren

▸ **destroyChildren**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[destroyChildren](_awtk_.twidget.md#destroychildren)*

*Defined in [awtk.ts:7890](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7890)*

销毁全部子控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  equal

▸ **equal**(`other`: [TWidget](_awtk_.twidget.md)): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[equal](_awtk_.twidget.md#equal)*

*Defined in [awtk.ts:8247](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8247)*

判断两个widget是否相同。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`other` | [TWidget](_awtk_.twidget.md) | 要比较的控件对象。  |

**Returns:** *boolean*

返回TRUE表示相同，否则表示不同。

___

###  foreach

▸ **foreach**(`visit`: Function, `ctx`: any): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[foreach](_awtk_.twidget.md#foreach)*

*Defined in [awtk.ts:8190](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8190)*

遍历当前控件及子控件。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`visit` | Function | 遍历的回调函数。 |
`ctx` | any | 回调函数的上下文。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  getChild

▸ **getChild**(`index`: number): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[getChild](_awtk_.twidget.md#getchild)*

*Defined in [awtk.ts:7476](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7476)*

获取指定索引的子控件。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`index` | number | 索引。  |

**Returns:** *[TWidget](_awtk_.twidget.md)*

子控件。

___

###  getDouble

▸ **getDouble**(): *number*

*Inherited from [TEdit](_awtk_.tedit.md).[getDouble](_awtk_.tedit.md#getdouble)*

*Defined in [awtk.ts:17554](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17554)*

获取double类型的值。

**Returns:** *number*

返回double的值。

___

###  getInt

▸ **getInt**(): *number*

*Inherited from [TEdit](_awtk_.tedit.md).[getInt](_awtk_.tedit.md#getint)*

*Defined in [awtk.ts:17543](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17543)*

获取int类型的值。

**Returns:** *number*

返回int的值。

___

###  getPropBool

▸ **getPropBool**(`name`: string, `defval`: boolean): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[getPropBool](_awtk_.twidget.md#getpropbool)*

*Defined in [awtk.ts:8133](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8133)*

获取布尔格式的属性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`defval` | boolean | 缺省值。  |

**Returns:** *boolean*

返回属性的值。

___

###  getPropInt

▸ **getPropInt**(`name`: string, `defval`: number): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[getPropInt](_awtk_.twidget.md#getpropint)*

*Defined in [awtk.ts:8107](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8107)*

获取整数格式的属性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`defval` | number | 缺省值。  |

**Returns:** *number*

返回属性的值。

___

###  getPropStr

▸ **getPropStr**(`name`: string, `defval`: string): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[getPropStr](_awtk_.twidget.md#getpropstr)*

*Defined in [awtk.ts:8081](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8081)*

获取字符串格式的属性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`defval` | string | 缺省值。  |

**Returns:** *string*

返回属性的值。

___

###  getText

▸ **getText**(): *any*

*Inherited from [TWidget](_awtk_.twidget.md).[getText](_awtk_.twidget.md#gettext)*

*Defined in [awtk.ts:7639](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7639)*

获取控件的文本。
只是对widget\_get\_prop的包装，文本的意义由子类控件决定。

**Returns:** *any*

返回文本。

___

###  getType

▸ **getType**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[getType](_awtk_.twidget.md#gettype)*

*Defined in [awtk.ts:8223](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8223)*

获取当前控件的类型名称。

**Returns:** *string*

返回类型名。

___

###  getValue

▸ **getValue**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[getValue](_awtk_.twidget.md#getvalue)*

*Defined in [awtk.ts:7627](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7627)*

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

**Returns:** *number*

返回值。

___

###  getWindow

▸ **getWindow**(): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[getWindow](_awtk_.twidget.md#getwindow)*

*Defined in [awtk.ts:8201](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8201)*

获取当前控件所在的窗口。

**Returns:** *[TWidget](_awtk_.twidget.md)*

窗口对象。

___

###  getWindowManager

▸ **getWindowManager**(): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[getWindowManager](_awtk_.twidget.md#getwindowmanager)*

*Defined in [awtk.ts:8212](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8212)*

获取当前的窗口管理器。

**Returns:** *[TWidget](_awtk_.twidget.md)*

窗口管理器对象。

___

###  indexOf

▸ **indexOf**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[indexOf](_awtk_.twidget.md#indexof)*

*Defined in [awtk.ts:7487](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7487)*

获取控件在父控件中的索引编号。

**Returns:** *number*

在父控件中的索引编号。

___

###  insertChild

▸ **insertChild**(`index`: number, `child`: [TWidget](_awtk_.twidget.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[insertChild](_awtk_.twidget.md#insertchild)*

*Defined in [awtk.ts:7927](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7927)*

插入子控件到指定的位置。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`index` | number | 位置序数(大于等于总个数，则放到最后)。 |
`child` | [TWidget](_awtk_.twidget.md) | 子控件对象。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  invalidateForce

▸ **invalidateForce**(`r`: [TRect](_awtk_.trect.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[invalidateForce](_awtk_.twidget.md#invalidateforce)*

*Defined in [awtk.ts:8055](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8055)*

请求强制重绘控件。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`r` | [TRect](_awtk_.trect.md) | 矩形对象(widget本地坐标)。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  isDesigningWindow

▸ **isDesigningWindow**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isDesigningWindow](_awtk_.twidget.md#isdesigningwindow)*

*Defined in [awtk.ts:8166](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8166)*

判断当前控件是否是设计窗口。

**Returns:** *boolean*

返回当前控件是否是设计窗口。

___

###  isDialog

▸ **isDialog**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isDialog](_awtk_.twidget.md#isdialog)*

*Defined in [awtk.ts:8316](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8316)*

检查控件是否是对话框类型。

**Returns:** *boolean*

返回FALSE表示不是，否则表示是。

___

###  isNormalWindow

▸ **isNormalWindow**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isNormalWindow](_awtk_.twidget.md#isnormalwindow)*

*Defined in [awtk.ts:8305](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8305)*

检查控件是否是普通窗口类型。

**Returns:** *boolean*

返回FALSE表示不是，否则表示是。

___

###  isPopup

▸ **isPopup**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isPopup](_awtk_.twidget.md#ispopup)*

*Defined in [awtk.ts:8327](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8327)*

检查控件是否是弹出窗口类型。

**Returns:** *boolean*

返回FALSE表示不是，否则表示是。

___

###  isSystemBar

▸ **isSystemBar**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isSystemBar](_awtk_.twidget.md#issystembar)*

*Defined in [awtk.ts:8294](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8294)*

检查控件是否是system bar类型。

**Returns:** *boolean*

返回FALSE表示不是，否则表示是。

___

###  isWindow

▸ **isWindow**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isWindow](_awtk_.twidget.md#iswindow)*

*Defined in [awtk.ts:8155](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8155)*

判断当前控件是否是窗口。

**Returns:** *boolean*

返回当前控件是否是窗口。

___

###  isWindowManager

▸ **isWindowManager**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isWindowManager](_awtk_.twidget.md#iswindowmanager)*

*Defined in [awtk.ts:8177](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8177)*

判断当前控件是否是窗口管理器。

**Returns:** *boolean*

返回当前控件是否是窗口管理器。

___

###  isWindowOpened

▸ **isWindowOpened**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isWindowOpened](_awtk_.twidget.md#iswindowopened)*

*Defined in [awtk.ts:8144](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8144)*

判断当前控件所在的窗口是否已经打开。

**Returns:** *boolean*

返回当前控件所在的窗口是否已经打开。

___

###  layout

▸ **layout**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[layout](_awtk_.twidget.md#layout)*

*Defined in [awtk.ts:8338](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8338)*

布局当前控件及子控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  lookup

▸ **lookup**(`name`: string, `recursive`: boolean): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[lookup](_awtk_.twidget.md#lookup)*

*Defined in [awtk.ts:7964](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7964)*

查找指定名称的子控件(返回第一个)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 子控件的名称。 |
`recursive` | boolean | 是否递归查找全部子控件。  |

**Returns:** *[TWidget](_awtk_.twidget.md)*

子控件或NULL。

___

###  lookupByType

▸ **lookupByType**(`type`: string, `recursive`: boolean): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[lookupByType](_awtk_.twidget.md#lookupbytype)*

*Defined in [awtk.ts:7977](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7977)*

查找指定类型的子控件(返回第一个)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | string | 子控件的名称。 |
`recursive` | boolean | 是否递归查找全部子控件。  |

**Returns:** *[TWidget](_awtk_.twidget.md)*

子控件或NULL。

___

###  move

▸ **move**(`x`: number, `y`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[move](_awtk_.twidget.md#move)*

*Defined in [awtk.ts:7511](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7511)*

移动控件。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x坐标 |
`y` | number | y坐标  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  moveResize

▸ **moveResize**(`x`: number, `y`: number, `w`: number, `h`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[moveResize](_awtk_.twidget.md#moveresize)*

*Defined in [awtk.ts:7539](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7539)*

移动控件并调整控件的大小。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | number | x坐标 |
`y` | number | y坐标 |
`w` | number | 宽度 |
`h` | number | 高度  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  off

▸ **off**(`id`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[off](_awtk_.twidget.md#off)*

*Defined in [awtk.ts:8043](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8043)*

注销指定事件的处理函数。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`id` | number | widget_on返回的ID。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  on

▸ **on**(`type`: [TEventType](../enums/_awtk_.teventtype.md), `on_event`: Function, `ctx`: any): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[on](_awtk_.twidget.md#on)*

*Defined in [awtk.ts:8031](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8031)*

widget_t* ok = button_create(win, 10, 10, 80, 30);
widget_on(ok, EVT_CLICK, on_click, NULL);

```

@param type 事件类型。
@param on_event 事件处理函数。
@param ctx 事件处理函数上下文。

@returns 返回id，用于widget_off。

**Parameters:**

Name | Type |
------ | ------ |
`type` | [TEventType](../enums/_awtk_.teventtype.md) |
`on_event` | Function |
`ctx` | any |

**Returns:** *number*

___

###  pauseAnimator

▸ **pauseAnimator**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[pauseAnimator](_awtk_.twidget.md#pauseanimator)*

*Defined in [awtk.ts:7758](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7758)*

暂停动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，暂停所有名称为name的动画。
* 2.name为NULL时，暂停所有widget相关的动画。
* 3.widget和name均为NULL，暂停所有动画。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 动画名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  removeChild

▸ **removeChild**(`child`: [TWidget](_awtk_.twidget.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[removeChild](_awtk_.twidget.md#removechild)*

*Defined in [awtk.ts:7914](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7914)*

移出指定的子控件(并不销毁)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`child` | [TWidget](_awtk_.twidget.md) | 子控件对象。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  resize

▸ **resize**(`w`: number, `h`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[resize](_awtk_.twidget.md#resize)*

*Defined in [awtk.ts:7524](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7524)*

调整控件的大小。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`w` | number | 宽度 |
`h` | number | 高度  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  restack

▸ **restack**(`index`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[restack](_awtk_.twidget.md#restack)*

*Defined in [awtk.ts:7939](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7939)*

调整控件在父控件中的位置序数。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`index` | number | 位置序数(大于等于总个数，则放到最后)。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setAnimation

▸ **setAnimation**(`animation`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setAnimation](_awtk_.twidget.md#setanimation)*

*Defined in [awtk.ts:7690](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7690)*

设置控件的动画参数(仅用于在UI文件使用)。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`animation` | string | 动画参数。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setAnimatorTimeScale

▸ **setAnimatorTimeScale**(`name`: string, `time_scale`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setAnimatorTimeScale](_awtk_.twidget.md#setanimatortimescale)*

*Defined in [awtk.ts:7741](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7741)*

设置动画的时间倍率，<0: 时间倒退，<1: 时间变慢，>1 时间变快。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，设置所有名称为name的动画的时间倍率。
* 2.name为NULL时，设置所有widget相关的动画的时间倍率。
* 3.widget和name均为NULL，设置所有动画的时间倍率。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 动画名称。 |
`time_scale` | number | 时间倍率。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setAutoFix

▸ **setAutoFix**(`auto_fix`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[setAutoFix](_awtk_.tedit.md#setautofix)*

*Defined in [awtk.ts:17643](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17643)*

设置编辑器是否为自动改正。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`auto_fix` | boolean | 自动改正。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setChildrenLayout

▸ **setChildrenLayout**(`params`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setChildrenLayout](_awtk_.twidget.md#setchildrenlayout)*

*Defined in [awtk.ts:8362](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8362)*

设置子控件的布局参数。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`params` | string | 布局参数。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setCursor

▸ **setCursor**(`cursor`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[setCursor](_awtk_.tedit.md#setcursor)*

*Defined in [awtk.ts:17727](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17727)*

设置输入框的光标坐标。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`cursor` | number | 是否为焦点。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setDouble

▸ **setDouble**(`value`: any): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[setDouble](_awtk_.tedit.md#setdouble)*

*Defined in [awtk.ts:17578](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17578)*

设置double类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setEnable

▸ **setEnable**(`enable`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setEnable](_awtk_.twidget.md#setenable)*

*Defined in [awtk.ts:7804](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7804)*

设置控件的可用性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`enable` | boolean | 是否可用性。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFeedback

▸ **setFeedback**(`feedback`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setFeedback](_awtk_.twidget.md#setfeedback)*

*Defined in [awtk.ts:7816](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7816)*

设置控件是否启用反馈。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`feedback` | boolean | 是否启用反馈。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFloatLimit

▸ **setFloatLimit**(`min`: number, `max`: number, `step`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[setFloatLimit](_awtk_.tedit.md#setfloatlimit)*

*Defined in [awtk.ts:17619](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17619)*

设置为浮点数输入及取值范围。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`min` | number | 最小值。 |
`max` | number | 最大值。 |
`step` | number | 步长。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFloating

▸ **setFloating**(`floating`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setFloating](_awtk_.twidget.md#setfloating)*

*Defined in [awtk.ts:7829](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7829)*

设置控件的floating标志。
> floating的控件不受父控件的子控件布局参数的影响。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`floating` | boolean | 是否启用floating布局。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFocus

▸ **setFocus**(`focus`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[setFocus](_awtk_.tedit.md#setfocus)*

*Defined in [awtk.ts:17715](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17715)*

设置为焦点。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`focus` | boolean | 是否为焦点。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFocusable

▸ **setFocusable**(`focusable`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setFocusable](_awtk_.twidget.md#setfocusable)*

*Defined in [awtk.ts:7853](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7853)*

设置控件是否可获得焦点。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`focusable` | boolean | 是否可获得焦点。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFocused

▸ **setFocused**(`focused`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setFocused](_awtk_.twidget.md#setfocused)*

*Defined in [awtk.ts:7841](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7841)*

设置控件是否获得焦点。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`focused` | boolean | 是否获得焦点。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setInputTips

▸ **setInputTips**(`tips`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[setInputTips](_awtk_.tedit.md#setinputtips)*

*Defined in [awtk.ts:17691](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17691)*

设置编辑器的输入提示。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`tips` | string | 输入提示。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setInputType

▸ **setInputType**(`type`: [TInputType](../enums/_awtk_.tinputtype.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[setInputType](_awtk_.tedit.md#setinputtype)*

*Defined in [awtk.ts:17679](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17679)*

设置编辑器的输入类型。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | [TInputType](../enums/_awtk_.tinputtype.md) | 输入类型。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setInt

▸ **setInt**(`value`: any): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[setInt](_awtk_.tedit.md#setint)*

*Defined in [awtk.ts:17566](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17566)*

设置int类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setIntLimit

▸ **setIntLimit**(`min`: number, `max`: number, `step`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[setIntLimit](_awtk_.tedit.md#setintlimit)*

*Defined in [awtk.ts:17605](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17605)*

设置为整数输入及取值范围。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`min` | number | 最小值。 |
`max` | number | 最大值。 |
`step` | number | 步长。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setName

▸ **setName**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setName](_awtk_.twidget.md#setname)*

*Defined in [awtk.ts:7651](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7651)*

设置控件的名称。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setOpacity

▸ **setOpacity**(`opacity`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setOpacity](_awtk_.twidget.md#setopacity)*

*Defined in [awtk.ts:7879](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7879)*

设置控件的不透明度。

>在嵌入式平台，半透明效果会使性能大幅下降，请谨慎使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`opacity` | number | 不透明度(取值0-255，0表示完全透明，255表示完全不透明)。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setOpenImWhenFocused

▸ **setOpenImWhenFocused**(`open_im_when_focused`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[setOpenImWhenFocused](_awtk_.tedit.md#setopenimwhenfocused)*

*Defined in [awtk.ts:17667](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17667)*

设置编辑器是否在获得焦点时打开输入法。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`open_im_when_focused` | boolean | 是否在获得焦点时打开输入法。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPasswordVisible

▸ **setPasswordVisible**(`password_visible`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[setPasswordVisible](_awtk_.tedit.md#setpasswordvisible)*

*Defined in [awtk.ts:17703](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17703)*

当编辑器输入类型为密码时，设置密码是否可见。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`password_visible` | boolean | 密码是否可见。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPointerCursor

▸ **setPointerCursor**(`cursor`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setPointerCursor](_awtk_.twidget.md#setpointercursor)*

*Defined in [awtk.ts:7677](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7677)*

设置鼠标指针的图片名。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`cursor` | string | 图片名称(无扩展名)。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPropBool

▸ **setPropBool**(`name`: string, `v`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setPropBool](_awtk_.twidget.md#setpropbool)*

*Defined in [awtk.ts:8120](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8120)*

设置布尔格式的属性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`v` | boolean | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPropInt

▸ **setPropInt**(`name`: string, `v`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setPropInt](_awtk_.twidget.md#setpropint)*

*Defined in [awtk.ts:8094](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8094)*

设置整数格式的属性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`v` | number | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPropStr

▸ **setPropStr**(`name`: string, `v`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setPropStr](_awtk_.twidget.md#setpropstr)*

*Defined in [awtk.ts:8068](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8068)*

设置字符串格式的属性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`v` | string | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setReadonly

▸ **setReadonly**(`readonly`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[setReadonly](_awtk_.tedit.md#setreadonly)*

*Defined in [awtk.ts:17631](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17631)*

设置编辑器是否为只读。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`readonly` | boolean | 只读。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setSelectNoneWhenFocused

▸ **setSelectNoneWhenFocused**(`select_none_when_focused`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[setSelectNoneWhenFocused](_awtk_.tedit.md#setselectnonewhenfocused)*

*Defined in [awtk.ts:17655](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17655)*

设置编辑器是否在获得焦点时不选中文本。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`select_none_when_focused` | boolean | 是否在获得焦点时不选中文本。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setSelfLayout

▸ **setSelfLayout**(`params`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setSelfLayout](_awtk_.twidget.md#setselflayout)*

*Defined in [awtk.ts:8350](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8350)*

设置控件自己的布局参数。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`params` | string | 布局参数。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setSelfLayoutParams

▸ **setSelfLayoutParams**(`x`: string, `y`: string, `w`: string, `h`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setSelfLayoutParams](_awtk_.twidget.md#setselflayoutparams)*

*Defined in [awtk.ts:8377](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8377)*

设置控件自己的布局(缺省布局器)参数(过时，请用widget\_set\_self\_layout)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`x` | string | x参数。 |
`y` | string | y参数。 |
`w` | string | w参数。 |
`h` | string | h参数。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setSensitive

▸ **setSensitive**(`sensitive`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setSensitive](_awtk_.twidget.md#setsensitive)*

*Defined in [awtk.ts:8014](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8014)*

设置控件是否接受用户事件。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`sensitive` | boolean | 是否接受用户事件。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setState

▸ **setState**(`state`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setState](_awtk_.twidget.md#setstate)*

*Defined in [awtk.ts:7865](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7865)*

设置控件的状态。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`state` | string | 状态(必须为真正的常量字符串，在widget的整个生命周期有效)。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setStyleColor

▸ **setStyleColor**(`state_and_name`: string, `value`: any): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setStyleColor](_awtk_.twidget.md#setstylecolor)*

*Defined in [awtk.ts:8416](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8416)*

设置颜色类型的style。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`state_and_name` | string | 状态和名字，用英文的冒号分隔。 |
`value` | any | 值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setStyleInt

▸ **setStyleInt**(`state_and_name`: string, `value`: any): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setStyleInt](_awtk_.twidget.md#setstyleint)*

*Defined in [awtk.ts:8390](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8390)*

设置整数类型的style。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`state_and_name` | string | 状态和名字，用英文的冒号分隔。 |
`value` | any | 值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setStyleStr

▸ **setStyleStr**(`state_and_name`: string, `value`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setStyleStr](_awtk_.twidget.md#setstylestr)*

*Defined in [awtk.ts:8403](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8403)*

设置字符串类型的style。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`state_and_name` | string | 状态和名字，用英文的冒号分隔。 |
`value` | string | 值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setText

▸ **setText**(`text`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setText](_awtk_.twidget.md#settext)*

*Defined in [awtk.ts:7604](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7604)*

设置控件的文本。
只是对widget\_set\_prop的包装，文本的意义由子类控件决定。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`text` | string | 文本。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setTextLimit

▸ **setTextLimit**(`min`: number, `max`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEdit](_awtk_.tedit.md).[setTextLimit](_awtk_.tedit.md#settextlimit)*

*Defined in [awtk.ts:17591](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L17591)*

设置为文本输入及其长度限制，不允许输入超过max个字符，少于min个字符时进入error状态。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`min` | number | 最小长度。 |
`max` | number | 最大长度。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setTheme

▸ **setTheme**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setTheme](_awtk_.twidget.md#settheme)*

*Defined in [awtk.ts:7665](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7665)*

设置theme的名称，用于动态切换主题。名称与当前主题名称相同，则重新加载全部资源。

> 目前只支持带有文件系统的平台。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 主题的名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setTrText

▸ **setTrText**(`text`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setTrText](_awtk_.twidget.md#settrtext)*

*Defined in [awtk.ts:7616](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7616)*

获取翻译之后的文本，然后调用widget_set_text。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`text` | string | 文本。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setValue

▸ **setValue**(`value`: any): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setValue](_awtk_.twidget.md#setvalue)*

*Defined in [awtk.ts:7552](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7552)*

设置控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setVisible

▸ **setVisible**(`visible`: boolean, `recursive`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setVisible](_awtk_.twidget.md#setvisible)*

*Defined in [awtk.ts:7990](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7990)*

设置控件的可见性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`visible` | boolean | 是否可见。 |
`recursive` | boolean | 是否递归设置全部子控件。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setVisibleOnly

▸ **setVisibleOnly**(`visible`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setVisibleOnly](_awtk_.twidget.md#setvisibleonly)*

*Defined in [awtk.ts:8002](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8002)*

设置控件的可见性(不触发repaint和relayout)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`visible` | boolean | 是否可见。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  startAnimator

▸ **startAnimator**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[startAnimator](_awtk_.twidget.md#startanimator)*

*Defined in [awtk.ts:7723](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7723)*

播放动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，播放所有名称为name的动画。
* 2.name为NULL时，播放所有widget相关的动画。
* 3.widget和name均为NULL，播放所有动画。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 动画名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  stopAnimator

▸ **stopAnimator**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[stopAnimator](_awtk_.twidget.md#stopanimator)*

*Defined in [awtk.ts:7775](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7775)*

停止动画(控件的相应属性回归原位)。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，停止所有名称为name的动画。
* 2.name为NULL时，停止所有widget相关的动画。
* 3.widget和name均为NULL，停止所有动画。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 动画名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  unref

▸ **unref**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[unref](_awtk_.twidget.md#unref)*

*Defined in [awtk.ts:8283](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L8283)*

减少控件的引用计数。引用计数为0时销毁控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  useStyle

▸ **useStyle**(`style`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[useStyle](_awtk_.twidget.md#usestyle)*

*Defined in [awtk.ts:7591](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L7591)*

启用指定的主题。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`style` | string | style的名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`widget`: [TWidget](_awtk_.twidget.md)): *[TSpinBox](_awtk_.tspinbox.md)*

*Overrides [TEdit](_awtk_.tedit.md).[cast](_awtk_.tedit.md#static-cast)*

*Defined in [awtk.ts:20075](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L20075)*

转换为spin_box对象(供脚本语言使用)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`widget` | [TWidget](_awtk_.twidget.md) | spin_box对象。  |

**Returns:** *[TSpinBox](_awtk_.tspinbox.md)*

spin_box对象。

___

### `Static` create

▸ **create**(`parent`: [TWidget](_awtk_.twidget.md), `x`: number, `y`: number, `w`: number, `h`: number): *[TWidget](_awtk_.twidget.md)*

*Overrides [TEdit](_awtk_.tedit.md).[create](_awtk_.tedit.md#static-create)*

*Defined in [awtk.ts:20063](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L20063)*

创建spin_box对象

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`parent` | [TWidget](_awtk_.twidget.md) | 父控件 |
`x` | number | x坐标 |
`y` | number | y坐标 |
`w` | number | 宽度 |
`h` | number | 高度  |

**Returns:** *[TWidget](_awtk_.twidget.md)*

对象。
