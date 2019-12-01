/*XXX: GENERATED CODE, DONT EDIT IT.*/
#include "tkc/utf8.h"
#include "tkc/mem.h"
#include <jni.h>
#include "src/awtk_global.h"
#include "base/bitmap.h"
#include "base/canvas.h"
#include "base/clip_board.h"
#include "base/dialog.h"
#include "base/events.h"
#include "base/font_manager.h"
#include "base/font.h"
#include "base/idle.h"
#include "tkc/value.h"
#include "base/image_manager.h"
#include "base/input_method.h"
#include "base/keys.h"
#include "base/locale_info.h"
#include "base/style.h"
#include "base/theme.h"
#include "base/timer.h"
#include "base/types_def.h"
#include "base/vgcanvas.h"
#include "base/widget_consts.h"
#include "base/widget.h"
#include "tkc/types_def.h"
#include "tkc/timer_manager.h"
#include "tkc/time_now.h"
#include "ext_widgets/ext_widgets.h"
#include "tkc/rect.h"
#include "tkc/path.h"
#include "tkc/named_value.h"
#include "tkc/mime_types.h"
#include "tkc/idle_manager.h"
#include "slide_view/slide_indicator.h"
#include "tkc/fs.h"
#include "tkc/event.h"
#include "tkc/emitter.h"
#include "tkc/easing.h"
#include "tkc/date_time.h"
#include "tkc/color.h"
#include "tkc/asset_info.h"
#include "base/assets_manager.h"
#include "color_picker/color_component.h"
#include "time_clock/time_clock.h"
#include "text_selector/text_selector.h"
#include "switch/switch.h"
#include "slide_view/slide_view.h"
#include "slide_menu/slide_menu.h"
#include "scroll_view/scroll_view.h"
#include "scroll_view/scroll_bar.h"
#include "widgets/view.h"
#include "scroll_view/list_view.h"
#include "scroll_view/list_view_h.h"
#include "widgets/tab_control.h"
#include "widgets/tab_button.h"
#include "scroll_view/list_item.h"
#include "scroll_label/hscroll_label.h"
#include "rich_text/rich_text.h"
#include "progress_circle/progress_circle.h"
#include "widgets/tab_button_group.h"
#include "mledit/mledit.h"
#include "widgets/slider.h"
#include "widgets/row.h"
#include "tkc/object.h"
#include "widgets/progress_bar.h"
#include "mledit/line_number.h"
#include "keyboard/keyboard.h"
#include "image_value/image_value.h"
#include "image_animation/image_animation.h"
#include "guage/guage.h"
#include "guage/guage_pointer.h"
#include "widgets/popup.h"
#include "features/draggable.h"
#include "widgets/pages.h"
#include "color_picker/color_picker.h"
#include "canvas_widget/canvas_widget.h"
#include "widgets/overlay.h"
#include "base/window.h"
#include "base/window_manager.h"
#include "base/window_base.h"
#include "widgets/label.h"
#include "base/style_mutable.h"
#include "widgets/group_box.h"
#include "base/image_base.h"
#include "widgets/app_bar.h"
#include "widgets/button_group.h"
#include "widgets/button.h"
#include "widgets/check_button.h"
#include "widgets/color_tile.h"
#include "widgets/column.h"
#include "widgets/combo_box_item.h"
#include "widgets/combo_box.h"
#include "widgets/dialog_client.h"
#include "widgets/dialog_title.h"
#include "widgets/digit_clock.h"
#include "widgets/dragger.h"
#include "widgets/edit.h"
#include "widgets/grid_item.h"
#include "widgets/grid.h"
#include "widgets/spin_box.h"
#include "tkc/timer_info.h"
#include "combo_box_ex/combo_box_ex.h"
#include "gif_image/gif_image.h"
#include "tkc/object_default.h"
#include "tkc/object_array.h"
#include "widgets/image.h"
#include "widgets/system_bar.h"
#include "mutable_image/mutable_image.h"
#include "tkc/idle_info.h"
#include "svg_image/svg_image.h"
#include "window_manager/window_manager_default.h"
#include "window_manager/window_manager_simple.h"
#include "custom.c"

JNIEXPORT jint JNICALL Java_Global_tk_quit(JNIEnv* env,  jclass ajc) { /*func*/
  ret_t ret;
  ret = (ret_t)tk_quit();

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Global_tk_get_pointer_x(JNIEnv* env,  jclass ajc) { /*func*/
  int32_t ret;
  ret = (int32_t)tk_get_pointer_x();

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Global_tk_get_pointer_y(JNIEnv* env,  jclass ajc) { /*func*/
  int32_t ret;
  ret = (int32_t)tk_get_pointer_y();

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_Global_tk_is_pointer_pressed(JNIEnv* env,  jclass ajc) { /*func*/
  bool_t ret;
  ret = (bool_t)tk_is_pointer_pressed();

  return (jboolean)(ret);
}

JNIEXPORT jlong JNICALL Java_Bitmap_bitmap_create(JNIEnv* env,  jclass ajc) { /*func*/
  bitmap_t* ret;
  ret = (bitmap_t*)bitmap_create();

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Bitmap_bitmap_create_ex(JNIEnv* env,  jclass ajc, jint w, jint h, jint line_length, jint format) { /*func*/
  bitmap_t* ret;
  ret = (bitmap_t*)bitmap_create_ex(w, h, line_length, format);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Bitmap_bitmap_get_bpp(JNIEnv* env,  jclass ajc, jlong jbitmap) { /*func*/
  uint32_t ret;
  bitmap_t* bitmap = (bitmap_t*)jbitmap;
  ret = (uint32_t)bitmap_get_bpp(bitmap);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Bitmap_bitmap_t_get_prop_w(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  bitmap_t* obj = (bitmap_t*)jobj;

  return (jint)(obj->w);
}

JNIEXPORT jint JNICALL Java_Bitmap_bitmap_t_get_prop_h(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  bitmap_t* obj = (bitmap_t*)jobj;

  return (jint)(obj->h);
}

JNIEXPORT jint JNICALL Java_Bitmap_bitmap_t_get_prop_line_length(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  bitmap_t* obj = (bitmap_t*)jobj;

  return (jint)(obj->line_length);
}

JNIEXPORT jint JNICALL Java_Bitmap_bitmap_t_get_prop_flags(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  bitmap_t* obj = (bitmap_t*)jobj;

  return (jint)(obj->flags);
}

JNIEXPORT jint JNICALL Java_Bitmap_bitmap_t_get_prop_format(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  bitmap_t* obj = (bitmap_t*)jobj;

  return (jint)(obj->format);
}

JNIEXPORT jstring JNICALL Java_Bitmap_bitmap_t_get_prop_name(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  bitmap_t* obj = (bitmap_t*)jobj;

  return (*env)->NewStringUTF(env, obj->name);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_DEFAULT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_DEFAULT);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_CENTER(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_CENTER);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_ICON(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_ICON);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_SCALE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_SCALE);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_SCALE_AUTO(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_SCALE_AUTO);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_SCALE_DOWN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_SCALE_DOWN);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_SCALE_W(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_SCALE_W);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_SCALE_H(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_SCALE_H);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_REPEAT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_REPEAT);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_REPEAT_X(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_REPEAT_X);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_REPEAT_Y(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_REPEAT_Y);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_REPEAT_Y_INVERSE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_REPEAT_Y_INVERSE);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_PATCH9(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_PATCH9);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_PATCH3_X(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_PATCH3_X);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_PATCH3_Y(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_PATCH3_Y);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_PATCH3_X_SCALE_Y(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_PATCH3_X_SCALE_Y);
}

JNIEXPORT jint JNICALL Java_ImageDrawType_IMAGE_DRAW_PATCH3_Y_SCALE_X(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(IMAGE_DRAW_PATCH3_Y_SCALE_X);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_get_width(JNIEnv* env,  jclass ajc, jlong jc) { /*func*/
  wh_t ret;
  canvas_t* c = (canvas_t*)jc;
  ret = (wh_t)canvas_get_width(c);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_get_height(JNIEnv* env,  jclass ajc, jlong jc) { /*func*/
  wh_t ret;
  canvas_t* c = (canvas_t*)jc;
  ret = (wh_t)canvas_get_height(c);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_get_clip_rect(JNIEnv* env,  jclass ajc, jlong jc, jlong jr) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  rect_t* r = (rect_t*)jr;
  ret = (ret_t)canvas_get_clip_rect(c, r);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_set_clip_rect(JNIEnv* env,  jclass ajc, jlong jc, jlong jr) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  const rect_t* r = (const rect_t*)jr;
  ret = (ret_t)canvas_set_clip_rect(c, r);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_set_clip_rect_ex(JNIEnv* env,  jclass ajc, jlong jc, jlong jr, jboolean translate) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  const rect_t* r = (const rect_t*)jr;
  ret = (ret_t)canvas_set_clip_rect_ex(c, r, translate);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_set_fill_color_str(JNIEnv* env,  jclass ajc, jlong jc, jstring jcolor) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  const char* color = (char*)(*env)->GetStringUTFChars(env, jcolor, 0);
  ret = (ret_t)canvas_set_fill_color_str(c, color);
  (*env)->ReleaseStringUTFChars(env, jcolor, color);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_set_text_color_str(JNIEnv* env,  jclass ajc, jlong jc, jstring jcolor) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  const char* color = (char*)(*env)->GetStringUTFChars(env, jcolor, 0);
  ret = (ret_t)canvas_set_text_color_str(c, color);
  (*env)->ReleaseStringUTFChars(env, jcolor, color);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_set_stroke_color_str(JNIEnv* env,  jclass ajc, jlong jc, jstring jcolor) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  const char* color = (char*)(*env)->GetStringUTFChars(env, jcolor, 0);
  ret = (ret_t)canvas_set_stroke_color_str(c, color);
  (*env)->ReleaseStringUTFChars(env, jcolor, color);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_set_global_alpha(JNIEnv* env,  jclass ajc, jlong jc, jint alpha) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  ret = (ret_t)canvas_set_global_alpha(c, alpha);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_translate(JNIEnv* env,  jclass ajc, jlong jc, jint dx, jint dy) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  ret = (ret_t)canvas_translate(c, dx, dy);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_untranslate(JNIEnv* env,  jclass ajc, jlong jc, jint dx, jint dy) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  ret = (ret_t)canvas_untranslate(c, dx, dy);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_draw_vline(JNIEnv* env,  jclass ajc, jlong jc, jint x, jint y, jint h) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  ret = (ret_t)canvas_draw_vline(c, x, y, h);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_draw_hline(JNIEnv* env,  jclass ajc, jlong jc, jint x, jint y, jint w) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  ret = (ret_t)canvas_draw_hline(c, x, y, w);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_fill_rect(JNIEnv* env,  jclass ajc, jlong jc, jint x, jint y, jint w, jint h) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  ret = (ret_t)canvas_fill_rect(c, x, y, w, h);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_stroke_rect(JNIEnv* env,  jclass ajc, jlong jc, jint x, jint y, jint w, jint h) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  ret = (ret_t)canvas_stroke_rect(c, x, y, w, h);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_set_font(JNIEnv* env,  jclass ajc, jlong jc, jstring jname, jint size) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)canvas_set_font(c, name, size);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jdouble JNICALL Java_Canvas_canvas_measure_utf8(JNIEnv* env,  jclass ajc, jlong jc, jstring jstr) { /*func*/
  float_t ret;
  canvas_t* c = (canvas_t*)jc;
  const char* str = (char*)(*env)->GetStringUTFChars(env, jstr, 0);
  ret = (float_t)canvas_measure_utf8(c, str);
  (*env)->ReleaseStringUTFChars(env, jstr, str);

  return (jdouble)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_draw_utf8(JNIEnv* env,  jclass ajc, jlong jc, jstring jstr, jint x, jint y) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  const char* str = (char*)(*env)->GetStringUTFChars(env, jstr, 0);
  ret = (ret_t)canvas_draw_utf8(c, str, x, y);
  (*env)->ReleaseStringUTFChars(env, jstr, str);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_draw_utf8_in_rect(JNIEnv* env,  jclass ajc, jlong jc, jstring jstr, jlong jr) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  const char* str = (char*)(*env)->GetStringUTFChars(env, jstr, 0);
  const rect_t* r = (const rect_t*)jr;
  ret = (ret_t)canvas_draw_utf8_in_rect(c, str, r);
  (*env)->ReleaseStringUTFChars(env, jstr, str);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_draw_icon(JNIEnv* env,  jclass ajc, jlong jc, jlong jimg, jint cx, jint cy) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  bitmap_t* img = (bitmap_t*)jimg;
  ret = (ret_t)canvas_draw_icon(c, img, cx, cy);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_draw_image(JNIEnv* env,  jclass ajc, jlong jc, jlong jimg, jlong jsrc, jlong jdst) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  bitmap_t* img = (bitmap_t*)jimg;
  rect_t* src = (rect_t*)jsrc;
  rect_t* dst = (rect_t*)jdst;
  ret = (ret_t)canvas_draw_image(c, img, src, dst);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_draw_image_ex(JNIEnv* env,  jclass ajc, jlong jc, jlong jimg, jint draw_type, jlong jdst) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  bitmap_t* img = (bitmap_t*)jimg;
  rect_t* dst = (rect_t*)jdst;
  ret = (ret_t)canvas_draw_image_ex(c, img, draw_type, dst);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Canvas_canvas_get_vgcanvas(JNIEnv* env,  jclass ajc, jlong jc) { /*func*/
  vgcanvas_t* ret;
  canvas_t* c = (canvas_t*)jc;
  ret = (vgcanvas_t*)canvas_get_vgcanvas(c);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Canvas_canvas_cast(JNIEnv* env,  jclass ajc, jlong jc) { /*func*/
  canvas_t* ret;
  canvas_t* c = (canvas_t*)jc;
  ret = (canvas_t*)canvas_cast(c);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_reset(JNIEnv* env,  jclass ajc, jlong jc) { /*func*/
  ret_t ret;
  canvas_t* c = (canvas_t*)jc;
  ret = (ret_t)canvas_reset(c);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_t_get_prop_ox(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  canvas_t* obj = (canvas_t*)jobj;

  return (jint)(obj->ox);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_t_get_prop_oy(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  canvas_t* obj = (canvas_t*)jobj;

  return (jint)(obj->oy);
}

JNIEXPORT jstring JNICALL Java_Canvas_canvas_t_get_prop_font_name(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  canvas_t* obj = (canvas_t*)jobj;

  return (*env)->NewStringUTF(env, obj->font_name);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_t_get_prop_font_size(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  canvas_t* obj = (canvas_t*)jobj;

  return (jint)(obj->font_size);
}

JNIEXPORT jint JNICALL Java_Canvas_canvas_t_get_prop_global_alpha(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  canvas_t* obj = (canvas_t*)jobj;

  return (jint)(obj->global_alpha);
}

JNIEXPORT jint JNICALL Java_ClipBoardDataType_CLIP_BOARD_DATA_TYPE_NONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(CLIP_BOARD_DATA_TYPE_NONE);
}

JNIEXPORT jint JNICALL Java_ClipBoardDataType_CLIP_BOARD_DATA_TYPE_TEXT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(CLIP_BOARD_DATA_TYPE_TEXT);
}

JNIEXPORT jint JNICALL Java_ClipBoard_clip_board_set_text(JNIEnv* env,  jclass ajc, jstring jtext) { /*func*/
  ret_t ret;
  const char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (ret_t)clip_board_set_text(text);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (jint)(ret);
}

JNIEXPORT jstring JNICALL Java_ClipBoard_clip_board_get_text(JNIEnv* env,  jclass ajc) { /*func*/
  const char* ret;
  ret = (const char*)clip_board_get_text();

  return (*env)->NewStringUTF(env, ret);
}

JNIEXPORT jint JNICALL Java_DialogQuitCode_DIALOG_QUIT_NONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(DIALOG_QUIT_NONE);
}

JNIEXPORT jint JNICALL Java_DialogQuitCode_DIALOG_QUIT_OK(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(DIALOG_QUIT_OK);
}

JNIEXPORT jint JNICALL Java_DialogQuitCode_DIALOG_QUIT_YES(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(DIALOG_QUIT_YES);
}

JNIEXPORT jint JNICALL Java_DialogQuitCode_DIALOG_QUIT_CANCEL(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(DIALOG_QUIT_CANCEL);
}

JNIEXPORT jint JNICALL Java_DialogQuitCode_DIALOG_QUIT_NO(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(DIALOG_QUIT_NO);
}

JNIEXPORT jint JNICALL Java_DialogQuitCode_DIALOG_QUIT_OTHER(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(DIALOG_QUIT_OTHER);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_POINTER_DOWN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_POINTER_DOWN);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_POINTER_DOWN_BEFORE_CHILDREN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_POINTER_DOWN_BEFORE_CHILDREN);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_POINTER_MOVE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_POINTER_MOVE);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_POINTER_MOVE_BEFORE_CHILDREN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_POINTER_MOVE_BEFORE_CHILDREN);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_POINTER_UP(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_POINTER_UP);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_POINTER_UP_BEFORE_CHILDREN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_POINTER_UP_BEFORE_CHILDREN);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_WHEEL(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_WHEEL);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_WHEEL_BEFORE_CHILDREN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_WHEEL_BEFORE_CHILDREN);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_POINTER_DOWN_ABORT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_POINTER_DOWN_ABORT);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_CONTEXT_MENU(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_CONTEXT_MENU);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_POINTER_ENTER(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_POINTER_ENTER);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_POINTER_LEAVE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_POINTER_LEAVE);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_LONG_PRESS(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_LONG_PRESS);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_CLICK(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_CLICK);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_FOCUS(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_FOCUS);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_BLUR(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_BLUR);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_KEY_DOWN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_KEY_DOWN);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_KEY_DOWN_BEFORE_CHILDREN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_KEY_DOWN_BEFORE_CHILDREN);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_KEY_REPEAT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_KEY_REPEAT);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_KEY_UP(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_KEY_UP);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_KEY_UP_BEFORE_CHILDREN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_KEY_UP_BEFORE_CHILDREN);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_WILL_MOVE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_WILL_MOVE);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_MOVE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_MOVE);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_WILL_RESIZE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_WILL_RESIZE);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_RESIZE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_RESIZE);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_WILL_MOVE_RESIZE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_WILL_MOVE_RESIZE);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_MOVE_RESIZE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_MOVE_RESIZE);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_VALUE_WILL_CHANGE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_VALUE_WILL_CHANGE);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_VALUE_CHANGED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_VALUE_CHANGED);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_VALUE_CHANGING(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_VALUE_CHANGING);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_PAINT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_PAINT);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_BEFORE_PAINT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_BEFORE_PAINT);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_AFTER_PAINT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_AFTER_PAINT);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_PAINT_DONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_PAINT_DONE);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_LOCALE_CHANGED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_LOCALE_CHANGED);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_ANIM_START(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_ANIM_START);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_ANIM_STOP(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_ANIM_STOP);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_ANIM_PAUSE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_ANIM_PAUSE);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_ANIM_ONCE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_ANIM_ONCE);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_ANIM_END(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_ANIM_END);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_WINDOW_LOAD(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_WINDOW_LOAD);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_WINDOW_WILL_OPEN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_WINDOW_WILL_OPEN);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_WINDOW_OPEN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_WINDOW_OPEN);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_WINDOW_TO_BACKGROUND(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_WINDOW_TO_BACKGROUND);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_WINDOW_TO_FOREGROUND(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_WINDOW_TO_FOREGROUND);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_WINDOW_CLOSE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_WINDOW_CLOSE);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_REQUEST_CLOSE_WINDOW(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_REQUEST_CLOSE_WINDOW);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_TOP_WINDOW_CHANGED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_TOP_WINDOW_CHANGED);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_IM_COMMIT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_IM_COMMIT);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_IM_SHOW_CANDIDATES(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_IM_SHOW_CANDIDATES);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_IM_ACTION(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_IM_ACTION);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_IM_ACTION_INFO(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_IM_ACTION_INFO);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_DRAG_START(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_DRAG_START);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_DRAG(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_DRAG);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_DRAG_END(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_DRAG_END);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_SCREEN_SAVER(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_SCREEN_SAVER);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_LOW_MEMORY(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_LOW_MEMORY);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_OUT_OF_MEMORY(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_OUT_OF_MEMORY);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_ORIENTATION_WILL_CHANGED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_ORIENTATION_WILL_CHANGED);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_ORIENTATION_CHANGED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_ORIENTATION_CHANGED);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_WIDGET_CREATED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_WIDGET_CREATED);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_REQUEST_QUIT_APP(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_REQUEST_QUIT_APP);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_THEME_CHANGED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_THEME_CHANGED);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_REQ_START(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_REQ_START);
}

JNIEXPORT jint JNICALL Java_EventType_EVT_USER_START(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_USER_START);
}

