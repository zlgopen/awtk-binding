[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TImageDrawType

# Enumeration: TImageDrawType

Defined in: [awtk.ts:4365](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4365)

图片绘制方法常量定义。

## Enumeration Members

### CENTER

> **CENTER**: `number`

Defined in: [awtk.ts:4377](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4377)

居中显示。将图片按原大小显示在目标矩形的中央。

***

### DEFAULT

> **DEFAULT**: `number`

Defined in: [awtk.ts:4371](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4371)

缺省显示。将图片按原大小显示在目标矩形的左上角。

***

### FILL

> **FILL**: `number`

Defined in: [awtk.ts:4419](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4419)

填充整个区域。将图片缩放至目标矩形的高度或宽度，包装填满整个目标区域，超出不部分不显示。

***

### ICON

> **ICON**: `number`

Defined in: [awtk.ts:4383](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4383)

图标显示。同居中显示，但会根据屏幕密度调整大小。

***

### PATCH3\_X

> **PATCH3\_X**: `number`

Defined in: [awtk.ts:4457](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4457)

水平方向3宫格显示，垂直方向居中显示。
将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。

***

### PATCH3\_X\_SCALE\_Y

> **PATCH3\_X\_SCALE\_Y**: `number`

Defined in: [awtk.ts:4471](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4471)

水平方向3宫格显示，垂直方向缩放显示。
将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。

***

### PATCH3\_Y

> **PATCH3\_Y**: `number`

Defined in: [awtk.ts:4464](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4464)

垂直方向3宫格显示，水平方向居中显示。
将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。

***

### PATCH3\_Y\_SCALE\_X

> **PATCH3\_Y\_SCALE\_X**: `number`

Defined in: [awtk.ts:4478](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4478)

垂直方向3宫格显示，水平方向缩放显示。
将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。

***

### PATCH9

> **PATCH9**: `number`

Defined in: [awtk.ts:4450](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4450)

9宫格显示。
将图片分成等大小的9块，4个角按原大小显示在目标矩形的4个角，左右上下和中间5块分别缩放显示在对应的目标区域。

***

### REPEAT

> **REPEAT**: `number`

Defined in: [awtk.ts:4425](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4425)

平铺显示。

***

### REPEAT\_X

> **REPEAT\_X**: `number`

Defined in: [awtk.ts:4431](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4431)

水平方向平铺显示，垂直方向缩放。

***

### REPEAT\_Y

> **REPEAT\_Y**: `number`

Defined in: [awtk.ts:4437](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4437)

垂直方向平铺显示，水平方向缩放。

***

### REPEAT\_Y\_INVERSE

> **REPEAT\_Y\_INVERSE**: `number`

Defined in: [awtk.ts:4443](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4443)

垂直方向平铺显示，水平方向缩放(从底部到顶部)。

***

### REPEAT3\_X

> **REPEAT3\_X**: `number`

Defined in: [awtk.ts:4497](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4497)

水平方向3宫格显示，垂直方向居中显示。
将图片在水平方向上分成左右相等两块和中间一块，如果图片宽度为奇数，则中间一块为一列数据，如果图片宽度为偶数，则中间一块为二列数据，其他数据分为左右块。
左右两块按原大小显示在目标矩形的左右，中间一列像素点平铺显示在目标区域中间剩余部分。

***

### REPEAT3\_Y

> **REPEAT3\_Y**: `number`

Defined in: [awtk.ts:4505](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4505)

垂直方向3宫格显示，水平方向居中显示。
将图片在垂直方向上分成上下相等两块和中间一块，如果图片高度为奇数，则中间一块为一行数据，如果图片高度为偶数，则中间一块为二行数据，其他数据分为上下块
上下两块按原大小显示在目标矩形的上下，中间一块平铺显示在目标区域中间剩余部分。

***

### REPEAT9

> **REPEAT9**: `number`

Defined in: [awtk.ts:4489](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4489)

平铺9宫格显示。
将图片分成4个角和5块平铺块，4个角按原大小显示在目标矩形的4个角，其余5块会平铺对应的目标区域。
切割方法为（如下图）：
如果图片宽度为奇数，则中间一块为一列数据，如果图片宽度为偶数，则中间一块为二列数据，其他数据分为左右块
如果图片高度为奇数，则中间一块为一行数据，如果图片高度为偶数，则中间一块为二行数据，其他数据分为上下块
中间一块数据根据上面两条规则组成4中情况，分别是一列一行数据，一列两行数据，两列一行数据和两行两列数据

***

### SCALE

> **SCALE**: `number`

Defined in: [awtk.ts:4389](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4389)

缩放显示。将图片缩放至目标矩形的大小(不保证宽高成比例)。

***

### SCALE\_AUTO

> **SCALE\_AUTO**: `number`

Defined in: [awtk.ts:4395](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4395)

自动缩放显示。将图片缩放至目标矩形的宽度或高度(选取最小的比例)，并居中显示。

***

### SCALE\_DOWN

> **SCALE\_DOWN**: `number`

Defined in: [awtk.ts:4401](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4401)

如果图片比目标矩形大，自动缩小显示，否则居中显示。

***

### SCALE\_H

> **SCALE\_H**: `number`

Defined in: [awtk.ts:4413](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4413)

高度缩放显示。将图片缩放至目标矩形的高度，宽度按此比例进行缩放，超出不部分不显示。

***

### SCALE\_W

> **SCALE\_W**: `number`

Defined in: [awtk.ts:4407](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4407)

宽度缩放显示。 将图片缩放至目标矩形的宽度，高度按此比例进行缩放，超出不部分不显示。
