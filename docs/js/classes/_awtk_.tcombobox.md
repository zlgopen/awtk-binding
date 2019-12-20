[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TComboBox](_awtk_.tcombobox.md)

# Class: TComboBox

下拉列表控件。

点击右边的按钮，可弹出一个下拉列表，从中选择一项作为当前的值。

combo\_box\_t是[edit\_t](edit_t.md)的子类控件，edit\_t的函数均适用于combo\_box\_t控件。

在xml中使用"combo_box"标签创建下拉列表控件。

列表选项可以直接写在"options"属性中。如：

```xml
<combo_box readonly="true" x="10" y="bottom:5" w="200" h="30" tr_text="ok"
options="1:ok;2:cancel;"/>
```

列表选项也可以放在独立的窗口中，用属性"open_window"指定窗口的名称。如：

```xml
<combo_box open_window="language" readonly="true" x="10" y="bottom:50" w="200" h="30"
tr_text="english"/>
```

language.xml:

```xml
<popup close_when_click_outside="true" h="80"
<list_view x="0"  y="0" w="100%" h="100%" item_height="30">
<scroll_view name="view" x="0"  y="0" w="-12" h="100%">
<combo_box_item tr_text="english"/>
<combo_box_item tr_text="chinese" />
</scroll_view>
<scroll_bar_d name="bar" x="right" y="0" w="12" h="100%" value="0"/>
</list_view>
</popup>
```

> 更多用法请参考：[combo_box.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/combo_box.xml)

如果在文本比较长时，希望在获得焦点时文本自动滚动，可以放入一个hscroll_label为子控件，并命名为"value"。如：

```xml
<combo_box left_margin="6" readonly="true" x="10" y="50" w="80" h="30" options="leftttttttttt;centerrrrrrrrrrrrrrrr;rightttttttttt;"
selected_index="1">
<hscroll_label x="0" y="0" w="-30" h="100%"
name="value"
lull="1000"
loop="true"
yoyo="true"
ellipses="true"
only_parent_focus="true"/>
<button style="combobox_down" x="right:5" y="middle" w="20" h="20"/>
</combo_box>
```

在c代码中使用函数combo\_box\_create创建下拉列表控件。如：

创建之后：

* 用combo\_box\_set\_options设置可选项目。
* 用combo\_box\_set\_selected\_index设置缺省项。

> 完整示例请参考：[combo_box
demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/combo_box.c)

可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：

```xml
<combo_box>
<style name="default" border_color="#a0a0a0"  text_color="black" text_align_h="left">
<normal     bg_color="#f0f0f0" />
<focused    bg_color="#f0f0f0" border_color="black"/>
<empty      bg_color="#f0f0f0" text_color="#a0a0a0" />
</style>
</combo_box>
```

* 1.combobox的下拉按钮的style名称为combobox_down，可以在主题文件中设置。

```xml
<button>
<style name="combobox_down" border_color="#a0a0a0">
<normal     bg_color="#f0f0f0" icon="arrow_down_n"/>
<pressed    bg_color="#c0c0c0" icon="arrow_down_p"/>
<over       bg_color="#e0e0e0" icon="arrow_down_o"/>
</style>
</button>
```

* 2.combobox的弹出popup窗口的style名称为combobox_popup，可以在主题文件中设置。

```xml
<popup>
<style name="combobox_popup" border_color="red">
<normal bg_color="#808080"/>
</style>
</popup>
```

> 更多用法请参考：[theme
default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L422)

## Hierarchy

* [TWidget](_awtk_.twidget.md)

  ↳ **TComboBox**

  ↳ [TComboBoxEx](_awtk_.tcomboboxex.md)

## Index

### Constructors

