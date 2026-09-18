[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TEditExProp

# Enumeration: TEditExProp

Defined in: [awtk.ts:13348](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13348)

属性。

## Enumeration Members

### IS\_SELECT\_SUGGEST\_WORD

> **IS\_SELECT\_SUGGEST\_WORD**: `number`

Defined in: [awtk.ts:13437](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13437)

是否选中输入建议词。

***

### MULTILINE

> **MULTILINE**: `number`

Defined in: [awtk.ts:13354](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13354)

多行编辑。

***

### SUGGEST\_WORDS

> **SUGGEST\_WORDS**: `number`

Defined in: [awtk.ts:13360](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13360)

输入建议词。

***

### SUGGEST\_WORDS\_INPUT\_NAME

> **SUGGEST\_WORDS\_INPUT\_NAME**: `number`

Defined in: [awtk.ts:13431](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13431)

最终输入到edit控件的文本的属性名。
> 设置了 suggest_words_item_formats 才会被用到。

***

### SUGGEST\_WORDS\_ITEM\_EVEN\_STYLE

> **SUGGEST\_WORDS\_ITEM\_EVEN\_STYLE**: `number`

Defined in: [awtk.ts:13406](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13406)

偶数项的样式。
eg:
```xml
<edit_ex suggest_words_ui_props.list_view.item_even_style="even"/>
```

style:
```xml
<combo_box_item>
<style name="even">
</style>
</combo_box_item>
```

***

### SUGGEST\_WORDS\_ITEM\_FORMATS

> **SUGGEST\_WORDS\_ITEM\_FORMATS**: `number`

Defined in: [awtk.ts:13454](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13454)

项格式。
> 格式说明：
* 1. {}里包含一个格式的内容，格式与格式间用;相隔，格式为：格式名可忽略{内容}
* 2. 格式内容由控件组成，控件格式为：控件类型默认为label(控件属性)[子控件]
* 3. 控件可用分隔为,或|，如果使用|则自动生成分隔线。
* 4. 控件可变属性前有$符号，属性会替换为输入建议词里的属性，如{(text=$title)}，label控件的属性text会替换为输入关键词里的title属性。
* 完整格式参考：
*   格式名{控件1类型(控件属性)[子控件1类型(子控件1属性),(类型为label的子控件2属性)]|(类型为label的控件2属性)};格式名2{...}
eg:
```xml
<edit_ex suggest_words_item_formats="{view(w=20%)[image(w=20,image=$img),(text=$INPUT,w=-20,m=5)]|(text=$desc,w=80%)}"/>
```

***

### SUGGEST\_WORDS\_ITEM\_ODD\_STYLE

> **SUGGEST\_WORDS\_ITEM\_ODD\_STYLE**: `number`

Defined in: [awtk.ts:13388](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13388)

奇数项的样式。
eg:
```xml
<edit_ex suggest_words_ui_props.list_view.item_odd_style="odd"/>
```

style:
```xml
<combo_box_item>
<style name="odd">
</style>
</combo_box_item>
```

***

### SUGGEST\_WORDS\_ITEM\_SEPARATE\_STYLE

> **SUGGEST\_WORDS\_ITEM\_SEPARATE\_STYLE**: `number`

Defined in: [awtk.ts:13424](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13424)

分隔线的样式。
eg:
```xml
<edit_ex suggest_words_ui_props.list_view.item_separate_style="separate"/>
```

style:
```xml
<view>
<style name="separate">
</style>
</view>
```

***

### SUGGEST\_WORDS\_UI\_PROPS

> **SUGGEST\_WORDS\_UI\_PROPS**: `number`

Defined in: [awtk.ts:13370](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L13370)

输入建议词相关ui属性。
eg:
```xml
<edit_ex suggest_words_ui_props.popup.theme="number"/>
```
