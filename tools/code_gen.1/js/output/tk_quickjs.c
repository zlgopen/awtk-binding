/*XXX: GENERATED CODE, DONT EDIT IT.*/
#include "tkc/utf8.h"
#include "tkc/mem.h"
#include "quickjs.h"
#include "tkc/event.h"
#include "tkc/rect.h"
#include "tkc/emitter.h"
#include "base/bitmap.h"
#include "tkc/value.h"
#include "tkc/object.h"
#include "src/awtk_global.h"
#include "base/dialog.h"
#include "base/events.h"
#include "base/font_manager.h"
#include "base/font.h"
#include "base/idle.h"
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
#include "base/canvas.h"
#include "tkc/named_value.h"
#include "tkc/mime_types.h"
#include "tkc/idle_manager.h"
#include "slide_view/slide_indicator.h"
#include "base/clip_board.h"
#include "tkc/easing.h"
#include "tkc/date_time.h"
#include "tkc/color.h"
#include "tkc/asset_info.h"
#include "base/assets_manager.h"
#include "canvas_widget/canvas_widget.h"
#include "time_clock/time_clock.h"
#include "text_selector/text_selector.h"
#include "switch/switch.h"
#include "slide_view/slide_view.h"
#include "slide_menu/slide_menu.h"
#include "scroll_view/scroll_view.h"
#include "scroll_view/scroll_bar.h"
#include "scroll_view/list_view.h"
#include "scroll_view/list_view_h.h"
#include "scroll_view/list_item.h"
#include "scroll_label/hscroll_label.h"
#include "rich_text/rich_text.h"
#include "progress_circle/progress_circle.h"
#include "mledit/mledit.h"
#include "mledit/line_number.h"
#include "image_value/image_value.h"
#include "image_animation/image_animation.h"
#include "guage/guage.h"
#include "guage/guage_pointer.h"
#include "features/draggable.h"
#include "color_picker/color_picker.h"
#include "color_picker/color_component.h"
#include "base/window_manager.h"
#include "base/window_base.h"
#include "base/style_mutable.h"
#include "base/image_base.h"
#include "widgets/app_bar.h"
#include "widgets/button_group.h"
#include "widgets/button.h"
#include "widgets/check_button.h"
#include "widgets/clip_view.h"
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
#include "widgets/group_box.h"
#include "widgets/label.h"
#include "widgets/overlay.h"
#include "widgets/pages.h"
#include "widgets/progress_bar.h"
#include "widgets/row.h"
#include "widgets/slider.h"
#include "widgets/tab_button_group.h"
#include "widgets/tab_button.h"
#include "widgets/tab_control.h"
#include "widgets/view.h"
#include "tkc/idle_info.h"
#include "mutable_image/mutable_image.h"
#include "tkc/object_array.h"
#include "gif_image/gif_image.h"
#include "tkc/object_default.h"
#include "widgets/image.h"
#include "combo_box_ex/combo_box_ex.h"
#include "widgets/popup.h"
#include "svg_image/svg_image.h"
#include "tkc/timer_info.h"
#include "widgets/spin_box.h"
#include "widgets/system_bar.h"
#include "base/window.h"
#include "keyboard/keyboard.h"
#include "custom.c"

jsvalue_t wrap_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (event_t*)event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "event_t*");
  }
  return jret;
}

jsvalue_t wrap_event_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  event_t* ret = NULL;
  uint32_t type = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  ret = (event_t*)event_create(type);

  jret = jsvalue_create_object(ctx, ret, "event_t*", (tk_destroy_t)event_destroy);
  }
  return jret;
}

jsvalue_t wrap_event_t_get_prop_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  jret = jsvalue_create_int(ctx, obj->type);
  return jret;
}

jsvalue_t wrap_event_t_get_prop_time(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  jret = jsvalue_create_int(ctx, obj->time);
  return jret;
}

jsvalue_t wrap_event_t_get_prop_target(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  jret = jsvalue_create_pointer(ctx, obj->target, "void*");
  return jret;
}

jsvalue_t wrap_rect_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  rect_t* ret = NULL;
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[0]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (rect_t*)rect_create(x, y, w, h);

  jret = jsvalue_create_object(ctx, ret, "rect_t*", (tk_destroy_t)rect_destroy);
  }
  return jret;
}

jsvalue_t wrap_rect_set(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  rect_t* ret = NULL;
  rect_t* rect = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (rect_t*)rect_set(rect, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "rect_t*");
  }
  return jret;
}

jsvalue_t wrap_rect_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  rect_t* ret = NULL;
  rect_t* rect = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");
  ret = (rect_t*)rect_cast(rect);

  jret = jsvalue_create_pointer(ctx, ret, "rect_t*");
  }
  return jret;
}

jsvalue_t wrap_rect_t_get_prop_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->x);
  return jret;
}

jsvalue_t wrap_rect_t_get_prop_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->y);
  return jret;
}

jsvalue_t wrap_rect_t_get_prop_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

jsvalue_t wrap_rect_t_get_prop_h(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

jsvalue_t wrap_emitter_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  emitter_t* ret = NULL;
  ret = (emitter_t*)emitter_create();

  jret = jsvalue_create_object(ctx, ret, "emitter_t*", (tk_destroy_t)emitter_destroy);
  }
  return jret;
}

jsvalue_t wrap_emitter_dispatch(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  event_t* e = (event_t*)jsvalue_get_pointer(ctx, argv[1], "event_t*");
  ret = (ret_t)emitter_dispatch(emitter, e);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_dispatch_simple_event(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  event_type_t type = (event_type_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)emitter_dispatch_simple_event(emitter, type);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_off(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  uint32_t id = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)emitter_off(emitter, id);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_enable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  ret = (ret_t)emitter_enable(emitter);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_disable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  ret = (ret_t)emitter_disable(emitter);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint32_t ret = 0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  ret = (uint32_t)emitter_size(emitter);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  emitter_t* ret = NULL;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  ret = (emitter_t*)emitter_cast(emitter);

  jret = jsvalue_create_pointer(ctx, ret, "emitter_t*");
  }
  return jret;
}

jsvalue_t wrap_bitmap_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  bitmap_t* ret = NULL;
  ret = (bitmap_t*)bitmap_create();

  jret = jsvalue_create_object(ctx, ret, "bitmap_t*", (tk_destroy_t)bitmap_destroy);
  }
  return jret;
}

jsvalue_t wrap_bitmap_create_ex(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  bitmap_t* ret = NULL;
  uint32_t w = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  uint32_t h = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t line_length = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  bitmap_format_t format = (bitmap_format_t)jsvalue_get_number_value(ctx, argv[3]);
  ret = (bitmap_t*)bitmap_create_ex(w, h, line_length, format);

  jret = jsvalue_create_object(ctx, ret, "bitmap_t*", (tk_destroy_t)bitmap_destroy);
  }
  return jret;
}

jsvalue_t wrap_bitmap_get_bpp(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint32_t ret = 0;
  bitmap_t* bitmap = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");
  ret = (uint32_t)bitmap_get_bpp(bitmap);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_h(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_line_length(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->line_length);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_flags(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->flags);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_format(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->format);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

jsvalue_t wrap_value_set_bool(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (value_t*)value_set_bool(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_bool(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (bool_t)value_bool(v);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_int8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int8_t value = (int8_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int8(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_int8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int8_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int8_t)value_int8(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_uint8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint8_t value = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_uint8(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_uint8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int8_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int8_t)value_uint8(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_int16(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int16_t value = (int16_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int16(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_int16(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int16_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int16_t)value_int16(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_uint16(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint16_t value = (uint16_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_uint16(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_uint16(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint16_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (uint16_t)value_uint16(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_int32(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int32(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_int32(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int32_t)value_int32(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_uint32(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_uint32(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_set_int64(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int64_t value = (int64_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int64(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_int64(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int64_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int64_t)value_int64(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_uint64(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint64_t value = (uint64_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_uint64(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_uint64(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint64_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (uint64_t)value_uint64(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_float(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (value_t*)value_set_float(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_float32(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  float ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (float)value_float32(v);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_double(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  double value = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (value_t*)value_set_double(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_double(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  double ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (double)value_double(v);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_dup_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  const char* value = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (value_t*)value_dup_str(v, value);
  jsvalue_free_str(ctx, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  const char* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (const char*)value_str(v);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_is_null(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  value_t* value = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (bool_t)value_is_null(value);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_set_object(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  object_t* value = (object_t*)jsvalue_get_pointer(ctx, argv[1], "object_t*");
  ret = (value_t*)value_set_object(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_object(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  object_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (object_t*)value_object(v);

  jret = jsvalue_create_pointer(ctx, ret, "object_t*");
  }
  return jret;
}

jsvalue_t wrap_value_set_token(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_token(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_token(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint32_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (uint32_t)value_token(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  value_t* ret = NULL;
  ret = (value_t*)value_create();

  jret = jsvalue_create_object(ctx, ret, "value_t*", (tk_destroy_t)value_destroy);
  }
  return jret;
}

jsvalue_t wrap_value_reset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (ret_t)value_reset(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  value_t* ret = NULL;
  value_t* value = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (value_t*)value_cast(value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_object_ref(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  object_t* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (object_t*)object_ref(obj);

  jret = jsvalue_create_object(ctx, ret, "object_t*", (tk_destroy_t)object_unref);
  }
  return jret;
}

jsvalue_t wrap_object_get_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  const char* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (const char*)object_get_type(obj);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_desc(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  const char* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (const char*)object_get_desc(obj);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint32_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (uint32_t)object_get_size(obj);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_is_collection(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (bool_t)object_is_collection(obj);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)object_set_name(obj, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_compare(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  int ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  object_t* other = (object_t*)jsvalue_get_pointer(ctx, argv[1], "object_t*");
  ret = (int)object_compare(obj, other);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[2], "value_t*");
  ret = (ret_t)object_get_prop(obj, name, v);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  const char* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (const char*)object_get_prop_str(obj, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_pointer(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  void* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (void*)object_get_prop_pointer(obj, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "void*");
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_object(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  object_t* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (object_t*)object_get_prop_object(obj, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "object_t*");
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  int32_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (int32_t)object_get_prop_int(obj, name, defval);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_bool(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  bool_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t defval = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (bool_t)object_get_prop_bool(obj, name, defval);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_float(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  float_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t defval = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (float_t)object_get_prop_float(obj, name, defval);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_remove_prop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)object_remove_prop(obj, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  value_t* value = (value_t*)jsvalue_get_pointer(ctx, argv[2], "value_t*");
  ret = (ret_t)object_set_prop(obj, name, value);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* value = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)object_set_prop_str(obj, name, value);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_object(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  object_t* value = (object_t*)jsvalue_get_pointer(ctx, argv[2], "object_t*");
  ret = (ret_t)object_set_prop_object(obj, name, value);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)object_set_prop_int(obj, name, value);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_bool(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (ret_t)object_set_prop_bool(obj, name, value);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_float(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)object_set_prop_float(obj, name, value);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_copy_prop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  object_t* src = (object_t*)jsvalue_get_pointer(ctx, argv[1], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)object_copy_prop(obj, src, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_has_prop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  bool_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (bool_t)object_has_prop(obj, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_eval(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* expr = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[2], "value_t*");
  ret = (ret_t)object_eval(obj, expr, v);
  jsvalue_free_str(ctx, expr);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_can_exec(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  bool_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* args = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (bool_t)object_can_exec(obj, name, args);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, args);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_exec(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* args = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)object_exec(obj, name, args);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, args);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_notify_changed(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (ret_t)object_notify_changed(obj);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_str_by_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  const char* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (const char*)object_get_prop_str_by_path(obj, path);
  jsvalue_free_str(ctx, path);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_pointer_by_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  void* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (void*)object_get_prop_pointer_by_path(obj, path);
  jsvalue_free_str(ctx, path);

  jret = jsvalue_create_pointer(ctx, ret, "void*");
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_object_by_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  object_t* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (object_t*)object_get_prop_object_by_path(obj, path);
  jsvalue_free_str(ctx, path);

  jret = jsvalue_create_pointer(ctx, ret, "object_t*");
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_int_by_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  int32_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (int32_t)object_get_prop_int_by_path(obj, path, defval);
  jsvalue_free_str(ctx, path);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_bool_by_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  bool_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t defval = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (bool_t)object_get_prop_bool_by_path(obj, path, defval);
  jsvalue_free_str(ctx, path);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_float_by_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  float_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t defval = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (float_t)object_get_prop_float_by_path(obj, path, defval);
  jsvalue_free_str(ctx, path);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_t_get_prop_ref_count(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");

  jret = jsvalue_create_int(ctx, obj->ref_count);
  return jret;
}

jsvalue_t wrap_object_t_get_prop_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

jsvalue_t wrap_tk_init(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[0]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
  app_type_t app_type = (app_type_t)jsvalue_get_number_value(ctx, argv[2]);
  const char* app_name = (const char*)jsvalue_get_utf8_string(ctx, argv[3]);
  const char* app_root = (const char*)jsvalue_get_utf8_string(ctx, argv[4]);
  ret = (ret_t)tk_init(w, h, app_type, app_name, app_root);
  jsvalue_free_str(ctx, app_name);
  jsvalue_free_str(ctx, app_root);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tk_run(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  ret_t ret = 0;
  ret = (ret_t)tk_run();

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tk_quit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  ret_t ret = 0;
  ret = (ret_t)tk_quit();

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tk_get_pointer_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  int32_t ret = 0;
  ret = (int32_t)tk_get_pointer_x();

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tk_get_pointer_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  int32_t ret = 0;
  ret = (int32_t)tk_get_pointer_y();

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tk_is_pointer_pressed(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  bool_t ret = 0;
  ret = (bool_t)tk_is_pointer_pressed();

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t get_DIALOG_QUIT_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, DIALOG_QUIT_NONE);
}

jsvalue_t get_DIALOG_QUIT_OK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, DIALOG_QUIT_OK);
}

jsvalue_t get_DIALOG_QUIT_YES(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, DIALOG_QUIT_YES);
}

jsvalue_t get_DIALOG_QUIT_CANCEL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, DIALOG_QUIT_CANCEL);
}

jsvalue_t get_DIALOG_QUIT_NO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, DIALOG_QUIT_NO);
}

jsvalue_t get_DIALOG_QUIT_OTHER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, DIALOG_QUIT_OTHER);
}

jsvalue_t get_EVT_POINTER_DOWN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_DOWN);
}

jsvalue_t get_EVT_POINTER_DOWN_BEFORE_CHILDREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_DOWN_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_POINTER_MOVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_MOVE);
}

jsvalue_t get_EVT_POINTER_MOVE_BEFORE_CHILDREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_MOVE_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_POINTER_UP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_UP);
}

jsvalue_t get_EVT_POINTER_UP_BEFORE_CHILDREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_UP_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_WHEEL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WHEEL);
}

jsvalue_t get_EVT_WHEEL_BEFORE_CHILDREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WHEEL_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_POINTER_DOWN_ABORT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_DOWN_ABORT);
}

jsvalue_t get_EVT_CONTEXT_MENU(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_CONTEXT_MENU);
}

jsvalue_t get_EVT_POINTER_ENTER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_ENTER);
}

jsvalue_t get_EVT_POINTER_LEAVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_LEAVE);
}

jsvalue_t get_EVT_LONG_PRESS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_LONG_PRESS);
}

jsvalue_t get_EVT_CLICK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_CLICK);
}

jsvalue_t get_EVT_FOCUS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_FOCUS);
}

jsvalue_t get_EVT_BLUR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_BLUR);
}

jsvalue_t get_EVT_KEY_DOWN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_KEY_DOWN);
}

jsvalue_t get_EVT_KEY_DOWN_BEFORE_CHILDREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_KEY_DOWN_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_KEY_REPEAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_KEY_REPEAT);
}

jsvalue_t get_EVT_KEY_UP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_KEY_UP);
}

jsvalue_t get_EVT_KEY_UP_BEFORE_CHILDREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_KEY_UP_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_WILL_MOVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WILL_MOVE);
}

jsvalue_t get_EVT_MOVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_MOVE);
}

jsvalue_t get_EVT_WILL_RESIZE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WILL_RESIZE);
}

jsvalue_t get_EVT_RESIZE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_RESIZE);
}

jsvalue_t get_EVT_WILL_MOVE_RESIZE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WILL_MOVE_RESIZE);
}

jsvalue_t get_EVT_MOVE_RESIZE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_MOVE_RESIZE);
}

jsvalue_t get_EVT_VALUE_WILL_CHANGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_VALUE_WILL_CHANGE);
}

jsvalue_t get_EVT_VALUE_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_VALUE_CHANGED);
}

jsvalue_t get_EVT_VALUE_CHANGING(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_VALUE_CHANGING);
}

jsvalue_t get_EVT_PAINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_PAINT);
}

jsvalue_t get_EVT_BEFORE_PAINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_BEFORE_PAINT);
}

jsvalue_t get_EVT_AFTER_PAINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_AFTER_PAINT);
}

jsvalue_t get_EVT_PAINT_DONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_PAINT_DONE);
}

jsvalue_t get_EVT_LOCALE_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_LOCALE_CHANGED);
}

jsvalue_t get_EVT_ANIM_START(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ANIM_START);
}

jsvalue_t get_EVT_ANIM_STOP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ANIM_STOP);
}

jsvalue_t get_EVT_ANIM_PAUSE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ANIM_PAUSE);
}

jsvalue_t get_EVT_ANIM_ONCE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ANIM_ONCE);
}

jsvalue_t get_EVT_ANIM_END(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ANIM_END);
}

jsvalue_t get_EVT_WINDOW_LOAD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WINDOW_LOAD);
}

jsvalue_t get_EVT_WIDGET_LOAD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WIDGET_LOAD);
}

jsvalue_t get_EVT_WINDOW_WILL_OPEN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WINDOW_WILL_OPEN);
}

jsvalue_t get_EVT_WINDOW_OPEN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WINDOW_OPEN);
}

jsvalue_t get_EVT_WINDOW_TO_BACKGROUND(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WINDOW_TO_BACKGROUND);
}

jsvalue_t get_EVT_WINDOW_TO_FOREGROUND(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WINDOW_TO_FOREGROUND);
}

jsvalue_t get_EVT_WINDOW_CLOSE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WINDOW_CLOSE);
}