JNIEXPORT jint JNICALL Java_FontManager_font_manager_unload_font(JNIEnv* env,  jclass ajc, jlong jfm, jstring jname, jint size) { /*func*/
  ret_t ret;
  font_manager_t* fm = (font_manager_t*)jfm;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)font_manager_unload_font(fm, name, size);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_FontManager_font_manager_unload_all(JNIEnv* env,  jclass ajc, jlong jfm) { /*func*/
  ret_t ret;
  font_manager_t* fm = (font_manager_t*)jfm;
  ret = (ret_t)font_manager_unload_all(fm);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_GlyphFormat_GLYPH_FMT_ALPHA(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(GLYPH_FMT_ALPHA);
}

JNIEXPORT jint JNICALL Java_GlyphFormat_GLYPH_FMT_MONO(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(GLYPH_FMT_MONO);
}

JNIEXPORT jint JNICALL Java_GlyphFormat_GLYPH_FMT_RGBA(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(GLYPH_FMT_RGBA);
}

JNIEXPORT jint JNICALL Java_Idle_idle_remove(JNIEnv* env,  jclass ajc, jint idle_id) { /*func*/
  ret_t ret;
  ret = (ret_t)idle_remove(idle_id);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_set_bool(JNIEnv* env,  jclass ajc, jlong jv, jboolean value) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  ret = (value_t*)value_set_bool(v, value);

  return (jlong)(ret);
}

JNIEXPORT jboolean JNICALL Java_Value_value_bool(JNIEnv* env,  jclass ajc, jlong jv) { /*func*/
  bool_t ret;
  value_t* v = (value_t*)jv;
  ret = (bool_t)value_bool(v);

  return (jboolean)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_set_int8(JNIEnv* env,  jclass ajc, jlong jv, jint value) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  ret = (value_t*)value_set_int8(v, value);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Value_value_int8(JNIEnv* env,  jclass ajc, jlong jv) { /*func*/
  int8_t ret;
  value_t* v = (value_t*)jv;
  ret = (int8_t)value_int8(v);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_set_uint8(JNIEnv* env,  jclass ajc, jlong jv, jint value) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  ret = (value_t*)value_set_uint8(v, value);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Value_value_uint8(JNIEnv* env,  jclass ajc, jlong jv) { /*func*/
  int8_t ret;
  value_t* v = (value_t*)jv;
  ret = (int8_t)value_uint8(v);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_set_int16(JNIEnv* env,  jclass ajc, jlong jv, jint value) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  ret = (value_t*)value_set_int16(v, value);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Value_value_int16(JNIEnv* env,  jclass ajc, jlong jv) { /*func*/
  int16_t ret;
  value_t* v = (value_t*)jv;
  ret = (int16_t)value_int16(v);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_set_uint16(JNIEnv* env,  jclass ajc, jlong jv, jint value) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  ret = (value_t*)value_set_uint16(v, value);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Value_value_uint16(JNIEnv* env,  jclass ajc, jlong jv) { /*func*/
  uint16_t ret;
  value_t* v = (value_t*)jv;
  ret = (uint16_t)value_uint16(v);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_set_int32(JNIEnv* env,  jclass ajc, jlong jv, jint value) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  ret = (value_t*)value_set_int32(v, value);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Value_value_int32(JNIEnv* env,  jclass ajc, jlong jv) { /*func*/
  int32_t ret;
  value_t* v = (value_t*)jv;
  ret = (int32_t)value_int32(v);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_set_uint32(JNIEnv* env,  jclass ajc, jlong jv, jint value) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  ret = (value_t*)value_set_uint32(v, value);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_set_int64(JNIEnv* env,  jclass ajc, jlong jv, jlong value) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  ret = (value_t*)value_set_int64(v, value);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_int64(JNIEnv* env,  jclass ajc, jlong jv) { /*func*/
  int64_t ret;
  value_t* v = (value_t*)jv;
  ret = (int64_t)value_int64(v);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_set_uint64(JNIEnv* env,  jclass ajc, jlong jv, jlong value) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  ret = (value_t*)value_set_uint64(v, value);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_uint64(JNIEnv* env,  jclass ajc, jlong jv) { /*func*/
  uint64_t ret;
  value_t* v = (value_t*)jv;
  ret = (uint64_t)value_uint64(v);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_set_float(JNIEnv* env,  jclass ajc, jlong jv, jdouble value) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  ret = (value_t*)value_set_float(v, value);

  return (jlong)(ret);
}

JNIEXPORT jdouble JNICALL Java_Value_value_float32(JNIEnv* env,  jclass ajc, jlong jv) { /*func*/
  float ret;
  value_t* v = (value_t*)jv;
  ret = (float)value_float32(v);

  return (jdouble)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_set_double(JNIEnv* env,  jclass ajc, jlong jv, jdouble value) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  ret = (value_t*)value_set_double(v, value);

  return (jlong)(ret);
}

JNIEXPORT jdouble JNICALL Java_Value_value_double(JNIEnv* env,  jclass ajc, jlong jv) { /*func*/
  double ret;
  value_t* v = (value_t*)jv;
  ret = (double)value_double(v);

  return (jdouble)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_dup_str(JNIEnv* env,  jclass ajc, jlong jv, jstring jvalue) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  const char* value = (char*)(*env)->GetStringUTFChars(env, jvalue, 0);
  ret = (value_t*)value_dup_str(v, value);
  (*env)->ReleaseStringUTFChars(env, jvalue, value);

  return (jlong)(ret);
}

JNIEXPORT jstring JNICALL Java_Value_value_str(JNIEnv* env,  jclass ajc, jlong jv) { /*func*/
  const char* ret;
  value_t* v = (value_t*)jv;
  ret = (const char*)value_str(v);

  return (*env)->NewStringUTF(env, ret);
}

JNIEXPORT jboolean JNICALL Java_Value_value_is_null(JNIEnv* env,  jclass ajc, jlong jvalue) { /*func*/
  bool_t ret;
  value_t* value = (value_t*)jvalue;
  ret = (bool_t)value_is_null(value);

  return (jboolean)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_set_int(JNIEnv* env,  jclass ajc, jlong jv, jint value) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  ret = (value_t*)value_set_int(v, value);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_set_object(JNIEnv* env,  jclass ajc, jlong jv, jlong jvalue) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  object_t* value = (object_t*)jvalue;
  ret = (value_t*)value_set_object(v, value);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_object(JNIEnv* env,  jclass ajc, jlong jv) { /*func*/
  object_t* ret;
  value_t* v = (value_t*)jv;
  ret = (object_t*)value_object(v);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_set_token(JNIEnv* env,  jclass ajc, jlong jv, jint value) { /*func*/
  value_t* ret;
  value_t* v = (value_t*)jv;
  ret = (value_t*)value_set_token(v, value);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Value_value_token(JNIEnv* env,  jclass ajc, jlong jv) { /*func*/
  uint32_t ret;
  value_t* v = (value_t*)jv;
  ret = (uint32_t)value_token(v);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_create(JNIEnv* env,  jclass ajc) { /*func*/
  value_t* ret;
  ret = (value_t*)value_create();

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Value_value_reset(JNIEnv* env,  jclass ajc, jlong jv) { /*func*/
  ret_t ret;
  value_t* v = (value_t*)jv;
  ret = (ret_t)value_reset(v);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Value_value_cast(JNIEnv* env,  jclass ajc, jlong jvalue) { /*func*/
  value_t* ret;
  value_t* value = (value_t*)jvalue;
  ret = (value_t*)value_cast(value);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ImageManager_image_manager(JNIEnv* env,  jclass ajc) { /*func*/
  image_manager_t* ret;
  ret = (image_manager_t*)image_manager();

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ImageManager_image_manager_get_bitmap(JNIEnv* env,  jclass ajc, jlong jimm, jstring jname, jlong jimage) { /*func*/
  ret_t ret;
  image_manager_t* imm = (image_manager_t*)jimm;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  bitmap_t* image = (bitmap_t*)jimage;
  ret = (ret_t)image_manager_get_bitmap(imm, name, image);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_InputType_INPUT_TEXT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INPUT_TEXT);
}

JNIEXPORT jint JNICALL Java_InputType_INPUT_INT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INPUT_INT);
}

JNIEXPORT jint JNICALL Java_InputType_INPUT_UINT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INPUT_UINT);
}

JNIEXPORT jint JNICALL Java_InputType_INPUT_HEX(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INPUT_HEX);
}

JNIEXPORT jint JNICALL Java_InputType_INPUT_FLOAT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INPUT_FLOAT);
}

JNIEXPORT jint JNICALL Java_InputType_INPUT_UFLOAT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INPUT_UFLOAT);
}

JNIEXPORT jint JNICALL Java_InputType_INPUT_EMAIL(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INPUT_EMAIL);
}

JNIEXPORT jint JNICALL Java_InputType_INPUT_PASSWORD(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INPUT_PASSWORD);
}

JNIEXPORT jint JNICALL Java_InputType_INPUT_PHONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INPUT_PHONE);
}

JNIEXPORT jint JNICALL Java_InputType_INPUT_CUSTOM(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INPUT_CUSTOM);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_INVALID(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_INVALID);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_BOOL(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_BOOL);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_INT8(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_INT8);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_UINT8(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_UINT8);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_INT16(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_INT16);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_UINT16(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_UINT16);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_INT32(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_INT32);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_UINT32(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_UINT32);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_INT64(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_INT64);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_UINT64(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_UINT64);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_POINTER(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_POINTER);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_FLOAT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_FLOAT);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_FLOAT32(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_FLOAT32);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_DOUBLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_DOUBLE);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_STRING(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_STRING);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_WSTRING(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_WSTRING);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_OBJECT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_OBJECT);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_SIZED_STRING(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_SIZED_STRING);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_BINARY(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_BINARY);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_UBJSON(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_UBJSON);
}

JNIEXPORT jint JNICALL Java_ValueType_VALUE_TYPE_TOKEN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(VALUE_TYPE_TOKEN);
}

JNIEXPORT jint JNICALL Java_InputMethod_input_method_commit_text(JNIEnv* env,  jclass ajc, jlong jim, jstring jtext) { /*func*/
  ret_t ret;
  input_method_t* im = (input_method_t*)jim;
  char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (ret_t)input_method_commit_text(im, text);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_InputMethod_input_method_dispatch_key(JNIEnv* env,  jclass ajc, jlong jim, jint key) { /*func*/
  ret_t ret;
  input_method_t* im = (input_method_t*)jim;
  ret = (ret_t)input_method_dispatch_key(im, key);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_InputMethod_input_method(JNIEnv* env,  jclass ajc) { /*func*/
  input_method_t* ret;
  ret = (input_method_t*)input_method();

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_RETURN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_RETURN);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_ESCAPE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_ESCAPE);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_BACKSPACE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_BACKSPACE);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_TAB(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_TAB);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_SPACE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_SPACE);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_EXCLAIM(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_EXCLAIM);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_QUOTEDBL(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_QUOTEDBL);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_HASH(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_HASH);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_PERCENT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_PERCENT);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_DOLLAR(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_DOLLAR);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_AMPERSAND(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_AMPERSAND);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_QUOTE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_QUOTE);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_LEFTPAREN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_LEFTPAREN);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_RIGHTPAREN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_RIGHTPAREN);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_ASTERISK(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_ASTERISK);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_PLUS(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_PLUS);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_COMMA(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_COMMA);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_MINUS(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_MINUS);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_PERIOD(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_PERIOD);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_SLASH(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_SLASH);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_0(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_0);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_1(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_1);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_2(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_2);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_3(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_3);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_4(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_4);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_5(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_5);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_6(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_6);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_7(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_7);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_8(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_8);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_9(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_9);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_COLON(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_COLON);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_SEMICOLON(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_SEMICOLON);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_LESS(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_LESS);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_EQUAL(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_EQUAL);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_GREATER(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_GREATER);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_QUESTION(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_QUESTION);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_AT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_AT);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_LEFTBRACKET(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_LEFTBRACKET);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_BACKSLASH(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_BACKSLASH);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_RIGHTBRACKET(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_RIGHTBRACKET);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_CARET(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_CARET);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_UNDERSCORE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_UNDERSCORE);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_BACKQUOTE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_BACKQUOTE);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_a(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_a);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_b(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_b);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_c(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_c);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_d(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_d);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_e(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_e);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_f(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_f);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_g(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_g);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_h(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_h);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_i(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_i);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_j(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_j);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_k(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_k);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_l(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_l);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_m(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_m);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_n(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_n);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_o(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_o);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_p(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_p);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_q(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_q);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_r(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_r);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_s(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_s);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_t(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_t);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_u(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_u);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_v(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_v);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_w(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_w);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_x(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_x);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_y(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_y);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_z(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_z);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_A(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_A);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_B(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_B);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_C(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_C);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_D(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_D);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_E(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_E);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_F(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_F);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_G(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_G);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_H(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_H);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_I(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_I);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_J(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_J);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_K(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_K);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_L(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_L);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_M(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_M);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_N(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_N);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_O(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_O);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_P(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_P);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_Q(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_Q);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_R(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_R);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_S(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_S);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_T(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_T);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_U(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_U);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_V(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_V);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_W(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_W);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_X(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_X);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_Y(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_Y);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_Z(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_Z);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_DOT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_DOT);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_DELETE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_DELETE);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_LEFTBRACE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_LEFTBRACE);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_RIGHTBRACE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_RIGHTBRACE);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_LSHIFT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_LSHIFT);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_RSHIFT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_RSHIFT);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_LCTRL(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_LCTRL);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_RCTRL(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_RCTRL);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_LALT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_LALT);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_RALT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_RALT);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_CAPSLOCK(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_CAPSLOCK);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_HOME(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_HOME);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_END(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_END);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_INSERT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_INSERT);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_UP(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_UP);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_DOWN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_DOWN);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_LEFT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_LEFT);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_RIGHT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_RIGHT);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_PAGEUP(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_PAGEUP);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_PAGEDOWN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_PAGEDOWN);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_F1(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_F1);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_F2(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_F2);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_F3(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_F3);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_F4(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_F4);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_F5(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_F5);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_F6(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_F6);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_F7(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_F7);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_F8(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_F8);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_F9(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_F9);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_F10(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_F10);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_F11(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_F11);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_F12(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_F12);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_MENU(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_MENU);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_COMMAND(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_COMMAND);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_BACK(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_BACK);
}

JNIEXPORT jint JNICALL Java_KeyCode_TK_KEY_CANCEL(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(TK_KEY_CANCEL);
}

JNIEXPORT jlong JNICALL Java_LocaleInfo_locale_info(JNIEnv* env,  jclass ajc) { /*func*/
  locale_info_t* ret;
  ret = (locale_info_t*)locale_info();

  return (jlong)(ret);
}

JNIEXPORT jstring JNICALL Java_LocaleInfo_locale_info_tr(JNIEnv* env,  jclass ajc, jlong jlocale_info, jstring jtext) { /*func*/
  char* ret;
  locale_info_t* locale_info = (locale_info_t*)jlocale_info;
  char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (char*)locale_info_tr(locale_info, text);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (*env)->NewStringUTF(env, ret);
}

JNIEXPORT jint JNICALL Java_LocaleInfo_locale_info_change(JNIEnv* env,  jclass ajc, jlong jlocale_info, jstring jlanguage, jstring jcountry) { /*func*/
  ret_t ret;
  locale_info_t* locale_info = (locale_info_t*)jlocale_info;
  char* language = (char*)(*env)->GetStringUTFChars(env, jlanguage, 0);
  char* country = (char*)(*env)->GetStringUTFChars(env, jcountry, 0);
  ret = (ret_t)locale_info_change(locale_info, language, country);
  (*env)->ReleaseStringUTFChars(env, jlanguage, language);
  (*env)->ReleaseStringUTFChars(env, jcountry, country);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_LocaleInfo_locale_info_off(JNIEnv* env,  jclass ajc, jlong jlocale_info, jint id) { /*func*/
  ret_t ret;
  locale_info_t* locale_info = (locale_info_t*)jlocale_info;
  ret = (ret_t)locale_info_off(locale_info, id);

  return (jint)(ret);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_BG_COLOR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_BG_COLOR);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_FG_COLOR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_FG_COLOR);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_MASK_COLOR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_MASK_COLOR);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_FONT_NAME(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_FONT_NAME);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_FONT_SIZE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_FONT_SIZE);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_FONT_STYLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_FONT_STYLE);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_TEXT_COLOR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_TEXT_COLOR);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_TIPS_TEXT_COLOR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_TIPS_TEXT_COLOR);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_TEXT_ALIGN_H(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_TEXT_ALIGN_H);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_TEXT_ALIGN_V(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_TEXT_ALIGN_V);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_BORDER_COLOR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_BORDER_COLOR);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_BORDER_WIDTH(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_BORDER_WIDTH);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_BORDER(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_BORDER);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_BG_IMAGE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_BG_IMAGE);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_BG_IMAGE_DRAW_TYPE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_BG_IMAGE_DRAW_TYPE);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_ICON(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_ICON);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_FG_IMAGE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_FG_IMAGE);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_FG_IMAGE_DRAW_TYPE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_FG_IMAGE_DRAW_TYPE);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_SPACER(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_SPACER);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_MARGIN(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_MARGIN);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_MARGIN_LEFT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_MARGIN_LEFT);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_MARGIN_RIGHT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_MARGIN_RIGHT);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_MARGIN_TOP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_MARGIN_TOP);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_MARGIN_BOTTOM(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_MARGIN_BOTTOM);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_ICON_AT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_ICON_AT);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_ACTIVE_ICON(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_ACTIVE_ICON);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_X_OFFSET(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_X_OFFSET);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_Y_OFFSET(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_Y_OFFSET);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_SELECTED_BG_COLOR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_SELECTED_BG_COLOR);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_SELECTED_FG_COLOR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_SELECTED_FG_COLOR);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_SELECTED_TEXT_COLOR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_SELECTED_TEXT_COLOR);
}

JNIEXPORT jstring JNICALL Java_StyleId_STYLE_ID_ROUND_RADIUS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, STYLE_ID_ROUND_RADIUS);
}

JNIEXPORT jint JNICALL Java_Style_style_notify_widget_state_changed(JNIEnv* env,  jclass ajc, jlong js, jlong jwidget) { /*func*/
  ret_t ret;
  style_t* s = (style_t*)js;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)style_notify_widget_state_changed(s, widget);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_Style_style_is_valid(JNIEnv* env,  jclass ajc, jlong js) { /*func*/
  bool_t ret;
  style_t* s = (style_t*)js;
  ret = (bool_t)style_is_valid(s);

  return (jboolean)(ret);
}

JNIEXPORT jint JNICALL Java_Style_style_get_int(JNIEnv* env,  jclass ajc, jlong js, jstring jname, jint defval) { /*func*/
  int32_t ret;
  style_t* s = (style_t*)js;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (int32_t)style_get_int(s, name, defval);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jstring JNICALL Java_Style_style_get_str(JNIEnv* env,  jclass ajc, jlong js, jstring jname, jstring jdefval) { /*func*/
  const char* ret;
  style_t* s = (style_t*)js;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  const char* defval = (char*)(*env)->GetStringUTFChars(env, jdefval, 0);
  ret = (const char*)style_get_str(s, name, defval);
  (*env)->ReleaseStringUTFChars(env, jname, name);
  (*env)->ReleaseStringUTFChars(env, jdefval, defval);

  return (*env)->NewStringUTF(env, ret);
}

JNIEXPORT jint JNICALL Java_Style_style_set(JNIEnv* env,  jclass ajc, jlong js, jstring jstate, jstring jname, jlong jvalue) { /*func*/
  ret_t ret;
  style_t* s = (style_t*)js;
  const char* state = (char*)(*env)->GetStringUTFChars(env, jstate, 0);
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  const value_t* value = (const value_t*)jvalue;
  ret = (ret_t)style_set(s, state, name, value);
  (*env)->ReleaseStringUTFChars(env, jstate, state);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_Style_style_is_mutable(JNIEnv* env,  jclass ajc, jlong js) { /*func*/
  bool_t ret;
  style_t* s = (style_t*)js;
  ret = (bool_t)style_is_mutable(s);

  return (jboolean)(ret);
}

JNIEXPORT jlong JNICALL Java_Theme_theme(JNIEnv* env,  jclass ajc) { /*func*/
  theme_t* ret;
  ret = (theme_t*)theme();

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Timer_timer_remove(JNIEnv* env,  jclass ajc, jint timer_id) { /*func*/
  ret_t ret;
  ret = (ret_t)timer_remove(timer_id);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Timer_timer_reset(JNIEnv* env,  jclass ajc, jint timer_id) { /*func*/
  ret_t ret;
  ret = (ret_t)timer_reset(timer_id);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Timer_timer_modify(JNIEnv* env,  jclass ajc, jint timer_id, jint duration) { /*func*/
  ret_t ret;
  ret = (ret_t)timer_modify(timer_id, duration);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_AlignV_ALIGN_V_NONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ALIGN_V_NONE);
}

JNIEXPORT jint JNICALL Java_AlignV_ALIGN_V_MIDDLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ALIGN_V_MIDDLE);
}

JNIEXPORT jint JNICALL Java_AlignV_ALIGN_V_TOP(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ALIGN_V_TOP);
}

JNIEXPORT jint JNICALL Java_AlignV_ALIGN_V_BOTTOM(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ALIGN_V_BOTTOM);
}

JNIEXPORT jint JNICALL Java_AlignH_ALIGN_H_NONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ALIGN_H_NONE);
}

JNIEXPORT jint JNICALL Java_AlignH_ALIGN_H_CENTER(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ALIGN_H_CENTER);
}

JNIEXPORT jint JNICALL Java_AlignH_ALIGN_H_LEFT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ALIGN_H_LEFT);
}

JNIEXPORT jint JNICALL Java_AlignH_ALIGN_H_RIGHT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ALIGN_H_RIGHT);
}

JNIEXPORT jint JNICALL Java_BitmapFormat_BITMAP_FMT_NONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FMT_NONE);
}

JNIEXPORT jint JNICALL Java_BitmapFormat_BITMAP_FMT_RGBA8888(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FMT_RGBA8888);
}

JNIEXPORT jint JNICALL Java_BitmapFormat_BITMAP_FMT_ABGR8888(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FMT_ABGR8888);
}

JNIEXPORT jint JNICALL Java_BitmapFormat_BITMAP_FMT_BGRA8888(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FMT_BGRA8888);
}

JNIEXPORT jint JNICALL Java_BitmapFormat_BITMAP_FMT_ARGB8888(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FMT_ARGB8888);
}

JNIEXPORT jint JNICALL Java_BitmapFormat_BITMAP_FMT_RGB565(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FMT_RGB565);
}

JNIEXPORT jint JNICALL Java_BitmapFormat_BITMAP_FMT_BGR565(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FMT_BGR565);
}

JNIEXPORT jint JNICALL Java_BitmapFormat_BITMAP_FMT_RGB888(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FMT_RGB888);
}

JNIEXPORT jint JNICALL Java_BitmapFormat_BITMAP_FMT_BGR888(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FMT_BGR888);
}

JNIEXPORT jint JNICALL Java_BitmapFormat_BITMAP_FMT_GRAY(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FMT_GRAY);
}

JNIEXPORT jint JNICALL Java_BitmapFormat_BITMAP_FMT_MONO(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FMT_MONO);
}

JNIEXPORT jint JNICALL Java_BitmapFlag_BITMAP_FLAG_NONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FLAG_NONE);
}

JNIEXPORT jint JNICALL Java_BitmapFlag_BITMAP_FLAG_OPAQUE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FLAG_OPAQUE);
}

JNIEXPORT jint JNICALL Java_BitmapFlag_BITMAP_FLAG_IMMUTABLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FLAG_IMMUTABLE);
}

JNIEXPORT jint JNICALL Java_BitmapFlag_BITMAP_FLAG_TEXTURE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FLAG_TEXTURE);
}

JNIEXPORT jint JNICALL Java_BitmapFlag_BITMAP_FLAG_CHANGED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FLAG_CHANGED);
}

JNIEXPORT jint JNICALL Java_BitmapFlag_BITMAP_FLAG_PREMULTI_ALPHA(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(BITMAP_FLAG_PREMULTI_ALPHA);
}

