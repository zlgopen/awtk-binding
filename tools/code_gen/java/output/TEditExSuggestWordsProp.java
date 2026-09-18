package awtk;



/**
 * 属性。
 *
 */

public enum TEditExSuggestWordsProp {
  
  /**
   * 建议词源属性：使用的格式名。
   *eg:
   *```xml
   *<edit_ex suggest_words_item_formats="{view(w=20%)[image(w=20,image=$img),(text=$INPUT,w=-20,m=5)]|(text=$desc,w=80%)};A{(text=$INPUT,w=20%,m=5)|(text=$desc,w=80%)}"/>
   *```
   *
   *
   */
 
  FORMAT_NAME (EDIT_EX_SUGGEST_WORDS_PROP_FORMAT_NAME());
 
 
  private TEditExSuggestWordsProp(String value) {
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
  public static TEditExSuggestWordsProp from(String value) {
    for(TEditExSuggestWordsProp iter : TEditExSuggestWordsProp.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return FORMAT_NAME;
  }
  
  private String value;

  static private native String EDIT_EX_SUGGEST_WORDS_PROP_FORMAT_NAME();

}