jsvalue_t get_EVT_REQUEST_CLOSE_WINDOW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_REQUEST_CLOSE_WINDOW);
}

jsvalue_t get_EVT_TOP_WINDOW_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_TOP_WINDOW_CHANGED);
}

jsvalue_t get_EVT_IM_COMMIT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_IM_COMMIT);
}

jsvalue_t get_EVT_IM_SHOW_CANDIDATES(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_IM_SHOW_CANDIDATES);
}

jsvalue_t get_EVT_IM_ACTION(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_IM_ACTION);
}

jsvalue_t get_EVT_IM_ACTION_INFO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_IM_ACTION_INFO);
}

jsvalue_t get_EVT_DRAG_START(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_DRAG_START);
}

jsvalue_t get_EVT_DRAG(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_DRAG);
}

jsvalue_t get_EVT_DRAG_END(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_DRAG_END);
}

jsvalue_t get_EVT_SCREEN_SAVER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_SCREEN_SAVER);
}

jsvalue_t get_EVT_LOW_MEMORY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_LOW_MEMORY);
}

jsvalue_t get_EVT_OUT_OF_MEMORY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_OUT_OF_MEMORY);
}

jsvalue_t get_EVT_ORIENTATION_WILL_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ORIENTATION_WILL_CHANGED);
}

jsvalue_t get_EVT_ORIENTATION_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ORIENTATION_CHANGED);
}

jsvalue_t get_EVT_WIDGET_CREATED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WIDGET_CREATED);
}

jsvalue_t get_EVT_REQUEST_QUIT_APP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_REQUEST_QUIT_APP);
}

jsvalue_t get_EVT_THEME_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_THEME_CHANGED);
}

jsvalue_t get_EVT_WIDGET_ADD_CHILD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WIDGET_ADD_CHILD);
}

jsvalue_t get_EVT_WIDGET_REMOVE_CHILD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WIDGET_REMOVE_CHILD);
}

jsvalue_t get_EVT_REQ_START(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_REQ_START);
}

jsvalue_t get_EVT_USER_START(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_USER_START);
}

jsvalue_t get_EVT_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_NONE);
}

jsvalue_t get_EVT_PROP_WILL_CHANGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_PROP_WILL_CHANGE);
}

jsvalue_t get_EVT_PROP_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_PROP_CHANGED);
}

jsvalue_t get_EVT_ITEMS_WILL_CHANGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ITEMS_WILL_CHANGE);
}

jsvalue_t get_EVT_ITEMS_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ITEMS_CHANGED);
}

jsvalue_t get_EVT_PROPS_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_PROPS_CHANGED);
}

jsvalue_t get_EVT_PROGRESS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_PROGRESS);
}

jsvalue_t get_EVT_DESTROY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_DESTROY);
}

jsvalue_t wrap_font_manager_unload_font(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  font_manager_t* fm = (font_manager_t*)jsvalue_get_pointer(ctx, argv[0], "font_manager_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  font_size_t size = (font_size_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)font_manager_unload_font(fm, name, size);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_font_manager_unload_all(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  font_manager_t* fm = (font_manager_t*)jsvalue_get_pointer(ctx, argv[0], "font_manager_t*");
  ret = (ret_t)font_manager_unload_all(fm);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t get_GLYPH_FMT_ALPHA(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, GLYPH_FMT_ALPHA);
}

jsvalue_t get_GLYPH_FMT_MONO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, GLYPH_FMT_MONO);
}

jsvalue_t get_GLYPH_FMT_RGBA(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, GLYPH_FMT_RGBA);
}

jsvalue_t wrap_idle_remove(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  uint32_t idle_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  ret = (ret_t)idle_remove(idle_id);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_manager(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  image_manager_t* ret = NULL;
  ret = (image_manager_t*)image_manager();

  jret = jsvalue_create_pointer(ctx, ret, "image_manager_t*");
  }
  return jret;
}

jsvalue_t wrap_image_manager_get_bitmap(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  image_manager_t* imm = (image_manager_t*)jsvalue_get_pointer(ctx, argv[0], "image_manager_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bitmap_t* image = (bitmap_t*)jsvalue_get_pointer(ctx, argv[2], "bitmap_t*");
  ret = (ret_t)image_manager_get_bitmap(imm, name, image);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t get_INPUT_TEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_TEXT);
}

jsvalue_t get_INPUT_INT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_INT);
}

jsvalue_t get_INPUT_UINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_UINT);
}

jsvalue_t get_INPUT_HEX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_HEX);
}

jsvalue_t get_INPUT_FLOAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_FLOAT);
}

jsvalue_t get_INPUT_UFLOAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_UFLOAT);
}

jsvalue_t get_INPUT_EMAIL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_EMAIL);
}

jsvalue_t get_INPUT_PASSWORD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_PASSWORD);
}

jsvalue_t get_INPUT_PHONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_PHONE);
}

jsvalue_t get_INPUT_CUSTOM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_CUSTOM);
}

jsvalue_t get_INPUT_CUSTOM_PASSWORD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_CUSTOM_PASSWORD);
}

jsvalue_t get_VALUE_TYPE_INVALID(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_INVALID);
}

jsvalue_t get_VALUE_TYPE_BOOL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_BOOL);
}

jsvalue_t get_VALUE_TYPE_INT8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_INT8);
}

jsvalue_t get_VALUE_TYPE_UINT8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT8);
}

jsvalue_t get_VALUE_TYPE_INT16(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_INT16);
}

jsvalue_t get_VALUE_TYPE_UINT16(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT16);
}

jsvalue_t get_VALUE_TYPE_INT32(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_INT32);
}

jsvalue_t get_VALUE_TYPE_UINT32(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT32);
}

jsvalue_t get_VALUE_TYPE_INT64(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_INT64);
}

jsvalue_t get_VALUE_TYPE_UINT64(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT64);
}

jsvalue_t get_VALUE_TYPE_POINTER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_POINTER);
}

jsvalue_t get_VALUE_TYPE_FLOAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_FLOAT);
}

jsvalue_t get_VALUE_TYPE_FLOAT32(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_FLOAT32);
}

jsvalue_t get_VALUE_TYPE_DOUBLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_DOUBLE);
}

jsvalue_t get_VALUE_TYPE_STRING(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_STRING);
}

jsvalue_t get_VALUE_TYPE_WSTRING(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_WSTRING);
}

jsvalue_t get_VALUE_TYPE_OBJECT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_OBJECT);
}

jsvalue_t get_VALUE_TYPE_SIZED_STRING(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_SIZED_STRING);
}

jsvalue_t get_VALUE_TYPE_BINARY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_BINARY);
}

jsvalue_t get_VALUE_TYPE_UBJSON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_UBJSON);
}

jsvalue_t get_VALUE_TYPE_TOKEN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_TOKEN);
}

jsvalue_t wrap_input_method_commit_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)input_method_commit_text(im, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_input_method_dispatch_key(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
  uint32_t key = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)input_method_dispatch_key(im, key);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_input_method(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  input_method_t* ret = NULL;
  ret = (input_method_t*)input_method();

  jret = jsvalue_create_pointer(ctx, ret, "input_method_t*");
  }
  return jret;
}

jsvalue_t get_TK_KEY_RETURN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RETURN);
}

jsvalue_t get_TK_KEY_ESCAPE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_ESCAPE);
}

jsvalue_t get_TK_KEY_BACKSPACE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_BACKSPACE);
}

jsvalue_t get_TK_KEY_TAB(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_TAB);
}

jsvalue_t get_TK_KEY_SPACE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_SPACE);
}

jsvalue_t get_TK_KEY_EXCLAIM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_EXCLAIM);
}

jsvalue_t get_TK_KEY_QUOTEDBL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_QUOTEDBL);
}

jsvalue_t get_TK_KEY_HASH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_HASH);
}

jsvalue_t get_TK_KEY_PERCENT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_PERCENT);
}

jsvalue_t get_TK_KEY_DOLLAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_DOLLAR);
}

jsvalue_t get_TK_KEY_AMPERSAND(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_AMPERSAND);
}

jsvalue_t get_TK_KEY_QUOTE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_QUOTE);
}

jsvalue_t get_TK_KEY_LEFTPAREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LEFTPAREN);
}

jsvalue_t get_TK_KEY_RIGHTPAREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RIGHTPAREN);
}

jsvalue_t get_TK_KEY_ASTERISK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_ASTERISK);
}

jsvalue_t get_TK_KEY_PLUS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_PLUS);
}

jsvalue_t get_TK_KEY_COMMA(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_COMMA);
}

jsvalue_t get_TK_KEY_MINUS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_MINUS);
}

jsvalue_t get_TK_KEY_PERIOD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_PERIOD);
}

jsvalue_t get_TK_KEY_SLASH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_SLASH);
}

jsvalue_t get_TK_KEY_0(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_0);
}

jsvalue_t get_TK_KEY_1(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_1);
}

jsvalue_t get_TK_KEY_2(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_2);
}

jsvalue_t get_TK_KEY_3(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_3);
}

jsvalue_t get_TK_KEY_4(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_4);
}

jsvalue_t get_TK_KEY_5(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_5);
}

jsvalue_t get_TK_KEY_6(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_6);
}

jsvalue_t get_TK_KEY_7(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_7);
}

jsvalue_t get_TK_KEY_8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_8);
}

jsvalue_t get_TK_KEY_9(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_9);
}

jsvalue_t get_TK_KEY_COLON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_COLON);
}

jsvalue_t get_TK_KEY_SEMICOLON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_SEMICOLON);
}

jsvalue_t get_TK_KEY_LESS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LESS);
}

jsvalue_t get_TK_KEY_EQUAL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_EQUAL);
}

jsvalue_t get_TK_KEY_GREATER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_GREATER);
}

jsvalue_t get_TK_KEY_QUESTION(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_QUESTION);
}

jsvalue_t get_TK_KEY_AT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_AT);
}

jsvalue_t get_TK_KEY_LEFTBRACKET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LEFTBRACKET);
}

jsvalue_t get_TK_KEY_BACKSLASH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_BACKSLASH);
}

jsvalue_t get_TK_KEY_RIGHTBRACKET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RIGHTBRACKET);
}

jsvalue_t get_TK_KEY_CARET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_CARET);
}

jsvalue_t get_TK_KEY_UNDERSCORE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_UNDERSCORE);
}

jsvalue_t get_TK_KEY_BACKQUOTE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_BACKQUOTE);
}

jsvalue_t get_TK_KEY_a(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_a);
}

jsvalue_t get_TK_KEY_b(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_b);
}

jsvalue_t get_TK_KEY_c(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_c);
}

jsvalue_t get_TK_KEY_d(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_d);
}

jsvalue_t get_TK_KEY_e(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_e);
}

jsvalue_t get_TK_KEY_f(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_f);
}

jsvalue_t get_TK_KEY_g(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_g);
}

jsvalue_t get_TK_KEY_h(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_h);
}

jsvalue_t get_TK_KEY_i(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_i);
}

jsvalue_t get_TK_KEY_j(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_j);
}

jsvalue_t get_TK_KEY_k(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_k);
}

jsvalue_t get_TK_KEY_l(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_l);
}

jsvalue_t get_TK_KEY_m(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_m);
}

jsvalue_t get_TK_KEY_n(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_n);
}

jsvalue_t get_TK_KEY_o(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_o);
}

jsvalue_t get_TK_KEY_p(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_p);
}

jsvalue_t get_TK_KEY_q(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_q);
}

jsvalue_t get_TK_KEY_r(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_r);
}

jsvalue_t get_TK_KEY_s(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_s);
}

jsvalue_t get_TK_KEY_t(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_t);
}

jsvalue_t get_TK_KEY_u(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_u);
}

jsvalue_t get_TK_KEY_v(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_v);
}

jsvalue_t get_TK_KEY_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_w);
}

jsvalue_t get_TK_KEY_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_x);
}

jsvalue_t get_TK_KEY_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_y);
}

jsvalue_t get_TK_KEY_z(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_z);
}

jsvalue_t get_TK_KEY_A(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_A);
}

jsvalue_t get_TK_KEY_B(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_B);
}

jsvalue_t get_TK_KEY_C(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_C);
}

jsvalue_t get_TK_KEY_D(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_D);
}

jsvalue_t get_TK_KEY_E(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_E);
}

jsvalue_t get_TK_KEY_F(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F);
}

jsvalue_t get_TK_KEY_G(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_G);
}

jsvalue_t get_TK_KEY_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_H);
}

jsvalue_t get_TK_KEY_I(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_I);
}

jsvalue_t get_TK_KEY_J(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_J);
}

jsvalue_t get_TK_KEY_K(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_K);
}

jsvalue_t get_TK_KEY_L(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_L);
}

jsvalue_t get_TK_KEY_M(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_M);
}

jsvalue_t get_TK_KEY_N(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_N);
}

jsvalue_t get_TK_KEY_O(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_O);
}

jsvalue_t get_TK_KEY_P(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_P);
}

jsvalue_t get_TK_KEY_Q(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_Q);
}

jsvalue_t get_TK_KEY_R(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_R);
}

jsvalue_t get_TK_KEY_S(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_S);
}

jsvalue_t get_TK_KEY_T(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_T);
}

jsvalue_t get_TK_KEY_U(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_U);
}

jsvalue_t get_TK_KEY_V(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_V);
}

jsvalue_t get_TK_KEY_W(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_W);
}

jsvalue_t get_TK_KEY_X(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_X);
}

jsvalue_t get_TK_KEY_Y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_Y);
}

jsvalue_t get_TK_KEY_Z(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_Z);
}

jsvalue_t get_TK_KEY_DOT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_DOT);
}

jsvalue_t get_TK_KEY_DELETE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_DELETE);
}

jsvalue_t get_TK_KEY_LEFTBRACE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LEFTBRACE);
}

jsvalue_t get_TK_KEY_RIGHTBRACE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RIGHTBRACE);
}

jsvalue_t get_TK_KEY_LSHIFT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LSHIFT);
}

jsvalue_t get_TK_KEY_RSHIFT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RSHIFT);
}

jsvalue_t get_TK_KEY_LCTRL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LCTRL);
}

jsvalue_t get_TK_KEY_RCTRL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RCTRL);
}

jsvalue_t get_TK_KEY_LALT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LALT);
}

jsvalue_t get_TK_KEY_RALT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RALT);
}

jsvalue_t get_TK_KEY_CAPSLOCK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_CAPSLOCK);
}

jsvalue_t get_TK_KEY_HOME(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_HOME);
}

jsvalue_t get_TK_KEY_END(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_END);
}

jsvalue_t get_TK_KEY_INSERT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_INSERT);
}

jsvalue_t get_TK_KEY_UP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_UP);
}

jsvalue_t get_TK_KEY_DOWN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_DOWN);
}

jsvalue_t get_TK_KEY_LEFT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LEFT);
}

jsvalue_t get_TK_KEY_RIGHT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RIGHT);
}

jsvalue_t get_TK_KEY_PAGEUP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_PAGEUP);
}

jsvalue_t get_TK_KEY_PAGEDOWN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_PAGEDOWN);
}

jsvalue_t get_TK_KEY_F1(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F1);
}

jsvalue_t get_TK_KEY_F2(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F2);
}

jsvalue_t get_TK_KEY_F3(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F3);
}

jsvalue_t get_TK_KEY_F4(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F4);
}

jsvalue_t get_TK_KEY_F5(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F5);
}

jsvalue_t get_TK_KEY_F6(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F6);
}

jsvalue_t get_TK_KEY_F7(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F7);
}

jsvalue_t get_TK_KEY_F8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F8);
}

jsvalue_t get_TK_KEY_F9(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F9);
}

jsvalue_t get_TK_KEY_F10(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F10);
}

jsvalue_t get_TK_KEY_F11(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F11);
}

jsvalue_t get_TK_KEY_F12(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F12);
}

jsvalue_t get_TK_KEY_MENU(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_MENU);
}

jsvalue_t get_TK_KEY_COMMAND(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_COMMAND);
}

jsvalue_t get_TK_KEY_BACK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_BACK);
}

jsvalue_t get_TK_KEY_CANCEL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_CANCEL);
}

jsvalue_t wrap_locale_info(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  locale_info_t* ret = NULL;
  ret = (locale_info_t*)locale_info();

  jret = jsvalue_create_pointer(ctx, ret, "locale_info_t*");
  }
  return jret;
}

jsvalue_t wrap_locale_info_tr(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  const char* ret = NULL;
  locale_info_t* locale_info = (locale_info_t*)jsvalue_get_pointer(ctx, argv[0], "locale_info_t*");
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (const char*)locale_info_tr(locale_info, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_locale_info_change(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  locale_info_t* locale_info = (locale_info_t*)jsvalue_get_pointer(ctx, argv[0], "locale_info_t*");
  char* language = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  char* country = (char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)locale_info_change(locale_info, language, country);
  jsvalue_free_str(ctx, language);
  jsvalue_free_str(ctx, country);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_locale_info_off(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  locale_info_t* locale_info = (locale_info_t*)jsvalue_get_pointer(ctx, argv[0], "locale_info_t*");
  uint32_t id = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)locale_info_off(locale_info, id);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t get_STYLE_ID_BG_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_BG_COLOR);
}

jsvalue_t get_STYLE_ID_FG_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_FG_COLOR);
}

jsvalue_t get_STYLE_ID_MASK_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_MASK_COLOR);
}

jsvalue_t get_STYLE_ID_FONT_NAME(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_FONT_NAME);
}

jsvalue_t get_STYLE_ID_FONT_SIZE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_FONT_SIZE);
}

jsvalue_t get_STYLE_ID_FONT_STYLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_FONT_STYLE);
}

jsvalue_t get_STYLE_ID_TEXT_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_TEXT_COLOR);
}

jsvalue_t get_STYLE_ID_TIPS_TEXT_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_TIPS_TEXT_COLOR);
}

jsvalue_t get_STYLE_ID_TEXT_ALIGN_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_TEXT_ALIGN_H);
}

jsvalue_t get_STYLE_ID_TEXT_ALIGN_V(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_TEXT_ALIGN_V);
}

jsvalue_t get_STYLE_ID_BORDER_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_BORDER_COLOR);
}

jsvalue_t get_STYLE_ID_BORDER_WIDTH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_BORDER_WIDTH);
}

jsvalue_t get_STYLE_ID_BORDER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_BORDER);
}

jsvalue_t get_STYLE_ID_BG_IMAGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_BG_IMAGE);
}