JNIEXPORT jlong JNICALL Java_Vgcanvas_vgcanvas_cast(JNIEnv* env,  jclass ajc, jlong jvg) { /*func*/
  vgcanvas_t* ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (vgcanvas_t*)vgcanvas_cast(vg);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_flush(JNIEnv* env,  jclass ajc, jlong jvg) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_flush(vg);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_begin_path(JNIEnv* env,  jclass ajc, jlong jvg) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_begin_path(vg);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_move_to(JNIEnv* env,  jclass ajc, jlong jvg, jdouble x, jdouble y) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_move_to(vg, x, y);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_line_to(JNIEnv* env,  jclass ajc, jlong jvg, jdouble x, jdouble y) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_line_to(vg, x, y);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_quad_to(JNIEnv* env,  jclass ajc, jlong jvg, jdouble cpx, jdouble cpy, jdouble x, jdouble y) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_quad_to(vg, cpx, cpy, x, y);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_bezier_to(JNIEnv* env,  jclass ajc, jlong jvg, jdouble cp1x, jdouble cp1y, jdouble cp2x, jdouble cp2y, jdouble x, jdouble y) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_bezier_to(vg, cp1x, cp1y, cp2x, cp2y, x, y);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_arc_to(JNIEnv* env,  jclass ajc, jlong jvg, jdouble x1, jdouble y1, jdouble x2, jdouble y2, jdouble r) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_arc_to(vg, x1, y1, x2, y2, r);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_arc(JNIEnv* env,  jclass ajc, jlong jvg, jdouble x, jdouble y, jdouble r, jdouble start_angle, jdouble end_angle, jboolean ccw) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_arc(vg, x, y, r, start_angle, end_angle, ccw);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_Vgcanvas_vgcanvas_is_point_in_path(JNIEnv* env,  jclass ajc, jlong jvg, jdouble x, jdouble y) { /*func*/
  bool_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (bool_t)vgcanvas_is_point_in_path(vg, x, y);

  return (jboolean)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_rect(JNIEnv* env,  jclass ajc, jlong jvg, jdouble x, jdouble y, jdouble w, jdouble h) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_rect(vg, x, y, w, h);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_rounded_rect(JNIEnv* env,  jclass ajc, jlong jvg, jdouble x, jdouble y, jdouble w, jdouble h, jdouble r) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_rounded_rect(vg, x, y, w, h, r);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_ellipse(JNIEnv* env,  jclass ajc, jlong jvg, jdouble x, jdouble y, jdouble rx, jdouble ry) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_ellipse(vg, x, y, rx, ry);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_close_path(JNIEnv* env,  jclass ajc, jlong jvg) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_close_path(vg);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_rotate(JNIEnv* env,  jclass ajc, jlong jvg, jdouble rad) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_rotate(vg, rad);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_scale(JNIEnv* env,  jclass ajc, jlong jvg, jdouble x, jdouble y) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_scale(vg, x, y);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_translate(JNIEnv* env,  jclass ajc, jlong jvg, jdouble x, jdouble y) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_translate(vg, x, y);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_transform(JNIEnv* env,  jclass ajc, jlong jvg, jdouble a, jdouble b, jdouble c, jdouble d, jdouble e, jdouble f) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_transform(vg, a, b, c, d, e, f);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_set_transform(JNIEnv* env,  jclass ajc, jlong jvg, jdouble a, jdouble b, jdouble c, jdouble d, jdouble e, jdouble f) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_set_transform(vg, a, b, c, d, e, f);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_clip_rect(JNIEnv* env,  jclass ajc, jlong jvg, jdouble x, jdouble y, jdouble w, jdouble h) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_clip_rect(vg, x, y, w, h);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_fill(JNIEnv* env,  jclass ajc, jlong jvg) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_fill(vg);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_stroke(JNIEnv* env,  jclass ajc, jlong jvg) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_stroke(vg);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_paint(JNIEnv* env,  jclass ajc, jlong jvg, jboolean stroke, jlong jimg) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  bitmap_t* img = (bitmap_t*)jimg;
  ret = (ret_t)vgcanvas_paint(vg, stroke, img);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_set_font(JNIEnv* env,  jclass ajc, jlong jvg, jstring jfont) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  char* font = (char*)(*env)->GetStringUTFChars(env, jfont, 0);
  ret = (ret_t)vgcanvas_set_font(vg, font);
  (*env)->ReleaseStringUTFChars(env, jfont, font);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_set_font_size(JNIEnv* env,  jclass ajc, jlong jvg, jdouble font) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_set_font_size(vg, font);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_set_text_align(JNIEnv* env,  jclass ajc, jlong jvg, jstring jvalue) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  char* value = (char*)(*env)->GetStringUTFChars(env, jvalue, 0);
  ret = (ret_t)vgcanvas_set_text_align(vg, value);
  (*env)->ReleaseStringUTFChars(env, jvalue, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_set_text_baseline(JNIEnv* env,  jclass ajc, jlong jvg, jstring jvalue) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  char* value = (char*)(*env)->GetStringUTFChars(env, jvalue, 0);
  ret = (ret_t)vgcanvas_set_text_baseline(vg, value);
  (*env)->ReleaseStringUTFChars(env, jvalue, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_fill_text(JNIEnv* env,  jclass ajc, jlong jvg, jstring jtext, jdouble x, jdouble y, jdouble max_width) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (ret_t)vgcanvas_fill_text(vg, text, x, y, max_width);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (jint)(ret);
}

JNIEXPORT jdouble JNICALL Java_Vgcanvas_vgcanvas_measure_text(JNIEnv* env,  jclass ajc, jlong jvg, jstring jtext) { /*func*/
  float_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (float_t)vgcanvas_measure_text(vg, text);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (jdouble)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_draw_image(JNIEnv* env,  jclass ajc, jlong jvg, jlong jimg, jdouble sx, jdouble sy, jdouble sw, jdouble sh, jdouble dx, jdouble dy, jdouble dw, jdouble dh) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  bitmap_t* img = (bitmap_t*)jimg;
  ret = (ret_t)vgcanvas_draw_image(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_draw_icon(JNIEnv* env,  jclass ajc, jlong jvg, jlong jimg, jdouble sx, jdouble sy, jdouble sw, jdouble sh, jdouble dx, jdouble dy, jdouble dw, jdouble dh) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  bitmap_t* img = (bitmap_t*)jimg;
  ret = (ret_t)vgcanvas_draw_icon(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_set_antialias(JNIEnv* env,  jclass ajc, jlong jvg, jboolean value) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_set_antialias(vg, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_set_global_alpha(JNIEnv* env,  jclass ajc, jlong jvg, jdouble alpha) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_set_global_alpha(vg, alpha);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_set_line_width(JNIEnv* env,  jclass ajc, jlong jvg, jdouble value) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_set_line_width(vg, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_set_fill_color_str(JNIEnv* env,  jclass ajc, jlong jvg, jstring jcolor) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  const char* color = (char*)(*env)->GetStringUTFChars(env, jcolor, 0);
  ret = (ret_t)vgcanvas_set_fill_color_str(vg, color);
  (*env)->ReleaseStringUTFChars(env, jcolor, color);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_set_stroke_color_str(JNIEnv* env,  jclass ajc, jlong jvg, jstring jcolor) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  const char* color = (char*)(*env)->GetStringUTFChars(env, jcolor, 0);
  ret = (ret_t)vgcanvas_set_stroke_color_str(vg, color);
  (*env)->ReleaseStringUTFChars(env, jcolor, color);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_set_line_cap(JNIEnv* env,  jclass ajc, jlong jvg, jstring jvalue) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  char* value = (char*)(*env)->GetStringUTFChars(env, jvalue, 0);
  ret = (ret_t)vgcanvas_set_line_cap(vg, value);
  (*env)->ReleaseStringUTFChars(env, jvalue, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_set_line_join(JNIEnv* env,  jclass ajc, jlong jvg, jstring jvalue) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  char* value = (char*)(*env)->GetStringUTFChars(env, jvalue, 0);
  ret = (ret_t)vgcanvas_set_line_join(vg, value);
  (*env)->ReleaseStringUTFChars(env, jvalue, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_set_miter_limit(JNIEnv* env,  jclass ajc, jlong jvg, jdouble value) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_set_miter_limit(vg, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_save(JNIEnv* env,  jclass ajc, jlong jvg) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_save(vg);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_restore(JNIEnv* env,  jclass ajc, jlong jvg) { /*func*/
  ret_t ret;
  vgcanvas_t* vg = (vgcanvas_t*)jvg;
  ret = (ret_t)vgcanvas_restore(vg);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_t_get_prop_w(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  vgcanvas_t* obj = (vgcanvas_t*)jobj;

  return (jint)(obj->w);
}

JNIEXPORT jint JNICALL Java_Vgcanvas_vgcanvas_t_get_prop_h(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  vgcanvas_t* obj = (vgcanvas_t*)jobj;

  return (jint)(obj->h);
}

JNIEXPORT jdouble JNICALL Java_Vgcanvas_vgcanvas_t_get_prop_ratio(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  vgcanvas_t* obj = (vgcanvas_t*)jobj;

  return (jdouble)(obj->ratio);
}

JNIEXPORT jboolean JNICALL Java_Vgcanvas_vgcanvas_t_get_prop_anti_alias(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  vgcanvas_t* obj = (vgcanvas_t*)jobj;

  return (jboolean)(obj->anti_alias);
}

JNIEXPORT jdouble JNICALL Java_Vgcanvas_vgcanvas_t_get_prop_line_width(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  vgcanvas_t* obj = (vgcanvas_t*)jobj;

  return (jdouble)(obj->line_width);
}

JNIEXPORT jdouble JNICALL Java_Vgcanvas_vgcanvas_t_get_prop_global_alpha(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  vgcanvas_t* obj = (vgcanvas_t*)jobj;

  return (jdouble)(obj->global_alpha);
}

JNIEXPORT jdouble JNICALL Java_Vgcanvas_vgcanvas_t_get_prop_miter_limit(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  vgcanvas_t* obj = (vgcanvas_t*)jobj;

  return (jdouble)(obj->miter_limit);
}

JNIEXPORT jstring JNICALL Java_Vgcanvas_vgcanvas_t_get_prop_line_cap(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  vgcanvas_t* obj = (vgcanvas_t*)jobj;

  return (*env)->NewStringUTF(env, obj->line_cap);
}

JNIEXPORT jstring JNICALL Java_Vgcanvas_vgcanvas_t_get_prop_line_join(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  vgcanvas_t* obj = (vgcanvas_t*)jobj;

  return (*env)->NewStringUTF(env, obj->line_join);
}

JNIEXPORT jstring JNICALL Java_Vgcanvas_vgcanvas_t_get_prop_font(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  vgcanvas_t* obj = (vgcanvas_t*)jobj;

  return (*env)->NewStringUTF(env, obj->font);
}

JNIEXPORT jdouble JNICALL Java_Vgcanvas_vgcanvas_t_get_prop_font_size(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  vgcanvas_t* obj = (vgcanvas_t*)jobj;

  return (jdouble)(obj->font_size);
}

JNIEXPORT jstring JNICALL Java_Vgcanvas_vgcanvas_t_get_prop_text_align(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  vgcanvas_t* obj = (vgcanvas_t*)jobj;

  return (*env)->NewStringUTF(env, obj->text_align);
}

JNIEXPORT jstring JNICALL Java_Vgcanvas_vgcanvas_t_get_prop_text_baseline(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  vgcanvas_t* obj = (vgcanvas_t*)jobj;

  return (*env)->NewStringUTF(env, obj->text_baseline);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_EXEC(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_EXEC);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_X(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_X);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_Y(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_Y);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_W(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_W);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_H(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_H);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_CANVAS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_CANVAS);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_LOCALIZE_OPTIONS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_LOCALIZE_OPTIONS);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_NATIVE_WINDOW(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_NATIVE_WINDOW);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_HIGHLIGHT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_HIGHLIGHT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_BAR_SIZE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_BAR_SIZE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_OPACITY(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_OPACITY);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_MIN_W(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_MIN_W);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_MAX_W(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_MAX_W);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_CHILDREN_LAYOUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_CHILDREN_LAYOUT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_LAYOUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_LAYOUT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_SELF_LAYOUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_SELF_LAYOUT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_LAYOUT_W(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_LAYOUT_W);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_LAYOUT_H(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_LAYOUT_H);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_VIRTUAL_W(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_VIRTUAL_W);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_VIRTUAL_H(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_VIRTUAL_H);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_NAME(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_NAME);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_TYPE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_TYPE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_CLOSABLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_CLOSABLE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_CURSOR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_CURSOR);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_VALUE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_VALUE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_LENGTH(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_LENGTH);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_TEXT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_TEXT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_TR_TEXT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_TR_TEXT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_STYLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_STYLE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ENABLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ENABLE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_FEEDBACK(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_FEEDBACK);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_FLOATING(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_FLOATING);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_MARGIN(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_MARGIN);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_SPACING(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_SPACING);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_LEFT_MARGIN(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_LEFT_MARGIN);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_RIGHT_MARGIN(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_RIGHT_MARGIN);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_TOP_MARGIN(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_TOP_MARGIN);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_BOTTOM_MARGIN(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_BOTTOM_MARGIN);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_STEP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_STEP);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_VISIBLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_VISIBLE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_SENSITIVE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_SENSITIVE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ANIMATION(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ANIMATION);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ANIM_HINT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ANIM_HINT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_FULLSCREEN(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_FULLSCREEN);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_OPEN_ANIM_HINT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_OPEN_ANIM_HINT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_CLOSE_ANIM_HINT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_CLOSE_ANIM_HINT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_MIN(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_MIN);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_TIPS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_TIPS);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_INPUT_TYPE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_INPUT_TYPE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_READONLY(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_READONLY);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_PASSWORD_VISIBLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_PASSWORD_VISIBLE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ACTIVE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ACTIVE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_VERTICAL(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_VERTICAL);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_SHOW_TEXT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_SHOW_TEXT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_XOFFSET(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_XOFFSET);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_YOFFSET(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_YOFFSET);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ALIGN_V(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ALIGN_V);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ALIGN_H(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ALIGN_H);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_AUTO_PLAY(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_AUTO_PLAY);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_LOOP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_LOOP);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_AUTO_FIX(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_AUTO_FIX);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_OPEN_IM_WHEN_FOCUSED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_OPEN_IM_WHEN_FOCUSED);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_X_MIN(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_X_MIN);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_X_MAX(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_X_MAX);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_Y_MIN(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_Y_MIN);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_Y_MAX(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_Y_MAX);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_MAX(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_MAX);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_GRAB_KEYS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_GRAB_KEYS);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ROW(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ROW);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_STATE_FOR_STYLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_STATE_FOR_STYLE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_THEME(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_THEME);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_STAGE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_STAGE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_IMAGE_MANAGER(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_IMAGE_MANAGER);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ASSETS_MANAGER(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ASSETS_MANAGER);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_LOCALE_INFO(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_LOCALE_INFO);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_FONT_MANAGER(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_FONT_MANAGER);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_THEME_OBJ(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_THEME_OBJ);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_DEFAULT_THEME_OBJ(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_DEFAULT_THEME_OBJ);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ITEM_WIDTH(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ITEM_WIDTH);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ITEM_HEIGHT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ITEM_HEIGHT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_DEFAULT_ITEM_HEIGHT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_DEFAULT_ITEM_HEIGHT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_XSLIDABLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_XSLIDABLE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_YSLIDABLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_YSLIDABLE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_REPEAT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_REPEAT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ENABLE_LONG_PRESS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ENABLE_LONG_PRESS);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ANIMATABLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ANIMATABLE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_AUTO_HIDE_SCROLL_BAR);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_IMAGE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_IMAGE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_FORMAT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_FORMAT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_DRAW_TYPE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_DRAW_TYPE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_SELECTABLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_SELECTABLE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_CLICKABLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_CLICKABLE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_SCALE_X(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_SCALE_X);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_SCALE_Y(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_SCALE_Y);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ANCHOR_X(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ANCHOR_X);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ANCHOR_Y(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ANCHOR_Y);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ROTATION(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ROTATION);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_COMPACT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_COMPACT);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_SCROLLABLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_SCROLLABLE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ICON(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ICON);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_OPTIONS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_OPTIONS);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_SELECTED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_SELECTED);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_CHECKED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_CHECKED);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_ACTIVE_ICON(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_ACTIVE_ICON);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_OPEN_WINDOW(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_OPEN_WINDOW);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_SELECTED_INDEX(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_SELECTED_INDEX);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_CLOSE_WHEN_CLICK(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_CLOSE_WHEN_CLICK);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_LINE_GAP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_LINE_GAP);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_BG_COLOR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_BG_COLOR);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_BORDER_COLOR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_BORDER_COLOR);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_DELAY(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_DELAY);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_IS_KEYBOARD(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_IS_KEYBOARD);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_FOCUSED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_FOCUSED);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_FOCUS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_FOCUS);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_FOCUSABLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_FOCUSABLE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_WITH_FOCUS_STATE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_WITH_FOCUS_STATE);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_MOVE_FOCUS_PREV_KEY(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_MOVE_FOCUS_PREV_KEY);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_MOVE_FOCUS_NEXT_KEY);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_MOVE_FOCUS_UP_KEY(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_MOVE_FOCUS_UP_KEY);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_MOVE_FOCUS_DOWN_KEY(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_MOVE_FOCUS_DOWN_KEY);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_MOVE_FOCUS_LEFT_KEY(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_MOVE_FOCUS_LEFT_KEY);
}

JNIEXPORT jstring JNICALL Java_WidgetProp_WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_NONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_NONE);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_WINDOW_MANAGER(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_WINDOW_MANAGER);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_NORMAL_WINDOW(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_NORMAL_WINDOW);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_OVERLAY(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_OVERLAY);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_TOOL_BAR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_TOOL_BAR);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_DIALOG(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_DIALOG);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_POPUP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_POPUP);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_SYSTEM_BAR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_SYSTEM_BAR);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_SYSTEM_BAR_BOTTOM(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_SYSTEM_BAR_BOTTOM);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_SPRITE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_SPRITE);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_KEYBOARD(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_KEYBOARD);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_DND(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_DND);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_LABEL(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_LABEL);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_BUTTON(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_BUTTON);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_IMAGE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_IMAGE);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_EDIT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_EDIT);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_PROGRESS_BAR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_PROGRESS_BAR);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_GROUP_BOX(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_GROUP_BOX);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_CHECK_BUTTON(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_CHECK_BUTTON);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_RADIO_BUTTON(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_RADIO_BUTTON);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_DIALOG_TITLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_DIALOG_TITLE);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_DIALOG_CLIENT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_DIALOG_CLIENT);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_SLIDER(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_SLIDER);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_VIEW(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_VIEW);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_COMBO_BOX(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_COMBO_BOX);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_COMBO_BOX_ITEM(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_COMBO_BOX_ITEM);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_SLIDE_VIEW(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_SLIDE_VIEW);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_SLIDE_INDICATOR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_SLIDE_INDICATOR);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_SLIDE_INDICATOR_ARC(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_SLIDE_INDICATOR_ARC);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_PAGES(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_PAGES);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_TAB_BUTTON(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_TAB_BUTTON);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_TAB_CONTROL(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_TAB_CONTROL);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_TAB_BUTTON_GROUP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_TAB_BUTTON_GROUP);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_BUTTON_GROUP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_BUTTON_GROUP);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_CANDIDATES(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_CANDIDATES);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_SPIN_BOX(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_SPIN_BOX);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_DRAGGER(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_DRAGGER);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_SCROLL_BAR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_SCROLL_BAR);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_SCROLL_BAR_DESKTOP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_SCROLL_BAR_DESKTOP);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_SCROLL_BAR_MOBILE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_SCROLL_BAR_MOBILE);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_SCROLL_VIEW(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_SCROLL_VIEW);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_LIST_VIEW(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_LIST_VIEW);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_LIST_VIEW_H(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_LIST_VIEW_H);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_LIST_ITEM(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_LIST_ITEM);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_COLOR_PICKER(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_COLOR_PICKER);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_COLOR_COMPONENT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_COLOR_COMPONENT);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_COLOR_TILE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_COLOR_TILE);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_RICH_TEXT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_RICH_TEXT);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_APP_BAR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_APP_BAR);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_GRID(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_GRID);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_GRID_ITEM(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_GRID_ITEM);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_ROW(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_ROW);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_COLUMN(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_COLUMN);
}

JNIEXPORT jstring JNICALL Java_WidgetType_WIDGET_TYPE_CALIBRATION_WIN(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_TYPE_CALIBRATION_WIN);
}

JNIEXPORT jint JNICALL Java_WindowStage_WINDOW_STAGE_NONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(WINDOW_STAGE_NONE);
}

JNIEXPORT jint JNICALL Java_WindowStage_WINDOW_STAGE_CREATED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(WINDOW_STAGE_CREATED);
}

JNIEXPORT jint JNICALL Java_WindowStage_WINDOW_STAGE_OPENED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(WINDOW_STAGE_OPENED);
}

JNIEXPORT jint JNICALL Java_WindowStage_WINDOW_STAGE_CLOSED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(WINDOW_STAGE_CLOSED);
}

JNIEXPORT jint JNICALL Java_WindowClosable_WINDOW_CLOSABLE_YES(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(WINDOW_CLOSABLE_YES);
}

JNIEXPORT jint JNICALL Java_WindowClosable_WINDOW_CLOSABLE_NO(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(WINDOW_CLOSABLE_NO);
}

JNIEXPORT jint JNICALL Java_WindowClosable_WINDOW_CLOSABLE_CONFIRM(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(WINDOW_CLOSABLE_CONFIRM);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_NONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_NONE);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_NORMAL(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_NORMAL);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_PRESSED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_PRESSED);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_OVER(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_OVER);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_DISABLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_DISABLE);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_FOCUSED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_FOCUSED);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_CHECKED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_CHECKED);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_UNCHECKED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_UNCHECKED);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_EMPTY(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_EMPTY);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_EMPTY_FOCUS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_EMPTY_FOCUS);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_ERROR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_ERROR);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_SELECTED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_SELECTED);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_NORMAL_OF_CHECKED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_NORMAL_OF_CHECKED);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_PRESSED_OF_CHECKED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_PRESSED_OF_CHECKED);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_OVER_OF_CHECKED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_OVER_OF_CHECKED);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_FOCUSED_OF_CHECKED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_FOCUSED_OF_CHECKED);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_NORMAL_OF_ACTIVE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_NORMAL_OF_ACTIVE);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_PRESSED_OF_ACTIVE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_PRESSED_OF_ACTIVE);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_OVER_OF_ACTIVE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_OVER_OF_ACTIVE);
}

JNIEXPORT jstring JNICALL Java_WidgetState_WIDGET_STATE_FOCUSED_OF_ACTIVE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, WIDGET_STATE_FOCUSED_OF_ACTIVE);
}

JNIEXPORT jint JNICALL Java_Widget_widget_count_children(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  int32_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (int32_t)widget_count_children(widget);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Widget_widget_get_child(JNIEnv* env,  jclass ajc, jlong jwidget, jint index) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)widget_get_child(widget, index);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_index_of(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  int32_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (int32_t)widget_index_of(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_move(JNIEnv* env,  jclass ajc, jlong jwidget, jint x, jint y) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_move(widget, x, y);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_resize(JNIEnv* env,  jclass ajc, jlong jwidget, jint w, jint h) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_resize(widget, w, h);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_move_resize(JNIEnv* env,  jclass ajc, jlong jwidget, jint x, jint y, jint w, jint h) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_move_resize(widget, x, y, w, h);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_value(JNIEnv* env,  jclass ajc, jlong jwidget, jint value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_set_value(widget, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_animate_value_to(JNIEnv* env,  jclass ajc, jlong jwidget, jint value, jint duration) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_animate_value_to(widget, value, duration);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_add_value(JNIEnv* env,  jclass ajc, jlong jwidget, jint delta) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_add_value(widget, delta);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_use_style(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jstyle) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* style = (char*)(*env)->GetStringUTFChars(env, jstyle, 0);
  ret = (ret_t)widget_use_style(widget, style);
  (*env)->ReleaseStringUTFChars(env, jstyle, style);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_text_utf8(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jtext) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (ret_t)widget_set_text_utf8(widget, text);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_tr_text(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jtext) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (ret_t)widget_set_tr_text(widget, text);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_get_value(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  int32_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (int32_t)widget_get_value(widget);

  return (jint)(ret);
}

JNIEXPORT jstring JNICALL Java_Widget_widget_get_text(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  str_t str;
  jstring jstr;
  wchar_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (wchar_t*)widget_get_text(widget);

  str_init(&str, 0);
  str_from_wstr(&str, ret);
  jstr = (*env)->NewStringUTF(env, str.str);
  str_reset(&str);
  return jstr;
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_name(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)widget_set_name(widget, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_theme(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)widget_set_theme(widget, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_pointer_cursor(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jcursor) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* cursor = (char*)(*env)->GetStringUTFChars(env, jcursor, 0);
  ret = (ret_t)widget_set_pointer_cursor(widget, cursor);
  (*env)->ReleaseStringUTFChars(env, jcursor, cursor);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_animation(JNIEnv* env,  jclass ajc, jlong jwidget, jstring janimation) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* animation = (char*)(*env)->GetStringUTFChars(env, janimation, 0);
  ret = (ret_t)widget_set_animation(widget, animation);
  (*env)->ReleaseStringUTFChars(env, janimation, animation);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_create_animator(JNIEnv* env,  jclass ajc, jlong jwidget, jstring janimation) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* animation = (char*)(*env)->GetStringUTFChars(env, janimation, 0);
  ret = (ret_t)widget_create_animator(widget, animation);
  (*env)->ReleaseStringUTFChars(env, janimation, animation);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_start_animator(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)widget_start_animator(widget, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_animator_time_scale(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname, jdouble time_scale) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)widget_set_animator_time_scale(widget, name, time_scale);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_pause_animator(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)widget_pause_animator(widget, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_stop_animator(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)widget_stop_animator(widget, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_destroy_animator(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)widget_destroy_animator(widget, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_enable(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean enable) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_set_enable(widget, enable);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_feedback(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean feedback) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_set_feedback(widget, feedback);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_floating(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean floating) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_set_floating(widget, floating);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_focused(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean focused) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_set_focused(widget, focused);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Widget_widget_child(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (widget_t*)widget_child(widget, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Widget_widget_lookup(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname, jboolean recursive) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (widget_t*)widget_lookup(widget, name, recursive);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Widget_widget_lookup_by_type(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jtype, jboolean recursive) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  char* type = (char*)(*env)->GetStringUTFChars(env, jtype, 0);
  ret = (widget_t*)widget_lookup_by_type(widget, type, recursive);
  (*env)->ReleaseStringUTFChars(env, jtype, type);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_visible(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean visible, jboolean recursive) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_set_visible(widget, visible, recursive);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_visible_only(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean visible) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_set_visible_only(widget, visible);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_sensitive(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean sensitive) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_set_sensitive(widget, sensitive);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_off(JNIEnv* env,  jclass ajc, jlong jwidget, jint id) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_off(widget, id);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_invalidate_force(JNIEnv* env,  jclass ajc, jlong jwidget, jlong jr) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  rect_t* r = (rect_t*)jr;
  ret = (ret_t)widget_invalidate_force(widget, r);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_prop_str(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname, jstring jv) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  const char* v = (char*)(*env)->GetStringUTFChars(env, jv, 0);
  ret = (ret_t)widget_set_prop_str(widget, name, v);
  (*env)->ReleaseStringUTFChars(env, jname, name);
  (*env)->ReleaseStringUTFChars(env, jv, v);

  return (jint)(ret);
}

JNIEXPORT jstring JNICALL Java_Widget_widget_get_prop_str(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname, jstring jdefval) { /*func*/
  const char* ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  const char* defval = (char*)(*env)->GetStringUTFChars(env, jdefval, 0);
  ret = (const char*)widget_get_prop_str(widget, name, defval);
  (*env)->ReleaseStringUTFChars(env, jname, name);
  (*env)->ReleaseStringUTFChars(env, jdefval, defval);

  return (*env)->NewStringUTF(env, ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_prop_int(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname, jint v) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)widget_set_prop_int(widget, name, v);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_get_prop_int(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname, jint defval) { /*func*/
  int32_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (int32_t)widget_get_prop_int(widget, name, defval);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_prop_bool(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname, jboolean v) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)widget_set_prop_bool(widget, name, v);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_Widget_widget_get_prop_bool(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname, jboolean defval) { /*func*/
  bool_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (bool_t)widget_get_prop_bool(widget, name, defval);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jboolean)(ret);
}

JNIEXPORT jboolean JNICALL Java_Widget_widget_is_window_opened(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  bool_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (bool_t)widget_is_window_opened(widget);

  return (jboolean)(ret);
}

JNIEXPORT jboolean JNICALL Java_Widget_widget_is_window(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  bool_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (bool_t)widget_is_window(widget);

  return (jboolean)(ret);
}

JNIEXPORT jboolean JNICALL Java_Widget_widget_is_designing_window(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  bool_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (bool_t)widget_is_designing_window(widget);

  return (jboolean)(ret);
}

JNIEXPORT jboolean JNICALL Java_Widget_widget_is_window_manager(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  bool_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (bool_t)widget_is_window_manager(widget);

  return (jboolean)(ret);
}

JNIEXPORT jlong JNICALL Java_Widget_widget_get_window(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)widget_get_window(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Widget_widget_get_window_manager(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)widget_get_window_manager(widget);

  return (jlong)(ret);
}

JNIEXPORT jstring JNICALL Java_Widget_widget_get_type(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  char* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (char*)widget_get_type(widget);

  return (*env)->NewStringUTF(env, ret);
}

JNIEXPORT jlong JNICALL Java_Widget_widget_clone(JNIEnv* env,  jclass ajc, jlong jwidget, jlong jparent) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)widget_clone(widget, parent);

  return (jlong)(ret);
}

JNIEXPORT jboolean JNICALL Java_Widget_widget_equal(JNIEnv* env,  jclass ajc, jlong jwidget, jlong jother) { /*func*/
  bool_t ret;
  widget_t* widget = (widget_t*)jwidget;
  widget_t* other = (widget_t*)jother;
  ret = (bool_t)widget_equal(widget, other);

  return (jboolean)(ret);
}

JNIEXPORT jlong JNICALL Java_Widget_widget_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)widget_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_destroy(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_destroy(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_unref(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_unref(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_layout(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)widget_layout(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_self_layout(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jparams) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* params = (char*)(*env)->GetStringUTFChars(env, jparams, 0);
  ret = (ret_t)widget_set_self_layout(widget, params);
  (*env)->ReleaseStringUTFChars(env, jparams, params);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_children_layout(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jparams) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* params = (char*)(*env)->GetStringUTFChars(env, jparams, 0);
  ret = (ret_t)widget_set_children_layout(widget, params);
  (*env)->ReleaseStringUTFChars(env, jparams, params);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_self_layout_params(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jx, jstring jy, jstring jw, jstring jh) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* x = (char*)(*env)->GetStringUTFChars(env, jx, 0);
  const char* y = (char*)(*env)->GetStringUTFChars(env, jy, 0);
  const char* w = (char*)(*env)->GetStringUTFChars(env, jw, 0);
  const char* h = (char*)(*env)->GetStringUTFChars(env, jh, 0);
  ret = (ret_t)widget_set_self_layout_params(widget, x, y, w, h);
  (*env)->ReleaseStringUTFChars(env, jx, x);
  (*env)->ReleaseStringUTFChars(env, jy, y);
  (*env)->ReleaseStringUTFChars(env, jw, w);
  (*env)->ReleaseStringUTFChars(env, jh, h);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_style_int(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jstate_and_name, jint value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* state_and_name = (char*)(*env)->GetStringUTFChars(env, jstate_and_name, 0);
  ret = (ret_t)widget_set_style_int(widget, state_and_name, value);
  (*env)->ReleaseStringUTFChars(env, jstate_and_name, state_and_name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_style_str(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jstate_and_name, jstring jvalue) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* state_and_name = (char*)(*env)->GetStringUTFChars(env, jstate_and_name, 0);
  const char* value = (char*)(*env)->GetStringUTFChars(env, jvalue, 0);
  ret = (ret_t)widget_set_style_str(widget, state_and_name, value);
  (*env)->ReleaseStringUTFChars(env, jstate_and_name, state_and_name);
  (*env)->ReleaseStringUTFChars(env, jvalue, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_set_style_color(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jstate_and_name, jint value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* state_and_name = (char*)(*env)->GetStringUTFChars(env, jstate_and_name, 0);
  ret = (ret_t)widget_set_style_color(widget, state_and_name, value);
  (*env)->ReleaseStringUTFChars(env, jstate_and_name, state_and_name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Widget_widget_t_get_prop_x(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (jint)(obj->x);
}

JNIEXPORT jint JNICALL Java_Widget_widget_t_get_prop_y(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (jint)(obj->y);
}

JNIEXPORT jint JNICALL Java_Widget_widget_t_get_prop_w(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (jint)(obj->w);
}

JNIEXPORT jint JNICALL Java_Widget_widget_t_get_prop_h(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (jint)(obj->h);
}

JNIEXPORT jstring JNICALL Java_Widget_widget_t_get_prop_name(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (*env)->NewStringUTF(env, obj->name);
}

JNIEXPORT jstring JNICALL Java_Widget_widget_t_get_prop_tr_text(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (*env)->NewStringUTF(env, obj->tr_text);
}

JNIEXPORT jstring JNICALL Java_Widget_widget_t_get_prop_style(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (*env)->NewStringUTF(env, obj->style);
}

JNIEXPORT jstring JNICALL Java_Widget_widget_t_get_prop_animation(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (*env)->NewStringUTF(env, obj->animation);
}

JNIEXPORT jboolean JNICALL Java_Widget_widget_t_get_prop_enable(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (jboolean)(obj->enable);
}

JNIEXPORT jboolean JNICALL Java_Widget_widget_t_get_prop_feedback(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (jboolean)(obj->feedback);
}

JNIEXPORT void JNICALL Java_Widget_widget_t_set_prop_visible (JNIEnv* env,  jclass ajc, jlong jobj, jboolean value) {/*set*/
  widget_t* obj = (widget_t*)jobj;
  obj->visible = value;
};

JNIEXPORT jboolean JNICALL Java_Widget_widget_t_get_prop_visible(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (jboolean)(obj->visible);
}

JNIEXPORT void JNICALL Java_Widget_widget_t_set_prop_sensitive (JNIEnv* env,  jclass ajc, jlong jobj, jboolean value) {/*set*/
  widget_t* obj = (widget_t*)jobj;
  obj->sensitive = value;
};

JNIEXPORT jboolean JNICALL Java_Widget_widget_t_get_prop_sensitive(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (jboolean)(obj->sensitive);
}

JNIEXPORT void JNICALL Java_Widget_widget_t_set_prop_focusable (JNIEnv* env,  jclass ajc, jlong jobj, jboolean value) {/*set*/
  widget_t* obj = (widget_t*)jobj;
  obj->focusable = value;
};

JNIEXPORT jboolean JNICALL Java_Widget_widget_t_get_prop_focusable(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (jboolean)(obj->focusable);
}

JNIEXPORT void JNICALL Java_Widget_widget_t_set_prop_with_focus_state (JNIEnv* env,  jclass ajc, jlong jobj, jboolean value) {/*set*/
  widget_t* obj = (widget_t*)jobj;
  obj->with_focus_state = value;
};

JNIEXPORT jboolean JNICALL Java_Widget_widget_t_get_prop_with_focus_state(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (jboolean)(obj->with_focus_state);
}

JNIEXPORT jboolean JNICALL Java_Widget_widget_t_get_prop_floating(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  widget_t* obj = (widget_t*)jobj;

  return (jboolean)(obj->floating);
}

JNIEXPORT jint JNICALL Java_Ret_RET_OK(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_OK);
}

JNIEXPORT jint JNICALL Java_Ret_RET_OOM(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_OOM);
}

JNIEXPORT jint JNICALL Java_Ret_RET_FAIL(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_FAIL);
}

JNIEXPORT jint JNICALL Java_Ret_RET_NOT_IMPL(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_NOT_IMPL);
}

JNIEXPORT jint JNICALL Java_Ret_RET_QUIT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_QUIT);
}

JNIEXPORT jint JNICALL Java_Ret_RET_FOUND(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_FOUND);
}

JNIEXPORT jint JNICALL Java_Ret_RET_BUSY(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_BUSY);
}

JNIEXPORT jint JNICALL Java_Ret_RET_REMOVE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_REMOVE);
}

JNIEXPORT jint JNICALL Java_Ret_RET_REPEAT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_REPEAT);
}

JNIEXPORT jint JNICALL Java_Ret_RET_NOT_FOUND(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_NOT_FOUND);
}

JNIEXPORT jint JNICALL Java_Ret_RET_DONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_DONE);
}

JNIEXPORT jint JNICALL Java_Ret_RET_STOP(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_STOP);
}

JNIEXPORT jint JNICALL Java_Ret_RET_SKIP(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_SKIP);
}

JNIEXPORT jint JNICALL Java_Ret_RET_CONTINUE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_CONTINUE);
}

