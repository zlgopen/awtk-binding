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

[awtk.ts:4137](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4137)

___

### DEFAULT

• **DEFAULT** = `number`

缺省显示。将图片按原大小显示在目标矩形的左上角。

#### Defined in

[awtk.ts:4131](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4131)

___

### ICON

• **ICON** = `number`

图标显示。同居中显示，但会根据屏幕密度调整大小。

#### Defined in

[awtk.ts:4143](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4143)

___

### PATCH3\_X

• **PATCH3\_X** = `number`

水平方向3宫格显示，垂直方向居中显示。
将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4211](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4211)

___

### PATCH3\_X\_SCALE\_Y

• **PATCH3\_X\_SCALE\_Y** = `number`

水平方向3宫格显示，垂直方向缩放显示。
将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4225](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4225)

___

### PATCH3\_Y

• **PATCH3\_Y** = `number`

垂直方向3宫格显示，水平方向居中显示。
将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4218](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4218)

___

### PATCH3\_Y\_SCALE\_X

• **PATCH3\_Y\_SCALE\_X** = `number`

垂直方向3宫格显示，水平方向缩放显示。
将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4232](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4232)

___

### PATCH9

• **PATCH9** = `number`

9宫格显示。
将图片分成等大小的9块，4个角按原大小显示在目标矩形的4个角，左右上下和中间5块分别缩放显示在对应的目标区域。

#### Defined in

[awtk.ts:4204](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4204)

___

### REPEAT

• **REPEAT** = `number`

平铺显示。

#### Defined in

[awtk.ts:4179](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4179)

___

### REPEAT3\_X

• **REPEAT3\_X** = `number`

水平方向3宫格显示，垂直方向居中显示。
将图片在水平方向上分成左右相等两块和中间一块，如果图片宽度为奇数，则中间一块为一列数据，如果图片宽度为偶数，则中间一块为二列数据，其他数据分为左右块。
左右两块按原大小显示在目标矩形的左右，中间一列像素点平铺显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4251](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4251)

___

### REPEAT3\_Y

• **REPEAT3\_Y** = `number`

垂直方向3宫格显示，水平方向居中显示。
将图片在垂直方向上分成上下相等两块和中间一块，如果图片高度为奇数，则中间一块为一行数据，如果图片高度为偶数，则中间一块为二行数据，其他数据分为上下块
上下两块按原大小显示在目标矩形的上下，中间一块平铺显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4259](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4259)

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

[awtk.ts:4243](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4243)

___

### REPEAT\_X

• **REPEAT\_X** = `number`

水平方向平铺显示，垂直方向缩放。

#### Defined in

[awtk.ts:4185](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4185)

___

### REPEAT\_Y

• **REPEAT\_Y** = `number`

垂直方向平铺显示，水平方向缩放。

#### Defined in

[awtk.ts:4191](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4191)

___

### REPEAT\_Y\_INVERSE

• **REPEAT\_Y\_INVERSE** = `number`

垂直方向平铺显示，水平方向缩放(从底部到顶部)。

#### Defined in

[awtk.ts:4197](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4197)

___

### SCALE

• **SCALE** = `number`

缩放显示。将图片缩放至目标矩形的大小(不保证宽高成比例)。

#### Defined in

[awtk.ts:4149](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4149)

___

### SCALE\_AUTO

• **SCALE\_AUTO** = `number`

自动缩放显示。将图片缩放至目标矩形的宽度或高度(选取最小的比例)，并居中显示。

#### Defined in

[awtk.ts:4155](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4155)

___

### SCALE\_DOWN

• **SCALE\_DOWN** = `number`

如果图片比目标矩形大，自动缩小显示，否则居中显示。

#### Defined in

[awtk.ts:4161](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4161)

___

### SCALE\_H

• **SCALE\_H** = `number`

高度缩放显示。将图片缩放至目标矩形的高度，宽度按此比例进行缩放，超出不部分不显示。

#### Defined in

[awtk.ts:4173](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4173)

___

### SCALE\_W

• **SCALE\_W** = `number`

宽度缩放显示。 将图片缩放至目标矩形的宽度，高度按此比例进行缩放，超出不部分不显示。

#### Defined in

[awtk.ts:4167](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4167)
