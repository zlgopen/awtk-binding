[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TComboBoxEx

# Class: TComboBoxEx

扩展combo_box控件。支持以下功能：
* 支持滚动。项目比较多时显示滚动条。
* 自动调整弹出窗口的宽度。根据最长文本自动调整弹出窗口的宽度。
* 支持分组显示。如果item的文本以"seperator."开头，视为一个分组开始，其后的文本为分组的标题。比如: "seperator.basic"，会创建一个basic为标题的分组。

## Extends

- [`TComboBox`](TComboBox.md)

## Constructors

### new TComboBoxEx()

> **new TComboBoxEx**(`nativeObj`): [`TComboBoxEx`](TComboBoxEx.md)

#### Parameters

• **nativeObj**: `any`

#### Returns

[`TComboBoxEx`](TComboBoxEx.md)

#### Overrides

[`TComboBox`](TComboBox.md).[`constructor`](TComboBox.md#constructors)

#### Defined in

[awtk.ts:30941](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30941)

## Properties

### nativeObj

> **nativeObj**: `any`

#### Overrides

[`TComboBox`](TComboBox.md).[`nativeObj`](TComboBox.md#nativeobj)

#### Defined in

[awtk.ts:30940](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30940)

## Accessors

### actionText

> `get` **actionText**(): `string`

软键盘上action按钮的文本。内置取值有：

* next 将焦点切换到下一个控件。
* done 完成，关闭软键盘。

也可以使用其它文本，比如send表示发送。这个需要自己实现相应的功能，处理EVT\_IM\_ACTION事件即可。

> `set` **actionText**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TComboBox`](TComboBox.md).[`actionText`](TComboBox.md#actiontext)

#### Defined in

[awtk.ts:25991](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25991)

***

### animation

> `get` **animation**(): `string`

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

> `set` **animation**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TComboBox`](TComboBox.md).[`animation`](TComboBox.md#animation)

#### Defined in

[awtk.ts:12735](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12735)

***

### autoAdjustSize

> `get` **autoAdjustSize**(): `boolean`

是否根据子控件和文本自动调整控件自身大小。

> 为true时，最好不要使用 layout 的相关东西，否则可能有冲突。
> 注意：只是调整控件的本身的宽高，不会修改控件本身的位置，仅部分控件实现该效果。

> `set` **autoAdjustSize**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`autoAdjustSize`](TComboBox.md#autoadjustsize)

#### Defined in

[awtk.ts:12826](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12826)

***

### autoFix

> `get` **autoFix**(): `boolean`

输入无效时，是否自动改正。

> `set` **autoFix**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`autoFix`](TComboBox.md#autofix)

#### Defined in

[awtk.ts:26095](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L26095)

***

### cancelable

> `get` **cancelable**(): `boolean`

是否支持撤销编辑。如果为TRUE，在失去焦点之前可以撤销所有修改(恢复获得焦点之前的内容)。

> * 1.一般配合keyboard的"cancel"按钮使用。
> * 2.为TRUE时，如果内容有变化，会设置编辑器的状态为changed，所以此时编辑器需要支持changed状态的style。

> `set` **cancelable**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`cancelable`](TComboBox.md#cancelable)

#### Defined in

[awtk.ts:26154](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L26154)

***

### closeImWhenBlured

> `get` **closeImWhenBlured**(): `boolean`

是否在失去焦点时关闭输入法(默认是)。

> `set` **closeImWhenBlured**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`closeImWhenBlured`](TComboBox.md#closeimwhenblured)

#### Defined in

[awtk.ts:26138](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L26138)

***

### dirtyRectTolerance

> `get` **dirtyRectTolerance**(): `number`

脏矩形超出控件本身大小的最大范围(一般不用指定)。

> 如果 border 太粗或 offset 太大等原因，导致脏矩形超出控件本身大小太多（大于缺省值）时，才需要指定。

> `set` **dirtyRectTolerance**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Inherited from

[`TComboBox`](TComboBox.md).[`dirtyRectTolerance`](TComboBox.md#dirtyrecttolerance)

#### Defined in

[awtk.ts:12893](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12893)

***

### enable

> `get` **enable**(): `boolean`

启用/禁用状态。

> `set` **enable**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`enable`](TComboBox.md#enable)

#### Defined in

[awtk.ts:12748](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12748)

***

### feedback

> `get` **feedback**(): `boolean`

是否启用按键音、触屏音和震动等反馈。

> `set` **feedback**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`feedback`](TComboBox.md#feedback)

#### Defined in

[awtk.ts:12761](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12761)

***

### floating

> `get` **floating**(): `boolean`

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

> `set` **floating**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`floating`](TComboBox.md#floating)

#### Defined in

[awtk.ts:12839](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12839)

***

### focusNextWhenEnter

> `get` **focusNextWhenEnter**(): `boolean`

输入回车后是否跳到下一个控件中。

> `set` **focusNextWhenEnter**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`focusNextWhenEnter`](TComboBox.md#focusnextwhenenter)

#### Defined in

[awtk.ts:26167](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L26167)

***

### focusable

> `get` **focusable**(): `boolean`

是否支持焦点停留。

> `set` **focusable**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`focusable`](TComboBox.md#focusable)

#### Defined in

[awtk.ts:12800](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12800)

***

### h

> `get` **h**(): `number`

高度。

#### Returns

`number`

#### Inherited from

[`TComboBox`](TComboBox.md).[`h`](TComboBox.md#h)

#### Defined in

[awtk.ts:12678](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12678)

***

### inputType

> `get` **inputType**(): [`TInputType`](../enumerations/TInputType.md)

输入类型。

> `set` **inputType**(`v`): `void`

#### Parameters

• **v**: [`TInputType`](../enumerations/TInputType.md)

#### Returns

[`TInputType`](../enumerations/TInputType.md)

#### Inherited from

[`TComboBox`](TComboBox.md).[`inputType`](TComboBox.md#inputtype)

#### Defined in

[awtk.ts:26056](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L26056)

***

### itemHeight

> `get` **itemHeight**(): `number`

下拉选项的高度。如果open_window为空，则使用缺省高度。

> `set` **itemHeight**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Inherited from

[`TComboBox`](TComboBox.md).[`itemHeight`](TComboBox.md#itemheight)

#### Defined in

[awtk.ts:30239](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30239)

***

### keyboard

> `get` **keyboard**(): `string`

自定义软键盘名称。AWTK优先查找keyboard属性设置的键盘文件名（该键盘的XML文件需要在default\raw\ui目录下存在），如果没有指定keyboard，就找input_type设置的键盘类型。如果指定为空字符串，则表示不需要软键盘。

> `set` **keyboard**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TComboBox`](TComboBox.md).[`keyboard`](TComboBox.md#keyboard)

#### Defined in

[awtk.ts:26015](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L26015)

***

### localizeOptions

> `get` **localizeOptions**(): `boolean`

是否本地化(翻译)选项(缺省为TRUE)。

> `set` **localizeOptions**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`localizeOptions`](TComboBox.md#localizeoptions)

#### Defined in

[awtk.ts:30210](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30210)

***

### max

> `get` **max**(): `number`

最大值或最大长度。

#### Returns

`number`

#### Inherited from

[`TComboBox`](TComboBox.md).[`max`](TComboBox.md#max)

#### Defined in

[awtk.ts:26037](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L26037)

***

### min

> `get` **min**(): `number`

最小值或最小长度。

#### Returns

`number`

#### Inherited from

[`TComboBox`](TComboBox.md).[`min`](TComboBox.md#min)

#### Defined in

[awtk.ts:26028](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L26028)

***

### name

> `get` **name**(): `string`

控件名字。

> `set` **name**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TComboBox`](TComboBox.md).[`name`](TComboBox.md#name)

#### Defined in

[awtk.ts:12687](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12687)

***

### opacity

> `get` **opacity**(): `number`

不透明度(0-255)，0完全透明，255完全不透明。

> `set` **opacity**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Inherited from

[`TComboBox`](TComboBox.md).[`opacity`](TComboBox.md#opacity)

#### Defined in

[awtk.ts:12878](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12878)

***

### openImWhenFocused

> `get` **openImWhenFocused**(): `boolean`

获得焦点时打开输入法。

> 主要用于没有指针设备的情况，否则每次切换焦点时都打开输入法。

> `set` **openImWhenFocused**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`openImWhenFocused`](TComboBox.md#openimwhenfocused)

#### Defined in

[awtk.ts:26125](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L26125)

***

### openWindow

> `get` **openWindow**(): `string`

为点击按钮时，要打开窗口的名称。

> `set` **openWindow**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TComboBox`](TComboBox.md).[`openWindow`](TComboBox.md#openwindow)

#### Defined in

[awtk.ts:30158](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30158)

***

### options

> `get` **options**(): `string`

设置可选项(冒号分隔值和文本，分号分隔选项，如:1:red;2:green;3:blue)。
> 如果数据本身中有英文冒号(:)和英文分号(;)，请用16进制转义。
> * 英文冒号(:)写为\\x3a
> * 英文冒号(;)写为\\x3b

> `set` **options**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TComboBox`](TComboBox.md).[`options`](TComboBox.md#options)

#### Defined in

[awtk.ts:30226](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30226)

***

### parent

> `get` **parent**(): [`TWidget`](TWidget.md)

父控件

#### Returns

[`TWidget`](TWidget.md)

#### Inherited from

[`TComboBox`](TComboBox.md).[`parent`](TComboBox.md#parent)

#### Defined in

[awtk.ts:12906](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12906)

***

### passwordVisible

> `get` **passwordVisible**(): `boolean`

密码是否可见。

> `set` **passwordVisible**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`passwordVisible`](TComboBox.md#passwordvisible)

#### Defined in

[awtk.ts:26082](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L26082)

***

### pointerCursor

> `get` **pointerCursor**(): `string`

鼠标光标图片名称。

> `set` **pointerCursor**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TComboBox`](TComboBox.md).[`pointerCursor`](TComboBox.md#pointercursor)

#### Defined in

[awtk.ts:12700](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12700)

***

### readonly

> `get` **readonly**(): `boolean`

编辑器是否为只读。

> `set` **readonly**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`readonly`](TComboBox.md#readonly)

#### Defined in

[awtk.ts:26069](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L26069)

***

### selectNoneWhenFocused

> `get` **selectNoneWhenFocused**(): `boolean`

获得焦点时不选中文本。

> 主要用于没有指针设备的情况，否则软键盘无法取消选中文本。

> `set` **selectNoneWhenFocused**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`selectNoneWhenFocused`](TComboBox.md#selectnonewhenfocused)

#### Defined in

[awtk.ts:26110](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L26110)

***

### selectedIndex

> `get` **selectedIndex**(): `number`

当前选中的选项。

> `set` **selectedIndex**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Inherited from

[`TComboBox`](TComboBox.md).[`selectedIndex`](TComboBox.md#selectedindex)

#### Defined in

[awtk.ts:30184](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30184)

***

### sensitive

> `get` **sensitive**(): `boolean`

是否接受用户事件。

> `set` **sensitive**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`sensitive`](TComboBox.md#sensitive)

#### Defined in

[awtk.ts:12787](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12787)

***

### stateFromParentSync

> `get` **stateFromParentSync**(): `boolean`

标识是否接收父控件的状态同步。

> `set` **stateFromParentSync**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`stateFromParentSync`](TComboBox.md#statefromparentsync)

#### Defined in

[awtk.ts:12865](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12865)

***

### step

> `get` **step**(): `number`

步长。
作为数值型编辑器时，一次增加和减少时的数值。

#### Returns

`number`

#### Inherited from

[`TComboBox`](TComboBox.md).[`step`](TComboBox.md#step)

#### Defined in

[awtk.ts:26047](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L26047)

***

### style

> `get` **style**(): `string`

style的名称。

#### Returns

`string`

#### Inherited from

[`TComboBox`](TComboBox.md).[`style`](TComboBox.md#style)

#### Defined in

[awtk.ts:12726](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12726)

***

### syncStateToChildren

> `get` **syncStateToChildren**(): `boolean`

标识是否将当前控件状态同步到子控件中。

> `set` **syncStateToChildren**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`syncStateToChildren`](TComboBox.md#syncstatetochildren)

#### Defined in

[awtk.ts:12852](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12852)

***

### themeOfPopup

> `get` **themeOfPopup**(): `string`

弹出窗口的主题(对应的style文件必须存在)，方便为不同combo box的弹出窗口指定不同的样式。

> `set` **themeOfPopup**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TComboBox`](TComboBox.md).[`themeOfPopup`](TComboBox.md#themeofpopup)

#### Defined in

[awtk.ts:30171](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30171)

***

### tips

> `get` **tips**(): `string`

输入提示。

> `set` **tips**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TComboBox`](TComboBox.md).[`tips`](TComboBox.md#tips)

#### Defined in

[awtk.ts:25960](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25960)

***

### trText

> `get` **trText**(): `string`

保存用于翻译的字符串。

> `set` **trText**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TComboBox`](TComboBox.md).[`trText`](TComboBox.md#trtext)

#### Defined in

[awtk.ts:12713](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12713)

***

### trTips

> `get` **trTips**(): `string`

保存用于翻译的提示信息。

> `set` **trTips**(`v`): `void`

#### Parameters

• **v**: `string`

#### Returns

`string`

#### Inherited from

[`TComboBox`](TComboBox.md).[`trTips`](TComboBox.md#trtips)

#### Defined in

[awtk.ts:25973](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25973)

***

### validator

> `get` **validator**(): `string`

fscript脚本，用输入校验，如：(len(text) 3) && (len(text) < 10)。

> 用于校验输入的文本是否合法。

#### Returns

`string`

#### Inherited from

[`TComboBox`](TComboBox.md).[`validator`](TComboBox.md#validator)

#### Defined in

[awtk.ts:26006](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L26006)

***

### value

> `get` **value**(): `number`

值。

> `set` **value**(`v`): `void`

#### Parameters

• **v**: `number`

#### Returns

`number`

#### Inherited from

[`TComboBox`](TComboBox.md).[`value`](TComboBox.md#value)

#### Defined in

[awtk.ts:30197](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30197)

***

### visible

> `get` **visible**(): `boolean`

是否可见。

> `set` **visible**(`v`): `void`

#### Parameters

• **v**: `boolean`

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`visible`](TComboBox.md#visible)

#### Defined in

[awtk.ts:12774](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12774)

***

### w

> `get` **w**(): `number`

宽度。

#### Returns

`number`

#### Inherited from

[`TComboBox`](TComboBox.md).[`w`](TComboBox.md#w)

#### Defined in

[awtk.ts:12669](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12669)

***

### withFocusState

> `get` **withFocusState**(): `boolean`

是否支持焦点状态。
> 如果希望style支持焦点状态，但又不希望焦点停留，可用本属性。

#### Returns

`boolean`

#### Inherited from

[`TComboBox`](TComboBox.md).[`withFocusState`](TComboBox.md#withfocusstate)

#### Defined in

[awtk.ts:12814](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12814)

***

### x

> `get` **x**(): `number`

x坐标(相对于父控件的x坐标)。

#### Returns

`number`

#### Inherited from

[`TComboBox`](TComboBox.md).[`x`](TComboBox.md#x)

#### Defined in

[awtk.ts:12651](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12651)

***

### y

> `get` **y**(): `number`

y坐标(相对于父控件的y坐标)。

#### Returns

`number`

#### Inherited from

[`TComboBox`](TComboBox.md).[`y`](TComboBox.md#y)

#### Defined in

[awtk.ts:12660](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12660)

## Methods

### addChild()

> **addChild**(`child`): [`TRet`](../enumerations/TRet.md)

加入一个子控件。

#### Parameters

• **child**: [`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`addChild`](TComboBox.md#addchild)

#### Defined in

[awtk.ts:11742](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11742)

***

### addChildDefault()

> **addChildDefault**(`child`): [`TRet`](../enumerations/TRet.md)

加入一个子控件默认实现(供子类调用)。

#### Parameters

• **child**: [`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`addChildDefault`](TComboBox.md#addchilddefault)

#### Defined in

[awtk.ts:12642](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12642)

***

### addValue()

> **addValue**(`delta`): [`TRet`](../enumerations/TRet.md)

增加控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

• **delta**: `number`

增量。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`addValue`](TComboBox.md#addvalue)

#### Defined in

[awtk.ts:11139](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11139)

***

### addValueInt()

> **addValueInt**(`delta`): [`TRet`](../enumerations/TRet.md)

增加控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

• **delta**: `number`

增量。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`addValueInt`](TComboBox.md#addvalueint)

#### Defined in

[awtk.ts:11176](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11176)

***

### animateValueTo()

> **animateValueTo**(`value`, `duration`): [`TRet`](../enumerations/TRet.md)

设置控件的值(以动画形式变化到指定的值)。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

• **value**: `any`

值。

• **duration**: `number`

动画持续时间(毫秒)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`animateValueTo`](TComboBox.md#animatevalueto)

#### Defined in

[awtk.ts:11190](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11190)

***

### appendOption()

> **appendOption**(`value`, `text`): [`TRet`](../enumerations/TRet.md)

追加一个选项。

#### Parameters

• **value**: `any`

值。

• **text**: `string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`appendOption`](TComboBox.md#appendoption)

#### Defined in

[awtk.ts:30068](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30068)

***

### back()

> **back**(): [`TRet`](../enumerations/TRet.md)

请求返回到前一个窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`back`](TComboBox.md#back)

#### Defined in

[awtk.ts:11023](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11023)

***

### backToHome()

> **backToHome**(): [`TRet`](../enumerations/TRet.md)

请求返回到home窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`backToHome`](TComboBox.md#backtohome)

#### Defined in

[awtk.ts:11034](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11034)

***

### child()

> **child**(`name`): [`TWidget`](TWidget.md)

查找指定名称的子控件(同widget_lookup(widget, name, FALSE))。

#### Parameters

• **name**: `string`

子控件的名称。

#### Returns

[`TWidget`](TWidget.md)

子控件或NULL。

#### Inherited from

[`TComboBox`](TComboBox.md).[`child`](TComboBox.md#child)

#### Defined in

[awtk.ts:11791](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11791)

***

### clone()

> **clone**(`parent`): [`TWidget`](TWidget.md)

clone。

#### Parameters

• **parent**: [`TWidget`](TWidget.md)

clone新控件的parent对象。

#### Returns

[`TWidget`](TWidget.md)

返回clone的对象。

#### Inherited from

[`TComboBox`](TComboBox.md).[`clone`](TComboBox.md#clone)

#### Defined in

[awtk.ts:12315](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12315)

***

### closeWindow()

> **closeWindow**(): [`TRet`](../enumerations/TRet.md)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`closeWindow`](TComboBox.md#closewindow)

#### Defined in

[awtk.ts:11001](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11001)

***

### closeWindowForce()

> **closeWindowForce**(): [`TRet`](../enumerations/TRet.md)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`closeWindowForce`](TComboBox.md#closewindowforce)

#### Defined in

[awtk.ts:11012](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11012)

***

### countChildren()

> **countChildren**(): `number`

获取子控件的个数。

#### Returns

`number`

子控件的个数。

#### Inherited from

[`TComboBox`](TComboBox.md).[`countChildren`](TComboBox.md#countchildren)

#### Defined in

[awtk.ts:10921](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L10921)

***

### countOptions()

> **countOptions**(): `number`

获取选项个数。

#### Returns

`number`

返回选项个数。

#### Inherited from

[`TComboBox`](TComboBox.md).[`countOptions`](TComboBox.md#countoptions)

#### Defined in

[awtk.ts:29995](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L29995)

***

### createAnimator()

> **createAnimator**(`animation`): [`TRet`](../enumerations/TRet.md)

创建动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 除非指定auto_start=false，动画创建后自动启动。
* 除非指定auto_destroy=false，动画播放完成后自动销毁。

#### Parameters

• **animation**: `string`

动画参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`createAnimator`](TComboBox.md#createanimator)

#### Defined in

[awtk.ts:11498](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11498)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`destroy`](TComboBox.md#destroy)

#### Defined in

[awtk.ts:12352](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12352)

***

### destroyAnimator()

> **destroyAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

销毁动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，销毁所有名称为name的动画。
* 2.name为NULL时，销毁所有widget相关的动画。
* 3.widget和name均为NULL，销毁所有动画。

#### Parameters

• **name**: `string`

动画名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`destroyAnimator`](TComboBox.md#destroyanimator)

#### Defined in

[awtk.ts:11584](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11584)

***

### destroyAsync()

> **destroyAsync**(): [`TRet`](../enumerations/TRet.md)

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`destroyAsync`](TComboBox.md#destroyasync)

#### Defined in

[awtk.ts:12365](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12365)

***

### destroyChildren()

> **destroyChildren**(): [`TRet`](../enumerations/TRet.md)

销毁全部子控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`destroyChildren`](TComboBox.md#destroychildren)

#### Defined in

[awtk.ts:11730](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11730)

***

### dispatchToKeyTarget()

> **dispatchToKeyTarget**(`e`): [`TRet`](../enumerations/TRet.md)

递归的分发一个事件到所有key_target子控件。

#### Parameters

• **e**: [`TEvent`](TEvent.md)

事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`dispatchToKeyTarget`](TComboBox.md#dispatchtokeytarget)

#### Defined in

[awtk.ts:12441](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12441)

***

### dispatchToTarget()

> **dispatchToTarget**(`e`): [`TRet`](../enumerations/TRet.md)

递归的分发一个事件到所有target子控件。

#### Parameters

• **e**: [`TEvent`](TEvent.md)

事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`dispatchToTarget`](TComboBox.md#dispatchtotarget)

#### Defined in

[awtk.ts:12429](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12429)

***

### equal()

> **equal**(`other`): `boolean`

判断两个widget是否相同。

#### Parameters

• **other**: [`TWidget`](TWidget.md)

要比较的控件对象。

#### Returns

`boolean`

返回TRUE表示相同，否则表示不同。

#### Inherited from

[`TComboBox`](TComboBox.md).[`equal`](TComboBox.md#equal)

#### Defined in

[awtk.ts:12327](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12327)

***

### fillBgRect()

> **fillBgRect**(`c`, `r`, `draw_type`): [`TRet`](../enumerations/TRet.md)

根据控件的style绘制背景矩形。

#### Parameters

• **c**: [`TCanvas`](TCanvas.md)

画布对象。

• **r**: [`TRect`](TRect.md)

矩形区域。

• **draw\_type**: [`TImageDrawType`](../enumerations/TImageDrawType.md)

图片缺省绘制方式。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`fillBgRect`](TComboBox.md#fillbgrect)

#### Defined in

[awtk.ts:12403](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12403)

***

### fillFgRect()

> **fillFgRect**(`c`, `r`, `draw_type`): [`TRet`](../enumerations/TRet.md)

根据控件的style绘制前景矩形。

#### Parameters

• **c**: [`TCanvas`](TCanvas.md)

画布对象。

• **r**: [`TRect`](TRect.md)

矩形区域。

• **draw\_type**: [`TImageDrawType`](../enumerations/TImageDrawType.md)

图片缺省绘制方式。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`fillFgRect`](TComboBox.md#fillfgrect)

#### Defined in

[awtk.ts:12417](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12417)

***

### findParentByName()

> **findParentByName**(`name`): [`TWidget`](TWidget.md)

通过名称查找父控件。

#### Parameters

• **name**: `string`

名称。

#### Returns

[`TWidget`](TWidget.md)

父控件。

#### Inherited from

[`TComboBox`](TComboBox.md).[`findParentByName`](TComboBox.md#findparentbyname)

#### Defined in

[awtk.ts:10945](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L10945)

***

### findParentByType()

> **findParentByType**(`type`): [`TWidget`](TWidget.md)

通过类型查找父控件。

#### Parameters

• **type**: `string`

类型。

#### Returns

[`TWidget`](TWidget.md)

父控件。

#### Inherited from

[`TComboBox`](TComboBox.md).[`findParentByType`](TComboBox.md#findparentbytype)

#### Defined in

[awtk.ts:10957](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L10957)

***

### focusNext()

> **focusNext**(): [`TRet`](../enumerations/TRet.md)

把焦点移动下一个控件。

>widget必须是当前焦点控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`focusNext`](TComboBox.md#focusnext)

#### Defined in

[awtk.ts:12498](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12498)

***

### focusPrev()

> **focusPrev**(): [`TRet`](../enumerations/TRet.md)

把焦点移动前一个控件。

>widget必须是当前焦点控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`focusPrev`](TComboBox.md#focusprev)

#### Defined in

[awtk.ts:12511](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12511)

***

### foreach()

> **foreach**(`visit`, `ctx`): [`TRet`](../enumerations/TRet.md)

遍历当前控件及子控件。

#### Parameters

• **visit**: `Function`

遍历的回调函数。

• **ctx**: `any`

回调函数的上下文。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`foreach`](TComboBox.md#foreach)

#### Defined in

[awtk.ts:12270](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12270)

***

### getAutoAdjustSize()

> **getAutoAdjustSize**(): `boolean`

获取控件auto_adjust_size属性值。

#### Returns

`boolean`

返回auto_adjust_size。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getAutoAdjustSize`](TComboBox.md#getautoadjustsize)

#### Defined in

[awtk.ts:11351](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11351)

***

### getChild()

> **getChild**(`index`): [`TWidget`](TWidget.md)

获取指定索引的子控件。

#### Parameters

• **index**: `number`

索引。

#### Returns

[`TWidget`](TWidget.md)

子控件。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getChild`](TComboBox.md#getchild)

#### Defined in

[awtk.ts:10933](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L10933)

***

### getCursor()

> **getCursor**(): `number`

获取输入框的光标位置。

#### Returns

`number`

返回光标位置。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getCursor`](TComboBox.md#getcursor)

#### Defined in

[awtk.ts:25914](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25914)

***

### getDouble()

> **getDouble**(): `number`

获取double类型的值。

#### Returns

`number`

返回double的值。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getDouble`](TComboBox.md#getdouble)

#### Defined in

[awtk.ts:25654](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25654)

***

### getEnable()

> **getEnable**(): `boolean`

获取控件enable属性值。

#### Returns

`boolean`

返回enable。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getEnable`](TComboBox.md#getenable)

#### Defined in

[awtk.ts:11329](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11329)

***

### getFeedback()

> **getFeedback**(): `boolean`

获取控件feedback属性值。

#### Returns

`boolean`

返回feedback。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getFeedback`](TComboBox.md#getfeedback)

#### Defined in

[awtk.ts:11406](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11406)

***

### getFloating()

> **getFloating**(): `boolean`

获取控件floating属性值。

#### Returns

`boolean`

返回floating。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getFloating`](TComboBox.md#getfloating)

#### Defined in

[awtk.ts:11340](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11340)

***

### getFocusable()

> **getFocusable**(): `boolean`

获取控件focusable属性值。

#### Returns

`boolean`

返回focusable。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getFocusable`](TComboBox.md#getfocusable)

#### Defined in

[awtk.ts:11373](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11373)

***

### getFocusedWidget()

> **getFocusedWidget**(): [`TWidget`](TWidget.md)

获取当前窗口中的焦点控件。

#### Returns

[`TWidget`](TWidget.md)

焦点控件。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getFocusedWidget`](TComboBox.md#getfocusedwidget)

#### Defined in

[awtk.ts:10968](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L10968)

***

### getInt()

> **getInt**(): `number`

获取int类型的值。

#### Returns

`number`

返回int的值。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getInt`](TComboBox.md#getint)

#### Defined in

[awtk.ts:25643](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25643)

***

### getNativeWindow()

> **getNativeWindow**(): [`TNativeWindow`](TNativeWindow.md)

获取原生窗口对象。

#### Returns

[`TNativeWindow`](TNativeWindow.md)

原生窗口对象。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getNativeWindow`](TComboBox.md#getnativewindow)

#### Defined in

[awtk.ts:10979](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L10979)

***

### getProp()

> **getProp**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

获取控件指定属性的值。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: [`TValue`](TValue.md)

返回属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getProp`](TComboBox.md#getprop)

#### Defined in

[awtk.ts:11907](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11907)

***

### getPropBool()

> **getPropBool**(`name`, `defval`): `boolean`

获取布尔格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `boolean`

缺省值。

#### Returns

`boolean`

返回属性的值。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getPropBool`](TComboBox.md#getpropbool)

#### Defined in

[awtk.ts:12062](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12062)

***

### getPropFloat()

> **getPropFloat**(`name`, `defval`): `number`

获取浮点数格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回属性的值。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getPropFloat`](TComboBox.md#getpropfloat)

#### Defined in

[awtk.ts:12010](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12010)

***

### getPropInt()

> **getPropInt**(`name`, `defval`): `number`

获取整数格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `number`

缺省值。

#### Returns

`number`

返回属性的值。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getPropInt`](TComboBox.md#getpropint)

#### Defined in

[awtk.ts:12036](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12036)

***

### getPropPointer()

> **getPropPointer**(`name`): `any`

获取指针格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

#### Returns

`any`

返回属性的值。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getPropPointer`](TComboBox.md#getproppointer)

#### Defined in

[awtk.ts:11984](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11984)

***

### getPropStr()

> **getPropStr**(`name`, `defval`): `string`

获取字符串格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **defval**: `string`

缺省值。

#### Returns

`string`

返回属性的值。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getPropStr`](TComboBox.md#getpropstr)

#### Defined in

[awtk.ts:11959](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11959)

***

### getSelectedText()

> **getSelectedText**(): `string`

获取选中的文本。
使用完后需调用 TKMEM_FREE() 进行释放文本占有内存。

#### Returns

`string`

返回选中文本。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getSelectedText`](TComboBox.md#getselectedtext)

#### Defined in

[awtk.ts:25939](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25939)

***

### getSensitive()

> **getSensitive**(): `boolean`

获取控件sensitive属性值。

#### Returns

`boolean`

返回sensitive。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getSensitive`](TComboBox.md#getsensitive)

#### Defined in

[awtk.ts:11384](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11384)

***

### getStateForStyle()

> **getStateForStyle**(`active`, `checked`): `string`

把控件的状态转成获取style选要的状态，一般只在子类中使用。

#### Parameters

• **active**: `boolean`

控件是否为当前项。

• **checked**: `boolean`

控件是否为选中项。

#### Returns

`string`

返回状态值。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getStateForStyle`](TComboBox.md#getstateforstyle)

#### Defined in

[awtk.ts:12524](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12524)

***

### getStyleType()

> **getStyleType**(): `string`

获取 widget 对应风格类型

#### Returns

`string`

返回 widget 的对应风格类型。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getStyleType`](TComboBox.md#getstyletype)

#### Defined in

[awtk.ts:12452](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12452)

***

### getText()

> **getText**(): `any`

获取控件的文本。
只是对widget\_get\_prop的包装，文本的意义由子类控件决定。

如果希望获取UTF8格式的文本，可以参考下面的代码：

#### Returns

`any`

返回文本。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getText`](TComboBox.md#gettext)

#### Defined in

[awtk.ts:11422](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11422)

***

### getTextOfSelected()

> **getTextOfSelected**(): `string`

获取combo_box当前选中项目的文本(原生非翻译的文本)。

#### Returns

`string`

返回文本。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getTextOfSelected`](TComboBox.md#gettextofselected)

#### Defined in

[awtk.ts:30149](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30149)

***

### getTextValue()

> **getTextValue**(): `string`

获取combo_box的文本(可能是翻译后的文本)。

#### Returns

`string`

返回文本。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getTextValue`](TComboBox.md#gettextvalue)

#### Defined in

[awtk.ts:30138](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30138)

***

### getThemeName()

> **getThemeName**(): `string`

获取 theme 的名称

#### Returns

`string`

成功返回主题名称，失败否则 NULL。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getThemeName`](TComboBox.md#getthemename)

#### Defined in

[awtk.ts:11457](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11457)

***

### getType()

> **getType**(): `string`

获取当前控件的类型名称。

#### Returns

`string`

返回类型名。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getType`](TComboBox.md#gettype)

#### Defined in

[awtk.ts:12303](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12303)

***

### getValue()

> **getValue**(): `number`

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getValue`](TComboBox.md#getvalue)

#### Defined in

[awtk.ts:11113](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11113)

***

### getValueInt()

> **getValueInt**(): `number`

获取combo_box的值。

#### Returns

`number`

返回值。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getValueInt`](TComboBox.md#getvalueint)

#### Defined in

[awtk.ts:30115](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30115)

***

### getVisible()

> **getVisible**(): `boolean`

获取控件visible属性值。

#### Returns

`boolean`

返回visible。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getVisible`](TComboBox.md#getvisible)

#### Defined in

[awtk.ts:11395](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11395)

***

### getWindow()

> **getWindow**(): [`TWidget`](TWidget.md)

获取当前控件所在的窗口。

#### Returns

[`TWidget`](TWidget.md)

窗口对象。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getWindow`](TComboBox.md#getwindow)

#### Defined in

[awtk.ts:12281](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12281)

***

### getWindowManager()

> **getWindowManager**(): [`TWidget`](TWidget.md)

获取当前的窗口管理器。

#### Returns

[`TWidget`](TWidget.md)

窗口管理器对象。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getWindowManager`](TComboBox.md#getwindowmanager)

#### Defined in

[awtk.ts:12292](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12292)

***

### getWithFocusState()

> **getWithFocusState**(): `boolean`

获取控件with_focus_state属性值。

#### Returns

`boolean`

返回with_focus_state。

#### Inherited from

[`TComboBox`](TComboBox.md).[`getWithFocusState`](TComboBox.md#getwithfocusstate)

#### Defined in

[awtk.ts:11362](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11362)

***

### hasHighlighter()

> **hasHighlighter**(): `boolean`

判断widget拥有高亮属性。

#### Returns

`boolean`

拥有返回 TRUE，没有返回 FALSE。

#### Inherited from

[`TComboBox`](TComboBox.md).[`hasHighlighter`](TComboBox.md#hashighlighter)

#### Defined in

[awtk.ts:11225](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11225)

***

### hasOptionText()

> **hasOptionText**(`text`): `boolean`

检查选项中是否存在指定的文本。

#### Parameters

• **text**: `string`

option text

#### Returns

`boolean`

返回TRUE表示存在，否则表示不存在。

#### Inherited from

[`TComboBox`](TComboBox.md).[`hasOptionText`](TComboBox.md#hasoptiontext)

#### Defined in

[awtk.ts:30127](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30127)

***

### indexOf()

> **indexOf**(): `number`

获取控件在父控件中的索引编号。

#### Returns

`number`

在父控件中的索引编号。

#### Inherited from

[`TComboBox`](TComboBox.md).[`indexOf`](TComboBox.md#indexof)

#### Defined in

[awtk.ts:10990](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L10990)

***

### insertChild()

> **insertChild**(`index`, `child`): [`TRet`](../enumerations/TRet.md)

插入子控件到指定的位置。

#### Parameters

• **index**: `number`

位置序数(大于等于总个数，则放到最后)。

• **child**: [`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`insertChild`](TComboBox.md#insertchild)

#### Defined in

[awtk.ts:11767](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11767)

***

### invalidateForce()

> **invalidateForce**(`r`): [`TRet`](../enumerations/TRet.md)

请求强制重绘控件。

#### Parameters

• **r**: [`TRect`](TRect.md)

矩形对象(widget本地坐标)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`invalidateForce`](TComboBox.md#invalidateforce)

#### Defined in

[awtk.ts:11894](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11894)

***

### isAlwaysOnTop()

> **isAlwaysOnTop**(): `boolean`

检查控件是否总在最上层。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isAlwaysOnTop`](TComboBox.md#isalwaysontop)

#### Defined in

[awtk.ts:12196](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12196)

***

### isDesigningWindow()

> **isDesigningWindow**(): `boolean`

判断当前控件是否是设计窗口。

#### Returns

`boolean`

返回当前控件是否是设计窗口。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isDesigningWindow`](TComboBox.md#isdesigningwindow)

#### Defined in

[awtk.ts:12246](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12246)

***

### isDialog()

> **isDialog**(): `boolean`

检查控件是否是对话框类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isDialog`](TComboBox.md#isdialog)

#### Defined in

[awtk.ts:12163](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12163)

***

### isDirectParentOf()

> **isDirectParentOf**(`child`): `boolean`

判断当前控件是否是指定控件的直系父控件。

#### Parameters

• **child**: [`TWidget`](TWidget.md)

控件对象。

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isDirectParentOf`](TComboBox.md#isdirectparentof)

#### Defined in

[awtk.ts:12108](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12108)

***

### isFullscreenWindow()

> **isFullscreenWindow**(): `boolean`

检查控件是否是全屏窗口。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isFullscreenWindow`](TComboBox.md#isfullscreenwindow)

#### Defined in

[awtk.ts:12152](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12152)

***

### isKeyboard()

> **isKeyboard**(): `boolean`

判断当前控件是否是keyboard。

> keyboard收到pointer事件时，不会让当前控件失去焦点。

在自定义软键盘时，将所有按钮放到一个容器当中，并设置为is_keyboard。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isKeyboard`](TComboBox.md#iskeyboard)

#### Defined in

[awtk.ts:12235](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12235)

***

### isNormalWindow()

> **isNormalWindow**(): `boolean`

检查控件是否是普通窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isNormalWindow`](TComboBox.md#isnormalwindow)

#### Defined in

[awtk.ts:12141](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12141)

***

### isOpenedDialog()

> **isOpenedDialog**(): `boolean`

检查控件弹出对话框控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isOpenedDialog`](TComboBox.md#isopeneddialog)

#### Defined in

[awtk.ts:12207](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12207)

***

### isOpenedPopup()

> **isOpenedPopup**(): `boolean`

检查控件弹出窗口控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isOpenedPopup`](TComboBox.md#isopenedpopup)

#### Defined in

[awtk.ts:12218](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12218)

***

### isOverlay()

> **isOverlay**(): `boolean`

检查控件是否是overlay窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isOverlay`](TComboBox.md#isoverlay)

#### Defined in

[awtk.ts:12185](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12185)

***

### isParentOf()

> **isParentOf**(`child`): `boolean`

判断当前控件是否是指定控件的父控件(包括非直系)。

#### Parameters

• **child**: [`TWidget`](TWidget.md)

控件对象。

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isParentOf`](TComboBox.md#isparentof)

#### Defined in

[awtk.ts:12096](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12096)

***

### isPopup()

> **isPopup**(): `boolean`

检查控件是否是弹出窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isPopup`](TComboBox.md#ispopup)

#### Defined in

[awtk.ts:12174](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12174)

***

### isStyleExist()

> **isStyleExist**(`style_name`, `state_name`): `boolean`

查询指定的style是否存在。

#### Parameters

• **style\_name**: `string`

style的名称（如果为 NULL，则默认为 default）。

• **state\_name**: `string`

state的名称（如果为 NULL，则默认为 normal）。

#### Returns

`boolean`

存在返回 TRUE，不存在返回 FALSE。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isStyleExist`](TComboBox.md#isstyleexist)

#### Defined in

[awtk.ts:11203](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11203)

***

### isSupportHighlighter()

> **isSupportHighlighter**(): `boolean`

判断widget是否支持高亮。

#### Returns

`boolean`

支持返回 TRUE，不支持返回 FALSE。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isSupportHighlighter`](TComboBox.md#issupporthighlighter)

#### Defined in

[awtk.ts:11214](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11214)

***

### isSystemBar()

> **isSystemBar**(): `boolean`

检查控件是否是system bar类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isSystemBar`](TComboBox.md#issystembar)

#### Defined in

[awtk.ts:12130](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12130)

***

### isWindow()

> **isWindow**(): `boolean`

判断当前控件是否是窗口。

#### Returns

`boolean`

返回当前控件是否是窗口。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isWindow`](TComboBox.md#iswindow)

#### Defined in

[awtk.ts:12119](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12119)

***

### isWindowCreated()

> **isWindowCreated**(): `boolean`

判断窗口及子控件创建或加载是否完成。

#### Returns

`boolean`

返回创建或加载是否完成。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isWindowCreated`](TComboBox.md#iswindowcreated)

#### Defined in

[awtk.ts:12084](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12084)

***

### isWindowManager()

> **isWindowManager**(): `boolean`

判断当前控件是否是窗口管理器。

#### Returns

`boolean`

返回当前控件是否是窗口管理器。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isWindowManager`](TComboBox.md#iswindowmanager)

#### Defined in

[awtk.ts:12257](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12257)

***

### isWindowOpened()

> **isWindowOpened**(): `boolean`

判断当前控件所在的窗口是否已经打开。

#### Returns

`boolean`

返回当前控件所在的窗口是否已经打开。

#### Inherited from

[`TComboBox`](TComboBox.md).[`isWindowOpened`](TComboBox.md#iswindowopened)

#### Defined in

[awtk.ts:12073](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12073)

***

### layout()

> **layout**(): [`TRet`](../enumerations/TRet.md)

布局当前控件及子控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`layout`](TComboBox.md#layout)

#### Defined in

[awtk.ts:12535](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12535)

***

### lookup()

> **lookup**(`name`, `recursive`): [`TWidget`](TWidget.md)

查找指定名称的子控件(返回第一个)。

#### Parameters

• **name**: `string`

子控件的名称。

• **recursive**: `boolean`

是否递归查找全部子控件。

#### Returns

[`TWidget`](TWidget.md)

子控件或NULL。

#### Inherited from

[`TComboBox`](TComboBox.md).[`lookup`](TComboBox.md#lookup)

#### Defined in

[awtk.ts:11804](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11804)

***

### lookupByType()

> **lookupByType**(`type`, `recursive`): [`TWidget`](TWidget.md)

查找指定类型的子控件(返回第一个)。

#### Parameters

• **type**: `string`

子控件的名称。

• **recursive**: `boolean`

是否递归查找全部子控件。

#### Returns

[`TWidget`](TWidget.md)

子控件或NULL。

#### Inherited from

[`TComboBox`](TComboBox.md).[`lookupByType`](TComboBox.md#lookupbytype)

#### Defined in

[awtk.ts:11817](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11817)

***

### move()

> **move**(`x`, `y`): [`TRet`](../enumerations/TRet.md)

移动控件。

#### Parameters

• **x**: `number`

x坐标

• **y**: `number`

y坐标

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`move`](TComboBox.md#move)

#### Defined in

[awtk.ts:11047](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11047)

***

### moveResize()

> **moveResize**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

移动控件并调整控件的大小。

#### Parameters

• **x**: `number`

x坐标

• **y**: `number`

y坐标

• **w**: `number`

宽度

• **h**: `number`

高度

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`moveResize`](TComboBox.md#moveresize)

#### Defined in

[awtk.ts:11086](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11086)

***

### moveResizeEx()

> **moveResizeEx**(`x`, `y`, `w`, `h`, `update_layout`): [`TRet`](../enumerations/TRet.md)

移动控件并调整控件的大小。

#### Parameters

• **x**: `number`

x坐标

• **y**: `number`

y坐标

• **w**: `number`

宽度

• **h**: `number`

高度

• **update\_layout**: `boolean`

是否更新布局

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`moveResizeEx`](TComboBox.md#moveresizeex)

#### Defined in

[awtk.ts:11102](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11102)

***

### moveToCenter()

> **moveToCenter**(): [`TRet`](../enumerations/TRet.md)

移动控件到父控件中间。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`moveToCenter`](TComboBox.md#movetocenter)

#### Defined in

[awtk.ts:11058](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11058)

***

### off()

> **off**(`id`): [`TRet`](../enumerations/TRet.md)

注销指定事件的处理函数。

#### Parameters

• **id**: `number`

widget_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`off`](TComboBox.md#off)

#### Defined in

[awtk.ts:11882](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11882)

***

### on()

> **on**(`type`, `on_event`, `ctx`): `number`

注册指定事件的处理函数。
使用示例：

#### Parameters

• **type**: `number`

事件类型。

• **on\_event**: `Function`

事件处理函数。

• **ctx**: `any`

事件处理函数上下文。

#### Returns

`number`

返回id，用于widget_off。

#### Inherited from

[`TComboBox`](TComboBox.md).[`on`](TComboBox.md#on)

#### Defined in

[awtk.ts:11870](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11870)

***

### pauseAnimator()

> **pauseAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

暂停动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，暂停所有名称为name的动画。
* 2.name为NULL时，暂停所有widget相关的动画。
* 3.widget和name均为NULL，暂停所有动画。

#### Parameters

• **name**: `string`

动画名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`pauseAnimator`](TComboBox.md#pauseanimator)

#### Defined in

[awtk.ts:11550](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11550)

***

### removeChild()

> **removeChild**(`child`): [`TRet`](../enumerations/TRet.md)

移出指定的子控件(并不销毁)。

#### Parameters

• **child**: [`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`removeChild`](TComboBox.md#removechild)

#### Defined in

[awtk.ts:11754](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11754)

***

### removeOption()

> **removeOption**(`value`): [`TRet`](../enumerations/TRet.md)

删除第一个值为value的选项。

#### Parameters

• **value**: `any`

选项的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`removeOption`](TComboBox.md#removeoption)

#### Defined in

[awtk.ts:30080](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30080)

***

### removeOptionByIndex()

> **removeOptionByIndex**(`index`): [`TRet`](../enumerations/TRet.md)

删除指定序数的选项。

#### Parameters

• **index**: `number`

选项的序数(0表示第一个)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`removeOptionByIndex`](TComboBox.md#removeoptionbyindex)

#### Defined in

[awtk.ts:30092](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30092)

***

### resetOptions()

> **resetOptions**(): [`TRet`](../enumerations/TRet.md)

重置所有选项。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`resetOptions`](TComboBox.md#resetoptions)

#### Defined in

[awtk.ts:29984](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L29984)

***

### resize()

> **resize**(`w`, `h`): [`TRet`](../enumerations/TRet.md)

调整控件的大小。

#### Parameters

• **w**: `number`

宽度

• **h**: `number`

高度

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`resize`](TComboBox.md#resize)

#### Defined in

[awtk.ts:11071](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11071)

***

### restack()

> **restack**(`index`): [`TRet`](../enumerations/TRet.md)

调整控件在父控件中的位置序数。

#### Parameters

• **index**: `number`

位置序数(大于等于总个数，则放到最后)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`restack`](TComboBox.md#restack)

#### Defined in

[awtk.ts:11779](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11779)

***

### setActionText()

> **setActionText**(`action_text`): [`TRet`](../enumerations/TRet.md)

设置软键盘上action按钮的文本。

#### Parameters

• **action\_text**: `string`

软键盘上action按钮的文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setActionText`](TComboBox.md#setactiontext)

#### Defined in

[awtk.ts:25831](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25831)

***

### setAnimation()

> **setAnimation**(`animation`): [`TRet`](../enumerations/TRet.md)

设置控件的动画参数(仅用于在UI文件使用)。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

#### Parameters

• **animation**: `string`

动画参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setAnimation`](TComboBox.md#setanimation)

#### Defined in

[awtk.ts:11482](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11482)

***

### setAnimatorTimeScale()

> **setAnimatorTimeScale**(`name`, `time_scale`): [`TRet`](../enumerations/TRet.md)

设置动画的时间倍率，<0: 时间倒退，<1: 时间变慢，>1 时间变快。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，设置所有名称为name的动画的时间倍率。
* 2.name为NULL时，设置所有widget相关的动画的时间倍率。
* 3.widget和name均为NULL，设置所有动画的时间倍率。

#### Parameters

• **name**: `string`

动画名称。

• **time\_scale**: `number`

时间倍率。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setAnimatorTimeScale`](TComboBox.md#setanimatortimescale)

#### Defined in

[awtk.ts:11533](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11533)

***

### setAsKeyTarget()

> **setAsKeyTarget**(): [`TRet`](../enumerations/TRet.md)

递归的把父控件的key_target设置为自己。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setAsKeyTarget`](TComboBox.md#setaskeytarget)

#### Defined in

[awtk.ts:12485](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12485)

***

### setAutoAdjustSize()

> **setAutoAdjustSize**(`auto_adjust_size`): [`TRet`](../enumerations/TRet.md)

设置控件是否根据子控件和文本自动调整控件自身大小。

#### Parameters

• **auto\_adjust\_size**: `boolean`

是否根据子控件和文本自动调整控件自身大小。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setAutoAdjustSize`](TComboBox.md#setautoadjustsize)

#### Defined in

[awtk.ts:11620](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11620)

***

### setAutoFix()

> **setAutoFix**(`auto_fix`): [`TRet`](../enumerations/TRet.md)

设置编辑器是否为自动改正。

#### Parameters

• **auto\_fix**: `boolean`

自动改正。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setAutoFix`](TComboBox.md#setautofix)

#### Defined in

[awtk.ts:25768](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25768)

***

### setCancelable()

> **setCancelable**(`cancelable`): [`TRet`](../enumerations/TRet.md)

设置编辑器是否为可撤销修改。

#### Parameters

• **cancelable**: `boolean`

是否为可撤销修。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setCancelable`](TComboBox.md#setcancelable)

#### Defined in

[awtk.ts:25756](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25756)

***

### setChildText()

> **setChildText**(`name`, `text`): [`TRet`](../enumerations/TRet.md)

设置子控件的文本。
只是对widget\_set\_prop的包装，文本的意义由子类控件决定。

#### Parameters

• **name**: `string`

子控件的名称。

• **text**: `string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setChildText`](TComboBox.md#setchildtext)

#### Defined in

[awtk.ts:11276](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11276)

***

### setChildTextWithDouble()

> **setChildTextWithDouble**(`name`, `format`, `value`): [`TRet`](../enumerations/TRet.md)

用一个浮点数去设置子控件的文本。
只是对widget\_set\_prop的包装，文本的意义由子类控件决定。

#### Parameters

• **name**: `string`

子控件的名称。

• **format**: `string`

格式字符串(如："%2.2lf")。

• **value**: `any`

浮点数值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setChildTextWithDouble`](TComboBox.md#setchildtextwithdouble)

#### Defined in

[awtk.ts:11291](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11291)

***

### setChildTextWithInt()

> **setChildTextWithInt**(`name`, `format`, `value`): [`TRet`](../enumerations/TRet.md)

用一个整数去设置子控件的文本。
只是对widget\_set\_prop的包装，文本的意义由子类控件决定。

#### Parameters

• **name**: `string`

子控件的名称。

• **format**: `string`

格式字符串(如："%d")。

• **value**: `any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setChildTextWithInt`](TComboBox.md#setchildtextwithint)

#### Defined in

[awtk.ts:11306](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11306)

***

### setChildrenLayout()

> **setChildrenLayout**(`params`): [`TRet`](../enumerations/TRet.md)

设置子控件的布局参数。
备注：下一帧才会生效数据

#### Parameters

• **params**: `string`

布局参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setChildrenLayout`](TComboBox.md#setchildrenlayout)

#### Defined in

[awtk.ts:12561](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12561)

***

### setCloseImWhenBlured()

> **setCloseImWhenBlured**(`close_im_when_blured`): [`TRet`](../enumerations/TRet.md)

设置编辑器是否在失去焦点时关闭输入法。

#### Parameters

• **close\_im\_when\_blured**: `boolean`

是否是否在失去焦点时关闭输入法。在失去焦点时关闭输入法。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setCloseImWhenBlured`](TComboBox.md#setcloseimwhenblured)

#### Defined in

[awtk.ts:25807](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25807)

***

### setCursor()

> **setCursor**(`cursor`): [`TRet`](../enumerations/TRet.md)

设置输入框的光标位置。

#### Parameters

• **cursor**: `number`

光标位置。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setCursor`](TComboBox.md#setcursor)

#### Defined in

[awtk.ts:25903](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25903)

***

### setDirtyRectTolerance()

> **setDirtyRectTolerance**(`dirty_rect_tolerance`): [`TRet`](../enumerations/TRet.md)

设置控件脏矩形超出控件本身大小的最大范围(一般不用指定)。

#### Parameters

• **dirty\_rect\_tolerance**: `number`

控件脏脏矩形超出控件本身大小的最大范。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setDirtyRectTolerance`](TComboBox.md#setdirtyrecttolerance)

#### Defined in

[awtk.ts:11719](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11719)

***

### setDouble()

> **setDouble**(`value`): [`TRet`](../enumerations/TRet.md)

设置double类型的值。

#### Parameters

• **value**: `any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setDouble`](TComboBox.md#setdouble)

#### Defined in

[awtk.ts:25678](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25678)

***

### setDoubleEx()

> **setDoubleEx**(`format`, `value`): [`TRet`](../enumerations/TRet.md)

设置double类型的值。

#### Parameters

• **format**: `string`

格式(缺省为"%2.2lf")。

• **value**: `any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setDoubleEx`](TComboBox.md#setdoubleex)

#### Defined in

[awtk.ts:25691](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25691)

***

### setEnable()

> **setEnable**(`enable`): [`TRet`](../enumerations/TRet.md)

设置控件的可用性。

#### Parameters

• **enable**: `boolean`

是否可用性。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setEnable`](TComboBox.md#setenable)

#### Defined in

[awtk.ts:11596](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11596)

***

### setFeedback()

> **setFeedback**(`feedback`): [`TRet`](../enumerations/TRet.md)

设置控件是否启用反馈。

#### Parameters

• **feedback**: `boolean`

是否启用反馈。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setFeedback`](TComboBox.md#setfeedback)

#### Defined in

[awtk.ts:11608](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11608)

***

### setFloatLimit()

> **setFloatLimit**(`min`, `max`, `step`): [`TRet`](../enumerations/TRet.md)

设置为浮点数输入及取值范围。

#### Parameters

• **min**: `number`

最小值。

• **max**: `number`

最大值。

• **step**: `number`

步长。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setFloatLimit`](TComboBox.md#setfloatlimit)

#### Defined in

[awtk.ts:25732](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25732)

***

### setFloating()

> **setFloating**(`floating`): [`TRet`](../enumerations/TRet.md)

设置控件的floating标志。
> floating的控件不受父控件的子控件布局参数的影响。

#### Parameters

• **floating**: `boolean`

是否启用floating布局。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setFloating`](TComboBox.md#setfloating)

#### Defined in

[awtk.ts:11633](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11633)

***

### setFocus()

> **setFocus**(`focus`): [`TRet`](../enumerations/TRet.md)

设置为焦点。

#### Parameters

• **focus**: `boolean`

是否为焦点。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setFocus`](TComboBox.md#setfocus)

#### Defined in

[awtk.ts:25891](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25891)

***

### setFocusNextWhenEnter()

> **setFocusNextWhenEnter**(`focus_next_when_enter`): [`TRet`](../enumerations/TRet.md)

设置输入回车后是否跳到下一个控件中。

#### Parameters

• **focus\_next\_when\_enter**: `boolean`

是否跳入下一个控件中。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setFocusNextWhenEnter`](TComboBox.md#setfocusnextwhenenter)

#### Defined in

[awtk.ts:25951](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25951)

***

### setFocusable()

> **setFocusable**(`focusable`): [`TRet`](../enumerations/TRet.md)

设置控件是否可获得焦点。

#### Parameters

• **focusable**: `boolean`

是否可获得焦点。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setFocusable`](TComboBox.md#setfocusable)

#### Defined in

[awtk.ts:11657](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11657)

***

### setFocused()

> **setFocused**(`focused`): [`TRet`](../enumerations/TRet.md)

设置控件是否获得焦点。

#### Parameters

• **focused**: `boolean`

是否获得焦点。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setFocused`](TComboBox.md#setfocused)

#### Defined in

[awtk.ts:11645](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11645)

***

### setInputType()

> **setInputType**(`type`): [`TRet`](../enumerations/TRet.md)

设置编辑器的输入类型。

#### Parameters

• **type**: [`TInputType`](../enumerations/TInputType.md)

输入类型。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setInputType`](TComboBox.md#setinputtype)

#### Defined in

[awtk.ts:25819](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25819)

***

### setInt()

> **setInt**(`value`): [`TRet`](../enumerations/TRet.md)

设置int类型的值。

#### Parameters

• **value**: `any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setInt`](TComboBox.md#setint)

#### Defined in

[awtk.ts:25666](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25666)

***

### setIntLimit()

> **setIntLimit**(`min`, `max`, `step`): [`TRet`](../enumerations/TRet.md)

设置为整数输入及取值范围。

#### Parameters

• **min**: `number`

最小值。

• **max**: `number`

最大值。

• **step**: `number`

步长。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setIntLimit`](TComboBox.md#setintlimit)

#### Defined in

[awtk.ts:25718](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25718)

***

### setItemHeight()

> **setItemHeight**(`item_height`): [`TRet`](../enumerations/TRet.md)

设置item高度。

#### Parameters

• **item\_height**: `number`

item的高度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setItemHeight`](TComboBox.md#setitemheight)

#### Defined in

[awtk.ts:30055](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30055)

***

### setKeyboard()

> **setKeyboard**(`keyboard`): [`TRet`](../enumerations/TRet.md)

设置自定义软键盘名称。

#### Parameters

• **keyboard**: `string`

键盘名称(相应UI资源必须存在)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setKeyboard`](TComboBox.md#setkeyboard)

#### Defined in

[awtk.ts:25867](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25867)

***

### setLocalizeOptions()

> **setLocalizeOptions**(`localize_options`): [`TRet`](../enumerations/TRet.md)

设置是否本地化(翻译)选项。

#### Parameters

• **localize\_options**: `boolean`

是否本地化(翻译)选项。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setLocalizeOptions`](TComboBox.md#setlocalizeoptions)

#### Defined in

[awtk.ts:30031](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30031)

***

### setName()

> **setName**(`name`): [`TRet`](../enumerations/TRet.md)

设置控件的名称。

#### Parameters

• **name**: `string`

名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setName`](TComboBox.md#setname)

#### Defined in

[awtk.ts:11434](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11434)

***

### setOpacity()

> **setOpacity**(`opacity`): [`TRet`](../enumerations/TRet.md)

设置控件的不透明度。

>在嵌入式平台，半透明效果会使性能大幅下降，请谨慎使用。

#### Parameters

• **opacity**: `number`

不透明度(取值0-255，0表示完全透明，255表示完全不透明)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setOpacity`](TComboBox.md#setopacity)

#### Defined in

[awtk.ts:11707](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11707)

***

### setOpenImWhenFocused()

> **setOpenImWhenFocused**(`open_im_when_focused`): [`TRet`](../enumerations/TRet.md)

设置编辑器是否在获得焦点时打开输入法。

> * 设置默认焦点时，打开窗口时不弹出软键盘。
> * 用键盘切换焦点时，编辑器获得焦点时不弹出软键盘。

#### Parameters

• **open\_im\_when\_focused**: `boolean`

是否在获得焦点时打开输入法。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setOpenImWhenFocused`](TComboBox.md#setopenimwhenfocused)

#### Defined in

[awtk.ts:25795](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25795)

***

### setOpenWindow()

> **setOpenWindow**(`open_window`): [`TRet`](../enumerations/TRet.md)

点击按钮时可以打开popup窗口，本函数可设置窗口的名称。

#### Parameters

• **open\_window**: `string`

弹出窗口的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setOpenWindow`](TComboBox.md#setopenwindow)

#### Defined in

[awtk.ts:29961](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L29961)

***

### setOptions()

> **setOptions**(`options`): [`TRet`](../enumerations/TRet.md)

设置选项。

#### Parameters

• **options**: `string`

选项。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setOptions`](TComboBox.md#setoptions)

#### Defined in

[awtk.ts:30104](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30104)

***

### setPasswordVisible()

> **setPasswordVisible**(`password_visible`): [`TRet`](../enumerations/TRet.md)

当编辑器输入类型为密码时，设置密码是否可见。

#### Parameters

• **password\_visible**: `boolean`

密码是否可见。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setPasswordVisible`](TComboBox.md#setpasswordvisible)

#### Defined in

[awtk.ts:25879](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25879)

***

### setPointerCursor()

> **setPointerCursor**(`cursor`): [`TRet`](../enumerations/TRet.md)

设置鼠标指针的图片名。

#### Parameters

• **cursor**: `string`

图片名称(无扩展名)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setPointerCursor`](TComboBox.md#setpointercursor)

#### Defined in

[awtk.ts:11469](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11469)

***

### setProp()

> **setProp**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

设置控件指定属性的值。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: [`TValue`](TValue.md)

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setProp`](TComboBox.md#setprop)

#### Defined in

[awtk.ts:11920](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11920)

***

### setPropBool()

> **setPropBool**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

设置布尔格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: `boolean`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setPropBool`](TComboBox.md#setpropbool)

#### Defined in

[awtk.ts:12049](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12049)

***

### setPropFloat()

> **setPropFloat**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

设置浮点数格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: `number`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setPropFloat`](TComboBox.md#setpropfloat)

#### Defined in

[awtk.ts:11997](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11997)

***

### setPropInt()

> **setPropInt**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

设置整数格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: `number`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setPropInt`](TComboBox.md#setpropint)

#### Defined in

[awtk.ts:12023](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12023)

***

### setPropPointer()

> **setPropPointer**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

设置指针格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: `any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setPropPointer`](TComboBox.md#setproppointer)

#### Defined in

[awtk.ts:11972](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11972)

***

### setPropStr()

> **setPropStr**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

设置字符串格式的属性。

#### Parameters

• **name**: `string`

属性的名称。

• **v**: `string`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setPropStr`](TComboBox.md#setpropstr)

#### Defined in

[awtk.ts:11946](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11946)

***

### setProps()

> **setProps**(`params`): [`TRet`](../enumerations/TRet.md)

设置多个参数。
>参数之间用&分隔，名称和值之间用=分隔。如: name=awtk&min=10&max=100

#### Parameters

• **params**: `string`

参数列表。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setProps`](TComboBox.md#setprops)

#### Defined in

[awtk.ts:11933](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11933)

***

### setReadonly()

> **setReadonly**(`readonly`): [`TRet`](../enumerations/TRet.md)

设置编辑器是否为只读。

#### Parameters

• **readonly**: `boolean`

只读。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setReadonly`](TComboBox.md#setreadonly)

#### Defined in

[awtk.ts:25744](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25744)

***

### setSelect()

> **setSelect**(`start`, `end`): [`TRet`](../enumerations/TRet.md)

选择指定范围的文本。

#### Parameters

• **start**: `number`

起始偏移。

• **end**: `number`

结束偏移。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setSelect`](TComboBox.md#setselect)

#### Defined in

[awtk.ts:25927](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25927)

***

### setSelectNoneWhenFocused()

> **setSelectNoneWhenFocused**(`select_none_when_focused`): [`TRet`](../enumerations/TRet.md)

设置编辑器是否在获得焦点时不选中文本。

#### Parameters

• **select\_none\_when\_focused**: `boolean`

是否在获得焦点时不选中文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setSelectNoneWhenFocused`](TComboBox.md#setselectnonewhenfocused)

#### Defined in

[awtk.ts:25780](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25780)

***

### setSelectedIndex()

> **setSelectedIndex**(`index`): [`TRet`](../enumerations/TRet.md)

设置第index个选项为当前选中的选项。

#### Parameters

• **index**: `number`

选项的索引。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setSelectedIndex`](TComboBox.md#setselectedindex)

#### Defined in

[awtk.ts:30007](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30007)

***

### setSelectedIndexByText()

> **setSelectedIndexByText**(`text`): [`TRet`](../enumerations/TRet.md)

根据文本设置当前选中的选项。

#### Parameters

• **text**: `string`

原生(非翻译的文本)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setSelectedIndexByText`](TComboBox.md#setselectedindexbytext)

#### Defined in

[awtk.ts:30019](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30019)

***

### setSelfLayout()

> **setSelfLayout**(`params`): [`TRet`](../enumerations/TRet.md)

设置控件自己的布局参数。
备注：下一帧才会生效数据

#### Parameters

• **params**: `string`

布局参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setSelfLayout`](TComboBox.md#setselflayout)

#### Defined in

[awtk.ts:12548](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12548)

***

### setSelfLayoutParams()

> **setSelfLayoutParams**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

设置控件自己的布局(缺省布局器)参数(建议用widget\_set\_self\_layout)。
备注：下一帧才会生效数据

#### Parameters

• **x**: `string`

x参数。

• **y**: `string`

y参数。

• **w**: `string`

w参数。

• **h**: `string`

h参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setSelfLayoutParams`](TComboBox.md#setselflayoutparams)

#### Defined in

[awtk.ts:12577](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12577)

***

### setSensitive()

> **setSensitive**(`sensitive`): [`TRet`](../enumerations/TRet.md)

设置控件是否接受用户事件。

#### Parameters

• **sensitive**: `boolean`

是否接受用户事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setSensitive`](TComboBox.md#setsensitive)

#### Defined in

[awtk.ts:11853](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11853)

***

### setState()

> **setState**(`state`): [`TRet`](../enumerations/TRet.md)

设置控件的状态。

#### Parameters

• **state**: `string`

状态。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setState`](TComboBox.md#setstate)

#### Defined in

[awtk.ts:11669](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11669)

***

### setStateFromParentSync()

> **setStateFromParentSync**(`state_from_parent_sync`): [`TRet`](../enumerations/TRet.md)

标识是否接收父控件的状态同步。

#### Parameters

• **state\_from\_parent\_sync**: `boolean`

是否接收父控件的状态同步。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setStateFromParentSync`](TComboBox.md#setstatefromparentsync)

#### Defined in

[awtk.ts:11693](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11693)

***

### setStyleColor()

> **setStyleColor**(`state_and_name`, `value`): [`TRet`](../enumerations/TRet.md)

设置颜色类型的style。

> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

在下面这个例子中，R=0x11 G=0x22 B=0x33 A=0xFF

#### Parameters

• **state\_and\_name**: `string`

状态和名字，用英文的冒号分隔。

• **value**: `any`

值。颜色值一般用十六进制表示，每两个数字表示一个颜色通道，从高位到低位，依次是ABGR。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setStyleColor`](TComboBox.md#setstylecolor)

#### Defined in

[awtk.ts:12630](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12630)

***

### setStyleInt()

> **setStyleInt**(`state_and_name`, `value`): [`TRet`](../enumerations/TRet.md)

设置整数类型的style。

> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

#### Parameters

• **state\_and\_name**: `string`

状态和名字，用英文的冒号分隔。

• **value**: `any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setStyleInt`](TComboBox.md#setstyleint)

#### Defined in

[awtk.ts:12593](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12593)

***

### setStyleStr()

> **setStyleStr**(`state_and_name`, `value`): [`TRet`](../enumerations/TRet.md)

设置字符串类型的style。

> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

#### Parameters

• **state\_and\_name**: `string`

状态和名字，用英文的冒号分隔。

• **value**: `string`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setStyleStr`](TComboBox.md#setstylestr)

#### Defined in

[awtk.ts:12609](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12609)

***

### setSyncStateToChildren()

> **setSyncStateToChildren**(`sync_state_to_children`): [`TRet`](../enumerations/TRet.md)

标识是否将当前控件状态同步到子控件中。

#### Parameters

• **sync\_state\_to\_children**: `boolean`

是否将当前控件状态同步到子控件中。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setSyncStateToChildren`](TComboBox.md#setsyncstatetochildren)

#### Defined in

[awtk.ts:11681](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11681)

***

### setText()

> **setText**(`text`): [`TRet`](../enumerations/TRet.md)

设置控件的文本。（如果字符串相同，则不会重复设置以及触发事件）

#### Parameters

• **text**: `string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setText`](TComboBox.md#settext)

#### Defined in

[awtk.ts:11249](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11249)

***

### setTextEx()

> **setTextEx**(`text`, `check_diff`): [`TRet`](../enumerations/TRet.md)

设置控件的文本。

#### Parameters

• **text**: `string`

文本。

• **check\_diff**: `boolean`

是否检查设置的文本是否和控件中的文本一样。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setTextEx`](TComboBox.md#settextex)

#### Defined in

[awtk.ts:11262](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11262)

***

### setTextLimit()

> **setTextLimit**(`min`, `max`): [`TRet`](../enumerations/TRet.md)

设置为文本输入及其长度限制，不允许输入超过max个字符，少于min个字符时进入error状态。

#### Parameters

• **min**: `number`

最小长度。

• **max**: `number`

最大长度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setTextLimit`](TComboBox.md#settextlimit)

#### Defined in

[awtk.ts:25704](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25704)

***

### setTheme()

> **setTheme**(`name`): [`TRet`](../enumerations/TRet.md)

设置theme的名称，用于动态切换主题。名称与当前主题名称相同，则重新加载全部资源。

#### Parameters

• **name**: `string`

主题的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setTheme`](TComboBox.md#settheme)

#### Defined in

[awtk.ts:11446](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11446)

***

### setThemeOfPopup()

> **setThemeOfPopup**(`theme_of_popup`): [`TRet`](../enumerations/TRet.md)

设置弹出窗口的主题。

#### Parameters

• **theme\_of\_popup**: `string`

弹出的窗口主题。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setThemeOfPopup`](TComboBox.md#setthemeofpopup)

#### Defined in

[awtk.ts:29973](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L29973)

***

### setTips()

> **setTips**(`tips`): [`TRet`](../enumerations/TRet.md)

设置编辑器的输入提示。

#### Parameters

• **tips**: `string`

输入提示。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setTips`](TComboBox.md#settips)

#### Defined in

[awtk.ts:25843](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25843)

***

### setTrText()

> **setTrText**(`text`): [`TRet`](../enumerations/TRet.md)

获取翻译之后的文本，然后调用widget_set_text。

#### Parameters

• **text**: `string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setTrText`](TComboBox.md#settrtext)

#### Defined in

[awtk.ts:11318](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11318)

***

### setTrTips()

> **setTrTips**(`tr_tips`): [`TRet`](../enumerations/TRet.md)

获取翻译之后的文本，然后调用edit_set_tips。

#### Parameters

• **tr\_tips**: `string`

提示信息。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setTrTips`](TComboBox.md#settrtips)

#### Defined in

[awtk.ts:25855](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L25855)

***

### setValue()

> **setValue**(`value`): [`TRet`](../enumerations/TRet.md)

设置值。

#### Parameters

• **value**: `any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setValue`](TComboBox.md#setvalue)

#### Defined in

[awtk.ts:30043](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30043)

***

### setValueInt()

> **setValueInt**(`value`): [`TRet`](../enumerations/TRet.md)

设置控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

• **value**: `any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setValueInt`](TComboBox.md#setvalueint)

#### Defined in

[awtk.ts:11163](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11163)

***

### setVisible()

> **setVisible**(`visible`): [`TRet`](../enumerations/TRet.md)

设置控件的可见性。

#### Parameters

• **visible**: `boolean`

是否可见。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setVisible`](TComboBox.md#setvisible)

#### Defined in

[awtk.ts:11829](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11829)

***

### setVisibleOnly()

> **setVisibleOnly**(`visible`): [`TRet`](../enumerations/TRet.md)

设置控件的可见性(不触发repaint和relayout)。

#### Parameters

• **visible**: `boolean`

是否可见。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`setVisibleOnly`](TComboBox.md#setvisibleonly)

#### Defined in

[awtk.ts:11841](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11841)

***

### startAnimator()

> **startAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

播放动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，播放所有名称为name的动画。
* 2.name为NULL时，播放所有widget相关的动画。
* 3.widget和name均为NULL，播放所有动画。

#### Parameters

• **name**: `string`

动画名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`startAnimator`](TComboBox.md#startanimator)

#### Defined in

[awtk.ts:11515](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11515)

***

### stopAnimator()

> **stopAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

停止动画(控件的相应属性回归原位)。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，停止所有名称为name的动画。
* 2.name为NULL时，停止所有widget相关的动画。
* 3.widget和name均为NULL，停止所有动画。

#### Parameters

• **name**: `string`

动画名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`stopAnimator`](TComboBox.md#stopanimator)

#### Defined in

[awtk.ts:11567](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11567)

***

### strokeBorderRect()

> **strokeBorderRect**(`c`, `r`): [`TRet`](../enumerations/TRet.md)

根据控件的style绘制边框矩形。

#### Parameters

• **c**: [`TCanvas`](TCanvas.md)

画布对象。

• **r**: [`TRect`](TRect.md)

矩形区域。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`strokeBorderRect`](TComboBox.md#strokeborderrect)

#### Defined in

[awtk.ts:12389](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12389)

***

### unref()

> **unref**(): [`TRet`](../enumerations/TRet.md)

减少控件的引用计数。引用计数为0时销毁控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`unref`](TComboBox.md#unref)

#### Defined in

[awtk.ts:12376](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12376)

***

### updateStyle()

> **updateStyle**(): [`TRet`](../enumerations/TRet.md)

让控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`updateStyle`](TComboBox.md#updatestyle)

#### Defined in

[awtk.ts:12463](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12463)

***

### updateStyleRecursive()

> **updateStyleRecursive**(): [`TRet`](../enumerations/TRet.md)

让控件及子控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`updateStyleRecursive`](TComboBox.md#updatestylerecursive)

#### Defined in

[awtk.ts:12474](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L12474)

***

### useStyle()

> **useStyle**(`style`): [`TRet`](../enumerations/TRet.md)

启用指定的style。

#### Parameters

• **style**: `string`

style的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TComboBox`](TComboBox.md).[`useStyle`](TComboBox.md#usestyle)

#### Defined in

[awtk.ts:11237](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L11237)

***

### cast()

> `static` **cast**(`widget`): [`TComboBox`](TComboBox.md)

转换combo_box对象(供脚本语言使用)。

#### Parameters

• **widget**: [`TWidget`](TWidget.md)

combo_box对象。

#### Returns

[`TComboBox`](TComboBox.md)

combo_box对象。

#### Inherited from

[`TComboBox`](TComboBox.md).[`cast`](TComboBox.md#cast)

#### Defined in

[awtk.ts:29949](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L29949)

***

### create()

> `static` **create**(`parent`, `x`, `y`, `w`, `h`): [`TComboBoxEx`](TComboBoxEx.md)

创建combo_box_ex对象

#### Parameters

• **parent**: [`TWidget`](TWidget.md)

父控件

• **x**: `number`

x坐标

• **y**: `number`

y坐标

• **w**: `number`

宽度

• **h**: `number`

高度

#### Returns

[`TComboBoxEx`](TComboBoxEx.md)

对象。

#### Overrides

[`TComboBox`](TComboBox.md).[`create`](TComboBox.md#create)

#### Defined in

[awtk.ts:30957](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L30957)