JNIEXPORT jint JNICALL Java_Ret_RET_OBJECT_CHANGED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_OBJECT_CHANGED);
}

JNIEXPORT jint JNICALL Java_Ret_RET_ITEMS_CHANGED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_ITEMS_CHANGED);
}

JNIEXPORT jint JNICALL Java_Ret_RET_BAD_PARAMS(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_BAD_PARAMS);
}

JNIEXPORT jint JNICALL Java_Ret_RET_TIMEOUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_TIMEOUT);
}

JNIEXPORT jint JNICALL Java_Ret_RET_CRC(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_CRC);
}

JNIEXPORT jint JNICALL Java_Ret_RET_IO(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_IO);
}

JNIEXPORT jint JNICALL Java_Ret_RET_EOS(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(RET_EOS);
}

JNIEXPORT jlong JNICALL Java_TimeNow_time_now_s(JNIEnv* env,  jclass ajc) { /*func*/
  uint64_t ret;
  ret = (uint64_t)time_now_s();

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_TimeNow_time_now_ms(JNIEnv* env,  jclass ajc) { /*func*/
  uint64_t ret;
  ret = (uint64_t)time_now_ms();

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Global_tk_ext_widgets_init(JNIEnv* env,  jclass ajc) { /*func*/
  ret_t ret;
  ret = (ret_t)tk_ext_widgets_init();

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Rect_rect_create(JNIEnv* env,  jclass ajc, jint x, jint y, jint w, jint h) { /*func*/
  rect_t* ret;
  ret = (rect_t*)rect_create(x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Rect_rect_set(JNIEnv* env,  jclass ajc, jlong jrect, jint x, jint y, jint w, jint h) { /*func*/
  rect_t* ret;
  rect_t* rect = (rect_t*)jrect;
  ret = (rect_t*)rect_set(rect, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Rect_rect_cast(JNIEnv* env,  jclass ajc, jlong jrect) { /*func*/
  rect_t* ret;
  rect_t* rect = (rect_t*)jrect;
  ret = (rect_t*)rect_cast(rect);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Rect_rect_t_get_prop_x(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  rect_t* obj = (rect_t*)jobj;

  return (jint)(obj->x);
}

JNIEXPORT jint JNICALL Java_Rect_rect_t_get_prop_y(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  rect_t* obj = (rect_t*)jobj;

  return (jint)(obj->y);
}

JNIEXPORT jint JNICALL Java_Rect_rect_t_get_prop_w(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  rect_t* obj = (rect_t*)jobj;

  return (jint)(obj->w);
}

JNIEXPORT jint JNICALL Java_Rect_rect_t_get_prop_h(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  rect_t* obj = (rect_t*)jobj;

  return (jint)(obj->h);
}

JNIEXPORT jlong JNICALL Java_NamedValue_named_value_create(JNIEnv* env,  jclass ajc) { /*func*/
  named_value_t* ret;
  ret = (named_value_t*)named_value_create();

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_NamedValue_named_value_cast(JNIEnv* env,  jclass ajc, jlong jnv) { /*func*/
  named_value_t* ret;
  named_value_t* nv = (named_value_t*)jnv;
  ret = (named_value_t*)named_value_cast(nv);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_NamedValue_named_value_set_name(JNIEnv* env,  jclass ajc, jlong jnv, jstring jname) { /*func*/
  ret_t ret;
  named_value_t* nv = (named_value_t*)jnv;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)named_value_set_name(nv, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_NamedValue_named_value_set_value(JNIEnv* env,  jclass ajc, jlong jnv, jlong jvalue) { /*func*/
  ret_t ret;
  named_value_t* nv = (named_value_t*)jnv;
  const value_t* value = (const value_t*)jvalue;
  ret = (ret_t)named_value_set_value(nv, value);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_NamedValue_named_value_get_value(JNIEnv* env,  jclass ajc, jlong jnv) { /*func*/
  value_t* ret;
  named_value_t* nv = (named_value_t*)jnv;
  ret = (value_t*)named_value_get_value(nv);

  return (jlong)(ret);
}

JNIEXPORT jstring JNICALL Java_NamedValue_named_value_t_get_prop_name(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  named_value_t* obj = (named_value_t*)jobj;

  return (*env)->NewStringUTF(env, obj->name);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_ENVOY(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_ENVOY);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_FRACTALS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_FRACTALS);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_FUTURESPLASH(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_FUTURESPLASH);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_HTA(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_HTA);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_JSON(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_JSON);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_UBJSON(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_UBJSON);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_MAC_BINHEX40(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_MAC_BINHEX40);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_MSWORD(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_MSWORD);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_OCTET_STREAM(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_OCTET_STREAM);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_ODA(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_ODA);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_OLESCRIPT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_OLESCRIPT);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_PDF(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_PDF);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_PICS_RULES(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_PICS_RULES);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_PKCS10(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_PKCS10);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_PKIX_CRL(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_PKIX_CRL);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_POSTSCRIPT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_POSTSCRIPT);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_RTF(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_RTF);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_EXCEL(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_VND_MS_EXCEL);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_OUTLOOK(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_VND_MS_OUTLOOK);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_PKISECCAT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_VND_MS_PKISECCAT);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_PKISTL(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_VND_MS_PKISTL);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_POWERPOINT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_VND_MS_POWERPOINT);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_PROJECT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_VND_MS_PROJECT);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_WORKS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_VND_MS_WORKS);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_WINHLP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_WINHLP);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_BCPIO(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_BCPIO);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_CDF(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_CDF);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_COMPRESS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_COMPRESS);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_COMPRESSED(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_COMPRESSED);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_CPIO(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_CPIO);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_CSH(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_CSH);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_DIRECTOR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_DIRECTOR);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_DVI(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_DVI);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_GTAR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_GTAR);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_GZIP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_GZIP);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_HDF(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_HDF);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_IPHONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_IPHONE);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_JAVASCRIPT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_JAVASCRIPT);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_LATEX(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_LATEX);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_MSACCESS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_MSACCESS);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_MSCARDFILE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_MSCARDFILE);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_MSCLIP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_MSCLIP);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_MSDOWNLOAD(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_MSDOWNLOAD);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_MSMEDIAVIEW(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_MSMEDIAVIEW);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_MSMETAFILE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_MSMETAFILE);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_MSMONEY(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_MSMONEY);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_MSPUBLISHER(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_MSPUBLISHER);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_MSSCHEDULE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_MSSCHEDULE);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_MSTERMINAL(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_MSTERMINAL);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_MSWRITE(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_MSWRITE);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_NETCDF(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_NETCDF);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_PERFMON(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_PERFMON);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_PKCS12(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_PKCS12);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_SH(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_SH);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_SHAR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_SHAR);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_STUFFIT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_STUFFIT);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_SV4CPIO(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_SV4CPIO);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_SV4CRC(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_SV4CRC);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_TAR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_TAR);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_TCL(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_TCL);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_TEX(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_TEX);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_TEXINFO(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_TEXINFO);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_TROFF(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_TROFF);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_X_USTAR(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_X_USTAR);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_APPLICATION_ZIP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_APPLICATION_ZIP);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_AUDIO_BASIC(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_AUDIO_BASIC);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_AUDIO_MID(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_AUDIO_MID);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_AUDIO_MPEG(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_AUDIO_MPEG);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_AUDIO_X_AIFF(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_AUDIO_X_AIFF);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_AUDIO_X_MPEGURL(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_AUDIO_X_MPEGURL);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_AUDIO_X_WAV(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_AUDIO_X_WAV);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_IMAGE_BMP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_IMAGE_BMP);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_IMAGE_CIS_COD(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_IMAGE_CIS_COD);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_IMAGE_GIF(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_IMAGE_GIF);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_IMAGE_IEF(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_IMAGE_IEF);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_IMAGE_JPEG(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_IMAGE_JPEG);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_IMAGE_PIPEG(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_IMAGE_PIPEG);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_IMAGE_SVG_XML(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_IMAGE_SVG_XML);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_IMAGE_TIFF(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_IMAGE_TIFF);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_IMAGE_X_CMX(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_IMAGE_X_CMX);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_IMAGE_X_ICON(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_IMAGE_X_ICON);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_IMAGE_X_RGB(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_IMAGE_X_RGB);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_IMAGE_X_XBITMAP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_IMAGE_X_XBITMAP);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_IMAGE_X_XPIXMAP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_IMAGE_X_XPIXMAP);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_IMAGE_X_XWINDOWDUMP(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_IMAGE_X_XWINDOWDUMP);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_MESSAGE_RFC822(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_MESSAGE_RFC822);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_TEXT_CSS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_TEXT_CSS);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_TEXT_H323(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_TEXT_H323);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_TEXT_HTML(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_TEXT_HTML);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_TEXT_IULS(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_TEXT_IULS);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_TEXT_PLAIN(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_TEXT_PLAIN);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_TEXT_RICHTEXT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_TEXT_RICHTEXT);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_TEXT_SCRIPTLET(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_TEXT_SCRIPTLET);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_TEXT_WEBVIEWHTML(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_TEXT_WEBVIEWHTML);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_TEXT_X_COMPONENT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_TEXT_X_COMPONENT);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_TEXT_X_SETEXT(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_TEXT_X_SETEXT);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_TEXT_X_VCARD(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_TEXT_X_VCARD);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_VIDEO_MPEG(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_VIDEO_MPEG);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_VIDEO_QUICKTIME(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_VIDEO_QUICKTIME);
}

JNIEXPORT jstring JNICALL Java_MIME_TYPE_MIME_TYPE_VIDEO_X_MSVIDEO(JNIEnv* env,  jclass ajc) {/*const*/

  return (*env)->NewStringUTF(env, MIME_TYPE_VIDEO_X_MSVIDEO);
}

JNIEXPORT jint JNICALL Java_IndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_AUTO(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INDICATOR_DEFAULT_PAINT_AUTO);
}

JNIEXPORT jint JNICALL Java_IndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_FILL_DOT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INDICATOR_DEFAULT_PAINT_FILL_DOT);
}

JNIEXPORT jint JNICALL Java_IndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_STROKE_DOT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INDICATOR_DEFAULT_PAINT_STROKE_DOT);
}

JNIEXPORT jint JNICALL Java_IndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_FILL_RECT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INDICATOR_DEFAULT_PAINT_FILL_RECT);
}

JNIEXPORT jint JNICALL Java_IndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_STROKE_RECT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(INDICATOR_DEFAULT_PAINT_STROKE_RECT);
}

JNIEXPORT jlong JNICALL Java_Event_event_cast(JNIEnv* env,  jclass ajc, jlong jevent) { /*func*/
  event_t* ret;
  event_t* event = (event_t*)jevent;
  ret = (event_t*)event_cast(event);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Event_event_create(JNIEnv* env,  jclass ajc, jint type) { /*func*/
  event_t* ret;
  ret = (event_t*)event_create(type);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Event_event_t_get_prop_type(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  event_t* obj = (event_t*)jobj;

  return (jint)(obj->type);
}

JNIEXPORT jint JNICALL Java_Event_event_t_get_prop_time(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  event_t* obj = (event_t*)jobj;

  return (jint)(obj->time);
}

JNIEXPORT jlong JNICALL Java_Event_event_t_get_prop_target(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  event_t* obj = (event_t*)jobj;

  return (jlong)(obj->target);
}

JNIEXPORT jint JNICALL Java_EventBaseType_EVT_NONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_NONE);
}

JNIEXPORT jint JNICALL Java_EventBaseType_EVT_PROP_WILL_CHANGE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_PROP_WILL_CHANGE);
}

JNIEXPORT jint JNICALL Java_EventBaseType_EVT_PROP_CHANGED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_PROP_CHANGED);
}

JNIEXPORT jint JNICALL Java_EventBaseType_EVT_ITEMS_WILL_CHANGE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_ITEMS_WILL_CHANGE);
}

JNIEXPORT jint JNICALL Java_EventBaseType_EVT_ITEMS_CHANGED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_ITEMS_CHANGED);
}

JNIEXPORT jint JNICALL Java_EventBaseType_EVT_PROPS_CHANGED(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_PROPS_CHANGED);
}

JNIEXPORT jint JNICALL Java_EventBaseType_EVT_PROGRESS(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_PROGRESS);
}

JNIEXPORT jint JNICALL Java_EventBaseType_EVT_DESTROY(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EVT_DESTROY);
}

JNIEXPORT jlong JNICALL Java_Emitter_emitter_create(JNIEnv* env,  jclass ajc) { /*func*/
  emitter_t* ret;
  ret = (emitter_t*)emitter_create();

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Emitter_emitter_dispatch(JNIEnv* env,  jclass ajc, jlong jemitter, jlong je) { /*func*/
  ret_t ret;
  emitter_t* emitter = (emitter_t*)jemitter;
  event_t* e = (event_t*)je;
  ret = (ret_t)emitter_dispatch(emitter, e);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Emitter_emitter_dispatch_simple_event(JNIEnv* env,  jclass ajc, jlong jemitter, jint type) { /*func*/
  ret_t ret;
  emitter_t* emitter = (emitter_t*)jemitter;
  ret = (ret_t)emitter_dispatch_simple_event(emitter, type);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Emitter_emitter_off(JNIEnv* env,  jclass ajc, jlong jemitter, jint id) { /*func*/
  ret_t ret;
  emitter_t* emitter = (emitter_t*)jemitter;
  ret = (ret_t)emitter_off(emitter, id);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Emitter_emitter_enable(JNIEnv* env,  jclass ajc, jlong jemitter) { /*func*/
  ret_t ret;
  emitter_t* emitter = (emitter_t*)jemitter;
  ret = (ret_t)emitter_enable(emitter);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Emitter_emitter_disable(JNIEnv* env,  jclass ajc, jlong jemitter) { /*func*/
  ret_t ret;
  emitter_t* emitter = (emitter_t*)jemitter;
  ret = (ret_t)emitter_disable(emitter);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Emitter_emitter_size(JNIEnv* env,  jclass ajc, jlong jemitter) { /*func*/
  uint32_t ret;
  emitter_t* emitter = (emitter_t*)jemitter;
  ret = (uint32_t)emitter_size(emitter);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Emitter_emitter_cast(JNIEnv* env,  jclass ajc, jlong jemitter) { /*func*/
  emitter_t* ret;
  emitter_t* emitter = (emitter_t*)jemitter;
  ret = (emitter_t*)emitter_cast(emitter);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_LINEAR(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_LINEAR);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_QUADRATIC_IN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_QUADRATIC_IN);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_QUADRATIC_OUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_QUADRATIC_OUT);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_QUADRATIC_INOUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_QUADRATIC_INOUT);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_CUBIC_IN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_CUBIC_IN);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_CUBIC_OUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_CUBIC_OUT);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_SIN_IN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_SIN_IN);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_SIN_OUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_SIN_OUT);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_SIN_INOUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_SIN_INOUT);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_POW_IN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_POW_IN);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_POW_OUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_POW_OUT);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_POW_INOUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_POW_INOUT);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_CIRCULAR_IN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_CIRCULAR_IN);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_CIRCULAR_OUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_CIRCULAR_OUT);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_CIRCULAR_INOUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_CIRCULAR_INOUT);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_ELASTIC_IN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_ELASTIC_IN);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_ELASTIC_OUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_ELASTIC_OUT);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_ELASTIC_INOUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_ELASTIC_INOUT);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_BACK_IN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_BACK_IN);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_BACK_OUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_BACK_OUT);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_BACK_INOUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_BACK_INOUT);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_BOUNCE_IN(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_BOUNCE_IN);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_BOUNCE_OUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_BOUNCE_OUT);
}

JNIEXPORT jint JNICALL Java_EasingType_EASING_BOUNCE_INOUT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(EASING_BOUNCE_INOUT);
}

JNIEXPORT jlong JNICALL Java_DateTime_date_time_create(JNIEnv* env,  jclass ajc) { /*func*/
  date_time_t* ret;
  ret = (date_time_t*)date_time_create();

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_DateTime_date_time_set(JNIEnv* env,  jclass ajc, jlong jdt) { /*func*/
  ret_t ret;
  date_time_t* dt = (date_time_t*)jdt;
  ret = (ret_t)date_time_set(dt);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_DateTime_date_time_t_get_prop_second(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  date_time_t* obj = (date_time_t*)jobj;

  return (jint)(obj->second);
}

JNIEXPORT jint JNICALL Java_DateTime_date_time_t_get_prop_minute(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  date_time_t* obj = (date_time_t*)jobj;

  return (jint)(obj->minute);
}

JNIEXPORT jint JNICALL Java_DateTime_date_time_t_get_prop_hour(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  date_time_t* obj = (date_time_t*)jobj;

  return (jint)(obj->hour);
}

JNIEXPORT jint JNICALL Java_DateTime_date_time_t_get_prop_day(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  date_time_t* obj = (date_time_t*)jobj;

  return (jint)(obj->day);
}

JNIEXPORT jint JNICALL Java_DateTime_date_time_t_get_prop_wday(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  date_time_t* obj = (date_time_t*)jobj;

  return (jint)(obj->wday);
}

JNIEXPORT jint JNICALL Java_DateTime_date_time_t_get_prop_month(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  date_time_t* obj = (date_time_t*)jobj;

  return (jint)(obj->month);
}

JNIEXPORT jint JNICALL Java_DateTime_date_time_t_get_prop_year(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  date_time_t* obj = (date_time_t*)jobj;

  return (jint)(obj->year);
}

JNIEXPORT jlong JNICALL Java_Color_color_create(JNIEnv* env,  jclass ajc, jint r, jint b, jint g, jint a) { /*func*/
  color_t* ret;
  ret = (color_t*)color_create(r, b, g, a);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Color_color_from_str(JNIEnv* env,  jclass ajc, jlong jc, jstring jstr) { /*func*/
  color_t* ret;
  color_t* c = (color_t*)jc;
  const char* str = (char*)(*env)->GetStringUTFChars(env, jstr, 0);
  ret = (color_t*)color_from_str(c, str);
  (*env)->ReleaseStringUTFChars(env, jstr, str);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Color_color_r(JNIEnv* env,  jclass ajc, jlong jc) { /*func*/
  uint8_t ret;
  color_t* c = (color_t*)jc;
  ret = (uint8_t)color_r(c);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Color_color_g(JNIEnv* env,  jclass ajc, jlong jc) { /*func*/
  uint8_t ret;
  color_t* c = (color_t*)jc;
  ret = (uint8_t)color_g(c);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Color_color_b(JNIEnv* env,  jclass ajc, jlong jc) { /*func*/
  uint8_t ret;
  color_t* c = (color_t*)jc;
  ret = (uint8_t)color_b(c);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Color_color_a(JNIEnv* env,  jclass ajc, jlong jc) { /*func*/
  uint8_t ret;
  color_t* c = (color_t*)jc;
  ret = (uint8_t)color_a(c);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Color_color_cast(JNIEnv* env,  jclass ajc, jlong jcolor) { /*func*/
  color_t* ret;
  color_t* color = (color_t*)jcolor;
  ret = (color_t*)color_cast(color);

  return (jlong)(ret);
}

JNIEXPORT void JNICALL Java_Color_color_t_set_prop_color (JNIEnv* env,  jclass ajc, jlong jobj, jint value) {/*set*/
  color_t* obj = (color_t*)jobj;
  obj->color = value;
};

JNIEXPORT jint JNICALL Java_Color_color_t_get_prop_color(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  color_t* obj = (color_t*)jobj;

  return (jint)(obj->color);
}

JNIEXPORT jint JNICALL Java_AssetInfo_asset_info_t_get_prop_type(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  asset_info_t* obj = (asset_info_t*)jobj;

  return (jint)(obj->type);
}

JNIEXPORT jint JNICALL Java_AssetInfo_asset_info_t_get_prop_subtype(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  asset_info_t* obj = (asset_info_t*)jobj;

  return (jint)(obj->subtype);
}

JNIEXPORT jint JNICALL Java_AssetInfo_asset_info_t_get_prop_is_in_rom(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  asset_info_t* obj = (asset_info_t*)jobj;

  return (jint)(obj->is_in_rom);
}

JNIEXPORT jint JNICALL Java_AssetInfo_asset_info_t_get_prop_size(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  asset_info_t* obj = (asset_info_t*)jobj;

  return (jint)(obj->size);
}

JNIEXPORT jint JNICALL Java_AssetInfo_asset_info_t_get_prop_refcount(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  asset_info_t* obj = (asset_info_t*)jobj;

  return (jint)(obj->refcount);
}

JNIEXPORT jstring JNICALL Java_AssetInfo_asset_info_t_get_prop_name(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  asset_info_t* obj = (asset_info_t*)jobj;

  return (*env)->NewStringUTF(env, obj->name);
}

JNIEXPORT jint JNICALL Java_AssetType_ASSET_TYPE_NONE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ASSET_TYPE_NONE);
}

JNIEXPORT jint JNICALL Java_AssetType_ASSET_TYPE_FONT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ASSET_TYPE_FONT);
}

JNIEXPORT jint JNICALL Java_AssetType_ASSET_TYPE_IMAGE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ASSET_TYPE_IMAGE);
}

JNIEXPORT jint JNICALL Java_AssetType_ASSET_TYPE_STYLE(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ASSET_TYPE_STYLE);
}

JNIEXPORT jint JNICALL Java_AssetType_ASSET_TYPE_UI(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ASSET_TYPE_UI);
}