jsvalue_t get_STYLE_ID_BG_IMAGE_DRAW_TYPE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_BG_IMAGE_DRAW_TYPE);
}

jsvalue_t get_STYLE_ID_ICON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_ICON);
}

jsvalue_t get_STYLE_ID_FG_IMAGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_FG_IMAGE);
}

jsvalue_t get_STYLE_ID_FG_IMAGE_DRAW_TYPE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_FG_IMAGE_DRAW_TYPE);
}

jsvalue_t get_STYLE_ID_SPACER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_SPACER);
}

jsvalue_t get_STYLE_ID_MARGIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN);
}

jsvalue_t get_STYLE_ID_MARGIN_LEFT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_LEFT);
}

jsvalue_t get_STYLE_ID_MARGIN_RIGHT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_RIGHT);
}

jsvalue_t get_STYLE_ID_MARGIN_TOP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_TOP);
}

jsvalue_t get_STYLE_ID_MARGIN_BOTTOM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_BOTTOM);
}

jsvalue_t get_STYLE_ID_ICON_AT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_ICON_AT);
}

jsvalue_t get_STYLE_ID_ACTIVE_ICON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_ACTIVE_ICON);
}

jsvalue_t get_STYLE_ID_X_OFFSET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_X_OFFSET);
}

jsvalue_t get_STYLE_ID_Y_OFFSET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_Y_OFFSET);
}

jsvalue_t get_STYLE_ID_SELECTED_BG_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_SELECTED_BG_COLOR);
}

jsvalue_t get_STYLE_ID_SELECTED_FG_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_SELECTED_FG_COLOR);
}

jsvalue_t get_STYLE_ID_SELECTED_TEXT_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_SELECTED_TEXT_COLOR);
}

jsvalue_t get_STYLE_ID_ROUND_RADIUS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_ROUND_RADIUS);
}

jsvalue_t get_STYLE_ID_CHILDREN_LAYOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_CHILDREN_LAYOUT);
}

jsvalue_t get_STYLE_ID_SELF_LAYOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_SELF_LAYOUT);
}

jsvalue_t wrap_style_notify_widget_state_changed(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (ret_t)style_notify_widget_state_changed(s, widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_is_valid(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  ret = (bool_t)style_is_valid(s);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_get_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  int32_t ret = 0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (int32_t)style_get_int(s, name, defval);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_get_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  const char* ret = NULL;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* defval = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (const char*)style_get_str(s, name, defval);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, defval);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_set(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* state = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  const value_t* value = (const value_t*)jsvalue_get_pointer(ctx, argv[3], "const value_t*");
  ret = (ret_t)style_set(s, state, name, value);
  jsvalue_free_str(ctx, state);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_is_mutable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  ret = (bool_t)style_is_mutable(s);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_theme(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  theme_t* ret = NULL;
  ret = (theme_t*)theme();

  jret = jsvalue_create_pointer(ctx, ret, "theme_t*");
  }
  return jret;
}

jsvalue_t wrap_timer_remove(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  uint32_t timer_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  ret = (ret_t)timer_remove(timer_id);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_timer_reset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  uint32_t timer_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  ret = (ret_t)timer_reset(timer_id);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_timer_modify(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  uint32_t timer_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  uint32_t duration = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)timer_modify(timer_id, duration);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t get_ALIGN_V_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_V_NONE);
}

jsvalue_t get_ALIGN_V_MIDDLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_V_MIDDLE);
}

jsvalue_t get_ALIGN_V_TOP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_V_TOP);
}

jsvalue_t get_ALIGN_V_BOTTOM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_V_BOTTOM);
}

jsvalue_t get_ALIGN_H_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_H_NONE);
}

jsvalue_t get_ALIGN_H_CENTER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_H_CENTER);
}

jsvalue_t get_ALIGN_H_LEFT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_H_LEFT);
}

jsvalue_t get_ALIGN_H_RIGHT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_H_RIGHT);
}

jsvalue_t get_APP_MOBILE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, APP_MOBILE);
}

jsvalue_t get_APP_SIMULATOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, APP_SIMULATOR);
}

jsvalue_t get_APP_DESKTOP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, APP_DESKTOP);
}

jsvalue_t get_BITMAP_FMT_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_NONE);
}

jsvalue_t get_BITMAP_FMT_RGBA8888(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_RGBA8888);
}

jsvalue_t get_BITMAP_FMT_ABGR8888(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_ABGR8888);
}

jsvalue_t get_BITMAP_FMT_BGRA8888(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_BGRA8888);
}

jsvalue_t get_BITMAP_FMT_ARGB8888(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_ARGB8888);
}

jsvalue_t get_BITMAP_FMT_RGB565(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_RGB565);
}

jsvalue_t get_BITMAP_FMT_BGR565(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_BGR565);
}

jsvalue_t get_BITMAP_FMT_RGB888(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_RGB888);
}

jsvalue_t get_BITMAP_FMT_BGR888(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_BGR888);
}

jsvalue_t get_BITMAP_FMT_GRAY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_GRAY);
}

jsvalue_t get_BITMAP_FMT_MONO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_MONO);
}

jsvalue_t get_BITMAP_FLAG_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FLAG_NONE);
}

jsvalue_t get_BITMAP_FLAG_OPAQUE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FLAG_OPAQUE);
}

jsvalue_t get_BITMAP_FLAG_IMMUTABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FLAG_IMMUTABLE);
}

jsvalue_t get_BITMAP_FLAG_TEXTURE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FLAG_TEXTURE);
}

jsvalue_t get_BITMAP_FLAG_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FLAG_CHANGED);
}

jsvalue_t get_BITMAP_FLAG_PREMULTI_ALPHA(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FLAG_PREMULTI_ALPHA);
}

jsvalue_t wrap_vgcanvas_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  vgcanvas_t* ret = NULL;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (vgcanvas_t*)vgcanvas_cast(vg);

  jret = jsvalue_create_pointer(ctx, ret, "vgcanvas_t*");
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_flush(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_flush(vg);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_begin_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_begin_path(vg);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_move_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)vgcanvas_move_to(vg, x, y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_line_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)vgcanvas_line_to(vg, x, y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_quad_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t cpx = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t cpy = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_quad_to(vg, cpx, cpy, x, y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_bezier_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 7) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t cp1x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t cp1y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t cp2x = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t cp2y = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  ret = (ret_t)vgcanvas_bezier_to(vg, cp1x, cp1y, cp2x, cp2y, x, y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_arc_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 6) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x1 = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y1 = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t x2 = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t y2 = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t r = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  ret = (ret_t)vgcanvas_arc_to(vg, x1, y1, x2, y2, r);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_arc(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 7) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t r = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t start_angle = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t end_angle = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  bool_t ccw = (bool_t)jsvalue_get_boolean_value(ctx, argv[6]);
  ret = (ret_t)vgcanvas_arc(vg, x, y, r, start_angle, end_angle, ccw);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_is_point_in_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  bool_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (bool_t)vgcanvas_is_point_in_path(vg, x, y);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t w = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t h = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_rect(vg, x, y, w, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_rounded_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 6) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t w = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t h = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t r = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  ret = (ret_t)vgcanvas_rounded_rect(vg, x, y, w, h, r);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_ellipse(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t rx = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t ry = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_ellipse(vg, x, y, rx, ry);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_close_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_close_path(vg);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_rotate(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t rad = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_rotate(vg, rad);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)vgcanvas_scale(vg, x, y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_translate(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)vgcanvas_translate(vg, x, y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_transform(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 7) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t a = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t b = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t c = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t d = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t e = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t f = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  ret = (ret_t)vgcanvas_transform(vg, a, b, c, d, e, f);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_transform(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 7) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t a = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t b = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t c = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t d = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t e = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t f = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  ret = (ret_t)vgcanvas_set_transform(vg, a, b, c, d, e, f);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_clip_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t w = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t h = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_clip_rect(vg, x, y, w, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_fill(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_fill(vg);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_stroke(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_stroke(vg);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_paint(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  bool_t stroke = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[2], "bitmap_t*");
  ret = (ret_t)vgcanvas_paint(vg, stroke, img);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_font(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* font = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_font(vg, font);
  jsvalue_free_str(ctx, font);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_font_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t font = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_font_size(vg, font);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_text_align(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_text_align(vg, value);
  jsvalue_free_str(ctx, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_text_baseline(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_text_baseline(vg, value);
  jsvalue_free_str(ctx, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_fill_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t max_width = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_fill_text(vg, text, x, y, max_width);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_measure_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  float_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (float_t)vgcanvas_measure_text(vg, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_draw_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 10) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  float_t sx = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t sy = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t sw = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t sh = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t dx = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  float_t dy = (float_t)jsvalue_get_number_value(ctx, argv[7]);
  float_t dw = (float_t)jsvalue_get_number_value(ctx, argv[8]);
  float_t dh = (float_t)jsvalue_get_number_value(ctx, argv[9]);
  ret = (ret_t)vgcanvas_draw_image(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_draw_icon(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 10) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  float_t sx = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t sy = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t sw = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t sh = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t dx = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  float_t dy = (float_t)jsvalue_get_number_value(ctx, argv[7]);
  float_t dw = (float_t)jsvalue_get_number_value(ctx, argv[8]);
  float_t dh = (float_t)jsvalue_get_number_value(ctx, argv[9]);
  ret = (ret_t)vgcanvas_draw_icon(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_antialias(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_antialias(vg, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_global_alpha(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t alpha = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_global_alpha(vg, alpha);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_line_width(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_line_width(vg, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_fill_color_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_fill_color_str(vg, color);
  jsvalue_free_str(ctx, color);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_stroke_color_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_stroke_color_str(vg, color);
  jsvalue_free_str(ctx, color);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_line_cap(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_line_cap(vg, value);
  jsvalue_free_str(ctx, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_line_join(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_line_join(vg, value);
  jsvalue_free_str(ctx, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_miter_limit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_miter_limit(vg, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_save(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_save(vg);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_restore(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_restore(vg);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_h(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_stride(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_int(ctx, obj->stride);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_ratio(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->ratio);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_anti_alias(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_bool(ctx, obj->anti_alias);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_line_width(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->line_width);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_global_alpha(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->global_alpha);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_miter_limit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->miter_limit);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_line_cap(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->line_cap);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_line_join(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->line_join);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_font(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->font);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_font_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->font_size);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_text_align(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->text_align);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_text_baseline(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->text_baseline);
  return jret;
}

jsvalue_t get_WIDGET_PROP_EXEC(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_EXEC);
}

jsvalue_t get_WIDGET_PROP_X(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_X);
}

jsvalue_t get_WIDGET_PROP_Y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_Y);
}

jsvalue_t get_WIDGET_PROP_W(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_W);
}

jsvalue_t get_WIDGET_PROP_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_H);
}

jsvalue_t get_WIDGET_PROP_CANVAS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CANVAS);
}

jsvalue_t get_WIDGET_PROP_LOCALIZE_OPTIONS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LOCALIZE_OPTIONS);
}

jsvalue_t get_WIDGET_PROP_NATIVE_WINDOW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_NATIVE_WINDOW);
}

jsvalue_t get_WIDGET_PROP_HIGHLIGHT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_HIGHLIGHT);
}

jsvalue_t get_WIDGET_PROP_BAR_SIZE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_BAR_SIZE);
}

jsvalue_t get_WIDGET_PROP_OPACITY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_OPACITY);
}

jsvalue_t get_WIDGET_PROP_MIN_W(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MIN_W);
}

jsvalue_t get_WIDGET_PROP_MAX_W(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MAX_W);
}

jsvalue_t get_WIDGET_PROP_CHILDREN_LAYOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CHILDREN_LAYOUT);
}

jsvalue_t get_WIDGET_PROP_LAYOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LAYOUT);
}

jsvalue_t get_WIDGET_PROP_SELF_LAYOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SELF_LAYOUT);
}

jsvalue_t get_WIDGET_PROP_LAYOUT_W(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LAYOUT_W);
}

jsvalue_t get_WIDGET_PROP_LAYOUT_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LAYOUT_H);
}

jsvalue_t get_WIDGET_PROP_VIRTUAL_W(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_VIRTUAL_W);
}

jsvalue_t get_WIDGET_PROP_VIRTUAL_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_VIRTUAL_H);
}

jsvalue_t get_WIDGET_PROP_NAME(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_NAME);
}

jsvalue_t get_WIDGET_PROP_TYPE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_TYPE);
}

jsvalue_t get_WIDGET_PROP_CLOSABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSABLE);
}

jsvalue_t get_WIDGET_PROP_CURSOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CURSOR);
}

jsvalue_t get_WIDGET_PROP_VALUE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_VALUE);
}

jsvalue_t get_WIDGET_PROP_LENGTH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LENGTH);
}

jsvalue_t get_WIDGET_PROP_TEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_TEXT);
}

jsvalue_t get_WIDGET_PROP_TR_TEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_TR_TEXT);
}

jsvalue_t get_WIDGET_PROP_STYLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_STYLE);
}

jsvalue_t get_WIDGET_PROP_ENABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ENABLE);
}

jsvalue_t get_WIDGET_PROP_FEEDBACK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FEEDBACK);
}

jsvalue_t get_WIDGET_PROP_FLOATING(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FLOATING);
}

jsvalue_t get_WIDGET_PROP_MARGIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MARGIN);
}

jsvalue_t get_WIDGET_PROP_SPACING(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SPACING);
}

jsvalue_t get_WIDGET_PROP_LEFT_MARGIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LEFT_MARGIN);
}

jsvalue_t get_WIDGET_PROP_RIGHT_MARGIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_RIGHT_MARGIN);
}

jsvalue_t get_WIDGET_PROP_TOP_MARGIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_TOP_MARGIN);
}

jsvalue_t get_WIDGET_PROP_BOTTOM_MARGIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_BOTTOM_MARGIN);
}

jsvalue_t get_WIDGET_PROP_STEP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_STEP);
}

jsvalue_t get_WIDGET_PROP_VISIBLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_VISIBLE);
}

jsvalue_t get_WIDGET_PROP_SENSITIVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SENSITIVE);
}

jsvalue_t get_WIDGET_PROP_ANIMATION(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ANIMATION);
}

jsvalue_t get_WIDGET_PROP_ANIM_HINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ANIM_HINT);
}

jsvalue_t get_WIDGET_PROP_FULLSCREEN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FULLSCREEN);
}

jsvalue_t get_WIDGET_PROP_OPEN_ANIM_HINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_OPEN_ANIM_HINT);
}

jsvalue_t get_WIDGET_PROP_CLOSE_ANIM_HINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSE_ANIM_HINT);
}

jsvalue_t get_WIDGET_PROP_MIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MIN);
}

jsvalue_t get_WIDGET_PROP_TIPS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_TIPS);
}

jsvalue_t get_WIDGET_PROP_INPUT_TYPE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_INPUT_TYPE);
}

jsvalue_t get_WIDGET_PROP_READONLY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_READONLY);
}

jsvalue_t get_WIDGET_PROP_PASSWORD_VISIBLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_PASSWORD_VISIBLE);
}

jsvalue_t get_WIDGET_PROP_ACTIVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ACTIVE);
}

jsvalue_t get_WIDGET_PROP_VERTICAL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_VERTICAL);
}

jsvalue_t get_WIDGET_PROP_SHOW_TEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SHOW_TEXT);
}

jsvalue_t get_WIDGET_PROP_XOFFSET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_XOFFSET);
}

jsvalue_t get_WIDGET_PROP_YOFFSET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_YOFFSET);
}

jsvalue_t get_WIDGET_PROP_ALIGN_V(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ALIGN_V);
}

jsvalue_t get_WIDGET_PROP_ALIGN_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ALIGN_H);
}

jsvalue_t get_WIDGET_PROP_AUTO_PLAY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_PLAY);
}

jsvalue_t get_WIDGET_PROP_LOOP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LOOP);
}

jsvalue_t get_WIDGET_PROP_AUTO_FIX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_FIX);
}

jsvalue_t get_WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED);
}

jsvalue_t get_WIDGET_PROP_OPEN_IM_WHEN_FOCUSED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_OPEN_IM_WHEN_FOCUSED);
}

jsvalue_t get_WIDGET_PROP_X_MIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_X_MIN);
}

jsvalue_t get_WIDGET_PROP_X_MAX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_X_MAX);
}

jsvalue_t get_WIDGET_PROP_Y_MIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_Y_MIN);
}

jsvalue_t get_WIDGET_PROP_Y_MAX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_Y_MAX);
}

jsvalue_t get_WIDGET_PROP_MAX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MAX);
}

jsvalue_t get_WIDGET_PROP_GRAB_KEYS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_GRAB_KEYS);
}

jsvalue_t get_WIDGET_PROP_ROW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ROW);
}

jsvalue_t get_WIDGET_PROP_STATE_FOR_STYLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_STATE_FOR_STYLE);
}

jsvalue_t get_WIDGET_PROP_THEME(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_THEME);
}

jsvalue_t get_WIDGET_PROP_STAGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_STAGE);
}

jsvalue_t get_WIDGET_PROP_IMAGE_MANAGER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_IMAGE_MANAGER);
}

jsvalue_t get_WIDGET_PROP_ASSETS_MANAGER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ASSETS_MANAGER);
}

jsvalue_t get_WIDGET_PROP_LOCALE_INFO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LOCALE_INFO);
}

jsvalue_t get_WIDGET_PROP_FONT_MANAGER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FONT_MANAGER);
}

jsvalue_t get_WIDGET_PROP_THEME_OBJ(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_THEME_OBJ);
}

jsvalue_t get_WIDGET_PROP_DEFAULT_THEME_OBJ(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_DEFAULT_THEME_OBJ);
}

jsvalue_t get_WIDGET_PROP_ITEM_WIDTH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ITEM_WIDTH);
}

jsvalue_t get_WIDGET_PROP_ITEM_HEIGHT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ITEM_HEIGHT);
}

jsvalue_t get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_DEFAULT_ITEM_HEIGHT);
}

jsvalue_t get_WIDGET_PROP_XSLIDABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_XSLIDABLE);
}

jsvalue_t get_WIDGET_PROP_YSLIDABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_YSLIDABLE);
}

jsvalue_t get_WIDGET_PROP_REPEAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_REPEAT);
}

jsvalue_t get_WIDGET_PROP_ENABLE_LONG_PRESS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ENABLE_LONG_PRESS);
}

