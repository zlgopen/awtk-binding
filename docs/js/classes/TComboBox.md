[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TComboBox

# Class: TComboBox

Defined in: [awtk.ts:30893](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L30893)

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

> 更多用法请参考：[combo_box.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/combo_box.xml)

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

* 1.combobox的下拉按钮的style名称为combobox_down，可以在窗体样式文件中设置。

```xml
<button>
<style name="combobox_down" border_color="#a0a0a0">
<normal     bg_color="#f0f0f0" icon="arrow_down_n"/>
<pressed    bg_color="#c0c0c0" icon="arrow_down_p"/>
<over       bg_color="#e0e0e0" icon="arrow_down_o"/>
</style>
</button>
```

* 2.combobox的弹出popup窗口的style名称为combobox_popup，可以在窗体样式文件中设置。

```xml
<popup>
<style name="combobox_popup" border_color="red">
<normal bg_color="#808080"/>
</style>
</popup>
```
* 3.combobox的下拉框中的列表项的样式，可以设置combo_box_item的style来改变。

```xml
<combo_box_item>
<style name="default" icon_at="left" text_color="black" bg_color="#f0f0f0">
<normal  icon="empty"/>
<focused icon="empty" bg_color="#1296db" text_color="gold" />
<pressed icon="empty" bg_color="#1296db" text_color="white" />
<over    icon="empty" bg_color="#1296db" text_color="white" />
<normal_of_checked  icon="check"/>
<focused_of_checked  icon="check" bg_color="#1296db" text_color="gold"/>
<pressed_of_checked icon="check" bg_color="#1296db" text_color="white" />
<over_of_checked    icon="check" bg_color="#1296db" text_color="white" />
</style>
</combo_box_item>
```

> 更多用法请参考：[theme
default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L422)

## Extends

- [`TEdit`](TEdit.md)

## Extended by

- [`TComboBoxEx`](TComboBoxEx.md)

## Constructors

### Constructor

> **new TComboBox**(`nativeObj`): `TComboBox`

Defined in: [awtk.ts:30895](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L30895)

#### Parameters

##### nativeObj

`any`

#### Returns

`TComboBox`

#### Overrides

[`TEdit`](TEdit.md).[`constructor`](TEdit.md#constructor)

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:30894](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L30894)

#### Overrides

[`TEdit`](TEdit.md).[`nativeObj`](TEdit.md#nativeobj)

## Accessors

### actionText

#### Get Signature

> **get** **actionText**(): `string`

Defined in: [awtk.ts:26867](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26867)

软键盘上action按钮的文本。内置取值有：

* next 将焦点切换到下一个控件。
* done 完成，关闭软键盘。

也可以使用其它文本，比如send表示发送。这个需要自己实现相应的功能，处理EVT\_IM\_ACTION事件即可。

##### Returns

`string`

#### Set Signature

> **set** **actionText**(`v`): `void`

Defined in: [awtk.ts:26871](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26871)

##### Parameters

###### v

`string`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`actionText`](TEdit.md#actiontext)

***

### animation

#### Get Signature

> **get** **animation**(): `string`

Defined in: [awtk.ts:12947](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12947)

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

##### Returns

`string`

#### Set Signature

> **set** **animation**(`v`): `void`

Defined in: [awtk.ts:12951](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12951)

##### Parameters

###### v

`string`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`animation`](TEdit.md#animation)

***

### autoAdjustSize

#### Get Signature

> **get** **autoAdjustSize**(): `boolean`

Defined in: [awtk.ts:13038](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13038)

是否根据子控件和文本自动调整控件自身大小。

> 为true时，最好不要使用 layout 的相关东西，否则可能有冲突。
> 注意：只是调整控件的本身的宽高，不会修改控件本身的位置，仅部分控件实现该效果。

##### Returns

`boolean`

#### Set Signature

> **set** **autoAdjustSize**(`v`): `void`

Defined in: [awtk.ts:13042](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13042)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`autoAdjustSize`](TEdit.md#autoadjustsize)

***

### autoFix

#### Get Signature

> **get** **autoFix**(): `boolean`

Defined in: [awtk.ts:26971](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26971)

输入无效时，是否自动改正。

##### Returns

`boolean`

#### Set Signature

> **set** **autoFix**(`v`): `void`

Defined in: [awtk.ts:26975](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26975)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`autoFix`](TEdit.md#autofix)

***

### cancelable

#### Get Signature

> **get** **cancelable**(): `boolean`

Defined in: [awtk.ts:27030](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L27030)

是否支持撤销编辑。如果为TRUE，在失去焦点之前可以撤销所有修改(恢复获得焦点之前的内容)。

> * 1.一般配合keyboard的"cancel"按钮使用。
> * 2.为TRUE时，如果内容有变化，会设置编辑器的状态为changed，所以此时编辑器需要支持changed状态的style。

##### Returns

`boolean`

#### Set Signature

> **set** **cancelable**(`v`): `void`

Defined in: [awtk.ts:27034](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L27034)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`cancelable`](TEdit.md#cancelable)

***

### closeImWhenBlured

#### Get Signature

> **get** **closeImWhenBlured**(): `boolean`

Defined in: [awtk.ts:27014](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L27014)

是否在失去焦点时关闭输入法(默认是)。

##### Returns

`boolean`

#### Set Signature

> **set** **closeImWhenBlured**(`v`): `void`

Defined in: [awtk.ts:27018](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L27018)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`closeImWhenBlured`](TEdit.md#closeimwhenblured)

***

### dirtyRectTolerance

#### Get Signature

> **get** **dirtyRectTolerance**(): `number`

Defined in: [awtk.ts:13105](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13105)

脏矩形超出控件本身大小的最大范围(一般不用指定)。

> 如果 border 太粗或 offset 太大等原因，导致脏矩形超出控件本身大小太多（大于缺省值）时，才需要指定。

##### Returns

`number`

#### Set Signature

> **set** **dirtyRectTolerance**(`v`): `void`

Defined in: [awtk.ts:13109](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13109)

##### Parameters

###### v

`number`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`dirtyRectTolerance`](TEdit.md#dirtyrecttolerance)

***

### enable

#### Get Signature

> **get** **enable**(): `boolean`

Defined in: [awtk.ts:12960](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12960)

启用/禁用状态。

##### Returns

`boolean`

#### Set Signature

> **set** **enable**(`v`): `void`

Defined in: [awtk.ts:12964](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12964)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`enable`](TEdit.md#enable)

***

### feedback

#### Get Signature

> **get** **feedback**(): `boolean`

Defined in: [awtk.ts:12973](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12973)

是否启用按键音、触屏音和震动等反馈。

##### Returns

`boolean`

#### Set Signature

> **set** **feedback**(`v`): `void`

Defined in: [awtk.ts:12977](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12977)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`feedback`](TEdit.md#feedback)

***

### floating

#### Get Signature

> **get** **floating**(): `boolean`

Defined in: [awtk.ts:13051](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13051)

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

##### Returns

`boolean`

#### Set Signature

> **set** **floating**(`v`): `void`

Defined in: [awtk.ts:13055](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13055)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`floating`](TEdit.md#floating)

***

### focusable

#### Get Signature

> **get** **focusable**(): `boolean`

Defined in: [awtk.ts:13012](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13012)

是否支持焦点停留。

##### Returns

`boolean`

#### Set Signature

> **set** **focusable**(`v`): `void`

Defined in: [awtk.ts:13016](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13016)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`focusable`](TEdit.md#focusable)

***

### focusNextWhenEnter

#### Get Signature

> **get** **focusNextWhenEnter**(): `boolean`

Defined in: [awtk.ts:27043](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L27043)

输入回车后是否跳到下一个控件中。

##### Returns

`boolean`

#### Set Signature

> **set** **focusNextWhenEnter**(`v`): `void`

Defined in: [awtk.ts:27047](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L27047)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`focusNextWhenEnter`](TEdit.md#focusnextwhenenter)

***

### h

#### Get Signature

> **get** **h**(): `number`

Defined in: [awtk.ts:12890](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12890)

高度。

##### Returns

`number`

#### Inherited from

[`TEdit`](TEdit.md).[`h`](TEdit.md#h)

***

### inputType

#### Get Signature

> **get** **inputType**(): [`TInputType`](../enumerations/TInputType.md)

Defined in: [awtk.ts:26932](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26932)

输入类型。

##### Returns

[`TInputType`](../enumerations/TInputType.md)

#### Set Signature

> **set** **inputType**(`v`): `void`

Defined in: [awtk.ts:26936](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26936)

##### Parameters

###### v

[`TInputType`](../enumerations/TInputType.md)

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`inputType`](TEdit.md#inputtype)

***

### itemHeight

#### Get Signature

> **get** **itemHeight**(): `number`

Defined in: [awtk.ts:31213](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31213)

下拉选项的高度。如果open_window为空，则使用缺省高度。

##### Returns

`number`

#### Set Signature

> **set** **itemHeight**(`v`): `void`

Defined in: [awtk.ts:31217](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31217)

##### Parameters

###### v

`number`

##### Returns

`void`

***

### keyboard

#### Get Signature

> **get** **keyboard**(): `string`

Defined in: [awtk.ts:26891](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26891)

自定义软键盘名称。AWTK优先查找keyboard属性设置的键盘文件名（该键盘的XML文件需要在default\raw\ui目录下存在），如果没有指定keyboard，就找input_type设置的键盘类型。如果指定为空字符串，则表示不需要软键盘。

##### Returns

`string`

#### Set Signature

> **set** **keyboard**(`v`): `void`

Defined in: [awtk.ts:26895](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26895)

##### Parameters

###### v

`string`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`keyboard`](TEdit.md#keyboard)

***

### localizeOptions

#### Get Signature

> **get** **localizeOptions**(): `boolean`

Defined in: [awtk.ts:31184](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31184)

是否本地化(翻译)选项(缺省为TRUE)。

##### Returns

`boolean`

#### Set Signature

> **set** **localizeOptions**(`v`): `void`

Defined in: [awtk.ts:31188](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31188)

##### Parameters

###### v

`boolean`

##### Returns

`void`

***

### max

#### Get Signature

> **get** **max**(): `number`

Defined in: [awtk.ts:26913](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26913)

最大值或最大长度。

##### Returns

`number`

#### Inherited from

[`TEdit`](TEdit.md).[`max`](TEdit.md#max)

***

### min

#### Get Signature

> **get** **min**(): `number`

Defined in: [awtk.ts:26904](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26904)

最小值或最小长度。

##### Returns

`number`

#### Inherited from

[`TEdit`](TEdit.md).[`min`](TEdit.md#min)

***

### name

#### Get Signature

> **get** **name**(): `string`

Defined in: [awtk.ts:12899](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12899)

控件名字。

##### Returns

`string`

#### Set Signature

> **set** **name**(`v`): `void`

Defined in: [awtk.ts:12903](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12903)

##### Parameters

###### v

`string`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`name`](TEdit.md#name)

***

### opacity

#### Get Signature

> **get** **opacity**(): `number`

Defined in: [awtk.ts:13090](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13090)

不透明度(0-255)，0完全透明，255完全不透明。

##### Returns

`number`

#### Set Signature

> **set** **opacity**(`v`): `void`

Defined in: [awtk.ts:13094](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13094)

##### Parameters

###### v

`number`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`opacity`](TEdit.md#opacity)

***

### openImWhenFocused

#### Get Signature

> **get** **openImWhenFocused**(): `boolean`

Defined in: [awtk.ts:27001](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L27001)

获得焦点时打开输入法。

> 主要用于没有指针设备的情况，否则每次切换焦点时都打开输入法。

##### Returns

`boolean`

#### Set Signature

> **set** **openImWhenFocused**(`v`): `void`

Defined in: [awtk.ts:27005](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L27005)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`openImWhenFocused`](TEdit.md#openimwhenfocused)

***

### openWindow

#### Get Signature

> **get** **openWindow**(): `string`

Defined in: [awtk.ts:31132](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31132)

为点击按钮时，要打开窗口的名称。

##### Returns

`string`

#### Set Signature

> **set** **openWindow**(`v`): `void`

Defined in: [awtk.ts:31136](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31136)

##### Parameters

###### v

`string`

##### Returns

`void`

***

### options

#### Get Signature

> **get** **options**(): `string`

Defined in: [awtk.ts:31200](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31200)

设置可选项(冒号分隔值和文本，分号分隔选项，如:1:red;2:green;3:blue)。
> 如果数据本身中有英文冒号(:)和英文分号(;)，请用16进制转义。
> * 英文冒号(:)写为\\x3a
> * 英文冒号(;)写为\\x3b

##### Returns

`string`

#### Set Signature

> **set** **options**(`v`): `void`

Defined in: [awtk.ts:31204](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31204)

##### Parameters

###### v

`string`

##### Returns

`void`

***

### parent

#### Get Signature

> **get** **parent**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:13118](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13118)

父控件

##### Returns

[`TWidget`](TWidget.md)

#### Inherited from

[`TEdit`](TEdit.md).[`parent`](TEdit.md#parent)

***

### passwordVisible

#### Get Signature

> **get** **passwordVisible**(): `boolean`

Defined in: [awtk.ts:26958](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26958)

密码是否可见。

##### Returns

`boolean`

#### Set Signature

> **set** **passwordVisible**(`v`): `void`

Defined in: [awtk.ts:26962](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26962)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`passwordVisible`](TEdit.md#passwordvisible)

***

### pointerCursor

#### Get Signature

> **get** **pointerCursor**(): `string`

Defined in: [awtk.ts:12912](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12912)

鼠标光标图片名称。

##### Returns

`string`

#### Set Signature

> **set** **pointerCursor**(`v`): `void`

Defined in: [awtk.ts:12916](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12916)

##### Parameters

###### v

`string`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`pointerCursor`](TEdit.md#pointercursor)

***

### readonly

#### Get Signature

> **get** **readonly**(): `boolean`

Defined in: [awtk.ts:26945](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26945)

编辑器是否为只读。

##### Returns

`boolean`

#### Set Signature

> **set** **readonly**(`v`): `void`

Defined in: [awtk.ts:26949](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26949)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`readonly`](TEdit.md#readonly)

***

### scrollToBeginOnBlur

#### Get Signature

> **get** **scrollToBeginOnBlur**(): `boolean`

Defined in: [awtk.ts:27056](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L27056)

失去焦点时是否滚动回开头(默认 FALSE)

##### Returns

`boolean`

#### Set Signature

> **set** **scrollToBeginOnBlur**(`v`): `void`

Defined in: [awtk.ts:27060](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L27060)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`scrollToBeginOnBlur`](TEdit.md#scrolltobeginonblur)

***

### selectedIndex

#### Get Signature

> **get** **selectedIndex**(): `number`

Defined in: [awtk.ts:31158](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31158)

当前选中的选项。

##### Returns

`number`

#### Set Signature

> **set** **selectedIndex**(`v`): `void`

Defined in: [awtk.ts:31162](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31162)

##### Parameters

###### v

`number`

##### Returns

`void`

***

### selectNoneWhenFocused

#### Get Signature

> **get** **selectNoneWhenFocused**(): `boolean`

Defined in: [awtk.ts:26986](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26986)

获得焦点时不选中文本。

> 主要用于没有指针设备的情况，否则软键盘无法取消选中文本。

##### Returns

`boolean`

#### Set Signature

> **set** **selectNoneWhenFocused**(`v`): `void`

Defined in: [awtk.ts:26990](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26990)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`selectNoneWhenFocused`](TEdit.md#selectnonewhenfocused)

***

### sensitive

#### Get Signature

> **get** **sensitive**(): `boolean`

Defined in: [awtk.ts:12999](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12999)

是否接受用户事件。

##### Returns

`boolean`

#### Set Signature

> **set** **sensitive**(`v`): `void`

Defined in: [awtk.ts:13003](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13003)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`sensitive`](TEdit.md#sensitive)

***

### stateFromParentSync

#### Get Signature

> **get** **stateFromParentSync**(): `boolean`

Defined in: [awtk.ts:13077](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13077)

标识是否接收父控件的状态同步。

##### Returns

`boolean`

#### Set Signature

> **set** **stateFromParentSync**(`v`): `void`

Defined in: [awtk.ts:13081](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13081)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`stateFromParentSync`](TEdit.md#statefromparentsync)

***

### step

#### Get Signature

> **get** **step**(): `number`

Defined in: [awtk.ts:26923](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26923)

步长。
作为数值型编辑器时，一次增加和减少时的数值。

##### Returns

`number`

#### Inherited from

[`TEdit`](TEdit.md).[`step`](TEdit.md#step)

***

### style

#### Get Signature

> **get** **style**(): `string`

Defined in: [awtk.ts:12938](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12938)

style的名称。

##### Returns

`string`

#### Inherited from

[`TEdit`](TEdit.md).[`style`](TEdit.md#style)

***

### syncStateToChildren

#### Get Signature

> **get** **syncStateToChildren**(): `boolean`

Defined in: [awtk.ts:13064](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13064)

标识是否将当前控件状态同步到子控件中。

##### Returns

`boolean`

#### Set Signature

> **set** **syncStateToChildren**(`v`): `void`

Defined in: [awtk.ts:13068](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13068)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`syncStateToChildren`](TEdit.md#syncstatetochildren)

***

### themeOfPopup

#### Get Signature

> **get** **themeOfPopup**(): `string`

Defined in: [awtk.ts:31145](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31145)

弹出窗口的主题(对应的style文件必须存在)，方便为不同combo box的弹出窗口指定不同的样式。

##### Returns

`string`

#### Set Signature

> **set** **themeOfPopup**(`v`): `void`

Defined in: [awtk.ts:31149](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31149)

##### Parameters

###### v

`string`

##### Returns

`void`

***

### tips

#### Get Signature

> **get** **tips**(): `string`

Defined in: [awtk.ts:26836](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26836)

输入提示。

##### Returns

`string`

#### Set Signature

> **set** **tips**(`v`): `void`

Defined in: [awtk.ts:26840](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26840)

##### Parameters

###### v

`string`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`tips`](TEdit.md#tips)

***

### trText

#### Get Signature

> **get** **trText**(): `string`

Defined in: [awtk.ts:12925](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12925)

保存用于翻译的字符串。

##### Returns

`string`

#### Set Signature

> **set** **trText**(`v`): `void`

Defined in: [awtk.ts:12929](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12929)

##### Parameters

###### v

`string`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`trText`](TEdit.md#trtext)

***

### trTips

#### Get Signature

> **get** **trTips**(): `string`

Defined in: [awtk.ts:26849](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26849)

保存用于翻译的提示信息。

##### Returns

`string`

#### Set Signature

> **set** **trTips**(`v`): `void`

Defined in: [awtk.ts:26853](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26853)

##### Parameters

###### v

`string`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`trTips`](TEdit.md#trtips)

***

### validator

#### Get Signature

> **get** **validator**(): `string`

Defined in: [awtk.ts:26882](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26882)

fscript脚本，用输入校验，如：(len(text) 3) && (len(text) < 10)。

> 用于校验输入的文本是否合法。

##### Returns

`string`

#### Inherited from

[`TEdit`](TEdit.md).[`validator`](TEdit.md#validator)

***

### value

#### Get Signature

> **get** **value**(): `number`

Defined in: [awtk.ts:31171](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31171)

值。

##### Returns

`number`

#### Set Signature

> **set** **value**(`v`): `void`

Defined in: [awtk.ts:31175](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31175)

##### Parameters

###### v

`number`

##### Returns

`void`

***

### visible

#### Get Signature

> **get** **visible**(): `boolean`

Defined in: [awtk.ts:12986](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12986)

是否可见。

##### Returns

`boolean`

#### Set Signature

> **set** **visible**(`v`): `void`

Defined in: [awtk.ts:12990](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12990)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TEdit`](TEdit.md).[`visible`](TEdit.md#visible)

***

### w

#### Get Signature

> **get** **w**(): `number`

Defined in: [awtk.ts:12881](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12881)

宽度。

##### Returns

`number`

#### Inherited from

[`TEdit`](TEdit.md).[`w`](TEdit.md#w)

***

### withFocusState

#### Get Signature

> **get** **withFocusState**(): `boolean`

Defined in: [awtk.ts:13026](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13026)

是否支持焦点状态。
> 如果希望style支持焦点状态，但又不希望焦点停留，可用本属性。

##### Returns

`boolean`

#### Inherited from

[`TEdit`](TEdit.md).[`withFocusState`](TEdit.md#withfocusstate)

***

### x

#### Get Signature

> **get** **x**(): `number`

Defined in: [awtk.ts:12863](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12863)

x坐标(相对于父控件的x坐标)。

##### Returns

`number`

#### Inherited from

[`TEdit`](TEdit.md).[`x`](TEdit.md#x)

***

### y

#### Get Signature

> **get** **y**(): `number`

Defined in: [awtk.ts:12872](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12872)

y坐标(相对于父控件的y坐标)。

##### Returns

`number`

#### Inherited from

[`TEdit`](TEdit.md).[`y`](TEdit.md#y)

## Methods

### addChild()

> **addChild**(`child`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11921](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11921)

加入一个子控件。

#### Parameters

##### child

[`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`addChild`](TEdit.md#addchild)

***

### addChildDefault()

> **addChildDefault**(`child`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12854](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12854)

加入一个子控件默认实现(供子类调用)。

#### Parameters

##### child

[`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`addChildDefault`](TEdit.md#addchilddefault)

***

### addValue()

> **addValue**(`delta`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11276](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11276)

增加控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

##### delta

`number`

增量。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`addValue`](TEdit.md#addvalue)

***

### addValueInt()

> **addValueInt**(`delta`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11313](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11313)

增加控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

##### delta

`number`

增量。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`addValueInt`](TEdit.md#addvalueint)

***

### animatePositionTo()

> **animatePositionTo**(`x`, `y`, `duration`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11355](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11355)

设置控件的位置(以动画形式变化到指定的位置)。

#### Parameters

##### x

`number`

x坐标。

##### y

`number`

y坐标。

##### duration

`number`

动画持续时间(毫秒)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`animatePositionTo`](TEdit.md#animatepositionto)

***

### animatePropFloatTo()

> **animatePropFloatTo**(`name`, `value`, `duration`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11341](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11341)

设置控件的属性(以动画形式变化到指定的值)。

#### Parameters

##### name

`string`

属性名称。

##### value

`any`

值。

##### duration

`number`

动画持续时间(毫秒)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`animatePropFloatTo`](TEdit.md#animatepropfloatto)

***

### animateSizeTo()

> **animateSizeTo**(`w`, `h`, `duration`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11369](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11369)

设置控件的大小(以动画形式变化到指定的大小)。

#### Parameters

##### w

`number`

宽度。

##### h

`number`

高度。

##### duration

`number`

动画持续时间(毫秒)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`animateSizeTo`](TEdit.md#animatesizeto)

***

### animateValueTo()

> **animateValueTo**(`value`, `duration`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11327](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11327)

设置控件的值(以动画形式变化到指定的值)。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

##### value

`any`

值。

##### duration

`number`

动画持续时间(毫秒)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`animateValueTo`](TEdit.md#animatevalueto)

***

### appendOption()

> **appendOption**(`value`, `text`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:31042](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31042)

追加一个选项。

#### Parameters

##### value

`any`

值。

##### text

`string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### back()

> **back**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11160](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11160)

请求返回到前一个窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`back`](TEdit.md#back)

***

### backToHome()

> **backToHome**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11171](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11171)

请求返回到home窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`backToHome`](TEdit.md#backtohome)

***

### child()

> **child**(`name`): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11970](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11970)

查找指定名称的子控件(同widget_lookup(widget, name, FALSE))。

#### Parameters

##### name

`string`

子控件的名称。

#### Returns

[`TWidget`](TWidget.md)

子控件或NULL。

#### Inherited from

[`TEdit`](TEdit.md).[`child`](TEdit.md#child)

***

### clone()

> **clone**(`parent`): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:12516](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12516)

clone。

#### Parameters

##### parent

[`TWidget`](TWidget.md)

clone新控件的parent对象。

#### Returns

[`TWidget`](TWidget.md)

返回clone的对象。

#### Inherited from

[`TEdit`](TEdit.md).[`clone`](TEdit.md#clone)

***

### closeWindow()

> **closeWindow**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11138](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11138)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`closeWindow`](TEdit.md#closewindow)

***

### closeWindowForce()

> **closeWindowForce**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11149](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11149)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`closeWindowForce`](TEdit.md#closewindowforce)

***

### countChildren()

> **countChildren**(): `number`

Defined in: [awtk.ts:11058](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11058)

获取子控件的个数。

#### Returns

`number`

子控件的个数。

#### Inherited from

[`TEdit`](TEdit.md).[`countChildren`](TEdit.md#countchildren)

***

### countOptions()

> **countOptions**(): `number`

Defined in: [awtk.ts:30969](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L30969)

获取选项个数。

#### Returns

`number`

返回选项个数。

***

### createAnimator()

> **createAnimator**(`animation`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11677](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11677)

创建动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 除非指定auto_start=false，动画创建后自动启动。
* 除非指定auto_destroy=false，动画播放完成后自动销毁。

#### Parameters

##### animation

`string`

动画参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`createAnimator`](TEdit.md#createanimator)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12553](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12553)

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`destroy`](TEdit.md#destroy)

***

### destroyAnimator()

> **destroyAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11763](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11763)

销毁动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，销毁所有名称为name的动画。
* 2.name为NULL时，销毁所有widget相关的动画。
* 3.widget和name均为NULL，销毁所有动画。

#### Parameters

##### name

`string`

动画名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`destroyAnimator`](TEdit.md#destroyanimator)

***

### destroyAsync()

> **destroyAsync**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12566](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12566)

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`destroyAsync`](TEdit.md#destroyasync)

***

### destroyChildren()

> **destroyChildren**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11909](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11909)

销毁全部子控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`destroyChildren`](TEdit.md#destroychildren)

***

### dispatchToKeyTarget()

> **dispatchToKeyTarget**(`e`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12653](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12653)

递归的分发一个事件到所有key_target子控件。

#### Parameters

##### e

[`TEvent`](TEvent.md)

事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`dispatchToKeyTarget`](TEdit.md#dispatchtokeytarget)

***

### dispatchToTarget()

> **dispatchToTarget**(`e`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12641](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12641)

递归的分发一个事件到所有target子控件。

#### Parameters

##### e

[`TEvent`](TEvent.md)

事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`dispatchToTarget`](TEdit.md#dispatchtotarget)

***

### equal()

> **equal**(`other`): `boolean`

Defined in: [awtk.ts:12528](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12528)

判断两个widget是否相同。

#### Parameters

##### other

[`TWidget`](TWidget.md)

要比较的控件对象。

#### Returns

`boolean`

返回TRUE表示相同，否则表示不同。

#### Inherited from

[`TEdit`](TEdit.md).[`equal`](TEdit.md#equal)

***

### fillBgRect()

> **fillBgRect**(`c`, `r`, `draw_type`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12615](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12615)

根据控件的style绘制背景矩形。

#### Parameters

##### c

[`TCanvas`](TCanvas.md)

画布对象。

##### r

[`TRect`](TRect.md)

矩形区域。

##### draw\_type

[`TImageDrawType`](../enumerations/TImageDrawType.md)

图片缺省绘制方式。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`fillBgRect`](TEdit.md#fillbgrect)

***

### fillFgRect()

> **fillFgRect**(`c`, `r`, `draw_type`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12629](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12629)

根据控件的style绘制前景矩形。

#### Parameters

##### c

[`TCanvas`](TCanvas.md)

画布对象。

##### r

[`TRect`](TRect.md)

矩形区域。

##### draw\_type

[`TImageDrawType`](../enumerations/TImageDrawType.md)

图片缺省绘制方式。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`fillFgRect`](TEdit.md#fillfgrect)

***

### findParentByName()

> **findParentByName**(`name`): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11082](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11082)

通过名称查找父控件。

#### Parameters

##### name

`string`

名称。

#### Returns

[`TWidget`](TWidget.md)

父控件。

#### Inherited from

[`TEdit`](TEdit.md).[`findParentByName`](TEdit.md#findparentbyname)

***

### findParentByType()

> **findParentByType**(`type`): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11094](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11094)

通过类型查找父控件。

#### Parameters

##### type

`string`

类型。

#### Returns

[`TWidget`](TWidget.md)

父控件。

#### Inherited from

[`TEdit`](TEdit.md).[`findParentByType`](TEdit.md#findparentbytype)

***

### focusNext()

> **focusNext**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12710](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12710)

把焦点移动下一个控件。

>widget必须是当前焦点控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`focusNext`](TEdit.md#focusnext)

***

### focusPrev()

> **focusPrev**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12723](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12723)

把焦点移动前一个控件。

>widget必须是当前焦点控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`focusPrev`](TEdit.md#focusprev)

***

### foreach()

> **foreach**(`visit`, `ctx`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12471](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12471)

遍历当前控件及子控件。

#### Parameters

##### visit

`Function`

遍历的回调函数。

##### ctx

`any`

回调函数的上下文。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`foreach`](TEdit.md#foreach)

***

### getAutoAdjustSize()

> **getAutoAdjustSize**(): `boolean`

Defined in: [awtk.ts:11530](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11530)

获取控件auto_adjust_size属性值。

#### Returns

`boolean`

返回auto_adjust_size。

#### Inherited from

[`TEdit`](TEdit.md).[`getAutoAdjustSize`](TEdit.md#getautoadjustsize)

***

### getChild()

> **getChild**(`index`): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11070](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11070)

获取指定索引的子控件。

#### Parameters

##### index

`number`

索引。

#### Returns

[`TWidget`](TWidget.md)

子控件。

#### Inherited from

[`TEdit`](TEdit.md).[`getChild`](TEdit.md#getchild)

***

### getCursor()

> **getCursor**(): `number`

Defined in: [awtk.ts:26778](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26778)

获取输入框的光标位置。

#### Returns

`number`

返回光标位置。

#### Inherited from

[`TEdit`](TEdit.md).[`getCursor`](TEdit.md#getcursor)

***

### getDouble()

> **getDouble**(): `number`

Defined in: [awtk.ts:26518](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26518)

获取double类型的值。

#### Returns

`number`

返回double的值。

#### Inherited from

[`TEdit`](TEdit.md).[`getDouble`](TEdit.md#getdouble)

***

### getEnable()

> **getEnable**(): `boolean`

Defined in: [awtk.ts:11508](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11508)

获取控件enable属性值。

#### Returns

`boolean`

返回enable。

#### Inherited from

[`TEdit`](TEdit.md).[`getEnable`](TEdit.md#getenable)

***

### getFeedback()

> **getFeedback**(): `boolean`

Defined in: [awtk.ts:11585](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11585)

获取控件feedback属性值。

#### Returns

`boolean`

返回feedback。

#### Inherited from

[`TEdit`](TEdit.md).[`getFeedback`](TEdit.md#getfeedback)

***

### getFloating()

> **getFloating**(): `boolean`

Defined in: [awtk.ts:11519](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11519)

获取控件floating属性值。

#### Returns

`boolean`

返回floating。

#### Inherited from

[`TEdit`](TEdit.md).[`getFloating`](TEdit.md#getfloating)

***

### getFocusable()

> **getFocusable**(): `boolean`

Defined in: [awtk.ts:11552](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11552)

获取控件focusable属性值。

#### Returns

`boolean`

返回focusable。

#### Inherited from

[`TEdit`](TEdit.md).[`getFocusable`](TEdit.md#getfocusable)

***

### getFocusedWidget()

> **getFocusedWidget**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11105](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11105)

获取当前窗口中的焦点控件。

#### Returns

[`TWidget`](TWidget.md)

焦点控件。

#### Inherited from

[`TEdit`](TEdit.md).[`getFocusedWidget`](TEdit.md#getfocusedwidget)

***

### getInt()

> **getInt**(): `number`

Defined in: [awtk.ts:26496](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26496)

获取int类型的值。

#### Returns

`number`

返回int的值。

#### Inherited from

[`TEdit`](TEdit.md).[`getInt`](TEdit.md#getint)

***

### getInt64()

> **getInt64**(): `number`

Defined in: [awtk.ts:26507](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26507)

获取int64类型的值。

#### Returns

`number`

返回int的值。

#### Inherited from

[`TEdit`](TEdit.md).[`getInt64`](TEdit.md#getint64)

***

### getNativeWindow()

> **getNativeWindow**(): [`TNativeWindow`](TNativeWindow.md)

Defined in: [awtk.ts:11116](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11116)

获取原生窗口对象。

#### Returns

[`TNativeWindow`](TNativeWindow.md)

原生窗口对象。

#### Inherited from

[`TEdit`](TEdit.md).[`getNativeWindow`](TEdit.md#getnativewindow)

***

### getProp()

> **getProp**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12086](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12086)

获取控件指定属性的值。

#### Parameters

##### name

`string`

属性的名称。

##### v

[`TValue`](TValue.md)

返回属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`getProp`](TEdit.md#getprop)

***

### getPropBool()

> **getPropBool**(`name`, `defval`): `boolean`

Defined in: [awtk.ts:12241](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12241)

获取布尔格式的属性。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`boolean`

缺省值。

#### Returns

`boolean`

返回属性的值。

#### Inherited from

[`TEdit`](TEdit.md).[`getPropBool`](TEdit.md#getpropbool)

***

### getPropFloat()

> **getPropFloat**(`name`, `defval`): `number`

Defined in: [awtk.ts:12189](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12189)

获取浮点数格式的属性。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回属性的值。

#### Inherited from

[`TEdit`](TEdit.md).[`getPropFloat`](TEdit.md#getpropfloat)

***

### getPropInt()

> **getPropInt**(`name`, `defval`): `number`

Defined in: [awtk.ts:12215](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12215)

获取整数格式的属性。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`number`

缺省值。

#### Returns

`number`

返回属性的值。

#### Inherited from

[`TEdit`](TEdit.md).[`getPropInt`](TEdit.md#getpropint)

***

### getPropPointer()

> **getPropPointer**(`name`): `any`

Defined in: [awtk.ts:12163](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12163)

获取指针格式的属性。

#### Parameters

##### name

`string`

属性的名称。

#### Returns

`any`

返回属性的值。

#### Inherited from

[`TEdit`](TEdit.md).[`getPropPointer`](TEdit.md#getproppointer)

***

### getPropStr()

> **getPropStr**(`name`, `defval`): `string`

Defined in: [awtk.ts:12138](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12138)

获取字符串格式的属性。

#### Parameters

##### name

`string`

属性的名称。

##### defval

`string`

缺省值。

#### Returns

`string`

返回属性的值。

#### Inherited from

[`TEdit`](TEdit.md).[`getPropStr`](TEdit.md#getpropstr)

***

### getSelectedText()

> **getSelectedText**(): `string`

Defined in: [awtk.ts:26803](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26803)

获取选中的文本。
使用完后需调用 TKMEM_FREE() 进行释放文本占有内存。

#### Returns

`string`

返回选中文本。

#### Inherited from

[`TEdit`](TEdit.md).[`getSelectedText`](TEdit.md#getselectedtext)

***

### getSensitive()

> **getSensitive**(): `boolean`

Defined in: [awtk.ts:11563](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11563)

获取控件sensitive属性值。

#### Returns

`boolean`

返回sensitive。

#### Inherited from

[`TEdit`](TEdit.md).[`getSensitive`](TEdit.md#getsensitive)

***

### getStateForStyle()

> **getStateForStyle**(`active`, `checked`): `string`

Defined in: [awtk.ts:12736](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12736)

把控件的状态转成获取style选要的状态，一般只在子类中使用。

#### Parameters

##### active

`boolean`

控件是否为当前项。

##### checked

`boolean`

控件是否为选中项。

#### Returns

`string`

返回状态值。

#### Inherited from

[`TEdit`](TEdit.md).[`getStateForStyle`](TEdit.md#getstateforstyle)

***

### getStyleType()

> **getStyleType**(): `string`

Defined in: [awtk.ts:12664](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12664)

获取 widget 对应风格类型

#### Returns

`string`

返回 widget 的对应风格类型。

#### Inherited from

[`TEdit`](TEdit.md).[`getStyleType`](TEdit.md#getstyletype)

***

### getText()

> **getText**(): `any`

Defined in: [awtk.ts:11601](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11601)

获取控件的文本。
只是对widget\_get\_prop的包装，文本的意义由子类控件决定。

如果希望获取UTF8格式的文本，可以参考下面的代码：

#### Returns

`any`

返回文本。

#### Inherited from

[`TEdit`](TEdit.md).[`getText`](TEdit.md#gettext)

***

### getTextOfSelected()

> **getTextOfSelected**(): `string`

Defined in: [awtk.ts:31123](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31123)

获取combo_box当前选中项目的文本(原生非翻译的文本)。

#### Returns

`string`

返回文本。

***

### getTextValue()

> **getTextValue**(): `string`

Defined in: [awtk.ts:31112](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31112)

获取combo_box的文本(可能是翻译后的文本)。

#### Returns

`string`

返回文本。

***

### getThemeName()

> **getThemeName**(): `string`

Defined in: [awtk.ts:11636](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11636)

获取 theme 的名称

#### Returns

`string`

成功返回主题名称，失败否则 NULL。

#### Inherited from

[`TEdit`](TEdit.md).[`getThemeName`](TEdit.md#getthemename)

***

### getType()

> **getType**(): `string`

Defined in: [awtk.ts:12504](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12504)

获取当前控件的类型名称。

#### Returns

`string`

返回类型名。

#### Inherited from

[`TEdit`](TEdit.md).[`getType`](TEdit.md#gettype)

***

### getValue()

> **getValue**(): `number`

Defined in: [awtk.ts:11250](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11250)

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[`TEdit`](TEdit.md).[`getValue`](TEdit.md#getvalue)

***

### getValueInt()

> **getValueInt**(): `number`

Defined in: [awtk.ts:31089](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31089)

获取combo_box的值。

#### Returns

`number`

返回值。

#### Overrides

[`TEdit`](TEdit.md).[`getValueInt`](TEdit.md#getvalueint)

***

### getVisible()

> **getVisible**(): `boolean`

Defined in: [awtk.ts:11574](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11574)

获取控件visible属性值。

#### Returns

`boolean`

返回visible。

#### Inherited from

[`TEdit`](TEdit.md).[`getVisible`](TEdit.md#getvisible)

***

### getWindow()

> **getWindow**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:12482](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12482)

获取当前控件所在的窗口。

#### Returns

[`TWidget`](TWidget.md)

窗口对象。

#### Inherited from

[`TEdit`](TEdit.md).[`getWindow`](TEdit.md#getwindow)

***

### getWindowManager()

> **getWindowManager**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:12493](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12493)

获取当前的窗口管理器。

#### Returns

[`TWidget`](TWidget.md)

窗口管理器对象。

#### Inherited from

[`TEdit`](TEdit.md).[`getWindowManager`](TEdit.md#getwindowmanager)

***

### getWithFocusState()

> **getWithFocusState**(): `boolean`

Defined in: [awtk.ts:11541](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11541)

获取控件with_focus_state属性值。

#### Returns

`boolean`

返回with_focus_state。

#### Inherited from

[`TEdit`](TEdit.md).[`getWithFocusState`](TEdit.md#getwithfocusstate)

***

### hasHighlighter()

> **hasHighlighter**(): `boolean`

Defined in: [awtk.ts:11404](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11404)

判断widget拥有高亮属性。

#### Returns

`boolean`

拥有返回 TRUE，没有返回 FALSE。

#### Inherited from

[`TEdit`](TEdit.md).[`hasHighlighter`](TEdit.md#hashighlighter)

***

### hasOptionText()

> **hasOptionText**(`text`): `boolean`

Defined in: [awtk.ts:31101](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31101)

检查选项中是否存在指定的文本。

#### Parameters

##### text

`string`

option text

#### Returns

`boolean`

返回TRUE表示存在，否则表示不存在。

***

### indexOf()

> **indexOf**(): `number`

Defined in: [awtk.ts:11127](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11127)

获取控件在父控件中的索引编号。

#### Returns

`number`

在父控件中的索引编号。

#### Inherited from

[`TEdit`](TEdit.md).[`indexOf`](TEdit.md#indexof)

***

### insertChild()

> **insertChild**(`index`, `child`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11946](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11946)

插入子控件到指定的位置。

#### Parameters

##### index

`number`

位置序数(大于等于总个数，则放到最后)。

##### child

[`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`insertChild`](TEdit.md#insertchild)

***

### invalidateForce()

> **invalidateForce**(`r`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12073](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12073)

请求强制重绘控件。

#### Parameters

##### r

[`TRect`](TRect.md)

矩形对象(widget本地坐标)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`invalidateForce`](TEdit.md#invalidateforce)

***

### isAlwaysOnTop()

> **isAlwaysOnTop**(): `boolean`

Defined in: [awtk.ts:12375](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12375)

检查控件是否总在最上层。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TEdit`](TEdit.md).[`isAlwaysOnTop`](TEdit.md#isalwaysontop)

***

### isDesigningWindow()

> **isDesigningWindow**(): `boolean`

Defined in: [awtk.ts:12447](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12447)

判断当前控件是否是设计窗口。

#### Returns

`boolean`

返回当前控件是否是设计窗口。

#### Inherited from

[`TEdit`](TEdit.md).[`isDesigningWindow`](TEdit.md#isdesigningwindow)

***

### isDialog()

> **isDialog**(): `boolean`

Defined in: [awtk.ts:12342](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12342)

检查控件是否是对话框类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TEdit`](TEdit.md).[`isDialog`](TEdit.md#isdialog)

***

### isDirectParentOf()

> **isDirectParentOf**(`child`): `boolean`

Defined in: [awtk.ts:12287](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12287)

判断当前控件是否是指定控件的直系父控件。

#### Parameters

##### child

[`TWidget`](TWidget.md)

控件对象。

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Inherited from

[`TEdit`](TEdit.md).[`isDirectParentOf`](TEdit.md#isdirectparentof)

***

### isFullscreenWindow()

> **isFullscreenWindow**(): `boolean`

Defined in: [awtk.ts:12331](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12331)

检查控件是否是全屏窗口。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TEdit`](TEdit.md).[`isFullscreenWindow`](TEdit.md#isfullscreenwindow)

***

### isKeyboard()

> **isKeyboard**(): `boolean`

Defined in: [awtk.ts:12436](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12436)

判断当前控件是否是keyboard。

> keyboard收到pointer事件时，不会让当前控件失去焦点。

在自定义软键盘时，将所有按钮放到一个容器当中，并设置为is_keyboard。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TEdit`](TEdit.md).[`isKeyboard`](TEdit.md#iskeyboard)

***

### isNormalWindow()

> **isNormalWindow**(): `boolean`

Defined in: [awtk.ts:12320](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12320)

检查控件是否是普通窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TEdit`](TEdit.md).[`isNormalWindow`](TEdit.md#isnormalwindow)

***

### isOpenedDialog()

> **isOpenedDialog**(): `boolean`

Defined in: [awtk.ts:12408](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12408)

检查控件弹出对话框控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TEdit`](TEdit.md).[`isOpenedDialog`](TEdit.md#isopeneddialog)

***

### isOpenedPopup()

> **isOpenedPopup**(): `boolean`

Defined in: [awtk.ts:12419](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12419)

检查控件弹出窗口控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TEdit`](TEdit.md).[`isOpenedPopup`](TEdit.md#isopenedpopup)

***

### isOverlay()

> **isOverlay**(): `boolean`

Defined in: [awtk.ts:12364](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12364)

检查控件是否是overlay窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TEdit`](TEdit.md).[`isOverlay`](TEdit.md#isoverlay)

***

### isParentOf()

> **isParentOf**(`child`): `boolean`

Defined in: [awtk.ts:12275](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12275)

判断当前控件是否是指定控件的父控件(包括非直系)。

#### Parameters

##### child

[`TWidget`](TWidget.md)

控件对象。

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Inherited from

[`TEdit`](TEdit.md).[`isParentOf`](TEdit.md#isparentof)

***

### isPopup()

> **isPopup**(): `boolean`

Defined in: [awtk.ts:12353](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12353)

检查控件是否是弹出窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TEdit`](TEdit.md).[`isPopup`](TEdit.md#ispopup)

***

### isStyleExist()

> **isStyleExist**(`style_name`, `state_name`): `boolean`

Defined in: [awtk.ts:11382](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11382)

查询指定的style是否存在。

#### Parameters

##### style\_name

`string`

style的名称（如果为 NULL，则默认为 default）。

##### state\_name

`string`

state的名称（如果为 NULL，则默认为 normal）。

#### Returns

`boolean`

存在返回 TRUE，不存在返回 FALSE。

#### Inherited from

[`TEdit`](TEdit.md).[`isStyleExist`](TEdit.md#isstyleexist)

***

### isSupportHighlighter()

> **isSupportHighlighter**(): `boolean`

Defined in: [awtk.ts:11393](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11393)

判断widget是否支持高亮。

#### Returns

`boolean`

支持返回 TRUE，不支持返回 FALSE。

#### Inherited from

[`TEdit`](TEdit.md).[`isSupportHighlighter`](TEdit.md#issupporthighlighter)

***

### isSuspendDialog()

> **isSuspendDialog**(): `boolean`

Defined in: [awtk.ts:12386](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12386)

检查控件弹出对话框控件是否是挂起状态。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TEdit`](TEdit.md).[`isSuspendDialog`](TEdit.md#issuspenddialog)

***

### isSuspendPopup()

> **isSuspendPopup**(): `boolean`

Defined in: [awtk.ts:12397](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12397)

检查控件弹出窗口控件是否是挂起状态。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TEdit`](TEdit.md).[`isSuspendPopup`](TEdit.md#issuspendpopup)

***

### isSystemBar()

> **isSystemBar**(): `boolean`

Defined in: [awtk.ts:12309](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12309)

检查控件是否是system bar类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TEdit`](TEdit.md).[`isSystemBar`](TEdit.md#issystembar)

***

### isWindow()

> **isWindow**(): `boolean`

Defined in: [awtk.ts:12298](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12298)

判断当前控件是否是窗口。

#### Returns

`boolean`

返回当前控件是否是窗口。

#### Inherited from

[`TEdit`](TEdit.md).[`isWindow`](TEdit.md#iswindow)

***

### isWindowCreated()

> **isWindowCreated**(): `boolean`

Defined in: [awtk.ts:12263](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12263)

判断窗口及子控件创建或加载是否完成。

#### Returns

`boolean`

返回创建或加载是否完成。

#### Inherited from

[`TEdit`](TEdit.md).[`isWindowCreated`](TEdit.md#iswindowcreated)

***

### isWindowManager()

> **isWindowManager**(): `boolean`

Defined in: [awtk.ts:12458](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12458)

判断当前控件是否是窗口管理器。

#### Returns

`boolean`

返回当前控件是否是窗口管理器。

#### Inherited from

[`TEdit`](TEdit.md).[`isWindowManager`](TEdit.md#iswindowmanager)

***

### isWindowOpened()

> **isWindowOpened**(): `boolean`

Defined in: [awtk.ts:12252](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12252)

判断当前控件所在的窗口是否已经打开。

#### Returns

`boolean`

返回当前控件所在的窗口是否已经打开。

#### Inherited from

[`TEdit`](TEdit.md).[`isWindowOpened`](TEdit.md#iswindowopened)

***

### layout()

> **layout**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12747](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12747)

布局当前控件及子控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`layout`](TEdit.md#layout)

***

### lookup()

> **lookup**(`name`, `recursive`): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11983](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11983)

查找指定名称的子控件(返回第一个)。

#### Parameters

##### name

`string`

子控件的名称。

##### recursive

`boolean`

是否递归查找全部子控件。

#### Returns

[`TWidget`](TWidget.md)

子控件或NULL。

#### Inherited from

[`TEdit`](TEdit.md).[`lookup`](TEdit.md#lookup)

***

### lookupByType()

> **lookupByType**(`type`, `recursive`): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11996](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11996)

查找指定类型的子控件(返回第一个)。

#### Parameters

##### type

`string`

子控件的名称。

##### recursive

`boolean`

是否递归查找全部子控件。

#### Returns

[`TWidget`](TWidget.md)

子控件或NULL。

#### Inherited from

[`TEdit`](TEdit.md).[`lookupByType`](TEdit.md#lookupbytype)

***

### move()

> **move**(`x`, `y`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11184](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11184)

移动控件。

#### Parameters

##### x

`number`

x坐标

##### y

`number`

y坐标

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`move`](TEdit.md#move)

***

### moveResize()

> **moveResize**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11223](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11223)

移动控件并调整控件的大小。

#### Parameters

##### x

`number`

x坐标

##### y

`number`

y坐标

##### w

`number`

宽度

##### h

`number`

高度

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`moveResize`](TEdit.md#moveresize)

***

### moveResizeEx()

> **moveResizeEx**(`x`, `y`, `w`, `h`, `update_layout`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11239](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11239)

移动控件并调整控件的大小。

#### Parameters

##### x

`number`

x坐标

##### y

`number`

y坐标

##### w

`number`

宽度

##### h

`number`

高度

##### update\_layout

`boolean`

是否更新布局

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`moveResizeEx`](TEdit.md#moveresizeex)

***

### moveToCenter()

> **moveToCenter**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11195](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11195)

移动控件到父控件中间。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`moveToCenter`](TEdit.md#movetocenter)

***

### off()

> **off**(`id`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12061](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12061)

注销指定事件的处理函数。

#### Parameters

##### id

`number`

widget_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`off`](TEdit.md#off)

***

### on()

> **on**(`type`, `on_event`, `ctx`): `number`

Defined in: [awtk.ts:12049](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12049)

注册指定事件的处理函数。
使用示例：

#### Parameters

##### type

`number`

事件类型。

##### on\_event

`Function`

事件处理函数。

##### ctx

`any`

事件处理函数上下文。

#### Returns

`number`

返回id，用于widget_off。

#### Inherited from

[`TEdit`](TEdit.md).[`on`](TEdit.md#on)

***

### pauseAnimator()

> **pauseAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11729](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11729)

暂停动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，暂停所有名称为name的动画。
* 2.name为NULL时，暂停所有widget相关的动画。
* 3.widget和name均为NULL，暂停所有动画。

#### Parameters

##### name

`string`

动画名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`pauseAnimator`](TEdit.md#pauseanimator)

***

### ref()

> **ref**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:12577](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12577)

增加控件的引用计数。

#### Returns

[`TWidget`](TWidget.md)

返回控件对象。

#### Inherited from

[`TEdit`](TEdit.md).[`ref`](TEdit.md#ref)

***

### removeChild()

> **removeChild**(`child`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11933](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11933)

移出指定的子控件(并不销毁)。

#### Parameters

##### child

[`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`removeChild`](TEdit.md#removechild)

***

### removeOption()

> **removeOption**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:31054](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31054)

删除第一个值为value的选项。

#### Parameters

##### value

`any`

选项的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### removeOptionByIndex()

> **removeOptionByIndex**(`index`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:31066](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31066)

删除指定序数的选项。

#### Parameters

##### index

`number`

选项的序数(0表示第一个)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### resetOptions()

> **resetOptions**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:30958](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L30958)

重置所有选项。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### resize()

> **resize**(`w`, `h`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11208](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11208)

调整控件的大小。

#### Parameters

##### w

`number`

宽度

##### h

`number`

高度

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`resize`](TEdit.md#resize)

***

### restack()

> **restack**(`index`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11958](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11958)

调整控件在父控件中的位置序数。

#### Parameters

##### index

`number`

位置序数(大于等于总个数，则放到最后)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`restack`](TEdit.md#restack)

***

### setActionText()

> **setActionText**(`action_text`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26695](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26695)

设置软键盘上action按钮的文本。

#### Parameters

##### action\_text

`string`

软键盘上action按钮的文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setActionText`](TEdit.md#setactiontext)

***

### setAnimation()

> **setAnimation**(`animation`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11661](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11661)

设置控件的动画参数(仅用于在UI文件使用)。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

#### Parameters

##### animation

`string`

动画参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setAnimation`](TEdit.md#setanimation)

***

### setAnimatorTimeScale()

> **setAnimatorTimeScale**(`name`, `time_scale`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11712](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11712)

设置动画的时间倍率，<0: 时间倒退，<1: 时间变慢，>1 时间变快。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，设置所有名称为name的动画的时间倍率。
* 2.name为NULL时，设置所有widget相关的动画的时间倍率。
* 3.widget和name均为NULL，设置所有动画的时间倍率。

#### Parameters

##### name

`string`

动画名称。

##### time\_scale

`number`

时间倍率。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setAnimatorTimeScale`](TEdit.md#setanimatortimescale)

***

### setAsKeyTarget()

> **setAsKeyTarget**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12697](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12697)

递归的把父控件的key_target设置为自己。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setAsKeyTarget`](TEdit.md#setaskeytarget)

***

### setAutoAdjustSize()

> **setAutoAdjustSize**(`auto_adjust_size`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11799](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11799)

设置控件是否根据子控件和文本自动调整控件自身大小。

#### Parameters

##### auto\_adjust\_size

`boolean`

是否根据子控件和文本自动调整控件自身大小。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setAutoAdjustSize`](TEdit.md#setautoadjustsize)

***

### setAutoFix()

> **setAutoFix**(`auto_fix`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26632](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26632)

设置编辑器是否为自动改正。

#### Parameters

##### auto\_fix

`boolean`

自动改正。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setAutoFix`](TEdit.md#setautofix)

***

### setCancelable()

> **setCancelable**(`cancelable`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26620](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26620)

设置编辑器是否为可撤销修改。

#### Parameters

##### cancelable

`boolean`

是否为可撤销修。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setCancelable`](TEdit.md#setcancelable)

***

### setChildrenLayout()

> **setChildrenLayout**(`params`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12773](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12773)

设置子控件的布局参数。
备注：下一帧才会生效数据

#### Parameters

##### params

`string`

布局参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setChildrenLayout`](TEdit.md#setchildrenlayout)

***

### setChildText()

> **setChildText**(`name`, `text`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11455](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11455)

设置子控件的文本。
只是对widget\_set\_prop的包装，文本的意义由子类控件决定。

#### Parameters

##### name

`string`

子控件的名称。

##### text

`string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setChildText`](TEdit.md#setchildtext)

***

### setChildTextWithDouble()

> **setChildTextWithDouble**(`name`, `format`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11470](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11470)

用一个浮点数去设置子控件的文本。
只是对widget\_set\_prop的包装，文本的意义由子类控件决定。

#### Parameters

##### name

`string`

子控件的名称。

##### format

`string`

格式字符串(如："%2.2lf")。

##### value

`any`

浮点数值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setChildTextWithDouble`](TEdit.md#setchildtextwithdouble)

***

### setChildTextWithInt()

> **setChildTextWithInt**(`name`, `format`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11485](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11485)

用一个整数去设置子控件的文本。
只是对widget\_set\_prop的包装，文本的意义由子类控件决定。

#### Parameters

##### name

`string`

子控件的名称。

##### format

`string`

格式字符串(如："%d")。

##### value

`any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setChildTextWithInt`](TEdit.md#setchildtextwithint)

***

### setCloseImWhenBlured()

> **setCloseImWhenBlured**(`close_im_when_blured`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26671](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26671)

设置编辑器是否在失去焦点时关闭输入法。

#### Parameters

##### close\_im\_when\_blured

`boolean`

是否是否在失去焦点时关闭输入法。在失去焦点时关闭输入法。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setCloseImWhenBlured`](TEdit.md#setcloseimwhenblured)

***

### setCursor()

> **setCursor**(`cursor`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26767](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26767)

设置输入框的光标位置。

#### Parameters

##### cursor

`number`

光标位置。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setCursor`](TEdit.md#setcursor)

***

### setDirtyRectTolerance()

> **setDirtyRectTolerance**(`dirty_rect_tolerance`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11898](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11898)

设置控件脏矩形超出控件本身大小的最大范围(一般不用指定)。

#### Parameters

##### dirty\_rect\_tolerance

`number`

控件脏脏矩形超出控件本身大小的最大范。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setDirtyRectTolerance`](TEdit.md#setdirtyrecttolerance)

***

### setDouble()

> **setDouble**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26542](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26542)

设置double类型的值。

#### Parameters

##### value

`any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setDouble`](TEdit.md#setdouble)

***

### setDoubleEx()

> **setDoubleEx**(`format`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26555](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26555)

设置double类型的值。

#### Parameters

##### format

`string`

格式(缺省为"%2.2lf")。

##### value

`any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setDoubleEx`](TEdit.md#setdoubleex)

***

### setEnable()

> **setEnable**(`enable`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11775](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11775)

设置控件的可用性。

#### Parameters

##### enable

`boolean`

是否可用性。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setEnable`](TEdit.md#setenable)

***

### setFeedback()

> **setFeedback**(`feedback`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11787](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11787)

设置控件是否启用反馈。

#### Parameters

##### feedback

`boolean`

是否启用反馈。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setFeedback`](TEdit.md#setfeedback)

***

### setFloating()

> **setFloating**(`floating`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11812](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11812)

设置控件的floating标志。
> floating的控件不受父控件的子控件布局参数的影响。

#### Parameters

##### floating

`boolean`

是否启用floating布局。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setFloating`](TEdit.md#setfloating)

***

### setFloatLimit()

> **setFloatLimit**(`min`, `max`, `step`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26596](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26596)

设置为浮点数输入及取值范围。

#### Parameters

##### min

`number`

最小值。

##### max

`number`

最大值。

##### step

`number`

步长。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setFloatLimit`](TEdit.md#setfloatlimit)

***

### setFocus()

> **setFocus**(`focus`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26755](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26755)

设置为焦点。

#### Parameters

##### focus

`boolean`

是否为焦点。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setFocus`](TEdit.md#setfocus)

***

### setFocusable()

> **setFocusable**(`focusable`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11836](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11836)

设置控件是否可获得焦点。

#### Parameters

##### focusable

`boolean`

是否可获得焦点。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setFocusable`](TEdit.md#setfocusable)

***

### setFocused()

> **setFocused**(`focused`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11824](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11824)

设置控件是否获得焦点。

#### Parameters

##### focused

`boolean`

是否获得焦点。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setFocused`](TEdit.md#setfocused)

***

### setFocusNextWhenEnter()

> **setFocusNextWhenEnter**(`focus_next_when_enter`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26815](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26815)

设置输入回车后是否跳到下一个控件中。

#### Parameters

##### focus\_next\_when\_enter

`boolean`

是否跳入下一个控件中。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setFocusNextWhenEnter`](TEdit.md#setfocusnextwhenenter)

***

### setInputType()

> **setInputType**(`type`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26683](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26683)

设置编辑器的输入类型。

#### Parameters

##### type

[`TInputType`](../enumerations/TInputType.md)

输入类型。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setInputType`](TEdit.md#setinputtype)

***

### setInt()

> **setInt**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26530](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26530)

设置int类型的值。

#### Parameters

##### value

`any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setInt`](TEdit.md#setint)

***

### setIntLimit()

> **setIntLimit**(`min`, `max`, `step`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26582](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26582)

设置为整数输入及取值范围。

#### Parameters

##### min

`number`

最小值。

##### max

`number`

最大值。

##### step

`number`

步长。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setIntLimit`](TEdit.md#setintlimit)

***

### setItemHeight()

> **setItemHeight**(`item_height`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:31029](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31029)

设置item高度。

#### Parameters

##### item\_height

`number`

item的高度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setKeyboard()

> **setKeyboard**(`keyboard`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26731](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26731)

设置自定义软键盘名称。

#### Parameters

##### keyboard

`string`

键盘名称(相应UI资源必须存在)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setKeyboard`](TEdit.md#setkeyboard)

***

### setLocalizeOptions()

> **setLocalizeOptions**(`localize_options`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:31005](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31005)

设置是否本地化(翻译)选项。

#### Parameters

##### localize\_options

`boolean`

是否本地化(翻译)选项。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setName()

> **setName**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11613](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11613)

设置控件的名称。

#### Parameters

##### name

`string`

名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setName`](TEdit.md#setname)

***

### setOpacity()

> **setOpacity**(`opacity`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11886](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11886)

设置控件的不透明度。

>在嵌入式平台，半透明效果会使性能大幅下降，请谨慎使用。

#### Parameters

##### opacity

`number`

不透明度(取值0-255，0表示完全透明，255表示完全不透明)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setOpacity`](TEdit.md#setopacity)

***

### setOpenImWhenFocused()

> **setOpenImWhenFocused**(`open_im_when_focused`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26659](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26659)

设置编辑器是否在获得焦点时打开输入法。

> * 设置默认焦点时，打开窗口时不弹出软键盘。
> * 用键盘切换焦点时，编辑器获得焦点时不弹出软键盘。

#### Parameters

##### open\_im\_when\_focused

`boolean`

是否在获得焦点时打开输入法。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setOpenImWhenFocused`](TEdit.md#setopenimwhenfocused)

***

### setOpenWindow()

> **setOpenWindow**(`open_window`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:30935](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L30935)

点击按钮时可以打开popup窗口，本函数可设置窗口的名称。

#### Parameters

##### open\_window

`string`

弹出窗口的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setOptions()

> **setOptions**(`options`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:31078](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31078)

设置选项。

#### Parameters

##### options

`string`

选项。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setPasswordVisible()

> **setPasswordVisible**(`password_visible`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26743](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26743)

当编辑器输入类型为密码时，设置密码是否可见。

#### Parameters

##### password\_visible

`boolean`

密码是否可见。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setPasswordVisible`](TEdit.md#setpasswordvisible)

***

### setPointerCursor()

> **setPointerCursor**(`cursor`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11648](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11648)

设置鼠标指针的图片名。

#### Parameters

##### cursor

`string`

图片名称(无扩展名)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setPointerCursor`](TEdit.md#setpointercursor)

***

### setProp()

> **setProp**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12099](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12099)

设置控件指定属性的值。

#### Parameters

##### name

`string`

属性的名称。

##### v

[`TValue`](TValue.md)

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setProp`](TEdit.md#setprop)

***

### setPropBool()

> **setPropBool**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12228](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12228)

设置布尔格式的属性。

#### Parameters

##### name

`string`

属性的名称。

##### v

`boolean`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setPropBool`](TEdit.md#setpropbool)

***

### setPropFloat()

> **setPropFloat**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12176](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12176)

设置浮点数格式的属性。

#### Parameters

##### name

`string`

属性的名称。

##### v

`number`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setPropFloat`](TEdit.md#setpropfloat)

***

### setPropInt()

> **setPropInt**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12202](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12202)

设置整数格式的属性。

#### Parameters

##### name

`string`

属性的名称。

##### v

`number`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setPropInt`](TEdit.md#setpropint)

***

### setPropPointer()

> **setPropPointer**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12151](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12151)

设置指针格式的属性。

#### Parameters

##### name

`string`

属性的名称。

##### v

`any`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setPropPointer`](TEdit.md#setproppointer)

***

### setProps()

> **setProps**(`params`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12112](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12112)

设置多个参数。
>参数之间用&分隔，名称和值之间用=分隔。如: name=awtk&min=10&max=100

#### Parameters

##### params

`string`

参数列表。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setProps`](TEdit.md#setprops)

***

### setPropStr()

> **setPropStr**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12125](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12125)

设置字符串格式的属性。

#### Parameters

##### name

`string`

属性的名称。

##### v

`string`

属性的值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setPropStr`](TEdit.md#setpropstr)

***

### setReadonly()

> **setReadonly**(`readonly`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26608](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26608)

设置编辑器是否为只读。

#### Parameters

##### readonly

`boolean`

只读。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setReadonly`](TEdit.md#setreadonly)

***

### setScrollToBeginOnBlur()

> **setScrollToBeginOnBlur**(`scroll_to_begin_on_blur`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26827](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26827)

设置编辑器是否在失去焦点时滚动回开头。

#### Parameters

##### scroll\_to\_begin\_on\_blur

`boolean`

是否在失去焦点时滚动回开头。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setScrollToBeginOnBlur`](TEdit.md#setscrolltobeginonblur)

***

### setSelect()

> **setSelect**(`start`, `end`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26791](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26791)

选择指定范围的文本。

#### Parameters

##### start

`number`

起始偏移。

##### end

`number`

结束偏移。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setSelect`](TEdit.md#setselect)

***

### setSelectedIndex()

> **setSelectedIndex**(`index`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:30981](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L30981)

设置第index个选项为当前选中的选项。

#### Parameters

##### index

`number`

选项的索引。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setSelectedIndexByText()

> **setSelectedIndexByText**(`text`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:30993](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L30993)

根据文本设置当前选中的选项。

#### Parameters

##### text

`string`

原生(非翻译的文本)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setSelectNoneWhenFocused()

> **setSelectNoneWhenFocused**(`select_none_when_focused`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26644](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26644)

设置编辑器是否在获得焦点时不选中文本。

#### Parameters

##### select\_none\_when\_focused

`boolean`

是否在获得焦点时不选中文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setSelectNoneWhenFocused`](TEdit.md#setselectnonewhenfocused)

***

### setSelfLayout()

> **setSelfLayout**(`params`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12760](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12760)

设置控件自己的布局参数。
备注：下一帧才会生效数据

#### Parameters

##### params

`string`

布局参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setSelfLayout`](TEdit.md#setselflayout)

***

### setSelfLayoutParams()

> **setSelfLayoutParams**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12789](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12789)

设置控件自己的布局(缺省布局器)参数(建议用widget\_set\_self\_layout)。
备注：下一帧才会生效数据

#### Parameters

##### x

`string`

x参数。

##### y

`string`

y参数。

##### w

`string`

w参数。

##### h

`string`

h参数。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setSelfLayoutParams`](TEdit.md#setselflayoutparams)

***

### setSensitive()

> **setSensitive**(`sensitive`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12032](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12032)

设置控件是否接受用户事件。

#### Parameters

##### sensitive

`boolean`

是否接受用户事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setSensitive`](TEdit.md#setsensitive)

***

### setState()

> **setState**(`state`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11848](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11848)

设置控件的状态。

#### Parameters

##### state

`string`

状态。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setState`](TEdit.md#setstate)

***

### setStateFromParentSync()

> **setStateFromParentSync**(`state_from_parent_sync`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11872](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11872)

标识是否接收父控件的状态同步。

#### Parameters

##### state\_from\_parent\_sync

`boolean`

是否接收父控件的状态同步。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setStateFromParentSync`](TEdit.md#setstatefromparentsync)

***

### setStyleColor()

> **setStyleColor**(`state_and_name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12842](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12842)

设置颜色类型的style。

> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

在下面这个例子中，R=0x11 G=0x22 B=0x33 A=0xFF

#### Parameters

##### state\_and\_name

`string`

状态和名字，用英文的冒号分隔。

##### value

`any`

值。颜色值一般用十六进制表示，每两个数字表示一个颜色通道，从高位到低位，依次是ABGR。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setStyleColor`](TEdit.md#setstylecolor)

***

### setStyleInt()

> **setStyleInt**(`state_and_name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12805](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12805)

设置整数类型的style。

> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

#### Parameters

##### state\_and\_name

`string`

状态和名字，用英文的冒号分隔。

##### value

`any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setStyleInt`](TEdit.md#setstyleint)

***

### setStyleStr()

> **setStyleStr**(`state_and_name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12821](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12821)

设置字符串类型的style。

> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

#### Parameters

##### state\_and\_name

`string`

状态和名字，用英文的冒号分隔。

##### value

`string`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setStyleStr`](TEdit.md#setstylestr)

***

### setSyncStateToChildren()

> **setSyncStateToChildren**(`sync_state_to_children`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11860](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11860)

标识是否将当前控件状态同步到子控件中。

#### Parameters

##### sync\_state\_to\_children

`boolean`

是否将当前控件状态同步到子控件中。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setSyncStateToChildren`](TEdit.md#setsyncstatetochildren)

***

### setText()

> **setText**(`text`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11428](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11428)

设置控件的文本。（如果字符串相同，则不会重复设置以及触发事件）

#### Parameters

##### text

`string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setText`](TEdit.md#settext)

***

### setTextEx()

> **setTextEx**(`text`, `check_diff`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11441](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11441)

设置控件的文本。

#### Parameters

##### text

`string`

文本。

##### check\_diff

`boolean`

是否检查设置的文本是否和控件中的文本一样。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setTextEx`](TEdit.md#settextex)

***

### setTextLimit()

> **setTextLimit**(`min`, `max`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26568](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26568)

设置为文本输入及其长度限制，不允许输入超过max个字符，少于min个字符时进入error状态。

#### Parameters

##### min

`number`

最小长度。

##### max

`number`

最大长度。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setTextLimit`](TEdit.md#settextlimit)

***

### setTheme()

> **setTheme**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11625](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11625)

设置theme的名称，用于动态切换主题。名称与当前主题名称相同，则重新加载全部资源。

#### Parameters

##### name

`string`

主题的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setTheme`](TEdit.md#settheme)

***

### setThemeOfPopup()

> **setThemeOfPopup**(`theme_of_popup`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:30947](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L30947)

设置弹出窗口的主题。

#### Parameters

##### theme\_of\_popup

`string`

弹出的窗口主题。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setTips()

> **setTips**(`tips`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26707](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26707)

设置编辑器的输入提示。

#### Parameters

##### tips

`string`

输入提示。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setTips`](TEdit.md#settips)

***

### setTrText()

> **setTrText**(`text`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11497](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11497)

获取翻译之后的文本，然后调用widget_set_text。

#### Parameters

##### text

`string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setTrText`](TEdit.md#settrtext)

***

### setTrTips()

> **setTrTips**(`tr_tips`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:26719](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L26719)

获取翻译之后的文本，然后调用edit_set_tips。

#### Parameters

##### tr\_tips

`string`

提示信息。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setTrTips`](TEdit.md#settrtips)

***

### setValue()

> **setValue**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:31017](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31017)

设置值。

#### Parameters

##### value

`any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Overrides

[`TEdit`](TEdit.md).[`setValue`](TEdit.md#setvalue)

***

### setValueInt()

> **setValueInt**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11300](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11300)

设置控件的值。
只是对widget\_set\_prop的包装，值的意义由子类控件决定。

#### Parameters

##### value

`any`

值。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setValueInt`](TEdit.md#setvalueint)

***

### setVisible()

> **setVisible**(`visible`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12008](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12008)

设置控件的可见性。

#### Parameters

##### visible

`boolean`

是否可见。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setVisible`](TEdit.md#setvisible)

***

### setVisibleOnly()

> **setVisibleOnly**(`visible`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12020](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12020)

设置控件的可见性(不触发repaint和relayout)。

#### Parameters

##### visible

`boolean`

是否可见。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`setVisibleOnly`](TEdit.md#setvisibleonly)

***

### startAnimator()

> **startAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11694](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11694)

播放动画。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，播放所有名称为name的动画。
* 2.name为NULL时，播放所有widget相关的动画。
* 3.widget和name均为NULL，播放所有动画。

#### Parameters

##### name

`string`

动画名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`startAnimator`](TEdit.md#startanimator)

***

### stopAnimator()

> **stopAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11746](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11746)

停止动画(控件的相应属性回归原位)。
请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

* 1.widget为NULL时，停止所有名称为name的动画。
* 2.name为NULL时，停止所有widget相关的动画。
* 3.widget和name均为NULL，停止所有动画。

#### Parameters

##### name

`string`

动画名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`stopAnimator`](TEdit.md#stopanimator)

***

### strokeBorderRect()

> **strokeBorderRect**(`c`, `r`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12601](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12601)

根据控件的style绘制边框矩形。

#### Parameters

##### c

[`TCanvas`](TCanvas.md)

画布对象。

##### r

[`TRect`](TRect.md)

矩形区域。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`strokeBorderRect`](TEdit.md#strokeborderrect)

***

### unref()

> **unref**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12588](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12588)

减少控件的引用计数。引用计数为0时销毁控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`unref`](TEdit.md#unref)

***

### updateStyle()

> **updateStyle**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12675](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12675)

让控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`updateStyle`](TEdit.md#updatestyle)

***

### updateStyleRecursive()

> **updateStyleRecursive**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12686](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12686)

让控件及子控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`updateStyleRecursive`](TEdit.md#updatestylerecursive)

***

### useStyle()

> **useStyle**(`style`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11416](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11416)

启用指定的style。

#### Parameters

##### style

`string`

style的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TEdit`](TEdit.md).[`useStyle`](TEdit.md#usestyle)

***

### cast()

> `static` **cast**(`widget`): `TComboBox`

Defined in: [awtk.ts:30923](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L30923)

转换combo_box对象(供脚本语言使用)。

#### Parameters

##### widget

[`TWidget`](TWidget.md)

combo_box对象。

#### Returns

`TComboBox`

combo_box对象。

#### Overrides

[`TEdit`](TEdit.md).[`cast`](TEdit.md#cast)

***

### create()

> `static` **create**(`parent`, `x`, `y`, `w`, `h`): `TComboBox`

Defined in: [awtk.ts:30911](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L30911)

创建combo_box对象

#### Parameters

##### parent

[`TWidget`](TWidget.md)

父控件

##### x

`number`

x坐标

##### y

`number`

y坐标

##### w

`number`

宽度

##### h

`number`

高度

#### Returns

`TComboBox`

对象。

#### Overrides

[`TEdit`](TEdit.md).[`create`](TEdit.md#create)
