[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TLabel](_awtk_.tlabel.md)

# Class: TLabel

文本控件。用于显示一行或多行文本。

文本控件不会根据文本的长度自动换行，只有文本内容包含换行符时才会换行。

如需自动换行请使用[rich\_text\_t](rich_text_t.md)控件。

label\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于label\_t控件。

在xml中使用"label"标签创建文本控件。如：

```xml
<label style="center" text="center"/>
```

更多用法请参考：[label.xml](
https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/label.xml)

在c代码中使用函数label\_create创建文本控件。如：

创建之后，需要用widget\_set\_text或widget\_set\_text\_utf8设置文本内容。

完整示例请参考：[label demo](
https://github.com/zlgopen/awtk-c-demos/blob/master/demos/label.c)

可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：

```xml
<style name="left">
<normal text_color="red" text_align_h="left" border_color="#a0a0a0" margin="4" />
</style>
```

更多用法请参考：
[theme default](
https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L144)

## Hierarchy

* [TWidget](_awtk_.twidget.md)

  ↳ **TLabel**

## Index

### Constructors

* [constructor](_awtk_.tlabel.md#constructor)

### Properties

* [nativeObj](_awtk_.tlabel.md#nativeobj)

### Accessors

* [animation](_awtk_.tlabel.md#animation)
* [enable](_awtk_.tlabel.md#enable)
* [feedback](_awtk_.tlabel.md#feedback)
* [floating](_awtk_.tlabel.md#floating)
* [focusable](_awtk_.tlabel.md#focusable)
* [h](_awtk_.tlabel.md#h)
* [length](_awtk_.tlabel.md#length)
* [name](_awtk_.tlabel.md#name)
* [parent](_awtk_.tlabel.md#parent)
* [sensitive](_awtk_.tlabel.md#sensitive)
* [style](_awtk_.tlabel.md#style)
* [trText](_awtk_.tlabel.md#trtext)
* [visible](_awtk_.tlabel.md#visible)
* [w](_awtk_.tlabel.md#w)
* [withFocusState](_awtk_.tlabel.md#withfocusstate)
* [x](_awtk_.tlabel.md#x)
* [y](_awtk_.tlabel.md#y)

### Methods

* [addChild](_awtk_.tlabel.md#addchild)
* [addValue](_awtk_.tlabel.md#addvalue)
* [animateValueTo](_awtk_.tlabel.md#animatevalueto)
* [child](_awtk_.tlabel.md#child)
* [clone](_awtk_.tlabel.md#clone)
* [countChildren](_awtk_.tlabel.md#countchildren)
* [createAnimator](_awtk_.tlabel.md#createanimator)
* [destroy](_awtk_.tlabel.md#destroy)
* [destroyAnimator](_awtk_.tlabel.md#destroyanimator)
* [destroyChildren](_awtk_.tlabel.md#destroychildren)
* [equal](_awtk_.tlabel.md#equal)
* [foreach](_awtk_.tlabel.md#foreach)
* [getChild](_awtk_.tlabel.md#getchild)
* [getPropBool](_awtk_.tlabel.md#getpropbool)
* [getPropInt](_awtk_.tlabel.md#getpropint)
* [getPropStr](_awtk_.tlabel.md#getpropstr)
* [getText](_awtk_.tlabel.md#gettext)
* [getType](_awtk_.tlabel.md#gettype)
* [getValue](_awtk_.tlabel.md#getvalue)
* [getWindow](_awtk_.tlabel.md#getwindow)
* [getWindowManager](_awtk_.tlabel.md#getwindowmanager)
* [indexOf](_awtk_.tlabel.md#indexof)
* [insertChild](_awtk_.tlabel.md#insertchild)
* [invalidateForce](_awtk_.tlabel.md#invalidateforce)
* [isDesigningWindow](_awtk_.tlabel.md#isdesigningwindow)
* [isWindow](_awtk_.tlabel.md#iswindow)
* [isWindowManager](_awtk_.tlabel.md#iswindowmanager)
* [isWindowOpened](_awtk_.tlabel.md#iswindowopened)
* [layout](_awtk_.tlabel.md#layout)
* [lookup](_awtk_.tlabel.md#lookup)
* [lookupByType](_awtk_.tlabel.md#lookupbytype)
* [move](_awtk_.tlabel.md#move)
* [moveResize](_awtk_.tlabel.md#moveresize)
* [off](_awtk_.tlabel.md#off)
* [on](_awtk_.tlabel.md#on)
* [pauseAnimator](_awtk_.tlabel.md#pauseanimator)
* [removeChild](_awtk_.tlabel.md#removechild)
* [resize](_awtk_.tlabel.md#resize)
* [resizeToContent](_awtk_.tlabel.md#resizetocontent)
* [restack](_awtk_.tlabel.md#restack)
* [setAnimation](_awtk_.tlabel.md#setanimation)
* [setAnimatorTimeScale](_awtk_.tlabel.md#setanimatortimescale)
* [setChildrenLayout](_awtk_.tlabel.md#setchildrenlayout)
* [setEnable](_awtk_.tlabel.md#setenable)
* [setFeedback](_awtk_.tlabel.md#setfeedback)
* [setFloating](_awtk_.tlabel.md#setfloating)
* [setFocused](_awtk_.tlabel.md#setfocused)
* [setLength](_awtk_.tlabel.md#setlength)
* [setName](_awtk_.tlabel.md#setname)
* [setOpacity](_awtk_.tlabel.md#setopacity)
* [setPointerCursor](_awtk_.tlabel.md#setpointercursor)
* [setPropBool](_awtk_.tlabel.md#setpropbool)
* [setPropInt](_awtk_.tlabel.md#setpropint)
* [setPropStr](_awtk_.tlabel.md#setpropstr)
* [setSelfLayout](_awtk_.tlabel.md#setselflayout)
* [setSelfLayoutParams](_awtk_.tlabel.md#setselflayoutparams)
* [setSensitive](_awtk_.tlabel.md#setsensitive)
* [setState](_awtk_.tlabel.md#setstate)
* [setStyleColor](_awtk_.tlabel.md#setstylecolor)
* [setStyleInt](_awtk_.tlabel.md#setstyleint)
* [setStyleStr](_awtk_.tlabel.md#setstylestr)
* [setText](_awtk_.tlabel.md#settext)
* [setTheme](_awtk_.tlabel.md#settheme)
* [setTrText](_awtk_.tlabel.md#settrtext)
* [setValue](_awtk_.tlabel.md#setvalue)
* [setVisible](_awtk_.tlabel.md#setvisible)
* [setVisibleOnly](_awtk_.tlabel.md#setvisibleonly)
* [startAnimator](_awtk_.tlabel.md#startanimator)
* [stopAnimator](_awtk_.tlabel.md#stopanimator)
* [unref](_awtk_.tlabel.md#unref)
* [useStyle](_awtk_.tlabel.md#usestyle)
* [cast](_awtk_.tlabel.md#static-cast)
* [create](_awtk_.tlabel.md#static-create)

## Constructors

###  constructor

\+ **new TLabel**(`nativeObj`: any): *[TLabel](_awtk_.tlabel.md)*

*Overrides [TWidget](_awtk_.twidget.md).[constructor](_awtk_.twidget.md#constructor)*

*Defined in [awtk.ts:18140](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L18140)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TLabel](_awtk_.tlabel.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TWidget](_awtk_.twidget.md).[nativeObj](_awtk_.twidget.md#nativeobj)*

*Defined in [awtk.ts:18140](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L18140)*

## Accessors

###  animation

• **get animation**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[animation](_awtk_.twidget.md#animation)*

*Defined in [awtk.ts:8394](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8394)*

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

**Returns:** *string*

• **set animation**(`v`: string): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[animation](_awtk_.twidget.md#animation)*

*Defined in [awtk.ts:8385](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8385)*

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

*Defined in [awtk.ts:8407](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8407)*

启用/禁用状态。

**Returns:** *boolean*

• **set enable**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[enable](_awtk_.twidget.md#enable)*

*Defined in [awtk.ts:8398](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8398)*

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

*Defined in [awtk.ts:8420](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8420)*

是否启用按键音、触屏音和震动等反馈。

**Returns:** *boolean*

• **set feedback**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[feedback](_awtk_.twidget.md#feedback)*

*Defined in [awtk.ts:8411](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8411)*

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

*Defined in [awtk.ts:8486](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8486)*

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

**Returns:** *boolean*

• **set floating**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[floating](_awtk_.twidget.md#floating)*

*Defined in [awtk.ts:8477](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8477)*

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

*Defined in [awtk.ts:8459](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8459)*

是否支持焦点停留。

**Returns:** *boolean*

• **set focusable**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[focusable](_awtk_.twidget.md#focusable)*

*Defined in [awtk.ts:8450](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8450)*

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

*Defined in [awtk.ts:8346](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8346)*

高度。

**Returns:** *number*

___

###  length

• **get length**(): *number*

*Defined in [awtk.ts:18210](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L18210)*

显示字符的个数(小余0时全部显示)。
主要用于动态改变显示字符的个数，来实现类似[拨号中...]的动画效果。

**Returns:** *number*

• **set length**(`v`: number): *void*

*Defined in [awtk.ts:18200](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L18200)*

显示字符的个数(小余0时全部显示)。
主要用于动态改变显示字符的个数，来实现类似[拨号中...]的动画效果。

**Parameters:**

Name | Type |
------ | ------ |
`v` | number |

**Returns:** *void*

___

###  name

• **get name**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[name](_awtk_.twidget.md#name)*

*Defined in [awtk.ts:8359](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8359)*

控件名字。

**Returns:** *string*

• **set name**(`v`: string): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[name](_awtk_.twidget.md#name)*

*Defined in [awtk.ts:8350](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8350)*

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

*Defined in [awtk.ts:8495](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8495)*

父控件

**Returns:** *[TWidget](_awtk_.twidget.md)*

___

###  sensitive

• **get sensitive**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[sensitive](_awtk_.twidget.md#sensitive)*

*Defined in [awtk.ts:8446](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8446)*

是否接受用户事件。

**Returns:** *boolean*

• **set sensitive**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[sensitive](_awtk_.twidget.md#sensitive)*

*Defined in [awtk.ts:8437](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8437)*

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

*Defined in [awtk.ts:8381](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8381)*

style的名称。

**Returns:** *string*

___

###  trText

• **get trText**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[trText](_awtk_.twidget.md#trtext)*

*Defined in [awtk.ts:8372](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8372)*

保存用于翻译的字符串。

**Returns:** *string*

• **set trText**(`v`: string): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[trText](_awtk_.twidget.md#trtext)*

*Defined in [awtk.ts:8363](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8363)*

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

*Defined in [awtk.ts:8433](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8433)*

是否可见。

**Returns:** *boolean*

• **set visible**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[visible](_awtk_.twidget.md#visible)*

*Defined in [awtk.ts:8424](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8424)*

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

*Defined in [awtk.ts:8337](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8337)*

宽度。

**Returns:** *number*

___

###  withFocusState

• **get withFocusState**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[withFocusState](_awtk_.twidget.md#withfocusstate)*

*Defined in [awtk.ts:8473](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8473)*

是否支持焦点状态。
如果希望style支持焦点状态，但有不希望焦点停留，可用本属性。

**Returns:** *boolean*

• **set withFocusState**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[withFocusState](_awtk_.twidget.md#withfocusstate)*

*Defined in [awtk.ts:8463](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8463)*

是否支持焦点状态。
如果希望style支持焦点状态，但有不希望焦点停留，可用本属性。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  x

• **get x**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[x](_awtk_.twidget.md#x)*

*Defined in [awtk.ts:8319](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8319)*

x坐标(相对于父控件的x坐标)。

**Returns:** *number*

___

###  y

• **get y**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[y](_awtk_.twidget.md#y)*

*Defined in [awtk.ts:8328](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8328)*

y坐标(相对于父控件的y坐标)。

**Returns:** *number*

## Methods

###  addChild

▸ **addChild**(`child`: [TWidget](_awtk_.twidget.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[addChild](_awtk_.twidget.md#addchild)*

*Defined in [awtk.ts:7840](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7840)*

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

*Defined in [awtk.ts:7529](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7529)*

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

*Defined in [awtk.ts:7516](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7516)*

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

*Defined in [awtk.ts:7889](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7889)*

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

*Defined in [awtk.ts:8173](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8173)*

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

*Defined in [awtk.ts:7425](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7425)*

获取子控件的个数。

**Returns:** *number*

子控件的个数。

___

###  createAnimator

▸ **createAnimator**(`animation`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[createAnimator](_awtk_.twidget.md#createanimator)*

*Defined in [awtk.ts:7656](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7656)*

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

*Defined in [awtk.ts:8210](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8210)*

从父控件中移除控件，并调用unref函数销毁控件。

一般无需直接调用，关闭窗口时，自动销毁相关控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  destroyAnimator

▸ **destroyAnimator**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[destroyAnimator](_awtk_.twidget.md#destroyanimator)*

*Defined in [awtk.ts:7742](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7742)*

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

*Defined in [awtk.ts:7828](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7828)*

销毁全部子控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  equal

▸ **equal**(`other`: [TWidget](_awtk_.twidget.md)): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[equal](_awtk_.twidget.md#equal)*

*Defined in [awtk.ts:8185](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8185)*

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

*Defined in [awtk.ts:8128](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8128)*

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

*Defined in [awtk.ts:7437](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7437)*

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

*Defined in [awtk.ts:8071](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8071)*

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

*Defined in [awtk.ts:8045](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8045)*

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

*Defined in [awtk.ts:8019](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8019)*

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

*Defined in [awtk.ts:7589](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7589)*

获取控件的文本。
只是对widget\_get\_prop的包装，文本的意义由子类控件决定。

**Returns:** *any*

返回文本。

___

###  getType

▸ **getType**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[getType](_awtk_.twidget.md#gettype)*

*Defined in [awtk.ts:8161](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8161)*

获取当前控件的类型名称。

**Returns:** *string*

返回类型名。

___

###  getValue

▸ **getValue**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[getValue](_awtk_.twidget.md#getvalue)*

*Defined in [awtk.ts:7577](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7577)*

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

**Returns:** *number*

返回值。

___

###  getWindow

▸ **getWindow**(): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[getWindow](_awtk_.twidget.md#getwindow)*

*Defined in [awtk.ts:8139](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8139)*

获取当前控件所在的窗口。

**Returns:** *[TWidget](_awtk_.twidget.md)*

窗口对象。

___

###  getWindowManager

▸ **getWindowManager**(): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[getWindowManager](_awtk_.twidget.md#getwindowmanager)*

*Defined in [awtk.ts:8150](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8150)*

获取当前的窗口管理器。

**Returns:** *[TWidget](_awtk_.twidget.md)*

窗口管理器对象。

___

###  indexOf

▸ **indexOf**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[indexOf](_awtk_.twidget.md#indexof)*

*Defined in [awtk.ts:7448](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7448)*

获取控件在父控件中的索引编号。

**Returns:** *number*

在父控件中的索引编号。

___

###  insertChild

▸ **insertChild**(`index`: number, `child`: [TWidget](_awtk_.twidget.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[insertChild](_awtk_.twidget.md#insertchild)*

*Defined in [awtk.ts:7865](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7865)*

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

*Defined in [awtk.ts:7993](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7993)*

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

*Defined in [awtk.ts:8104](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8104)*

判断当前控件是否是设计窗口。

**Returns:** *boolean*

返回当前控件是否是设计窗口。

___

###  isWindow

▸ **isWindow**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isWindow](_awtk_.twidget.md#iswindow)*

*Defined in [awtk.ts:8093](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8093)*

判断当前控件是否是窗口。

**Returns:** *boolean*

返回当前控件是否是窗口。

___

###  isWindowManager

▸ **isWindowManager**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isWindowManager](_awtk_.twidget.md#iswindowmanager)*

*Defined in [awtk.ts:8115](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8115)*

判断当前控件是否是窗口管理器。

**Returns:** *boolean*

返回当前控件是否是窗口管理器。

___

###  isWindowOpened

▸ **isWindowOpened**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isWindowOpened](_awtk_.twidget.md#iswindowopened)*

*Defined in [awtk.ts:8082](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8082)*

判断当前控件所在的窗口是否已经打开。

**Returns:** *boolean*

返回当前控件所在的窗口是否已经打开。

___

###  layout

▸ **layout**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[layout](_awtk_.twidget.md#layout)*

*Defined in [awtk.ts:8232](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8232)*

布局当前控件及子控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  lookup

▸ **lookup**(`name`: string, `recursive`: boolean): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[lookup](_awtk_.twidget.md#lookup)*

*Defined in [awtk.ts:7902](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7902)*

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

*Defined in [awtk.ts:7915](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7915)*

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

*Defined in [awtk.ts:7461](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7461)*

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

*Defined in [awtk.ts:7489](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7489)*

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

*Defined in [awtk.ts:7981](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7981)*

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

*Defined in [awtk.ts:7969](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7969)*

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

*Defined in [awtk.ts:7708](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7708)*

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

*Defined in [awtk.ts:7852](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7852)*

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

*Defined in [awtk.ts:7474](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7474)*

调整控件的大小。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`w` | number | 宽度 |
`h` | number | 高度  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  resizeToContent

▸ **resizeToContent**(`min_w`: number, `max_w`: number, `min_h`: number, `max_h`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:18184](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L18184)*

根据文本内容调节控件大小。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`min_w` | number | 最小宽度。 |
`max_w` | number | 最大宽度。 |
`min_h` | number | 最小高度。 |
`max_h` | number | 最大高度。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  restack

▸ **restack**(`index`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[restack](_awtk_.twidget.md#restack)*

*Defined in [awtk.ts:7877](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7877)*

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

*Defined in [awtk.ts:7640](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7640)*

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

*Defined in [awtk.ts:7691](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7691)*

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

*Defined in [awtk.ts:8256](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8256)*

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

*Defined in [awtk.ts:7754](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7754)*

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

*Defined in [awtk.ts:7766](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7766)*

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

*Defined in [awtk.ts:7779](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7779)*

设置控件的floating标志。
floating的控件不受父控件的子控件布局参数的影响。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`floating` | boolean | 是否启用floating布局。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setFocused

▸ **setFocused**(`focused`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setFocused](_awtk_.twidget.md#setfocused)*

*Defined in [awtk.ts:7791](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7791)*

设置控件的是否聚焦。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`focused` | boolean | 是否聚焦。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setLength

▸ **setLength**(`length`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:18169](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L18169)*

设置显示字符的个数(小余0时全部显示)。。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`length` | number | 最大可显示字符个数。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setName

▸ **setName**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setName](_awtk_.twidget.md#setname)*

*Defined in [awtk.ts:7601](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7601)*

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

*Defined in [awtk.ts:7817](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7817)*

设置控件的不透明度。

在嵌入式平台，半透明效果会使性能大幅下降，请谨慎使用。

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

*Defined in [awtk.ts:7627](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7627)*

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

*Defined in [awtk.ts:8058](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8058)*

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

*Defined in [awtk.ts:8032](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8032)*

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

*Defined in [awtk.ts:8006](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8006)*

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

*Defined in [awtk.ts:8244](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8244)*

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

*Defined in [awtk.ts:8271](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8271)*

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

*Defined in [awtk.ts:7952](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7952)*

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

*Defined in [awtk.ts:7803](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7803)*

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

*Defined in [awtk.ts:8310](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8310)*

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

*Defined in [awtk.ts:8284](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8284)*

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

*Defined in [awtk.ts:8297](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8297)*

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

*Defined in [awtk.ts:7554](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7554)*

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

*Defined in [awtk.ts:7615](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7615)*

设置theme的名称，用于动态切换主题。名称与当前主题名称相同，则重新加载全部资源。

目前只支持带有文件系统的平台。

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

*Defined in [awtk.ts:7566](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7566)*

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

*Defined in [awtk.ts:7502](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7502)*

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

*Defined in [awtk.ts:7928](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7928)*

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

*Defined in [awtk.ts:7940](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7940)*

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

*Defined in [awtk.ts:7673](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7673)*

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

*Defined in [awtk.ts:7725](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7725)*

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

*Defined in [awtk.ts:8221](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L8221)*

减少控件的引用计数。引用计数为0时销毁控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  useStyle

▸ **useStyle**(`style`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[useStyle](_awtk_.twidget.md#usestyle)*

*Defined in [awtk.ts:7541](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L7541)*

启用指定的主题。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`style` | string | style的名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`widget`: [TWidget](_awtk_.twidget.md)): *[TLabel](_awtk_.tlabel.md)*

*Overrides [TWidget](_awtk_.twidget.md).[cast](_awtk_.twidget.md#static-cast)*

*Defined in [awtk.ts:18196](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L18196)*

转换为label对象(供脚本语言使用)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`widget` | [TWidget](_awtk_.twidget.md) | label对象。  |

**Returns:** *[TLabel](_awtk_.tlabel.md)*

label对象。

___

### `Static` create

▸ **create**(`parent`: [TWidget](_awtk_.twidget.md), `x`: number, `y`: number, `w`: number, `h`: number): *[TWidget](_awtk_.twidget.md)*

*Defined in [awtk.ts:18157](https://github.com/zlgopen/awtk-binding/blob/feacbc6/tools/code_gen/js/output/awtk.ts#L18157)*

创建label对象

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