JNIEXPORT jint JNICALL Java_AssetType_ASSET_TYPE_XML(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ASSET_TYPE_XML);
}

JNIEXPORT jint JNICALL Java_AssetType_ASSET_TYPE_STRINGS(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ASSET_TYPE_STRINGS);
}

JNIEXPORT jint JNICALL Java_AssetType_ASSET_TYPE_SCRIPT(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ASSET_TYPE_SCRIPT);
}

JNIEXPORT jint JNICALL Java_AssetType_ASSET_TYPE_DATA(JNIEnv* env,  jclass ajc) {/*const*/

  return (jint)(ASSET_TYPE_DATA);
}

JNIEXPORT jlong JNICALL Java_AssetsManager_assets_manager(JNIEnv* env,  jclass ajc) { /*func*/
  assets_manager_t* ret;
  ret = (assets_manager_t*)assets_manager();

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_AssetsManager_assets_manager_ref(JNIEnv* env,  jclass ajc, jlong jam, jint type, jstring jname) { /*func*/
  asset_info_t* ret;
  assets_manager_t* am = (assets_manager_t*)jam;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (asset_info_t*)assets_manager_ref(am, type, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_AssetsManager_assets_manager_unref(JNIEnv* env,  jclass ajc, jlong jam, jlong jinfo) { /*func*/
  ret_t ret;
  assets_manager_t* am = (assets_manager_t*)jam;
  asset_info_t* info = (asset_info_t*)jinfo;
  ret = (ret_t)assets_manager_unref(am, info);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_ColorComponent_color_component_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)color_component_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_TimeClock_time_clock_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)time_clock_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_TimeClock_time_clock_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)time_clock_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_TimeClock_time_clock_set_hour(JNIEnv* env,  jclass ajc, jlong jwidget, jint hour) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)time_clock_set_hour(widget, hour);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TimeClock_time_clock_set_minute(JNIEnv* env,  jclass ajc, jlong jwidget, jint minute) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)time_clock_set_minute(widget, minute);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TimeClock_time_clock_set_second(JNIEnv* env,  jclass ajc, jlong jwidget, jint second) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)time_clock_set_second(widget, second);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TimeClock_time_clock_set_hour_image(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jhour) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* hour = (char*)(*env)->GetStringUTFChars(env, jhour, 0);
  ret = (ret_t)time_clock_set_hour_image(widget, hour);
  (*env)->ReleaseStringUTFChars(env, jhour, hour);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TimeClock_time_clock_set_minute_image(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jminute_image) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* minute_image = (char*)(*env)->GetStringUTFChars(env, jminute_image, 0);
  ret = (ret_t)time_clock_set_minute_image(widget, minute_image);
  (*env)->ReleaseStringUTFChars(env, jminute_image, minute_image);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TimeClock_time_clock_set_second_image(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jsecond_image) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* second_image = (char*)(*env)->GetStringUTFChars(env, jsecond_image, 0);
  ret = (ret_t)time_clock_set_second_image(widget, second_image);
  (*env)->ReleaseStringUTFChars(env, jsecond_image, second_image);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TimeClock_time_clock_set_bg_image(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jbg_image) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* bg_image = (char*)(*env)->GetStringUTFChars(env, jbg_image, 0);
  ret = (ret_t)time_clock_set_bg_image(widget, bg_image);
  (*env)->ReleaseStringUTFChars(env, jbg_image, bg_image);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TimeClock_time_clock_set_image(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jimage) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* image = (char*)(*env)->GetStringUTFChars(env, jimage, 0);
  ret = (ret_t)time_clock_set_image(widget, image);
  (*env)->ReleaseStringUTFChars(env, jimage, image);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TimeClock_time_clock_set_hour_anchor(JNIEnv* env,  jclass ajc, jlong jwidget, jstring janchor_x, jstring janchor_y) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* anchor_x = (char*)(*env)->GetStringUTFChars(env, janchor_x, 0);
  const char* anchor_y = (char*)(*env)->GetStringUTFChars(env, janchor_y, 0);
  ret = (ret_t)time_clock_set_hour_anchor(widget, anchor_x, anchor_y);
  (*env)->ReleaseStringUTFChars(env, janchor_x, anchor_x);
  (*env)->ReleaseStringUTFChars(env, janchor_y, anchor_y);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TimeClock_time_clock_set_minute_anchor(JNIEnv* env,  jclass ajc, jlong jwidget, jstring janchor_x, jstring janchor_y) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* anchor_x = (char*)(*env)->GetStringUTFChars(env, janchor_x, 0);
  const char* anchor_y = (char*)(*env)->GetStringUTFChars(env, janchor_y, 0);
  ret = (ret_t)time_clock_set_minute_anchor(widget, anchor_x, anchor_y);
  (*env)->ReleaseStringUTFChars(env, janchor_x, anchor_x);
  (*env)->ReleaseStringUTFChars(env, janchor_y, anchor_y);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TimeClock_time_clock_set_second_anchor(JNIEnv* env,  jclass ajc, jlong jwidget, jstring janchor_x, jstring janchor_y) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* anchor_x = (char*)(*env)->GetStringUTFChars(env, janchor_x, 0);
  const char* anchor_y = (char*)(*env)->GetStringUTFChars(env, janchor_y, 0);
  ret = (ret_t)time_clock_set_second_anchor(widget, anchor_x, anchor_y);
  (*env)->ReleaseStringUTFChars(env, janchor_x, anchor_x);
  (*env)->ReleaseStringUTFChars(env, janchor_y, anchor_y);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TimeClock_time_clock_t_get_prop_hour(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  time_clock_t* obj = (time_clock_t*)jobj;

  return (jint)(obj->hour);
}

JNIEXPORT jint JNICALL Java_TimeClock_time_clock_t_get_prop_minute(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  time_clock_t* obj = (time_clock_t*)jobj;

  return (jint)(obj->minute);
}

JNIEXPORT jint JNICALL Java_TimeClock_time_clock_t_get_prop_second(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  time_clock_t* obj = (time_clock_t*)jobj;

  return (jint)(obj->second);
}

JNIEXPORT jstring JNICALL Java_TimeClock_time_clock_t_get_prop_image(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  time_clock_t* obj = (time_clock_t*)jobj;

  return (*env)->NewStringUTF(env, obj->image);
}

JNIEXPORT jstring JNICALL Java_TimeClock_time_clock_t_get_prop_bg_image(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  time_clock_t* obj = (time_clock_t*)jobj;

  return (*env)->NewStringUTF(env, obj->bg_image);
}

JNIEXPORT jstring JNICALL Java_TimeClock_time_clock_t_get_prop_hour_image(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  time_clock_t* obj = (time_clock_t*)jobj;

  return (*env)->NewStringUTF(env, obj->hour_image);
}

JNIEXPORT jstring JNICALL Java_TimeClock_time_clock_t_get_prop_minute_image(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  time_clock_t* obj = (time_clock_t*)jobj;

  return (*env)->NewStringUTF(env, obj->minute_image);
}

JNIEXPORT jstring JNICALL Java_TimeClock_time_clock_t_get_prop_second_image(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  time_clock_t* obj = (time_clock_t*)jobj;

  return (*env)->NewStringUTF(env, obj->second_image);
}

JNIEXPORT jstring JNICALL Java_TimeClock_time_clock_t_get_prop_hour_anchor_x(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  time_clock_t* obj = (time_clock_t*)jobj;

  return (*env)->NewStringUTF(env, obj->hour_anchor_x);
}

JNIEXPORT jstring JNICALL Java_TimeClock_time_clock_t_get_prop_hour_anchor_y(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  time_clock_t* obj = (time_clock_t*)jobj;

  return (*env)->NewStringUTF(env, obj->hour_anchor_y);
}

JNIEXPORT jstring JNICALL Java_TimeClock_time_clock_t_get_prop_minute_anchor_x(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  time_clock_t* obj = (time_clock_t*)jobj;

  return (*env)->NewStringUTF(env, obj->minute_anchor_x);
}

JNIEXPORT jstring JNICALL Java_TimeClock_time_clock_t_get_prop_minute_anchor_y(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  time_clock_t* obj = (time_clock_t*)jobj;

  return (*env)->NewStringUTF(env, obj->minute_anchor_y);
}

JNIEXPORT jstring JNICALL Java_TimeClock_time_clock_t_get_prop_second_anchor_x(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  time_clock_t* obj = (time_clock_t*)jobj;

  return (*env)->NewStringUTF(env, obj->second_anchor_x);
}

JNIEXPORT jstring JNICALL Java_TimeClock_time_clock_t_get_prop_second_anchor_y(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  time_clock_t* obj = (time_clock_t*)jobj;

  return (*env)->NewStringUTF(env, obj->second_anchor_y);
}

JNIEXPORT jlong JNICALL Java_TextSelector_text_selector_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)text_selector_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_TextSelector_text_selector_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)text_selector_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_TextSelector_text_selector_reset_options(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)text_selector_reset_options(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TextSelector_text_selector_count_options(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  int32_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (int32_t)text_selector_count_options(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TextSelector_text_selector_append_option(JNIEnv* env,  jclass ajc, jlong jwidget, jint value, jstring jtext) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (ret_t)text_selector_append_option(widget, value, text);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TextSelector_text_selector_set_options(JNIEnv* env,  jclass ajc, jlong jwidget, jstring joptions) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* options = (char*)(*env)->GetStringUTFChars(env, joptions, 0);
  ret = (ret_t)text_selector_set_options(widget, options);
  (*env)->ReleaseStringUTFChars(env, joptions, options);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TextSelector_text_selector_set_range_options(JNIEnv* env,  jclass ajc, jlong jwidget, jint start, jint nr, jint step) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)text_selector_set_range_options(widget, start, nr, step);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TextSelector_text_selector_get_value(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  int32_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (int32_t)text_selector_get_value(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TextSelector_text_selector_set_value(JNIEnv* env,  jclass ajc, jlong jwidget, jint value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)text_selector_set_value(widget, value);

  return (jint)(ret);
}

JNIEXPORT jstring JNICALL Java_TextSelector_text_selector_get_text(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  char* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (char*)text_selector_get_text(widget);

  return (*env)->NewStringUTF(env, ret);
}

JNIEXPORT jint JNICALL Java_TextSelector_text_selector_set_text(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jtext) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (ret_t)text_selector_set_text(widget, text);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TextSelector_text_selector_set_selected_index(JNIEnv* env,  jclass ajc, jlong jwidget, jint index) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)text_selector_set_selected_index(widget, index);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TextSelector_text_selector_set_visible_nr(JNIEnv* env,  jclass ajc, jlong jwidget, jint visible_nr) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)text_selector_set_visible_nr(widget, visible_nr);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TextSelector_text_selector_t_get_prop_visible_nr(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  text_selector_t* obj = (text_selector_t*)jobj;

  return (jint)(obj->visible_nr);
}

JNIEXPORT jint JNICALL Java_TextSelector_text_selector_t_get_prop_selected_index(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  text_selector_t* obj = (text_selector_t*)jobj;

  return (jint)(obj->selected_index);
}

JNIEXPORT jstring JNICALL Java_TextSelector_text_selector_t_get_prop_options(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  text_selector_t* obj = (text_selector_t*)jobj;

  return (*env)->NewStringUTF(env, obj->options);
}

JNIEXPORT jlong JNICALL Java_Switch_switch_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)switch_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Switch_switch_set_value(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)switch_set_value(widget, value);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Switch_switch_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)switch_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jboolean JNICALL Java_Switch_switch_t_get_prop_value(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  switch_t* obj = (switch_t*)jobj;

  return (jboolean)(obj->value);
}

JNIEXPORT jdouble JNICALL Java_Switch_switch_t_get_prop_max_xoffset_ratio(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  switch_t* obj = (switch_t*)jobj;

  return (jdouble)(obj->max_xoffset_ratio);
}

JNIEXPORT jlong JNICALL Java_PropChangeEvent_prop_change_event_cast(JNIEnv* env,  jclass ajc, jlong jevent) { /*func*/
  prop_change_event_t* ret;
  event_t* event = (event_t*)jevent;
  ret = (prop_change_event_t*)prop_change_event_cast(event);

  return (jlong)(ret);
}

JNIEXPORT jstring JNICALL Java_PropChangeEvent_prop_change_event_t_get_prop_name(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  prop_change_event_t* obj = (prop_change_event_t*)jobj;

  return (*env)->NewStringUTF(env, obj->name);
}

JNIEXPORT jlong JNICALL Java_PropChangeEvent_prop_change_event_t_get_prop_value(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  prop_change_event_t* obj = (prop_change_event_t*)jobj;

  return (jlong)(obj->value);
}

JNIEXPORT jlong JNICALL Java_ProgressEvent_progress_event_cast(JNIEnv* env,  jclass ajc, jlong jevent) { /*func*/
  progress_event_t* ret;
  event_t* event = (event_t*)jevent;
  ret = (progress_event_t*)progress_event_cast(event);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ProgressEvent_progress_event_t_get_prop_percent(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  progress_event_t* obj = (progress_event_t*)jobj;

  return (jint)(obj->percent);
}

JNIEXPORT jlong JNICALL Java_Dialog_dialog_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)dialog_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Dialog_dialog_create_simple(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)dialog_create_simple(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Dialog_dialog_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)dialog_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Dialog_dialog_get_title(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)dialog_get_title(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Dialog_dialog_get_client(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)dialog_get_client(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Dialog_dialog_open(JNIEnv* env,  jclass ajc, jstring jname) { /*func*/
  widget_t* ret;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (widget_t*)dialog_open(name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Dialog_dialog_set_title(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jtitle) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* title = (char*)(*env)->GetStringUTFChars(env, jtitle, 0);
  ret = (ret_t)dialog_set_title(widget, title);
  (*env)->ReleaseStringUTFChars(env, jtitle, title);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Dialog_dialog_modal(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)dialog_modal(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Dialog_dialog_quit(JNIEnv* env,  jclass ajc, jlong jwidget, jint code) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)dialog_quit(widget, code);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_Dialog_dialog_is_quited(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  bool_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (bool_t)dialog_is_quited(widget);

  return (jboolean)(ret);
}

JNIEXPORT jboolean JNICALL Java_Dialog_dialog_is_modal(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  bool_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (bool_t)dialog_is_modal(widget);

  return (jboolean)(ret);
}

JNIEXPORT jint JNICALL Java_Dialog_dialog_toast(JNIEnv* env,  jclass ajc, jstring jtext, jint duration) { /*func*/
  ret_t ret;
  const char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (ret_t)dialog_toast(text, duration);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Dialog_dialog_info(JNIEnv* env,  jclass ajc, jstring jtitle, jstring jtext) { /*func*/
  ret_t ret;
  const char* title = (char*)(*env)->GetStringUTFChars(env, jtitle, 0);
  const char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (ret_t)dialog_info(title, text);
  (*env)->ReleaseStringUTFChars(env, jtitle, title);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Dialog_dialog_warn(JNIEnv* env,  jclass ajc, jstring jtitle, jstring jtext) { /*func*/
  ret_t ret;
  const char* title = (char*)(*env)->GetStringUTFChars(env, jtitle, 0);
  const char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (ret_t)dialog_warn(title, text);
  (*env)->ReleaseStringUTFChars(env, jtitle, title);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Dialog_dialog_confirm(JNIEnv* env,  jclass ajc, jstring jtitle, jstring jtext) { /*func*/
  ret_t ret;
  const char* title = (char*)(*env)->GetStringUTFChars(env, jtitle, 0);
  const char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (ret_t)dialog_confirm(title, text);
  (*env)->ReleaseStringUTFChars(env, jtitle, title);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (jint)(ret);
}

JNIEXPORT jstring JNICALL Java_Dialog_dialog_t_get_prop_highlight(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  dialog_t* obj = (dialog_t*)jobj;

  return (*env)->NewStringUTF(env, obj->highlight);
}

JNIEXPORT jlong JNICALL Java_SlideView_slide_view_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)slide_view_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_SlideView_slide_view_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)slide_view_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_SlideView_slide_view_set_auto_play(JNIEnv* env,  jclass ajc, jlong jwidget, jint auto_play) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slide_view_set_auto_play(widget, auto_play);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideView_slide_view_set_active(JNIEnv* env,  jclass ajc, jlong jwidget, jint index) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slide_view_set_active(widget, index);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideView_slide_view_set_vertical(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean vertical) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slide_view_set_vertical(widget, vertical);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideView_slide_view_set_anim_hint(JNIEnv* env,  jclass ajc, jlong jwidget, jstring janim_hint) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* anim_hint = (char*)(*env)->GetStringUTFChars(env, janim_hint, 0);
  ret = (ret_t)slide_view_set_anim_hint(widget, anim_hint);
  (*env)->ReleaseStringUTFChars(env, janim_hint, anim_hint);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideView_slide_view_set_loop(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean loop) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slide_view_set_loop(widget, loop);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_SlideView_slide_view_t_get_prop_vertical(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_view_t* obj = (slide_view_t*)jobj;

  return (jboolean)(obj->vertical);
}

JNIEXPORT jint JNICALL Java_SlideView_slide_view_t_get_prop_auto_play(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_view_t* obj = (slide_view_t*)jobj;

  return (jint)(obj->auto_play);
}

JNIEXPORT jboolean JNICALL Java_SlideView_slide_view_t_get_prop_loop(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_view_t* obj = (slide_view_t*)jobj;

  return (jboolean)(obj->loop);
}

JNIEXPORT jstring JNICALL Java_SlideView_slide_view_t_get_prop_anim_hint(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_view_t* obj = (slide_view_t*)jobj;

  return (*env)->NewStringUTF(env, obj->anim_hint);
}

JNIEXPORT jlong JNICALL Java_SlideIndicator_slide_indicator_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)slide_indicator_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_SlideIndicator_slide_indicator_create_linear(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)slide_indicator_create_linear(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_SlideIndicator_slide_indicator_create_arc(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)slide_indicator_create_arc(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_SlideIndicator_slide_indicator_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)slide_indicator_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_set_value(JNIEnv* env,  jclass ajc, jlong jwidget, jint value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slide_indicator_set_value(widget, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_set_max(JNIEnv* env,  jclass ajc, jlong jwidget, jint max) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slide_indicator_set_max(widget, max);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_set_default_paint(JNIEnv* env,  jclass ajc, jlong jwidget, jint default_paint) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slide_indicator_set_default_paint(widget, default_paint);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_set_auto_hide(JNIEnv* env,  jclass ajc, jlong jwidget, jint auto_hide) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slide_indicator_set_auto_hide(widget, auto_hide);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_set_margin(JNIEnv* env,  jclass ajc, jlong jwidget, jint margin) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slide_indicator_set_margin(widget, margin);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_set_spacing(JNIEnv* env,  jclass ajc, jlong jwidget, jdouble spacing) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slide_indicator_set_spacing(widget, spacing);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_set_size(JNIEnv* env,  jclass ajc, jlong jwidget, jint size) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slide_indicator_set_size(widget, size);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_set_anchor(JNIEnv* env,  jclass ajc, jlong jwidget, jstring janchor_x, jstring janchor_y) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* anchor_x = (char*)(*env)->GetStringUTFChars(env, janchor_x, 0);
  const char* anchor_y = (char*)(*env)->GetStringUTFChars(env, janchor_y, 0);
  ret = (ret_t)slide_indicator_set_anchor(widget, anchor_x, anchor_y);
  (*env)->ReleaseStringUTFChars(env, janchor_x, anchor_x);
  (*env)->ReleaseStringUTFChars(env, janchor_y, anchor_y);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_set_indicated_target(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jindicated_target) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* indicated_target = (char*)(*env)->GetStringUTFChars(env, jindicated_target, 0);
  ret = (ret_t)slide_indicator_set_indicated_target(widget, indicated_target);
  (*env)->ReleaseStringUTFChars(env, jindicated_target, indicated_target);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_t_get_prop_value(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_indicator_t* obj = (slide_indicator_t*)jobj;

  return (jint)(obj->value);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_t_get_prop_max(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_indicator_t* obj = (slide_indicator_t*)jobj;

  return (jint)(obj->max);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_t_get_prop_default_paint(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_indicator_t* obj = (slide_indicator_t*)jobj;

  return (jint)(obj->default_paint);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_t_get_prop_auto_hide(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_indicator_t* obj = (slide_indicator_t*)jobj;

  return (jint)(obj->auto_hide);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_t_get_prop_margin(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_indicator_t* obj = (slide_indicator_t*)jobj;

  return (jint)(obj->margin);
}

JNIEXPORT jdouble JNICALL Java_SlideIndicator_slide_indicator_t_get_prop_spacing(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_indicator_t* obj = (slide_indicator_t*)jobj;

  return (jdouble)(obj->spacing);
}

JNIEXPORT jint JNICALL Java_SlideIndicator_slide_indicator_t_get_prop_size(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_indicator_t* obj = (slide_indicator_t*)jobj;

  return (jint)(obj->size);
}

JNIEXPORT jdouble JNICALL Java_SlideIndicator_slide_indicator_t_get_prop_anchor_x(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_indicator_t* obj = (slide_indicator_t*)jobj;

  return (jdouble)(obj->anchor_x);
}

JNIEXPORT jdouble JNICALL Java_SlideIndicator_slide_indicator_t_get_prop_anchor_y(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_indicator_t* obj = (slide_indicator_t*)jobj;

  return (jdouble)(obj->anchor_y);
}

JNIEXPORT jstring JNICALL Java_SlideIndicator_slide_indicator_t_get_prop_indicated_target(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_indicator_t* obj = (slide_indicator_t*)jobj;

  return (*env)->NewStringUTF(env, obj->indicated_target);
}

JNIEXPORT jlong JNICALL Java_SlideMenu_slide_menu_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)slide_menu_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_SlideMenu_slide_menu_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)slide_menu_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_SlideMenu_slide_menu_set_value(JNIEnv* env,  jclass ajc, jlong jwidget, jint value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slide_menu_set_value(widget, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideMenu_slide_menu_set_align_v(JNIEnv* env,  jclass ajc, jlong jwidget, jint align_v) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slide_menu_set_align_v(widget, align_v);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideMenu_slide_menu_set_min_scale(JNIEnv* env,  jclass ajc, jlong jwidget, jdouble min_scale) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slide_menu_set_min_scale(widget, min_scale);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_SlideMenu_slide_menu_t_get_prop_value(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_menu_t* obj = (slide_menu_t*)jobj;

  return (jint)(obj->value);
}

JNIEXPORT jint JNICALL Java_SlideMenu_slide_menu_t_get_prop_align_v(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_menu_t* obj = (slide_menu_t*)jobj;

  return (jint)(obj->align_v);
}

JNIEXPORT jdouble JNICALL Java_SlideMenu_slide_menu_t_get_prop_min_scale(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slide_menu_t* obj = (slide_menu_t*)jobj;

  return (jdouble)(obj->min_scale);
}

JNIEXPORT jlong JNICALL Java_ScrollView_scroll_view_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)scroll_view_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ScrollView_scroll_view_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)scroll_view_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollView_scroll_view_set_virtual_w(JNIEnv* env,  jclass ajc, jlong jwidget, jint w) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)scroll_view_set_virtual_w(widget, w);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollView_scroll_view_set_virtual_h(JNIEnv* env,  jclass ajc, jlong jwidget, jint h) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)scroll_view_set_virtual_h(widget, h);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollView_scroll_view_set_xslidable(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean xslidable) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)scroll_view_set_xslidable(widget, xslidable);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollView_scroll_view_set_yslidable(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean yslidable) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)scroll_view_set_yslidable(widget, yslidable);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollView_scroll_view_set_offset(JNIEnv* env,  jclass ajc, jlong jwidget, jint xoffset, jint yoffset) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)scroll_view_set_offset(widget, xoffset, yoffset);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollView_scroll_view_scroll_to(JNIEnv* env,  jclass ajc, jlong jwidget, jint xoffset_end, jint yoffset_end, jint duration) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)scroll_view_scroll_to(widget, xoffset_end, yoffset_end, duration);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollView_scroll_view_scroll_delta_to(JNIEnv* env,  jclass ajc, jlong jwidget, jint xoffset_delta, jint yoffset_delta, jint duration) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)scroll_view_scroll_delta_to(widget, xoffset_delta, yoffset_delta, duration);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollView_scroll_view_t_get_prop_virtual_w(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  scroll_view_t* obj = (scroll_view_t*)jobj;

  return (jint)(obj->virtual_w);
}

JNIEXPORT jint JNICALL Java_ScrollView_scroll_view_t_get_prop_virtual_h(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  scroll_view_t* obj = (scroll_view_t*)jobj;

  return (jint)(obj->virtual_h);
}

JNIEXPORT jint JNICALL Java_ScrollView_scroll_view_t_get_prop_xoffset(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  scroll_view_t* obj = (scroll_view_t*)jobj;

  return (jint)(obj->xoffset);
}

JNIEXPORT jint JNICALL Java_ScrollView_scroll_view_t_get_prop_yoffset(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  scroll_view_t* obj = (scroll_view_t*)jobj;

  return (jint)(obj->yoffset);
}

JNIEXPORT jboolean JNICALL Java_ScrollView_scroll_view_t_get_prop_xslidable(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  scroll_view_t* obj = (scroll_view_t*)jobj;

  return (jboolean)(obj->xslidable);
}

JNIEXPORT jboolean JNICALL Java_ScrollView_scroll_view_t_get_prop_yslidable(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  scroll_view_t* obj = (scroll_view_t*)jobj;

  return (jboolean)(obj->yslidable);
}

JNIEXPORT jlong JNICALL Java_ScrollBar_scroll_bar_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)scroll_bar_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ScrollBar_scroll_bar_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)scroll_bar_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ScrollBar_scroll_bar_create_mobile(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)scroll_bar_create_mobile(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ScrollBar_scroll_bar_create_desktop(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)scroll_bar_create_desktop(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollBar_scroll_bar_set_params(JNIEnv* env,  jclass ajc, jlong jwidget, jint virtual_size, jint row) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)scroll_bar_set_params(widget, virtual_size, row);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollBar_scroll_bar_scroll_to(JNIEnv* env,  jclass ajc, jlong jwidget, jint value, jint duration) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)scroll_bar_scroll_to(widget, value, duration);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollBar_scroll_bar_set_value(JNIEnv* env,  jclass ajc, jlong jwidget, jint value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)scroll_bar_set_value(widget, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollBar_scroll_bar_add_delta(JNIEnv* env,  jclass ajc, jlong jwidget, jint delta) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)scroll_bar_add_delta(widget, delta);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollBar_scroll_bar_scroll_delta(JNIEnv* env,  jclass ajc, jlong jwidget, jint delta) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)scroll_bar_scroll_delta(widget, delta);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollBar_scroll_bar_set_value_only(JNIEnv* env,  jclass ajc, jlong jwidget, jint value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)scroll_bar_set_value_only(widget, value);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_ScrollBar_scroll_bar_is_mobile(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  bool_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (bool_t)scroll_bar_is_mobile(widget);

  return (jboolean)(ret);
}