jsvalue_t get_WIDGET_PROP_ANIMATABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ANIMATABLE);
}

jsvalue_t get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_HIDE_SCROLL_BAR);
}

jsvalue_t get_WIDGET_PROP_IMAGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_IMAGE);
}

jsvalue_t get_WIDGET_PROP_FORMAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FORMAT);
}

jsvalue_t get_WIDGET_PROP_DRAW_TYPE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_DRAW_TYPE);
}

jsvalue_t get_WIDGET_PROP_SELECTABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECTABLE);
}

jsvalue_t get_WIDGET_PROP_CLICKABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CLICKABLE);
}

jsvalue_t get_WIDGET_PROP_SCALE_X(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SCALE_X);
}

jsvalue_t get_WIDGET_PROP_SCALE_Y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SCALE_Y);
}

jsvalue_t get_WIDGET_PROP_ANCHOR_X(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ANCHOR_X);
}

jsvalue_t get_WIDGET_PROP_ANCHOR_Y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ANCHOR_Y);
}

jsvalue_t get_WIDGET_PROP_ROTATION(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ROTATION);
}

jsvalue_t get_WIDGET_PROP_COMPACT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_COMPACT);
}

jsvalue_t get_WIDGET_PROP_SCROLLABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SCROLLABLE);
}

jsvalue_t get_WIDGET_PROP_ICON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ICON);
}

jsvalue_t get_WIDGET_PROP_OPTIONS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_OPTIONS);
}

jsvalue_t get_WIDGET_PROP_SELECTED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECTED);
}

jsvalue_t get_WIDGET_PROP_CHECKED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CHECKED);
}

jsvalue_t get_WIDGET_PROP_ACTIVE_ICON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ACTIVE_ICON);
}

jsvalue_t get_WIDGET_PROP_LOAD_UI(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LOAD_UI);
}

jsvalue_t get_WIDGET_PROP_OPEN_WINDOW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_OPEN_WINDOW);
}

jsvalue_t get_WIDGET_PROP_SELECTED_INDEX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECTED_INDEX);
}

jsvalue_t get_WIDGET_PROP_CLOSE_WHEN_CLICK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSE_WHEN_CLICK);
}

jsvalue_t get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE);
}

jsvalue_t get_WIDGET_PROP_LINE_GAP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LINE_GAP);
}

jsvalue_t get_WIDGET_PROP_BG_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_BG_COLOR);
}

jsvalue_t get_WIDGET_PROP_BORDER_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_BORDER_COLOR);
}

jsvalue_t get_WIDGET_PROP_DELAY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_DELAY);
}

jsvalue_t get_WIDGET_PROP_IS_KEYBOARD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_IS_KEYBOARD);
}

jsvalue_t get_WIDGET_PROP_FOCUSED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FOCUSED);
}

jsvalue_t get_WIDGET_PROP_FOCUS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FOCUS);
}

jsvalue_t get_WIDGET_PROP_FOCUSABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FOCUSABLE);
}

jsvalue_t get_WIDGET_PROP_WITH_FOCUS_STATE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_WITH_FOCUS_STATE);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_PREV_KEY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_PREV_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_NEXT_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_UP_KEY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_UP_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_DOWN_KEY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_DOWN_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_LEFT_KEY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_LEFT_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY);
}

jsvalue_t get_WIDGET_TYPE_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_NONE);
}

jsvalue_t get_WIDGET_TYPE_WINDOW_MANAGER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_WINDOW_MANAGER);
}

jsvalue_t get_WIDGET_TYPE_NORMAL_WINDOW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_NORMAL_WINDOW);
}

jsvalue_t get_WIDGET_TYPE_OVERLAY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_OVERLAY);
}

jsvalue_t get_WIDGET_TYPE_TOOL_BAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_TOOL_BAR);
}

jsvalue_t get_WIDGET_TYPE_DIALOG(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_DIALOG);
}

jsvalue_t get_WIDGET_TYPE_POPUP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_POPUP);
}

jsvalue_t get_WIDGET_TYPE_SYSTEM_BAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SYSTEM_BAR);
}

jsvalue_t get_WIDGET_TYPE_SYSTEM_BAR_BOTTOM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SYSTEM_BAR_BOTTOM);
}

jsvalue_t get_WIDGET_TYPE_SPRITE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SPRITE);
}

jsvalue_t get_WIDGET_TYPE_KEYBOARD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_KEYBOARD);
}

jsvalue_t get_WIDGET_TYPE_DND(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_DND);
}

jsvalue_t get_WIDGET_TYPE_LABEL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_LABEL);
}

jsvalue_t get_WIDGET_TYPE_BUTTON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_BUTTON);
}

jsvalue_t get_WIDGET_TYPE_IMAGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_IMAGE);
}

jsvalue_t get_WIDGET_TYPE_EDIT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_EDIT);
}

jsvalue_t get_WIDGET_TYPE_PROGRESS_BAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_PROGRESS_BAR);
}

jsvalue_t get_WIDGET_TYPE_GROUP_BOX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_GROUP_BOX);
}

jsvalue_t get_WIDGET_TYPE_CHECK_BUTTON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_CHECK_BUTTON);
}

jsvalue_t get_WIDGET_TYPE_RADIO_BUTTON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_RADIO_BUTTON);
}

jsvalue_t get_WIDGET_TYPE_DIALOG_TITLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_DIALOG_TITLE);
}

jsvalue_t get_WIDGET_TYPE_DIALOG_CLIENT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_DIALOG_CLIENT);
}

jsvalue_t get_WIDGET_TYPE_SLIDER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDER);
}

jsvalue_t get_WIDGET_TYPE_VIEW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_VIEW);
}

jsvalue_t get_WIDGET_TYPE_COMBO_BOX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_COMBO_BOX);
}

jsvalue_t get_WIDGET_TYPE_COMBO_BOX_ITEM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_COMBO_BOX_ITEM);
}

jsvalue_t get_WIDGET_TYPE_SLIDE_VIEW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDE_VIEW);
}

jsvalue_t get_WIDGET_TYPE_SLIDE_INDICATOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDE_INDICATOR);
}

jsvalue_t get_WIDGET_TYPE_SLIDE_INDICATOR_ARC(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDE_INDICATOR_ARC);
}

jsvalue_t get_WIDGET_TYPE_PAGES(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_PAGES);
}

jsvalue_t get_WIDGET_TYPE_TAB_BUTTON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_TAB_BUTTON);
}

jsvalue_t get_WIDGET_TYPE_TAB_CONTROL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_TAB_CONTROL);
}

jsvalue_t get_WIDGET_TYPE_TAB_BUTTON_GROUP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_TAB_BUTTON_GROUP);
}

jsvalue_t get_WIDGET_TYPE_BUTTON_GROUP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_BUTTON_GROUP);
}

jsvalue_t get_WIDGET_TYPE_CANDIDATES(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_CANDIDATES);
}

jsvalue_t get_WIDGET_TYPE_SPIN_BOX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SPIN_BOX);
}

jsvalue_t get_WIDGET_TYPE_DRAGGER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_DRAGGER);
}

jsvalue_t get_WIDGET_TYPE_SCROLL_BAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_BAR);
}

jsvalue_t get_WIDGET_TYPE_SCROLL_BAR_DESKTOP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_BAR_DESKTOP);
}

jsvalue_t get_WIDGET_TYPE_SCROLL_BAR_MOBILE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_BAR_MOBILE);
}

jsvalue_t get_WIDGET_TYPE_SCROLL_VIEW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_VIEW);
}

jsvalue_t get_WIDGET_TYPE_LIST_VIEW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_LIST_VIEW);
}

jsvalue_t get_WIDGET_TYPE_LIST_VIEW_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_LIST_VIEW_H);
}

jsvalue_t get_WIDGET_TYPE_LIST_ITEM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_LIST_ITEM);
}

jsvalue_t get_WIDGET_TYPE_COLOR_PICKER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLOR_PICKER);
}

jsvalue_t get_WIDGET_TYPE_COLOR_COMPONENT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLOR_COMPONENT);
}

jsvalue_t get_WIDGET_TYPE_COLOR_TILE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLOR_TILE);
}

jsvalue_t get_WIDGET_TYPE_CLIP_VIEW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_CLIP_VIEW);
}

jsvalue_t get_WIDGET_TYPE_RICH_TEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_RICH_TEXT);
}

jsvalue_t get_WIDGET_TYPE_APP_BAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_APP_BAR);
}

jsvalue_t get_WIDGET_TYPE_GRID(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_GRID);
}

jsvalue_t get_WIDGET_TYPE_GRID_ITEM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_GRID_ITEM);
}

jsvalue_t get_WIDGET_TYPE_ROW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_ROW);
}

jsvalue_t get_WIDGET_TYPE_COLUMN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLUMN);
}

jsvalue_t get_WIDGET_TYPE_CALIBRATION_WIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_CALIBRATION_WIN);
}

jsvalue_t get_WINDOW_STAGE_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, WINDOW_STAGE_NONE);
}

jsvalue_t get_WINDOW_STAGE_CREATED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, WINDOW_STAGE_CREATED);
}

jsvalue_t get_WINDOW_STAGE_OPENED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, WINDOW_STAGE_OPENED);
}

jsvalue_t get_WINDOW_STAGE_CLOSED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, WINDOW_STAGE_CLOSED);
}

jsvalue_t get_WINDOW_CLOSABLE_YES(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, WINDOW_CLOSABLE_YES);
}

jsvalue_t get_WINDOW_CLOSABLE_NO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, WINDOW_CLOSABLE_NO);
}

jsvalue_t get_WINDOW_CLOSABLE_CONFIRM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, WINDOW_CLOSABLE_CONFIRM);
}

jsvalue_t get_WIDGET_STATE_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_NONE);
}

jsvalue_t get_WIDGET_STATE_NORMAL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_NORMAL);
}

jsvalue_t get_WIDGET_STATE_PRESSED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_PRESSED);
}

jsvalue_t get_WIDGET_STATE_OVER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_OVER);
}

jsvalue_t get_WIDGET_STATE_DISABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_DISABLE);
}

jsvalue_t get_WIDGET_STATE_FOCUSED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_FOCUSED);
}

jsvalue_t get_WIDGET_STATE_CHECKED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_CHECKED);
}

jsvalue_t get_WIDGET_STATE_UNCHECKED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_UNCHECKED);
}

jsvalue_t get_WIDGET_STATE_EMPTY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_EMPTY);
}

jsvalue_t get_WIDGET_STATE_EMPTY_FOCUS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_EMPTY_FOCUS);
}

jsvalue_t get_WIDGET_STATE_ERROR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_ERROR);
}

jsvalue_t get_WIDGET_STATE_SELECTED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_SELECTED);
}

jsvalue_t get_WIDGET_STATE_NORMAL_OF_CHECKED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_NORMAL_OF_CHECKED);
}

jsvalue_t get_WIDGET_STATE_PRESSED_OF_CHECKED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_PRESSED_OF_CHECKED);
}

jsvalue_t get_WIDGET_STATE_OVER_OF_CHECKED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_OVER_OF_CHECKED);
}

jsvalue_t get_WIDGET_STATE_FOCUSED_OF_CHECKED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_FOCUSED_OF_CHECKED);
}

jsvalue_t get_WIDGET_STATE_NORMAL_OF_ACTIVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_NORMAL_OF_ACTIVE);
}

jsvalue_t get_WIDGET_STATE_PRESSED_OF_ACTIVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_PRESSED_OF_ACTIVE);
}

jsvalue_t get_WIDGET_STATE_OVER_OF_ACTIVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_OVER_OF_ACTIVE);
}

jsvalue_t get_WIDGET_STATE_FOCUSED_OF_ACTIVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_FOCUSED_OF_ACTIVE);
}

jsvalue_t wrap_widget_count_children(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)widget_count_children(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_child(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t index = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (widget_t*)widget_get_child(widget, index);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_index_of(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)widget_index_of(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_move(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_move(widget, x, y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_resize(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_resize(widget, w, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_move_resize(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (ret_t)widget_move_resize(widget, x, y, w, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_animate_value_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t duration = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_animate_value_to(widget, value, duration);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_add_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_add_value(widget, delta);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_use_style(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* style = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_use_style(widget, style);
  jsvalue_free_str(ctx, style);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_text_utf8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_text_utf8(widget, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_tr_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_tr_text(widget, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)widget_get_value(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  const wchar_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (const wchar_t*)widget_get_text(widget);

  jret = jsvalue_create_string_from_wstring(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_name(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_theme(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_theme(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_pointer_cursor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* cursor = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_pointer_cursor(widget, cursor);
  jsvalue_free_str(ctx, cursor);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_animation(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* animation = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_animation(widget, animation);
  jsvalue_free_str(ctx, animation);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_create_animator(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* animation = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_create_animator(widget, animation);
  jsvalue_free_str(ctx, animation);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_start_animator(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_start_animator(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_animator_time_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t time_scale = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)widget_set_animator_time_scale(widget, name, time_scale);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_pause_animator(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_pause_animator(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_stop_animator(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_stop_animator(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_destroy_animator(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_destroy_animator(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_enable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t enable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_enable(widget, enable);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_feedback(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t feedback = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_feedback(widget, feedback);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_floating(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t floating = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_floating(widget, floating);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_focused(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focused = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_focused(widget, focused);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_focusable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focusable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_focusable(widget, focusable);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_state(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* state = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_state(widget, state);
  jsvalue_free_str(ctx, state);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_opacity(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint8_t opacity = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_set_opacity(widget, opacity);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_destroy_children(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)widget_destroy_children(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_add_child(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  widget_t* child = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (ret_t)widget_add_child(widget, child);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_remove_child(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  widget_t* child = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (ret_t)widget_remove_child(widget, child);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_insert_child(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  widget_t* child = (widget_t*)jsvalue_get_pointer(ctx, argv[2], "widget_t*");
  ret = (ret_t)widget_insert_child(widget, index, child);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_restack(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_restack(widget, index);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_child(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (widget_t*)widget_child(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_lookup(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (widget_t*)widget_lookup(widget, name, recursive);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_lookup_by_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* type = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (widget_t*)widget_lookup_by_type(widget, type, recursive);
  jsvalue_free_str(ctx, type);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_set_visible(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (ret_t)widget_set_visible(widget, visible, recursive);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_visible_only(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_visible_only(widget, visible);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_sensitive(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t sensitive = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_sensitive(widget, sensitive);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_off(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t id = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_off(widget, id);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_invalidate_force(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  rect_t* r = (rect_t*)jsvalue_get_pointer(ctx, argv[1], "rect_t*");
  ret = (ret_t)widget_invalidate_force(widget, r);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_prop_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* v = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)widget_set_prop_str(widget, name, v);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_prop_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  const char* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* defval = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (const char*)widget_get_prop_str(widget, name, defval);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, defval);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_prop_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t v = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_set_prop_int(widget, name, v);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_prop_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (int32_t)widget_get_prop_int(widget, name, defval);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_prop_bool(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t v = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (ret_t)widget_set_prop_bool(widget, name, v);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_prop_bool(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t defval = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (bool_t)widget_get_prop_bool(widget, name, defval);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_window_opened(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_window_opened(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_window(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_designing_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_designing_window(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_window_manager(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_window_manager(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)widget_get_window(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_get_window_manager(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)widget_get_window_manager(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_get_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  const char* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (const char*)widget_get_type(widget);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_clone(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (widget_t*)widget_clone(widget, parent);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_equal(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  widget_t* other = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (bool_t)widget_equal(widget, other);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)widget_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_destroy(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)widget_destroy(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_unref(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)widget_unref(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_layout(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)widget_layout(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_self_layout(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* params = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_self_layout(widget, params);
  jsvalue_free_str(ctx, params);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_children_layout(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* params = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_children_layout(widget, params);
  jsvalue_free_str(ctx, params);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_self_layout_params(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  const char* w = (const char*)jsvalue_get_utf8_string(ctx, argv[3]);
  const char* h = (const char*)jsvalue_get_utf8_string(ctx, argv[4]);
  ret = (ret_t)widget_set_self_layout_params(widget, x, y, w, h);
  jsvalue_free_str(ctx, x);
  jsvalue_free_str(ctx, y);
  jsvalue_free_str(ctx, w);
  jsvalue_free_str(ctx, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_style_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* state_and_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_set_style_int(widget, state_and_name, value);
  jsvalue_free_str(ctx, state_and_name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_style_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* state_and_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* value = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)widget_set_style_str(widget, state_and_name, value);
  jsvalue_free_str(ctx, state_and_name);
  jsvalue_free_str(ctx, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_style_color(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* state_and_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_set_style_color(widget, state_and_name, value);
  jsvalue_free_str(ctx, state_and_name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->x);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->y);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_h(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_tr_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->tr_text);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_style(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->style);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_animation(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->animation);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_enable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->enable);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_feedback(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->feedback);
  return jret;
}

jsvalue_t wrap_widget_t_set_prop_visible(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->visible = visible;
  return jsvalue_create_int(ctx, RET_OK);
};

jsvalue_t wrap_widget_t_get_prop_visible(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->visible);
  return jret;
}

jsvalue_t wrap_widget_t_set_prop_sensitive(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t sensitive = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->sensitive = sensitive;
  return jsvalue_create_int(ctx, RET_OK);
};

jsvalue_t wrap_widget_t_get_prop_sensitive(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->sensitive);
  return jret;
}

jsvalue_t wrap_widget_t_set_prop_focusable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focusable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->focusable = focusable;
  return jsvalue_create_int(ctx, RET_OK);
};

jsvalue_t wrap_widget_t_get_prop_focusable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->focusable);
  return jret;
}

jsvalue_t wrap_widget_t_set_prop_with_focus_state(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t with_focus_state = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->with_focus_state = with_focus_state;
  return jsvalue_create_int(ctx, RET_OK);
};

jsvalue_t wrap_widget_t_get_prop_with_focus_state(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->with_focus_state);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_floating(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->floating);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_parent(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_pointer(ctx, obj->parent, "widget_t*");
  return jret;
}

jsvalue_t get_RET_OK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_OK);
}

jsvalue_t get_RET_OOM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_OOM);
}

jsvalue_t get_RET_FAIL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_FAIL);
}

jsvalue_t get_RET_NOT_IMPL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_NOT_IMPL);
}

jsvalue_t get_RET_QUIT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_QUIT);
}

jsvalue_t get_RET_FOUND(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_FOUND);
}

jsvalue_t get_RET_BUSY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_BUSY);
}

jsvalue_t get_RET_REMOVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_REMOVE);
}

jsvalue_t get_RET_REPEAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_REPEAT);
}

jsvalue_t get_RET_NOT_FOUND(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_NOT_FOUND);
}

jsvalue_t get_RET_DONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_DONE);
}

jsvalue_t get_RET_STOP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_STOP);
}

jsvalue_t get_RET_SKIP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_SKIP);
}

jsvalue_t get_RET_CONTINUE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_CONTINUE);
}

jsvalue_t get_RET_OBJECT_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_OBJECT_CHANGED);
}

jsvalue_t get_RET_ITEMS_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_ITEMS_CHANGED);
}

jsvalue_t get_RET_BAD_PARAMS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_BAD_PARAMS);
}

jsvalue_t get_RET_TIMEOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_TIMEOUT);
}

jsvalue_t get_RET_CRC(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_CRC);
}

jsvalue_t get_RET_IO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_IO);
}

jsvalue_t get_RET_EOS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_EOS);
}

jsvalue_t wrap_time_now_s(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  uint64_t ret = 0;
  ret = (uint64_t)time_now_s();

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_now_ms(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  uint64_t ret = 0;
  ret = (uint64_t)time_now_ms();

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t get_IMAGE_DRAW_DEFAULT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_DEFAULT);
}

jsvalue_t get_IMAGE_DRAW_CENTER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_CENTER);
}

jsvalue_t get_IMAGE_DRAW_ICON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_ICON);
}

jsvalue_t get_IMAGE_DRAW_SCALE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE);
}

jsvalue_t get_IMAGE_DRAW_SCALE_AUTO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_AUTO);
}

jsvalue_t get_IMAGE_DRAW_SCALE_DOWN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_DOWN);
}

jsvalue_t get_IMAGE_DRAW_SCALE_W(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_W);
}

jsvalue_t get_IMAGE_DRAW_SCALE_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_H);
}

