[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TImageDrawType](_awtk_.timagedrawtype.md)

# Enumeration: TImageDrawType

图片绘制方法常量定义。

## Index

### Enumeration members

* [CENTER](_awtk_.timagedrawtype.md#center)
* [DEFAULT](_awtk_.timagedrawtype.md#default)
* [ICON](_awtk_.timagedrawtype.md#icon)
* [PATCH3_X](_awtk_.timagedrawtype.md#patch3_x)
* [PATCH3_X_SCALE_Y](_awtk_.timagedrawtype.md#patch3_x_scale_y)
* [PATCH3_Y](_awtk_.timagedrawtype.md#patch3_y)
* [PATCH3_Y_SCALE_X](_awtk_.timagedrawtype.md#patch3_y_scale_x)
* [PATCH9](_awtk_.timagedrawtype.md#patch9)
* [REPEAT](_awtk_.timagedrawtype.md#repeat)
* [REPEAT_X](_awtk_.timagedrawtype.md#repeat_x)
* [REPEAT_Y](_awtk_.timagedrawtype.md#repeat_y)
* [REPEAT_Y_INVERSE](_awtk_.timagedrawtype.md#repeat_y_inverse)
* [SCALE](_awtk_.timagedrawtype.md#scale)
* [SCALE_AUTO](_awtk_.timagedrawtype.md#scale_auto)
* [SCALE_DOWN](_awtk_.timagedrawtype.md#scale_down)
* [SCALE_H](_awtk_.timagedrawtype.md#scale_h)
* [SCALE_W](_awtk_.timagedrawtype.md#scale_w)

## Enumeration members

###  CENTER

• **CENTER**: =  IMAGE_DRAW_CENTER()

*Defined in [awtk.ts:8726](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8726)*

居中显示。将图片按原大小显示在目标矩形的中央。

___

###  DEFAULT

• **DEFAULT**: =  IMAGE_DRAW_DEFAULT()

*Defined in [awtk.ts:8720](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8720)*

缺省显示。将图片按原大小显示在目标矩形的左上角。

___

###  ICON

• **ICON**: =  IMAGE_DRAW_ICON()

*Defined in [awtk.ts:8732](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8732)*

图标显示。同居中显示，但会根据屏幕密度调整大小。

___

###  PATCH3_X

• **PATCH3_X**: =  IMAGE_DRAW_PATCH3_X()

*Defined in [awtk.ts:8800](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8800)*

水平方向3宫格显示，垂直方向居中显示。
将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。

___

###  PATCH3_X_SCALE_Y

• **PATCH3_X_SCALE_Y**: =  IMAGE_DRAW_PATCH3_X_SCALE_Y()

*Defined in [awtk.ts:8814](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8814)*

水平方向3宫格显示，垂直方向缩放显示。
将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。

___

###  PATCH3_Y

• **PATCH3_Y**: =  IMAGE_DRAW_PATCH3_Y()

*Defined in [awtk.ts:8807](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8807)*

垂直方向3宫格显示，水平方向居中显示。
将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。

___

###  PATCH3_Y_SCALE_X

• **PATCH3_Y_SCALE_X**: =  IMAGE_DRAW_PATCH3_Y_SCALE_X()

*Defined in [awtk.ts:8821](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8821)*

垂直方向3宫格显示，水平方向缩放显示。
将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。

___

###  PATCH9

• **PATCH9**: =  IMAGE_DRAW_PATCH9()

*Defined in [awtk.ts:8793](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8793)*

9宫格显示。
将图片分成等大小的9块，4个角按原大小显示在目标矩形的4个角，左右上下和中间5块分别缩放显示在对应的目标区域。

___

###  REPEAT

• **REPEAT**: =  IMAGE_DRAW_REPEAT()

*Defined in [awtk.ts:8768](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8768)*

平铺显示。

___

###  REPEAT_X

• **REPEAT_X**: =  IMAGE_DRAW_REPEAT_X()

*Defined in [awtk.ts:8774](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8774)*

水平方向平铺显示，垂直方向缩放。

___

###  REPEAT_Y

• **REPEAT_Y**: =  IMAGE_DRAW_REPEAT_Y()

*Defined in [awtk.ts:8780](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8780)*

垂直方向平铺显示，水平方向缩放。

___

###  REPEAT_Y_INVERSE

• **REPEAT_Y_INVERSE**: =  IMAGE_DRAW_REPEAT_Y_INVERSE()

*Defined in [awtk.ts:8786](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8786)*

垂直方向平铺显示，水平方向缩放(从底部到顶部)。

___

###  SCALE

• **SCALE**: =  IMAGE_DRAW_SCALE()

*Defined in [awtk.ts:8738](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8738)*

缩放显示。将图片缩放至目标矩形的大小(不保证宽高成比例)。

___

###  SCALE_AUTO

• **SCALE_AUTO**: =  IMAGE_DRAW_SCALE_AUTO()

*Defined in [awtk.ts:8744](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8744)*

自动缩放显示。将图片缩放至目标矩形的宽度或高度(选取最小的比例)，并居中显示。

___

###  SCALE_DOWN

• **SCALE_DOWN**: =  IMAGE_DRAW_SCALE_DOWN()

*Defined in [awtk.ts:8750](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8750)*

如果图片比目标矩形大，自动缩小显示，否则居中显示。

___

###  SCALE_H

• **SCALE_H**: =  IMAGE_DRAW_SCALE_H()

*Defined in [awtk.ts:8762](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8762)*

高度缩放显示。将图片缩放至目标矩形的高度，宽度按此比例进行缩放，超出不部分不显示。

___

###  SCALE_W

• **SCALE_W**: =  IMAGE_DRAW_SCALE_W()

*Defined in [awtk.ts:8756](https://github.com/zlgopen/awtk-binding/blob/5be3859/tools/code_gen/js/output/awtk.ts#L8756)*

宽度缩放显示。 将图片缩放至目标矩形的宽度，高度按此比例进行缩放，超出不部分不显示。
