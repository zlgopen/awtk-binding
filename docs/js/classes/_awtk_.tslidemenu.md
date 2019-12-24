[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TSlideMenu](_awtk_.tslidemenu.md)

# Class: TSlideMenu

左右滑动菜单控件。

一般用一组按钮作为子控件，通过左右滑动改变当前的项。除了当菜单使用外，也可以用来切换页面。

slide\_menu\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于slide\_menu\_t控件。

在xml中使用"slide\_menu"标签创建左右滑动菜单控件。如：

```xml
<slide_menu style="mask" align_v="top">
<button style="slide_button" text="0"/>
<button style="slide_button" text="1"/>
<button style="slide_button" text="2"/>
<button style="slide_button" text="3"/>
<button style="slide_button" text="4"/>
</slide_menu>
```

> 更多用法请参考：[slide_menu.xml](
https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/slide_menu.xml)

在c代码中使用函数slide\_menu\_create创建左右滑动菜单控件。如：

可按下面的方法关注当前项改变的事件：

可按下面的方法关注当前按钮被点击的事件：

> 完整示例请参考：[slide_menu demo](
https://github.com/zlgopen/awtk-c-demos/blob/master/demos/slide_menu.c)

可用通过style来设置控件的显示风格，如背景颜色和蒙版颜色等等。如：

```xml
<style name="mask">
<normal     bg_color="#f0f0f0" mask_color="#f0f0f0"/>
</style>
```

> 更多用法请参考：[theme default](
https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L493)

## Hierarchy

* [TWidget](_awtk_.twidget.md)

  ↳ **TSlideMenu**

## Index

### Constructors

* [constructor](_awtk_.tslidemenu.md#constructor)

### Properties

* [nativeObj](_awtk_.tslidemenu.md#nativeobj)

### Accessors

* [alignV](_awtk_.tslidemenu.md#alignv)
* [animation](_awtk_.tslidemenu.md#animation)
* [enable](_awtk_.tslidemenu.md#enable)
* [feedback](_awtk_.tslidemenu.md#feedback)
* [floating](_awtk_.tslidemenu.md#floating)
* [focusable](_awtk_.tslidemenu.md#focusable)
* [h](_awtk_.tslidemenu.md#h)
* [minScale](_awtk_.tslidemenu.md#minscale)
* [name](_awtk_.tslidemenu.md#name)
* [parent](_awtk_.tslidemenu.md#parent)
* [sensitive](_awtk_.tslidemenu.md#sensitive)
* [style](_awtk_.tslidemenu.md#style)
* [trText](_awtk_.tslidemenu.md#trtext)
* [value](_awtk_.tslidemenu.md#value)
* [visible](_awtk_.tslidemenu.md#visible)
* [w](_awtk_.tslidemenu.md#w)
* [withFocusState](_awtk_.tslidemenu.md#withfocusstate)
* [x](_awtk_.tslidemenu.md#x)
* [y](_awtk_.tslidemenu.md#y)

### Methods

* [addChild](_awtk_.tslidemenu.md#addchild)
* [addValue](_awtk_.tslidemenu.md#addvalue)
* [animateValueTo](_awtk_.tslidemenu.md#animatevalueto)
* [child](_awtk_.tslidemenu.md#child)
* [clone](_awtk_.tslidemenu.md#clone)
* [countChildren](_awtk_.tslidemenu.md#countchildren)
* [createAnimator](_awtk_.tslidemenu.md#createanimator)
* [destroy](_awtk_.tslidemenu.md#destroy)
* [destroyAnimator](_awtk_.tslidemenu.md#destroyanimator)
* [destroyChildren](_awtk_.tslidemenu.md#destroychildren)
* [equal](_awtk_.tslidemenu.md#equal)
* [foreach](_awtk_.tslidemenu.md#foreach)
* [getChild](_awtk_.tslidemenu.md#getchild)
* [getPropBool](_awtk_.tslidemenu.md#getpropbool)
* [getPropInt](_awtk_.tslidemenu.md#getpropint)
* [getPropStr](_awtk_.tslidemenu.md#getpropstr)
* [getText](_awtk_.tslidemenu.md#gettext)
* [getType](_awtk_.tslidemenu.md#gettype)
* [getValue](_awtk_.tslidemenu.md#getvalue)
* [getWindow](_awtk_.tslidemenu.md#getwindow)
* [getWindowManager](_awtk_.tslidemenu.md#getwindowmanager)
* [indexOf](_awtk_.tslidemenu.md#indexof)
* [insertChild](_awtk_.tslidemenu.md#insertchild)
* [invalidateForce](_awtk_.tslidemenu.md#invalidateforce)
* [isDesigningWindow](_awtk_.tslidemenu.md#isdesigningwindow)
* [isDialog](_awtk_.tslidemenu.md#isdialog)
* [isNormalWindow](_awtk_.tslidemenu.md#isnormalwindow)
* [isPopup](_awtk_.tslidemenu.md#ispopup)
* [isSystemBar](_awtk_.tslidemenu.md#issystembar)
* [isWindow](_awtk_.tslidemenu.md#iswindow)
* [isWindowManager](_awtk_.tslidemenu.md#iswindowmanager)
* [isWindowOpened](_awtk_.tslidemenu.md#iswindowopened)
* [layout](_awtk_.tslidemenu.md#layout)
* [lookup](_awtk_.tslidemenu.md#lookup)
* [lookupByType](_awtk_.tslidemenu.md#lookupbytype)
* [move](_awtk_.tslidemenu.md#move)
* [moveResize](_awtk_.tslidemenu.md#moveresize)
* [off](_awtk_.tslidemenu.md#off)
* [on](_awtk_.tslidemenu.md#on)
* [pauseAnimator](_awtk_.tslidemenu.md#pauseanimator)
* [removeChild](_awtk_.tslidemenu.md#removechild)
* [resize](_awtk_.tslidemenu.md#resize)
* [restack](_awtk_.tslidemenu.md#restack)
* [setAlignV](_awtk_.tslidemenu.md#setalignv)
* [setAnimation](_awtk_.tslidemenu.md#setanimation)
* [setAnimatorTimeScale](_awtk_.tslidemenu.md#setanimatortimescale)
* [setChildrenLayout](_awtk_.tslidemenu.md#setchildrenlayout)
* [setEnable](_awtk_.tslidemenu.md#setenable)
* [setFeedback](_awtk_.tslidemenu.md#setfeedback)
* [setFloating](_awtk_.tslidemenu.md#setfloating)
* [setFocusable](_awtk_.tslidemenu.md#setfocusable)
* [setFocused](_awtk_.tslidemenu.md#setfocused)
* [setMinScale](_awtk_.tslidemenu.md#setminscale)
* [setName](_awtk_.tslidemenu.md#setname)
* [setOpacity](_awtk_.tslidemenu.md#setopacity)
* [setPointerCursor](_awtk_.tslidemenu.md#setpointercursor)
* [setPropBool](_awtk_.tslidemenu.md#setpropbool)
* [setPropInt](_awtk_.tslidemenu.md#setpropint)
* [setPropStr](_awtk_.tslidemenu.md#setpropstr)
* [setSelfLayout](_awtk_.tslidemenu.md#setselflayout)
* [setSelfLayoutParams](_awtk_.tslidemenu.md#setselflayoutparams)
* [setSensitive](_awtk_.tslidemenu.md#setsensitive)
* [setState](_awtk_.tslidemenu.md#setstate)
* [setStyleColor](_awtk_.tslidemenu.md#setstylecolor)
* [setStyleInt](_awtk_.tslidemenu.md#setstyleint)
* [setStyleStr](_awtk_.tslidemenu.md#setstylestr)
* [setText](_awtk_.tslidemenu.md#settext)
* [setTheme](_awtk_.tslidemenu.md#settheme)
* [setTrText](_awtk_.tslidemenu.md#settrtext)
* [setValue](_awtk_.tslidemenu.md#setvalue)
* [setVisible](_awtk_.tslidemenu.md#setvisible)
* [setVisibleOnly](_awtk_.tslidemenu.md#setvisibleonly)
* [startAnimator](_awtk_.tslidemenu.md#startanimator)
* [stopAnimator](_awtk_.tslidemenu.md#stopanimator)
* [unref](_awtk_.tslidemenu.md#unref)
* [useStyle](_awtk_.tslidemenu.md#usestyle)
* [cast](_awtk_.tslidemenu.md#static-cast)
* [create](_awtk_.tslidemenu.md#static-create)

## Constructors

###  constructor

\+ **new TSlideMenu**(`nativeObj`: any): *[TSlideMenu](_awtk_.tslidemenu.md)*

*Overrides [TWidget](_awtk_.twidget.md).[constructor](_awtk_.twidget.md#constructor)*

*Defined in [awtk.ts:12095](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L12095)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TSlideMenu](_awtk_.tslidemenu.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TWidget](_awtk_.twidget.md).[nativeObj](_awtk_.twidget.md#nativeobj)*

*Defined in [awtk.ts:12095](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L12095)*

## Accessors

###  alignV

• **get alignV**(): *[TAlignV](../enums/_awtk_.talignv.md)*

*Defined in [awtk.ts:12182](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L12182)*

垂直对齐方式。

**Returns:** *[TAlignV](../enums/_awtk_.talignv.md)*

• **set alignV**(`v`: [TAlignV](../enums/_awtk_.talignv.md)): *void*

*Defined in [awtk.ts:12186](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L12186)*

垂直对齐方式。

**Parameters:**

Name | Type |
------ | ------ |
`v` | [TAlignV](../enums/_awtk_.talignv.md) |

**Returns:** *void*

___

###  animation

• **get animation**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[animation](_awtk_.twidget.md#animation)*

*Defined in [awtk.ts:8469](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8469)*

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

**Returns:** *string*

• **set animation**(`v`: string): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[animation](_awtk_.twidget.md#animation)*

*Defined in [awtk.ts:8473](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8473)*

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  enable

• **get enable**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[enable](_awtk_.twidget.md#enable)*

*Defined in [awtk.ts:8482](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8482)*

启用/禁用状态。

**Returns:** *boolean*

• **set enable**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[enable](_awtk_.twidget.md#enable)*

*Defined in [awtk.ts:8486](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8486)*

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

*Defined in [awtk.ts:8495](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8495)*

是否启用按键音、触屏音和震动等反馈。

**Returns:** *boolean*

• **set feedback**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[feedback](_awtk_.twidget.md#feedback)*

*Defined in [awtk.ts:8499](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8499)*

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

*Defined in [awtk.ts:8561](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8561)*

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

**Returns:** *boolean*

• **set floating**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[floating](_awtk_.twidget.md#floating)*

*Defined in [awtk.ts:8565](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8565)*

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

*Defined in [awtk.ts:8534](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8534)*

是否支持焦点停留。

**Returns:** *boolean*

• **set focusable**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[focusable](_awtk_.twidget.md#focusable)*

*Defined in [awtk.ts:8538](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8538)*

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

*Defined in [awtk.ts:8425](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8425)*

高度。

**Returns:** *number*

___

###  minScale

• **get minScale**(): *number*

*Defined in [awtk.ts:12195](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L12195)*

最小缩放比例。

**Returns:** *number*

• **set minScale**(`v`: number): *void*

*Defined in [awtk.ts:12199](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L12199)*

最小缩放比例。

**Parameters:**

Name | Type |
------ | ------ |
`v` | number |

**Returns:** *void*

___

###  name

• **get name**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[name](_awtk_.twidget.md#name)*

*Defined in [awtk.ts:8434](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8434)*

控件名字。

**Returns:** *string*

• **set name**(`v`: string): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[name](_awtk_.twidget.md#name)*

*Defined in [awtk.ts:8438](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8438)*

控件名字。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  parent

• **get parent**(): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[parent](_awtk_.twidget.md#parent)*

*Defined in [awtk.ts:8574](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8574)*

父控件

**Returns:** *[TWidget](_awtk_.twidget.md)*

___

###  sensitive

• **get sensitive**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[sensitive](_awtk_.twidget.md#sensitive)*

*Defined in [awtk.ts:8521](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8521)*

是否接受用户事件。

**Returns:** *boolean*

• **set sensitive**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[sensitive](_awtk_.twidget.md#sensitive)*

*Defined in [awtk.ts:8525](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8525)*

是否接受用户事件。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  style

• **get style**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[style](_awtk_.twidget.md#style)*

*Defined in [awtk.ts:8460](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8460)*

style的名称。

**Returns:** *string*

___

###  trText

• **get trText**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[trText](_awtk_.twidget.md#trtext)*

*Defined in [awtk.ts:8447](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8447)*

保存用于翻译的字符串。

**Returns:** *string*

• **set trText**(`v`: string): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[trText](_awtk_.twidget.md#trtext)*

*Defined in [awtk.ts:8451](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8451)*

保存用于翻译的字符串。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  value

• **get value**(): *number*

*Defined in [awtk.ts:12169](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L12169)*

值。代表当前选中项的索引。

**Returns:** *number*

• **set value**(`v`: number): *void*

*Defined in [awtk.ts:12173](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L12173)*

值。代表当前选中项的索引。

**Parameters:**

Name | Type |
------ | ------ |
`v` | number |

**Returns:** *void*

___

###  visible

• **get visible**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[visible](_awtk_.twidget.md#visible)*

*Defined in [awtk.ts:8508](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8508)*

是否可见。

**Returns:** *boolean*

• **set visible**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[visible](_awtk_.twidget.md#visible)*

*Defined in [awtk.ts:8512](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8512)*

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

*Defined in [awtk.ts:8416](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8416)*

宽度。

**Returns:** *number*

___

###  withFocusState

• **get withFocusState**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[withFocusState](_awtk_.twidget.md#withfocusstate)*

*Defined in [awtk.ts:8548](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8548)*

是否支持焦点状态。
> 如果希望style支持焦点状态，但有不希望焦点停留，可用本属性。

**Returns:** *boolean*

• **set withFocusState**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[withFocusState](_awtk_.twidget.md#withfocusstate)*

*Defined in [awtk.ts:8552](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8552)*

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

*Defined in [awtk.ts:8398](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8398)*

x坐标(相对于父控件的x坐标)。

**Returns:** *number*

___

###  y

• **get y**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[y](_awtk_.twidget.md#y)*

*Defined in [awtk.ts:8407](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8407)*

y坐标(相对于父控件的y坐标)。

**Returns:** *number*

## Methods

###  addChild

▸ **addChild**(`child`: [TWidget](_awtk_.twidget.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[addChild](_awtk_.twidget.md#addchild)*

*Defined in [awtk.ts:7875](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7875)*

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

*Defined in [awtk.ts:7552](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7552)*

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

*Defined in [awtk.ts:7539](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7539)*

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

*Defined in [awtk.ts:7924](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7924)*

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

*Defined in [awtk.ts:8208](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8208)*

clone。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`parent` | [TWidget](_awtk_.twidget.md) | clone新控件的parent对象。  |

**Returns:** *[TWidget](_awtk_.twidget.md)*

返回clone的对象。

___

###  countChildren

▸ **countChildren**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[countChildren](_awtk_.twidget.md#countchildren)*

*Defined in [awtk.ts:7448](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7448)*

获取子控件的个数。

**Returns:** *number*

子控件的个数。

___

###  createAnimator

▸ **createAnimator**(`animation`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[createAnimator](_awtk_.twidget.md#createanimator)*

*Defined in [awtk.ts:7679](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7679)*

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

*Defined in [awtk.ts:8245](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8245)*

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  destroyAnimator

▸ **destroyAnimator**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[destroyAnimator](_awtk_.twidget.md#destroyanimator)*

*Defined in [awtk.ts:7765](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7765)*

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

*Defined in [awtk.ts:7863](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7863)*

销毁全部子控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  equal

▸ **equal**(`other`: [TWidget](_awtk_.twidget.md)): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[equal](_awtk_.twidget.md#equal)*

*Defined in [awtk.ts:8220](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8220)*

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

*Defined in [awtk.ts:8163](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8163)*

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

*Defined in [awtk.ts:7460](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7460)*

获取指定索引的子控件。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`index` | number | 索引。  |

**Returns:** *[TWidget](_awtk_.twidget.md)*

子控件。

___

###  getPropBool

▸ **getPropBool**(`name`: string, `defval`: boolean): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[getPropBool](_awtk_.twidget.md#getpropbool)*

*Defined in [awtk.ts:8106](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8106)*

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

*Defined in [awtk.ts:8080](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8080)*

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

*Defined in [awtk.ts:8054](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8054)*

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

*Defined in [awtk.ts:7612](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7612)*

获取控件的文本。
只是对widget\_get\_prop的包装，文本的意义由子类控件决定。

**Returns:** *any*

返回文本。

___

###  getType

▸ **getType**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[getType](_awtk_.twidget.md#gettype)*

*Defined in [awtk.ts:8196](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8196)*

获取当前控件的类型名称。

**Returns:** *string*

返回类型名。

___

###  getValue

▸ **getValue**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[getValue](_awtk_.twidget.md#getvalue)*

*Defined in [awtk.ts:7600](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7600)*

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

**Returns:** *number*

返回值。

___

###  getWindow

▸ **getWindow**(): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[getWindow](_awtk_.twidget.md#getwindow)*

*Defined in [awtk.ts:8174](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8174)*

获取当前控件所在的窗口。

**Returns:** *[TWidget](_awtk_.twidget.md)*

窗口对象。

___

###  getWindowManager

▸ **getWindowManager**(): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[getWindowManager](_awtk_.twidget.md#getwindowmanager)*

*Defined in [awtk.ts:8185](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8185)*

获取当前的窗口管理器。

**Returns:** *[TWidget](_awtk_.twidget.md)*

窗口管理器对象。

___

###  indexOf

▸ **indexOf**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[indexOf](_awtk_.twidget.md#indexof)*

*Defined in [awtk.ts:7471](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7471)*

获取控件在父控件中的索引编号。

**Returns:** *number*

在父控件中的索引编号。

___

###  insertChild

▸ **insertChild**(`index`: number, `child`: [TWidget](_awtk_.twidget.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[insertChild](_awtk_.twidget.md#insertchild)*

*Defined in [awtk.ts:7900](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7900)*

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

*Defined in [awtk.ts:8028](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8028)*

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

*Defined in [awtk.ts:8139](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8139)*

判断当前控件是否是设计窗口。

**Returns:** *boolean*

返回当前控件是否是设计窗口。

___

###  isDialog

▸ **isDialog**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isDialog](_awtk_.twidget.md#isdialog)*

*Defined in [awtk.ts:8289](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8289)*

检查控件是否是对话框类型。

**Returns:** *boolean*

返回FALSE表示不是，否则表示是。

___

###  isNormalWindow

▸ **isNormalWindow**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isNormalWindow](_awtk_.twidget.md#isnormalwindow)*

*Defined in [awtk.ts:8278](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8278)*

检查控件是否是普通窗口类型。

**Returns:** *boolean*

返回FALSE表示不是，否则表示是。

___

###  isPopup

▸ **isPopup**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isPopup](_awtk_.twidget.md#ispopup)*

*Defined in [awtk.ts:8300](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8300)*

检查控件是否是弹出窗口类型。

**Returns:** *boolean*

返回FALSE表示不是，否则表示是。

___

###  isSystemBar

▸ **isSystemBar**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isSystemBar](_awtk_.twidget.md#issystembar)*

*Defined in [awtk.ts:8267](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8267)*

检查控件是否是system bar类型。

**Returns:** *boolean*

返回FALSE表示不是，否则表示是。

___

###  isWindow

▸ **isWindow**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isWindow](_awtk_.twidget.md#iswindow)*

*Defined in [awtk.ts:8128](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8128)*

判断当前控件是否是窗口。

**Returns:** *boolean*

返回当前控件是否是窗口。

___

###  isWindowManager

▸ **isWindowManager**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isWindowManager](_awtk_.twidget.md#iswindowmanager)*

*Defined in [awtk.ts:8150](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8150)*

判断当前控件是否是窗口管理器。

**Returns:** *boolean*

返回当前控件是否是窗口管理器。

___

###  isWindowOpened

▸ **isWindowOpened**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isWindowOpened](_awtk_.twidget.md#iswindowopened)*

*Defined in [awtk.ts:8117](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8117)*

判断当前控件所在的窗口是否已经打开。

**Returns:** *boolean*

返回当前控件所在的窗口是否已经打开。

___

###  layout

▸ **layout**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[layout](_awtk_.twidget.md#layout)*

*Defined in [awtk.ts:8311](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8311)*

布局当前控件及子控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  lookup

▸ **lookup**(`name`: string, `recursive`: boolean): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[lookup](_awtk_.twidget.md#lookup)*

*Defined in [awtk.ts:7937](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7937)*

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

*Defined in [awtk.ts:7950](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7950)*

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

*Defined in [awtk.ts:7484](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7484)*

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

*Defined in [awtk.ts:7512](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7512)*

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

*Defined in [awtk.ts:8016](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8016)*

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

*Defined in [awtk.ts:8004](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8004)*

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

*Defined in [awtk.ts:7731](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7731)*

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

*Defined in [awtk.ts:7887](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7887)*

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

*Defined in [awtk.ts:7497](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7497)*

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

*Defined in [awtk.ts:7912](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7912)*

调整控件在父控件中的位置序数。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`index` | number | 位置序数(大于等于总个数，则放到最后)。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setAlignV

▸ **setAlignV**(`align_v`: [TAlignV](../enums/_awtk_.talignv.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:12148](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L12148)*

设置垂直对齐方式。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`align_v` | [TAlignV](../enums/_awtk_.talignv.md) | 对齐方式。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setAnimation

▸ **setAnimation**(`animation`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setAnimation](_awtk_.twidget.md#setanimation)*

*Defined in [awtk.ts:7663](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7663)*

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

*Defined in [awtk.ts:7714](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7714)*

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

###  setChildrenLayout

▸ **setChildrenLayout**(`params`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setChildrenLayout](_awtk_.twidget.md#setchildrenlayout)*

*Defined in [awtk.ts:8335](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8335)*

设置子控件的布局参数。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`params` | string | 布局参数。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setEnable

▸ **setEnable**(`enable`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setEnable](_awtk_.twidget.md#setenable)*

*Defined in [awtk.ts:7777](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7777)*

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

*Defined in [awtk.ts:7789](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7789)*

设置控件是否启用反馈。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`feedback` | boolean | 是否启用反馈。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFloating

▸ **setFloating**(`floating`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setFloating](_awtk_.twidget.md#setfloating)*

*Defined in [awtk.ts:7802](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7802)*

设置控件的floating标志。
> floating的控件不受父控件的子控件布局参数的影响。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`floating` | boolean | 是否启用floating布局。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFocusable

▸ **setFocusable**(`focusable`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setFocusable](_awtk_.twidget.md#setfocusable)*

*Defined in [awtk.ts:7826](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7826)*

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

*Defined in [awtk.ts:7814](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7814)*

设置控件是否获得焦点。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`focused` | boolean | 是否获得焦点。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setMinScale

▸ **setMinScale**(`min_scale`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:12160](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L12160)*

设置最小缩放比例。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`min_scale` | number | 最小缩放比例，范围[0.5-1]。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setName

▸ **setName**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setName](_awtk_.twidget.md#setname)*

*Defined in [awtk.ts:7624](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7624)*

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

*Defined in [awtk.ts:7852](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7852)*

设置控件的不透明度。

>在嵌入式平台，半透明效果会使性能大幅下降，请谨慎使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`opacity` | number | 不透明度(取值0-255，0表示完全透明，255表示完全不透明)。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPointerCursor

▸ **setPointerCursor**(`cursor`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setPointerCursor](_awtk_.twidget.md#setpointercursor)*

*Defined in [awtk.ts:7650](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7650)*

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

*Defined in [awtk.ts:8093](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8093)*

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

*Defined in [awtk.ts:8067](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8067)*

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

*Defined in [awtk.ts:8041](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8041)*

设置字符串格式的属性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`v` | string | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setSelfLayout

▸ **setSelfLayout**(`params`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setSelfLayout](_awtk_.twidget.md#setselflayout)*

*Defined in [awtk.ts:8323](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8323)*

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

*Defined in [awtk.ts:8350](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8350)*

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

*Defined in [awtk.ts:7987](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7987)*

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

*Defined in [awtk.ts:7838](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7838)*

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

*Defined in [awtk.ts:8389](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8389)*

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

*Defined in [awtk.ts:8363](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8363)*

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

*Defined in [awtk.ts:8376](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8376)*

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

*Defined in [awtk.ts:7577](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7577)*

设置控件的文本。
只是对widget\_set\_prop的包装，文本的意义由子类控件决定。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`text` | string | 文本。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setTheme

▸ **setTheme**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setTheme](_awtk_.twidget.md#settheme)*

*Defined in [awtk.ts:7638](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7638)*

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

*Defined in [awtk.ts:7589](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7589)*

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

*Overrides [TWidget](_awtk_.twidget.md).[setValue](_awtk_.twidget.md#setvalue)*

*Defined in [awtk.ts:12136](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L12136)*

设置当前项。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 当前项的索引。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setVisible

▸ **setVisible**(`visible`: boolean, `recursive`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setVisible](_awtk_.twidget.md#setvisible)*

*Defined in [awtk.ts:7963](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7963)*

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

*Defined in [awtk.ts:7975](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7975)*

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

*Defined in [awtk.ts:7696](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7696)*

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

*Defined in [awtk.ts:7748](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7748)*

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

*Defined in [awtk.ts:8256](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L8256)*

减少控件的引用计数。引用计数为0时销毁控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  useStyle

▸ **useStyle**(`style`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[useStyle](_awtk_.twidget.md#usestyle)*

*Defined in [awtk.ts:7564](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L7564)*

启用指定的主题。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`style` | string | style的名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`widget`: [TWidget](_awtk_.twidget.md)): *[TSlideMenu](_awtk_.tslidemenu.md)*

*Overrides [TWidget](_awtk_.twidget.md).[cast](_awtk_.twidget.md#static-cast)*

*Defined in [awtk.ts:12124](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L12124)*

转换slide_menu对象(供脚本语言使用)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`widget` | [TWidget](_awtk_.twidget.md) | slide_menu对象。  |

**Returns:** *[TSlideMenu](_awtk_.tslidemenu.md)*

slide_menu对象。

___

### `Static` create

▸ **create**(`parent`: [TWidget](_awtk_.twidget.md), `x`: number, `y`: number, `w`: number, `h`: number): *[TWidget](_awtk_.twidget.md)*

*Defined in [awtk.ts:12112](https://github.com/zlgopen/awtk-binding/blob/066f953/tools/code_gen/js/output/awtk.ts#L12112)*

创建slide_menu对象

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