jsvalue_t get_IMAGE_DRAW_REPEAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT);
}

jsvalue_t get_IMAGE_DRAW_REPEAT_X(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT_X);
}

jsvalue_t get_IMAGE_DRAW_REPEAT_Y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT_Y);
}

jsvalue_t get_IMAGE_DRAW_REPEAT_Y_INVERSE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT_Y_INVERSE);
}

jsvalue_t get_IMAGE_DRAW_PATCH9(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH9);
}

jsvalue_t get_IMAGE_DRAW_PATCH3_X(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_X);
}

jsvalue_t get_IMAGE_DRAW_PATCH3_Y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_Y);
}

jsvalue_t get_IMAGE_DRAW_PATCH3_X_SCALE_Y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_X_SCALE_Y);
}

jsvalue_t get_IMAGE_DRAW_PATCH3_Y_SCALE_X(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_Y_SCALE_X);
}

jsvalue_t wrap_canvas_get_width(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  wh_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (wh_t)canvas_get_width(c);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_get_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  wh_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (wh_t)canvas_get_height(c);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_get_clip_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  rect_t* r = (rect_t*)jsvalue_get_pointer(ctx, argv[1], "rect_t*");
  ret = (ret_t)canvas_get_clip_rect(c, r);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_clip_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[1], "const rect_t*");
  ret = (ret_t)canvas_set_clip_rect(c, r);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_clip_rect_ex(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[1], "const rect_t*");
  bool_t translate = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (ret_t)canvas_set_clip_rect_ex(c, r, translate);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_fill_color_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)canvas_set_fill_color_str(c, color);
  jsvalue_free_str(ctx, color);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_text_color_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)canvas_set_text_color_str(c, color);
  jsvalue_free_str(ctx, color);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_stroke_color_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)canvas_set_stroke_color_str(c, color);
  jsvalue_free_str(ctx, color);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_global_alpha(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  uint8_t alpha = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)canvas_set_global_alpha(c, alpha);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_translate(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t dx = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t dy = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)canvas_translate(c, dx, dy);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_untranslate(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t dx = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t dy = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)canvas_untranslate(c, dx, dy);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_vline(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)canvas_draw_vline(c, x, y, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_hline(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)canvas_draw_hline(c, x, y, w);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_fill_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (ret_t)canvas_fill_rect(c, x, y, w, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_stroke_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (ret_t)canvas_stroke_rect(c, x, y, w, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_font(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  font_size_t size = (font_size_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)canvas_set_font(c, name, size);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_measure_utf8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  float_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (float_t)canvas_measure_utf8(c, str);
  jsvalue_free_str(ctx, str);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_utf8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)canvas_draw_utf8(c, str, x, y);
  jsvalue_free_str(ctx, str);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_utf8_in_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[2], "const rect_t*");
  ret = (ret_t)canvas_draw_utf8_in_rect(c, str, r);
  jsvalue_free_str(ctx, str);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_icon(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  xy_t cx = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  xy_t cy = (xy_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)canvas_draw_icon(c, img, cx, cy);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  rect_t* src = (rect_t*)jsvalue_get_pointer(ctx, argv[2], "rect_t*");
  rect_t* dst = (rect_t*)jsvalue_get_pointer(ctx, argv[3], "rect_t*");
  ret = (ret_t)canvas_draw_image(c, img, src, dst);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_image_ex(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_number_value(ctx, argv[2]);
  rect_t* dst = (rect_t*)jsvalue_get_pointer(ctx, argv[3], "rect_t*");
  ret = (ret_t)canvas_draw_image_ex(c, img, draw_type, dst);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_get_vgcanvas(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  vgcanvas_t* ret = NULL;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (vgcanvas_t*)canvas_get_vgcanvas(c);

  jret = jsvalue_create_pointer(ctx, ret, "vgcanvas_t*");
  }
  return jret;
}

jsvalue_t wrap_canvas_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  canvas_t* ret = NULL;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (canvas_t*)canvas_cast(c);

  jret = jsvalue_create_pointer(ctx, ret, "canvas_t*");
  }
  return jret;
}

jsvalue_t wrap_canvas_reset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (ret_t)canvas_reset(c);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_ox(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->ox);
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_oy(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->oy);
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_font_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_string(ctx, obj->font_name);
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_font_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->font_size);
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_global_alpha(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->global_alpha);
  return jret;
}

jsvalue_t wrap_named_value_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  named_value_t* ret = NULL;
  ret = (named_value_t*)named_value_create();

  jret = jsvalue_create_object(ctx, ret, "named_value_t*", (tk_destroy_t)named_value_destroy);
  }
  return jret;
}

jsvalue_t wrap_named_value_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  named_value_t* ret = NULL;
  named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
  ret = (named_value_t*)named_value_cast(nv);

  jret = jsvalue_create_pointer(ctx, ret, "named_value_t*");
  }
  return jret;
}

jsvalue_t wrap_named_value_set_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)named_value_set_name(nv, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_named_value_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
  const value_t* value = (const value_t*)jsvalue_get_pointer(ctx, argv[1], "const value_t*");
  ret = (ret_t)named_value_set_value(nv, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_named_value_get_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  value_t* ret = NULL;
  named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
  ret = (value_t*)named_value_get_value(nv);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_named_value_t_get_prop_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  named_value_t* obj = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

jsvalue_t get_MIME_TYPE_APPLICATION_ENVOY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_ENVOY);
}

jsvalue_t get_MIME_TYPE_APPLICATION_FRACTALS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_FRACTALS);
}

jsvalue_t get_MIME_TYPE_APPLICATION_FUTURESPLASH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_FUTURESPLASH);
}

jsvalue_t get_MIME_TYPE_APPLICATION_HTA(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_HTA);
}

jsvalue_t get_MIME_TYPE_APPLICATION_JSON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_JSON);
}

jsvalue_t get_MIME_TYPE_APPLICATION_UBJSON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_UBJSON);
}

jsvalue_t get_MIME_TYPE_APPLICATION_MAC_BINHEX40(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_MAC_BINHEX40);
}

jsvalue_t get_MIME_TYPE_APPLICATION_MSWORD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_MSWORD);
}

jsvalue_t get_MIME_TYPE_APPLICATION_OCTET_STREAM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_OCTET_STREAM);
}

jsvalue_t get_MIME_TYPE_APPLICATION_ODA(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_ODA);
}

jsvalue_t get_MIME_TYPE_APPLICATION_OLESCRIPT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_OLESCRIPT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_PDF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PDF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_PICS_RULES(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PICS_RULES);
}

jsvalue_t get_MIME_TYPE_APPLICATION_PKCS10(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PKCS10);
}

jsvalue_t get_MIME_TYPE_APPLICATION_PKIX_CRL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PKIX_CRL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_POSTSCRIPT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_POSTSCRIPT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_RTF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_RTF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_EXCEL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_EXCEL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_OUTLOOK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_OUTLOOK);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_PKISECCAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PKISECCAT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_PKISTL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PKISTL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_POWERPOINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_POWERPOINT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_PROJECT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PROJECT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_WORKS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_WORKS);
}

jsvalue_t get_MIME_TYPE_APPLICATION_WINHLP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_WINHLP);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_BCPIO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_BCPIO);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_CDF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_CDF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_COMPRESS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_COMPRESS);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_COMPRESSED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_COMPRESSED);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_CPIO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_CPIO);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_CSH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_CSH);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_DIRECTOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_DIRECTOR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_DVI(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_DVI);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_GTAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_GTAR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_GZIP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_GZIP);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_HDF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_HDF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_IPHONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_IPHONE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_JAVASCRIPT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_JAVASCRIPT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_LATEX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_LATEX);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSACCESS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSACCESS);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSCARDFILE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSCARDFILE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSCLIP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSCLIP);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSDOWNLOAD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSDOWNLOAD);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSMEDIAVIEW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSMEDIAVIEW);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSMETAFILE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSMETAFILE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSMONEY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSMONEY);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSPUBLISHER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSPUBLISHER);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSSCHEDULE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSSCHEDULE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSTERMINAL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSTERMINAL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSWRITE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSWRITE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_NETCDF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_NETCDF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_PERFMON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_PERFMON);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_PKCS12(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_PKCS12);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SH);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SHAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SHAR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_STUFFIT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_STUFFIT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SV4CPIO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SV4CPIO);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SV4CRC(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SV4CRC);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TAR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TCL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TCL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TEX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TEX);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TEXINFO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TEXINFO);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TROFF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TROFF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_USTAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_USTAR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_ZIP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_ZIP);
}

jsvalue_t get_MIME_TYPE_AUDIO_BASIC(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_BASIC);
}

jsvalue_t get_MIME_TYPE_AUDIO_MID(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_MID);
}

jsvalue_t get_MIME_TYPE_AUDIO_MPEG(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_MPEG);
}

jsvalue_t get_MIME_TYPE_AUDIO_X_AIFF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_X_AIFF);
}

jsvalue_t get_MIME_TYPE_AUDIO_X_MPEGURL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_X_MPEGURL);
}

jsvalue_t get_MIME_TYPE_AUDIO_X_WAV(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_X_WAV);
}

jsvalue_t get_MIME_TYPE_IMAGE_BMP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_BMP);
}

jsvalue_t get_MIME_TYPE_IMAGE_CIS_COD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_CIS_COD);
}

jsvalue_t get_MIME_TYPE_IMAGE_GIF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_GIF);
}

jsvalue_t get_MIME_TYPE_IMAGE_IEF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_IEF);
}

jsvalue_t get_MIME_TYPE_IMAGE_JPEG(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_JPEG);
}

jsvalue_t get_MIME_TYPE_IMAGE_PIPEG(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_PIPEG);
}

jsvalue_t get_MIME_TYPE_IMAGE_SVG_XML(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_SVG_XML);
}

jsvalue_t get_MIME_TYPE_IMAGE_TIFF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_TIFF);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_CMX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_CMX);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_ICON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_ICON);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_RGB(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_RGB);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_XBITMAP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_XBITMAP);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_XPIXMAP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_XPIXMAP);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_XWINDOWDUMP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_XWINDOWDUMP);
}

jsvalue_t get_MIME_TYPE_MESSAGE_RFC822(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_MESSAGE_RFC822);
}

jsvalue_t get_MIME_TYPE_TEXT_CSS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_CSS);
}

jsvalue_t get_MIME_TYPE_TEXT_H323(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_H323);
}

jsvalue_t get_MIME_TYPE_TEXT_HTML(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_HTML);
}

jsvalue_t get_MIME_TYPE_TEXT_IULS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_IULS);
}

jsvalue_t get_MIME_TYPE_TEXT_PLAIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_PLAIN);
}

jsvalue_t get_MIME_TYPE_TEXT_RICHTEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_RICHTEXT);
}

jsvalue_t get_MIME_TYPE_TEXT_SCRIPTLET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_SCRIPTLET);
}

jsvalue_t get_MIME_TYPE_TEXT_WEBVIEWHTML(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_WEBVIEWHTML);
}

jsvalue_t get_MIME_TYPE_TEXT_X_COMPONENT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_X_COMPONENT);
}

jsvalue_t get_MIME_TYPE_TEXT_X_SETEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_X_SETEXT);
}

jsvalue_t get_MIME_TYPE_TEXT_X_VCARD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_X_VCARD);
}

jsvalue_t get_MIME_TYPE_VIDEO_MPEG(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_VIDEO_MPEG);
}

jsvalue_t get_MIME_TYPE_VIDEO_QUICKTIME(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_VIDEO_QUICKTIME);
}

jsvalue_t get_MIME_TYPE_VIDEO_X_MSVIDEO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_VIDEO_X_MSVIDEO);
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_AUTO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_AUTO);
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_FILL_DOT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_FILL_DOT);
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_STROKE_DOT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_STROKE_DOT);
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_FILL_RECT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_FILL_RECT);
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_STROKE_RECT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_STROKE_RECT);
}

jsvalue_t get_CLIP_BOARD_DATA_TYPE_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, CLIP_BOARD_DATA_TYPE_NONE);
}

jsvalue_t get_CLIP_BOARD_DATA_TYPE_TEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, CLIP_BOARD_DATA_TYPE_TEXT);
}

jsvalue_t wrap_clip_board_set_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  ret = (ret_t)clip_board_set_text(text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_clip_board_get_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  const char* ret = NULL;
  ret = (const char*)clip_board_get_text();

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t get_EASING_LINEAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_LINEAR);
}

jsvalue_t get_EASING_QUADRATIC_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_QUADRATIC_IN);
}

jsvalue_t get_EASING_QUADRATIC_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_QUADRATIC_OUT);
}

jsvalue_t get_EASING_QUADRATIC_INOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_QUADRATIC_INOUT);
}

jsvalue_t get_EASING_CUBIC_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_CUBIC_IN);
}

jsvalue_t get_EASING_CUBIC_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_CUBIC_OUT);
}

jsvalue_t get_EASING_SIN_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_SIN_IN);
}

jsvalue_t get_EASING_SIN_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_SIN_OUT);
}

jsvalue_t get_EASING_SIN_INOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_SIN_INOUT);
}

jsvalue_t get_EASING_POW_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_POW_IN);
}

jsvalue_t get_EASING_POW_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_POW_OUT);
}

jsvalue_t get_EASING_POW_INOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_POW_INOUT);
}

jsvalue_t get_EASING_CIRCULAR_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_CIRCULAR_IN);
}

jsvalue_t get_EASING_CIRCULAR_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_CIRCULAR_OUT);
}

jsvalue_t get_EASING_CIRCULAR_INOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_CIRCULAR_INOUT);
}

jsvalue_t get_EASING_ELASTIC_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_ELASTIC_IN);
}

jsvalue_t get_EASING_ELASTIC_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_ELASTIC_OUT);
}

jsvalue_t get_EASING_ELASTIC_INOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_ELASTIC_INOUT);
}

jsvalue_t get_EASING_BACK_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_BACK_IN);
}

jsvalue_t get_EASING_BACK_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_BACK_OUT);
}

jsvalue_t get_EASING_BACK_INOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_BACK_INOUT);
}

jsvalue_t get_EASING_BOUNCE_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_BOUNCE_IN);
}

jsvalue_t get_EASING_BOUNCE_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_BOUNCE_OUT);
}

jsvalue_t get_EASING_BOUNCE_INOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_BOUNCE_INOUT);
}

jsvalue_t wrap_date_time_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  date_time_t* ret = NULL;
  ret = (date_time_t*)date_time_create();

  jret = jsvalue_create_object(ctx, ret, "date_time_t*", (tk_destroy_t)date_time_destroy);
  }
  return jret;
}

jsvalue_t wrap_date_time_set(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  date_time_t* dt = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");
  ret = (ret_t)date_time_set(dt);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_second(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->second);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_minute(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->minute);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_hour(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->hour);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_day(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->day);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_wday(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->wday);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_month(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->month);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_year(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->year);
  return jret;
}

jsvalue_t wrap_color_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  color_t* ret = NULL;
  uint8_t r = (uint8_t)jsvalue_get_int_value(ctx, argv[0]);
  uint8_t b = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
  uint8_t g = (uint8_t)jsvalue_get_int_value(ctx, argv[2]);
  uint8_t a = (uint8_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (color_t*)color_create(r, b, g, a);

  jret = jsvalue_create_object(ctx, ret, "color_t*", (tk_destroy_t)color_destroy);
  }
  return jret;
}

jsvalue_t wrap_color_from_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  color_t* ret = NULL;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (color_t*)color_from_str(c, str);
  jsvalue_free_str(ctx, str);

  jret = jsvalue_create_pointer(ctx, ret, "color_t*");
  }
  return jret;
}

jsvalue_t wrap_color_r(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint8_t ret = 0;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (uint8_t)color_r(c);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_g(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint8_t ret = 0;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (uint8_t)color_g(c);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_b(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint8_t ret = 0;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (uint8_t)color_b(c);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_a(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint8_t ret = 0;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (uint8_t)color_a(c);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  color_t* ret = NULL;
  color_t* color = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (color_t*)color_cast(color);

  jret = jsvalue_create_pointer(ctx, ret, "color_t*");
  }
  return jret;
}

jsvalue_t wrap_color_t_set_prop_color(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  color_t* obj = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  uint32_t color = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  obj->color = color;
  return jsvalue_create_int(ctx, RET_OK);
};

jsvalue_t wrap_color_t_get_prop_color(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  color_t* obj = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");

  jret = jsvalue_create_int(ctx, obj->color);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->type);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_subtype(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->subtype);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_is_in_rom(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->is_in_rom);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->size);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_refcount(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->refcount);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

jsvalue_t get_ASSET_TYPE_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_NONE);
}