JNIEXPORT jint JNICALL Java_ScrollBar_scroll_bar_t_get_prop_virtual_size(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  scroll_bar_t* obj = (scroll_bar_t*)jobj;

  return (jint)(obj->virtual_size);
}

JNIEXPORT jint JNICALL Java_ScrollBar_scroll_bar_t_get_prop_value(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  scroll_bar_t* obj = (scroll_bar_t*)jobj;

  return (jint)(obj->value);
}

JNIEXPORT jint JNICALL Java_ScrollBar_scroll_bar_t_get_prop_row(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  scroll_bar_t* obj = (scroll_bar_t*)jobj;

  return (jint)(obj->row);
}

JNIEXPORT jboolean JNICALL Java_ScrollBar_scroll_bar_t_get_prop_animatable(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  scroll_bar_t* obj = (scroll_bar_t*)jobj;

  return (jboolean)(obj->animatable);
}

JNIEXPORT jlong JNICALL Java_View_view_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)view_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_View_view_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)view_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ListView_list_view_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)list_view_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ListView_list_view_set_item_height(JNIEnv* env,  jclass ajc, jlong jwidget, jint item_height) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)list_view_set_item_height(widget, item_height);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ListView_list_view_set_default_item_height(JNIEnv* env,  jclass ajc, jlong jwidget, jint default_item_height) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)list_view_set_default_item_height(widget, default_item_height);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ListView_list_view_set_auto_hide_scroll_bar(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean auto_hide_scroll_bar) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)list_view_set_auto_hide_scroll_bar(widget, auto_hide_scroll_bar);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_ListView_list_view_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)list_view_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ListView_list_view_t_get_prop_item_height(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  list_view_t* obj = (list_view_t*)jobj;

  return (jint)(obj->item_height);
}

JNIEXPORT jint JNICALL Java_ListView_list_view_t_get_prop_default_item_height(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  list_view_t* obj = (list_view_t*)jobj;

  return (jint)(obj->default_item_height);
}

JNIEXPORT jboolean JNICALL Java_ListView_list_view_t_get_prop_auto_hide_scroll_bar(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  list_view_t* obj = (list_view_t*)jobj;

  return (jboolean)(obj->auto_hide_scroll_bar);
}

JNIEXPORT jlong JNICALL Java_ListViewH_list_view_h_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)list_view_h_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ListViewH_list_view_h_set_item_width(JNIEnv* env,  jclass ajc, jlong jwidget, jint item_width) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)list_view_h_set_item_width(widget, item_width);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ListViewH_list_view_h_set_spacing(JNIEnv* env,  jclass ajc, jlong jwidget, jint spacing) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)list_view_h_set_spacing(widget, spacing);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_ListViewH_list_view_h_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)list_view_h_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ListViewH_list_view_h_t_get_prop_item_width(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  list_view_h_t* obj = (list_view_h_t*)jobj;

  return (jint)(obj->item_width);
}

JNIEXPORT jint JNICALL Java_ListViewH_list_view_h_t_get_prop_spacing(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  list_view_h_t* obj = (list_view_h_t*)jobj;

  return (jint)(obj->spacing);
}

JNIEXPORT jlong JNICALL Java_TabControl_tab_control_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)tab_control_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_TabControl_tab_control_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)tab_control_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_TabButton_tab_button_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)tab_button_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_TabButton_tab_button_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)tab_button_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_TabButton_tab_button_set_value(JNIEnv* env,  jclass ajc, jlong jwidget, jint value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)tab_button_set_value(widget, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TabButton_tab_button_set_icon(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)tab_button_set_icon(widget, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TabButton_tab_button_set_active_icon(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)tab_button_set_active_icon(widget, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_TabButton_tab_button_t_get_prop_value(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  tab_button_t* obj = (tab_button_t*)jobj;

  return (jboolean)(obj->value);
}

JNIEXPORT jstring JNICALL Java_TabButton_tab_button_t_get_prop_active_icon(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  tab_button_t* obj = (tab_button_t*)jobj;

  return (*env)->NewStringUTF(env, obj->active_icon);
}

JNIEXPORT jstring JNICALL Java_TabButton_tab_button_t_get_prop_icon(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  tab_button_t* obj = (tab_button_t*)jobj;

  return (*env)->NewStringUTF(env, obj->icon);
}

JNIEXPORT jlong JNICALL Java_ListItem_list_item_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)list_item_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ListItem_list_item_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)list_item_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_HscrollLabel_hscroll_label_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)hscroll_label_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_HscrollLabel_hscroll_label_set_lull(JNIEnv* env,  jclass ajc, jlong jwidget, jint lull) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)hscroll_label_set_lull(widget, lull);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_HscrollLabel_hscroll_label_set_duration(JNIEnv* env,  jclass ajc, jlong jwidget, jint duration) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)hscroll_label_set_duration(widget, duration);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_HscrollLabel_hscroll_label_set_only_focus(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean only_focus) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)hscroll_label_set_only_focus(widget, only_focus);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_HscrollLabel_hscroll_label_set_only_parent_focus(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean only_parent_focus) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)hscroll_label_set_only_parent_focus(widget, only_parent_focus);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_HscrollLabel_hscroll_label_set_loop(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean loop) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)hscroll_label_set_loop(widget, loop);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_HscrollLabel_hscroll_label_set_yoyo(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean yoyo) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)hscroll_label_set_yoyo(widget, yoyo);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_HscrollLabel_hscroll_label_set_ellipses(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean ellipses) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)hscroll_label_set_ellipses(widget, ellipses);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_HscrollLabel_hscroll_label_set_xoffset(JNIEnv* env,  jclass ajc, jlong jwidget, jint xoffset) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)hscroll_label_set_xoffset(widget, xoffset);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_HscrollLabel_hscroll_label_start(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)hscroll_label_start(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_HscrollLabel_hscroll_label_stop(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)hscroll_label_stop(widget);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_HscrollLabel_hscroll_label_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)hscroll_label_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jboolean JNICALL Java_HscrollLabel_hscroll_label_t_get_prop_only_focus(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  hscroll_label_t* obj = (hscroll_label_t*)jobj;

  return (jboolean)(obj->only_focus);
}

JNIEXPORT jboolean JNICALL Java_HscrollLabel_hscroll_label_t_get_prop_only_parent_focus(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  hscroll_label_t* obj = (hscroll_label_t*)jobj;

  return (jboolean)(obj->only_parent_focus);
}

JNIEXPORT jboolean JNICALL Java_HscrollLabel_hscroll_label_t_get_prop_loop(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  hscroll_label_t* obj = (hscroll_label_t*)jobj;

  return (jboolean)(obj->loop);
}

JNIEXPORT jboolean JNICALL Java_HscrollLabel_hscroll_label_t_get_prop_yoyo(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  hscroll_label_t* obj = (hscroll_label_t*)jobj;

  return (jboolean)(obj->yoyo);
}

JNIEXPORT jboolean JNICALL Java_HscrollLabel_hscroll_label_t_get_prop_ellipses(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  hscroll_label_t* obj = (hscroll_label_t*)jobj;

  return (jboolean)(obj->ellipses);
}

JNIEXPORT jint JNICALL Java_HscrollLabel_hscroll_label_t_get_prop_lull(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  hscroll_label_t* obj = (hscroll_label_t*)jobj;

  return (jint)(obj->lull);
}

JNIEXPORT jint JNICALL Java_HscrollLabel_hscroll_label_t_get_prop_duration(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  hscroll_label_t* obj = (hscroll_label_t*)jobj;

  return (jint)(obj->duration);
}

JNIEXPORT jint JNICALL Java_HscrollLabel_hscroll_label_t_get_prop_xoffset(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  hscroll_label_t* obj = (hscroll_label_t*)jobj;

  return (jint)(obj->xoffset);
}

JNIEXPORT jint JNICALL Java_HscrollLabel_hscroll_label_t_get_prop_text_w(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  hscroll_label_t* obj = (hscroll_label_t*)jobj;

  return (jint)(obj->text_w);
}

JNIEXPORT jlong JNICALL Java_RichText_rich_text_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)rich_text_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_RichText_rich_text_set_text(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jtext) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (ret_t)rich_text_set_text(widget, text);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_RichText_rich_text_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)rich_text_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_RichText_rich_text_t_get_prop_line_gap(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  rich_text_t* obj = (rich_text_t*)jobj;

  return (jint)(obj->line_gap);
}

JNIEXPORT jlong JNICALL Java_ProgressCircle_progress_circle_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)progress_circle_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ProgressCircle_progress_circle_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)progress_circle_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ProgressCircle_progress_circle_set_value(JNIEnv* env,  jclass ajc, jlong jwidget, jdouble value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)progress_circle_set_value(widget, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ProgressCircle_progress_circle_set_max(JNIEnv* env,  jclass ajc, jlong jwidget, jint max) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)progress_circle_set_max(widget, max);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ProgressCircle_progress_circle_set_line_width(JNIEnv* env,  jclass ajc, jlong jwidget, jint line_width) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)progress_circle_set_line_width(widget, line_width);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ProgressCircle_progress_circle_set_start_angle(JNIEnv* env,  jclass ajc, jlong jwidget, jint start_angle) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)progress_circle_set_start_angle(widget, start_angle);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ProgressCircle_progress_circle_set_unit(JNIEnv* env,  jclass ajc, jlong jwidget, jstring junit) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* unit = (char*)(*env)->GetStringUTFChars(env, junit, 0);
  ret = (ret_t)progress_circle_set_unit(widget, unit);
  (*env)->ReleaseStringUTFChars(env, junit, unit);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ProgressCircle_progress_circle_set_show_text(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean show_text) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)progress_circle_set_show_text(widget, show_text);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ProgressCircle_progress_circle_set_counter_clock_wise(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean counter_clock_wise) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)progress_circle_set_counter_clock_wise(widget, counter_clock_wise);

  return (jint)(ret);
}

JNIEXPORT jdouble JNICALL Java_ProgressCircle_progress_circle_t_get_prop_value(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  progress_circle_t* obj = (progress_circle_t*)jobj;

  return (jdouble)(obj->value);
}

JNIEXPORT jint JNICALL Java_ProgressCircle_progress_circle_t_get_prop_max(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  progress_circle_t* obj = (progress_circle_t*)jobj;

  return (jint)(obj->max);
}

JNIEXPORT jint JNICALL Java_ProgressCircle_progress_circle_t_get_prop_start_angle(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  progress_circle_t* obj = (progress_circle_t*)jobj;

  return (jint)(obj->start_angle);
}

JNIEXPORT jint JNICALL Java_ProgressCircle_progress_circle_t_get_prop_line_width(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  progress_circle_t* obj = (progress_circle_t*)jobj;

  return (jint)(obj->line_width);
}

JNIEXPORT jstring JNICALL Java_ProgressCircle_progress_circle_t_get_prop_unit(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  progress_circle_t* obj = (progress_circle_t*)jobj;

  return (*env)->NewStringUTF(env, obj->unit);
}

JNIEXPORT jboolean JNICALL Java_ProgressCircle_progress_circle_t_get_prop_counter_clock_wise(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  progress_circle_t* obj = (progress_circle_t*)jobj;

  return (jboolean)(obj->counter_clock_wise);
}

JNIEXPORT jboolean JNICALL Java_ProgressCircle_progress_circle_t_get_prop_show_text(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  progress_circle_t* obj = (progress_circle_t*)jobj;

  return (jboolean)(obj->show_text);
}

JNIEXPORT jlong JNICALL Java_TabButtonGroup_tab_button_group_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)tab_button_group_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_TabButtonGroup_tab_button_group_set_compact(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean compact) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)tab_button_group_set_compact(widget, compact);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_TabButtonGroup_tab_button_group_set_scrollable(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean scrollable) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)tab_button_group_set_scrollable(widget, scrollable);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_TabButtonGroup_tab_button_group_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)tab_button_group_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jboolean JNICALL Java_TabButtonGroup_tab_button_group_t_get_prop_compact(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  tab_button_group_t* obj = (tab_button_group_t*)jobj;

  return (jboolean)(obj->compact);
}

JNIEXPORT jboolean JNICALL Java_TabButtonGroup_tab_button_group_t_get_prop_scrollable(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  tab_button_group_t* obj = (tab_button_group_t*)jobj;

  return (jboolean)(obj->scrollable);
}

JNIEXPORT jlong JNICALL Java_Mledit_mledit_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)mledit_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Mledit_mledit_set_readonly(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean readonly) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)mledit_set_readonly(widget, readonly);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Mledit_mledit_set_focus(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean focus) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)mledit_set_focus(widget, focus);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Mledit_mledit_set_wrap_word(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean wrap_word) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)mledit_set_wrap_word(widget, wrap_word);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Mledit_mledit_set_max_lines(JNIEnv* env,  jclass ajc, jlong jwidget, jint max_lines) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)mledit_set_max_lines(widget, max_lines);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Mledit_mledit_set_input_tips(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jtips) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* tips = (char*)(*env)->GetStringUTFChars(env, jtips, 0);
  ret = (ret_t)mledit_set_input_tips(widget, tips);
  (*env)->ReleaseStringUTFChars(env, jtips, tips);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Mledit_mledit_set_cursor(JNIEnv* env,  jclass ajc, jlong jwidget, jint cursor) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)mledit_set_cursor(widget, cursor);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Mledit_mledit_set_scroll_line(JNIEnv* env,  jclass ajc, jlong jwidget, jint scroll_line) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)mledit_set_scroll_line(widget, scroll_line);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Mledit_mledit_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)mledit_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jboolean JNICALL Java_Mledit_mledit_t_get_prop_readonly(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  mledit_t* obj = (mledit_t*)jobj;

  return (jboolean)(obj->readonly);
}

JNIEXPORT jstring JNICALL Java_Mledit_mledit_t_get_prop_tips(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  mledit_t* obj = (mledit_t*)jobj;

  return (*env)->NewStringUTF(env, obj->tips);
}

JNIEXPORT jboolean JNICALL Java_Mledit_mledit_t_get_prop_wrap_word(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  mledit_t* obj = (mledit_t*)jobj;

  return (jboolean)(obj->wrap_word);
}

JNIEXPORT jint JNICALL Java_Mledit_mledit_t_get_prop_max_lines(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  mledit_t* obj = (mledit_t*)jobj;

  return (jint)(obj->max_lines);
}

JNIEXPORT jdouble JNICALL Java_Mledit_mledit_t_get_prop_scroll_line(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  mledit_t* obj = (mledit_t*)jobj;

  return (jdouble)(obj->scroll_line);
}

JNIEXPORT jlong JNICALL Java_Slider_slider_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)slider_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Slider_slider_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)slider_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Slider_slider_set_value(JNIEnv* env,  jclass ajc, jlong jwidget, jdouble value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slider_set_value(widget, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Slider_slider_set_min(JNIEnv* env,  jclass ajc, jlong jwidget, jdouble min) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slider_set_min(widget, min);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Slider_slider_set_max(JNIEnv* env,  jclass ajc, jlong jwidget, jdouble max) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slider_set_max(widget, max);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Slider_slider_set_step(JNIEnv* env,  jclass ajc, jlong jwidget, jdouble step) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slider_set_step(widget, step);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Slider_slider_set_bar_size(JNIEnv* env,  jclass ajc, jlong jwidget, jint bar_size) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slider_set_bar_size(widget, bar_size);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Slider_slider_set_vertical(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean vertical) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)slider_set_vertical(widget, vertical);

  return (jint)(ret);
}

JNIEXPORT jdouble JNICALL Java_Slider_slider_t_get_prop_value(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slider_t* obj = (slider_t*)jobj;

  return (jdouble)(obj->value);
}

JNIEXPORT jdouble JNICALL Java_Slider_slider_t_get_prop_min(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slider_t* obj = (slider_t*)jobj;

  return (jdouble)(obj->min);
}

JNIEXPORT jdouble JNICALL Java_Slider_slider_t_get_prop_max(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slider_t* obj = (slider_t*)jobj;

  return (jdouble)(obj->max);
}

JNIEXPORT jdouble JNICALL Java_Slider_slider_t_get_prop_step(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slider_t* obj = (slider_t*)jobj;

  return (jdouble)(obj->step);
}

JNIEXPORT jboolean JNICALL Java_Slider_slider_t_get_prop_vertical(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slider_t* obj = (slider_t*)jobj;

  return (jboolean)(obj->vertical);
}

JNIEXPORT jint JNICALL Java_Slider_slider_t_get_prop_bar_size(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  slider_t* obj = (slider_t*)jobj;

  return (jint)(obj->bar_size);
}

JNIEXPORT jlong JNICALL Java_Row_row_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)row_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Row_row_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)row_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Object_object_ref(JNIEnv* env,  jclass ajc, jlong jobj) { /*func*/
  object_t* ret;
  object_t* obj = (object_t*)jobj;
  ret = (object_t*)object_ref(obj);

  return (jlong)(ret);
}

JNIEXPORT jstring JNICALL Java_Object_object_get_type(JNIEnv* env,  jclass ajc, jlong jobj) { /*func*/
  const char* ret;
  object_t* obj = (object_t*)jobj;
  ret = (const char*)object_get_type(obj);

  return (*env)->NewStringUTF(env, ret);
}

JNIEXPORT jstring JNICALL Java_Object_object_get_desc(JNIEnv* env,  jclass ajc, jlong jobj) { /*func*/
  const char* ret;
  object_t* obj = (object_t*)jobj;
  ret = (const char*)object_get_desc(obj);

  return (*env)->NewStringUTF(env, ret);
}

