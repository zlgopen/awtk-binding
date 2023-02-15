[AWTK](../README.md) / [Exports](../modules.md) / TImage

# Class: TImage

图片控件。

用来显示一张静态图片，目前支持bmp/png/jpg等格式。

如果要显示gif文件，请用[gif\_image](gif_image_t.md)。

如果要显示svg文件，请用[svg\_image](svg_image_t.md)。

如果需要支持勾选效果，请设置**selectable**属性。

如果需要支持点击效果，请设置**clickable**属性。

image\_t是[image\_base\_t](image_base_t.md)的子类控件，image\_base\_t的函数均适用于image\_t控件。

在xml中使用"image"标签创建图片控件。如：

```xml
<image style="border" image="earth" draw_type="icon" />
```

> 更多用法请参考：
[image.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/images.xml)

在c代码中使用函数image\_create创建图片控件。如：

> 创建之后:
>
> 需要用widget\_set\_image设置图片名称。
>
> 可以用image\_set\_draw\_type设置图片的绘制方式。

> 绘制方式请参考[image\_draw\_type\_t](image_draw_type_t.md)

> 绘制方式的属性值和枚举值:
[image\_draw\_type\_name\_value](https://github.com/zlgopen/awtk/blob/master/src/base/enums.c#L98)

> 完整示例请参考：
[image demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/image.c)

可用通过style来设置控件的显示风格，如背景和边框等。如：

```xml
<image>
<style name="border">
<normal border_color="#000000" bg_color="#e0e0e0" text_color="black"/>
</style>
</image>
```

> 更多用法请参考：
[theme
default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L313)

## Hierarchy

- [`TImageBase`](TImageBase.md)

  ↳ **`TImage`**

## Table of contents

### Constructors

- [constructor](TImage.md#constructor)

### Properties

- [nativeObj](TImage.md#nativeobj)

### Accessors

- [anchorX](TImage.md#anchorx)
- [anchorY](TImage.md#anchory)
- [animation](TImage.md#animation)
- [autoAdjustSize](TImage.md#autoadjustsize)
- [clickable](TImage.md#clickable)
- [dirtyRectTolerance](TImage.md#dirtyrecttolerance)
- [drawType](TImage.md#drawtype)
- [enable](TImage.md#enable)
- [feedback](TImage.md#feedback)
- [floating](TImage.md#floating)
- [focusable](TImage.md#focusable)
- [h](TImage.md#h)
- [image](TImage.md#image)
- [name](TImage.md#name)
- [opacity](TImage.md#opacity)
- [parent](TImage.md#parent)
- [pointerCursor](TImage.md#pointercursor)
- [rotation](TImage.md#rotation)
- [scaleX](TImage.md#scalex)
- [scaleY](TImage.md#scaley)
- [selectable](TImage.md#selectable)
- [selected](TImage.md#selected)
- [sensitive](TImage.md#sensitive)
- [style](TImage.md#style)
- [trText](TImage.md#trtext)
- [visible](TImage.md#visible)
- [w](TImage.md#w)
- [withFocusState](TImage.md#withfocusstate)
- [x](TImage.md#x)
- [y](TImage.md#y)

### Methods

- [addChild](TImage.md#addchild)
- [addChildDefault](TImage.md#addchilddefault)
- [addValue](TImage.md#addvalue)
- [addValueInt](TImage.md#addvalueint)
- [animateValueTo](TImage.md#animatevalueto)
- [back](TImage.md#back)
- [backToHome](TImage.md#backtohome)
- [child](TImage.md#child)
- [clone](TImage.md#clone)
- [closeWindow](TImage.md#closewindow)
- [closeWindowForce](TImage.md#closewindowforce)
- [countChildren](TImage.md#countchildren)
- [createAnimator](TImage.md#createanimator)
- [destroy](TImage.md#destroy)
- [destroyAnimator](TImage.md#destroyanimator)
- [destroyAsync](TImage.md#destroyasync)
- [destroyChildren](TImage.md#destroychildren)
- [dispatchToKeyTarget](TImage.md#dispatchtokeytarget)
- [dispatchToTarget](TImage.md#dispatchtotarget)
- [equal](TImage.md#equal)
- [fillBgRect](TImage.md#fillbgrect)
- [fillFgRect](TImage.md#fillfgrect)
- [findParentByName](TImage.md#findparentbyname)
- [findParentByType](TImage.md#findparentbytype)
- [focusNext](TImage.md#focusnext)
- [focusPrev](TImage.md#focusprev)
- [foreach](TImage.md#foreach)
- [getAutoAdjustSize](TImage.md#getautoadjustsize)
- [getChild](TImage.md#getchild)
- [getEnable](TImage.md#getenable)
- [getFeedback](TImage.md#getfeedback)
- [getFloating](TImage.md#getfloating)
- [getFocusable](TImage.md#getfocusable)
- [getFocusedWidget](TImage.md#getfocusedwidget)
- [getNativeWindow](TImage.md#getnativewindow)
- [getPropBool](TImage.md#getpropbool)
- [getPropFloat](TImage.md#getpropfloat)
- [getPropInt](TImage.md#getpropint)
- [getPropPointer](TImage.md#getproppointer)
- [getPropStr](TImage.md#getpropstr)
- [getSensitive](TImage.md#getsensitive)
- [getStateForStyle](TImage.md#getstateforstyle)
- [getStyleType](TImage.md#getstyletype)
- [getText](TImage.md#gettext)
- [getThemeName](TImage.md#getthemename)
- [getType](TImage.md#gettype)
- [getValue](TImage.md#getvalue)
- [getValueInt](TImage.md#getvalueint)
- [getVisible](TImage.md#getvisible)
- [getWindow](TImage.md#getwindow)
- [getWindowManager](TImage.md#getwindowmanager)
- [getWithFocusState](TImage.md#getwithfocusstate)
- [indexOf](TImage.md#indexof)
- [insertChild](TImage.md#insertchild)
- [invalidateForce](TImage.md#invalidateforce)
- [isDesigningWindow](TImage.md#isdesigningwindow)
- [isDialog](TImage.md#isdialog)
- [isDirectParentOf](TImage.md#isdirectparentof)
- [isKeyboard](TImage.md#iskeyboard)
- [isNormalWindow](TImage.md#isnormalwindow)
- [isOpenedDialog](TImage.md#isopeneddialog)
- [isOpenedPopup](TImage.md#isopenedpopup)
- [isOverlay](TImage.md#isoverlay)
- [isParentOf](TImage.md#isparentof)
- [isPopup](TImage.md#ispopup)
- [isStyleExist](TImage.md#isstyleexist)
- [isSystemBar](TImage.md#issystembar)
- [isWindow](TImage.md#iswindow)
- [isWindowCreated](TImage.md#iswindowcreated)
- [isWindowManager](TImage.md#iswindowmanager)
- [isWindowOpened](TImage.md#iswindowopened)
- [layout](TImage.md#layout)
- [lookup](TImage.md#lookup)
- [lookupByType](TImage.md#lookupbytype)
- [move](TImage.md#move)
- [moveResize](TImage.md#moveresize)
- [moveResizeEx](TImage.md#moveresizeex)
- [moveToCenter](TImage.md#movetocenter)
- [off](TImage.md#off)
- [on](TImage.md#on)
- [pauseAnimator](TImage.md#pauseanimator)
- [removeChild](TImage.md#removechild)
- [resize](TImage.md#resize)
- [restack](TImage.md#restack)
- [setAnchor](TImage.md#setanchor)
- [setAnimation](TImage.md#setanimation)
- [setAnimatorTimeScale](TImage.md#setanimatortimescale)
- [setAsKeyTarget](TImage.md#setaskeytarget)
- [setAutoAdjustSize](TImage.md#setautoadjustsize)
- [setChildText](TImage.md#setchildtext)
- [setChildTextWithDouble](TImage.md#setchildtextwithdouble)
- [setChildTextWithInt](TImage.md#setchildtextwithint)
- [setChildrenLayout](TImage.md#setchildrenlayout)
- [setClickable](TImage.md#setclickable)
- [setDirtyRectTolerance](TImage.md#setdirtyrecttolerance)
- [setDrawType](TImage.md#setdrawtype)
- [setEnable](TImage.md#setenable)
- [setFeedback](TImage.md#setfeedback)
- [setFloating](TImage.md#setfloating)
- [setFocusable](TImage.md#setfocusable)
- [setFocused](TImage.md#setfocused)
- [setImage](TImage.md#setimage)
- [setName](TImage.md#setname)
- [setOpacity](TImage.md#setopacity)
- [setPointerCursor](TImage.md#setpointercursor)
- [setPropBool](TImage.md#setpropbool)
- [setPropFloat](TImage.md#setpropfloat)
- [setPropInt](TImage.md#setpropint)
- [setPropPointer](TImage.md#setproppointer)
- [setPropStr](TImage.md#setpropstr)
- [setProps](TImage.md#setprops)
- [setRotation](TImage.md#setrotation)
- [setScale](TImage.md#setscale)
- [setSelectable](TImage.md#setselectable)
- [setSelected](TImage.md#setselected)
- [setSelfLayout](TImage.md#setselflayout)
- [setSelfLayoutParams](TImage.md#setselflayoutparams)
- [setSensitive](TImage.md#setsensitive)
- [setState](TImage.md#setstate)
- [setStyleColor](TImage.md#setstylecolor)
- [setStyleInt](TImage.md#setstyleint)
- [setStyleStr](TImage.md#setstylestr)
- [setText](TImage.md#settext)
- [setTextEx](TImage.md#settextex)
- [setTheme](TImage.md#settheme)
- [setTrText](TImage.md#settrtext)
- [setValue](TImage.md#setvalue)
- [setValueInt](TImage.md#setvalueint)
- [setVisible](TImage.md#setvisible)
- [setVisibleOnly](TImage.md#setvisibleonly)
- [startAnimator](TImage.md#startanimator)
- [stopAnimator](TImage.md#stopanimator)
- [strokeBorderRect](TImage.md#strokeborderrect)
- [unref](TImage.md#unref)
- [updateStyle](TImage.md#updatestyle)
- [updateStyleRecursive](TImage.md#updatestylerecursive)
- [useStyle](TImage.md#usestyle)
- [cast](TImage.md#cast)
- [create](TImage.md#create)
- [iconCreate](TImage.md#iconcreate)

## Constructors

### constructor

• **new TImage**(`nativeObj`)

#### Parameters

| Name | Type |
| :------ | :------ |
| `nativeObj` | `any` |

#### Overrides

[TImageBase](TImageBase.md).[constructor](TImageBase.md#constructor)

#### Defined in

[awtk.ts:28368](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L28368)

## Properties

### nativeObj

• **nativeObj**: `any`

#### Overrides

[TImageBase](TImageBase.md).[nativeObj](TImageBase.md#nativeobj)

#### Defined in

[awtk.ts:28367](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L28367)

## Accessors

### anchorX

• `get` **anchorX**(): `number`

锚点X(0-1)。0在控件左边，0.5在控件中间，1在控件右边。

#### Returns

`number`

#### Inherited from

TImageBase.anchorX

#### Defined in

[awtk.ts:15401](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15401)

___

### anchorY

• `get` **anchorY**(): `number`

锚点Y(0-1)。0在控件顶部，0.5在控件中间，1在控件底部。

#### Returns

`number`

#### Inherited from

TImageBase.anchorY

#### Defined in

[awtk.ts:15410](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15410)

___

### animation

• `get` **animation**(): `string`

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

#### Returns

`string`

#### Inherited from

TImageBase.animation

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

TImageBase.animation

#### Defined in

[awtk.ts:12044](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12044)

___

### autoAdjustSize

• `get` **autoAdjustSize**(): `boolean`

是否根据子控件和文本自动调整控件自身大小。

> 为true时，最好不要使用 layout 的相关东西，否则可能有冲突。
> 注意：只是调整控件的本身的宽高，不会修改控件本身的位置。

#### Returns

`boolean`

#### Inherited from

TImageBase.autoAdjustSize

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

TImageBase.autoAdjustSize

#### Defined in

[awtk.ts:12135](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12135)

___

### clickable

• `get` **clickable**(): `boolean`

点击时，是否触发EVT_CLICK事件。

#### Returns

`boolean`

#### Inherited from

TImageBase.clickable

#### Defined in

[awtk.ts:15450](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15450)

• `set` **clickable**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TImageBase.clickable

#### Defined in

[awtk.ts:15454](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15454)

___

### dirtyRectTolerance

• `get` **dirtyRectTolerance**(): `number`

脏矩形超出控件本身大小的最大范围(一般不用指定)。

> 如果 border 太粗或 offset 太大等原因，导致脏矩形超出控件本身大小太多（大于缺省值）时，才需要指定。

#### Returns

`number`

#### Inherited from

TImageBase.dirtyRectTolerance

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

TImageBase.dirtyRectTolerance

#### Defined in

[awtk.ts:12176](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12176)

___

### drawType

• `get` **drawType**(): [`TImageDrawType`](../enums/TImageDrawType.md)

图片的绘制方式(仅在没有旋转和缩放时生效)。

#### Returns

[`TImageDrawType`](../enums/TImageDrawType.md)

#### Defined in

[awtk.ts:28433](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L28433)

• `set` **drawType**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | [`TImageDrawType`](../enums/TImageDrawType.md) |

#### Returns

`void`

#### Defined in

[awtk.ts:28437](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L28437)

___

### enable

• `get` **enable**(): `boolean`

启用/禁用状态。

#### Returns

`boolean`

#### Inherited from

TImageBase.enable

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

TImageBase.enable

#### Defined in

[awtk.ts:12057](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12057)

___

### feedback

• `get` **feedback**(): `boolean`

是否启用按键音、触屏音和震动等反馈。

#### Returns

`boolean`

#### Inherited from

TImageBase.feedback

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

TImageBase.feedback

#### Defined in

[awtk.ts:12070](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12070)

___

### floating

• `get` **floating**(): `boolean`

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

#### Returns

`boolean`

#### Inherited from

TImageBase.floating

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

TImageBase.floating

#### Defined in

[awtk.ts:12148](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12148)

___

### focusable

• `get` **focusable**(): `boolean`

是否支持焦点停留。

#### Returns

`boolean`

#### Inherited from

TImageBase.focusable

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

TImageBase.focusable

#### Defined in

[awtk.ts:12109](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12109)

___

### h

• `get` **h**(): `number`

高度。

#### Returns

`number`

#### Inherited from

TImageBase.h

#### Defined in

[awtk.ts:11983](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11983)

___

### image

• `get` **image**(): `string`

图片的名称。

#### Returns

`string`

#### Inherited from

TImageBase.image

#### Defined in

[awtk.ts:15388](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15388)

• `set` **image**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `string` |

#### Returns

`void`

#### Inherited from

TImageBase.image

#### Defined in

[awtk.ts:15392](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15392)

___

### name

• `get` **name**(): `string`

控件名字。

#### Returns

`string`

#### Inherited from

TImageBase.name

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

TImageBase.name

#### Defined in

[awtk.ts:11996](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11996)

___

### opacity

• `get` **opacity**(): `number`

不透明度(0-255)，0完全透明，255完全不透明。

#### Returns

`number`

#### Inherited from

TImageBase.opacity

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

TImageBase.opacity

#### Defined in

[awtk.ts:12161](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12161)

___

### parent

• `get` **parent**(): [`TWidget`](TWidget.md)

父控件

#### Returns

[`TWidget`](TWidget.md)

#### Inherited from

TImageBase.parent

#### Defined in

[awtk.ts:12185](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12185)

___

### pointerCursor

• `get` **pointerCursor**(): `string`

鼠标光标图片名称。

#### Returns

`string`

#### Inherited from

TImageBase.pointerCursor

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

TImageBase.pointerCursor

#### Defined in

[awtk.ts:12009](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12009)

___

### rotation

• `get` **rotation**(): `number`

控件的旋转角度(幅度)。

#### Returns

`number`

#### Inherited from

TImageBase.rotation

#### Defined in

[awtk.ts:15437](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15437)

• `set` **rotation**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `number` |

#### Returns

`void`

#### Inherited from

TImageBase.rotation

#### Defined in

[awtk.ts:15441](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15441)

___

### scaleX

• `get` **scaleX**(): `number`

控件在X方向上的缩放比例。

#### Returns

`number`

#### Inherited from

TImageBase.scaleX

#### Defined in

[awtk.ts:15419](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15419)

___

### scaleY

• `get` **scaleY**(): `number`

控件在Y方向上的缩放比例。

#### Returns

`number`

#### Inherited from

TImageBase.scaleY

#### Defined in

[awtk.ts:15428](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15428)

___

### selectable

• `get` **selectable**(): `boolean`

是否设置选中状态。

#### Returns

`boolean`

#### Inherited from

TImageBase.selectable

#### Defined in

[awtk.ts:15463](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15463)

• `set` **selectable**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TImageBase.selectable

#### Defined in

[awtk.ts:15467](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15467)

___

### selected

• `get` **selected**(): `boolean`

当前是否被选中。

#### Returns

`boolean`

#### Inherited from

TImageBase.selected

#### Defined in

[awtk.ts:15476](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15476)

• `set` **selected**(`v`): `void`

#### Parameters

| Name | Type |
| :------ | :------ |
| `v` | `boolean` |

#### Returns

`void`

#### Inherited from

TImageBase.selected

#### Defined in

[awtk.ts:15480](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15480)

___

### sensitive

• `get` **sensitive**(): `boolean`

是否接受用户事件。

#### Returns

`boolean`

#### Inherited from

TImageBase.sensitive

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

TImageBase.sensitive

#### Defined in

[awtk.ts:12096](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12096)

___

### style

• `get` **style**(): `string`

style的名称。

#### Returns

`string`

#### Inherited from

TImageBase.style

#### Defined in

[awtk.ts:12031](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12031)

___

### trText

• `get` **trText**(): `string`

保存用于翻译的字符串。

#### Returns

`string`

#### Inherited from

TImageBase.trText

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

TImageBase.trText

#### Defined in

[awtk.ts:12022](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12022)

___

### visible

• `get` **visible**(): `boolean`

是否可见。

#### Returns

`boolean`

#### Inherited from

TImageBase.visible

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

TImageBase.visible

#### Defined in

[awtk.ts:12083](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12083)

___

### w

• `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Inherited from

TImageBase.w

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

TImageBase.withFocusState

#### Defined in

[awtk.ts:12119](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L12119)

___

### x

• `get` **x**(): `number`

x坐标(相对于父控件的x坐标)。

#### Returns

`number`

#### Inherited from

TImageBase.x

#### Defined in

[awtk.ts:11956](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11956)

___

### y

• `get` **y**(): `number`

y坐标(相对于父控件的y坐标)。

#### Returns

`number`

#### Inherited from

TImageBase.y

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

[TImageBase](TImageBase.md).[addChild](TImageBase.md#addchild)

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

[TImageBase](TImageBase.md).[addChildDefault](TImageBase.md#addchilddefault)

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

[TImageBase](TImageBase.md).[addValue](TImageBase.md#addvalue)

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

[TImageBase](TImageBase.md).[addValueInt](TImageBase.md#addvalueint)

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

[TImageBase](TImageBase.md).[animateValueTo](TImageBase.md#animatevalueto)

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

[TImageBase](TImageBase.md).[back](TImageBase.md#back)

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

[TImageBase](TImageBase.md).[backToHome](TImageBase.md#backtohome)

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

[TImageBase](TImageBase.md).[child](TImageBase.md#child)

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

[TImageBase](TImageBase.md).[clone](TImageBase.md#clone)

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

[TImageBase](TImageBase.md).[closeWindow](TImageBase.md#closewindow)

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

[TImageBase](TImageBase.md).[closeWindowForce](TImageBase.md#closewindowforce)

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

[TImageBase](TImageBase.md).[countChildren](TImageBase.md#countchildren)

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

[TImageBase](TImageBase.md).[createAnimator](TImageBase.md#createanimator)

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

[TImageBase](TImageBase.md).[destroy](TImageBase.md#destroy)

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

[TImageBase](TImageBase.md).[destroyAnimator](TImageBase.md#destroyanimator)

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

[TImageBase](TImageBase.md).[destroyAsync](TImageBase.md#destroyasync)

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

[TImageBase](TImageBase.md).[destroyChildren](TImageBase.md#destroychildren)

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

[TImageBase](TImageBase.md).[dispatchToKeyTarget](TImageBase.md#dispatchtokeytarget)

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

[TImageBase](TImageBase.md).[dispatchToTarget](TImageBase.md#dispatchtotarget)

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

[TImageBase](TImageBase.md).[equal](TImageBase.md#equal)

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

[TImageBase](TImageBase.md).[fillBgRect](TImageBase.md#fillbgrect)

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

[TImageBase](TImageBase.md).[fillFgRect](TImageBase.md#fillfgrect)

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

[TImageBase](TImageBase.md).[findParentByName](TImageBase.md#findparentbyname)

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

[TImageBase](TImageBase.md).[findParentByType](TImageBase.md#findparentbytype)

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

[TImageBase](TImageBase.md).[focusNext](TImageBase.md#focusnext)

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

[TImageBase](TImageBase.md).[focusPrev](TImageBase.md#focusprev)

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

[TImageBase](TImageBase.md).[foreach](TImageBase.md#foreach)

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

[TImageBase](TImageBase.md).[getAutoAdjustSize](TImageBase.md#getautoadjustsize)

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

[TImageBase](TImageBase.md).[getChild](TImageBase.md#getchild)

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

[TImageBase](TImageBase.md).[getEnable](TImageBase.md#getenable)

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

[TImageBase](TImageBase.md).[getFeedback](TImageBase.md#getfeedback)

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

[TImageBase](TImageBase.md).[getFloating](TImageBase.md#getfloating)

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

[TImageBase](TImageBase.md).[getFocusable](TImageBase.md#getfocusable)

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

[TImageBase](TImageBase.md).[getFocusedWidget](TImageBase.md#getfocusedwidget)

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

[TImageBase](TImageBase.md).[getNativeWindow](TImageBase.md#getnativewindow)

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

[TImageBase](TImageBase.md).[getPropBool](TImageBase.md#getpropbool)

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

[TImageBase](TImageBase.md).[getPropFloat](TImageBase.md#getpropfloat)

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

[TImageBase](TImageBase.md).[getPropInt](TImageBase.md#getpropint)

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

[TImageBase](TImageBase.md).[getPropPointer](TImageBase.md#getproppointer)

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

[TImageBase](TImageBase.md).[getPropStr](TImageBase.md#getpropstr)

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

[TImageBase](TImageBase.md).[getSensitive](TImageBase.md#getsensitive)

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

[TImageBase](TImageBase.md).[getStateForStyle](TImageBase.md#getstateforstyle)

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

[TImageBase](TImageBase.md).[getStyleType](TImageBase.md#getstyletype)

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

[TImageBase](TImageBase.md).[getText](TImageBase.md#gettext)

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

[TImageBase](TImageBase.md).[getThemeName](TImageBase.md#getthemename)

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

[TImageBase](TImageBase.md).[getType](TImageBase.md#gettype)

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

[TImageBase](TImageBase.md).[getValue](TImageBase.md#getvalue)

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

[TImageBase](TImageBase.md).[getValueInt](TImageBase.md#getvalueint)

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

[TImageBase](TImageBase.md).[getVisible](TImageBase.md#getvisible)

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

[TImageBase](TImageBase.md).[getWindow](TImageBase.md#getwindow)

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

[TImageBase](TImageBase.md).[getWindowManager](TImageBase.md#getwindowmanager)

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

[TImageBase](TImageBase.md).[getWithFocusState](TImageBase.md#getwithfocusstate)

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

[TImageBase](TImageBase.md).[indexOf](TImageBase.md#indexof)

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

[TImageBase](TImageBase.md).[insertChild](TImageBase.md#insertchild)

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

[TImageBase](TImageBase.md).[invalidateForce](TImageBase.md#invalidateforce)

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

[TImageBase](TImageBase.md).[isDesigningWindow](TImageBase.md#isdesigningwindow)

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

[TImageBase](TImageBase.md).[isDialog](TImageBase.md#isdialog)

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

[TImageBase](TImageBase.md).[isDirectParentOf](TImageBase.md#isdirectparentof)

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

[TImageBase](TImageBase.md).[isKeyboard](TImageBase.md#iskeyboard)

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

[TImageBase](TImageBase.md).[isNormalWindow](TImageBase.md#isnormalwindow)

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

[TImageBase](TImageBase.md).[isOpenedDialog](TImageBase.md#isopeneddialog)

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

[TImageBase](TImageBase.md).[isOpenedPopup](TImageBase.md#isopenedpopup)

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

[TImageBase](TImageBase.md).[isOverlay](TImageBase.md#isoverlay)

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

[TImageBase](TImageBase.md).[isParentOf](TImageBase.md#isparentof)

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

[TImageBase](TImageBase.md).[isPopup](TImageBase.md#ispopup)

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

[TImageBase](TImageBase.md).[isStyleExist](TImageBase.md#isstyleexist)

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

[TImageBase](TImageBase.md).[isSystemBar](TImageBase.md#issystembar)

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

[TImageBase](TImageBase.md).[isWindow](TImageBase.md#iswindow)

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

[TImageBase](TImageBase.md).[isWindowCreated](TImageBase.md#iswindowcreated)

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

[TImageBase](TImageBase.md).[isWindowManager](TImageBase.md#iswindowmanager)

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

[TImageBase](TImageBase.md).[isWindowOpened](TImageBase.md#iswindowopened)

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

[TImageBase](TImageBase.md).[layout](TImageBase.md#layout)

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

[TImageBase](TImageBase.md).[lookup](TImageBase.md#lookup)

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

[TImageBase](TImageBase.md).[lookupByType](TImageBase.md#lookupbytype)

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

[TImageBase](TImageBase.md).[move](TImageBase.md#move)

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

[TImageBase](TImageBase.md).[moveResize](TImageBase.md#moveresize)

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

[TImageBase](TImageBase.md).[moveResizeEx](TImageBase.md#moveresizeex)

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

[TImageBase](TImageBase.md).[moveToCenter](TImageBase.md#movetocenter)

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

[TImageBase](TImageBase.md).[off](TImageBase.md#off)

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

[TImageBase](TImageBase.md).[on](TImageBase.md#on)

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

[TImageBase](TImageBase.md).[pauseAnimator](TImageBase.md#pauseanimator)

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

[TImageBase](TImageBase.md).[removeChild](TImageBase.md#removechild)

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

[TImageBase](TImageBase.md).[resize](TImageBase.md#resize)

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

[TImageBase](TImageBase.md).[restack](TImageBase.md#restack)

#### Defined in

[awtk.ts:11147](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11147)

___

### setAnchor

▸ **setAnchor**(`anchor_x`, `anchor_y`): [`TRet`](../enums/TRet.md)

设置控件的锚点(仅在WITH_VGCANVAS定义时生效)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `anchor_x` | `number` | 锚点X(0-1)。0在控件左边，0.5在控件中间，1在控件右边。 |
| `anchor_y` | `number` | 锚点Y(0-1)。0在控件顶部，0.5在控件中间，1在控件底部。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TImageBase](TImageBase.md).[setAnchor](TImageBase.md#setanchor)

#### Defined in

[awtk.ts:15331](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15331)

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

[TImageBase](TImageBase.md).[setAnimation](TImageBase.md#setanimation)

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

[TImageBase](TImageBase.md).[setAnimatorTimeScale](TImageBase.md#setanimatortimescale)

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

[TImageBase](TImageBase.md).[setAsKeyTarget](TImageBase.md#setaskeytarget)

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

[TImageBase](TImageBase.md).[setAutoAdjustSize](TImageBase.md#setautoadjustsize)

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

[TImageBase](TImageBase.md).[setChildText](TImageBase.md#setchildtext)

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

[TImageBase](TImageBase.md).[setChildTextWithDouble](TImageBase.md#setchildtextwithdouble)

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

[TImageBase](TImageBase.md).[setChildTextWithInt](TImageBase.md#setchildtextwithint)

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

[TImageBase](TImageBase.md).[setChildrenLayout](TImageBase.md#setchildrenlayout)

#### Defined in

[awtk.ts:11874](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11874)

___

### setClickable

▸ **setClickable**(`clickable`): [`TRet`](../enums/TRet.md)

设置控件是否可以被点击。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `clickable` | `boolean` | 是否可以被点击。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TImageBase](TImageBase.md).[setClickable](TImageBase.md#setclickable)

#### Defined in

[awtk.ts:15367](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15367)

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

[TImageBase](TImageBase.md).[setDirtyRectTolerance](TImageBase.md#setdirtyrecttolerance)

#### Defined in

[awtk.ts:11087](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11087)

___

### setDrawType

▸ **setDrawType**(`draw_type`): [`TRet`](../enums/TRet.md)

设置图片的绘制方式。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `draw_type` | [`TImageDrawType`](../enums/TImageDrawType.md) | 绘制方式(仅在没有旋转和缩放时生效)。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:28412](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L28412)

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

[TImageBase](TImageBase.md).[setEnable](TImageBase.md#setenable)

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

[TImageBase](TImageBase.md).[setFeedback](TImageBase.md#setfeedback)

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

[TImageBase](TImageBase.md).[setFloating](TImageBase.md#setfloating)

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

[TImageBase](TImageBase.md).[setFocusable](TImageBase.md#setfocusable)

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

[TImageBase](TImageBase.md).[setFocused](TImageBase.md#setfocused)

#### Defined in

[awtk.ts:11037](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11037)

___

### setImage

▸ **setImage**(`name`): [`TRet`](../enums/TRet.md)

设置控件的图片名称。

> 如果需要显示文件系统中的图片，只需将图片名称换成实际的文件名，并加上"file://"前缀即可。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `name` | `string` | 图片名称，该图片必须存在于资源管理器。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TImageBase](TImageBase.md).[setImage](TImageBase.md#setimage)

#### Defined in

[awtk.ts:15293](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15293)

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

[TImageBase](TImageBase.md).[setName](TImageBase.md#setname)

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

[TImageBase](TImageBase.md).[setOpacity](TImageBase.md#setopacity)

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

[TImageBase](TImageBase.md).[setPointerCursor](TImageBase.md#setpointercursor)

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

[TImageBase](TImageBase.md).[setPropBool](TImageBase.md#setpropbool)

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

[TImageBase](TImageBase.md).[setPropFloat](TImageBase.md#setpropfloat)

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

[TImageBase](TImageBase.md).[setPropInt](TImageBase.md#setpropint)

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

[TImageBase](TImageBase.md).[setPropPointer](TImageBase.md#setproppointer)

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

[TImageBase](TImageBase.md).[setPropStr](TImageBase.md#setpropstr)

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

[TImageBase](TImageBase.md).[setProps](TImageBase.md#setprops)

#### Defined in

[awtk.ts:11275](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L11275)

___

### setRotation

▸ **setRotation**(`rotation`): [`TRet`](../enums/TRet.md)

设置控件的旋转角度(仅在WITH_VGCANVAS定义时生效)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `rotation` | `number` | 旋转角度(幅度)。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TImageBase](TImageBase.md).[setRotation](TImageBase.md#setrotation)

#### Defined in

[awtk.ts:15305](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15305)

___

### setScale

▸ **setScale**(`scale_x`, `scale_y`): [`TRet`](../enums/TRet.md)

设置控件的缩放比例(仅在WITH_VGCANVAS定义时生效)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `scale_x` | `number` | X方向缩放比例。 |
| `scale_y` | `number` | Y方向缩放比例。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TImageBase](TImageBase.md).[setScale](TImageBase.md#setscale)

#### Defined in

[awtk.ts:15318](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15318)

___

### setSelectable

▸ **setSelectable**(`selectable`): [`TRet`](../enums/TRet.md)

设置控件是否可以被选中。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `selectable` | `boolean` | 是否可以被选中。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TImageBase](TImageBase.md).[setSelectable](TImageBase.md#setselectable)

#### Defined in

[awtk.ts:15355](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15355)

___

### setSelected

▸ **setSelected**(`selected`): [`TRet`](../enums/TRet.md)

设置控件的选中状态。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `selected` | `boolean` | 是否被选中。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[TImageBase](TImageBase.md).[setSelected](TImageBase.md#setselected)

#### Defined in

[awtk.ts:15343](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L15343)

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

[TImageBase](TImageBase.md).[setSelfLayout](TImageBase.md#setselflayout)

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

[TImageBase](TImageBase.md).[setSelfLayoutParams](TImageBase.md#setselflayoutparams)

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

[TImageBase](TImageBase.md).[setSensitive](TImageBase.md#setsensitive)

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

[TImageBase](TImageBase.md).[setState](TImageBase.md#setstate)

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

[TImageBase](TImageBase.md).[setStyleColor](TImageBase.md#setstylecolor)

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

[TImageBase](TImageBase.md).[setStyleInt](TImageBase.md#setstyleint)

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

[TImageBase](TImageBase.md).[setStyleStr](TImageBase.md#setstylestr)

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

[TImageBase](TImageBase.md).[setText](TImageBase.md#settext)

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

[TImageBase](TImageBase.md).[setTextEx](TImageBase.md#settextex)

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

[TImageBase](TImageBase.md).[setTheme](TImageBase.md#settheme)

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

[TImageBase](TImageBase.md).[setTrText](TImageBase.md#settrtext)

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

[TImageBase](TImageBase.md).[setValue](TImageBase.md#setvalue)

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

[TImageBase](TImageBase.md).[setValueInt](TImageBase.md#setvalueint)

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

[TImageBase](TImageBase.md).[setVisible](TImageBase.md#setvisible)

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

[TImageBase](TImageBase.md).[setVisibleOnly](TImageBase.md#setvisibleonly)

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

[TImageBase](TImageBase.md).[startAnimator](TImageBase.md#startanimator)

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

[TImageBase](TImageBase.md).[stopAnimator](TImageBase.md#stopanimator)

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

[TImageBase](TImageBase.md).[strokeBorderRect](TImageBase.md#strokeborderrect)

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

[TImageBase](TImageBase.md).[unref](TImageBase.md#unref)

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

[TImageBase](TImageBase.md).[updateStyle](TImageBase.md#updatestyle)

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

[TImageBase](TImageBase.md).[updateStyleRecursive](TImageBase.md#updatestylerecursive)

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

[TImageBase](TImageBase.md).[useStyle](TImageBase.md#usestyle)

#### Defined in

[awtk.ts:10629](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L10629)

___

### cast

▸ `Static` **cast**(`widget`): [`TImage`](TImage.md)

转换为image对象(供脚本语言使用)。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `widget` | [`TWidget`](TWidget.md) | image对象。 |

#### Returns

[`TImage`](TImage.md)

image对象。

#### Overrides

[TImageBase](TImageBase.md).[cast](TImageBase.md#cast)

#### Defined in

[awtk.ts:28424](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L28424)

___

### create

▸ `Static` **create**(`parent`, `x`, `y`, `w`, `h`): [`TImage`](TImage.md)

创建image对象

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `parent` | [`TWidget`](TWidget.md) | 父控件 |
| `x` | `number` | x坐标 |
| `y` | `number` | y坐标 |
| `w` | `number` | 宽度 |
| `h` | `number` | 高度 |

#### Returns

[`TImage`](TImage.md)

对象。

#### Defined in

[awtk.ts:28384](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L28384)

___

### iconCreate

▸ `Static` **iconCreate**(`parent`, `x`, `y`, `w`, `h`): [`TImage`](TImage.md)

创建icon对象

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `parent` | [`TWidget`](TWidget.md) | 父控件 |
| `x` | `number` | x坐标 |
| `y` | `number` | y坐标 |
| `w` | `number` | 宽度 |
| `h` | `number` | 高度 |

#### Returns

[`TImage`](TImage.md)

对象。

#### Defined in

[awtk.ts:28400](https://github.com/zlgopen/awtk-binding/blob/c57d9273/tools/code_gen/js/output/awtk.ts#L28400)
