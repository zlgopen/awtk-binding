package awtk;



/**
 * 属性。
 *
 */

public enum TEditExProp {
  
  /**
   * 多行编辑。
   *
   */
 
  MULTILINE (EDIT_EX_PROP_MULTILINE()),
  
  /**
   * 输入建议词。
   *
   */
 
  SUGGEST_WORDS (EDIT_EX_PROP_SUGGEST_WORDS()),
  
  /**
   * 输入建议词相关ui属性。
   *eg:
   *```xml
   *<edit_ex suggest_words_ui_props.popup.theme="number"/>
   *```
   *
   */
 
  SUGGEST_WORDS_UI_PROPS (EDIT_EX_PROP_SUGGEST_WORDS_UI_PROPS()),
  
  /**
   * 奇数项的样式。
   *eg:
   *```xml
   *<edit_ex suggest_words_ui_props.list_view.item_odd_style="odd"/>
   *```
   *
   *style:
   *```xml
   *<combo_box_item>
   *<style name="odd">
   *</style>
   *</combo_box_item>
   *```
   *
   */
 
  SUGGEST_WORDS_ITEM_ODD_STYLE (EDIT_EX_PROP_SUGGEST_WORDS_ITEM_ODD_STYLE()),
  
  /**
   * 偶数项的样式。
   *eg:
   *```xml
   *<edit_ex suggest_words_ui_props.list_view.item_even_style="even"/>
   *```
   *
   *style:
   *```xml
   *<combo_box_item>
   *<style name="even">
   *</style>
   *</combo_box_item>
   *```
   *
   */
 
  SUGGEST_WORDS_ITEM_EVEN_STYLE (EDIT_EX_PROP_SUGGEST_WORDS_ITEM_EVEN_STYLE()),
  
  /**
   * 分隔线的样式。
   *eg:
   *```xml
   *<edit_ex suggest_words_ui_props.list_view.item_separate_style="separate"/>
   *```
   *
   *style:
   *```xml
   *<view>
   *<style name="separate">
   *</style>
   *</view>
   *```
   *
   */
 
  SUGGEST_WORDS_ITEM_SEPARATE_STYLE (EDIT_EX_PROP_SUGGEST_WORDS_ITEM_SEPARATE_STYLE()),
  
  /**
   * 最终输入到edit控件的文本的属性名。
   *> 设置了 suggest_words_item_formats 才会被用到。
   *
   */
 
  SUGGEST_WORDS_INPUT_NAME (EDIT_EX_PROP_SUGGEST_WORDS_INPUT_NAME()),
  
  /**
   * 是否选中输入建议词。
   *
   */
 
  IS_SELECT_SUGGEST_WORD (EDIT_EX_PROP_IS_SELECT_SUGGEST_WORD()),
  
  /**
   * 项格式。
   *> 格式说明：
   ** 1. {}里包含一个格式的内容，格式与格式间用;相隔，格式为：格式名可忽略{内容}
   ** 2. 格式内容由控件组成，控件格式为：控件类型默认为label(控件属性)[子控件]
   ** 3. 控件可用分隔为,或|，如果使用|则自动生成分隔线。
   ** 4. 控件可变属性前有$符号，属性会替换为输入建议词里的属性，如{(text=$title)}，label控件的属性text会替换为输入关键词里的title属性。
   ** 完整格式参考：
   **   格式名{控件1类型(控件属性)[子控件1类型(子控件1属性),(类型为label的子控件2属性)]|(类型为label的控件2属性)};格式名2{...}
   *eg:
   *```xml
   *<edit_ex suggest_words_item_formats="{view(w=20%)[image(w=20,image=$img),(text=$INPUT,w=-20,m=5)]|(text=$desc,w=80%)}"/>
   *```
   *
   */
 
  SUGGEST_WORDS_ITEM_FORMATS (EDIT_EX_PROP_SUGGEST_WORDS_ITEM_FORMATS());
 
 
  private TEditExProp(String value) {
    this.value = value;
  }

/**
 * 获取枚举的值。
 *
 * @return 枚举的值。
 */
  public String value() {
    return this.value;
  }

/**
 * 把枚举的值转换层枚举。
 *
 * @param value 枚举的值。

 * @return 对应的枚举类型。
 */
  public static TEditExProp from(String value) {
    for(TEditExProp iter : TEditExProp.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return MULTILINE;
  }
  
  private String value;

  static private native String EDIT_EX_PROP_MULTILINE();
  static private native String EDIT_EX_PROP_SUGGEST_WORDS();
  static private native String EDIT_EX_PROP_SUGGEST_WORDS_UI_PROPS();
  static private native String EDIT_EX_PROP_SUGGEST_WORDS_ITEM_ODD_STYLE();
  static private native String EDIT_EX_PROP_SUGGEST_WORDS_ITEM_EVEN_STYLE();
  static private native String EDIT_EX_PROP_SUGGEST_WORDS_ITEM_SEPARATE_STYLE();
  static private native String EDIT_EX_PROP_SUGGEST_WORDS_INPUT_NAME();
  static private native String EDIT_EX_PROP_IS_SELECT_SUGGEST_WORD();
  static private native String EDIT_EX_PROP_SUGGEST_WORDS_ITEM_FORMATS();

}
