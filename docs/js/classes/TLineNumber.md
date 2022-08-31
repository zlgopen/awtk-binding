[AWTK](../README.md) / [Exports](../modules.md) / TLineNumber

# Class: TLineNumber

行号。多行编辑器的行号。

line\_number\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于line\_number\_t控件。

在xml中使用"lin\e_number"标签创建行号控件，一般配合mledit使用。如：

```xml
<mledit x="c" y="10" h="40%" w="90%" focus="true" left_margin="36" right_margin="16"
wrap_word="true">
<line_number x="0" y="0" w="32" h="100%" value="0"/>
<scroll_bar_d x="right" y="0" w="14" h="100%" value="0"/>
</mledit>
```

> 更多用法请参考：[mledit.xml](
https://github.com/zlgopen/awtk/blob/master/design/default/ui/mledit.xml)

可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：

```xml
<line_number>
<style name="default">
<normal text_color="black" bg_color="#d0d0d0" text_align_h="right"/>
</style>
</line_number>
```

> 更多用法请参考：
[theme default](
https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L556)

## Hierarchy

- [`TWidget`](TWidget.md)

  ↳ **`TLineNumber`**

## Table of contents

### Constructors

- [constructor](TLineNumber.md#constructor)

### Properties

- [nativeObj](TLineNumber.md#nativeobj)

### Accessors

- [animation](TLineNumber.md#animation)
- [autoAdjustSize](TLineNumber.md#autoadjustsize)
- [dirtyRectTolerance](TLineNumber.md#dirtyrecttolerance)
- [enable](TLineNumber.md#enable)
- [feedback](TLineNumber.md#feedback)
- [floating](TLineNumber.md#floating)
- [focusable](TLineNumber.md#focusable)
- [h](TLineNumber.md#h)
- [name](TLineNumber.md#name)
- [opacity](TLineNumber.md#opacity)
- [parent](TLineNumber.md#parent)
- [pointerCursor](TLineNumber.md#pointercursor)
- [sensitive](TLineNumber.md#sensitive)
- [style](TLineNumber.md#style)
- [trText](TLineNumber.md#trtext)
- [visible](TLineNumber.md#visible)
- [w](TLineNumber.md#w)
- [withFocusState](TLineNumber.md#withfocusstate)
- [x](TLineNumber.md#x)
- [y](TLineNumber.md#y)

### Methods

- [addChild](TLineNumber.md#addchild)
- [addChildDefault](TLineNumber.md#addchilddefault)
- [addHighlightLine](TLineNumber.md#addhighlightline)
- [addValue](TLineNumber.md#addvalue)
- [addValueInt](TLineNumber.md#addvalueint)
- [animateValueTo](TLineNumber.md#animatevalueto)
- [back](TLineNumber.md#back)
- [backToHome](TLineNumber.md#backtohome)
- [child](TLineNumber.md#child)
- [clearHighlight](TLineNumber.md#clearhighlight)
- [clone](TLineNumber.md#clone)
- [closeWindow](TLineNumber.md#closewindow)
- [closeWindowForce](TLineNumber.md#closewindowforce)
- [countChildren](TLineNumber.md#countchildren)
- [createAnimator](TLineNumber.md#createanimator)
- [destroy](TLineNumber.md#destroy)
- [destroyAnimator](TLineNumber.md#destroyanimator)
- [destroyAsync](TLineNumber.md#destroyasync)
- [destroyChildren](TLineNumber.md#destroychildren)
- [dispatchToKeyTarget](TLineNumber.md#dispatchtokeytarget)
- [dispatchToTarget](TLineNumber.md#dispatchtotarget)
- [equal](TLineNumber.md#equal)
- [fillBgRect](TLineNumber.md#fillbgrect)
- [fillFgRect](TLineNumber.md#fillfgrect)
- [findParentByName](TLineNumber.md#findparentbyname)
- [findParentByType](TLineNumber.md#findparentbytype)
- [focusNext](TLineNumber.md#focusnext)
- [focusPrev](TLineNumber.md#focusprev)
- [foreach](TLineNumber.md#foreach)
- [getAutoAdjustSize](TLineNumber.md#getautoadjustsize)
- [getChild](TLineNumber.md#getchild)
- [getEnable](TLineNumber.md#getenable)
- [getFeedback](TLineNumber.md#getfeedback)
- [getFloating](TLineNumber.md#getfloating)
- [getFocusable](TLineNumber.md#getfocusable)
- [getFocusedWidget](TLineNumber.md#getfocusedwidget)
- [getNativeWindow](TLineNumber.md#getnativewindow)
- [getPropBool](TLineNumber.md#getpropbool)
- [getPropFloat](TLineNumber.md#getpropfloat)
- [getPropInt](TLineNumber.md#getpropint)
- [getPropPointer](TLineNumber.md#getproppointer)
- [getPropStr](TLineNumber.md#getpropstr)
- [getSensitive](TLineNumber.md#getsensitive)
- [getStateForStyle](TLineNumber.md#getstateforstyle)
- [getStyleType](TLineNumber.md#getstyletype)
- [getText](TLineNumber.md#gettext)
- [getThemeName](TLineNumber.md#getthemename)
- [getType](TLineNumber.md#gettype)
- [getValue](TLineNumber.md#getvalue)
- [getValueInt](TLineNumber.md#getvalueint)
- [getVisible](TLineNumber.md#getvisible)
- [getWindow](TLineNumber.md#getwindow)
- [getWindowManager](TLineNumber.md#getwindowmanager)
- [getWithFocusState](TLineNumber.md#getwithfocusstate)
- [indexOf](TLineNumber.md#indexof)
- [insertChild](TLineNumber.md#insertchild)
- [invalidateForce](TLineNumber.md#invalidateforce)
- [isDesigningWindow](TLineNumber.md#isdesigningwindow)
- [isDialog](TLineNumber.md#isdialog)
- [isDirectParentOf](TLineNumber.md#isdirectparentof)
- [isHighlightLine](TLineNumber.md#ishighlightline)
- [isKeyboard](TLineNumber.md#iskeyboard)
- [isNormalWindow](TLineNumber.md#isnormalwindow)
- [isOpenedDialog](TLineNumber.md#isopeneddialog)
- [isOpenedPopup](TLineNumber.md#isopenedpopup)
- [isOverlay](TLineNumber.md#isoverlay)
- [isParentOf](TLineNumber.md#isparentof)
- [isPopup](TLineNumber.md#ispopup)
- [isStyleExist](TLineNumber.md#isstyleexist)
- [isSystemBar](TLineNumber.md#issystembar)
- [isWindow](TLineNumber.md#iswindow)
- [isWindowCreated](TLineNumber.md#iswindowcreated)
- [isWindowManager](TLineNumber.md#iswindowmanager)
- [isWindowOpened](TLineNumber.md#iswindowopened)
- [layout](TLineNumber.md#layout)
- [lookup](TLineNumber.md#lookup)
- [lookupByType](TLineNumber.md#lookupbytype)
- [move](TLineNumber.md#move)
- [moveResize](TLineNumber.md#moveresize)
- [moveToCenter](TLineNumber.md#movetocenter)
- [off](TLineNumber.md#off)
- [on](TLineNumber.md#on)
- [pauseAnimator](TLineNumber.md#pauseanimator)
- [removeChild](TLineNumber.md#removechild)
- [resize](TLineNumber.md#resize)
- [restack](TLineNumber.md#restack)
- [setActiveLine](TLineNumber.md#setactiveline)
- [setAnimation](TLineNumber.md#setanimation)
- [setAnimatorTimeScale](TLineNumber.md#setanimatortimescale)
- [setAsKeyTarget](TLineNumber.md#setaskeytarget)
- [setAutoAdjustSize](TLineNumber.md#setautoadjustsize)
- [setBottomMargin](TLineNumber.md#setbottommargin)
- [setChildText](TLineNumber.md#setchildtext)
- [setChildTextWithDouble](TLineNumber.md#setchildtextwithdouble)
- [setChildTextWithInt](TLineNumber.md#setchildtextwithint)
- [setChildrenLayout](TLineNumber.md#setchildrenlayout)
- [setDirtyRectTolerance](TLineNumber.md#setdirtyrecttolerance)
- [setEnable](TLineNumber.md#setenable)
- [setFeedback](TLineNumber.md#setfeedback)
- [setFloating](TLineNumber.md#setfloating)
- [setFocusable](TLineNumber.md#setfocusable)
- [setFocused](TLineNumber.md#setfocused)
- [setLineHeight](TLineNumber.md#setlineheight)
- [setName](TLineNumber.md#setname)
- [setOpacity](TLineNumber.md#setopacity)
- [setPointerCursor](TLineNumber.md#setpointercursor)
- [setPropBool](TLineNumber.md#setpropbool)
- [setPropFloat](TLineNumber.md#setpropfloat)
- [setPropInt](TLineNumber.md#setpropint)
- [setPropPointer](TLineNumber.md#setproppointer)
- [setPropStr](TLineNumber.md#setpropstr)
- [setProps](TLineNumber.md#setprops)
- [setSelfLayout](TLineNumber.md#setselflayout)
- [setSelfLayoutParams](TLineNumber.md#setselflayoutparams)
- [setSensitive](TLineNumber.md#setsensitive)
- [setState](TLineNumber.md#setstate)
- [setStyleColor](TLineNumber.md#setstylecolor)
- [setStyleInt](TLineNumber.md#setstyleint)
- [setStyleStr](TLineNumber.md#setstylestr)
- [setText](TLineNumber.md#settext)
- [setTextEx](TLineNumber.md#settextex)
- [setTheme](TLineNumber.md#settheme)
- [setTopMargin](TLineNumber.md#settopmargin)
- [setTrText](TLineNumber.md#settrtext)
- [setValue](TLineNumber.md#setvalue)
- [setValueInt](TLineNumber.md#setvalueint)
- [setVisible](TLineNumber.md#setvisible)
- [setVisibleOnly](TLineNumber.md#setvisibleonly)
- [setYoffset](TLineNumber.md#setyoffset)
- [startAnimator](TLineNumber.md#startanimator)
- [stopAnimator](TLineNumber.md#stopanimator)
- [strokeBorderRect](TLineNumber.md#strokeborderrect)
- [unref](TLineNumber.md#unref)
- [updateStyle](TLineNumber.md#updatestyle)
- [updateStyleRecursive](TLineNumber.md#updatestylerecursive)
- [useStyle](TLineNumber.md#usestyle)
- [cast](TLineNumber.md#cast)
- [create](TLineNumber.md#create)

## Constructors

### constructor

• **new TLineNumber**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TWidget](TWidget.md).[constructor](TWidget.md#constructor)

#### Defined in

[awtk.ts:17894](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L17894)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TWidget](TWidget.md).[nativeObj](TWidget.md#nativeobj)

#### Defined in

[awtk.ts:17893](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L17893)

## Accessors

### animation

• `get` **animation**(): `string`

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

#### Returns

`string`

#### Inherited from

TWidget.animation

#### Defined in

[awtk.ts:11900](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11900)

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

[awtk.ts:11904](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11904)

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

[awtk.ts:11991](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11991)

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

[awtk.ts:11995](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11995)

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

[awtk.ts:12032](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12032)

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

[awtk.ts:12036](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12036)

___

### enable

• `get` **enable**(): `boolean`

启用/禁用状态。

#### Returns

`boolean`

#### Inherited from

TWidget.enable

#### Defined in

[awtk.ts:11913](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11913)

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

[awtk.ts:11917](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11917)

___

### feedback

• `get` **feedback**(): `boolean`

是否启用按键音、触屏音和震动等反馈。

#### Returns

`boolean`

#### Inherited from

TWidget.feedback

#### Defined in

[awtk.ts:11926](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11926)

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

[awtk.ts:11930](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11930)

___

### floating

• `get` **floating**(): `boolean`

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

#### Returns

`boolean`

#### Inherited from

TWidget.floating

#### Defined in

[awtk.ts:12004](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12004)

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

[awtk.ts:12008](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12008)

___

### focusable

• `get` **focusable**(): `boolean`

是否支持焦点停留。

#### Returns

`boolean`

#### Inherited from

TWidget.focusable

#### Defined in

[awtk.ts:11965](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11965)

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

[awtk.ts:11969](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11969)

___

### h

• `get` **h**(): `number`

高度。

#### Returns

`number`

#### Inherited from

TWidget.h

#### Defined in

[awtk.ts:11843](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11843)

___

### name

• `get` **name**(): `string`

控件名字。

#### Returns

`string`

#### Inherited from

TWidget.name

#### Defined in

[awtk.ts:11852](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11852)

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

[awtk.ts:11856](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11856)

___

### opacity

• `get` **opacity**(): `number`

不透明度(0-255)，0完全透明，255完全不透明。

#### Returns

`number`

#### Inherited from

TWidget.opacity

#### Defined in

[awtk.ts:12017](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12017)

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

[awtk.ts:12021](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12021)

___

### parent

• `get` **parent**(): [`TWidget`](TWidget.md)

父控件

#### Returns

[`TWidget`](TWidget.md)

#### Inherited from

TWidget.parent

#### Defined in

[awtk.ts:12045](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L12045)

___

### pointerCursor

• `get` **pointerCursor**(): `string`

鼠标光标图片名称。

#### Returns

`string`

#### Inherited from

TWidget.pointerCursor

#### Defined in

[awtk.ts:11865](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11865)

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

[awtk.ts:11869](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11869)

___

### sensitive

• `get` **sensitive**(): `boolean`

是否接受用户事件。

#### Returns

`boolean`

#### Inherited from

TWidget.sensitive

#### Defined in

[awtk.ts:11952](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11952)

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

[awtk.ts:11956](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11956)

___

### style

• `get` **style**(): `string`

style的名称。

#### Returns

`string`

#### Inherited from

TWidget.style

#### Defined in

[awtk.ts:11891](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11891)

___

### trText

• `get` **trText**(): `string`

保存用于翻译的字符串。

#### Returns

`string`

#### Inherited from

TWidget.trText

#### Defined in

[awtk.ts:11878](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11878)

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

[awtk.ts:11882](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11882)

___

### visible

• `get` **visible**(): `boolean`

是否可见。

#### Returns

`boolean`

#### Inherited from

TWidget.visible

#### Defined in

[awtk.ts:11939](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11939)

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

[awtk.ts:11943](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11943)

___

### w

• `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Inherited from

TWidget.w

#### Defined in

[awtk.ts:11834](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11834)

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

[awtk.ts:11979](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11979)

___

### x

• `get` **x**(): `number`

x坐标(相对于父控件的x坐标)。

#### Returns

`number`

#### Inherited from

TWidget.x

#### Defined in

[awtk.ts:11816](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11816)

___

### y

• `get` **y**(): `number`

y坐标(相对于父控件的y坐标)。

#### Returns

`number`

#### Inherited from

TWidget.y

#### Defined in

[awtk.ts:11825](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11825)

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

[awtk.ts:10970](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10970)

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

[awtk.ts:11807](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11807)

___

### addHighlightLine

▸ **addHighlightLine**(`line`): [`TRet`](../enums/TRet.md)

增加高亮行。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `line` | `number` | 行号。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:17982](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L17982)

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

[awtk.ts:10413](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10413)

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

[awtk.ts:10450](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10450)

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

[awtk.ts:10464](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10464)

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

[awtk.ts:10313](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10313)

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

[awtk.ts:10324](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10324)

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

[awtk.ts:11019](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11019)

___

### clearHighlight

▸ **clearHighlight**(): [`TRet`](../enums/TRet.md)

清除高亮行。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:18005](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L18005)

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

[awtk.ts:11490](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11490)

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

[awtk.ts:10291](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10291)

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

[awtk.ts:10302](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10302)

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

[awtk.ts:10211](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10211)

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

[awtk.ts:10750](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10750)

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

[awtk.ts:11527](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11527)

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

[awtk.ts:10836](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10836)

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

[awtk.ts:11540](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11540)

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

[awtk.ts:10958](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10958)

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

[awtk.ts:11616](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11616)

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

[awtk.ts:11604](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11604)

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

[awtk.ts:11502](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11502)

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

[awtk.ts:11578](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11578)

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

[awtk.ts:11592](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11592)

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

[awtk.ts:10235](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10235)

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

[awtk.ts:10247](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10247)

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

[awtk.ts:11673](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11673)

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

[awtk.ts:11686](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11686)

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

[awtk.ts:11445](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11445)

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

[awtk.ts:10603](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10603)

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

[awtk.ts:10223](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10223)

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

[awtk.ts:10581](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10581)

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

[awtk.ts:10658](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10658)

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

[awtk.ts:10592](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10592)

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

[awtk.ts:10625](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10625)

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

[awtk.ts:10258](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10258)

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

[awtk.ts:10269](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10269)

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

[awtk.ts:11264](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11264)

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

[awtk.ts:11212](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11212)

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

[awtk.ts:11238](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11238)

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

[awtk.ts:11186](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11186)

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

[awtk.ts:11161](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11161)

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

[awtk.ts:10636](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10636)

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

[awtk.ts:11699](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11699)

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

[awtk.ts:11627](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11627)

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

[awtk.ts:10674](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10674)

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

[awtk.ts:10709](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10709)

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

[awtk.ts:11478](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11478)

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

[awtk.ts:10387](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10387)

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

[awtk.ts:10424](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10424)

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

[awtk.ts:10647](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10647)

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

[awtk.ts:11456](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11456)

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

[awtk.ts:11467](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11467)

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

[awtk.ts:10614](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10614)

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

[awtk.ts:10280](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10280)

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

[awtk.ts:10995](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10995)

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

[awtk.ts:11122](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11122)

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

[awtk.ts:11421](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11421)

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

[awtk.ts:11354](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11354)

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

[awtk.ts:11310](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11310)

___

### isHighlightLine

▸ **isHighlightLine**(`line`): `boolean`

判断指定行是否是高亮行。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `line` | `number` | 行号。 |

#### Returns

`boolean`

返回TRUE表示是，否则不是。

#### Defined in

[awtk.ts:18017](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L18017)

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

[awtk.ts:11410](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11410)

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

[awtk.ts:11343](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11343)

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

[awtk.ts:11387](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11387)

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

[awtk.ts:11398](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11398)

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

[awtk.ts:11376](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11376)

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

[awtk.ts:11298](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11298)

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

[awtk.ts:11365](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11365)

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

[awtk.ts:10477](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10477)

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

[awtk.ts:11332](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11332)

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

[awtk.ts:11321](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11321)

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

[awtk.ts:11286](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11286)

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

[awtk.ts:11432](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11432)

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

[awtk.ts:11275](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11275)

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

[awtk.ts:11710](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11710)

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

[awtk.ts:11032](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11032)

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

[awtk.ts:11045](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11045)

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

[awtk.ts:10337](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10337)

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

[awtk.ts:10376](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10376)

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

[awtk.ts:10348](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10348)

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

[awtk.ts:11110](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11110)

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

[awtk.ts:11098](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11098)

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

[awtk.ts:10802](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10802)

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

[awtk.ts:10982](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10982)

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

[awtk.ts:10361](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10361)

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

[awtk.ts:11007](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11007)

___

### setActiveLine

▸ **setActiveLine**(`line`): [`TRet`](../enums/TRet.md)

设置active行。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `line` | `number` | 行号。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:17994](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L17994)

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

[awtk.ts:10734](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10734)

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

[awtk.ts:10785](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10785)

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

[awtk.ts:11660](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11660)

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

[awtk.ts:10872](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10872)

___

### setBottomMargin

▸ **setBottomMargin**(`bottom_margin`): [`TRet`](../enums/TRet.md)

设置顶部边距。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `bottom_margin` | `number` | 顶部边距。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:17934](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L17934)

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

[awtk.ts:10528](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10528)

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

[awtk.ts:10543](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10543)

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

[awtk.ts:10558](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10558)

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

[awtk.ts:11734](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11734)

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

[awtk.ts:10947](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10947)

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

[awtk.ts:10848](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10848)

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

[awtk.ts:10860](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10860)

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

[awtk.ts:10885](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10885)

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

[awtk.ts:10909](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10909)

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

[awtk.ts:10897](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10897)

___

### setLineHeight

▸ **setLineHeight**(`line_height`): [`TRet`](../enums/TRet.md)

设置行高。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `line_height` | `number` | 行高。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:17946](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L17946)

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

[awtk.ts:10686](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10686)

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

[awtk.ts:10935](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10935)

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

[awtk.ts:10721](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10721)

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

[awtk.ts:11251](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11251)

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

[awtk.ts:11199](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11199)

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

[awtk.ts:11225](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11225)

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

[awtk.ts:11174](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11174)

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

[awtk.ts:11148](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11148)

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

[awtk.ts:11135](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11135)

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

[awtk.ts:11722](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11722)

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

[awtk.ts:11749](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11749)

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

[awtk.ts:11081](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11081)

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

[awtk.ts:10921](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10921)

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

[awtk.ts:11795](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11795)

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

[awtk.ts:11765](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11765)

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

[awtk.ts:11781](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11781)

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

[awtk.ts:10501](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10501)

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

[awtk.ts:10514](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10514)

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

[awtk.ts:10698](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10698)

___

### setTopMargin

▸ **setTopMargin**(`top_margin`): [`TRet`](../enums/TRet.md)

设置顶部边距。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `top_margin` | `number` | 顶部边距。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:17922](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L17922)

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

[awtk.ts:10570](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10570)

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

[awtk.ts:10400](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10400)

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

[awtk.ts:10437](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10437)

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

[awtk.ts:11057](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11057)

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

[awtk.ts:11069](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11069)

___

### setYoffset

▸ **setYoffset**(`yoffset`): [`TRet`](../enums/TRet.md)

设置y偏移。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `yoffset` | `number` | 行高。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:17958](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L17958)

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

[awtk.ts:10767](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10767)

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

[awtk.ts:10819](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10819)

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

[awtk.ts:11564](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11564)

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

[awtk.ts:11551](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11551)

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

[awtk.ts:11638](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11638)

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

[awtk.ts:11649](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L11649)

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

[awtk.ts:10489](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L10489)

___

### cast

▸ `Static` **cast**(`widget`): [`TLineNumber`](TLineNumber.md)

转换为line_number对象(供脚本语言使用)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `widget` | [`TWidget`](TWidget.md) | line_number对象。 |

#### Returns

[`TLineNumber`](TLineNumber.md)

line_number对象。

#### Overrides

[TWidget](TWidget.md).[cast](TWidget.md#cast)

#### Defined in

[awtk.ts:17970](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L17970)

___

### create

▸ `Static` **create**(`parent`, `x`, `y`, `w`, `h`): [`TLineNumber`](TLineNumber.md)

创建line_number对象

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `parent` | [`TWidget`](TWidget.md) | 父控件 |
| `x` | `number` | x坐标 |
| `y` | `number` | y坐标 |
| `w` | `number` | 宽度 |
| `h` | `number` | 高度 |

#### Returns

[`TLineNumber`](TLineNumber.md)

对象。

#### Defined in

[awtk.ts:17910](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L17910)
