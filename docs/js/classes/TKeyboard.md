[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TKeyboard

# Class: TKeyboard

Defined in: [awtk.ts:29916](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L29916)

软键盘。

软键盘是一个特殊的窗口，由编辑器通过输入法自动打开和关闭。

这里介绍一下定制软键盘的方法：

编辑器输入类型和软键盘UI资源文件的对应关系:

| 输入类型       | 软键盘UI资源文件|
|----------------|:---------------:|
| INPUT\_PHONE    | kb\_phone.xml    |
| INPUT\_INT      | kb\_int.xml      |
| INPUT\_FLOAT    | kb\_float.xml    |
| INPUT\_UINT     | kb\_uint.xml     |
| INPUT\_UFLOAT   | kb\_ufloat.xml   |
| INPUT\_HEX      | kb\_hex.xml      |
| INPUT\_EMAIL    | kb\_ascii.xml    |
| INPUT\_PASSWORD | kb\_ascii.xml    |
| INPUT\_ASCII    | kb\_ascii.xml    |
| INPUT\_CUSTOM   | 使用自定义的键盘 |
| 其它            | kb\_default.xml  |

keyboard中按钮子控件的名称有些特殊要求：

|  名称          | 功能            |
|----------------|:---------------:|
| return         | 回车键          |
| action         | 定制按钮        |
| backspace      | 删除键          |
| tab            | tab键           |
| space          | 空格键          |
| close          | 关闭软键盘       |
| clear          | 清除编辑器的内容 |
| cancel         | 恢复编辑器的内容 |
| back           | 关闭当前窗口     |
| back_to_home   | 返回home窗口    |
| 前缀key:        | 键值           |
| 前缀hard_key:   | 模拟物理键盘    |
| 前缀page:       | 切换到页面      |
| 前缀opt:        | 多个字符选择一个，点击切换到下一个，超时提交字符(用于实现九宫格输入) |

示例：

* 按键"a"，提交输入法处理。

```xml
<button repeat="300" name="key:a" text="a"/>
```

* 字符"a"，直接提交到编辑器。

```xml
<button repeat="300" name="a" text="a"/>
```

* 模拟物理键盘数字"1"，触发key down/up事件（可以用来选择候选字）。

```xml
<button repeat="300" name="hard_key:1" text="1"/>
```

* 九宫格输入

```xml
<button repeat="300" name="opt:._@/#" text="._@/#"/>
<button repeat="300" name="opt:abc" text="abc"/>
<button repeat="300" name="opt:def" text="def"/>
```

* 输入语言切换

有的输入法，同时支持输入多种语言。
比如T9，可以同时支持中文和英文输入，配合软键盘随时切换输入的语言。

可以在pages的页面里指定lang属性，切换到该页面时会设置输入法的语言。如：

```xml
<pages x="0" y="bottom" w="100%" h="-28" active="2">
<view name="lower" lang="en_us"
x="0" y="0" w="100%" h="100%" children_layout="default(r=4,c=4,s=2,m=2)">
...
</view>
<view name="chinese" lang="zh_cn"
x="0" y="0" w="100%" h="100%" children_layout="default(r=4,c=4,s=2,m=2)">
...
</view>
</pages>
```

* 键盘跟随。
默认情况下，键盘从底部弹出。如果需要让键盘在编辑器附近弹出，可以指定floating属性为true。如：

```xml
<keyboard theme="keyboard" w="200" h="200" floating="true">
```

> 更多用法请参考：
[kb_default](https://github.com/zlgopen/awtk/blob/master/design/default/ui/kb_default.xml)

## Extends

- [`TWindowBase`](TWindowBase.md)

## Constructors

### Constructor

> **new TKeyboard**(`nativeObj`): `TKeyboard`

Defined in: [awtk.ts:29918](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L29918)

#### Parameters

##### nativeObj

`any`

#### Returns

`TKeyboard`

#### Overrides

[`TWindowBase`](TWindowBase.md).[`constructor`](TWindowBase.md#constructor)

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:29917](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L29917)

#### Overrides

[`TWindowBase`](TWindowBase.md).[`nativeObj`](TWindowBase.md#nativeobj)

## Accessors

### acceptButton

#### Get Signature

> **get** **acceptButton**(): `string`

Defined in: [awtk.ts:17142](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17142)

窗口中按下 Enter 按钮默认触发单击 button 控件名字

##### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`acceptButton`](TWindowBase.md#acceptbutton)

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

[`TWindowBase`](TWindowBase.md).[`animation`](TWindowBase.md#animation)

***

### appletName

#### Get Signature

> **get** **appletName**(): `string`

Defined in: [awtk.ts:17162](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17162)

小应用程序(applet)的名称。

> 如果该窗口属于某个独立的小程序应用(applet)，需要指定它的名称，以便到对应的资源目录查找资源。

##### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`appletName`](TWindowBase.md#appletname)

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

[`TWindowBase`](TWindowBase.md).[`autoAdjustSize`](TWindowBase.md#autoadjustsize)

***

### autoScaleChildrenH

#### Get Signature

> **get** **autoScaleChildrenH**(): `boolean`

Defined in: [awtk.ts:17021](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17021)

窗口大小与设计时大小不同时，是否自动调整子控件的高度。

##### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`autoScaleChildrenH`](TWindowBase.md#autoscalechildrenh)

***

### autoScaleChildrenW

#### Get Signature

> **get** **autoScaleChildrenW**(): `boolean`

Defined in: [awtk.ts:17012](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17012)

窗口大小与设计时大小不同时，是否自动调整子控件的宽度。

##### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`autoScaleChildrenW`](TWindowBase.md#autoscalechildrenw)

***

### autoScaleChildrenX

#### Get Signature

> **get** **autoScaleChildrenX**(): `boolean`

Defined in: [awtk.ts:16994](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16994)

窗口大小与设计时大小不同时，是否自动调整子控件的x坐标。

##### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`autoScaleChildrenX`](TWindowBase.md#autoscalechildrenx)

***

### autoScaleChildrenY

#### Get Signature

> **get** **autoScaleChildrenY**(): `boolean`

Defined in: [awtk.ts:17003](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17003)

窗口大小与设计时大小不同时，是否自动调整子控件的y坐标。

##### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`autoScaleChildrenY`](TWindowBase.md#autoscalechildreny)

***

### cancelButton

#### Get Signature

> **get** **cancelButton**(): `string`

Defined in: [awtk.ts:17151](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17151)

窗口中按下 Esc 按钮默认触发单击 button 控件名字

##### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`cancelButton`](TWindowBase.md#cancelbutton)

***

### closable

#### Get Signature

> **get** **closable**(): [`TWindowClosable`](../enumerations/TWindowClosable.md)

Defined in: [awtk.ts:17047](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17047)

收到EVT_REQUEST_CLOSE_WINDOW是否自动关闭窗口。

如果关闭窗口时，需要用户确认:

* 1.将closable设置为WINDOW\_CLOSABLE\_CONFIRM

* 2.处理窗口的EVT\_REQUEST\_CLOSE\_WINDOW事件

> closable在XML中取值为：yes/no/confirm，缺省为yes。

##### Returns

[`TWindowClosable`](../enumerations/TWindowClosable.md)

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`closable`](TWindowBase.md#closable)

***

### closeAnimHint

#### Get Signature

> **get** **closeAnimHint**(): `string`

Defined in: [awtk.ts:17067](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17067)

关闭窗口动画的名称。
请参考[窗口动画](https://github.com/zlgopen/awtk/blob/master/docs/window_animator.md)

##### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`closeAnimHint`](TWindowBase.md#closeanimhint)

***

### designH

#### Get Signature

> **get** **designH**(): `number`

Defined in: [awtk.ts:16985](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16985)

设计时高度。

##### Returns

`number`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`designH`](TWindowBase.md#designh)

***

### designW

#### Get Signature

> **get** **designW**(): `number`

Defined in: [awtk.ts:16976](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16976)

设计时宽度。

##### Returns

`number`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`designW`](TWindowBase.md#designw)

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

[`TWindowBase`](TWindowBase.md).[`dirtyRectTolerance`](TWindowBase.md#dirtyrecttolerance)

***

### disableAnim

#### Get Signature

> **get** **disableAnim**(): `boolean`

Defined in: [awtk.ts:17030](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17030)

禁用窗口动画。

##### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`disableAnim`](TWindowBase.md#disableanim)

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

[`TWindowBase`](TWindowBase.md).[`enable`](TWindowBase.md#enable)

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

[`TWindowBase`](TWindowBase.md).[`feedback`](TWindowBase.md#feedback)

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

[`TWindowBase`](TWindowBase.md).[`floating`](TWindowBase.md#floating)

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

[`TWindowBase`](TWindowBase.md).[`focusable`](TWindowBase.md#focusable)

***

### h

#### Get Signature

> **get** **h**(): `number`

Defined in: [awtk.ts:12890](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12890)

高度。

##### Returns

`number`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`h`](TWindowBase.md#h)

***

### moveFocusDownKey

#### Get Signature

> **get** **moveFocusDownKey**(): `string`

Defined in: [awtk.ts:17111](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17111)

向下移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

##### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`moveFocusDownKey`](TWindowBase.md#movefocusdownkey)

***

### moveFocusLeftKey

#### Get Signature

> **get** **moveFocusLeftKey**(): `string`

Defined in: [awtk.ts:17122](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17122)

向左移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

##### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`moveFocusLeftKey`](TWindowBase.md#movefocusleftkey)

***

### moveFocusNextKey

#### Get Signature

> **get** **moveFocusNextKey**(): `string`

Defined in: [awtk.ts:17089](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17089)

向后移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

##### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`moveFocusNextKey`](TWindowBase.md#movefocusnextkey)

***

### moveFocusPrevKey

#### Get Signature

> **get** **moveFocusPrevKey**(): `string`

Defined in: [awtk.ts:17078](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17078)

向前移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

##### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`moveFocusPrevKey`](TWindowBase.md#movefocusprevkey)

***

### moveFocusRightKey

#### Get Signature

> **get** **moveFocusRightKey**(): `string`

Defined in: [awtk.ts:17133](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17133)

向右移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

##### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`moveFocusRightKey`](TWindowBase.md#movefocusrightkey)

***

### moveFocusUpKey

#### Get Signature

> **get** **moveFocusUpKey**(): `string`

Defined in: [awtk.ts:17100](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17100)

向上移动焦点的键值。

请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)

##### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`moveFocusUpKey`](TWindowBase.md#movefocusupkey)

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

[`TWindowBase`](TWindowBase.md).[`name`](TWindowBase.md#name)

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

[`TWindowBase`](TWindowBase.md).[`opacity`](TWindowBase.md#opacity)

***

### openAnimHint

#### Get Signature

> **get** **openAnimHint**(): `string`

Defined in: [awtk.ts:17057](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17057)

打开窗口动画的名称。
请参考[窗口动画](https://github.com/zlgopen/awtk/blob/master/docs/window_animator.md)

##### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`openAnimHint`](TWindowBase.md#openanimhint)

***

### parent

#### Get Signature

> **get** **parent**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:13118](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13118)

父控件

##### Returns

[`TWidget`](TWidget.md)

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`parent`](TWindowBase.md#parent)

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

[`TWindowBase`](TWindowBase.md).[`pointerCursor`](TWindowBase.md#pointercursor)

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

[`TWindowBase`](TWindowBase.md).[`sensitive`](TWindowBase.md#sensitive)

***

### singleInstance

#### Get Signature

> **get** **singleInstance**(): `boolean`

Defined in: [awtk.ts:17171](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17171)

单例。如果窗口存在，先关闭再打开。

##### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`singleInstance`](TWindowBase.md#singleinstance)

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

[`TWindowBase`](TWindowBase.md).[`stateFromParentSync`](TWindowBase.md#statefromparentsync)

***

### stronglyFocus

#### Get Signature

> **get** **stronglyFocus**(): `boolean`

Defined in: [awtk.ts:17180](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L17180)

点击非focusable控件时，是否让当前焦点控件失去焦点。比如点击窗口空白区域，是否让编辑器失去焦点。

##### Returns

`boolean`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`stronglyFocus`](TWindowBase.md#stronglyfocus)

***

### style

#### Get Signature

> **get** **style**(): `string`

Defined in: [awtk.ts:12938](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12938)

style的名称。

##### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`style`](TWindowBase.md#style)

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

[`TWindowBase`](TWindowBase.md).[`syncStateToChildren`](TWindowBase.md#syncstatetochildren)

***

### theme

#### Get Signature

> **get** **theme**(): `string`

Defined in: [awtk.ts:16967](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16967)

窗体样式资源的名称。
每个窗口都可以有独立的窗体样式文件，如果没指定，则使用系统缺省的窗体样式文件。
窗体样式是一个XML文件，放在assets/raw/styles目录下。
请参考[窗体样式](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)

##### Returns

`string`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`theme`](TWindowBase.md#theme)

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

[`TWindowBase`](TWindowBase.md).[`trText`](TWindowBase.md#trtext)

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

[`TWindowBase`](TWindowBase.md).[`visible`](TWindowBase.md#visible)

***

### w

#### Get Signature

> **get** **w**(): `number`

Defined in: [awtk.ts:12881](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12881)

宽度。

##### Returns

`number`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`w`](TWindowBase.md#w)

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

[`TWindowBase`](TWindowBase.md).[`withFocusState`](TWindowBase.md#withfocusstate)

***

### x

#### Get Signature

> **get** **x**(): `number`

Defined in: [awtk.ts:12863](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12863)

x坐标(相对于父控件的x坐标)。

##### Returns

`number`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`x`](TWindowBase.md#x)

***

### y

#### Get Signature

> **get** **y**(): `number`

Defined in: [awtk.ts:12872](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12872)

y坐标(相对于父控件的y坐标)。

##### Returns

`number`

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`y`](TWindowBase.md#y)

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

[`TWindowBase`](TWindowBase.md).[`addChild`](TWindowBase.md#addchild)

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

[`TWindowBase`](TWindowBase.md).[`addChildDefault`](TWindowBase.md#addchilddefault)

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

[`TWindowBase`](TWindowBase.md).[`addValue`](TWindowBase.md#addvalue)

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

[`TWindowBase`](TWindowBase.md).[`addValueInt`](TWindowBase.md#addvalueint)

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

[`TWindowBase`](TWindowBase.md).[`animatePositionTo`](TWindowBase.md#animatepositionto)

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

[`TWindowBase`](TWindowBase.md).[`animatePropFloatTo`](TWindowBase.md#animatepropfloatto)

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

[`TWindowBase`](TWindowBase.md).[`animateSizeTo`](TWindowBase.md#animatesizeto)

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

[`TWindowBase`](TWindowBase.md).[`animateValueTo`](TWindowBase.md#animatevalueto)

***

### back()

> **back**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11160](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11160)

请求返回到前一个窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`back`](TWindowBase.md#back)

***

### backToHome()

> **backToHome**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11171](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11171)

请求返回到home窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`backToHome`](TWindowBase.md#backtohome)

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

[`TWindowBase`](TWindowBase.md).[`child`](TWindowBase.md#child)

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

[`TWindowBase`](TWindowBase.md).[`clone`](TWindowBase.md#clone)

***

### closeWindow()

> **closeWindow**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11138](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11138)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`closeWindow`](TWindowBase.md#closewindow)

***

### closeWindowForce()

> **closeWindowForce**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11149](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11149)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`closeWindowForce`](TWindowBase.md#closewindowforce)

***

### countChildren()

> **countChildren**(): `number`

Defined in: [awtk.ts:11058](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11058)

获取子控件的个数。

#### Returns

`number`

子控件的个数。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`countChildren`](TWindowBase.md#countchildren)

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

[`TWindowBase`](TWindowBase.md).[`createAnimator`](TWindowBase.md#createanimator)

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

[`TWindowBase`](TWindowBase.md).[`destroy`](TWindowBase.md#destroy)

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

[`TWindowBase`](TWindowBase.md).[`destroyAnimator`](TWindowBase.md#destroyanimator)

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

[`TWindowBase`](TWindowBase.md).[`destroyAsync`](TWindowBase.md#destroyasync)

***

### destroyChildren()

> **destroyChildren**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11909](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11909)

销毁全部子控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`destroyChildren`](TWindowBase.md#destroychildren)

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

[`TWindowBase`](TWindowBase.md).[`dispatchToKeyTarget`](TWindowBase.md#dispatchtokeytarget)

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

[`TWindowBase`](TWindowBase.md).[`dispatchToTarget`](TWindowBase.md#dispatchtotarget)

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

[`TWindowBase`](TWindowBase.md).[`equal`](TWindowBase.md#equal)

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

[`TWindowBase`](TWindowBase.md).[`fillBgRect`](TWindowBase.md#fillbgrect)

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

[`TWindowBase`](TWindowBase.md).[`fillFgRect`](TWindowBase.md#fillfgrect)

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

[`TWindowBase`](TWindowBase.md).[`findParentByName`](TWindowBase.md#findparentbyname)

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

[`TWindowBase`](TWindowBase.md).[`findParentByType`](TWindowBase.md#findparentbytype)

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

[`TWindowBase`](TWindowBase.md).[`focusNext`](TWindowBase.md#focusnext)

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

[`TWindowBase`](TWindowBase.md).[`focusPrev`](TWindowBase.md#focusprev)

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

[`TWindowBase`](TWindowBase.md).[`foreach`](TWindowBase.md#foreach)

***

### getAutoAdjustSize()

> **getAutoAdjustSize**(): `boolean`

Defined in: [awtk.ts:11530](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11530)

获取控件auto_adjust_size属性值。

#### Returns

`boolean`

返回auto_adjust_size。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getAutoAdjustSize`](TWindowBase.md#getautoadjustsize)

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

[`TWindowBase`](TWindowBase.md).[`getChild`](TWindowBase.md#getchild)

***

### getEnable()

> **getEnable**(): `boolean`

Defined in: [awtk.ts:11508](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11508)

获取控件enable属性值。

#### Returns

`boolean`

返回enable。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getEnable`](TWindowBase.md#getenable)

***

### getFeedback()

> **getFeedback**(): `boolean`

Defined in: [awtk.ts:11585](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11585)

获取控件feedback属性值。

#### Returns

`boolean`

返回feedback。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getFeedback`](TWindowBase.md#getfeedback)

***

### getFloating()

> **getFloating**(): `boolean`

Defined in: [awtk.ts:11519](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11519)

获取控件floating属性值。

#### Returns

`boolean`

返回floating。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getFloating`](TWindowBase.md#getfloating)

***

### getFocusable()

> **getFocusable**(): `boolean`

Defined in: [awtk.ts:11552](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11552)

获取控件focusable属性值。

#### Returns

`boolean`

返回focusable。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getFocusable`](TWindowBase.md#getfocusable)

***

### getFocusedWidget()

> **getFocusedWidget**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11105](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11105)

获取当前窗口中的焦点控件。

#### Returns

[`TWidget`](TWidget.md)

焦点控件。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getFocusedWidget`](TWindowBase.md#getfocusedwidget)

***

### getNativeWindow()

> **getNativeWindow**(): [`TNativeWindow`](TNativeWindow.md)

Defined in: [awtk.ts:11116](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11116)

获取原生窗口对象。

#### Returns

[`TNativeWindow`](TNativeWindow.md)

原生窗口对象。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getNativeWindow`](TWindowBase.md#getnativewindow)

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

[`TWindowBase`](TWindowBase.md).[`getProp`](TWindowBase.md#getprop)

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

[`TWindowBase`](TWindowBase.md).[`getPropBool`](TWindowBase.md#getpropbool)

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

[`TWindowBase`](TWindowBase.md).[`getPropFloat`](TWindowBase.md#getpropfloat)

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

[`TWindowBase`](TWindowBase.md).[`getPropInt`](TWindowBase.md#getpropint)

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

[`TWindowBase`](TWindowBase.md).[`getPropPointer`](TWindowBase.md#getproppointer)

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

[`TWindowBase`](TWindowBase.md).[`getPropStr`](TWindowBase.md#getpropstr)

***

### getSensitive()

> **getSensitive**(): `boolean`

Defined in: [awtk.ts:11563](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11563)

获取控件sensitive属性值。

#### Returns

`boolean`

返回sensitive。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getSensitive`](TWindowBase.md#getsensitive)

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

[`TWindowBase`](TWindowBase.md).[`getStateForStyle`](TWindowBase.md#getstateforstyle)

***

### getStyleType()

> **getStyleType**(): `string`

Defined in: [awtk.ts:12664](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12664)

获取 widget 对应风格类型

#### Returns

`string`

返回 widget 的对应风格类型。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getStyleType`](TWindowBase.md#getstyletype)

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

[`TWindowBase`](TWindowBase.md).[`getText`](TWindowBase.md#gettext)

***

### getThemeName()

> **getThemeName**(): `string`

Defined in: [awtk.ts:11636](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11636)

获取 theme 的名称

#### Returns

`string`

成功返回主题名称，失败否则 NULL。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getThemeName`](TWindowBase.md#getthemename)

***

### getType()

> **getType**(): `string`

Defined in: [awtk.ts:12504](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12504)

获取当前控件的类型名称。

#### Returns

`string`

返回类型名。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getType`](TWindowBase.md#gettype)

***

### getValue()

> **getValue**(): `number`

Defined in: [awtk.ts:11250](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11250)

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getValue`](TWindowBase.md#getvalue)

***

### getValueInt()

> **getValueInt**(): `number`

Defined in: [awtk.ts:11287](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11287)

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getValueInt`](TWindowBase.md#getvalueint)

***

### getVisible()

> **getVisible**(): `boolean`

Defined in: [awtk.ts:11574](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11574)

获取控件visible属性值。

#### Returns

`boolean`

返回visible。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getVisible`](TWindowBase.md#getvisible)

***

### getWindow()

> **getWindow**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:12482](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12482)

获取当前控件所在的窗口。

#### Returns

[`TWidget`](TWidget.md)

窗口对象。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getWindow`](TWindowBase.md#getwindow)

***

### getWindowManager()

> **getWindowManager**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:12493](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12493)

获取当前的窗口管理器。

#### Returns

[`TWidget`](TWidget.md)

窗口管理器对象。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getWindowManager`](TWindowBase.md#getwindowmanager)

***

### getWithFocusState()

> **getWithFocusState**(): `boolean`

Defined in: [awtk.ts:11541](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11541)

获取控件with_focus_state属性值。

#### Returns

`boolean`

返回with_focus_state。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`getWithFocusState`](TWindowBase.md#getwithfocusstate)

***

### hasHighlighter()

> **hasHighlighter**(): `boolean`

Defined in: [awtk.ts:11404](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11404)

判断widget拥有高亮属性。

#### Returns

`boolean`

拥有返回 TRUE，没有返回 FALSE。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`hasHighlighter`](TWindowBase.md#hashighlighter)

***

### indexOf()

> **indexOf**(): `number`

Defined in: [awtk.ts:11127](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11127)

获取控件在父控件中的索引编号。

#### Returns

`number`

在父控件中的索引编号。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`indexOf`](TWindowBase.md#indexof)

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

[`TWindowBase`](TWindowBase.md).[`insertChild`](TWindowBase.md#insertchild)

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

[`TWindowBase`](TWindowBase.md).[`invalidateForce`](TWindowBase.md#invalidateforce)

***

### isAlwaysOnTop()

> **isAlwaysOnTop**(): `boolean`

Defined in: [awtk.ts:12375](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12375)

检查控件是否总在最上层。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isAlwaysOnTop`](TWindowBase.md#isalwaysontop)

***

### isDesigningWindow()

> **isDesigningWindow**(): `boolean`

Defined in: [awtk.ts:12447](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12447)

判断当前控件是否是设计窗口。

#### Returns

`boolean`

返回当前控件是否是设计窗口。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isDesigningWindow`](TWindowBase.md#isdesigningwindow)

***

### isDialog()

> **isDialog**(): `boolean`

Defined in: [awtk.ts:12342](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12342)

检查控件是否是对话框类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isDialog`](TWindowBase.md#isdialog)

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

[`TWindowBase`](TWindowBase.md).[`isDirectParentOf`](TWindowBase.md#isdirectparentof)

***

### isFullscreenWindow()

> **isFullscreenWindow**(): `boolean`

Defined in: [awtk.ts:12331](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12331)

检查控件是否是全屏窗口。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isFullscreenWindow`](TWindowBase.md#isfullscreenwindow)

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

[`TWindowBase`](TWindowBase.md).[`isKeyboard`](TWindowBase.md#iskeyboard)

***

### isNormalWindow()

> **isNormalWindow**(): `boolean`

Defined in: [awtk.ts:12320](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12320)

检查控件是否是普通窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isNormalWindow`](TWindowBase.md#isnormalwindow)

***

### isOpenedDialog()

> **isOpenedDialog**(): `boolean`

Defined in: [awtk.ts:12408](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12408)

检查控件弹出对话框控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isOpenedDialog`](TWindowBase.md#isopeneddialog)

***

### isOpenedPopup()

> **isOpenedPopup**(): `boolean`

Defined in: [awtk.ts:12419](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12419)

检查控件弹出窗口控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isOpenedPopup`](TWindowBase.md#isopenedpopup)

***

### isOverlay()

> **isOverlay**(): `boolean`

Defined in: [awtk.ts:12364](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12364)

检查控件是否是overlay窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isOverlay`](TWindowBase.md#isoverlay)

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

[`TWindowBase`](TWindowBase.md).[`isParentOf`](TWindowBase.md#isparentof)

***

### isPopup()

> **isPopup**(): `boolean`

Defined in: [awtk.ts:12353](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12353)

检查控件是否是弹出窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isPopup`](TWindowBase.md#ispopup)

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

[`TWindowBase`](TWindowBase.md).[`isStyleExist`](TWindowBase.md#isstyleexist)

***

### isSupportHighlighter()

> **isSupportHighlighter**(): `boolean`

Defined in: [awtk.ts:11393](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11393)

判断widget是否支持高亮。

#### Returns

`boolean`

支持返回 TRUE，不支持返回 FALSE。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isSupportHighlighter`](TWindowBase.md#issupporthighlighter)

***

### isSuspendDialog()

> **isSuspendDialog**(): `boolean`

Defined in: [awtk.ts:12386](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12386)

检查控件弹出对话框控件是否是挂起状态。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isSuspendDialog`](TWindowBase.md#issuspenddialog)

***

### isSuspendPopup()

> **isSuspendPopup**(): `boolean`

Defined in: [awtk.ts:12397](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12397)

检查控件弹出窗口控件是否是挂起状态。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isSuspendPopup`](TWindowBase.md#issuspendpopup)

***

### isSystemBar()

> **isSystemBar**(): `boolean`

Defined in: [awtk.ts:12309](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12309)

检查控件是否是system bar类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isSystemBar`](TWindowBase.md#issystembar)

***

### isWindow()

> **isWindow**(): `boolean`

Defined in: [awtk.ts:12298](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12298)

判断当前控件是否是窗口。

#### Returns

`boolean`

返回当前控件是否是窗口。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isWindow`](TWindowBase.md#iswindow)

***

### isWindowCreated()

> **isWindowCreated**(): `boolean`

Defined in: [awtk.ts:12263](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12263)

判断窗口及子控件创建或加载是否完成。

#### Returns

`boolean`

返回创建或加载是否完成。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isWindowCreated`](TWindowBase.md#iswindowcreated)

***

### isWindowManager()

> **isWindowManager**(): `boolean`

Defined in: [awtk.ts:12458](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12458)

判断当前控件是否是窗口管理器。

#### Returns

`boolean`

返回当前控件是否是窗口管理器。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isWindowManager`](TWindowBase.md#iswindowmanager)

***

### isWindowOpened()

> **isWindowOpened**(): `boolean`

Defined in: [awtk.ts:12252](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12252)

判断当前控件所在的窗口是否已经打开。

#### Returns

`boolean`

返回当前控件所在的窗口是否已经打开。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`isWindowOpened`](TWindowBase.md#iswindowopened)

***

### layout()

> **layout**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12747](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12747)

布局当前控件及子控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`layout`](TWindowBase.md#layout)

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

[`TWindowBase`](TWindowBase.md).[`lookup`](TWindowBase.md#lookup)

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

[`TWindowBase`](TWindowBase.md).[`lookupByType`](TWindowBase.md#lookupbytype)

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

[`TWindowBase`](TWindowBase.md).[`move`](TWindowBase.md#move)

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

[`TWindowBase`](TWindowBase.md).[`moveResize`](TWindowBase.md#moveresize)

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

[`TWindowBase`](TWindowBase.md).[`moveResizeEx`](TWindowBase.md#moveresizeex)

***

### moveToCenter()

> **moveToCenter**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11195](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11195)

移动控件到父控件中间。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`moveToCenter`](TWindowBase.md#movetocenter)

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

[`TWindowBase`](TWindowBase.md).[`off`](TWindowBase.md#off)

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

[`TWindowBase`](TWindowBase.md).[`on`](TWindowBase.md#on)

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

[`TWindowBase`](TWindowBase.md).[`pauseAnimator`](TWindowBase.md#pauseanimator)

***

### ref()

> **ref**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:12577](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12577)

增加控件的引用计数。

#### Returns

[`TWidget`](TWidget.md)

返回控件对象。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`ref`](TWindowBase.md#ref)

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

[`TWindowBase`](TWindowBase.md).[`removeChild`](TWindowBase.md#removechild)

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

[`TWindowBase`](TWindowBase.md).[`resize`](TWindowBase.md#resize)

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

[`TWindowBase`](TWindowBase.md).[`restack`](TWindowBase.md#restack)

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

[`TWindowBase`](TWindowBase.md).[`setAnimation`](TWindowBase.md#setanimation)

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

[`TWindowBase`](TWindowBase.md).[`setAnimatorTimeScale`](TWindowBase.md#setanimatortimescale)

***

### setAsKeyTarget()

> **setAsKeyTarget**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12697](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12697)

递归的把父控件的key_target设置为自己。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`setAsKeyTarget`](TWindowBase.md#setaskeytarget)

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

[`TWindowBase`](TWindowBase.md).[`setAutoAdjustSize`](TWindowBase.md#setautoadjustsize)

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

[`TWindowBase`](TWindowBase.md).[`setChildrenLayout`](TWindowBase.md#setchildrenlayout)

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

[`TWindowBase`](TWindowBase.md).[`setChildText`](TWindowBase.md#setchildtext)

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

[`TWindowBase`](TWindowBase.md).[`setChildTextWithDouble`](TWindowBase.md#setchildtextwithdouble)

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

[`TWindowBase`](TWindowBase.md).[`setChildTextWithInt`](TWindowBase.md#setchildtextwithint)

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

[`TWindowBase`](TWindowBase.md).[`setDirtyRectTolerance`](TWindowBase.md#setdirtyrecttolerance)

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

[`TWindowBase`](TWindowBase.md).[`setEnable`](TWindowBase.md#setenable)

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

[`TWindowBase`](TWindowBase.md).[`setFeedback`](TWindowBase.md#setfeedback)

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

[`TWindowBase`](TWindowBase.md).[`setFloating`](TWindowBase.md#setfloating)

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

[`TWindowBase`](TWindowBase.md).[`setFocusable`](TWindowBase.md#setfocusable)

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

[`TWindowBase`](TWindowBase.md).[`setFocused`](TWindowBase.md#setfocused)

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

[`TWindowBase`](TWindowBase.md).[`setName`](TWindowBase.md#setname)

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

[`TWindowBase`](TWindowBase.md).[`setOpacity`](TWindowBase.md#setopacity)

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

[`TWindowBase`](TWindowBase.md).[`setPointerCursor`](TWindowBase.md#setpointercursor)

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

[`TWindowBase`](TWindowBase.md).[`setProp`](TWindowBase.md#setprop)

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

[`TWindowBase`](TWindowBase.md).[`setPropBool`](TWindowBase.md#setpropbool)

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

[`TWindowBase`](TWindowBase.md).[`setPropFloat`](TWindowBase.md#setpropfloat)

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

[`TWindowBase`](TWindowBase.md).[`setPropInt`](TWindowBase.md#setpropint)

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

[`TWindowBase`](TWindowBase.md).[`setPropPointer`](TWindowBase.md#setproppointer)

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

[`TWindowBase`](TWindowBase.md).[`setProps`](TWindowBase.md#setprops)

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

[`TWindowBase`](TWindowBase.md).[`setPropStr`](TWindowBase.md#setpropstr)

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

[`TWindowBase`](TWindowBase.md).[`setSelfLayout`](TWindowBase.md#setselflayout)

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

[`TWindowBase`](TWindowBase.md).[`setSelfLayoutParams`](TWindowBase.md#setselflayoutparams)

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

[`TWindowBase`](TWindowBase.md).[`setSensitive`](TWindowBase.md#setsensitive)

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

[`TWindowBase`](TWindowBase.md).[`setState`](TWindowBase.md#setstate)

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

[`TWindowBase`](TWindowBase.md).[`setStateFromParentSync`](TWindowBase.md#setstatefromparentsync)

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

[`TWindowBase`](TWindowBase.md).[`setStyleColor`](TWindowBase.md#setstylecolor)

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

[`TWindowBase`](TWindowBase.md).[`setStyleInt`](TWindowBase.md#setstyleint)

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

[`TWindowBase`](TWindowBase.md).[`setStyleStr`](TWindowBase.md#setstylestr)

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

[`TWindowBase`](TWindowBase.md).[`setSyncStateToChildren`](TWindowBase.md#setsyncstatetochildren)

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

[`TWindowBase`](TWindowBase.md).[`setText`](TWindowBase.md#settext)

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

[`TWindowBase`](TWindowBase.md).[`setTextEx`](TWindowBase.md#settextex)

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

[`TWindowBase`](TWindowBase.md).[`setTheme`](TWindowBase.md#settheme)

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

[`TWindowBase`](TWindowBase.md).[`setTrText`](TWindowBase.md#settrtext)

***

### setValue()

> **setValue**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11263](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11263)

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

[`TWindowBase`](TWindowBase.md).[`setValue`](TWindowBase.md#setvalue)

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

[`TWindowBase`](TWindowBase.md).[`setValueInt`](TWindowBase.md#setvalueint)

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

[`TWindowBase`](TWindowBase.md).[`setVisible`](TWindowBase.md#setvisible)

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

[`TWindowBase`](TWindowBase.md).[`setVisibleOnly`](TWindowBase.md#setvisibleonly)

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

[`TWindowBase`](TWindowBase.md).[`startAnimator`](TWindowBase.md#startanimator)

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

[`TWindowBase`](TWindowBase.md).[`stopAnimator`](TWindowBase.md#stopanimator)

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

[`TWindowBase`](TWindowBase.md).[`strokeBorderRect`](TWindowBase.md#strokeborderrect)

***

### unref()

> **unref**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12588](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12588)

减少控件的引用计数。引用计数为0时销毁控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`unref`](TWindowBase.md#unref)

***

### updateStyle()

> **updateStyle**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12675](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12675)

让控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`updateStyle`](TWindowBase.md#updatestyle)

***

### updateStyleRecursive()

> **updateStyleRecursive**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12686](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12686)

让控件及子控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWindowBase`](TWindowBase.md).[`updateStyleRecursive`](TWindowBase.md#updatestylerecursive)

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

[`TWindowBase`](TWindowBase.md).[`useStyle`](TWindowBase.md#usestyle)

***

### cast()

> `static` **cast**(`widget`): `TKeyboard`

Defined in: [awtk.ts:29946](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L29946)

转换为keyboard对象(供脚本语言使用)。

#### Parameters

##### widget

[`TWidget`](TWidget.md)

keyboard对象。

#### Returns

`TKeyboard`

keyboard对象。

#### Overrides

[`TWindowBase`](TWindowBase.md).[`cast`](TWindowBase.md#cast)

***

### create()

> `static` **create**(`parent`, `x`, `y`, `w`, `h`): `TKeyboard`

Defined in: [awtk.ts:29934](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L29934)

创建keyboard对象

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

`TKeyboard`

对象。
