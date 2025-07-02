[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TImageDrawType

# Enumeration: TImageDrawType

图片绘制方法常量定义。

## Enumeration Members

### CENTER

> **CENTER**: `number`

居中显示。将图片按原大小显示在目标矩形的中央。

#### Defined in

[awtk.ts:4340](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4340)

***

### DEFAULT

> **DEFAULT**: `number`

缺省显示。将图片按原大小显示在目标矩形的左上角。

#### Defined in

[awtk.ts:4334](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4334)

***

### FILL

> **FILL**: `number`

填充整个区域。将图片缩放至目标矩形的高度或宽度，包装填满整个目标区域，超出不部分不显示。

#### Defined in

[awtk.ts:4382](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4382)

***

### ICON

> **ICON**: `number`

图标显示。同居中显示，但会根据屏幕密度调整大小。

#### Defined in

[awtk.ts:4346](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4346)

***

### PATCH3\_X

> **PATCH3\_X**: `number`

水平方向3宫格显示，垂直方向居中显示。
将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4420](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4420)

***

### PATCH3\_X\_SCALE\_Y

> **PATCH3\_X\_SCALE\_Y**: `number`

水平方向3宫格显示，垂直方向缩放显示。
将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4434](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4434)

***

### PATCH3\_Y

> **PATCH3\_Y**: `number`

垂直方向3宫格显示，水平方向居中显示。
将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4427](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4427)

***

### PATCH3\_Y\_SCALE\_X

> **PATCH3\_Y\_SCALE\_X**: `number`

垂直方向3宫格显示，水平方向缩放显示。
将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4441](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4441)

***

### PATCH9

> **PATCH9**: `number`

9宫格显示。
将图片分成等大小的9块，4个角按原大小显示在目标矩形的4个角，左右上下和中间5块分别缩放显示在对应的目标区域。

#### Defined in

[awtk.ts:4413](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4413)

***

### REPEAT

> **REPEAT**: `number`

平铺显示。

#### Defined in

[awtk.ts:4388](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4388)

***

### REPEAT3\_X

> **REPEAT3\_X**: `number`

水平方向3宫格显示，垂直方向居中显示。
将图片在水平方向上分成左右相等两块和中间一块，如果图片宽度为奇数，则中间一块为一列数据，如果图片宽度为偶数，则中间一块为二列数据，其他数据分为左右块。
左右两块按原大小显示在目标矩形的左右，中间一列像素点平铺显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4460](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4460)

***

### REPEAT3\_Y

> **REPEAT3\_Y**: `number`

垂直方向3宫格显示，水平方向居中显示。
将图片在垂直方向上分成上下相等两块和中间一块，如果图片高度为奇数，则中间一块为一行数据，如果图片高度为偶数，则中间一块为二行数据，其他数据分为上下块
上下两块按原大小显示在目标矩形的上下，中间一块平铺显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4468](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4468)

***

### REPEAT9

> **REPEAT9**: `number`

平铺9宫格显示。
将图片分成4个角和5块平铺块，4个角按原大小显示在目标矩形的4个角，其余5块会平铺对应的目标区域。
切割方法为（如下图）：
如果图片宽度为奇数，则中间一块为一列数据，如果图片宽度为偶数，则中间一块为二列数据，其他数据分为左右块
如果图片高度为奇数，则中间一块为一行数据，如果图片高度为偶数，则中间一块为二行数据，其他数据分为上下块
中间一块数据根据上面两条规则组成4中情况，分别是一列一行数据，一列两行数据，两列一行数据和两行两列数据

#### Defined in

[awtk.ts:4452](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4452)

***

### REPEAT\_X

> **REPEAT\_X**: `number`

水平方向平铺显示，垂直方向缩放。

#### Defined in

[awtk.ts:4394](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4394)

***

### REPEAT\_Y

> **REPEAT\_Y**: `number`

垂直方向平铺显示，水平方向缩放。

#### Defined in

[awtk.ts:4400](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4400)

***

### REPEAT\_Y\_INVERSE

> **REPEAT\_Y\_INVERSE**: `number`

垂直方向平铺显示，水平方向缩放(从底部到顶部)。

#### Defined in

[awtk.ts:4406](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4406)

***

### SCALE

> **SCALE**: `number`

缩放显示。将图片缩放至目标矩形的大小(不保证宽高成比例)。

#### Defined in

[awtk.ts:4352](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4352)

***

### SCALE\_AUTO

> **SCALE\_AUTO**: `number`

自动缩放显示。将图片缩放至目标矩形的宽度或高度(选取最小的比例)，并居中显示。

#### Defined in

[awtk.ts:4358](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4358)

***

### SCALE\_DOWN

> **SCALE\_DOWN**: `number`

如果图片比目标矩形大，自动缩小显示，否则居中显示。

#### Defined in

[awtk.ts:4364](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4364)

***

### SCALE\_H

> **SCALE\_H**: `number`

高度缩放显示。将图片缩放至目标矩形的高度，宽度按此比例进行缩放，超出不部分不显示。

#### Defined in

[awtk.ts:4376](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4376)

***

### SCALE\_W

> **SCALE\_W**: `number`

宽度缩放显示。 将图片缩放至目标矩形的宽度，高度按此比例进行缩放，超出不部分不显示。

#### Defined in

[awtk.ts:4370](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4370)