jsvalue_t get_ASSET_TYPE_FONT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_FONT);
}

jsvalue_t get_ASSET_TYPE_IMAGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_IMAGE);
}

jsvalue_t get_ASSET_TYPE_STYLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_STYLE);
}

jsvalue_t get_ASSET_TYPE_UI(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_UI);
}

jsvalue_t get_ASSET_TYPE_XML(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_XML);
}

jsvalue_t get_ASSET_TYPE_STRINGS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_STRINGS);
}

jsvalue_t get_ASSET_TYPE_SCRIPT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_SCRIPT);
}

jsvalue_t get_ASSET_TYPE_DATA(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_DATA);
}

jsvalue_t wrap_assets_manager(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  assets_manager_t* ret = NULL;
  ret = (assets_manager_t*)assets_manager();

  jret = jsvalue_create_pointer(ctx, ret, "assets_manager_t*");
  }
  return jret;
}

jsvalue_t wrap_assets_manager_ref(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  asset_info_t* ret = NULL;
  assets_manager_t* am = (assets_manager_t*)jsvalue_get_pointer(ctx, argv[0], "assets_manager_t*");
  asset_type_t type = (asset_type_t)jsvalue_get_number_value(ctx, argv[1]);
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (asset_info_t*)assets_manager_ref(am, type, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "asset_info_t*");
  }
  return jret;
}

jsvalue_t wrap_assets_manager_unref(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  assets_manager_t* am = (assets_manager_t*)jsvalue_get_pointer(ctx, argv[0], "assets_manager_t*");
  asset_info_t* info = (asset_info_t*)jsvalue_get_pointer(ctx, argv[1], "asset_info_t*");
  ret = (ret_t)assets_manager_unref(am, info);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_widget_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)canvas_widget_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "canvas_widget_t*");
  }
  return jret;
}

jsvalue_t wrap_canvas_widget_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)canvas_widget_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "canvas_widget_t*");
  }
  return jret;
}

jsvalue_t wrap_time_clock_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)time_clock_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "time_clock_t*");
  }
  return jret;
}

jsvalue_t wrap_time_clock_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)time_clock_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "time_clock_t*");
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_hour(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t hour = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)time_clock_set_hour(widget, hour);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_minute(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t minute = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)time_clock_set_minute(widget, minute);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_second(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t second = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)time_clock_set_second(widget, second);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_hour_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* hour = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_hour_image(widget, hour);
  jsvalue_free_str(ctx, hour);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_minute_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* minute_image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_minute_image(widget, minute_image);
  jsvalue_free_str(ctx, minute_image);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_second_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* second_image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_second_image(widget, second_image);
  jsvalue_free_str(ctx, second_image);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_bg_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* bg_image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_bg_image(widget, bg_image);
  jsvalue_free_str(ctx, bg_image);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_image(widget, image);
  jsvalue_free_str(ctx, image);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_hour_anchor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)time_clock_set_hour_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_minute_anchor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)time_clock_set_minute_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_second_anchor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)time_clock_set_second_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_hour(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_int(ctx, obj->hour);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_minute(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_int(ctx, obj->minute);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_second(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_int(ctx, obj->second);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_bg_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->bg_image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_hour_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->hour_image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_minute_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->minute_image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_second_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->second_image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_hour_anchor_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->hour_anchor_x);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_hour_anchor_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->hour_anchor_y);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_minute_anchor_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->minute_anchor_x);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_minute_anchor_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->minute_anchor_y);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_second_anchor_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->second_anchor_x);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_second_anchor_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->second_anchor_y);
  return jret;
}

jsvalue_t wrap_text_selector_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)text_selector_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "text_selector_t*");
  }
  return jret;
}

jsvalue_t wrap_text_selector_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)text_selector_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "text_selector_t*");
  }
  return jret;
}

jsvalue_t wrap_text_selector_reset_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)text_selector_reset_options(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_count_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)text_selector_count_options(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_append_option(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)text_selector_append_option(widget, value, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* options = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)text_selector_set_options(widget, options);
  jsvalue_free_str(ctx, options);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_range_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t start = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t nr = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  int32_t step = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)text_selector_set_range_options(widget, start, nr, step);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_get_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)text_selector_get_value(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)text_selector_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_get_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  const char* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (const char*)text_selector_get_text(widget);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)text_selector_set_text(widget, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_selected_index(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)text_selector_set_selected_index(widget, index);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_visible_nr(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t visible_nr = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)text_selector_set_visible_nr(widget, visible_nr);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_t_get_prop_visible_nr(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_int(ctx, obj->visible_nr);
  return jret;
}

jsvalue_t wrap_text_selector_t_get_prop_selected_index(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_int(ctx, obj->selected_index);
  return jret;
}

jsvalue_t wrap_text_selector_t_get_prop_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_string(ctx, obj->options);
  return jret;
}

jsvalue_t wrap_prop_change_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  prop_change_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (prop_change_event_t*)prop_change_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "prop_change_event_t*");
  }
  return jret;
}

jsvalue_t wrap_prop_change_event_t_get_prop_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  prop_change_event_t* obj = (prop_change_event_t*)jsvalue_get_pointer(ctx, argv[0], "prop_change_event_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

jsvalue_t wrap_prop_change_event_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  prop_change_event_t* obj = (prop_change_event_t*)jsvalue_get_pointer(ctx, argv[0], "prop_change_event_t*");

  jret = jsvalue_create_pointer(ctx, obj->value, "const value_t*");
  return jret;
}

jsvalue_t wrap_progress_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  progress_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (progress_event_t*)progress_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "progress_event_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_event_t_get_prop_percent(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_event_t* obj = (progress_event_t*)jsvalue_get_pointer(ctx, argv[0], "progress_event_t*");

  jret = jsvalue_create_int(ctx, obj->percent);
  return jret;
}

jsvalue_t wrap_switch_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)switch_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "switch_t*");
  }
  return jret;
}

jsvalue_t wrap_switch_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)switch_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_switch_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)switch_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "switch_t*");
  }
  return jret;
}

jsvalue_t wrap_switch_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  switch_t* obj = (switch_t*)jsvalue_get_pointer(ctx, argv[0], "switch_t*");

  jret = jsvalue_create_bool(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_switch_t_get_prop_max_xoffset_ratio(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  switch_t* obj = (switch_t*)jsvalue_get_pointer(ctx, argv[0], "switch_t*");

  jret = jsvalue_create_number(ctx, obj->max_xoffset_ratio);
  return jret;
}

jsvalue_t wrap_slide_view_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_view_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "slide_view_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_view_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)slide_view_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "slide_view_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_auto_play(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint16_t auto_play = (uint16_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_view_set_auto_play(widget, auto_play);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_active(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_view_set_active(widget, index);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_vertical(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t vertical = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)slide_view_set_vertical(widget, vertical);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_anim_hint(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anim_hint = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)slide_view_set_anim_hint(widget, anim_hint);
  jsvalue_free_str(ctx, anim_hint);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_loop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t loop = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)slide_view_set_loop(widget, loop);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_t_get_prop_vertical(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical);
  return jret;
}

jsvalue_t wrap_slide_view_t_get_prop_auto_play(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_int(ctx, obj->auto_play);
  return jret;
}

jsvalue_t wrap_slide_view_t_get_prop_loop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_bool(ctx, obj->loop);
  return jret;
}

jsvalue_t wrap_slide_view_t_get_prop_anim_hint(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_string(ctx, obj->anim_hint);
  return jret;
}

jsvalue_t wrap_slide_indicator_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_indicator_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_create_linear(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_indicator_create_linear(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_create_arc(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_indicator_create_arc(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)slide_indicator_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_max(widget, max);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_default_paint(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  indicator_default_paint_t default_paint = (indicator_default_paint_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_default_paint(widget, default_paint);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_auto_hide(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint16_t auto_hide = (uint16_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_auto_hide(widget, auto_hide);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_margin(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t margin = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_margin(widget, margin);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_spacing(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t spacing = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_spacing(widget, spacing);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t size = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_size(widget, size);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_anchor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)slide_indicator_set_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_indicated_target(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* indicated_target = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_indicated_target(widget, indicated_target);
  jsvalue_free_str(ctx, indicated_target);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_default_paint(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->default_paint);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_auto_hide(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->auto_hide);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_margin(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->margin);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_spacing(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_number(ctx, obj->spacing);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->size);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_anchor_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_x);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_anchor_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_y);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_indicated_target(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_string(ctx, obj->indicated_target);
  return jret;
}

jsvalue_t wrap_slide_menu_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_menu_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "slide_menu_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_menu_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)slide_menu_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "slide_menu_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_menu_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_menu_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_menu_set_align_v(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  align_v_t align_v = (align_v_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slide_menu_set_align_v(widget, align_v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_menu_set_min_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t min_scale = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slide_menu_set_min_scale(widget, min_scale);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_menu_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_slide_menu_t_get_prop_align_v(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  jret = jsvalue_create_number(ctx, obj->align_v);
  return jret;
}

jsvalue_t wrap_slide_menu_t_get_prop_min_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  jret = jsvalue_create_number(ctx, obj->min_scale);
  return jret;
}

jsvalue_t wrap_scroll_view_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)scroll_view_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "scroll_view_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_view_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)scroll_view_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "scroll_view_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_virtual_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_view_set_virtual_w(widget, w);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_virtual_h(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_view_set_virtual_h(widget, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_xslidable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t xslidable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)scroll_view_set_xslidable(widget, xslidable);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_yslidable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t yslidable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)scroll_view_set_yslidable(widget, yslidable);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_offset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t xoffset = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t yoffset = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)scroll_view_set_offset(widget, xoffset, yoffset);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_speed_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t xspeed_scale = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t yspeed_scale = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)scroll_view_set_speed_scale(widget, xspeed_scale, yspeed_scale);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_scroll_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t xoffset_end = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t yoffset_end = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)scroll_view_scroll_to(widget, xoffset_end, yoffset_end, duration);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_scroll_delta_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t xoffset_delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t yoffset_delta = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)scroll_view_scroll_delta_to(widget, xoffset_delta, yoffset_delta, duration);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_virtual_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->virtual_w);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_virtual_h(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->virtual_h);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_xoffset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->xoffset);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_yoffset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->yoffset);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_xspeed_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_number(ctx, obj->xspeed_scale);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_yspeed_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_number(ctx, obj->yspeed_scale);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_xslidable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_bool(ctx, obj->xslidable);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_yslidable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_bool(ctx, obj->yslidable);
  return jret;
}

jsvalue_t wrap_scroll_bar_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)scroll_bar_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)scroll_bar_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_create_mobile(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)scroll_bar_create_mobile(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_create_desktop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)scroll_bar_create_desktop(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_set_params(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t virtual_size = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t row = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)scroll_bar_set_params(widget, virtual_size, row);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_scroll_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)scroll_bar_scroll_to(widget, value, duration);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_bar_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_add_delta(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_bar_add_delta(widget, delta);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_scroll_delta(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_bar_scroll_delta(widget, delta);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_set_value_only(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_bar_set_value_only(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_is_mobile(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)scroll_bar_is_mobile(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_t_get_prop_virtual_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_int(ctx, obj->virtual_size);
  return jret;
}

jsvalue_t wrap_scroll_bar_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_scroll_bar_t_get_prop_row(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_int(ctx, obj->row);
  return jret;
}

jsvalue_t wrap_scroll_bar_t_get_prop_animatable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_bool(ctx, obj->animatable);
  return jret;
}

jsvalue_t wrap_list_view_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)list_view_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "list_view_t*");
  }
  return jret;
}

jsvalue_t wrap_list_view_set_item_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t item_height = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)list_view_set_item_height(widget, item_height);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_set_default_item_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t default_item_height = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)list_view_set_default_item_height(widget, default_item_height);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_set_auto_hide_scroll_bar(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t auto_hide_scroll_bar = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)list_view_set_auto_hide_scroll_bar(widget, auto_hide_scroll_bar);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)list_view_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "list_view_t*");
  }
  return jret;
}

jsvalue_t wrap_list_view_t_get_prop_item_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  jret = jsvalue_create_int(ctx, obj->item_height);
  return jret;
}

jsvalue_t wrap_list_view_t_get_prop_default_item_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  jret = jsvalue_create_int(ctx, obj->default_item_height);
  return jret;
}

jsvalue_t wrap_list_view_t_get_prop_auto_hide_scroll_bar(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_hide_scroll_bar);
  return jret;
}

jsvalue_t wrap_list_view_h_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)list_view_h_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "list_view_h_t*");
  }
  return jret;
}

jsvalue_t wrap_list_view_h_set_item_width(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t item_width = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)list_view_h_set_item_width(widget, item_width);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_h_set_spacing(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t spacing = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)list_view_h_set_spacing(widget, spacing);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_h_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)list_view_h_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "list_view_h_t*");
  }
  return jret;
}

jsvalue_t wrap_list_view_h_t_get_prop_item_width(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  list_view_h_t* obj = (list_view_h_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_h_t*");

  jret = jsvalue_create_int(ctx, obj->item_width);
  return jret;
}

jsvalue_t wrap_list_view_h_t_get_prop_spacing(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  list_view_h_t* obj = (list_view_h_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_h_t*");

  jret = jsvalue_create_int(ctx, obj->spacing);
  return jret;
}

jsvalue_t wrap_list_item_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)list_item_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "list_item_t*");
  }
  return jret;
}

jsvalue_t wrap_list_item_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)list_item_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "list_item_t*");
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)hscroll_label_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "hscroll_label_t*");
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_lull(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t lull = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_lull(widget, lull);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_duration(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_duration(widget, duration);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_only_focus(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t only_focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_only_focus(widget, only_focus);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_only_parent_focus(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t only_parent_focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_only_parent_focus(widget, only_parent_focus);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_loop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t loop = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_loop(widget, loop);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_yoyo(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t yoyo = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_yoyo(widget, yoyo);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_ellipses(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t ellipses = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_ellipses(widget, ellipses);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_xoffset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t xoffset = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_xoffset(widget, xoffset);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_start(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)hscroll_label_start(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_stop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)hscroll_label_stop(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)hscroll_label_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "hscroll_label_t*");
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_only_focus(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->only_focus);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_only_parent_focus(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->only_parent_focus);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_loop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->loop);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_yoyo(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->yoyo);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_ellipses(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->ellipses);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_lull(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->lull);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_duration(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->duration);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_xoffset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->xoffset);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_text_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->text_w);
  return jret;
}

jsvalue_t wrap_rich_text_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)rich_text_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "rich_text_t*");
  }
  return jret;
}

jsvalue_t wrap_rich_text_set_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)rich_text_set_text(widget, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_rich_text_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)rich_text_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "rich_text_t*");
  }
  return jret;
}

jsvalue_t wrap_rich_text_t_get_prop_line_gap(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  rich_text_t* obj = (rich_text_t*)jsvalue_get_pointer(ctx, argv[0], "rich_text_t*");

  jret = jsvalue_create_int(ctx, obj->line_gap);
  return jret;
}

jsvalue_t wrap_rich_text_t_get_prop_margin(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  rich_text_t* obj = (rich_text_t*)jsvalue_get_pointer(ctx, argv[0], "rich_text_t*");

  jret = jsvalue_create_int(ctx, obj->margin);
  return jret;
}

jsvalue_t wrap_progress_circle_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)progress_circle_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "progress_circle_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_circle_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)progress_circle_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "progress_circle_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_max(widget, max);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_line_width(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t line_width = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_line_width(widget, line_width);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_start_angle(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t start_angle = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_start_angle(widget, start_angle);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_unit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* unit = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_unit(widget, unit);
  jsvalue_free_str(ctx, unit);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_show_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t show_text = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_show_text(widget, show_text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_counter_clock_wise(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t counter_clock_wise = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_counter_clock_wise(widget, counter_clock_wise);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_int(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_start_angle(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_int(ctx, obj->start_angle);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_line_width(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_int(ctx, obj->line_width);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_unit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_string(ctx, obj->unit);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_counter_clock_wise(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_bool(ctx, obj->counter_clock_wise);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_show_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_bool(ctx, obj->show_text);
  return jret;
}

jsvalue_t wrap_mledit_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)mledit_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "mledit_t*");
  }
  return jret;
}

jsvalue_t wrap_mledit_set_readonly(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t readonly = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_readonly(widget, readonly);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_focus(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_focus(widget, focus);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_wrap_word(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t wrap_word = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_wrap_word(widget, wrap_word);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_max_lines(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t max_lines = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_max_lines(widget, max_lines);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_input_tips(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* tips = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)mledit_set_input_tips(widget, tips);
  jsvalue_free_str(ctx, tips);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_cursor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t cursor = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_cursor(widget, cursor);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_scroll_line(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t scroll_line = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_scroll_line(widget, scroll_line);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)mledit_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "mledit_t*");
  }
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_readonly(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_bool(ctx, obj->readonly);
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_tips(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_string(ctx, obj->tips);
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_wrap_word(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_bool(ctx, obj->wrap_word);
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_max_lines(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_int(ctx, obj->max_lines);
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_scroll_line(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_number(ctx, obj->scroll_line);
  return jret;
}

jsvalue_t wrap_line_number_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)line_number_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "line_number_t*");
  }
  return jret;
}

jsvalue_t wrap_line_number_set_top_margin(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t top_margin = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)line_number_set_top_margin(widget, top_margin);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_line_number_set_bottom_margin(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t bottom_margin = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)line_number_set_bottom_margin(widget, bottom_margin);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_line_number_set_line_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t line_height = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)line_number_set_line_height(widget, line_height);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_line_number_set_yoffset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t yoffset = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)line_number_set_yoffset(widget, yoffset);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_line_number_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)line_number_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "line_number_t*");
  }
  return jret;
}

jsvalue_t wrap_image_value_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)image_value_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "image_value_t*");
  }
  return jret;
}

jsvalue_t wrap_image_value_set_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_value_set_image(widget, image);
  jsvalue_free_str(ctx, image);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_value_set_format(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_value_set_format(widget, format);
  jsvalue_free_str(ctx, format);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_value_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)image_value_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_value_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)image_value_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "image_value_t*");
  }
  return jret;
}

