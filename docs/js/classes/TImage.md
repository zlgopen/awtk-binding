[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TImage

# Class: TImage

Defined in: [awtk.ts:31279](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31279)

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

## Extends

- [`TImageBase`](TImageBase.md)

## Constructors

### Constructor

> **new TImage**(`nativeObj`): `TImage`

Defined in: [awtk.ts:31281](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31281)

#### Parameters

##### nativeObj

`any`

#### Returns

`TImage`

#### Overrides

[`TImageBase`](TImageBase.md).[`constructor`](TImageBase.md#constructor)

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:31280](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31280)

#### Overrides

[`TImageBase`](TImageBase.md).[`nativeObj`](TImageBase.md#nativeobj)

## Accessors

### anchorX

#### Get Signature

> **get** **anchorX**(): `number`

Defined in: [awtk.ts:16754](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16754)

锚点X(0-1)。0在控件左边，0.5在控件中间，1在控件右边。

##### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`anchorX`](TImageBase.md#anchorx)

***

### anchorY

#### Get Signature

> **get** **anchorY**(): `number`

Defined in: [awtk.ts:16763](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16763)

锚点Y(0-1)。0在控件顶部，0.5在控件中间，1在控件底部。

##### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`anchorY`](TImageBase.md#anchory)

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

[`TImageBase`](TImageBase.md).[`animation`](TImageBase.md#animation)

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

[`TImageBase`](TImageBase.md).[`autoAdjustSize`](TImageBase.md#autoadjustsize)

***

### clickable

#### Get Signature

> **get** **clickable**(): `boolean`

Defined in: [awtk.ts:16803](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16803)

点击时，是否触发EVT_CLICK事件。

##### Returns

`boolean`

#### Set Signature

> **set** **clickable**(`v`): `void`

Defined in: [awtk.ts:16807](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16807)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TImageBase`](TImageBase.md).[`clickable`](TImageBase.md#clickable)

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

[`TImageBase`](TImageBase.md).[`dirtyRectTolerance`](TImageBase.md#dirtyrecttolerance)

***

### drawType

#### Get Signature

> **get** **drawType**(): [`TImageDrawType`](../enumerations/TImageDrawType.md)

Defined in: [awtk.ts:31346](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31346)

图片的绘制方式(仅在没有旋转和缩放时生效)。

##### Returns

[`TImageDrawType`](../enumerations/TImageDrawType.md)

#### Set Signature

> **set** **drawType**(`v`): `void`

Defined in: [awtk.ts:31350](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31350)

##### Parameters

###### v

[`TImageDrawType`](../enumerations/TImageDrawType.md)

##### Returns

`void`

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

[`TImageBase`](TImageBase.md).[`enable`](TImageBase.md#enable)

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

[`TImageBase`](TImageBase.md).[`feedback`](TImageBase.md#feedback)

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

[`TImageBase`](TImageBase.md).[`floating`](TImageBase.md#floating)

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

[`TImageBase`](TImageBase.md).[`focusable`](TImageBase.md#focusable)

***

### h

#### Get Signature

> **get** **h**(): `number`

Defined in: [awtk.ts:12890](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12890)

高度。

##### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`h`](TImageBase.md#h)

***

### image

#### Get Signature

> **get** **image**(): `string`

Defined in: [awtk.ts:16741](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16741)

图片的名称。

##### Returns

`string`

#### Set Signature

> **set** **image**(`v`): `void`

Defined in: [awtk.ts:16745](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16745)

##### Parameters

###### v

`string`

##### Returns

`void`

#### Inherited from

[`TImageBase`](TImageBase.md).[`image`](TImageBase.md#image)

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

[`TImageBase`](TImageBase.md).[`name`](TImageBase.md#name)

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

[`TImageBase`](TImageBase.md).[`opacity`](TImageBase.md#opacity)

***

### parent

#### Get Signature

> **get** **parent**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:13118](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13118)

父控件

##### Returns

[`TWidget`](TWidget.md)

#### Inherited from

[`TImageBase`](TImageBase.md).[`parent`](TImageBase.md#parent)

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

[`TImageBase`](TImageBase.md).[`pointerCursor`](TImageBase.md#pointercursor)

***

### rotation

#### Get Signature

> **get** **rotation**(): `number`

Defined in: [awtk.ts:16790](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16790)

控件的旋转角度(幅度)。

##### Returns

`number`

#### Set Signature

> **set** **rotation**(`v`): `void`

Defined in: [awtk.ts:16794](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16794)

##### Parameters

###### v

`number`

##### Returns

`void`

#### Inherited from

[`TImageBase`](TImageBase.md).[`rotation`](TImageBase.md#rotation)

***

### scaleX

#### Get Signature

> **get** **scaleX**(): `number`

Defined in: [awtk.ts:16772](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16772)

控件在X方向上的缩放比例。

##### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`scaleX`](TImageBase.md#scalex)

***

### scaleY

#### Get Signature

> **get** **scaleY**(): `number`

Defined in: [awtk.ts:16781](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16781)

控件在Y方向上的缩放比例。

##### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`scaleY`](TImageBase.md#scaley)

***

### selectable

#### Get Signature

> **get** **selectable**(): `boolean`

Defined in: [awtk.ts:16816](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16816)

是否设置选中状态。

##### Returns

`boolean`

#### Set Signature

> **set** **selectable**(`v`): `void`

Defined in: [awtk.ts:16820](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16820)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TImageBase`](TImageBase.md).[`selectable`](TImageBase.md#selectable)

***

### selected

#### Get Signature

> **get** **selected**(): `boolean`

Defined in: [awtk.ts:16829](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16829)

当前是否被选中。

##### Returns

`boolean`

#### Set Signature

> **set** **selected**(`v`): `void`

Defined in: [awtk.ts:16833](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16833)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TImageBase`](TImageBase.md).[`selected`](TImageBase.md#selected)

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

[`TImageBase`](TImageBase.md).[`sensitive`](TImageBase.md#sensitive)

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

[`TImageBase`](TImageBase.md).[`stateFromParentSync`](TImageBase.md#statefromparentsync)

***

### style

#### Get Signature

> **get** **style**(): `string`

Defined in: [awtk.ts:12938](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12938)

style的名称。

##### Returns

`string`

#### Inherited from

[`TImageBase`](TImageBase.md).[`style`](TImageBase.md#style)

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

[`TImageBase`](TImageBase.md).[`syncStateToChildren`](TImageBase.md#syncstatetochildren)

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

[`TImageBase`](TImageBase.md).[`trText`](TImageBase.md#trtext)

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

[`TImageBase`](TImageBase.md).[`visible`](TImageBase.md#visible)

***

### w

#### Get Signature

> **get** **w**(): `number`

Defined in: [awtk.ts:12881](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12881)

宽度。

##### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`w`](TImageBase.md#w)

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

[`TImageBase`](TImageBase.md).[`withFocusState`](TImageBase.md#withfocusstate)

***

### x

#### Get Signature

> **get** **x**(): `number`

Defined in: [awtk.ts:12863](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12863)

x坐标(相对于父控件的x坐标)。

##### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`x`](TImageBase.md#x)

***

### y

#### Get Signature

> **get** **y**(): `number`

Defined in: [awtk.ts:12872](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12872)

y坐标(相对于父控件的y坐标)。

##### Returns

`number`

#### Inherited from

[`TImageBase`](TImageBase.md).[`y`](TImageBase.md#y)

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

[`TImageBase`](TImageBase.md).[`addChild`](TImageBase.md#addchild)

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

[`TImageBase`](TImageBase.md).[`addChildDefault`](TImageBase.md#addchilddefault)

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

[`TImageBase`](TImageBase.md).[`addValue`](TImageBase.md#addvalue)

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

[`TImageBase`](TImageBase.md).[`addValueInt`](TImageBase.md#addvalueint)

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

[`TImageBase`](TImageBase.md).[`animatePositionTo`](TImageBase.md#animatepositionto)

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

[`TImageBase`](TImageBase.md).[`animatePropFloatTo`](TImageBase.md#animatepropfloatto)

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

[`TImageBase`](TImageBase.md).[`animateSizeTo`](TImageBase.md#animatesizeto)

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

[`TImageBase`](TImageBase.md).[`animateValueTo`](TImageBase.md#animatevalueto)

***

### back()

> **back**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11160](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11160)

请求返回到前一个窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`back`](TImageBase.md#back)

***

### backToHome()

> **backToHome**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11171](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11171)

请求返回到home窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`backToHome`](TImageBase.md#backtohome)

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

[`TImageBase`](TImageBase.md).[`child`](TImageBase.md#child)

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

[`TImageBase`](TImageBase.md).[`clone`](TImageBase.md#clone)

***

### closeWindow()

> **closeWindow**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11138](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11138)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`closeWindow`](TImageBase.md#closewindow)

***

### closeWindowForce()

> **closeWindowForce**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11149](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11149)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`closeWindowForce`](TImageBase.md#closewindowforce)

***

### countChildren()

> **countChildren**(): `number`

Defined in: [awtk.ts:11058](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11058)

获取子控件的个数。

#### Returns

`number`

子控件的个数。

#### Inherited from

[`TImageBase`](TImageBase.md).[`countChildren`](TImageBase.md#countchildren)

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

[`TImageBase`](TImageBase.md).[`createAnimator`](TImageBase.md#createanimator)

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

[`TImageBase`](TImageBase.md).[`destroy`](TImageBase.md#destroy)

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

[`TImageBase`](TImageBase.md).[`destroyAnimator`](TImageBase.md#destroyanimator)

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

[`TImageBase`](TImageBase.md).[`destroyAsync`](TImageBase.md#destroyasync)

***

### destroyChildren()

> **destroyChildren**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11909](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11909)

销毁全部子控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`destroyChildren`](TImageBase.md#destroychildren)

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

[`TImageBase`](TImageBase.md).[`dispatchToKeyTarget`](TImageBase.md#dispatchtokeytarget)

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

[`TImageBase`](TImageBase.md).[`dispatchToTarget`](TImageBase.md#dispatchtotarget)

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

[`TImageBase`](TImageBase.md).[`equal`](TImageBase.md#equal)

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

[`TImageBase`](TImageBase.md).[`fillBgRect`](TImageBase.md#fillbgrect)

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

[`TImageBase`](TImageBase.md).[`fillFgRect`](TImageBase.md#fillfgrect)

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

[`TImageBase`](TImageBase.md).[`findParentByName`](TImageBase.md#findparentbyname)

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

[`TImageBase`](TImageBase.md).[`findParentByType`](TImageBase.md#findparentbytype)

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

[`TImageBase`](TImageBase.md).[`focusNext`](TImageBase.md#focusnext)

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

[`TImageBase`](TImageBase.md).[`focusPrev`](TImageBase.md#focusprev)

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

[`TImageBase`](TImageBase.md).[`foreach`](TImageBase.md#foreach)

***

### getAutoAdjustSize()

> **getAutoAdjustSize**(): `boolean`

Defined in: [awtk.ts:11530](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11530)

获取控件auto_adjust_size属性值。

#### Returns

`boolean`

返回auto_adjust_size。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getAutoAdjustSize`](TImageBase.md#getautoadjustsize)

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

[`TImageBase`](TImageBase.md).[`getChild`](TImageBase.md#getchild)

***

### getEnable()

> **getEnable**(): `boolean`

Defined in: [awtk.ts:11508](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11508)

获取控件enable属性值。

#### Returns

`boolean`

返回enable。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getEnable`](TImageBase.md#getenable)

***

### getFeedback()

> **getFeedback**(): `boolean`

Defined in: [awtk.ts:11585](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11585)

获取控件feedback属性值。

#### Returns

`boolean`

返回feedback。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getFeedback`](TImageBase.md#getfeedback)

***

### getFloating()

> **getFloating**(): `boolean`

Defined in: [awtk.ts:11519](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11519)

获取控件floating属性值。

#### Returns

`boolean`

返回floating。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getFloating`](TImageBase.md#getfloating)

***

### getFocusable()

> **getFocusable**(): `boolean`

Defined in: [awtk.ts:11552](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11552)

获取控件focusable属性值。

#### Returns

`boolean`

返回focusable。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getFocusable`](TImageBase.md#getfocusable)

***

### getFocusedWidget()

> **getFocusedWidget**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11105](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11105)

获取当前窗口中的焦点控件。

#### Returns

[`TWidget`](TWidget.md)

焦点控件。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getFocusedWidget`](TImageBase.md#getfocusedwidget)

***

### getNativeWindow()

> **getNativeWindow**(): [`TNativeWindow`](TNativeWindow.md)

Defined in: [awtk.ts:11116](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11116)

获取原生窗口对象。

#### Returns

[`TNativeWindow`](TNativeWindow.md)

原生窗口对象。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getNativeWindow`](TImageBase.md#getnativewindow)

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

[`TImageBase`](TImageBase.md).[`getProp`](TImageBase.md#getprop)

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

[`TImageBase`](TImageBase.md).[`getPropBool`](TImageBase.md#getpropbool)

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

[`TImageBase`](TImageBase.md).[`getPropFloat`](TImageBase.md#getpropfloat)

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

[`TImageBase`](TImageBase.md).[`getPropInt`](TImageBase.md#getpropint)

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

[`TImageBase`](TImageBase.md).[`getPropPointer`](TImageBase.md#getproppointer)

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

[`TImageBase`](TImageBase.md).[`getPropStr`](TImageBase.md#getpropstr)

***

### getSensitive()

> **getSensitive**(): `boolean`

Defined in: [awtk.ts:11563](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11563)

获取控件sensitive属性值。

#### Returns

`boolean`

返回sensitive。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getSensitive`](TImageBase.md#getsensitive)

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

[`TImageBase`](TImageBase.md).[`getStateForStyle`](TImageBase.md#getstateforstyle)

***

### getStyleType()

> **getStyleType**(): `string`

Defined in: [awtk.ts:12664](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12664)

获取 widget 对应风格类型

#### Returns

`string`

返回 widget 的对应风格类型。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getStyleType`](TImageBase.md#getstyletype)

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

[`TImageBase`](TImageBase.md).[`getText`](TImageBase.md#gettext)

***

### getThemeName()

> **getThemeName**(): `string`

Defined in: [awtk.ts:11636](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11636)

获取 theme 的名称

#### Returns

`string`

成功返回主题名称，失败否则 NULL。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getThemeName`](TImageBase.md#getthemename)

***

### getType()

> **getType**(): `string`

Defined in: [awtk.ts:12504](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12504)

获取当前控件的类型名称。

#### Returns

`string`

返回类型名。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getType`](TImageBase.md#gettype)

***

### getValue()

> **getValue**(): `number`

Defined in: [awtk.ts:11250](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11250)

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getValue`](TImageBase.md#getvalue)

***

### getValueInt()

> **getValueInt**(): `number`

Defined in: [awtk.ts:11287](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11287)

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getValueInt`](TImageBase.md#getvalueint)

***

### getVisible()

> **getVisible**(): `boolean`

Defined in: [awtk.ts:11574](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11574)

获取控件visible属性值。

#### Returns

`boolean`

返回visible。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getVisible`](TImageBase.md#getvisible)

***

### getWindow()

> **getWindow**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:12482](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12482)

获取当前控件所在的窗口。

#### Returns

[`TWidget`](TWidget.md)

窗口对象。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getWindow`](TImageBase.md#getwindow)

***

### getWindowManager()

> **getWindowManager**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:12493](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12493)

获取当前的窗口管理器。

#### Returns

[`TWidget`](TWidget.md)

窗口管理器对象。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getWindowManager`](TImageBase.md#getwindowmanager)

***

### getWithFocusState()

> **getWithFocusState**(): `boolean`

Defined in: [awtk.ts:11541](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11541)

获取控件with_focus_state属性值。

#### Returns

`boolean`

返回with_focus_state。

#### Inherited from

[`TImageBase`](TImageBase.md).[`getWithFocusState`](TImageBase.md#getwithfocusstate)

***

### hasHighlighter()

> **hasHighlighter**(): `boolean`

Defined in: [awtk.ts:11404](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11404)

判断widget拥有高亮属性。

#### Returns

`boolean`

拥有返回 TRUE，没有返回 FALSE。

#### Inherited from

[`TImageBase`](TImageBase.md).[`hasHighlighter`](TImageBase.md#hashighlighter)

***

### indexOf()

> **indexOf**(): `number`

Defined in: [awtk.ts:11127](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11127)

获取控件在父控件中的索引编号。

#### Returns

`number`

在父控件中的索引编号。

#### Inherited from

[`TImageBase`](TImageBase.md).[`indexOf`](TImageBase.md#indexof)

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

[`TImageBase`](TImageBase.md).[`insertChild`](TImageBase.md#insertchild)

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

[`TImageBase`](TImageBase.md).[`invalidateForce`](TImageBase.md#invalidateforce)

***

### isAlwaysOnTop()

> **isAlwaysOnTop**(): `boolean`

Defined in: [awtk.ts:12375](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12375)

检查控件是否总在最上层。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isAlwaysOnTop`](TImageBase.md#isalwaysontop)

***

### isDesigningWindow()

> **isDesigningWindow**(): `boolean`

Defined in: [awtk.ts:12447](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12447)

判断当前控件是否是设计窗口。

#### Returns

`boolean`

返回当前控件是否是设计窗口。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isDesigningWindow`](TImageBase.md#isdesigningwindow)

***

### isDialog()

> **isDialog**(): `boolean`

Defined in: [awtk.ts:12342](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12342)

检查控件是否是对话框类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isDialog`](TImageBase.md#isdialog)

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

[`TImageBase`](TImageBase.md).[`isDirectParentOf`](TImageBase.md#isdirectparentof)

***

### isFullscreenWindow()

> **isFullscreenWindow**(): `boolean`

Defined in: [awtk.ts:12331](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12331)

检查控件是否是全屏窗口。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isFullscreenWindow`](TImageBase.md#isfullscreenwindow)

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

[`TImageBase`](TImageBase.md).[`isKeyboard`](TImageBase.md#iskeyboard)

***

### isNormalWindow()

> **isNormalWindow**(): `boolean`

Defined in: [awtk.ts:12320](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12320)

检查控件是否是普通窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isNormalWindow`](TImageBase.md#isnormalwindow)

***

### isOpenedDialog()

> **isOpenedDialog**(): `boolean`

Defined in: [awtk.ts:12408](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12408)

检查控件弹出对话框控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isOpenedDialog`](TImageBase.md#isopeneddialog)

***

### isOpenedPopup()

> **isOpenedPopup**(): `boolean`

Defined in: [awtk.ts:12419](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12419)

检查控件弹出窗口控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isOpenedPopup`](TImageBase.md#isopenedpopup)

***

### isOverlay()

> **isOverlay**(): `boolean`

Defined in: [awtk.ts:12364](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12364)

检查控件是否是overlay窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isOverlay`](TImageBase.md#isoverlay)

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

[`TImageBase`](TImageBase.md).[`isParentOf`](TImageBase.md#isparentof)

***

### isPopup()

> **isPopup**(): `boolean`

Defined in: [awtk.ts:12353](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12353)

检查控件是否是弹出窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isPopup`](TImageBase.md#ispopup)

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

[`TImageBase`](TImageBase.md).[`isStyleExist`](TImageBase.md#isstyleexist)

***

### isSupportHighlighter()

> **isSupportHighlighter**(): `boolean`

Defined in: [awtk.ts:11393](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11393)

判断widget是否支持高亮。

#### Returns

`boolean`

支持返回 TRUE，不支持返回 FALSE。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isSupportHighlighter`](TImageBase.md#issupporthighlighter)

***

### isSuspendDialog()

> **isSuspendDialog**(): `boolean`

Defined in: [awtk.ts:12386](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12386)

检查控件弹出对话框控件是否是挂起状态。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isSuspendDialog`](TImageBase.md#issuspenddialog)

***

### isSuspendPopup()

> **isSuspendPopup**(): `boolean`

Defined in: [awtk.ts:12397](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12397)

检查控件弹出窗口控件是否是挂起状态。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isSuspendPopup`](TImageBase.md#issuspendpopup)

***

### isSystemBar()

> **isSystemBar**(): `boolean`

Defined in: [awtk.ts:12309](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12309)

检查控件是否是system bar类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isSystemBar`](TImageBase.md#issystembar)

***

### isWindow()

> **isWindow**(): `boolean`

Defined in: [awtk.ts:12298](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12298)

判断当前控件是否是窗口。

#### Returns

`boolean`

返回当前控件是否是窗口。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isWindow`](TImageBase.md#iswindow)

***

### isWindowCreated()

> **isWindowCreated**(): `boolean`

Defined in: [awtk.ts:12263](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12263)

判断窗口及子控件创建或加载是否完成。

#### Returns

`boolean`

返回创建或加载是否完成。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isWindowCreated`](TImageBase.md#iswindowcreated)

***

### isWindowManager()

> **isWindowManager**(): `boolean`

Defined in: [awtk.ts:12458](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12458)

判断当前控件是否是窗口管理器。

#### Returns

`boolean`

返回当前控件是否是窗口管理器。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isWindowManager`](TImageBase.md#iswindowmanager)

***

### isWindowOpened()

> **isWindowOpened**(): `boolean`

Defined in: [awtk.ts:12252](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12252)

判断当前控件所在的窗口是否已经打开。

#### Returns

`boolean`

返回当前控件所在的窗口是否已经打开。

#### Inherited from

[`TImageBase`](TImageBase.md).[`isWindowOpened`](TImageBase.md#iswindowopened)

***

### layout()

> **layout**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12747](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12747)

布局当前控件及子控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`layout`](TImageBase.md#layout)

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

[`TImageBase`](TImageBase.md).[`lookup`](TImageBase.md#lookup)

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

[`TImageBase`](TImageBase.md).[`lookupByType`](TImageBase.md#lookupbytype)

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

[`TImageBase`](TImageBase.md).[`move`](TImageBase.md#move)

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

[`TImageBase`](TImageBase.md).[`moveResize`](TImageBase.md#moveresize)

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

[`TImageBase`](TImageBase.md).[`moveResizeEx`](TImageBase.md#moveresizeex)

***

### moveToCenter()

> **moveToCenter**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11195](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L11195)

移动控件到父控件中间。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`moveToCenter`](TImageBase.md#movetocenter)

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

[`TImageBase`](TImageBase.md).[`off`](TImageBase.md#off)

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

[`TImageBase`](TImageBase.md).[`on`](TImageBase.md#on)

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

[`TImageBase`](TImageBase.md).[`pauseAnimator`](TImageBase.md#pauseanimator)

***

### ref()

> **ref**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:12577](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12577)

增加控件的引用计数。

#### Returns

[`TWidget`](TWidget.md)

返回控件对象。

#### Inherited from

[`TImageBase`](TImageBase.md).[`ref`](TImageBase.md#ref)

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

[`TImageBase`](TImageBase.md).[`removeChild`](TImageBase.md#removechild)

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

[`TImageBase`](TImageBase.md).[`resize`](TImageBase.md#resize)

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

[`TImageBase`](TImageBase.md).[`restack`](TImageBase.md#restack)

***

### setAnchor()

> **setAnchor**(`anchor_x`, `anchor_y`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:16684](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16684)

设置控件的锚点(仅在WITH_VGCANVAS定义时生效)。

#### Parameters

##### anchor\_x

`number`

锚点X(0-1)。0在控件左边，0.5在控件中间，1在控件右边。

##### anchor\_y

`number`

锚点Y(0-1)。0在控件顶部，0.5在控件中间，1在控件底部。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setAnchor`](TImageBase.md#setanchor)

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

[`TImageBase`](TImageBase.md).[`setAnimation`](TImageBase.md#setanimation)

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

[`TImageBase`](TImageBase.md).[`setAnimatorTimeScale`](TImageBase.md#setanimatortimescale)

***

### setAsKeyTarget()

> **setAsKeyTarget**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12697](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12697)

递归的把父控件的key_target设置为自己。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setAsKeyTarget`](TImageBase.md#setaskeytarget)

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

[`TImageBase`](TImageBase.md).[`setAutoAdjustSize`](TImageBase.md#setautoadjustsize)

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

[`TImageBase`](TImageBase.md).[`setChildrenLayout`](TImageBase.md#setchildrenlayout)

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

[`TImageBase`](TImageBase.md).[`setChildText`](TImageBase.md#setchildtext)

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

[`TImageBase`](TImageBase.md).[`setChildTextWithDouble`](TImageBase.md#setchildtextwithdouble)

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

[`TImageBase`](TImageBase.md).[`setChildTextWithInt`](TImageBase.md#setchildtextwithint)

***

### setClickable()

> **setClickable**(`clickable`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:16720](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16720)

设置控件是否可以被点击。

#### Parameters

##### clickable

`boolean`

是否可以被点击。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setClickable`](TImageBase.md#setclickable)

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

[`TImageBase`](TImageBase.md).[`setDirtyRectTolerance`](TImageBase.md#setdirtyrecttolerance)

***

### setDrawType()

> **setDrawType**(`draw_type`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:31325](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31325)

设置图片的绘制方式。

#### Parameters

##### draw\_type

[`TImageDrawType`](../enumerations/TImageDrawType.md)

绘制方式(仅在没有旋转和缩放时生效)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

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

[`TImageBase`](TImageBase.md).[`setEnable`](TImageBase.md#setenable)

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

[`TImageBase`](TImageBase.md).[`setFeedback`](TImageBase.md#setfeedback)

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

[`TImageBase`](TImageBase.md).[`setFloating`](TImageBase.md#setfloating)

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

[`TImageBase`](TImageBase.md).[`setFocusable`](TImageBase.md#setfocusable)

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

[`TImageBase`](TImageBase.md).[`setFocused`](TImageBase.md#setfocused)

***

### setImage()

> **setImage**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:16646](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16646)

设置控件的图片名称。

> 如果需要显示文件系统中的图片，只需将图片名称换成实际的文件名，并加上"file://"前缀即可。

#### Parameters

##### name

`string`

图片名称，该图片必须存在于资源管理器。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setImage`](TImageBase.md#setimage)

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

[`TImageBase`](TImageBase.md).[`setName`](TImageBase.md#setname)

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

[`TImageBase`](TImageBase.md).[`setOpacity`](TImageBase.md#setopacity)

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

[`TImageBase`](TImageBase.md).[`setPointerCursor`](TImageBase.md#setpointercursor)

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

[`TImageBase`](TImageBase.md).[`setProp`](TImageBase.md#setprop)

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

[`TImageBase`](TImageBase.md).[`setPropBool`](TImageBase.md#setpropbool)

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

[`TImageBase`](TImageBase.md).[`setPropFloat`](TImageBase.md#setpropfloat)

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

[`TImageBase`](TImageBase.md).[`setPropInt`](TImageBase.md#setpropint)

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

[`TImageBase`](TImageBase.md).[`setPropPointer`](TImageBase.md#setproppointer)

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

[`TImageBase`](TImageBase.md).[`setProps`](TImageBase.md#setprops)

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

[`TImageBase`](TImageBase.md).[`setPropStr`](TImageBase.md#setpropstr)

***

### setRotation()

> **setRotation**(`rotation`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:16658](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16658)

设置控件的旋转角度(仅在WITH_VGCANVAS定义时生效)。

#### Parameters

##### rotation

`number`

旋转角度(幅度)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setRotation`](TImageBase.md#setrotation)

***

### setScale()

> **setScale**(`scale_x`, `scale_y`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:16671](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16671)

设置控件的缩放比例(仅在WITH_VGCANVAS定义时生效)。

#### Parameters

##### scale\_x

`number`

X方向缩放比例。

##### scale\_y

`number`

Y方向缩放比例。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setScale`](TImageBase.md#setscale)

***

### setSelectable()

> **setSelectable**(`selectable`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:16708](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16708)

设置控件是否可以被选中。

#### Parameters

##### selectable

`boolean`

是否可以被选中。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setSelectable`](TImageBase.md#setselectable)

***

### setSelected()

> **setSelected**(`selected`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:16696](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L16696)

设置控件的选中状态。

#### Parameters

##### selected

`boolean`

是否被选中。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`setSelected`](TImageBase.md#setselected)

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

[`TImageBase`](TImageBase.md).[`setSelfLayout`](TImageBase.md#setselflayout)

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

[`TImageBase`](TImageBase.md).[`setSelfLayoutParams`](TImageBase.md#setselflayoutparams)

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

[`TImageBase`](TImageBase.md).[`setSensitive`](TImageBase.md#setsensitive)

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

[`TImageBase`](TImageBase.md).[`setState`](TImageBase.md#setstate)

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

[`TImageBase`](TImageBase.md).[`setStateFromParentSync`](TImageBase.md#setstatefromparentsync)

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

[`TImageBase`](TImageBase.md).[`setStyleColor`](TImageBase.md#setstylecolor)

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

[`TImageBase`](TImageBase.md).[`setStyleInt`](TImageBase.md#setstyleint)

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

[`TImageBase`](TImageBase.md).[`setStyleStr`](TImageBase.md#setstylestr)

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

[`TImageBase`](TImageBase.md).[`setSyncStateToChildren`](TImageBase.md#setsyncstatetochildren)

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

[`TImageBase`](TImageBase.md).[`setText`](TImageBase.md#settext)

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

[`TImageBase`](TImageBase.md).[`setTextEx`](TImageBase.md#settextex)

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

[`TImageBase`](TImageBase.md).[`setTheme`](TImageBase.md#settheme)

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

[`TImageBase`](TImageBase.md).[`setTrText`](TImageBase.md#settrtext)

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

[`TImageBase`](TImageBase.md).[`setValue`](TImageBase.md#setvalue)

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

[`TImageBase`](TImageBase.md).[`setValueInt`](TImageBase.md#setvalueint)

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

[`TImageBase`](TImageBase.md).[`setVisible`](TImageBase.md#setvisible)

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

[`TImageBase`](TImageBase.md).[`setVisibleOnly`](TImageBase.md#setvisibleonly)

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

[`TImageBase`](TImageBase.md).[`startAnimator`](TImageBase.md#startanimator)

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

[`TImageBase`](TImageBase.md).[`stopAnimator`](TImageBase.md#stopanimator)

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

[`TImageBase`](TImageBase.md).[`strokeBorderRect`](TImageBase.md#strokeborderrect)

***

### unref()

> **unref**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12588](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12588)

减少控件的引用计数。引用计数为0时销毁控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`unref`](TImageBase.md#unref)

***

### updateStyle()

> **updateStyle**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12675](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12675)

让控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`updateStyle`](TImageBase.md#updatestyle)

***

### updateStyleRecursive()

> **updateStyleRecursive**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12686](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L12686)

让控件及子控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TImageBase`](TImageBase.md).[`updateStyleRecursive`](TImageBase.md#updatestylerecursive)

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

[`TImageBase`](TImageBase.md).[`useStyle`](TImageBase.md#usestyle)

***

### cast()

> `static` **cast**(`widget`): `TImage`

Defined in: [awtk.ts:31337](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31337)

转换为image对象(供脚本语言使用)。

#### Parameters

##### widget

[`TWidget`](TWidget.md)

image对象。

#### Returns

`TImage`

image对象。

#### Overrides

[`TImageBase`](TImageBase.md).[`cast`](TImageBase.md#cast)

***

### create()

> `static` **create**(`parent`, `x`, `y`, `w`, `h`): `TImage`

Defined in: [awtk.ts:31297](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31297)

创建image对象

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

`TImage`

对象。

***

### iconCreate()

> `static` **iconCreate**(`parent`, `x`, `y`, `w`, `h`): `TImage`

Defined in: [awtk.ts:31313](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L31313)

创建icon对象

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

`TImage`

对象。