* [constructor](_awtk_.tcombobox.md#constructor)

### Properties

* [nativeObj](_awtk_.tcombobox.md#nativeobj)

### Accessors

* [animation](_awtk_.tcombobox.md#animation)
* [enable](_awtk_.tcombobox.md#enable)
* [feedback](_awtk_.tcombobox.md#feedback)
* [floating](_awtk_.tcombobox.md#floating)
* [focusable](_awtk_.tcombobox.md#focusable)
* [h](_awtk_.tcombobox.md#h)
* [itemHeight](_awtk_.tcombobox.md#itemheight)
* [localizeOptions](_awtk_.tcombobox.md#localizeoptions)
* [name](_awtk_.tcombobox.md#name)
* [openWindow](_awtk_.tcombobox.md#openwindow)
* [options](_awtk_.tcombobox.md#options)
* [parent](_awtk_.tcombobox.md#parent)
* [selectedIndex](_awtk_.tcombobox.md#selectedindex)
* [sensitive](_awtk_.tcombobox.md#sensitive)
* [style](_awtk_.tcombobox.md#style)
* [trText](_awtk_.tcombobox.md#trtext)
* [value](_awtk_.tcombobox.md#value)
* [visible](_awtk_.tcombobox.md#visible)
* [w](_awtk_.tcombobox.md#w)
* [withFocusState](_awtk_.tcombobox.md#withfocusstate)
* [x](_awtk_.tcombobox.md#x)
* [y](_awtk_.tcombobox.md#y)

### Methods

* [addChild](_awtk_.tcombobox.md#addchild)
* [addValue](_awtk_.tcombobox.md#addvalue)
* [animateValueTo](_awtk_.tcombobox.md#animatevalueto)
* [appendOption](_awtk_.tcombobox.md#appendoption)
* [child](_awtk_.tcombobox.md#child)
* [clone](_awtk_.tcombobox.md#clone)
* [countChildren](_awtk_.tcombobox.md#countchildren)
* [countOptions](_awtk_.tcombobox.md#countoptions)
* [createAnimator](_awtk_.tcombobox.md#createanimator)
* [destroy](_awtk_.tcombobox.md#destroy)
* [destroyAnimator](_awtk_.tcombobox.md#destroyanimator)
* [destroyChildren](_awtk_.tcombobox.md#destroychildren)
* [equal](_awtk_.tcombobox.md#equal)
* [foreach](_awtk_.tcombobox.md#foreach)
* [getChild](_awtk_.tcombobox.md#getchild)
* [getPropBool](_awtk_.tcombobox.md#getpropbool)
* [getPropInt](_awtk_.tcombobox.md#getpropint)
* [getPropStr](_awtk_.tcombobox.md#getpropstr)
* [getText](_awtk_.tcombobox.md#gettext)
* [getTextValue](_awtk_.tcombobox.md#gettextvalue)
* [getType](_awtk_.tcombobox.md#gettype)
* [getValue](_awtk_.tcombobox.md#getvalue)
* [getWindow](_awtk_.tcombobox.md#getwindow)
* [getWindowManager](_awtk_.tcombobox.md#getwindowmanager)
* [indexOf](_awtk_.tcombobox.md#indexof)
* [insertChild](_awtk_.tcombobox.md#insertchild)
* [invalidateForce](_awtk_.tcombobox.md#invalidateforce)
* [isDesigningWindow](_awtk_.tcombobox.md#isdesigningwindow)
* [isWindow](_awtk_.tcombobox.md#iswindow)
* [isWindowManager](_awtk_.tcombobox.md#iswindowmanager)
* [isWindowOpened](_awtk_.tcombobox.md#iswindowopened)
* [layout](_awtk_.tcombobox.md#layout)
* [lookup](_awtk_.tcombobox.md#lookup)
* [lookupByType](_awtk_.tcombobox.md#lookupbytype)
* [move](_awtk_.tcombobox.md#move)
* [moveResize](_awtk_.tcombobox.md#moveresize)
* [off](_awtk_.tcombobox.md#off)
* [on](_awtk_.tcombobox.md#on)
* [pauseAnimator](_awtk_.tcombobox.md#pauseanimator)
* [removeChild](_awtk_.tcombobox.md#removechild)
* [resetOptions](_awtk_.tcombobox.md#resetoptions)
* [resize](_awtk_.tcombobox.md#resize)
* [restack](_awtk_.tcombobox.md#restack)
* [setAnimation](_awtk_.tcombobox.md#setanimation)
* [setAnimatorTimeScale](_awtk_.tcombobox.md#setanimatortimescale)
* [setChildrenLayout](_awtk_.tcombobox.md#setchildrenlayout)
* [setEnable](_awtk_.tcombobox.md#setenable)
* [setFeedback](_awtk_.tcombobox.md#setfeedback)
* [setFloating](_awtk_.tcombobox.md#setfloating)
* [setFocusable](_awtk_.tcombobox.md#setfocusable)
* [setFocused](_awtk_.tcombobox.md#setfocused)
* [setItemHeight](_awtk_.tcombobox.md#setitemheight)
* [setLocalizeOptions](_awtk_.tcombobox.md#setlocalizeoptions)
* [setName](_awtk_.tcombobox.md#setname)
* [setOpacity](_awtk_.tcombobox.md#setopacity)
* [setOpenWindow](_awtk_.tcombobox.md#setopenwindow)
* [setOptions](_awtk_.tcombobox.md#setoptions)
* [setPointerCursor](_awtk_.tcombobox.md#setpointercursor)
* [setPropBool](_awtk_.tcombobox.md#setpropbool)
* [setPropInt](_awtk_.tcombobox.md#setpropint)
* [setPropStr](_awtk_.tcombobox.md#setpropstr)
* [setSelectedIndex](_awtk_.tcombobox.md#setselectedindex)
* [setSelfLayout](_awtk_.tcombobox.md#setselflayout)
* [setSelfLayoutParams](_awtk_.tcombobox.md#setselflayoutparams)
* [setSensitive](_awtk_.tcombobox.md#setsensitive)
* [setState](_awtk_.tcombobox.md#setstate)
* [setStyleColor](_awtk_.tcombobox.md#setstylecolor)
* [setStyleInt](_awtk_.tcombobox.md#setstyleint)
* [setStyleStr](_awtk_.tcombobox.md#setstylestr)
* [setText](_awtk_.tcombobox.md#settext)
* [setTheme](_awtk_.tcombobox.md#settheme)
* [setTrText](_awtk_.tcombobox.md#settrtext)
* [setValue](_awtk_.tcombobox.md#setvalue)
* [setVisible](_awtk_.tcombobox.md#setvisible)
* [setVisibleOnly](_awtk_.tcombobox.md#setvisibleonly)
* [startAnimator](_awtk_.tcombobox.md#startanimator)
* [stopAnimator](_awtk_.tcombobox.md#stopanimator)
* [unref](_awtk_.tcombobox.md#unref)
* [useStyle](_awtk_.tcombobox.md#usestyle)
* [cast](_awtk_.tcombobox.md#static-cast)
* [create](_awtk_.tcombobox.md#static-create)

## Constructors

###  constructor

\+ **new TComboBox**(`nativeObj`: any): *[TComboBox](_awtk_.tcombobox.md)*

*Overrides [TWidget](_awtk_.twidget.md).[constructor](_awtk_.twidget.md#constructor)*

*Defined in [awtk.ts:16806](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16806)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TComboBox](_awtk_.tcombobox.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TWidget](_awtk_.twidget.md).[nativeObj](_awtk_.twidget.md#nativeobj)*

*Defined in [awtk.ts:16806](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16806)*

## Accessors

###  animation

• **get animation**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[animation](_awtk_.twidget.md#animation)*

*Defined in [awtk.ts:8420](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8420)*

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

**Returns:** *string*

• **set animation**(`v`: string): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[animation](_awtk_.twidget.md#animation)*

*Defined in [awtk.ts:8424](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8424)*

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

*Defined in [awtk.ts:8433](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8433)*

启用/禁用状态。

**Returns:** *boolean*

• **set enable**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[enable](_awtk_.twidget.md#enable)*

*Defined in [awtk.ts:8437](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8437)*

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

*Defined in [awtk.ts:8446](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8446)*

是否启用按键音、触屏音和震动等反馈。

**Returns:** *boolean*

• **set feedback**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[feedback](_awtk_.twidget.md#feedback)*

*Defined in [awtk.ts:8450](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8450)*

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

*Defined in [awtk.ts:8512](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8512)*

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

**Returns:** *boolean*

• **set floating**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[floating](_awtk_.twidget.md#floating)*

*Defined in [awtk.ts:8516](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8516)*

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

*Defined in [awtk.ts:8485](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8485)*

是否支持焦点停留。

**Returns:** *boolean*

• **set focusable**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[focusable](_awtk_.twidget.md#focusable)*

*Defined in [awtk.ts:8489](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8489)*

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

*Defined in [awtk.ts:8376](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8376)*

高度。

**Returns:** *number*

___

###  itemHeight

• **get itemHeight**(): *number*

*Defined in [awtk.ts:17038](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L17038)*

下拉选项的高度。如果open_window为空，则使用缺省高度。

**Returns:** *number*

• **set itemHeight**(`v`: number): *void*

*Defined in [awtk.ts:17042](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L17042)*

下拉选项的高度。如果open_window为空，则使用缺省高度。

**Parameters:**

Name | Type |
------ | ------ |
`v` | number |

**Returns:** *void*

___

###  localizeOptions

• **get localizeOptions**(): *boolean*

*Defined in [awtk.ts:17012](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L17012)*

是否本地化(翻译)选项(缺省为TRUE)。

**Returns:** *boolean*

• **set localizeOptions**(`v`: boolean): *void*

*Defined in [awtk.ts:17016](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L17016)*

是否本地化(翻译)选项(缺省为TRUE)。

**Parameters:**

Name | Type |
------ | ------ |
`v` | boolean |

**Returns:** *void*

___

###  name

• **get name**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[name](_awtk_.twidget.md#name)*

*Defined in [awtk.ts:8385](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8385)*

控件名字。

**Returns:** *string*

• **set name**(`v`: string): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[name](_awtk_.twidget.md#name)*

*Defined in [awtk.ts:8389](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8389)*

控件名字。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  openWindow

• **get openWindow**(): *string*

*Defined in [awtk.ts:16973](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16973)*

为点击按钮时，要打开窗口的名称。

**Returns:** *string*

• **set openWindow**(`v`: string): *void*

*Defined in [awtk.ts:16977](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16977)*

为点击按钮时，要打开窗口的名称。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  options

• **get options**(): *string*

*Defined in [awtk.ts:17025](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L17025)*

设置可选项(冒号分隔值和文本，分号分隔选项，如:1:red;2:green;3:blue)。

**Returns:** *string*

• **set options**(`v`: string): *void*

*Defined in [awtk.ts:17029](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L17029)*

设置可选项(冒号分隔值和文本，分号分隔选项，如:1:red;2:green;3:blue)。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  parent

• **get parent**(): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[parent](_awtk_.twidget.md#parent)*

*Defined in [awtk.ts:8525](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8525)*

父控件

**Returns:** *[TWidget](_awtk_.twidget.md)*

___

###  selectedIndex

• **get selectedIndex**(): *number*

*Defined in [awtk.ts:16986](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16986)*

当前选中的选项。

**Returns:** *number*

• **set selectedIndex**(`v`: number): *void*

*Defined in [awtk.ts:16990](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16990)*

当前选中的选项。

**Parameters:**

Name | Type |
------ | ------ |
`v` | number |

**Returns:** *void*

___

###  sensitive

• **get sensitive**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[sensitive](_awtk_.twidget.md#sensitive)*

*Defined in [awtk.ts:8472](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8472)*

是否接受用户事件。

**Returns:** *boolean*

• **set sensitive**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[sensitive](_awtk_.twidget.md#sensitive)*

*Defined in [awtk.ts:8476](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8476)*

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

*Defined in [awtk.ts:8411](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8411)*

style的名称。

**Returns:** *string*

___

###  trText

• **get trText**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[trText](_awtk_.twidget.md#trtext)*

*Defined in [awtk.ts:8398](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8398)*

保存用于翻译的字符串。

**Returns:** *string*

• **set trText**(`v`: string): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[trText](_awtk_.twidget.md#trtext)*

*Defined in [awtk.ts:8402](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8402)*

保存用于翻译的字符串。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  value

• **get value**(): *number*

*Defined in [awtk.ts:16999](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16999)*

值。

**Returns:** *number*

• **set value**(`v`: number): *void*

*Defined in [awtk.ts:17003](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L17003)*

值。

**Parameters:**

Name | Type |
------ | ------ |
`v` | number |

**Returns:** *void*

___

###  visible

• **get visible**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[visible](_awtk_.twidget.md#visible)*

*Defined in [awtk.ts:8459](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8459)*

是否可见。

**Returns:** *boolean*

• **set visible**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[visible](_awtk_.twidget.md#visible)*

*Defined in [awtk.ts:8463](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8463)*

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

*Defined in [awtk.ts:8367](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8367)*

宽度。

**Returns:** *number*

___

###  withFocusState

• **get withFocusState**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[withFocusState](_awtk_.twidget.md#withfocusstate)*

*Defined in [awtk.ts:8499](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8499)*

是否支持焦点状态。
> 如果希望style支持焦点状态，但有不希望焦点停留，可用本属性。

**Returns:** *boolean*

• **set withFocusState**(`v`: boolean): *void*

*Inherited from [TWidget](_awtk_.twidget.md).[withFocusState](_awtk_.twidget.md#withfocusstate)*

*Defined in [awtk.ts:8503](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8503)*

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

*Defined in [awtk.ts:8349](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8349)*

x坐标(相对于父控件的x坐标)。

**Returns:** *number*

___

###  y

• **get y**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[y](_awtk_.twidget.md#y)*

*Defined in [awtk.ts:8358](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8358)*

y坐标(相对于父控件的y坐标)。

**Returns:** *number*

## Methods

###  addChild

▸ **addChild**(`child`: [TWidget](_awtk_.twidget.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[addChild](_awtk_.twidget.md#addchild)*

*Defined in [awtk.ts:7870](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7870)*

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

*Defined in [awtk.ts:7547](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7547)*

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

*Defined in [awtk.ts:7534](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7534)*

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

###  appendOption

▸ **appendOption**(`value`: any, `text`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:16930](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16930)*

追加一个选项。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`value` | any | 值。 |
`text` | string | 文本。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  child

▸ **child**(`name`: string): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[child](_awtk_.twidget.md#child)*

*Defined in [awtk.ts:7919](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7919)*

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

*Defined in [awtk.ts:8203](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8203)*

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

*Defined in [awtk.ts:7443](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7443)*

获取子控件的个数。

**Returns:** *number*

子控件的个数。

___

###  countOptions

▸ **countOptions**(): *number*

*Defined in [awtk.ts:16869](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16869)*

获取选项个数。

**Returns:** *number*

返回选项个数。

___

###  createAnimator

▸ **createAnimator**(`animation`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[createAnimator](_awtk_.twidget.md#createanimator)*

*Defined in [awtk.ts:7674](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7674)*

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

*Defined in [awtk.ts:8240](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8240)*

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  destroyAnimator

▸ **destroyAnimator**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[destroyAnimator](_awtk_.twidget.md#destroyanimator)*

*Defined in [awtk.ts:7760](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7760)*

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

*Defined in [awtk.ts:7858](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7858)*

销毁全部子控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  equal

▸ **equal**(`other`: [TWidget](_awtk_.twidget.md)): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[equal](_awtk_.twidget.md#equal)*

*Defined in [awtk.ts:8215](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8215)*

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

*Defined in [awtk.ts:8158](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8158)*

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

*Defined in [awtk.ts:7455](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7455)*

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

*Defined in [awtk.ts:8101](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8101)*

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

*Defined in [awtk.ts:8075](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8075)*

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

*Defined in [awtk.ts:8049](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8049)*

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

*Defined in [awtk.ts:7607](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7607)*

获取控件的文本。
只是对widget\_get\_prop的包装，文本的意义由子类控件决定。

**Returns:** *any*

返回文本。

___

###  getTextValue

▸ **getTextValue**(): *string*

*Defined in [awtk.ts:16964](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16964)*

获取combo_box的文本。

**Returns:** *string*

返回文本。

___

###  getType

▸ **getType**(): *string*

*Inherited from [TWidget](_awtk_.twidget.md).[getType](_awtk_.twidget.md#gettype)*

*Defined in [awtk.ts:8191](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8191)*

获取当前控件的类型名称。

**Returns:** *string*

返回类型名。

___

###  getValue

▸ **getValue**(): *number*

*Overrides [TWidget](_awtk_.twidget.md).[getValue](_awtk_.twidget.md#getvalue)*

*Defined in [awtk.ts:16953](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16953)*

获取combo_box的值。

**Returns:** *number*

返回值。

___

###  getWindow

▸ **getWindow**(): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[getWindow](_awtk_.twidget.md#getwindow)*

*Defined in [awtk.ts:8169](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8169)*

获取当前控件所在的窗口。

**Returns:** *[TWidget](_awtk_.twidget.md)*

窗口对象。

___

###  getWindowManager

▸ **getWindowManager**(): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[getWindowManager](_awtk_.twidget.md#getwindowmanager)*

*Defined in [awtk.ts:8180](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8180)*

获取当前的窗口管理器。

**Returns:** *[TWidget](_awtk_.twidget.md)*

窗口管理器对象。

___

###  indexOf

▸ **indexOf**(): *number*

*Inherited from [TWidget](_awtk_.twidget.md).[indexOf](_awtk_.twidget.md#indexof)*

*Defined in [awtk.ts:7466](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7466)*

获取控件在父控件中的索引编号。

**Returns:** *number*

在父控件中的索引编号。

___

###  insertChild

▸ **insertChild**(`index`: number, `child`: [TWidget](_awtk_.twidget.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[insertChild](_awtk_.twidget.md#insertchild)*

*Defined in [awtk.ts:7895](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7895)*

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

*Defined in [awtk.ts:8023](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8023)*

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

*Defined in [awtk.ts:8134](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8134)*

判断当前控件是否是设计窗口。

**Returns:** *boolean*

返回当前控件是否是设计窗口。

___

###  isWindow

▸ **isWindow**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isWindow](_awtk_.twidget.md#iswindow)*

*Defined in [awtk.ts:8123](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8123)*

判断当前控件是否是窗口。

**Returns:** *boolean*

返回当前控件是否是窗口。

___

###  isWindowManager

▸ **isWindowManager**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isWindowManager](_awtk_.twidget.md#iswindowmanager)*

*Defined in [awtk.ts:8145](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8145)*

判断当前控件是否是窗口管理器。

**Returns:** *boolean*

返回当前控件是否是窗口管理器。

___

###  isWindowOpened

▸ **isWindowOpened**(): *boolean*

*Inherited from [TWidget](_awtk_.twidget.md).[isWindowOpened](_awtk_.twidget.md#iswindowopened)*

*Defined in [awtk.ts:8112](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8112)*

判断当前控件所在的窗口是否已经打开。

**Returns:** *boolean*

返回当前控件所在的窗口是否已经打开。

___

###  layout

▸ **layout**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[layout](_awtk_.twidget.md#layout)*

*Defined in [awtk.ts:8262](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8262)*

布局当前控件及子控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  lookup

▸ **lookup**(`name`: string, `recursive`: boolean): *[TWidget](_awtk_.twidget.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[lookup](_awtk_.twidget.md#lookup)*

*Defined in [awtk.ts:7932](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7932)*

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

*Defined in [awtk.ts:7945](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7945)*

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

*Defined in [awtk.ts:7479](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7479)*

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

*Defined in [awtk.ts:7507](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7507)*

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

*Defined in [awtk.ts:8011](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8011)*

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

*Defined in [awtk.ts:7999](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7999)*

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

*Defined in [awtk.ts:7726](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7726)*

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

*Defined in [awtk.ts:7882](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7882)*

移出指定的子控件(并不销毁)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`child` | [TWidget](_awtk_.twidget.md) | 子控件对象。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  resetOptions

▸ **resetOptions**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:16858](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16858)*

重置所有选项。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  resize

▸ **resize**(`w`: number, `h`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[resize](_awtk_.twidget.md#resize)*

*Defined in [awtk.ts:7492](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7492)*

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

*Defined in [awtk.ts:7907](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7907)*

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

*Defined in [awtk.ts:7658](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7658)*

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

*Defined in [awtk.ts:7709](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7709)*

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

*Defined in [awtk.ts:8286](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8286)*

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

*Defined in [awtk.ts:7772](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7772)*

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

*Defined in [awtk.ts:7784](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7784)*

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

*Defined in [awtk.ts:7797](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7797)*

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

*Defined in [awtk.ts:7821](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7821)*

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

*Defined in [awtk.ts:7809](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7809)*

设置控件是否获得焦点。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`focused` | boolean | 是否获得焦点。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setItemHeight

▸ **setItemHeight**(`item_height`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:16917](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16917)*

设置item高度。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`item_height` | number | item的高度。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setLocalizeOptions

▸ **setLocalizeOptions**(`localize_options`: boolean): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:16893](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16893)*

设置是否本地化(翻译)选项。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`localize_options` | boolean | 是否本地化(翻译)选项。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setName

▸ **setName**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setName](_awtk_.twidget.md#setname)*

*Defined in [awtk.ts:7619](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7619)*

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

*Defined in [awtk.ts:7847](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7847)*

设置控件的不透明度。

>在嵌入式平台，半透明效果会使性能大幅下降，请谨慎使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`opacity` | number | 不透明度(取值0-255，0表示完全透明，255表示完全不透明)。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setOpenWindow

▸ **setOpenWindow**(`open_window`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:16847](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16847)*

点击按钮时可以打开popup窗口，本函数可设置窗口的名称。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`open_window` | string | 弹出窗口的名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setOptions

▸ **setOptions**(`options`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:16942](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16942)*

设置选项。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`options` | string | 选项。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPointerCursor

▸ **setPointerCursor**(`cursor`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setPointerCursor](_awtk_.twidget.md#setpointercursor)*

*Defined in [awtk.ts:7645](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7645)*

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

*Defined in [awtk.ts:8088](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8088)*

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

*Defined in [awtk.ts:8062](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8062)*

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

*Defined in [awtk.ts:8036](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8036)*

设置字符串格式的属性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`v` | string | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setSelectedIndex

▸ **setSelectedIndex**(`index`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:16881](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16881)*

设置第index个选项为当前选中的选项。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`index` | number | 选项的索引。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setSelfLayout

▸ **setSelfLayout**(`params`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[setSelfLayout](_awtk_.twidget.md#setselflayout)*

*Defined in [awtk.ts:8274](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8274)*

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

*Defined in [awtk.ts:8301](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8301)*

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

*Defined in [awtk.ts:7982](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7982)*

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

*Defined in [awtk.ts:7833](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7833)*

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

*Defined in [awtk.ts:8340](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8340)*

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

*Defined in [awtk.ts:8314](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8314)*

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

*Defined in [awtk.ts:8327](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8327)*

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

*Defined in [awtk.ts:7572](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7572)*

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

*Defined in [awtk.ts:7633](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7633)*

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

*Defined in [awtk.ts:7584](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7584)*

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

*Defined in [awtk.ts:16905](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16905)*

设置值。

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

*Defined in [awtk.ts:7958](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7958)*

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

*Defined in [awtk.ts:7970](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7970)*

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

*Defined in [awtk.ts:7691](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7691)*

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

*Defined in [awtk.ts:7743](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7743)*

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

*Defined in [awtk.ts:8251](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L8251)*

减少控件的引用计数。引用计数为0时销毁控件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  useStyle

▸ **useStyle**(`style`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TWidget](_awtk_.twidget.md).[useStyle](_awtk_.twidget.md#usestyle)*

*Defined in [awtk.ts:7559](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L7559)*

启用指定的主题。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`style` | string | style的名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`widget`: [TWidget](_awtk_.twidget.md)): *[TComboBox](_awtk_.tcombobox.md)*

*Overrides [TWidget](_awtk_.twidget.md).[cast](_awtk_.twidget.md#static-cast)*

*Defined in [awtk.ts:16835](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16835)*

转换combo_box对象(供脚本语言使用)。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`widget` | [TWidget](_awtk_.twidget.md) | combo_box对象。  |

**Returns:** *[TComboBox](_awtk_.tcombobox.md)*

combo_box对象。

___

### `Static` create

▸ **create**(`parent`: [TWidget](_awtk_.twidget.md), `x`: number, `y`: number, `w`: number, `h`: number): *[TWidget](_awtk_.twidget.md)*

*Defined in [awtk.ts:16823](https://github.com/zlgopen/awtk-binding/blob/d9c773a/tools/code_gen/js/output/awtk.ts#L16823)*

创建combo_box对象

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