jsvalue_t wrap_image_value_t_get_prop_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_image_value_t_get_prop_format(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_string(ctx, obj->format);
  return jret;
}

jsvalue_t wrap_image_value_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_image_animation_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)image_animation_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "image_animation_t*");
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_loop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t loop = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_loop(widget, loop);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_animation_set_image(widget, image);
  jsvalue_free_str(ctx, image);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_interval(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t interval = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_interval(widget, interval);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_delay(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t delay = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_delay(widget, delay);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_auto_play(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t auto_play = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_auto_play(widget, auto_play);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_sequence(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* sequence = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_animation_set_sequence(widget, sequence);
  jsvalue_free_str(ctx, sequence);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_range_sequence(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t start_index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t end_index = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)image_animation_set_range_sequence(widget, start_index, end_index);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_play(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)image_animation_play(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_stop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)image_animation_stop(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_pause(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)image_animation_pause(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_next(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)image_animation_next(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_format(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_animation_set_format(widget, format);
  jsvalue_free_str(ctx, format);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_unload_after_paint(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t unload_after_paint = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_unload_after_paint(widget, unload_after_paint);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)image_animation_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "image_animation_t*");
  }
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_sequence(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_string(ctx, obj->sequence);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_start_index(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->start_index);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_end_index(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->end_index);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_loop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_bool(ctx, obj->loop);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_auto_play(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_play);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_unload_after_paint(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_bool(ctx, obj->unload_after_paint);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_format(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_string(ctx, obj->format);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_interval(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->interval);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_delay(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->delay);
  return jret;
}

jsvalue_t wrap_guage_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)guage_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "guage_t*");
  }
  return jret;
}

jsvalue_t wrap_guage_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)guage_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "guage_t*");
  }
  return jret;
}

jsvalue_t wrap_guage_set_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)guage_set_image(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_set_draw_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)guage_set_draw_type(widget, draw_type);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_t_get_prop_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  guage_t* obj = (guage_t*)jsvalue_get_pointer(ctx, argv[0], "guage_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_guage_t_get_prop_draw_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  guage_t* obj = (guage_t*)jsvalue_get_pointer(ctx, argv[0], "guage_t*");

  jret = jsvalue_create_number(ctx, obj->draw_type);
  return jret;
}

jsvalue_t wrap_guage_pointer_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)guage_pointer_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "guage_pointer_t*");
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)guage_pointer_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "guage_pointer_t*");
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_set_angle(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t angle = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)guage_pointer_set_angle(widget, angle);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_set_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)guage_pointer_set_image(widget, image);
  jsvalue_free_str(ctx, image);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_set_anchor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)guage_pointer_set_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_t_get_prop_angle(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = jsvalue_create_int(ctx, obj->angle);
  return jret;
}

jsvalue_t wrap_guage_pointer_t_get_prop_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_guage_pointer_t_get_prop_anchor_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_x);
  return jret;
}

jsvalue_t wrap_guage_pointer_t_get_prop_anchor_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_y);
  return jret;
}

jsvalue_t wrap_draggable_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)draggable_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "draggable_t*");
  }
  return jret;
}

jsvalue_t wrap_draggable_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)draggable_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "draggable_t*");
  }
  return jret;
}

jsvalue_t wrap_draggable_set_top(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t top = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_top(widget, top);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_bottom(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t bottom = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_bottom(widget, bottom);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_left(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t left = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_left(widget, left);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_right(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t right = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_right(widget, right);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_vertical_only(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t vertical_only = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_vertical_only(widget, vertical_only);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_horizontal_only(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t horizontal_only = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_horizontal_only(widget, horizontal_only);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_drag_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t drag_window = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_drag_window(widget, drag_window);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_top(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->top);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_bottom(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->bottom);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_left(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->left);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_right(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->right);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_vertical_only(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical_only);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_horizontal_only(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_bool(ctx, obj->horizontal_only);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_drag_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_bool(ctx, obj->drag_window);
  return jret;
}

jsvalue_t wrap_color_picker_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)color_picker_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "color_picker_t*");
  }
  return jret;
}

jsvalue_t wrap_color_picker_set_color(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)color_picker_set_color(widget, color);
  jsvalue_free_str(ctx, color);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_picker_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)color_picker_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "color_picker_t*");
  }
  return jret;
}

jsvalue_t wrap_color_picker_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  color_picker_t* obj = (color_picker_t*)jsvalue_get_pointer(ctx, argv[0], "color_picker_t*");

  jret = jsvalue_create_string(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_color_component_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)color_component_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "color_component_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  widget_t* ret = NULL;
  ret = (widget_t*)window_manager();

  jret = jsvalue_create_pointer(ctx, ret, "window_manager_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_manager_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "window_manager_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_top_main_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_manager_get_top_main_window(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_top_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_manager_get_top_window(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_prev_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_manager_get_prev_window(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_pointer_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  xy_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (xy_t)window_manager_get_pointer_x(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_pointer_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  xy_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (xy_t)window_manager_get_pointer_y(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_pointer_pressed(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)window_manager_get_pointer_pressed(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_set_show_fps(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t show_fps = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)window_manager_set_show_fps(widget, show_fps);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_set_screen_saver_time(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t screen_saver_time = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)window_manager_set_screen_saver_time(widget, screen_saver_time);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_set_cursor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* cursor = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)window_manager_set_cursor(widget, cursor);
  jsvalue_free_str(ctx, cursor);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_back(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)window_manager_back(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_back_to_home(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)window_manager_back_to_home(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_back_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* target = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)window_manager_back_to(widget, target);
  jsvalue_free_str(ctx, target);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_base_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_base_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "window_base_t*");
  }
  return jret;
}

jsvalue_t wrap_window_base_t_get_prop_theme(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->theme);
  return jret;
}

jsvalue_t wrap_window_base_t_get_prop_closable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_number(ctx, obj->closable);
  return jret;
}

jsvalue_t wrap_style_mutable_set_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)style_mutable_set_name(s, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_mutable_set_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* state = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  uint32_t val = (uint32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)style_mutable_set_int(s, state, name, val);
  jsvalue_free_str(ctx, state);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_mutable_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  style_t* ret = NULL;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  ret = (style_t*)style_mutable_cast(s);

  jret = jsvalue_create_pointer(ctx, ret, "style_mutable_t*");
  }
  return jret;
}

jsvalue_t wrap_style_mutable_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  style_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  style_t* default_style = (style_t*)jsvalue_get_pointer(ctx, argv[1], "style_t*");
  ret = (style_t*)style_mutable_create(widget, default_style);

  jret = jsvalue_create_pointer(ctx, ret, "style_mutable_t*");
  }
  return jret;
}

jsvalue_t wrap_style_mutable_t_get_prop_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  style_mutable_t* obj = (style_mutable_t*)jsvalue_get_pointer(ctx, argv[0], "style_mutable_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

jsvalue_t wrap_image_base_set_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_base_set_image(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_rotation(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t rotation = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)image_base_set_rotation(widget, rotation);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t scale_x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t scale_y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)image_base_set_scale(widget, scale_x, scale_y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_anchor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t anchor_x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t anchor_y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)image_base_set_anchor(widget, anchor_x, anchor_y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_selected(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t selected = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_base_set_selected(widget, selected);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_selectable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t selectable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_base_set_selectable(widget, selectable);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_clickable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t clickable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_base_set_clickable(widget, clickable);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)image_base_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "image_base_t*");
  }
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_anchor_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_x);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_anchor_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_y);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_scale_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->scale_x);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_scale_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->scale_y);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_rotation(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->rotation);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_clickable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_bool(ctx, obj->clickable);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_selectable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_bool(ctx, obj->selectable);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_selected(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_bool(ctx, obj->selected);
  return jret;
}

jsvalue_t wrap_window_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  window_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (window_event_t*)window_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "window_event_t*");
  }
  return jret;
}

jsvalue_t wrap_window_event_t_get_prop_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  window_event_t* obj = (window_event_t*)jsvalue_get_pointer(ctx, argv[0], "window_event_t*");

  jret = jsvalue_create_pointer(ctx, obj->window, "widget_t*");
  return jret;
}

jsvalue_t wrap_paint_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  paint_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (paint_event_t*)paint_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "paint_event_t*");
  }
  return jret;
}

jsvalue_t wrap_paint_event_t_get_prop_c(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  paint_event_t* obj = (paint_event_t*)jsvalue_get_pointer(ctx, argv[0], "paint_event_t*");

  jret = jsvalue_create_pointer(ctx, obj->c, "canvas_t*");
  return jret;
}

jsvalue_t wrap_key_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  key_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (key_event_t*)key_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "key_event_t*");
  }
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_key(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_int(ctx, obj->key);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_alt(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->alt);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_lalt(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->lalt);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_ralt(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ralt);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_ctrl(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ctrl);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_lctrl(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->lctrl);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_rctrl(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->rctrl);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_shift(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->shift);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_lshift(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->lshift);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_rshift(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->rshift);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_cmd(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->cmd);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_menu(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->menu);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_capslock(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->capslock);
  return jret;
}

jsvalue_t wrap_pointer_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  pointer_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (pointer_event_t*)pointer_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "pointer_event_t*");
  }
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_int(ctx, obj->x);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_int(ctx, obj->y);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_button(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_int(ctx, obj->button);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_pressed(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->pressed);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_alt(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->alt);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_ctrl(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ctrl);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_cmd(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->cmd);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_menu(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->menu);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_shift(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->shift);
  return jret;
}

jsvalue_t wrap_orientation_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  orientation_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (orientation_event_t*)orientation_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "orientation_event_t*");
  }
  return jret;
}

jsvalue_t wrap_orientation_event_t_get_prop_orientation(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  orientation_event_t* obj = (orientation_event_t*)jsvalue_get_pointer(ctx, argv[0], "orientation_event_t*");

  jret = jsvalue_create_int(ctx, obj->orientation);
  return jret;
}

jsvalue_t wrap_wheel_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  wheel_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (wheel_event_t*)wheel_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "wheel_event_t*");
  }
  return jret;
}

jsvalue_t wrap_wheel_event_t_get_prop_dy(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_int(ctx, obj->dy);
  return jret;
}

jsvalue_t wrap_wheel_event_t_get_prop_alt(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_bool(ctx, obj->alt);
  return jret;
}

jsvalue_t wrap_wheel_event_t_get_prop_ctrl(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ctrl);
  return jret;
}

jsvalue_t wrap_wheel_event_t_get_prop_shift(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_bool(ctx, obj->shift);
  return jret;
}

jsvalue_t wrap_app_bar_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)app_bar_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "app_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_app_bar_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)app_bar_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "app_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_button_group_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)button_group_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "button_group_t*");
  }
  return jret;
}

jsvalue_t wrap_button_group_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)button_group_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "button_group_t*");
  }
  return jret;
}

jsvalue_t wrap_button_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)button_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "button_t*");
  }
  return jret;
}

jsvalue_t wrap_button_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)button_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "button_t*");
  }
  return jret;
}

jsvalue_t wrap_button_set_repeat(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t repeat = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)button_set_repeat(widget, repeat);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_button_set_enable_long_press(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t enable_long_press = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)button_set_enable_long_press(widget, enable_long_press);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_button_t_get_prop_repeat(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  button_t* obj = (button_t*)jsvalue_get_pointer(ctx, argv[0], "button_t*");

  jret = jsvalue_create_int(ctx, obj->repeat);
  return jret;
}

jsvalue_t wrap_button_t_get_prop_enable_long_press(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  button_t* obj = (button_t*)jsvalue_get_pointer(ctx, argv[0], "button_t*");

  jret = jsvalue_create_bool(ctx, obj->enable_long_press);
  return jret;
}

jsvalue_t wrap_check_button_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)check_button_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "check_button_t*");
  }
  return jret;
}

jsvalue_t wrap_check_button_create_radio(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)check_button_create_radio(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "check_button_t*");
  }
  return jret;
}

jsvalue_t wrap_check_button_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)check_button_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_check_button_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)check_button_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "check_button_t*");
  }
  return jret;
}

jsvalue_t wrap_check_button_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  check_button_t* obj = (check_button_t*)jsvalue_get_pointer(ctx, argv[0], "check_button_t*");

  jret = jsvalue_create_bool(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_clip_view_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)clip_view_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "clip_view_t*");
  }
  return jret;
}

jsvalue_t wrap_clip_view_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)clip_view_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "clip_view_t*");
  }
  return jret;
}

jsvalue_t wrap_color_tile_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)color_tile_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "color_tile_t*");
  }
  return jret;
}

jsvalue_t wrap_color_tile_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)color_tile_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "color_tile_t*");
  }
  return jret;
}

jsvalue_t wrap_color_tile_set_bg_color(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)color_tile_set_bg_color(widget, color);
  jsvalue_free_str(ctx, color);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_tile_t_get_prop_bg_color(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  color_tile_t* obj = (color_tile_t*)jsvalue_get_pointer(ctx, argv[0], "color_tile_t*");

  jret = jsvalue_create_string(ctx, obj->bg_color);
  return jret;
}

jsvalue_t wrap_color_tile_t_get_prop_border_color(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  color_tile_t* obj = (color_tile_t*)jsvalue_get_pointer(ctx, argv[0], "color_tile_t*");

  jret = jsvalue_create_string(ctx, obj->border_color);
  return jret;
}

jsvalue_t wrap_column_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)column_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "column_t*");
  }
  return jret;
}

jsvalue_t wrap_column_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)column_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "column_t*");
  }
  return jret;
}

jsvalue_t wrap_combo_box_item_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)combo_box_item_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "combo_box_item_t*");
  }
  return jret;
}

jsvalue_t wrap_combo_box_item_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)combo_box_item_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "combo_box_item_t*");
  }
  return jret;
}

jsvalue_t wrap_combo_box_item_set_checked(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t checked = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)combo_box_item_set_checked(widget, checked);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_item_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)combo_box_item_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_item_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_item_t* obj = (combo_box_item_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_item_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_combo_box_item_t_get_prop_checked(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_item_t* obj = (combo_box_item_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_item_t*");

  jret = jsvalue_create_bool(ctx, obj->checked);
  return jret;
}

jsvalue_t wrap_combo_box_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)combo_box_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "combo_box_t*");
  }
  return jret;
}

jsvalue_t wrap_combo_box_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)combo_box_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "combo_box_t*");
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_open_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* open_window = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)combo_box_set_open_window(widget, open_window);
  jsvalue_free_str(ctx, open_window);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_reset_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)combo_box_reset_options(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_count_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)combo_box_count_options(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_selected_index(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)combo_box_set_selected_index(widget, index);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_localize_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t localize_options = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)combo_box_set_localize_options(widget, localize_options);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)combo_box_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_item_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t item_height = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)combo_box_set_item_height(widget, item_height);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_append_option(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)combo_box_append_option(widget, value, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* options = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)combo_box_set_options(widget, options);
  jsvalue_free_str(ctx, options);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_get_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)combo_box_get_value(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_get_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  const char* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (const char*)combo_box_get_text(widget);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_open_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_string(ctx, obj->open_window);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_selected_index(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_int(ctx, obj->selected_index);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_localize_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_bool(ctx, obj->localize_options);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_string(ctx, obj->options);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_item_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_int(ctx, obj->item_height);
  return jret;
}

jsvalue_t wrap_dialog_client_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dialog_client_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_client_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_client_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_client_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_client_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_title_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dialog_title_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_title_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_title_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_title_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_title_t*");
  }
  return jret;
}

jsvalue_t wrap_digit_clock_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)digit_clock_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "digit_clock_t*");
  }
  return jret;
}

jsvalue_t wrap_digit_clock_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)digit_clock_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "digit_clock_t*");
  }
  return jret;
}

jsvalue_t wrap_digit_clock_set_format(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)digit_clock_set_format(widget, format);
  jsvalue_free_str(ctx, format);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_digit_clock_t_get_prop_format(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  digit_clock_t* obj = (digit_clock_t*)jsvalue_get_pointer(ctx, argv[0], "digit_clock_t*");

  jret = jsvalue_create_string(ctx, obj->format);
  return jret;
}

jsvalue_t wrap_dragger_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dragger_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "dragger_t*");
  }
  return jret;
}

jsvalue_t wrap_dragger_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dragger_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "dragger_t*");
  }
  return jret;
}

jsvalue_t wrap_dragger_set_range(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x_min = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y_min = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  xy_t x_max = (xy_t)jsvalue_get_int_value(ctx, argv[3]);
  xy_t y_max = (xy_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (ret_t)dragger_set_range(widget, x_min, y_min, x_max, y_max);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dragger_t_get_prop_x_min(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->x_min);
  return jret;
}

jsvalue_t wrap_dragger_t_get_prop_y_min(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->y_min);
  return jret;
}

jsvalue_t wrap_dragger_t_get_prop_x_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->x_max);
  return jret;
}

jsvalue_t wrap_dragger_t_get_prop_y_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->y_max);
  return jret;
}

jsvalue_t wrap_edit_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)edit_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "edit_t*");
  }
  return jret;
}

jsvalue_t wrap_edit_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)edit_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "edit_t*");
  }
  return jret;
}

jsvalue_t wrap_edit_get_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)edit_get_int(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_get_double(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  double ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (double)edit_get_double(widget);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)edit_set_int(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_double(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double value = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)edit_set_double(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_text_limit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t min = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)edit_set_text_limit(widget, min, max);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_int_limit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t min = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t max = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  uint32_t step = (uint32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)edit_set_int_limit(widget, min, max, step);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_float_limit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double min = (double)jsvalue_get_number_value(ctx, argv[1]);
  double max = (double)jsvalue_get_number_value(ctx, argv[2]);
  double step = (double)jsvalue_get_number_value(ctx, argv[3]);
  ret = (ret_t)edit_set_float_limit(widget, min, max, step);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_readonly(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t readonly = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_readonly(widget, readonly);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_auto_fix(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t auto_fix = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_auto_fix(widget, auto_fix);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_select_none_when_focused(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t select_none_when_focused = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_select_none_when_focused(widget, select_none_when_focused);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_open_im_when_focused(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t open_im_when_focused = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_open_im_when_focused(widget, open_im_when_focused);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_input_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  input_type_t type = (input_type_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)edit_set_input_type(widget, type);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_input_tips(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* tips = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)edit_set_input_tips(widget, tips);
  jsvalue_free_str(ctx, tips);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_password_visible(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t password_visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_password_visible(widget, password_visible);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_focus(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_focus(widget, focus);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_cursor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t cursor = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)edit_set_cursor(widget, cursor);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_readonly(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->readonly);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_password_visible(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->password_visible);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_auto_fix(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_fix);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_select_none_when_focused(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->select_none_when_focused);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_open_im_when_focused(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->open_im_when_focused);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_tips(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_string(ctx, obj->tips);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_input_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->input_type);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_min(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->min);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_step(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->step);
  return jret;
}

jsvalue_t wrap_grid_item_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)grid_item_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "grid_item_t*");
  }
  return jret;
}

jsvalue_t wrap_grid_item_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)grid_item_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "grid_item_t*");
  }
  return jret;
}

