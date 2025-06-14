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

[awtk.ts:4332](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4332)

***

### DEFAULT

> **DEFAULT**: `number`

缺省显示。将图片按原大小显示在目标矩形的左上角。

#### Defined in

[awtk.ts:4326](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4326)

***

### FILL

> **FILL**: `number`

填充整个区域。将图片缩放至目标矩形的高度或宽度，包装填满整个目标区域，超出不部分不显示。

#### Defined in

[awtk.ts:4374](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4374)

***

### ICON

> **ICON**: `number`

图标显示。同居中显示，但会根据屏幕密度调整大小。

#### Defined in

[awtk.ts:4338](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4338)

***

### PATCH3\_X

> **PATCH3\_X**: `number`

水平方向3宫格显示，垂直方向居中显示。
将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4412](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4412)

***

### PATCH3\_X\_SCALE\_Y

> **PATCH3\_X\_SCALE\_Y**: `number`

水平方向3宫格显示，垂直方向缩放显示。
将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4426](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4426)

***

### PATCH3\_Y

> **PATCH3\_Y**: `number`

垂直方向3宫格显示，水平方向居中显示。
将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4419](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4419)

***

### PATCH3\_Y\_SCALE\_X

> **PATCH3\_Y\_SCALE\_X**: `number`

垂直方向3宫格显示，水平方向缩放显示。
将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4433](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4433)

***

### PATCH9

> **PATCH9**: `number`

9宫格显示。
将图片分成等大小的9块，4个角按原大小显示在目标矩形的4个角，左右上下和中间5块分别缩放显示在对应的目标区域。

#### Defined in

[awtk.ts:4405](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4405)

***

### REPEAT

> **REPEAT**: `number`

平铺显示。

#### Defined in

[awtk.ts:4380](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4380)

***

### REPEAT3\_X

> **REPEAT3\_X**: `number`

水平方向3宫格显示，垂直方向居中显示。
将图片在水平方向上分成左右相等两块和中间一块，如果图片宽度为奇数，则中间一块为一列数据，如果图片宽度为偶数，则中间一块为二列数据，其他数据分为左右块。
左右两块按原大小显示在目标矩形的左右，中间一列像素点平铺显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4452](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4452)

***

### REPEAT3\_Y

> **REPEAT3\_Y**: `number`

垂直方向3宫格显示，水平方向居中显示。
将图片在垂直方向上分成上下相等两块和中间一块，如果图片高度为奇数，则中间一块为一行数据，如果图片高度为偶数，则中间一块为二行数据，其他数据分为上下块
上下两块按原大小显示在目标矩形的上下，中间一块平铺显示在目标区域中间剩余部分。

#### Defined in

[awtk.ts:4460](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4460)

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

[awtk.ts:4444](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4444)

***

### REPEAT\_X

> **REPEAT\_X**: `number`

水平方向平铺显示，垂直方向缩放。

#### Defined in

[awtk.ts:4386](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4386)

***

### REPEAT\_Y

> **REPEAT\_Y**: `number`

垂直方向平铺显示，水平方向缩放。

#### Defined in

[awtk.ts:4392](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4392)

***

### REPEAT\_Y\_INVERSE

> **REPEAT\_Y\_INVERSE**: `number`

垂直方向平铺显示，水平方向缩放(从底部到顶部)。

#### Defined in

[awtk.ts:4398](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4398)

***

### SCALE

> **SCALE**: `number`

缩放显示。将图片缩放至目标矩形的大小(不保证宽高成比例)。

#### Defined in

[awtk.ts:4344](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4344)

***

### SCALE\_AUTO

> **SCALE\_AUTO**: `number`

自动缩放显示。将图片缩放至目标矩形的宽度或高度(选取最小的比例)，并居中显示。

#### Defined in

[awtk.ts:4350](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4350)

***

### SCALE\_DOWN

> **SCALE\_DOWN**: `number`

如果图片比目标矩形大，自动缩小显示，否则居中显示。

#### Defined in

[awtk.ts:4356](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4356)

***

### SCALE\_H

> **SCALE\_H**: `number`

高度缩放显示。将图片缩放至目标矩形的高度，宽度按此比例进行缩放，超出不部分不显示。

#### Defined in

[awtk.ts:4368](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4368)

***

### SCALE\_W

> **SCALE\_W**: `number`

宽度缩放显示。 将图片缩放至目标矩形的宽度，高度按此比例进行缩放，超出不部分不显示。

#### Defined in

[awtk.ts:4362](https://github.com/zlgopen/awtk-binding/blob/1e0945ae06a2e3b3a4ad0ffa625288088a8ac5d4/tools/code_gen/js/output/awtk.ts#L4362)
