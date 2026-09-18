[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TVpage

# Class: TVpage

Defined in: [awtk.ts:24583](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24583)

虚拟页面(根据情况自动加载/卸载页面，并提供入场/出场动画)。

> 虚拟页面只能作为pages的直接子控件使用。

如果指定了ui_asset:

* 当页面切换到后台时自动卸载，并触发EVT\_VPAGE\_CLOSE消息。
* 当页面切换到前台时自动加载，在动画前出发EVT\_VPAGE\_WILL\_OPEN消息，在动画完成时触发 EVT\_VPAGE\_CLOSE消息。

vpage\_t也可以当作普通view嵌入到pages中，让tab控件在切换时具有动画效果。

在xml中使用"vpage"标签创建控件。如：

```xml
<!-- ui -->
<vpage x="c" y="50" w="100" h="100" ui_asset="mypage"/>
```

可用通过style来设置控件的显示风格，如字体的大小和颜色等等(一般无需指定)。如：

```xml
<!-- style -->
<vpage>
<style name="default">
<normal />
</style>
</vpage>
```

## Extends

- [`TWidget`](TWidget.md)

## Constructors

### Constructor

> **new TVpage**(`nativeObj`): `TVpage`

Defined in: [awtk.ts:24585](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24585)

#### Parameters

##### nativeObj

`any`

#### Returns

`TVpage`

#### Overrides

[`TWidget`](TWidget.md).[`constructor`](TWidget.md#constructor)

## Properties

### nativeObj

> **nativeObj**: `any`

Defined in: [awtk.ts:24584](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24584)

#### Overrides

[`TWidget`](TWidget.md).[`nativeObj`](TWidget.md#nativeobj)

## Accessors

### animation

#### Get Signature

> **get** **animation**(): `string`

Defined in: [awtk.ts:12947](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12947)

动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)

##### Returns

`string`

#### Set Signature

> **set** **animation**(`v`): `void`

Defined in: [awtk.ts:12951](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12951)

##### Parameters

###### v

`string`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`animation`](TWidget.md#animation)

***

### animHint

#### Get Signature

> **get** **animHint**(): `string`

Defined in: [awtk.ts:24659](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24659)

动画类型(目前支持：vtranslate: 垂直平移，htranslate: 水平平移)。

##### Returns

`string`

#### Set Signature

> **set** **animHint**(`v`): `void`

Defined in: [awtk.ts:24663](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24663)

##### Parameters

###### v

`string`

##### Returns

`void`

***

### autoAdjustSize

#### Get Signature

> **get** **autoAdjustSize**(): `boolean`

Defined in: [awtk.ts:13038](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13038)

是否根据子控件和文本自动调整控件自身大小。

> 为true时，最好不要使用 layout 的相关东西，否则可能有冲突。
> 注意：只是调整控件的本身的宽高，不会修改控件本身的位置，仅部分控件实现该效果。

##### Returns

`boolean`

#### Set Signature

> **set** **autoAdjustSize**(`v`): `void`

Defined in: [awtk.ts:13042](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13042)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`autoAdjustSize`](TWidget.md#autoadjustsize)

***

### dirtyRectTolerance

#### Get Signature

> **get** **dirtyRectTolerance**(): `number`

Defined in: [awtk.ts:13105](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13105)

脏矩形超出控件本身大小的最大范围(一般不用指定)。

> 如果 border 太粗或 offset 太大等原因，导致脏矩形超出控件本身大小太多（大于缺省值）时，才需要指定。

##### Returns

`number`

#### Set Signature

> **set** **dirtyRectTolerance**(`v`): `void`

Defined in: [awtk.ts:13109](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13109)

##### Parameters

###### v

`number`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`dirtyRectTolerance`](TWidget.md#dirtyrecttolerance)

***

### enable

#### Get Signature

> **get** **enable**(): `boolean`

Defined in: [awtk.ts:12960](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12960)

启用/禁用状态。

##### Returns

`boolean`

#### Set Signature

> **set** **enable**(`v`): `void`

Defined in: [awtk.ts:12964](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12964)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`enable`](TWidget.md#enable)

***

### feedback

#### Get Signature

> **get** **feedback**(): `boolean`

Defined in: [awtk.ts:12973](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12973)

是否启用按键音、触屏音和震动等反馈。

##### Returns

`boolean`

#### Set Signature

> **set** **feedback**(`v`): `void`

Defined in: [awtk.ts:12977](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12977)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`feedback`](TWidget.md#feedback)

***

### floating

#### Get Signature

> **get** **floating**(): `boolean`

Defined in: [awtk.ts:13051](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13051)

标识控件是否启用浮动布局，不受父控件的children_layout的控制。

##### Returns

`boolean`

#### Set Signature

> **set** **floating**(`v`): `void`

Defined in: [awtk.ts:13055](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13055)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`floating`](TWidget.md#floating)

***

### focusable

#### Get Signature

> **get** **focusable**(): `boolean`

Defined in: [awtk.ts:13012](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13012)

是否支持焦点停留。

##### Returns

`boolean`

#### Set Signature

> **set** **focusable**(`v`): `void`

Defined in: [awtk.ts:13016](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13016)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`focusable`](TWidget.md#focusable)

***

### h

#### Get Signature

> **get** **h**(): `number`

Defined in: [awtk.ts:12890](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12890)

高度。

##### Returns

`number`

#### Inherited from

[`TWidget`](TWidget.md).[`h`](TWidget.md#h)

***

### name

#### Get Signature

> **get** **name**(): `string`

Defined in: [awtk.ts:12899](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12899)

控件名字。

##### Returns

`string`

#### Set Signature

> **set** **name**(`v`): `void`

Defined in: [awtk.ts:12903](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12903)

##### Parameters

###### v

`string`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`name`](TWidget.md#name)

***

### opacity

#### Get Signature

> **get** **opacity**(): `number`

Defined in: [awtk.ts:13090](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13090)

不透明度(0-255)，0完全透明，255完全不透明。

##### Returns

`number`

#### Set Signature

> **set** **opacity**(`v`): `void`

Defined in: [awtk.ts:13094](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13094)

##### Parameters

###### v

`number`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`opacity`](TWidget.md#opacity)

***

### parent

#### Get Signature

> **get** **parent**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:13118](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13118)

父控件

##### Returns

[`TWidget`](TWidget.md)

#### Inherited from

[`TWidget`](TWidget.md).[`parent`](TWidget.md#parent)

***

### pointerCursor

#### Get Signature

> **get** **pointerCursor**(): `string`

Defined in: [awtk.ts:12912](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12912)

鼠标光标图片名称。

##### Returns

`string`

#### Set Signature

> **set** **pointerCursor**(`v`): `void`

Defined in: [awtk.ts:12916](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12916)

##### Parameters

###### v

`string`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`pointerCursor`](TWidget.md#pointercursor)

***

### sensitive

#### Get Signature

> **get** **sensitive**(): `boolean`

Defined in: [awtk.ts:12999](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12999)

是否接受用户事件。

##### Returns

`boolean`

#### Set Signature

> **set** **sensitive**(`v`): `void`

Defined in: [awtk.ts:13003](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13003)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`sensitive`](TWidget.md#sensitive)

***

### stateFromParentSync

#### Get Signature

> **get** **stateFromParentSync**(): `boolean`

Defined in: [awtk.ts:13077](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13077)

标识是否接收父控件的状态同步。

##### Returns

`boolean`

#### Set Signature

> **set** **stateFromParentSync**(`v`): `void`

Defined in: [awtk.ts:13081](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13081)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`stateFromParentSync`](TWidget.md#statefromparentsync)

***

### style

#### Get Signature

> **get** **style**(): `string`

Defined in: [awtk.ts:12938](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12938)

style的名称。

##### Returns

`string`

#### Inherited from

[`TWidget`](TWidget.md).[`style`](TWidget.md#style)

***

### syncStateToChildren

#### Get Signature

> **get** **syncStateToChildren**(): `boolean`

Defined in: [awtk.ts:13064](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13064)

标识是否将当前控件状态同步到子控件中。

##### Returns

`boolean`

#### Set Signature

> **set** **syncStateToChildren**(`v`): `void`

Defined in: [awtk.ts:13068](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13068)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`syncStateToChildren`](TWidget.md#syncstatetochildren)

***

### trText

#### Get Signature

> **get** **trText**(): `string`

Defined in: [awtk.ts:12925](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12925)

保存用于翻译的字符串。

##### Returns

`string`

#### Set Signature

> **set** **trText**(`v`): `void`

Defined in: [awtk.ts:12929](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12929)

##### Parameters

###### v

`string`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`trText`](TWidget.md#trtext)

***

### uiAsset

#### Get Signature

> **get** **uiAsset**(): `string`

Defined in: [awtk.ts:24646](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24646)

UI资源名称。

##### Returns

`string`

#### Set Signature

> **set** **uiAsset**(`v`): `void`

Defined in: [awtk.ts:24650](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24650)

##### Parameters

###### v

`string`

##### Returns

`void`

***

### visible

#### Get Signature

> **get** **visible**(): `boolean`

Defined in: [awtk.ts:12986](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12986)

是否可见。

##### Returns

`boolean`

#### Set Signature

> **set** **visible**(`v`): `void`

Defined in: [awtk.ts:12990](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12990)

##### Parameters

###### v

`boolean`

##### Returns

`void`

#### Inherited from

[`TWidget`](TWidget.md).[`visible`](TWidget.md#visible)

***

### w

#### Get Signature

> **get** **w**(): `number`

Defined in: [awtk.ts:12881](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12881)

宽度。

##### Returns

`number`

#### Inherited from

[`TWidget`](TWidget.md).[`w`](TWidget.md#w)

***

### withFocusState

#### Get Signature

> **get** **withFocusState**(): `boolean`

Defined in: [awtk.ts:13026](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L13026)

是否支持焦点状态。
> 如果希望style支持焦点状态，但又不希望焦点停留，可用本属性。

##### Returns

`boolean`

#### Inherited from

[`TWidget`](TWidget.md).[`withFocusState`](TWidget.md#withfocusstate)

***

### x

#### Get Signature

> **get** **x**(): `number`

Defined in: [awtk.ts:12863](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12863)

x坐标(相对于父控件的x坐标)。

##### Returns

`number`

#### Inherited from

[`TWidget`](TWidget.md).[`x`](TWidget.md#x)

***

### y

#### Get Signature

> **get** **y**(): `number`

Defined in: [awtk.ts:12872](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12872)

y坐标(相对于父控件的y坐标)。

##### Returns

`number`

#### Inherited from

[`TWidget`](TWidget.md).[`y`](TWidget.md#y)

## Methods

### addChild()

> **addChild**(`child`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11921](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11921)

加入一个子控件。

#### Parameters

##### child

[`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`addChild`](TWidget.md#addchild)

***

### addChildDefault()

> **addChildDefault**(`child`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12854](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12854)

加入一个子控件默认实现(供子类调用)。

#### Parameters

##### child

[`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`addChildDefault`](TWidget.md#addchilddefault)

***

### addValue()

> **addValue**(`delta`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11276](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11276)

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

[`TWidget`](TWidget.md).[`addValue`](TWidget.md#addvalue)

***

### addValueInt()

> **addValueInt**(`delta`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11313](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11313)

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

[`TWidget`](TWidget.md).[`addValueInt`](TWidget.md#addvalueint)

***

### animatePositionTo()

> **animatePositionTo**(`x`, `y`, `duration`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11355](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11355)

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

[`TWidget`](TWidget.md).[`animatePositionTo`](TWidget.md#animatepositionto)

***

### animatePropFloatTo()

> **animatePropFloatTo**(`name`, `value`, `duration`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11341](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11341)

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

[`TWidget`](TWidget.md).[`animatePropFloatTo`](TWidget.md#animatepropfloatto)

***

### animateSizeTo()

> **animateSizeTo**(`w`, `h`, `duration`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11369](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11369)

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

[`TWidget`](TWidget.md).[`animateSizeTo`](TWidget.md#animatesizeto)

***

### animateValueTo()

> **animateValueTo**(`value`, `duration`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11327](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11327)

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

[`TWidget`](TWidget.md).[`animateValueTo`](TWidget.md#animatevalueto)

***

### back()

> **back**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11160](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11160)

请求返回到前一个窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`back`](TWidget.md#back)

***

### backToHome()

> **backToHome**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11171](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11171)

请求返回到home窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`backToHome`](TWidget.md#backtohome)

***

### child()

> **child**(`name`): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11970](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11970)

查找指定名称的子控件(同widget_lookup(widget, name, FALSE))。

#### Parameters

##### name

`string`

子控件的名称。

#### Returns

[`TWidget`](TWidget.md)

子控件或NULL。

#### Inherited from

[`TWidget`](TWidget.md).[`child`](TWidget.md#child)

***

### clone()

> **clone**(`parent`): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:12516](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12516)

clone。

#### Parameters

##### parent

[`TWidget`](TWidget.md)

clone新控件的parent对象。

#### Returns

[`TWidget`](TWidget.md)

返回clone的对象。

#### Inherited from

[`TWidget`](TWidget.md).[`clone`](TWidget.md#clone)

***

### closeWindow()

> **closeWindow**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11138](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11138)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`closeWindow`](TWidget.md#closewindow)

***

### closeWindowForce()

> **closeWindowForce**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11149](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11149)

关闭控件所在的窗口。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`closeWindowForce`](TWidget.md#closewindowforce)

***

### countChildren()

> **countChildren**(): `number`

Defined in: [awtk.ts:11058](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11058)

获取子控件的个数。

#### Returns

`number`

子控件的个数。

#### Inherited from

[`TWidget`](TWidget.md).[`countChildren`](TWidget.md#countchildren)

***

### createAnimator()

> **createAnimator**(`animation`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11677](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11677)

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

[`TWidget`](TWidget.md).[`createAnimator`](TWidget.md#createanimator)

***

### destroy()

> **destroy**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12553](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12553)

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`destroy`](TWidget.md#destroy)

***

### destroyAnimator()

> **destroyAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11763](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11763)

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

[`TWidget`](TWidget.md).[`destroyAnimator`](TWidget.md#destroyanimator)

***

### destroyAsync()

> **destroyAsync**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12566](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12566)

从父控件中移除控件，并调用unref函数销毁控件。

> 一般无需直接调用，关闭窗口时，自动销毁相关控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`destroyAsync`](TWidget.md#destroyasync)

***

### destroyChildren()

> **destroyChildren**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11909](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11909)

销毁全部子控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`destroyChildren`](TWidget.md#destroychildren)

***

### dispatchToKeyTarget()

> **dispatchToKeyTarget**(`e`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12653](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12653)

递归的分发一个事件到所有key_target子控件。

#### Parameters

##### e

[`TEvent`](TEvent.md)

事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`dispatchToKeyTarget`](TWidget.md#dispatchtokeytarget)

***

### dispatchToTarget()

> **dispatchToTarget**(`e`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12641](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12641)

递归的分发一个事件到所有target子控件。

#### Parameters

##### e

[`TEvent`](TEvent.md)

事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`dispatchToTarget`](TWidget.md#dispatchtotarget)

***

### equal()

> **equal**(`other`): `boolean`

Defined in: [awtk.ts:12528](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12528)

判断两个widget是否相同。

#### Parameters

##### other

[`TWidget`](TWidget.md)

要比较的控件对象。

#### Returns

`boolean`

返回TRUE表示相同，否则表示不同。

#### Inherited from

[`TWidget`](TWidget.md).[`equal`](TWidget.md#equal)

***

### fillBgRect()

> **fillBgRect**(`c`, `r`, `draw_type`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12615](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12615)

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

[`TWidget`](TWidget.md).[`fillBgRect`](TWidget.md#fillbgrect)

***

### fillFgRect()

> **fillFgRect**(`c`, `r`, `draw_type`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12629](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12629)

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

[`TWidget`](TWidget.md).[`fillFgRect`](TWidget.md#fillfgrect)

***

### findParentByName()

> **findParentByName**(`name`): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11082](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11082)

通过名称查找父控件。

#### Parameters

##### name

`string`

名称。

#### Returns

[`TWidget`](TWidget.md)

父控件。

#### Inherited from

[`TWidget`](TWidget.md).[`findParentByName`](TWidget.md#findparentbyname)

***

### findParentByType()

> **findParentByType**(`type`): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11094](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11094)

通过类型查找父控件。

#### Parameters

##### type

`string`

类型。

#### Returns

[`TWidget`](TWidget.md)

父控件。

#### Inherited from

[`TWidget`](TWidget.md).[`findParentByType`](TWidget.md#findparentbytype)

***

### focusNext()

> **focusNext**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12710](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12710)

把焦点移动下一个控件。

>widget必须是当前焦点控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`focusNext`](TWidget.md#focusnext)

***

### focusPrev()

> **focusPrev**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12723](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12723)

把焦点移动前一个控件。

>widget必须是当前焦点控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`focusPrev`](TWidget.md#focusprev)

***

### foreach()

> **foreach**(`visit`, `ctx`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12471](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12471)

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

[`TWidget`](TWidget.md).[`foreach`](TWidget.md#foreach)

***

### getAutoAdjustSize()

> **getAutoAdjustSize**(): `boolean`

Defined in: [awtk.ts:11530](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11530)

获取控件auto_adjust_size属性值。

#### Returns

`boolean`

返回auto_adjust_size。

#### Inherited from

[`TWidget`](TWidget.md).[`getAutoAdjustSize`](TWidget.md#getautoadjustsize)

***

### getChild()

> **getChild**(`index`): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11070](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11070)

获取指定索引的子控件。

#### Parameters

##### index

`number`

索引。

#### Returns

[`TWidget`](TWidget.md)

子控件。

#### Inherited from

[`TWidget`](TWidget.md).[`getChild`](TWidget.md#getchild)

***

### getEnable()

> **getEnable**(): `boolean`

Defined in: [awtk.ts:11508](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11508)

获取控件enable属性值。

#### Returns

`boolean`

返回enable。

#### Inherited from

[`TWidget`](TWidget.md).[`getEnable`](TWidget.md#getenable)

***

### getFeedback()

> **getFeedback**(): `boolean`

Defined in: [awtk.ts:11585](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11585)

获取控件feedback属性值。

#### Returns

`boolean`

返回feedback。

#### Inherited from

[`TWidget`](TWidget.md).[`getFeedback`](TWidget.md#getfeedback)

***

### getFloating()

> **getFloating**(): `boolean`

Defined in: [awtk.ts:11519](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11519)

获取控件floating属性值。

#### Returns

`boolean`

返回floating。

#### Inherited from

[`TWidget`](TWidget.md).[`getFloating`](TWidget.md#getfloating)

***

### getFocusable()

> **getFocusable**(): `boolean`

Defined in: [awtk.ts:11552](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11552)

获取控件focusable属性值。

#### Returns

`boolean`

返回focusable。

#### Inherited from

[`TWidget`](TWidget.md).[`getFocusable`](TWidget.md#getfocusable)

***

### getFocusedWidget()

> **getFocusedWidget**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11105](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11105)

获取当前窗口中的焦点控件。

#### Returns

[`TWidget`](TWidget.md)

焦点控件。

#### Inherited from

[`TWidget`](TWidget.md).[`getFocusedWidget`](TWidget.md#getfocusedwidget)

***

### getNativeWindow()

> **getNativeWindow**(): [`TNativeWindow`](TNativeWindow.md)

Defined in: [awtk.ts:11116](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11116)

获取原生窗口对象。

#### Returns

[`TNativeWindow`](TNativeWindow.md)

原生窗口对象。

#### Inherited from

[`TWidget`](TWidget.md).[`getNativeWindow`](TWidget.md#getnativewindow)

***

### getProp()

> **getProp**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12086](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12086)

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

[`TWidget`](TWidget.md).[`getProp`](TWidget.md#getprop)

***

### getPropBool()

> **getPropBool**(`name`, `defval`): `boolean`

Defined in: [awtk.ts:12241](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12241)

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

[`TWidget`](TWidget.md).[`getPropBool`](TWidget.md#getpropbool)

***

### getPropFloat()

> **getPropFloat**(`name`, `defval`): `number`

Defined in: [awtk.ts:12189](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12189)

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

[`TWidget`](TWidget.md).[`getPropFloat`](TWidget.md#getpropfloat)

***

### getPropInt()

> **getPropInt**(`name`, `defval`): `number`

Defined in: [awtk.ts:12215](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12215)

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

[`TWidget`](TWidget.md).[`getPropInt`](TWidget.md#getpropint)

***

### getPropPointer()

> **getPropPointer**(`name`): `any`

Defined in: [awtk.ts:12163](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12163)

获取指针格式的属性。

#### Parameters

##### name

`string`

属性的名称。

#### Returns

`any`

返回属性的值。

#### Inherited from

[`TWidget`](TWidget.md).[`getPropPointer`](TWidget.md#getproppointer)

***

### getPropStr()

> **getPropStr**(`name`, `defval`): `string`

Defined in: [awtk.ts:12138](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12138)

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

[`TWidget`](TWidget.md).[`getPropStr`](TWidget.md#getpropstr)

***

### getSensitive()

> **getSensitive**(): `boolean`

Defined in: [awtk.ts:11563](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11563)

获取控件sensitive属性值。

#### Returns

`boolean`

返回sensitive。

#### Inherited from

[`TWidget`](TWidget.md).[`getSensitive`](TWidget.md#getsensitive)

***

### getStateForStyle()

> **getStateForStyle**(`active`, `checked`): `string`

Defined in: [awtk.ts:12736](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12736)

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

[`TWidget`](TWidget.md).[`getStateForStyle`](TWidget.md#getstateforstyle)

***

### getStyleType()

> **getStyleType**(): `string`

Defined in: [awtk.ts:12664](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12664)

获取 widget 对应风格类型

#### Returns

`string`

返回 widget 的对应风格类型。

#### Inherited from

[`TWidget`](TWidget.md).[`getStyleType`](TWidget.md#getstyletype)

***

### getText()

> **getText**(): `any`

Defined in: [awtk.ts:11601](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11601)

获取控件的文本。
只是对widget\_get\_prop的包装，文本的意义由子类控件决定。

如果希望获取UTF8格式的文本，可以参考下面的代码：

#### Returns

`any`

返回文本。

#### Inherited from

[`TWidget`](TWidget.md).[`getText`](TWidget.md#gettext)

***

### getThemeName()

> **getThemeName**(): `string`

Defined in: [awtk.ts:11636](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11636)

获取 theme 的名称

#### Returns

`string`

成功返回主题名称，失败否则 NULL。

#### Inherited from

[`TWidget`](TWidget.md).[`getThemeName`](TWidget.md#getthemename)

***

### getType()

> **getType**(): `string`

Defined in: [awtk.ts:12504](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12504)

获取当前控件的类型名称。

#### Returns

`string`

返回类型名。

#### Inherited from

[`TWidget`](TWidget.md).[`getType`](TWidget.md#gettype)

***

### getValue()

> **getValue**(): `number`

Defined in: [awtk.ts:11250](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11250)

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[`TWidget`](TWidget.md).[`getValue`](TWidget.md#getvalue)

***

### getValueInt()

> **getValueInt**(): `number`

Defined in: [awtk.ts:11287](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11287)

获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。

#### Returns

`number`

返回值。

#### Inherited from

[`TWidget`](TWidget.md).[`getValueInt`](TWidget.md#getvalueint)

***

### getVisible()

> **getVisible**(): `boolean`

Defined in: [awtk.ts:11574](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11574)

获取控件visible属性值。

#### Returns

`boolean`

返回visible。

#### Inherited from

[`TWidget`](TWidget.md).[`getVisible`](TWidget.md#getvisible)

***

### getWindow()

> **getWindow**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:12482](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12482)

获取当前控件所在的窗口。

#### Returns

[`TWidget`](TWidget.md)

窗口对象。

#### Inherited from

[`TWidget`](TWidget.md).[`getWindow`](TWidget.md#getwindow)

***

### getWindowManager()

> **getWindowManager**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:12493](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12493)

获取当前的窗口管理器。

#### Returns

[`TWidget`](TWidget.md)

窗口管理器对象。

#### Inherited from

[`TWidget`](TWidget.md).[`getWindowManager`](TWidget.md#getwindowmanager)

***

### getWithFocusState()

> **getWithFocusState**(): `boolean`

Defined in: [awtk.ts:11541](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11541)

获取控件with_focus_state属性值。

#### Returns

`boolean`

返回with_focus_state。

#### Inherited from

[`TWidget`](TWidget.md).[`getWithFocusState`](TWidget.md#getwithfocusstate)

***

### hasHighlighter()

> **hasHighlighter**(): `boolean`

Defined in: [awtk.ts:11404](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11404)

判断widget拥有高亮属性。

#### Returns

`boolean`

拥有返回 TRUE，没有返回 FALSE。

#### Inherited from

[`TWidget`](TWidget.md).[`hasHighlighter`](TWidget.md#hashighlighter)

***

### indexOf()

> **indexOf**(): `number`

Defined in: [awtk.ts:11127](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11127)

获取控件在父控件中的索引编号。

#### Returns

`number`

在父控件中的索引编号。

#### Inherited from

[`TWidget`](TWidget.md).[`indexOf`](TWidget.md#indexof)

***

### insertChild()

> **insertChild**(`index`, `child`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11946](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11946)

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

[`TWidget`](TWidget.md).[`insertChild`](TWidget.md#insertchild)

***

### invalidateForce()

> **invalidateForce**(`r`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12073](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12073)

请求强制重绘控件。

#### Parameters

##### r

[`TRect`](TRect.md)

矩形对象(widget本地坐标)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`invalidateForce`](TWidget.md#invalidateforce)

***

### isAlwaysOnTop()

> **isAlwaysOnTop**(): `boolean`

Defined in: [awtk.ts:12375](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12375)

检查控件是否总在最上层。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWidget`](TWidget.md).[`isAlwaysOnTop`](TWidget.md#isalwaysontop)

***

### isDesigningWindow()

> **isDesigningWindow**(): `boolean`

Defined in: [awtk.ts:12447](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12447)

判断当前控件是否是设计窗口。

#### Returns

`boolean`

返回当前控件是否是设计窗口。

#### Inherited from

[`TWidget`](TWidget.md).[`isDesigningWindow`](TWidget.md#isdesigningwindow)

***

### isDialog()

> **isDialog**(): `boolean`

Defined in: [awtk.ts:12342](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12342)

检查控件是否是对话框类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWidget`](TWidget.md).[`isDialog`](TWidget.md#isdialog)

***

### isDirectParentOf()

> **isDirectParentOf**(`child`): `boolean`

Defined in: [awtk.ts:12287](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12287)

判断当前控件是否是指定控件的直系父控件。

#### Parameters

##### child

[`TWidget`](TWidget.md)

控件对象。

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Inherited from

[`TWidget`](TWidget.md).[`isDirectParentOf`](TWidget.md#isdirectparentof)

***

### isFullscreenWindow()

> **isFullscreenWindow**(): `boolean`

Defined in: [awtk.ts:12331](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12331)

检查控件是否是全屏窗口。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWidget`](TWidget.md).[`isFullscreenWindow`](TWidget.md#isfullscreenwindow)

***

### isKeyboard()

> **isKeyboard**(): `boolean`

Defined in: [awtk.ts:12436](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12436)

判断当前控件是否是keyboard。

> keyboard收到pointer事件时，不会让当前控件失去焦点。

在自定义软键盘时，将所有按钮放到一个容器当中，并设置为is_keyboard。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWidget`](TWidget.md).[`isKeyboard`](TWidget.md#iskeyboard)

***

### isNormalWindow()

> **isNormalWindow**(): `boolean`

Defined in: [awtk.ts:12320](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12320)

检查控件是否是普通窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWidget`](TWidget.md).[`isNormalWindow`](TWidget.md#isnormalwindow)

***

### isOpenedDialog()

> **isOpenedDialog**(): `boolean`

Defined in: [awtk.ts:12408](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12408)

检查控件弹出对话框控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWidget`](TWidget.md).[`isOpenedDialog`](TWidget.md#isopeneddialog)

***

### isOpenedPopup()

> **isOpenedPopup**(): `boolean`

Defined in: [awtk.ts:12419](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12419)

检查控件弹出窗口控件是否已经打开了（而非挂起状态）。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWidget`](TWidget.md).[`isOpenedPopup`](TWidget.md#isopenedpopup)

***

### isOverlay()

> **isOverlay**(): `boolean`

Defined in: [awtk.ts:12364](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12364)

检查控件是否是overlay窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWidget`](TWidget.md).[`isOverlay`](TWidget.md#isoverlay)

***

### isParentOf()

> **isParentOf**(`child`): `boolean`

Defined in: [awtk.ts:12275](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12275)

判断当前控件是否是指定控件的父控件(包括非直系)。

#### Parameters

##### child

[`TWidget`](TWidget.md)

控件对象。

#### Returns

`boolean`

返回TRUE表示是，否则表示不是。

#### Inherited from

[`TWidget`](TWidget.md).[`isParentOf`](TWidget.md#isparentof)

***

### isPopup()

> **isPopup**(): `boolean`

Defined in: [awtk.ts:12353](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12353)

检查控件是否是弹出窗口类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWidget`](TWidget.md).[`isPopup`](TWidget.md#ispopup)

***

### isStyleExist()

> **isStyleExist**(`style_name`, `state_name`): `boolean`

Defined in: [awtk.ts:11382](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11382)

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

[`TWidget`](TWidget.md).[`isStyleExist`](TWidget.md#isstyleexist)

***

### isSupportHighlighter()

> **isSupportHighlighter**(): `boolean`

Defined in: [awtk.ts:11393](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11393)

判断widget是否支持高亮。

#### Returns

`boolean`

支持返回 TRUE，不支持返回 FALSE。

#### Inherited from

[`TWidget`](TWidget.md).[`isSupportHighlighter`](TWidget.md#issupporthighlighter)

***

### isSuspendDialog()

> **isSuspendDialog**(): `boolean`

Defined in: [awtk.ts:12386](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12386)

检查控件弹出对话框控件是否是挂起状态。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWidget`](TWidget.md).[`isSuspendDialog`](TWidget.md#issuspenddialog)

***

### isSuspendPopup()

> **isSuspendPopup**(): `boolean`

Defined in: [awtk.ts:12397](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12397)

检查控件弹出窗口控件是否是挂起状态。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWidget`](TWidget.md).[`isSuspendPopup`](TWidget.md#issuspendpopup)

***

### isSystemBar()

> **isSystemBar**(): `boolean`

Defined in: [awtk.ts:12309](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12309)

检查控件是否是system bar类型。

#### Returns

`boolean`

返回FALSE表示不是，否则表示是。

#### Inherited from

[`TWidget`](TWidget.md).[`isSystemBar`](TWidget.md#issystembar)

***

### isWindow()

> **isWindow**(): `boolean`

Defined in: [awtk.ts:12298](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12298)

判断当前控件是否是窗口。

#### Returns

`boolean`

返回当前控件是否是窗口。

#### Inherited from

[`TWidget`](TWidget.md).[`isWindow`](TWidget.md#iswindow)

***

### isWindowCreated()

> **isWindowCreated**(): `boolean`

Defined in: [awtk.ts:12263](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12263)

判断窗口及子控件创建或加载是否完成。

#### Returns

`boolean`

返回创建或加载是否完成。

#### Inherited from

[`TWidget`](TWidget.md).[`isWindowCreated`](TWidget.md#iswindowcreated)

***

### isWindowManager()

> **isWindowManager**(): `boolean`

Defined in: [awtk.ts:12458](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12458)

判断当前控件是否是窗口管理器。

#### Returns

`boolean`

返回当前控件是否是窗口管理器。

#### Inherited from

[`TWidget`](TWidget.md).[`isWindowManager`](TWidget.md#iswindowmanager)

***

### isWindowOpened()

> **isWindowOpened**(): `boolean`

Defined in: [awtk.ts:12252](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12252)

判断当前控件所在的窗口是否已经打开。

#### Returns

`boolean`

返回当前控件所在的窗口是否已经打开。

#### Inherited from

[`TWidget`](TWidget.md).[`isWindowOpened`](TWidget.md#iswindowopened)

***

### layout()

> **layout**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12747](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12747)

布局当前控件及子控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`layout`](TWidget.md#layout)

***

### lookup()

> **lookup**(`name`, `recursive`): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11983](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11983)

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

[`TWidget`](TWidget.md).[`lookup`](TWidget.md#lookup)

***

### lookupByType()

> **lookupByType**(`type`, `recursive`): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:11996](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11996)

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

[`TWidget`](TWidget.md).[`lookupByType`](TWidget.md#lookupbytype)

***

### move()

> **move**(`x`, `y`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11184](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11184)

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

[`TWidget`](TWidget.md).[`move`](TWidget.md#move)

***

### moveResize()

> **moveResize**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11223](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11223)

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

[`TWidget`](TWidget.md).[`moveResize`](TWidget.md#moveresize)

***

### moveResizeEx()

> **moveResizeEx**(`x`, `y`, `w`, `h`, `update_layout`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11239](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11239)

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

[`TWidget`](TWidget.md).[`moveResizeEx`](TWidget.md#moveresizeex)

***

### moveToCenter()

> **moveToCenter**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11195](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11195)

移动控件到父控件中间。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`moveToCenter`](TWidget.md#movetocenter)

***

### off()

> **off**(`id`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12061](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12061)

注销指定事件的处理函数。

#### Parameters

##### id

`number`

widget_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`off`](TWidget.md#off)

***

### on()

> **on**(`type`, `on_event`, `ctx`): `number`

Defined in: [awtk.ts:12049](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12049)

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

[`TWidget`](TWidget.md).[`on`](TWidget.md#on)

***

### pauseAnimator()

> **pauseAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11729](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11729)

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

[`TWidget`](TWidget.md).[`pauseAnimator`](TWidget.md#pauseanimator)

***

### ref()

> **ref**(): [`TWidget`](TWidget.md)

Defined in: [awtk.ts:12577](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12577)

增加控件的引用计数。

#### Returns

[`TWidget`](TWidget.md)

返回控件对象。

#### Inherited from

[`TWidget`](TWidget.md).[`ref`](TWidget.md#ref)

***

### removeChild()

> **removeChild**(`child`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11933](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11933)

移出指定的子控件(并不销毁)。

#### Parameters

##### child

[`TWidget`](TWidget.md)

子控件对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`removeChild`](TWidget.md#removechild)

***

### resize()

> **resize**(`w`, `h`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11208](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11208)

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

[`TWidget`](TWidget.md).[`resize`](TWidget.md#resize)

***

### restack()

> **restack**(`index`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11958](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11958)

调整控件在父控件中的位置序数。

#### Parameters

##### index

`number`

位置序数(大于等于总个数，则放到最后)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`restack`](TWidget.md#restack)

***

### setAnimation()

> **setAnimation**(`animation`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11661](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11661)

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

[`TWidget`](TWidget.md).[`setAnimation`](TWidget.md#setanimation)

***

### setAnimatorTimeScale()

> **setAnimatorTimeScale**(`name`, `time_scale`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11712](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11712)

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

[`TWidget`](TWidget.md).[`setAnimatorTimeScale`](TWidget.md#setanimatortimescale)

***

### setAnimHint()

> **setAnimHint**(`anim_hint`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:24637](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24637)

设置动画类型(vtranslate: 垂直平移，htranslate: 水平平移)。

#### Parameters

##### anim\_hint

`string`

动画类型。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setAsKeyTarget()

> **setAsKeyTarget**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12697](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12697)

递归的把父控件的key_target设置为自己。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setAsKeyTarget`](TWidget.md#setaskeytarget)

***

### setAutoAdjustSize()

> **setAutoAdjustSize**(`auto_adjust_size`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11799](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11799)

设置控件是否根据子控件和文本自动调整控件自身大小。

#### Parameters

##### auto\_adjust\_size

`boolean`

是否根据子控件和文本自动调整控件自身大小。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setAutoAdjustSize`](TWidget.md#setautoadjustsize)

***

### setChildrenLayout()

> **setChildrenLayout**(`params`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12773](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12773)

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

[`TWidget`](TWidget.md).[`setChildrenLayout`](TWidget.md#setchildrenlayout)

***

### setChildText()

> **setChildText**(`name`, `text`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11455](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11455)

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

[`TWidget`](TWidget.md).[`setChildText`](TWidget.md#setchildtext)

***

### setChildTextWithDouble()

> **setChildTextWithDouble**(`name`, `format`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11470](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11470)

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

[`TWidget`](TWidget.md).[`setChildTextWithDouble`](TWidget.md#setchildtextwithdouble)

***

### setChildTextWithInt()

> **setChildTextWithInt**(`name`, `format`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11485](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11485)

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

[`TWidget`](TWidget.md).[`setChildTextWithInt`](TWidget.md#setchildtextwithint)

***

### setDirtyRectTolerance()

> **setDirtyRectTolerance**(`dirty_rect_tolerance`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11898](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11898)

设置控件脏矩形超出控件本身大小的最大范围(一般不用指定)。

#### Parameters

##### dirty\_rect\_tolerance

`number`

控件脏脏矩形超出控件本身大小的最大范。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setDirtyRectTolerance`](TWidget.md#setdirtyrecttolerance)

***

### setEnable()

> **setEnable**(`enable`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11775](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11775)

设置控件的可用性。

#### Parameters

##### enable

`boolean`

是否可用性。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setEnable`](TWidget.md#setenable)

***

### setFeedback()

> **setFeedback**(`feedback`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11787](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11787)

设置控件是否启用反馈。

#### Parameters

##### feedback

`boolean`

是否启用反馈。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setFeedback`](TWidget.md#setfeedback)

***

### setFloating()

> **setFloating**(`floating`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11812](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11812)

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

[`TWidget`](TWidget.md).[`setFloating`](TWidget.md#setfloating)

***

### setFocusable()

> **setFocusable**(`focusable`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11836](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11836)

设置控件是否可获得焦点。

#### Parameters

##### focusable

`boolean`

是否可获得焦点。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setFocusable`](TWidget.md#setfocusable)

***

### setFocused()

> **setFocused**(`focused`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11824](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11824)

设置控件是否获得焦点。

#### Parameters

##### focused

`boolean`

是否获得焦点。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setFocused`](TWidget.md#setfocused)

***

### setName()

> **setName**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11613](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11613)

设置控件的名称。

#### Parameters

##### name

`string`

名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setName`](TWidget.md#setname)

***

### setOpacity()

> **setOpacity**(`opacity`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11886](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11886)

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

[`TWidget`](TWidget.md).[`setOpacity`](TWidget.md#setopacity)

***

### setPointerCursor()

> **setPointerCursor**(`cursor`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11648](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11648)

设置鼠标指针的图片名。

#### Parameters

##### cursor

`string`

图片名称(无扩展名)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setPointerCursor`](TWidget.md#setpointercursor)

***

### setProp()

> **setProp**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12099](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12099)

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

[`TWidget`](TWidget.md).[`setProp`](TWidget.md#setprop)

***

### setPropBool()

> **setPropBool**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12228](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12228)

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

[`TWidget`](TWidget.md).[`setPropBool`](TWidget.md#setpropbool)

***

### setPropFloat()

> **setPropFloat**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12176](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12176)

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

[`TWidget`](TWidget.md).[`setPropFloat`](TWidget.md#setpropfloat)

***

### setPropInt()

> **setPropInt**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12202](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12202)

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

[`TWidget`](TWidget.md).[`setPropInt`](TWidget.md#setpropint)

***

### setPropPointer()

> **setPropPointer**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12151](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12151)

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

[`TWidget`](TWidget.md).[`setPropPointer`](TWidget.md#setproppointer)

***

### setProps()

> **setProps**(`params`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12112](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12112)

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

[`TWidget`](TWidget.md).[`setProps`](TWidget.md#setprops)

***

### setPropStr()

> **setPropStr**(`name`, `v`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12125](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12125)

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

[`TWidget`](TWidget.md).[`setPropStr`](TWidget.md#setpropstr)

***

### setSelfLayout()

> **setSelfLayout**(`params`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12760](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12760)

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

[`TWidget`](TWidget.md).[`setSelfLayout`](TWidget.md#setselflayout)

***

### setSelfLayoutParams()

> **setSelfLayoutParams**(`x`, `y`, `w`, `h`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12789](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12789)

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

[`TWidget`](TWidget.md).[`setSelfLayoutParams`](TWidget.md#setselflayoutparams)

***

### setSensitive()

> **setSensitive**(`sensitive`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12032](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12032)

设置控件是否接受用户事件。

#### Parameters

##### sensitive

`boolean`

是否接受用户事件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setSensitive`](TWidget.md#setsensitive)

***

### setState()

> **setState**(`state`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11848](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11848)

设置控件的状态。

#### Parameters

##### state

`string`

状态。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setState`](TWidget.md#setstate)

***

### setStateFromParentSync()

> **setStateFromParentSync**(`state_from_parent_sync`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11872](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11872)

标识是否接收父控件的状态同步。

#### Parameters

##### state\_from\_parent\_sync

`boolean`

是否接收父控件的状态同步。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setStateFromParentSync`](TWidget.md#setstatefromparentsync)

***

### setStyleColor()

> **setStyleColor**(`state_and_name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12842](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12842)

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

[`TWidget`](TWidget.md).[`setStyleColor`](TWidget.md#setstylecolor)

***

### setStyleInt()

> **setStyleInt**(`state_and_name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12805](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12805)

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

[`TWidget`](TWidget.md).[`setStyleInt`](TWidget.md#setstyleint)

***

### setStyleStr()

> **setStyleStr**(`state_and_name`, `value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12821](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12821)

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

[`TWidget`](TWidget.md).[`setStyleStr`](TWidget.md#setstylestr)

***

### setSyncStateToChildren()

> **setSyncStateToChildren**(`sync_state_to_children`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11860](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11860)

标识是否将当前控件状态同步到子控件中。

#### Parameters

##### sync\_state\_to\_children

`boolean`

是否将当前控件状态同步到子控件中。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setSyncStateToChildren`](TWidget.md#setsyncstatetochildren)

***

### setText()

> **setText**(`text`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11428](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11428)

设置控件的文本。（如果字符串相同，则不会重复设置以及触发事件）

#### Parameters

##### text

`string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setText`](TWidget.md#settext)

***

### setTextEx()

> **setTextEx**(`text`, `check_diff`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11441](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11441)

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

[`TWidget`](TWidget.md).[`setTextEx`](TWidget.md#settextex)

***

### setTheme()

> **setTheme**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11625](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11625)

设置theme的名称，用于动态切换主题。名称与当前主题名称相同，则重新加载全部资源。

#### Parameters

##### name

`string`

主题的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setTheme`](TWidget.md#settheme)

***

### setTrText()

> **setTrText**(`text`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11497](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11497)

获取翻译之后的文本，然后调用widget_set_text。

#### Parameters

##### text

`string`

文本。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setTrText`](TWidget.md#settrtext)

***

### setUiAsset()

> **setUiAsset**(`ui_asset`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:24625](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24625)

设置 UI资源名称。

#### Parameters

##### ui\_asset

`string`

UI资源名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### setValue()

> **setValue**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11263](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11263)

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

[`TWidget`](TWidget.md).[`setValue`](TWidget.md#setvalue)

***

### setValueInt()

> **setValueInt**(`value`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11300](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11300)

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

[`TWidget`](TWidget.md).[`setValueInt`](TWidget.md#setvalueint)

***

### setVisible()

> **setVisible**(`visible`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12008](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12008)

设置控件的可见性。

#### Parameters

##### visible

`boolean`

是否可见。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setVisible`](TWidget.md#setvisible)

***

### setVisibleOnly()

> **setVisibleOnly**(`visible`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12020](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12020)

设置控件的可见性(不触发repaint和relayout)。

#### Parameters

##### visible

`boolean`

是否可见。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`setVisibleOnly`](TWidget.md#setvisibleonly)

***

### startAnimator()

> **startAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11694](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11694)

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

[`TWidget`](TWidget.md).[`startAnimator`](TWidget.md#startanimator)

***

### stopAnimator()

> **stopAnimator**(`name`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11746](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11746)

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

[`TWidget`](TWidget.md).[`stopAnimator`](TWidget.md#stopanimator)

***

### strokeBorderRect()

> **strokeBorderRect**(`c`, `r`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12601](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12601)

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

[`TWidget`](TWidget.md).[`strokeBorderRect`](TWidget.md#strokeborderrect)

***

### unref()

> **unref**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12588](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12588)

减少控件的引用计数。引用计数为0时销毁控件。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`unref`](TWidget.md#unref)

***

### updateStyle()

> **updateStyle**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12675](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12675)

让控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`updateStyle`](TWidget.md#updatestyle)

***

### updateStyleRecursive()

> **updateStyleRecursive**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:12686](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L12686)

让控件及子控件根据自己当前状态更新style。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`updateStyleRecursive`](TWidget.md#updatestylerecursive)

***

### useStyle()

> **useStyle**(`style`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:11416](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L11416)

启用指定的style。

#### Parameters

##### style

`string`

style的名称。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Inherited from

[`TWidget`](TWidget.md).[`useStyle`](TWidget.md#usestyle)

***

### cast()

> `static` **cast**(`widget`): `TVpage`

Defined in: [awtk.ts:24613](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24613)

转换为vpage对象(供脚本语言使用)。

#### Parameters

##### widget

[`TWidget`](TWidget.md)

vpage对象。

#### Returns

`TVpage`

vpage对象。

#### Overrides

[`TWidget`](TWidget.md).[`cast`](TWidget.md#cast)

***

### create()

> `static` **create**(`parent`, `x`, `y`, `w`, `h`): `TVpage`

Defined in: [awtk.ts:24601](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L24601)

创建vpage对象

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

`TVpage`

vpage对象。
