[AWTK](../README.md) / [Exports](../modules.md) / TImageDrawType

# Enumeration: TImageDrawType

图片绘制方法常量定义。

## Table of contents

### Enumeration Members

- [CENTER](TImageDrawType.md#center)
- [DEFAULT](TImageDrawType.md#default)
- [ICON](TImageDrawType.md#icon)
- [PATCH3\_X](TImageDrawType.md#patch3_x)
- [PATCH3\_X\_SCALE\_Y](TImageDrawType.md#patch3_x_scale_y)
- [PATCH3\_Y](TImageDrawType.md#patch3_y)
- [PATCH3\_Y\_SCALE\_X](TImageDrawType.md#patch3_y_scale_x)
- [PATCH9](TImageDrawType.md#patch9)
- [REPEAT](TImageDrawType.md#repeat)
- [REPEAT3\_X](TImageDrawType.md#repeat3_x)
- [REPEAT3\_Y](TImageDrawType.md#repeat3_y)
- [REPEAT9](TImageDrawType.md#repeat9)
- [REPEAT\_X](TImageDrawType.md#repeat_x)
- [REPEAT\_Y](TImageDrawType.md#repeat_y)
- [REPEAT\_Y\_INVERSE](TImageDrawType.md#repeat_y_inverse)
- [SCALE](TImageDrawType.md#scale)
- [SCALE\_AUTO](TImageDrawType.md#scale_auto)
- [SCALE\_DOWN](TImageDrawType.md#scale_down)
- [SCALE\_H](TImageDrawType.md#scale_h)
- [SCALE\_W](TImageDrawType.md#scale_w)

## Enumeration Members

### CENTER

• **CENTER** = `number`

居中显示。将图片按原大小显示在目标矩形的中央。

#### Defined in

[awtk.ts:4151](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4151)

___

### DEFAULT

• **DEFAULT** = `number`

缺省显示。将图片按原大小显示在目标矩形的左上角。

#### Defined in

[awtk.ts:4145](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4145)

___

### ICON

• **ICON** = `number`

图标显示。同居中显示，但会根据屏幕密度调整大小。

#### Defined in

[awtk.ts:4157](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4157)

___

### PATCH3\_X

• **PATCH3\_X** = `number`

水平方向3宫格显示，垂直方向居中显示。
将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4225](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4225)

___

### PATCH3\_X\_SCALE\_Y

• **PATCH3\_X\_SCALE\_Y** = `number`

水平方向3宫格显示，垂直方向缩放显示。
将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4239](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4239)

___

### PATCH3\_Y

• **PATCH3\_Y** = `number`

垂直方向3宫格显示，水平方向居中显示。
将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4232](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4232)

___

### PATCH3\_Y\_SCALE\_X

• **PATCH3\_Y\_SCALE\_X** = `number`

垂直方向3宫格显示，水平方向缩放显示。
将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4246](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4246)

___

### PATCH9

• **PATCH9** = `number`

9宫格显示。
将图片分成等大小的9块，4个角按原大小显示在目标矩形的4个角，左右上下和中间5块分别缩放显示在对应的目标区域。

#### Defined in

[awtk.ts:4218](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4218)

___

### REPEAT

• **REPEAT** = `number`

平铺显示。

#### Defined in

[awtk.ts:4193](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4193)

___

### REPEAT3\_X

• **REPEAT3\_X** = `number`

水平方向3宫格显示，垂直方向居中显示。
将图片在水平方向上分成左右相等两块和中间一块，如果图片宽度为奇数，则中间一块为一列数据，如果图片宽度为偶数，则中间一块为二列数据，其他数据分为左右块。
左右两块按原大小显示在目标矩形的左右，中间一列像素点平铺显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4265](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4265)

___

### REPEAT3\_Y

• **REPEAT3\_Y** = `number`

垂直方向3宫格显示，水平方向居中显示。
将图片在垂直方向上分成上下相等两块和中间一块，如果图片高度为奇数，则中间一块为一行数据，如果图片高度为偶数，则中间一块为二行数据，其他数据分为上下块
上下两块按原大小显示在目标矩形的上下，中间一块平铺显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4273](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4273)

___

### REPEAT9

• **REPEAT9** = `number`

平铺9宫格显示。
将图片分成4个角和5块平铺块，4个角按原大小显示在目标矩形的4个角，其余5块会平铺对应的目标区域。
切割方法为（如下图）：
如果图片宽度为奇数，则中间一块为一列数据，如果图片宽度为偶数，则中间一块为二列数据，其他数据分为左右块
如果图片高度为奇数，则中间一块为一行数据，如果图片高度为偶数，则中间一块为二行数据，其他数据分为上下块
中间一块数据根据上面两条规则组成4中情况，分别是一列一行数据，一列两行数据，两列一行数据和两行两列数据

#### Defined in

[awtk.ts:4257](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4257)

___

### REPEAT\_X

• **REPEAT\_X** = `number`

水平方向平铺显示，垂直方向缩放。

#### Defined in

[awtk.ts:4199](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4199)

___

### REPEAT\_Y

• **REPEAT\_Y** = `number`

垂直方向平铺显示，水平方向缩放。

#### Defined in

[awtk.ts:4205](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4205)

___

### REPEAT\_Y\_INVERSE

• **REPEAT\_Y\_INVERSE** = `number`

垂直方向平铺显示，水平方向缩放(从底部到顶部)。

#### Defined in

[awtk.ts:4211](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4211)

___

### SCALE

• **SCALE** = `number`

缩放显示。将图片缩放至目标矩形的大小(不保证宽高成比例)。

#### Defined in

[awtk.ts:4163](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4163)

___

### SCALE\_AUTO

• **SCALE\_AUTO** = `number`

自动缩放显示。将图片缩放至目标矩形的宽度或高度(选取最小的比例)，并居中显示。

#### Defined in

[awtk.ts:4169](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4169)

___

### SCALE\_DOWN

• **SCALE\_DOWN** = `number`

如果图片比目标矩形大，自动缩小显示，否则居中显示。

#### Defined in

[awtk.ts:4175](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4175)

___

### SCALE\_H

• **SCALE\_H** = `number`

高度缩放显示。将图片缩放至目标矩形的高度，宽度按此比例进行缩放，超出不部分不显示。

#### Defined in

[awtk.ts:4187](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4187)

___

### SCALE\_W

• **SCALE\_W** = `number`

宽度缩放显示。 将图片缩放至目标矩形的宽度，高度按此比例进行缩放，超出不部分不显示。

#### Defined in

[awtk.ts:4181](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4181)