JNIEXPORT jint JNICALL Java_Object_object_get_size(JNIEnv* env,  jclass ajc, jlong jobj) { /*func*/
  uint32_t ret;
  object_t* obj = (object_t*)jobj;
  ret = (uint32_t)object_get_size(obj);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_Object_object_is_collection(JNIEnv* env,  jclass ajc, jlong jobj) { /*func*/
  bool_t ret;
  object_t* obj = (object_t*)jobj;
  ret = (bool_t)object_is_collection(obj);

  return (jboolean)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_set_name(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)object_set_name(obj, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_compare(JNIEnv* env,  jclass ajc, jlong jobj, jlong jother) { /*func*/
  int ret;
  object_t* obj = (object_t*)jobj;
  object_t* other = (object_t*)jother;
  ret = (int)object_compare(obj, other);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_get_prop(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname, jlong jv) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  value_t* v = (value_t*)jv;
  ret = (ret_t)object_get_prop(obj, name, v);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jstring JNICALL Java_Object_object_get_prop_str(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname) { /*func*/
  const char* ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (const char*)object_get_prop_str(obj, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (*env)->NewStringUTF(env, ret);
}

JNIEXPORT jlong JNICALL Java_Object_object_get_prop_pointer(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname) { /*func*/
  void* ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (void*)object_get_prop_pointer(obj, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Object_object_get_prop_object(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname) { /*func*/
  object_t* ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (object_t*)object_get_prop_object(obj, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_get_prop_int(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname, jint defval) { /*func*/
  int32_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (int32_t)object_get_prop_int(obj, name, defval);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_Object_object_get_prop_bool(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname, jboolean defval) { /*func*/
  bool_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (bool_t)object_get_prop_bool(obj, name, defval);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jboolean)(ret);
}

JNIEXPORT jdouble JNICALL Java_Object_object_get_prop_float(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname, jdouble defval) { /*func*/
  float_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (float_t)object_get_prop_float(obj, name, defval);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jdouble)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_remove_prop(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)object_remove_prop(obj, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_set_prop(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname, jlong jvalue) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  value_t* value = (value_t*)jvalue;
  ret = (ret_t)object_set_prop(obj, name, value);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_set_prop_str(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname, jstring jvalue) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  const char* value = (char*)(*env)->GetStringUTFChars(env, jvalue, 0);
  ret = (ret_t)object_set_prop_str(obj, name, value);
  (*env)->ReleaseStringUTFChars(env, jname, name);
  (*env)->ReleaseStringUTFChars(env, jvalue, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_set_prop_object(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname, jlong jvalue) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  object_t* value = (object_t*)jvalue;
  ret = (ret_t)object_set_prop_object(obj, name, value);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_set_prop_int(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname, jint value) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)object_set_prop_int(obj, name, value);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_set_prop_bool(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname, jboolean value) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)object_set_prop_bool(obj, name, value);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_set_prop_float(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname, jdouble value) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)object_set_prop_float(obj, name, value);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_copy_prop(JNIEnv* env,  jclass ajc, jlong jobj, jlong jsrc, jstring jname) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  object_t* src = (object_t*)jsrc;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)object_copy_prop(obj, src, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_Object_object_has_prop(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname) { /*func*/
  bool_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (bool_t)object_has_prop(obj, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jboolean)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_eval(JNIEnv* env,  jclass ajc, jlong jobj, jstring jexpr, jlong jv) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  const char* expr = (char*)(*env)->GetStringUTFChars(env, jexpr, 0);
  value_t* v = (value_t*)jv;
  ret = (ret_t)object_eval(obj, expr, v);
  (*env)->ReleaseStringUTFChars(env, jexpr, expr);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_Object_object_can_exec(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname, jstring jargs) { /*func*/
  bool_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  const char* args = (char*)(*env)->GetStringUTFChars(env, jargs, 0);
  ret = (bool_t)object_can_exec(obj, name, args);
  (*env)->ReleaseStringUTFChars(env, jname, name);
  (*env)->ReleaseStringUTFChars(env, jargs, args);

  return (jboolean)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_exec(JNIEnv* env,  jclass ajc, jlong jobj, jstring jname, jstring jargs) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  const char* args = (char*)(*env)->GetStringUTFChars(env, jargs, 0);
  ret = (ret_t)object_exec(obj, name, args);
  (*env)->ReleaseStringUTFChars(env, jname, name);
  (*env)->ReleaseStringUTFChars(env, jargs, args);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_notify_changed(JNIEnv* env,  jclass ajc, jlong jobj) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  ret = (ret_t)object_notify_changed(obj);

  return (jint)(ret);
}

JNIEXPORT jstring JNICALL Java_Object_object_get_prop_str_by_path(JNIEnv* env,  jclass ajc, jlong jobj, jstring jpath) { /*func*/
  const char* ret;
  object_t* obj = (object_t*)jobj;
  const char* path = (char*)(*env)->GetStringUTFChars(env, jpath, 0);
  ret = (const char*)object_get_prop_str_by_path(obj, path);
  (*env)->ReleaseStringUTFChars(env, jpath, path);

  return (*env)->NewStringUTF(env, ret);
}

JNIEXPORT jlong JNICALL Java_Object_object_get_prop_pointer_by_path(JNIEnv* env,  jclass ajc, jlong jobj, jstring jpath) { /*func*/
  void* ret;
  object_t* obj = (object_t*)jobj;
  const char* path = (char*)(*env)->GetStringUTFChars(env, jpath, 0);
  ret = (void*)object_get_prop_pointer_by_path(obj, path);
  (*env)->ReleaseStringUTFChars(env, jpath, path);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Object_object_get_prop_object_by_path(JNIEnv* env,  jclass ajc, jlong jobj, jstring jpath) { /*func*/
  object_t* ret;
  object_t* obj = (object_t*)jobj;
  const char* path = (char*)(*env)->GetStringUTFChars(env, jpath, 0);
  ret = (object_t*)object_get_prop_object_by_path(obj, path);
  (*env)->ReleaseStringUTFChars(env, jpath, path);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_get_prop_int_by_path(JNIEnv* env,  jclass ajc, jlong jobj, jstring jpath, jint defval) { /*func*/
  int32_t ret;
  object_t* obj = (object_t*)jobj;
  const char* path = (char*)(*env)->GetStringUTFChars(env, jpath, 0);
  ret = (int32_t)object_get_prop_int_by_path(obj, path, defval);
  (*env)->ReleaseStringUTFChars(env, jpath, path);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_Object_object_get_prop_bool_by_path(JNIEnv* env,  jclass ajc, jlong jobj, jstring jpath, jboolean defval) { /*func*/
  bool_t ret;
  object_t* obj = (object_t*)jobj;
  const char* path = (char*)(*env)->GetStringUTFChars(env, jpath, 0);
  ret = (bool_t)object_get_prop_bool_by_path(obj, path, defval);
  (*env)->ReleaseStringUTFChars(env, jpath, path);

  return (jboolean)(ret);
}

JNIEXPORT jdouble JNICALL Java_Object_object_get_prop_float_by_path(JNIEnv* env,  jclass ajc, jlong jobj, jstring jpath, jdouble defval) { /*func*/
  float_t ret;
  object_t* obj = (object_t*)jobj;
  const char* path = (char*)(*env)->GetStringUTFChars(env, jpath, 0);
  ret = (float_t)object_get_prop_float_by_path(obj, path, defval);
  (*env)->ReleaseStringUTFChars(env, jpath, path);

  return (jdouble)(ret);
}

JNIEXPORT jint JNICALL Java_Object_object_t_get_prop_ref_count(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  object_t* obj = (object_t*)jobj;

  return (jint)(obj->ref_count);
}

JNIEXPORT jstring JNICALL Java_Object_object_t_get_prop_name(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  object_t* obj = (object_t*)jobj;

  return (*env)->NewStringUTF(env, obj->name);
}

JNIEXPORT jlong JNICALL Java_ProgressBar_progress_bar_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)progress_bar_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ProgressBar_progress_bar_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)progress_bar_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ProgressBar_progress_bar_set_value(JNIEnv* env,  jclass ajc, jlong jwidget, jdouble value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)progress_bar_set_value(widget, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ProgressBar_progress_bar_set_max(JNIEnv* env,  jclass ajc, jlong jwidget, jint max) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)progress_bar_set_max(widget, max);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ProgressBar_progress_bar_set_vertical(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean vertical) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)progress_bar_set_vertical(widget, vertical);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ProgressBar_progress_bar_set_show_text(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean show_text) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)progress_bar_set_show_text(widget, show_text);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ProgressBar_progress_bar_get_percent(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  uint32_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (uint32_t)progress_bar_get_percent(widget);

  return (jint)(ret);
}

JNIEXPORT jdouble JNICALL Java_ProgressBar_progress_bar_t_get_prop_value(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  progress_bar_t* obj = (progress_bar_t*)jobj;

  return (jdouble)(obj->value);
}

JNIEXPORT jdouble JNICALL Java_ProgressBar_progress_bar_t_get_prop_max(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  progress_bar_t* obj = (progress_bar_t*)jobj;

  return (jdouble)(obj->max);
}

JNIEXPORT jboolean JNICALL Java_ProgressBar_progress_bar_t_get_prop_vertical(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  progress_bar_t* obj = (progress_bar_t*)jobj;

  return (jboolean)(obj->vertical);
}

JNIEXPORT jboolean JNICALL Java_ProgressBar_progress_bar_t_get_prop_show_text(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  progress_bar_t* obj = (progress_bar_t*)jobj;

  return (jboolean)(obj->show_text);
}

JNIEXPORT jlong JNICALL Java_LineNumber_line_number_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)line_number_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_LineNumber_line_number_set_top_margin(JNIEnv* env,  jclass ajc, jlong jwidget, jint top_margin) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)line_number_set_top_margin(widget, top_margin);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_LineNumber_line_number_set_bottom_margin(JNIEnv* env,  jclass ajc, jlong jwidget, jint bottom_margin) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)line_number_set_bottom_margin(widget, bottom_margin);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_LineNumber_line_number_set_line_height(JNIEnv* env,  jclass ajc, jlong jwidget, jint line_height) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)line_number_set_line_height(widget, line_height);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_LineNumber_line_number_set_yoffset(JNIEnv* env,  jclass ajc, jlong jwidget, jint yoffset) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)line_number_set_yoffset(widget, yoffset);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_LineNumber_line_number_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)line_number_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Keyboard_keyboard_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)keyboard_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Keyboard_keyboard_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)keyboard_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ImageValue_image_value_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)image_value_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ImageValue_image_value_set_image(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jimage) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* image = (char*)(*env)->GetStringUTFChars(env, jimage, 0);
  ret = (ret_t)image_value_set_image(widget, image);
  (*env)->ReleaseStringUTFChars(env, jimage, image);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageValue_image_value_set_format(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jformat) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* format = (char*)(*env)->GetStringUTFChars(env, jformat, 0);
  ret = (ret_t)image_value_set_format(widget, format);
  (*env)->ReleaseStringUTFChars(env, jformat, format);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageValue_image_value_set_value(JNIEnv* env,  jclass ajc, jlong jwidget, jdouble value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_value_set_value(widget, value);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_ImageValue_image_value_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)image_value_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jstring JNICALL Java_ImageValue_image_value_t_get_prop_image(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_value_t* obj = (image_value_t*)jobj;

  return (*env)->NewStringUTF(env, obj->image);
}

JNIEXPORT jstring JNICALL Java_ImageValue_image_value_t_get_prop_format(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_value_t* obj = (image_value_t*)jobj;

  return (*env)->NewStringUTF(env, obj->format);
}

JNIEXPORT jdouble JNICALL Java_ImageValue_image_value_t_get_prop_value(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_value_t* obj = (image_value_t*)jobj;

  return (jdouble)(obj->value);
}

JNIEXPORT jlong JNICALL Java_ImageAnimation_image_animation_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)image_animation_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_set_loop(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean loop) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_animation_set_loop(widget, loop);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_set_image(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jimage) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* image = (char*)(*env)->GetStringUTFChars(env, jimage, 0);
  ret = (ret_t)image_animation_set_image(widget, image);
  (*env)->ReleaseStringUTFChars(env, jimage, image);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_set_interval(JNIEnv* env,  jclass ajc, jlong jwidget, jint interval) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_animation_set_interval(widget, interval);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_set_delay(JNIEnv* env,  jclass ajc, jlong jwidget, jint delay) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_animation_set_delay(widget, delay);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_set_auto_play(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean auto_play) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_animation_set_auto_play(widget, auto_play);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_set_sequence(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jsequence) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* sequence = (char*)(*env)->GetStringUTFChars(env, jsequence, 0);
  ret = (ret_t)image_animation_set_sequence(widget, sequence);
  (*env)->ReleaseStringUTFChars(env, jsequence, sequence);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_set_range_sequence(JNIEnv* env,  jclass ajc, jlong jwidget, jint start_index, jint end_index) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_animation_set_range_sequence(widget, start_index, end_index);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_play(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_animation_play(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_stop(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_animation_stop(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_pause(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_animation_pause(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_next(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_animation_next(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_set_format(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jformat) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* format = (char*)(*env)->GetStringUTFChars(env, jformat, 0);
  ret = (ret_t)image_animation_set_format(widget, format);
  (*env)->ReleaseStringUTFChars(env, jformat, format);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_set_unload_after_paint(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean unload_after_paint) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_animation_set_unload_after_paint(widget, unload_after_paint);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_ImageAnimation_image_animation_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)image_animation_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jstring JNICALL Java_ImageAnimation_image_animation_t_get_prop_image(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_animation_t* obj = (image_animation_t*)jobj;

  return (*env)->NewStringUTF(env, obj->image);
}

JNIEXPORT jstring JNICALL Java_ImageAnimation_image_animation_t_get_prop_sequence(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_animation_t* obj = (image_animation_t*)jobj;

  return (*env)->NewStringUTF(env, obj->sequence);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_t_get_prop_start_index(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_animation_t* obj = (image_animation_t*)jobj;

  return (jint)(obj->start_index);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_t_get_prop_end_index(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_animation_t* obj = (image_animation_t*)jobj;

  return (jint)(obj->end_index);
}

JNIEXPORT jboolean JNICALL Java_ImageAnimation_image_animation_t_get_prop_loop(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_animation_t* obj = (image_animation_t*)jobj;

  return (jboolean)(obj->loop);
}

JNIEXPORT jboolean JNICALL Java_ImageAnimation_image_animation_t_get_prop_auto_play(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_animation_t* obj = (image_animation_t*)jobj;

  return (jboolean)(obj->auto_play);
}

JNIEXPORT jboolean JNICALL Java_ImageAnimation_image_animation_t_get_prop_unload_after_paint(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_animation_t* obj = (image_animation_t*)jobj;

  return (jboolean)(obj->unload_after_paint);
}

JNIEXPORT jstring JNICALL Java_ImageAnimation_image_animation_t_get_prop_format(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_animation_t* obj = (image_animation_t*)jobj;

  return (*env)->NewStringUTF(env, obj->format);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_t_get_prop_interval(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_animation_t* obj = (image_animation_t*)jobj;

  return (jint)(obj->interval);
}

JNIEXPORT jint JNICALL Java_ImageAnimation_image_animation_t_get_prop_delay(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_animation_t* obj = (image_animation_t*)jobj;

  return (jint)(obj->delay);
}

JNIEXPORT jlong JNICALL Java_Guage_guage_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)guage_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Guage_guage_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)guage_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Guage_guage_set_image(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)guage_set_image(widget, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Guage_guage_set_draw_type(JNIEnv* env,  jclass ajc, jlong jwidget, jint draw_type) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)guage_set_draw_type(widget, draw_type);

  return (jint)(ret);
}

JNIEXPORT jstring JNICALL Java_Guage_guage_t_get_prop_image(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  guage_t* obj = (guage_t*)jobj;

  return (*env)->NewStringUTF(env, obj->image);
}

JNIEXPORT jint JNICALL Java_Guage_guage_t_get_prop_draw_type(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  guage_t* obj = (guage_t*)jobj;

  return (jint)(obj->draw_type);
}

JNIEXPORT jlong JNICALL Java_GuagePointer_guage_pointer_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)guage_pointer_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_GuagePointer_guage_pointer_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)guage_pointer_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_GuagePointer_guage_pointer_set_angle(JNIEnv* env,  jclass ajc, jlong jwidget, jint angle) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)guage_pointer_set_angle(widget, angle);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_GuagePointer_guage_pointer_set_image(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jimage) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* image = (char*)(*env)->GetStringUTFChars(env, jimage, 0);
  ret = (ret_t)guage_pointer_set_image(widget, image);
  (*env)->ReleaseStringUTFChars(env, jimage, image);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_GuagePointer_guage_pointer_set_anchor(JNIEnv* env,  jclass ajc, jlong jwidget, jstring janchor_x, jstring janchor_y) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* anchor_x = (char*)(*env)->GetStringUTFChars(env, janchor_x, 0);
  const char* anchor_y = (char*)(*env)->GetStringUTFChars(env, janchor_y, 0);
  ret = (ret_t)guage_pointer_set_anchor(widget, anchor_x, anchor_y);
  (*env)->ReleaseStringUTFChars(env, janchor_x, anchor_x);
  (*env)->ReleaseStringUTFChars(env, janchor_y, anchor_y);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_GuagePointer_guage_pointer_t_get_prop_angle(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  guage_pointer_t* obj = (guage_pointer_t*)jobj;

  return (jint)(obj->angle);
}

JNIEXPORT jstring JNICALL Java_GuagePointer_guage_pointer_t_get_prop_image(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  guage_pointer_t* obj = (guage_pointer_t*)jobj;

  return (*env)->NewStringUTF(env, obj->image);
}

JNIEXPORT jdouble JNICALL Java_GuagePointer_guage_pointer_t_get_prop_anchor_x(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  guage_pointer_t* obj = (guage_pointer_t*)jobj;

  return (jdouble)(obj->anchor_x);
}

JNIEXPORT jdouble JNICALL Java_GuagePointer_guage_pointer_t_get_prop_anchor_y(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  guage_pointer_t* obj = (guage_pointer_t*)jobj;

  return (jdouble)(obj->anchor_y);
}

JNIEXPORT jlong JNICALL Java_Popup_popup_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)popup_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Popup_popup_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)popup_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Popup_popup_set_close_when_click(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean close_when_click) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)popup_set_close_when_click(widget, close_when_click);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Popup_popup_set_close_when_click_outside(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean close_when_click_outside) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)popup_set_close_when_click_outside(widget, close_when_click_outside);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_Popup_popup_t_get_prop_close_when_click(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  popup_t* obj = (popup_t*)jobj;

  return (jboolean)(obj->close_when_click);
}

JNIEXPORT jboolean JNICALL Java_Popup_popup_t_get_prop_close_when_click_outside(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  popup_t* obj = (popup_t*)jobj;

  return (jboolean)(obj->close_when_click_outside);
}

JNIEXPORT jlong JNICALL Java_Draggable_draggable_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)draggable_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Draggable_draggable_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)draggable_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Draggable_draggable_set_top(JNIEnv* env,  jclass ajc, jlong jwidget, jint top) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)draggable_set_top(widget, top);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Draggable_draggable_set_bottom(JNIEnv* env,  jclass ajc, jlong jwidget, jint bottom) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)draggable_set_bottom(widget, bottom);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Draggable_draggable_set_left(JNIEnv* env,  jclass ajc, jlong jwidget, jint left) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)draggable_set_left(widget, left);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Draggable_draggable_set_right(JNIEnv* env,  jclass ajc, jlong jwidget, jint right) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)draggable_set_right(widget, right);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Draggable_draggable_set_vertical_only(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean vertical_only) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)draggable_set_vertical_only(widget, vertical_only);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Draggable_draggable_set_horizontal_only(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean horizontal_only) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)draggable_set_horizontal_only(widget, horizontal_only);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Draggable_draggable_set_drag_window(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean drag_window) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)draggable_set_drag_window(widget, drag_window);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Draggable_draggable_t_get_prop_top(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  draggable_t* obj = (draggable_t*)jobj;

  return (jint)(obj->top);
}

JNIEXPORT jint JNICALL Java_Draggable_draggable_t_get_prop_bottom(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  draggable_t* obj = (draggable_t*)jobj;

  return (jint)(obj->bottom);
}

JNIEXPORT jint JNICALL Java_Draggable_draggable_t_get_prop_left(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  draggable_t* obj = (draggable_t*)jobj;

  return (jint)(obj->left);
}

JNIEXPORT jint JNICALL Java_Draggable_draggable_t_get_prop_right(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  draggable_t* obj = (draggable_t*)jobj;

  return (jint)(obj->right);
}

JNIEXPORT jboolean JNICALL Java_Draggable_draggable_t_get_prop_vertical_only(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  draggable_t* obj = (draggable_t*)jobj;

  return (jboolean)(obj->vertical_only);
}

JNIEXPORT jboolean JNICALL Java_Draggable_draggable_t_get_prop_horizontal_only(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  draggable_t* obj = (draggable_t*)jobj;

  return (jboolean)(obj->horizontal_only);
}

JNIEXPORT jboolean JNICALL Java_Draggable_draggable_t_get_prop_drag_window(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  draggable_t* obj = (draggable_t*)jobj;

  return (jboolean)(obj->drag_window);
}

JNIEXPORT jlong JNICALL Java_Pages_pages_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)pages_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Pages_pages_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)pages_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Pages_pages_set_active(JNIEnv* env,  jclass ajc, jlong jwidget, jint index) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)pages_set_active(widget, index);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Pages_pages_set_active_by_name(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)pages_set_active_by_name(widget, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Pages_pages_t_get_prop_active(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  pages_t* obj = (pages_t*)jobj;

  return (jint)(obj->active);
}

JNIEXPORT jlong JNICALL Java_ColorPicker_color_picker_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)color_picker_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ColorPicker_color_picker_set_color(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jcolor) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* color = (char*)(*env)->GetStringUTFChars(env, jcolor, 0);
  ret = (ret_t)color_picker_set_color(widget, color);
  (*env)->ReleaseStringUTFChars(env, jcolor, color);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_ColorPicker_color_picker_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)color_picker_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jstring JNICALL Java_ColorPicker_color_picker_t_get_prop_value(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  color_picker_t* obj = (color_picker_t*)jobj;

  return (*env)->NewStringUTF(env, obj->value);
}