jsvalue_t wrap_grid_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)grid_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "grid_t*");
  }
  return jret;
}

jsvalue_t wrap_grid_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)grid_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "grid_t*");
  }
  return jret;
}

jsvalue_t wrap_group_box_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)group_box_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "group_box_t*");
  }
  return jret;
}

jsvalue_t wrap_group_box_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)group_box_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "group_box_t*");
  }
  return jret;
}

jsvalue_t wrap_label_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)label_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "label_t*");
  }
  return jret;
}

jsvalue_t wrap_label_set_length(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t length = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)label_set_length(widget, length);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_label_resize_to_content(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t min_w = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t max_w = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  uint32_t min_h = (uint32_t)jsvalue_get_int_value(ctx, argv[3]);
  uint32_t max_h = (uint32_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (ret_t)label_resize_to_content(widget, min_w, max_w, min_h, max_h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_label_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)label_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "label_t*");
  }
  return jret;
}

jsvalue_t wrap_label_t_get_prop_length(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  label_t* obj = (label_t*)jsvalue_get_pointer(ctx, argv[0], "label_t*");

  jret = jsvalue_create_int(ctx, obj->length);
  return jret;
}

jsvalue_t wrap_overlay_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)overlay_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "overlay_t*");
  }
  return jret;
}

jsvalue_t wrap_overlay_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)overlay_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "overlay_t*");
  }
  return jret;
}

jsvalue_t wrap_pages_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)pages_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "pages_t*");
  }
  return jret;
}

jsvalue_t wrap_pages_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)pages_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "pages_t*");
  }
  return jret;
}

jsvalue_t wrap_pages_set_active(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)pages_set_active(widget, index);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_pages_set_active_by_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)pages_set_active_by_name(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_pages_t_get_prop_active(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pages_t* obj = (pages_t*)jsvalue_get_pointer(ctx, argv[0], "pages_t*");

  jret = jsvalue_create_int(ctx, obj->active);
  return jret;
}

jsvalue_t wrap_progress_bar_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)progress_bar_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "progress_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_bar_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)progress_bar_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "progress_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_bar_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)progress_bar_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_set_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)progress_bar_set_max(widget, max);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_set_vertical(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t vertical = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)progress_bar_set_vertical(widget, vertical);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_set_show_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t show_text = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)progress_bar_set_show_text(widget, show_text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_get_percent(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (uint32_t)progress_bar_get_percent(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_progress_bar_t_get_prop_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_number(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_progress_bar_t_get_prop_vertical(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical);
  return jret;
}

jsvalue_t wrap_progress_bar_t_get_prop_show_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_bool(ctx, obj->show_text);
  return jret;
}

jsvalue_t wrap_row_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)row_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "row_t*");
  }
  return jret;
}

jsvalue_t wrap_row_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)row_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "row_t*");
  }
  return jret;
}

jsvalue_t wrap_slider_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slider_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "slider_t*");
  }
  return jret;
}

jsvalue_t wrap_slider_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)slider_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "slider_t*");
  }
  return jret;
}

jsvalue_t wrap_slider_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double value = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slider_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_min(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double min = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slider_set_min(widget, min);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double max = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slider_set_max(widget, max);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_step(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double step = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slider_set_step(widget, step);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_bar_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t bar_size = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slider_set_bar_size(widget, bar_size);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_vertical(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t vertical = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)slider_set_vertical(widget, vertical);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_min(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->min);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_step(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->step);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_vertical(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_bar_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_int(ctx, obj->bar_size);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_dragger_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_int(ctx, obj->dragger_size);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_dragger_adapt_to_icon(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_bool(ctx, obj->dragger_adapt_to_icon);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_slide_with_bar(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_bool(ctx, obj->slide_with_bar);
  return jret;
}

jsvalue_t wrap_tab_button_group_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)tab_button_group_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "tab_button_group_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_button_group_set_compact(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t compact = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)tab_button_group_set_compact(widget, compact);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_group_set_scrollable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t scrollable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)tab_button_group_set_scrollable(widget, scrollable);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_group_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)tab_button_group_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "tab_button_group_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_button_group_t_get_prop_compact(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  tab_button_group_t* obj = (tab_button_group_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_group_t*");

  jret = jsvalue_create_bool(ctx, obj->compact);
  return jret;
}

jsvalue_t wrap_tab_button_group_t_get_prop_scrollable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  tab_button_group_t* obj = (tab_button_group_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_group_t*");

  jret = jsvalue_create_bool(ctx, obj->scrollable);
  return jret;
}

jsvalue_t wrap_tab_button_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)tab_button_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "tab_button_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_button_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)tab_button_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "tab_button_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_button_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)tab_button_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_set_icon(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)tab_button_set_icon(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_set_active_icon(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)tab_button_set_active_icon(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_set_load_ui(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)tab_button_set_load_ui(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = jsvalue_create_bool(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_tab_button_t_get_prop_load_ui(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = jsvalue_create_string(ctx, obj->load_ui);
  return jret;
}

jsvalue_t wrap_tab_button_t_get_prop_active_icon(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = jsvalue_create_string(ctx, obj->active_icon);
  return jret;
}

jsvalue_t wrap_tab_button_t_get_prop_icon(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = jsvalue_create_string(ctx, obj->icon);
  return jret;
}

jsvalue_t wrap_tab_control_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)tab_control_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "tab_control_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_control_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)tab_control_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "tab_control_t*");
  }
  return jret;
}

jsvalue_t wrap_view_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)view_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "view_t*");
  }
  return jret;
}

jsvalue_t wrap_view_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)view_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "view_t*");
  }
  return jret;
}

jsvalue_t wrap_idle_info_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  idle_info_t* ret = NULL;
  idle_info_t* idle = (idle_info_t*)jsvalue_get_pointer(ctx, argv[0], "idle_info_t*");
  ret = (idle_info_t*)idle_info_cast(idle);

  jret = jsvalue_create_pointer(ctx, ret, "idle_info_t*");
  }
  return jret;
}

jsvalue_t wrap_idle_info_t_get_prop_ctx(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  idle_info_t* obj = (idle_info_t*)jsvalue_get_pointer(ctx, argv[0], "idle_info_t*");

  jret = jsvalue_create_pointer(ctx, obj->ctx, "void*");
  return jret;
}

jsvalue_t wrap_idle_info_t_get_prop_id(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  idle_info_t* obj = (idle_info_t*)jsvalue_get_pointer(ctx, argv[0], "idle_info_t*");

  jret = jsvalue_create_int(ctx, obj->id);
  return jret;
}

jsvalue_t wrap_object_array_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  object_t* ret = NULL;
  ret = (object_t*)object_array_create();

  jret = jsvalue_create_object(ctx, ret, "object_array_t*", (tk_destroy_t)object_array_unref);
  }
  return jret;
}

jsvalue_t wrap_object_array_clear_props(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (ret_t)object_array_clear_props(obj);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_array_t_get_prop_props_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  object_array_t* obj = (object_array_t*)jsvalue_get_pointer(ctx, argv[0], "object_array_t*");

  jret = jsvalue_create_int(ctx, obj->props_size);
  return jret;
}

jsvalue_t wrap_gif_image_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)gif_image_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "gif_image_t*");
  }
  return jret;
}

jsvalue_t wrap_gif_image_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)gif_image_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "gif_image_t*");
  }
  return jret;
}

jsvalue_t wrap_object_default_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  object_t* ret = NULL;
  ret = (object_t*)object_default_create();

  jret = jsvalue_create_object(ctx, ret, "object_default_t*", (tk_destroy_t)object_default_unref);
  }
  return jret;
}

jsvalue_t wrap_object_default_clear_props(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (ret_t)object_default_clear_props(obj);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_default_t_get_prop_props_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  object_default_t* obj = (object_default_t*)jsvalue_get_pointer(ctx, argv[0], "object_default_t*");

  jret = jsvalue_create_int(ctx, obj->props_size);
  return jret;
}

jsvalue_t wrap_image_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)image_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "image_t*");
  }
  return jret;
}

jsvalue_t wrap_image_set_draw_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)image_set_draw_type(widget, draw_type);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)image_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "image_t*");
  }
  return jret;
}

jsvalue_t wrap_image_t_get_prop_draw_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_t* obj = (image_t*)jsvalue_get_pointer(ctx, argv[0], "image_t*");

  jret = jsvalue_create_number(ctx, obj->draw_type);
  return jret;
}

jsvalue_t wrap_combo_box_ex_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)combo_box_ex_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "combo_box_ex_t*");
  }
  return jret;
}

jsvalue_t wrap_popup_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)popup_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "popup_t*");
  }
  return jret;
}

jsvalue_t wrap_popup_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)popup_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "popup_t*");
  }
  return jret;
}

jsvalue_t wrap_popup_set_close_when_click(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t close_when_click = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)popup_set_close_when_click(widget, close_when_click);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_popup_set_close_when_click_outside(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t close_when_click_outside = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)popup_set_close_when_click_outside(widget, close_when_click_outside);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_popup_t_get_prop_close_when_click(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  popup_t* obj = (popup_t*)jsvalue_get_pointer(ctx, argv[0], "popup_t*");

  jret = jsvalue_create_bool(ctx, obj->close_when_click);
  return jret;
}

jsvalue_t wrap_popup_t_get_prop_close_when_click_outside(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  popup_t* obj = (popup_t*)jsvalue_get_pointer(ctx, argv[0], "popup_t*");

  jret = jsvalue_create_bool(ctx, obj->close_when_click_outside);
  return jret;
}

jsvalue_t wrap_svg_image_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)svg_image_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "svg_image_t*");
  }
  return jret;
}

jsvalue_t wrap_svg_image_set_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)svg_image_set_image(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_svg_image_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)svg_image_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "svg_image_t*");
  }
  return jret;
}

jsvalue_t wrap_timer_info_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  timer_info_t* ret = NULL;
  timer_info_t* timer = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");
  ret = (timer_info_t*)timer_info_cast(timer);

  jret = jsvalue_create_pointer(ctx, ret, "timer_info_t*");
  }
  return jret;
}

jsvalue_t wrap_timer_info_t_get_prop_ctx(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = jsvalue_create_pointer(ctx, obj->ctx, "void*");
  return jret;
}

jsvalue_t wrap_timer_info_t_get_prop_id(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = jsvalue_create_int(ctx, obj->id);
  return jret;
}

jsvalue_t wrap_timer_info_t_get_prop_now(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = jsvalue_create_int(ctx, obj->now);
  return jret;
}

jsvalue_t wrap_spin_box_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)spin_box_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "spin_box_t*");
  }
  return jret;
}

jsvalue_t wrap_spin_box_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)spin_box_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "spin_box_t*");
  }
  return jret;
}

jsvalue_t wrap_system_bar_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)system_bar_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "system_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_system_bar_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)system_bar_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "system_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_window_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)window_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

jsvalue_t wrap_window_create_default(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  widget_t* ret = NULL;
  ret = (widget_t*)window_create_default();

  jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

jsvalue_t wrap_window_set_fullscreen(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t fullscreen = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)window_set_fullscreen(widget, fullscreen);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_open(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[0]);
  ret = (widget_t*)window_open(name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

jsvalue_t wrap_window_open_and_close(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  widget_t* ret = NULL;
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[0]);
  widget_t* to_close = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (widget_t*)window_open_and_close(name, to_close);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

jsvalue_t wrap_window_close(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)window_close(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_close_force(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)window_close_force(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

jsvalue_t wrap_window_t_get_prop_fullscreen(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  window_t* obj = (window_t*)jsvalue_get_pointer(ctx, argv[0], "window_t*");

  jret = jsvalue_create_bool(ctx, obj->fullscreen);
  return jret;
}

jsvalue_t wrap_keyboard_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)keyboard_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "keyboard_t*");
  }
  return jret;
}

jsvalue_t wrap_keyboard_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)keyboard_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "keyboard_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dialog_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_create_simple(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dialog_create_simple(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_get_title(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_get_title(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_get_client(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_get_client(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_open(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  ret = (widget_t*)dialog_open(name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_set_title(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* title = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)dialog_set_title(widget, title);
  jsvalue_free_str(ctx, title);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_modal(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  dialog_quit_code_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (dialog_quit_code_t)dialog_modal(widget);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_quit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t code = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)dialog_quit(widget, code);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_is_quited(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)dialog_is_quited(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_is_modal(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)dialog_is_modal(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_toast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  uint32_t duration = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)dialog_toast(text, duration);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_info(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  const char* title = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)dialog_info(title, text);
  jsvalue_free_str(ctx, title);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_warn(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  const char* title = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)dialog_warn(title, text);
  jsvalue_free_str(ctx, title);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_confirm(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  const char* title = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)dialog_confirm(title, text);
  jsvalue_free_str(ctx, title);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_t_get_prop_highlight(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  dialog_t* obj = (dialog_t*)jsvalue_get_pointer(ctx, argv[0], "dialog_t*");

  jret = jsvalue_create_string(ctx, obj->highlight);
  return jret;
}

ret_t awtk_js_init(JSContext *ctx) {
  event_t_init(ctx);
  rect_t_init(ctx);
  pointf_t_init(ctx);
  point_t_init(ctx);
  emitter_t_init(ctx);
  bitmap_t_init(ctx);
  value_t_init(ctx);
  object_t_init(ctx);
  global_t_init(ctx);
  dialog_quit_code_t_init(ctx);
  event_type_t_init(ctx);
  font_manager_t_init(ctx);
  glyph_format_t_init(ctx);
  idle_t_init(ctx);
  image_manager_t_init(ctx);
  input_type_t_init(ctx);
  value_type_t_init(ctx);
  input_method_t_init(ctx);
  key_code_t_init(ctx);
  locale_info_t_init(ctx);
  style_id_t_init(ctx);
  style_t_init(ctx);
  theme_t_init(ctx);
  timer_t_init(ctx);
  align_v_t_init(ctx);
  align_h_t_init(ctx);
  app_type_t_init(ctx);
  bitmap_format_t_init(ctx);
  bitmap_flag_t_init(ctx);
  vgcanvas_t_init(ctx);
  widget_prop_t_init(ctx);
  widget_type_t_init(ctx);
  window_stage_t_init(ctx);
  window_closable_t_init(ctx);
  widget_state_t_init(ctx);
  widget_t_init(ctx);
  ret_t_init(ctx);
  timer_manager_t_init(ctx);
  time_now_t_init(ctx);
  image_draw_type_t_init(ctx);
  canvas_t_init(ctx);
  named_value_t_init(ctx);
  MIME_TYPE_init(ctx);
  idle_manager_t_init(ctx);
  indicator_default_paint_t_init(ctx);
  clip_board_data_type_t_init(ctx);
  clip_board_t_init(ctx);
  easing_type_t_init(ctx);
  date_time_t_init(ctx);
  color_t_init(ctx);
  asset_info_t_init(ctx);
  asset_type_t_init(ctx);
  assets_manager_t_init(ctx);
  canvas_widget_t_init(ctx);
  time_clock_t_init(ctx);
  text_selector_t_init(ctx);
  prop_change_event_t_init(ctx);
  progress_event_t_init(ctx);
  switch_t_init(ctx);
  slide_view_t_init(ctx);
  slide_indicator_t_init(ctx);
  slide_menu_t_init(ctx);
  scroll_view_t_init(ctx);
  scroll_bar_t_init(ctx);
  list_view_t_init(ctx);
  list_view_h_t_init(ctx);
  list_item_t_init(ctx);
  hscroll_label_t_init(ctx);
  rich_text_t_init(ctx);
  progress_circle_t_init(ctx);
  mledit_t_init(ctx);
  line_number_t_init(ctx);
  image_value_t_init(ctx);
  image_animation_t_init(ctx);
  guage_t_init(ctx);
  guage_pointer_t_init(ctx);
  draggable_t_init(ctx);
  color_picker_t_init(ctx);
  color_component_t_init(ctx);
  window_manager_t_init(ctx);
  window_base_t_init(ctx);
  style_mutable_t_init(ctx);
  image_base_t_init(ctx);
  window_event_t_init(ctx);
  paint_event_t_init(ctx);
  key_event_t_init(ctx);
  pointer_event_t_init(ctx);
  orientation_event_t_init(ctx);
  wheel_event_t_init(ctx);
  app_bar_t_init(ctx);
  button_group_t_init(ctx);
  button_t_init(ctx);
  check_button_t_init(ctx);
  clip_view_t_init(ctx);
  color_tile_t_init(ctx);
  column_t_init(ctx);
  combo_box_item_t_init(ctx);
  combo_box_t_init(ctx);
  dialog_client_t_init(ctx);
  dialog_title_t_init(ctx);
  digit_clock_t_init(ctx);
  dragger_t_init(ctx);
  edit_t_init(ctx);
  grid_item_t_init(ctx);
  grid_t_init(ctx);
  group_box_t_init(ctx);
  label_t_init(ctx);
  overlay_t_init(ctx);
  pages_t_init(ctx);
  progress_bar_t_init(ctx);
  row_t_init(ctx);
  slider_t_init(ctx);
  tab_button_group_t_init(ctx);
  tab_button_t_init(ctx);
  tab_control_t_init(ctx);
  view_t_init(ctx);
  idle_info_t_init(ctx);
  mutable_image_t_init(ctx);
  object_array_t_init(ctx);
  gif_image_t_init(ctx);
  object_default_t_init(ctx);
  image_t_init(ctx);
  combo_box_ex_t_init(ctx);
  popup_t_init(ctx);
  svg_image_t_init(ctx);
  timer_info_t_init(ctx);
  spin_box_t_init(ctx);
  system_bar_t_init(ctx);
  window_t_init(ctx);
  keyboard_t_init(ctx);
  dialog_t_init(ctx);

  return RET_OK;
}