JNIEXPORT jlong JNICALL Java_CanvasWidget_canvas_widget_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)canvas_widget_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_CanvasWidget_canvas_widget_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)canvas_widget_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Overlay_overlay_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)overlay_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Overlay_overlay_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)overlay_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Window_window_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)window_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Window_window_set_fullscreen(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean fullscreen) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)window_set_fullscreen(widget, fullscreen);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Window_window_open(JNIEnv* env,  jclass ajc, jstring jname) { /*func*/
  widget_t* ret;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (widget_t*)window_open(name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Window_window_open_and_close(JNIEnv* env,  jclass ajc, jstring jname, jlong jto_close) { /*func*/
  widget_t* ret;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  widget_t* to_close = (widget_t*)jto_close;
  ret = (widget_t*)window_open_and_close(name, to_close);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Window_window_close(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)window_close(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Window_window_close_force(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)window_close_force(widget);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Window_window_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)window_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jboolean JNICALL Java_Window_window_t_get_prop_fullscreen(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  window_t* obj = (window_t*)jobj;

  return (jboolean)(obj->fullscreen);
}

JNIEXPORT jlong JNICALL Java_WindowManager_window_manager(JNIEnv* env,  jclass ajc) { /*func*/
  widget_t* ret;
  ret = (widget_t*)window_manager();

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_WindowManager_window_manager_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)window_manager_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_WindowManager_window_manager_get_top_main_window(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)window_manager_get_top_main_window(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_WindowManager_window_manager_get_top_window(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)window_manager_get_top_window(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_WindowManager_window_manager_get_prev_window(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)window_manager_get_prev_window(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_WindowManager_window_manager_get_pointer_x(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  xy_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (xy_t)window_manager_get_pointer_x(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_WindowManager_window_manager_get_pointer_y(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  xy_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (xy_t)window_manager_get_pointer_y(widget);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_WindowManager_window_manager_get_pointer_pressed(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  bool_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (bool_t)window_manager_get_pointer_pressed(widget);

  return (jboolean)(ret);
}

JNIEXPORT jint JNICALL Java_WindowManager_window_manager_set_show_fps(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean show_fps) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)window_manager_set_show_fps(widget, show_fps);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_WindowManager_window_manager_set_screen_saver_time(JNIEnv* env,  jclass ajc, jlong jwidget, jint screen_saver_time) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)window_manager_set_screen_saver_time(widget, screen_saver_time);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_WindowManager_window_manager_set_cursor(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jcursor) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* cursor = (char*)(*env)->GetStringUTFChars(env, jcursor, 0);
  ret = (ret_t)window_manager_set_cursor(widget, cursor);
  (*env)->ReleaseStringUTFChars(env, jcursor, cursor);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_WindowManager_window_manager_back(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)window_manager_back(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_WindowManager_window_manager_back_to_home(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)window_manager_back_to_home(widget);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_WindowBase_window_base_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)window_base_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jstring JNICALL Java_WindowBase_window_base_t_get_prop_theme(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  window_base_t* obj = (window_base_t*)jobj;

  return (*env)->NewStringUTF(env, obj->theme);
}

JNIEXPORT jint JNICALL Java_WindowBase_window_base_t_get_prop_closable(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  window_base_t* obj = (window_base_t*)jobj;

  return (jint)(obj->closable);
}

JNIEXPORT jlong JNICALL Java_Label_label_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)label_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Label_label_set_length(JNIEnv* env,  jclass ajc, jlong jwidget, jint length) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)label_set_length(widget, length);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Label_label_resize_to_content(JNIEnv* env,  jclass ajc, jlong jwidget, jint min_w, jint max_w, jint min_h, jint max_h) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)label_resize_to_content(widget, min_w, max_w, min_h, max_h);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Label_label_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)label_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Label_label_t_get_prop_length(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  label_t* obj = (label_t*)jobj;

  return (jint)(obj->length);
}

JNIEXPORT jint JNICALL Java_StyleMutable_style_mutable_set_name(JNIEnv* env,  jclass ajc, jlong js, jstring jname) { /*func*/
  ret_t ret;
  style_t* s = (style_t*)js;
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)style_mutable_set_name(s, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_StyleMutable_style_mutable_set_int(JNIEnv* env,  jclass ajc, jlong js, jstring jstate, jstring jname, jint val) { /*func*/
  ret_t ret;
  style_t* s = (style_t*)js;
  const char* state = (char*)(*env)->GetStringUTFChars(env, jstate, 0);
  const char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)style_mutable_set_int(s, state, name, val);
  (*env)->ReleaseStringUTFChars(env, jstate, state);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_StyleMutable_style_mutable_cast(JNIEnv* env,  jclass ajc, jlong js) { /*func*/
  style_t* ret;
  style_t* s = (style_t*)js;
  ret = (style_t*)style_mutable_cast(s);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_StyleMutable_style_mutable_create(JNIEnv* env,  jclass ajc, jlong jwidget, jlong jdefault_style) { /*func*/
  style_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  style_t* default_style = (style_t*)jdefault_style;
  ret = (style_t*)style_mutable_create(widget, default_style);

  return (jlong)(ret);
}

JNIEXPORT jstring JNICALL Java_StyleMutable_style_mutable_t_get_prop_name(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  style_mutable_t* obj = (style_mutable_t*)jobj;

  return (*env)->NewStringUTF(env, obj->name);
}

JNIEXPORT jlong JNICALL Java_GroupBox_group_box_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)group_box_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_GroupBox_group_box_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)group_box_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ImageBase_image_base_set_image(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)image_base_set_image(widget, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageBase_image_base_set_rotation(JNIEnv* env,  jclass ajc, jlong jwidget, jdouble rotation) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_base_set_rotation(widget, rotation);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageBase_image_base_set_scale(JNIEnv* env,  jclass ajc, jlong jwidget, jdouble scale_x, jdouble scale_y) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_base_set_scale(widget, scale_x, scale_y);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageBase_image_base_set_anchor(JNIEnv* env,  jclass ajc, jlong jwidget, jdouble anchor_x, jdouble anchor_y) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_base_set_anchor(widget, anchor_x, anchor_y);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageBase_image_base_set_selected(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean selected) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_base_set_selected(widget, selected);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageBase_image_base_set_selectable(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean selectable) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_base_set_selectable(widget, selectable);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ImageBase_image_base_set_clickable(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean clickable) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_base_set_clickable(widget, clickable);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_ImageBase_image_base_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)image_base_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jstring JNICALL Java_ImageBase_image_base_t_get_prop_image(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_base_t* obj = (image_base_t*)jobj;

  return (*env)->NewStringUTF(env, obj->image);
}

JNIEXPORT jdouble JNICALL Java_ImageBase_image_base_t_get_prop_anchor_x(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_base_t* obj = (image_base_t*)jobj;

  return (jdouble)(obj->anchor_x);
}

JNIEXPORT jdouble JNICALL Java_ImageBase_image_base_t_get_prop_anchor_y(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_base_t* obj = (image_base_t*)jobj;

  return (jdouble)(obj->anchor_y);
}

JNIEXPORT jdouble JNICALL Java_ImageBase_image_base_t_get_prop_scale_x(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_base_t* obj = (image_base_t*)jobj;

  return (jdouble)(obj->scale_x);
}

JNIEXPORT jdouble JNICALL Java_ImageBase_image_base_t_get_prop_scale_y(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_base_t* obj = (image_base_t*)jobj;

  return (jdouble)(obj->scale_y);
}

JNIEXPORT jdouble JNICALL Java_ImageBase_image_base_t_get_prop_rotation(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_base_t* obj = (image_base_t*)jobj;

  return (jdouble)(obj->rotation);
}

JNIEXPORT jboolean JNICALL Java_ImageBase_image_base_t_get_prop_clickable(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_base_t* obj = (image_base_t*)jobj;

  return (jboolean)(obj->clickable);
}

JNIEXPORT jboolean JNICALL Java_ImageBase_image_base_t_get_prop_selectable(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_base_t* obj = (image_base_t*)jobj;

  return (jboolean)(obj->selectable);
}

JNIEXPORT jboolean JNICALL Java_ImageBase_image_base_t_get_prop_selected(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_base_t* obj = (image_base_t*)jobj;

  return (jboolean)(obj->selected);
}

JNIEXPORT jlong JNICALL Java_WindowEvent_window_event_cast(JNIEnv* env,  jclass ajc, jlong jevent) { /*func*/
  window_event_t* ret;
  event_t* event = (event_t*)jevent;
  ret = (window_event_t*)window_event_cast(event);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_WindowEvent_window_event_t_get_prop_window(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  window_event_t* obj = (window_event_t*)jobj;

  return (jlong)(obj->window);
}

JNIEXPORT jlong JNICALL Java_PaintEvent_paint_event_cast(JNIEnv* env,  jclass ajc, jlong jevent) { /*func*/
  paint_event_t* ret;
  event_t* event = (event_t*)jevent;
  ret = (paint_event_t*)paint_event_cast(event);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_PaintEvent_paint_event_t_get_prop_c(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  paint_event_t* obj = (paint_event_t*)jobj;

  return (jlong)(obj->c);
}

JNIEXPORT jlong JNICALL Java_KeyEvent_key_event_cast(JNIEnv* env,  jclass ajc, jlong jevent) { /*func*/
  key_event_t* ret;
  event_t* event = (event_t*)jevent;
  ret = (key_event_t*)key_event_cast(event);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_KeyEvent_key_event_t_get_prop_key(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  key_event_t* obj = (key_event_t*)jobj;

  return (jint)(obj->key);
}

JNIEXPORT jboolean JNICALL Java_KeyEvent_key_event_t_get_prop_alt(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  key_event_t* obj = (key_event_t*)jobj;

  return (jboolean)(obj->alt);
}

JNIEXPORT jboolean JNICALL Java_KeyEvent_key_event_t_get_prop_lalt(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  key_event_t* obj = (key_event_t*)jobj;

  return (jboolean)(obj->lalt);
}

JNIEXPORT jboolean JNICALL Java_KeyEvent_key_event_t_get_prop_ralt(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  key_event_t* obj = (key_event_t*)jobj;

  return (jboolean)(obj->ralt);
}

JNIEXPORT jboolean JNICALL Java_KeyEvent_key_event_t_get_prop_ctrl(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  key_event_t* obj = (key_event_t*)jobj;

  return (jboolean)(obj->ctrl);
}

JNIEXPORT jboolean JNICALL Java_KeyEvent_key_event_t_get_prop_lctrl(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  key_event_t* obj = (key_event_t*)jobj;

  return (jboolean)(obj->lctrl);
}

JNIEXPORT jboolean JNICALL Java_KeyEvent_key_event_t_get_prop_rctrl(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  key_event_t* obj = (key_event_t*)jobj;

  return (jboolean)(obj->rctrl);
}

JNIEXPORT jboolean JNICALL Java_KeyEvent_key_event_t_get_prop_shift(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  key_event_t* obj = (key_event_t*)jobj;

  return (jboolean)(obj->shift);
}

JNIEXPORT jboolean JNICALL Java_KeyEvent_key_event_t_get_prop_lshift(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  key_event_t* obj = (key_event_t*)jobj;

  return (jboolean)(obj->lshift);
}

JNIEXPORT jboolean JNICALL Java_KeyEvent_key_event_t_get_prop_rshift(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  key_event_t* obj = (key_event_t*)jobj;

  return (jboolean)(obj->rshift);
}

JNIEXPORT jboolean JNICALL Java_KeyEvent_key_event_t_get_prop_cmd(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  key_event_t* obj = (key_event_t*)jobj;

  return (jboolean)(obj->cmd);
}

JNIEXPORT jboolean JNICALL Java_KeyEvent_key_event_t_get_prop_menu(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  key_event_t* obj = (key_event_t*)jobj;

  return (jboolean)(obj->menu);
}

JNIEXPORT jboolean JNICALL Java_KeyEvent_key_event_t_get_prop_capslock(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  key_event_t* obj = (key_event_t*)jobj;

  return (jboolean)(obj->capslock);
}

JNIEXPORT jlong JNICALL Java_PointerEvent_pointer_event_cast(JNIEnv* env,  jclass ajc, jlong jevent) { /*func*/
  pointer_event_t* ret;
  event_t* event = (event_t*)jevent;
  ret = (pointer_event_t*)pointer_event_cast(event);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_PointerEvent_pointer_event_t_get_prop_x(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  pointer_event_t* obj = (pointer_event_t*)jobj;

  return (jint)(obj->x);
}

JNIEXPORT jint JNICALL Java_PointerEvent_pointer_event_t_get_prop_y(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  pointer_event_t* obj = (pointer_event_t*)jobj;

  return (jint)(obj->y);
}

JNIEXPORT jint JNICALL Java_PointerEvent_pointer_event_t_get_prop_button(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  pointer_event_t* obj = (pointer_event_t*)jobj;

  return (jint)(obj->button);
}

JNIEXPORT jboolean JNICALL Java_PointerEvent_pointer_event_t_get_prop_pressed(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  pointer_event_t* obj = (pointer_event_t*)jobj;

  return (jboolean)(obj->pressed);
}

JNIEXPORT jboolean JNICALL Java_PointerEvent_pointer_event_t_get_prop_alt(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  pointer_event_t* obj = (pointer_event_t*)jobj;

  return (jboolean)(obj->alt);
}

JNIEXPORT jboolean JNICALL Java_PointerEvent_pointer_event_t_get_prop_ctrl(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  pointer_event_t* obj = (pointer_event_t*)jobj;

  return (jboolean)(obj->ctrl);
}

JNIEXPORT jboolean JNICALL Java_PointerEvent_pointer_event_t_get_prop_cmd(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  pointer_event_t* obj = (pointer_event_t*)jobj;

  return (jboolean)(obj->cmd);
}

JNIEXPORT jboolean JNICALL Java_PointerEvent_pointer_event_t_get_prop_menu(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  pointer_event_t* obj = (pointer_event_t*)jobj;

  return (jboolean)(obj->menu);
}

JNIEXPORT jboolean JNICALL Java_PointerEvent_pointer_event_t_get_prop_shift(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  pointer_event_t* obj = (pointer_event_t*)jobj;

  return (jboolean)(obj->shift);
}

JNIEXPORT jlong JNICALL Java_OrientationEvent_orientation_event_cast(JNIEnv* env,  jclass ajc, jlong jevent) { /*func*/
  orientation_event_t* ret;
  event_t* event = (event_t*)jevent;
  ret = (orientation_event_t*)orientation_event_cast(event);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_OrientationEvent_orientation_event_t_get_prop_orientation(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  orientation_event_t* obj = (orientation_event_t*)jobj;

  return (jint)(obj->orientation);
}

JNIEXPORT jlong JNICALL Java_WheelEvent_wheel_event_cast(JNIEnv* env,  jclass ajc, jlong jevent) { /*func*/
  wheel_event_t* ret;
  event_t* event = (event_t*)jevent;
  ret = (wheel_event_t*)wheel_event_cast(event);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_WheelEvent_wheel_event_t_get_prop_dy(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  wheel_event_t* obj = (wheel_event_t*)jobj;

  return (jint)(obj->dy);
}

JNIEXPORT jboolean JNICALL Java_WheelEvent_wheel_event_t_get_prop_alt(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  wheel_event_t* obj = (wheel_event_t*)jobj;

  return (jboolean)(obj->alt);
}

JNIEXPORT jboolean JNICALL Java_WheelEvent_wheel_event_t_get_prop_ctrl(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  wheel_event_t* obj = (wheel_event_t*)jobj;

  return (jboolean)(obj->ctrl);
}

JNIEXPORT jboolean JNICALL Java_WheelEvent_wheel_event_t_get_prop_shift(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  wheel_event_t* obj = (wheel_event_t*)jobj;

  return (jboolean)(obj->shift);
}

JNIEXPORT jlong JNICALL Java_AppBar_app_bar_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)app_bar_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_AppBar_app_bar_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)app_bar_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ButtonGroup_button_group_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)button_group_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ButtonGroup_button_group_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)button_group_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Button_button_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)button_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Button_button_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)button_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Button_button_set_repeat(JNIEnv* env,  jclass ajc, jlong jwidget, jint repeat) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)button_set_repeat(widget, repeat);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Button_button_set_enable_long_press(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean enable_long_press) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)button_set_enable_long_press(widget, enable_long_press);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Button_button_t_get_prop_repeat(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  button_t* obj = (button_t*)jobj;

  return (jint)(obj->repeat);
}

JNIEXPORT jboolean JNICALL Java_Button_button_t_get_prop_enable_long_press(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  button_t* obj = (button_t*)jobj;

  return (jboolean)(obj->enable_long_press);
}

JNIEXPORT jlong JNICALL Java_CheckButton_check_button_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)check_button_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_CheckButton_check_button_create_radio(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)check_button_create_radio(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_CheckButton_check_button_set_value(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)check_button_set_value(widget, value);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_CheckButton_check_button_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)check_button_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jboolean JNICALL Java_CheckButton_check_button_t_get_prop_value(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  check_button_t* obj = (check_button_t*)jobj;

  return (jboolean)(obj->value);
}

JNIEXPORT jlong JNICALL Java_ColorTile_color_tile_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)color_tile_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ColorTile_color_tile_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)color_tile_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ColorTile_color_tile_set_bg_color(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jcolor) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* color = (char*)(*env)->GetStringUTFChars(env, jcolor, 0);
  ret = (ret_t)color_tile_set_bg_color(widget, color);
  (*env)->ReleaseStringUTFChars(env, jcolor, color);

  return (jint)(ret);
}

JNIEXPORT jstring JNICALL Java_ColorTile_color_tile_t_get_prop_bg_color(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  color_tile_t* obj = (color_tile_t*)jobj;

  return (*env)->NewStringUTF(env, obj->bg_color);
}

JNIEXPORT jstring JNICALL Java_ColorTile_color_tile_t_get_prop_border_color(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  color_tile_t* obj = (color_tile_t*)jobj;

  return (*env)->NewStringUTF(env, obj->border_color);
}

JNIEXPORT jlong JNICALL Java_Column_column_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)column_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Column_column_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)column_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ComboBoxItem_combo_box_item_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)combo_box_item_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ComboBoxItem_combo_box_item_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)combo_box_item_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ComboBoxItem_combo_box_item_set_checked(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean checked) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)combo_box_item_set_checked(widget, checked);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ComboBoxItem_combo_box_item_set_value(JNIEnv* env,  jclass ajc, jlong jwidget, jint value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)combo_box_item_set_value(widget, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ComboBoxItem_combo_box_item_t_get_prop_value(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  combo_box_item_t* obj = (combo_box_item_t*)jobj;

  return (jint)(obj->value);
}

JNIEXPORT jboolean JNICALL Java_ComboBoxItem_combo_box_item_t_get_prop_checked(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  combo_box_item_t* obj = (combo_box_item_t*)jobj;

  return (jboolean)(obj->checked);
}

JNIEXPORT jlong JNICALL Java_ComboBox_combo_box_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)combo_box_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ComboBox_combo_box_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)combo_box_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ComboBox_combo_box_set_open_window(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jopen_window) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* open_window = (char*)(*env)->GetStringUTFChars(env, jopen_window, 0);
  ret = (ret_t)combo_box_set_open_window(widget, open_window);
  (*env)->ReleaseStringUTFChars(env, jopen_window, open_window);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ComboBox_combo_box_reset_options(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)combo_box_reset_options(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ComboBox_combo_box_count_options(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  int32_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (int32_t)combo_box_count_options(widget);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ComboBox_combo_box_set_selected_index(JNIEnv* env,  jclass ajc, jlong jwidget, jint index) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)combo_box_set_selected_index(widget, index);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ComboBox_combo_box_set_localize_options(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean localize_options) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)combo_box_set_localize_options(widget, localize_options);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ComboBox_combo_box_set_value(JNIEnv* env,  jclass ajc, jlong jwidget, jint value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)combo_box_set_value(widget, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ComboBox_combo_box_set_item_height(JNIEnv* env,  jclass ajc, jlong jwidget, jint item_height) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)combo_box_set_item_height(widget, item_height);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ComboBox_combo_box_append_option(JNIEnv* env,  jclass ajc, jlong jwidget, jint value, jstring jtext) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* text = (char*)(*env)->GetStringUTFChars(env, jtext, 0);
  ret = (ret_t)combo_box_append_option(widget, value, text);
  (*env)->ReleaseStringUTFChars(env, jtext, text);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ComboBox_combo_box_set_options(JNIEnv* env,  jclass ajc, jlong jwidget, jstring joptions) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* options = (char*)(*env)->GetStringUTFChars(env, joptions, 0);
  ret = (ret_t)combo_box_set_options(widget, options);
  (*env)->ReleaseStringUTFChars(env, joptions, options);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ComboBox_combo_box_get_value(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  int32_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (int32_t)combo_box_get_value(widget);

  return (jint)(ret);
}

JNIEXPORT jstring JNICALL Java_ComboBox_combo_box_get_text(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  const char* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (const char*)combo_box_get_text(widget);

  return (*env)->NewStringUTF(env, ret);
}

JNIEXPORT jstring JNICALL Java_ComboBox_combo_box_t_get_prop_open_window(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  combo_box_t* obj = (combo_box_t*)jobj;

  return (*env)->NewStringUTF(env, obj->open_window);
}

JNIEXPORT jint JNICALL Java_ComboBox_combo_box_t_get_prop_selected_index(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  combo_box_t* obj = (combo_box_t*)jobj;

  return (jint)(obj->selected_index);
}

JNIEXPORT jint JNICALL Java_ComboBox_combo_box_t_get_prop_value(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  combo_box_t* obj = (combo_box_t*)jobj;

  return (jint)(obj->value);
}

JNIEXPORT jboolean JNICALL Java_ComboBox_combo_box_t_get_prop_localize_options(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  combo_box_t* obj = (combo_box_t*)jobj;

  return (jboolean)(obj->localize_options);
}

JNIEXPORT jstring JNICALL Java_ComboBox_combo_box_t_get_prop_options(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  combo_box_t* obj = (combo_box_t*)jobj;

  return (*env)->NewStringUTF(env, obj->options);
}

JNIEXPORT jint JNICALL Java_ComboBox_combo_box_t_get_prop_item_height(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  combo_box_t* obj = (combo_box_t*)jobj;

  return (jint)(obj->item_height);
}

JNIEXPORT jlong JNICALL Java_DialogClient_dialog_client_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)dialog_client_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_DialogClient_dialog_client_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)dialog_client_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_DialogTitle_dialog_title_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)dialog_title_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_DialogTitle_dialog_title_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)dialog_title_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_DigitClock_digit_clock_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)digit_clock_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_DigitClock_digit_clock_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)digit_clock_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_DigitClock_digit_clock_set_format(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jformat) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  const char* format = (char*)(*env)->GetStringUTFChars(env, jformat, 0);
  ret = (ret_t)digit_clock_set_format(widget, format);
  (*env)->ReleaseStringUTFChars(env, jformat, format);

  return (jint)(ret);
}

JNIEXPORT jstring JNICALL Java_DigitClock_digit_clock_t_get_prop_format(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  digit_clock_t* obj = (digit_clock_t*)jobj;

  return (*env)->NewStringUTF(env, obj->format);
}

JNIEXPORT jlong JNICALL Java_Dragger_dragger_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)dragger_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Dragger_dragger_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)dragger_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Dragger_dragger_set_range(JNIEnv* env,  jclass ajc, jlong jwidget, jint x_min, jint y_min, jint x_max, jint y_max) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)dragger_set_range(widget, x_min, y_min, x_max, y_max);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Dragger_dragger_t_get_prop_x_min(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  dragger_t* obj = (dragger_t*)jobj;

  return (jint)(obj->x_min);
}

JNIEXPORT jint JNICALL Java_Dragger_dragger_t_get_prop_y_min(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  dragger_t* obj = (dragger_t*)jobj;

  return (jint)(obj->y_min);
}

JNIEXPORT jint JNICALL Java_Dragger_dragger_t_get_prop_x_max(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  dragger_t* obj = (dragger_t*)jobj;

  return (jint)(obj->x_max);
}

JNIEXPORT jint JNICALL Java_Dragger_dragger_t_get_prop_y_max(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  dragger_t* obj = (dragger_t*)jobj;

  return (jint)(obj->y_max);
}

JNIEXPORT jlong JNICALL Java_Edit_edit_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)edit_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Edit_edit_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)edit_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_get_int(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  int32_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (int32_t)edit_get_int(widget);

  return (jint)(ret);
}

JNIEXPORT jdouble JNICALL Java_Edit_edit_get_double(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  double ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (double)edit_get_double(widget);

  return (jdouble)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_set_int(JNIEnv* env,  jclass ajc, jlong jwidget, jint value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)edit_set_int(widget, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_set_double(JNIEnv* env,  jclass ajc, jlong jwidget, jdouble value) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)edit_set_double(widget, value);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_set_text_limit(JNIEnv* env,  jclass ajc, jlong jwidget, jint min, jint max) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)edit_set_text_limit(widget, min, max);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_set_int_limit(JNIEnv* env,  jclass ajc, jlong jwidget, jint min, jint max, jint step) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)edit_set_int_limit(widget, min, max, step);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_set_float_limit(JNIEnv* env,  jclass ajc, jlong jwidget, jdouble min, jdouble max, jdouble step) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)edit_set_float_limit(widget, min, max, step);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_set_readonly(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean readonly) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)edit_set_readonly(widget, readonly);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_set_auto_fix(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean auto_fix) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)edit_set_auto_fix(widget, auto_fix);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_set_select_none_when_focused(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean select_none_when_focused) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)edit_set_select_none_when_focused(widget, select_none_when_focused);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_set_open_im_when_focused(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean open_im_when_focused) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)edit_set_open_im_when_focused(widget, open_im_when_focused);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_set_input_type(JNIEnv* env,  jclass ajc, jlong jwidget, jint type) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)edit_set_input_type(widget, type);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_set_input_tips(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jtips) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* tips = (char*)(*env)->GetStringUTFChars(env, jtips, 0);
  ret = (ret_t)edit_set_input_tips(widget, tips);
  (*env)->ReleaseStringUTFChars(env, jtips, tips);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_set_password_visible(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean password_visible) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)edit_set_password_visible(widget, password_visible);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_set_focus(JNIEnv* env,  jclass ajc, jlong jwidget, jboolean focus) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)edit_set_focus(widget, focus);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_Edit_edit_set_cursor(JNIEnv* env,  jclass ajc, jlong jwidget, jint cursor) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)edit_set_cursor(widget, cursor);

  return (jint)(ret);
}

JNIEXPORT jboolean JNICALL Java_Edit_edit_t_get_prop_readonly(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  edit_t* obj = (edit_t*)jobj;

  return (jboolean)(obj->readonly);
}

JNIEXPORT jboolean JNICALL Java_Edit_edit_t_get_prop_password_visible(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  edit_t* obj = (edit_t*)jobj;

  return (jboolean)(obj->password_visible);
}

JNIEXPORT jboolean JNICALL Java_Edit_edit_t_get_prop_auto_fix(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  edit_t* obj = (edit_t*)jobj;

  return (jboolean)(obj->auto_fix);
}

JNIEXPORT jboolean JNICALL Java_Edit_edit_t_get_prop_select_none_when_focused(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  edit_t* obj = (edit_t*)jobj;

  return (jboolean)(obj->select_none_when_focused);
}

JNIEXPORT jboolean JNICALL Java_Edit_edit_t_get_prop_open_im_when_focused(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  edit_t* obj = (edit_t*)jobj;

  return (jboolean)(obj->open_im_when_focused);
}

JNIEXPORT jstring JNICALL Java_Edit_edit_t_get_prop_tips(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  edit_t* obj = (edit_t*)jobj;

  return (*env)->NewStringUTF(env, obj->tips);
}

JNIEXPORT jint JNICALL Java_Edit_edit_t_get_prop_input_type(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  edit_t* obj = (edit_t*)jobj;

  return (jint)(obj->input_type);
}

JNIEXPORT jdouble JNICALL Java_Edit_edit_t_get_prop_min(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  edit_t* obj = (edit_t*)jobj;

  return (jdouble)(obj->min);
}

JNIEXPORT jdouble JNICALL Java_Edit_edit_t_get_prop_max(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  edit_t* obj = (edit_t*)jobj;

  return (jdouble)(obj->max);
}

JNIEXPORT jdouble JNICALL Java_Edit_edit_t_get_prop_step(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  edit_t* obj = (edit_t*)jobj;

  return (jdouble)(obj->step);
}

JNIEXPORT jlong JNICALL Java_GridItem_grid_item_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)grid_item_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_GridItem_grid_item_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)grid_item_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Grid_grid_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)grid_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_Grid_grid_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)grid_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_SpinBox_spin_box_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)spin_box_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_SpinBox_spin_box_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)spin_box_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_TimerInfo_timer_info_cast(JNIEnv* env,  jclass ajc, jlong jtimer) { /*func*/
  timer_info_t* ret;
  timer_info_t* timer = (timer_info_t*)jtimer;
  ret = (timer_info_t*)timer_info_cast(timer);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_TimerInfo_timer_info_t_get_prop_ctx(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  timer_info_t* obj = (timer_info_t*)jobj;

  return (jlong)(obj->ctx);
}

JNIEXPORT jint JNICALL Java_TimerInfo_timer_info_t_get_prop_id(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  timer_info_t* obj = (timer_info_t*)jobj;

  return (jint)(obj->id);
}

JNIEXPORT jlong JNICALL Java_TimerInfo_timer_info_t_get_prop_now(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  timer_info_t* obj = (timer_info_t*)jobj;

  return (jlong)(obj->now);
}

JNIEXPORT jlong JNICALL Java_ComboBoxEx_combo_box_ex_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)combo_box_ex_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_GifImage_gif_image_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)gif_image_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_GifImage_gif_image_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)gif_image_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_ObjectDefault_object_default_create(JNIEnv* env,  jclass ajc) { /*func*/
  object_t* ret;
  ret = (object_t*)object_default_create();

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ObjectDefault_object_default_clear_props(JNIEnv* env,  jclass ajc, jlong jobj) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  ret = (ret_t)object_default_clear_props(obj);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ObjectDefault_object_default_t_get_prop_props_size(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  object_default_t* obj = (object_default_t*)jobj;

  return (jint)(obj->props_size);
}

JNIEXPORT jlong JNICALL Java_ObjectArray_object_array_create(JNIEnv* env,  jclass ajc) { /*func*/
  object_t* ret;
  ret = (object_t*)object_array_create();

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_ObjectArray_object_array_clear_props(JNIEnv* env,  jclass ajc, jlong jobj) { /*func*/
  ret_t ret;
  object_t* obj = (object_t*)jobj;
  ret = (ret_t)object_array_clear_props(obj);

  return (jint)(ret);
}

JNIEXPORT jint JNICALL Java_ObjectArray_object_array_t_get_prop_props_size(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  object_array_t* obj = (object_array_t*)jobj;

  return (jint)(obj->props_size);
}

JNIEXPORT jlong JNICALL Java_Image_image_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)image_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Image_image_set_draw_type(JNIEnv* env,  jclass ajc, jlong jwidget, jint draw_type) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (ret_t)image_set_draw_type(widget, draw_type);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_Image_image_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)image_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_Image_image_t_get_prop_draw_type(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  image_t* obj = (image_t*)jobj;

  return (jint)(obj->draw_type);
}

JNIEXPORT jlong JNICALL Java_SystemBar_system_bar_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)system_bar_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_SystemBar_system_bar_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)system_bar_cast(widget);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_IdleInfo_idle_info_cast(JNIEnv* env,  jclass ajc, jlong jidle) { /*func*/
  idle_info_t* ret;
  idle_info_t* idle = (idle_info_t*)jidle;
  ret = (idle_info_t*)idle_info_cast(idle);

  return (jlong)(ret);
}

JNIEXPORT jlong JNICALL Java_IdleInfo_idle_info_t_get_prop_ctx(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  idle_info_t* obj = (idle_info_t*)jobj;

  return (jlong)(obj->ctx);
}

JNIEXPORT jint JNICALL Java_IdleInfo_idle_info_t_get_prop_id(JNIEnv* env,  jclass ajc, jlong jobj) {/*get*/
  idle_info_t* obj = (idle_info_t*)jobj;

  return (jint)(obj->id);
}

JNIEXPORT jlong JNICALL Java_SvgImage_svg_image_create(JNIEnv* env,  jclass ajc, jlong jparent, jint x, jint y, jint w, jint h) { /*func*/
  widget_t* ret;
  widget_t* parent = (widget_t*)jparent;
  ret = (widget_t*)svg_image_create(parent, x, y, w, h);

  return (jlong)(ret);
}

JNIEXPORT jint JNICALL Java_SvgImage_svg_image_set_image(JNIEnv* env,  jclass ajc, jlong jwidget, jstring jname) { /*func*/
  ret_t ret;
  widget_t* widget = (widget_t*)jwidget;
  char* name = (char*)(*env)->GetStringUTFChars(env, jname, 0);
  ret = (ret_t)svg_image_set_image(widget, name);
  (*env)->ReleaseStringUTFChars(env, jname, name);

  return (jint)(ret);
}

JNIEXPORT jlong JNICALL Java_SvgImage_svg_image_cast(JNIEnv* env,  jclass ajc, jlong jwidget) { /*func*/
  widget_t* ret;
  widget_t* widget = (widget_t*)jwidget;
  ret = (widget_t*)svg_image_cast(widget);

  return (jlong)(ret);
}

