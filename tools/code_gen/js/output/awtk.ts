
declare function print(str);
if(this['console'] === undefined) {
  this.console = {}
  this.console.log = function(str) {
      print(str);
  }
}
declare function tk_quit() : any;
declare function tk_get_pointer_x() : any;
declare function tk_get_pointer_y() : any;
declare function tk_is_pointer_pressed() : any;
declare function bitmap_create() : any;
declare function bitmap_create_ex(w: any, h: any, line_length: any, format: any) : any;
declare function bitmap_get_bpp(bitmap: any) : any;
declare function bitmap_destroy(bitmap: any) : any;
declare function bitmap_t_get_prop_w(nativeObj);
declare function bitmap_t_get_prop_h(nativeObj);
declare function bitmap_t_get_prop_line_length(nativeObj);
declare function bitmap_t_get_prop_flags(nativeObj);
declare function bitmap_t_get_prop_format(nativeObj);
declare function bitmap_t_get_prop_name(nativeObj);
declare function IMAGE_DRAW_DEFAULT();
declare function IMAGE_DRAW_CENTER();
declare function IMAGE_DRAW_ICON();
declare function IMAGE_DRAW_SCALE();
declare function IMAGE_DRAW_SCALE_AUTO();
declare function IMAGE_DRAW_SCALE_DOWN();
declare function IMAGE_DRAW_SCALE_W();
declare function IMAGE_DRAW_SCALE_H();
declare function IMAGE_DRAW_REPEAT();
declare function IMAGE_DRAW_REPEAT_X();
declare function IMAGE_DRAW_REPEAT_Y();
declare function IMAGE_DRAW_REPEAT_Y_INVERSE();
declare function IMAGE_DRAW_PATCH9();
declare function IMAGE_DRAW_PATCH3_X();
declare function IMAGE_DRAW_PATCH3_Y();
declare function IMAGE_DRAW_PATCH3_X_SCALE_Y();
declare function IMAGE_DRAW_PATCH3_Y_SCALE_X();
declare function canvas_get_width(c: any) : any;
declare function canvas_get_height(c: any) : any;
declare function canvas_get_clip_rect(c: any, r: any) : any;
declare function canvas_set_clip_rect(c: any, r: any) : any;
declare function canvas_set_clip_rect_ex(c: any, r: any, translate: any) : any;
declare function canvas_set_fill_color_str(c: any, color: any) : any;
declare function canvas_set_text_color_str(c: any, color: any) : any;
declare function canvas_set_stroke_color_str(c: any, color: any) : any;
declare function canvas_set_global_alpha(c: any, alpha: any) : any;
declare function canvas_translate(c: any, dx: any, dy: any) : any;
declare function canvas_untranslate(c: any, dx: any, dy: any) : any;
declare function canvas_draw_vline(c: any, x: any, y: any, h: any) : any;
declare function canvas_draw_hline(c: any, x: any, y: any, w: any) : any;
declare function canvas_fill_rect(c: any, x: any, y: any, w: any, h: any) : any;
declare function canvas_stroke_rect(c: any, x: any, y: any, w: any, h: any) : any;
declare function canvas_set_font(c: any, name: any, size: any) : any;
declare function canvas_measure_utf8(c: any, str: any) : any;
declare function canvas_draw_utf8(c: any, str: any, x: any, y: any) : any;
declare function canvas_draw_utf8_in_rect(c: any, str: any, r: any) : any;
declare function canvas_draw_icon(c: any, img: any, cx: any, cy: any) : any;
declare function canvas_draw_image(c: any, img: any, src: any, dst: any) : any;
declare function canvas_draw_image_ex(c: any, img: any, draw_type: any, dst: any) : any;
declare function canvas_get_vgcanvas(c: any) : any;
declare function canvas_cast(c: any) : any;
declare function canvas_reset(c: any) : any;
declare function canvas_t_get_prop_ox(nativeObj);
declare function canvas_t_get_prop_oy(nativeObj);
declare function canvas_t_get_prop_font_name(nativeObj);
declare function canvas_t_get_prop_font_size(nativeObj);
declare function canvas_t_get_prop_global_alpha(nativeObj);
declare function CLIP_BOARD_DATA_TYPE_NONE();
declare function CLIP_BOARD_DATA_TYPE_TEXT();
declare function clip_board_set_text(text: any) : any;
declare function clip_board_get_text() : any;
declare function DIALOG_QUIT_NONE();
declare function DIALOG_QUIT_OK();
declare function DIALOG_QUIT_YES();
declare function DIALOG_QUIT_CANCEL();
declare function DIALOG_QUIT_NO();
declare function DIALOG_QUIT_OTHER();
declare function EVT_POINTER_DOWN();
declare function EVT_POINTER_DOWN_BEFORE_CHILDREN();
declare function EVT_POINTER_MOVE();
declare function EVT_POINTER_MOVE_BEFORE_CHILDREN();
declare function EVT_POINTER_UP();
declare function EVT_POINTER_UP_BEFORE_CHILDREN();
declare function EVT_WHEEL();
declare function EVT_WHEEL_BEFORE_CHILDREN();
declare function EVT_POINTER_DOWN_ABORT();
declare function EVT_CONTEXT_MENU();
declare function EVT_POINTER_ENTER();
declare function EVT_POINTER_LEAVE();
declare function EVT_LONG_PRESS();
declare function EVT_CLICK();
declare function EVT_FOCUS();
declare function EVT_BLUR();
declare function EVT_KEY_DOWN();
declare function EVT_KEY_DOWN_BEFORE_CHILDREN();
declare function EVT_KEY_REPEAT();
declare function EVT_KEY_UP();
declare function EVT_KEY_UP_BEFORE_CHILDREN();
declare function EVT_WILL_MOVE();
declare function EVT_MOVE();
declare function EVT_WILL_RESIZE();
declare function EVT_RESIZE();
declare function EVT_WILL_MOVE_RESIZE();
declare function EVT_MOVE_RESIZE();
declare function EVT_VALUE_WILL_CHANGE();
declare function EVT_VALUE_CHANGED();
declare function EVT_VALUE_CHANGING();
declare function EVT_PAINT();
declare function EVT_BEFORE_PAINT();
declare function EVT_AFTER_PAINT();
declare function EVT_PAINT_DONE();
declare function EVT_LOCALE_CHANGED();
declare function EVT_ANIM_START();
declare function EVT_ANIM_STOP();
declare function EVT_ANIM_PAUSE();
declare function EVT_ANIM_ONCE();
declare function EVT_ANIM_END();
declare function EVT_WINDOW_LOAD();
declare function EVT_WINDOW_WILL_OPEN();
declare function EVT_WINDOW_OPEN();
declare function EVT_WINDOW_TO_BACKGROUND();
declare function EVT_WINDOW_TO_FOREGROUND();
declare function EVT_WINDOW_CLOSE();
declare function EVT_REQUEST_CLOSE_WINDOW();
declare function EVT_TOP_WINDOW_CHANGED();
declare function EVT_IM_COMMIT();
declare function EVT_IM_SHOW_CANDIDATES();
declare function EVT_IM_ACTION();
declare function EVT_IM_ACTION_INFO();
declare function EVT_DRAG_START();
declare function EVT_DRAG();
declare function EVT_DRAG_END();
declare function EVT_SCREEN_SAVER();
declare function EVT_LOW_MEMORY();
declare function EVT_OUT_OF_MEMORY();
declare function EVT_ORIENTATION_WILL_CHANGED();
declare function EVT_ORIENTATION_CHANGED();
declare function EVT_WIDGET_CREATED();
declare function EVT_REQUEST_QUIT_APP();
declare function EVT_THEME_CHANGED();
declare function EVT_REQ_START();
declare function EVT_USER_START();
declare function font_manager_unload_font(fm: any, name: any, size: any) : any;
declare function font_manager_unload_all(fm: any) : any;
declare function GLYPH_FMT_ALPHA();
declare function GLYPH_FMT_MONO();
declare function GLYPH_FMT_RGBA();
declare function idle_add(on_idle: any, ctx: any) : any;
declare function idle_remove(idle_id: any) : any;
declare function value_set_bool(v: any, value: any) : any;
declare function value_bool(v: any) : any;
declare function value_set_int8(v: any, value: any) : any;
declare function value_int8(v: any) : any;
declare function value_set_uint8(v: any, value: any) : any;
declare function value_uint8(v: any) : any;
declare function value_set_int16(v: any, value: any) : any;
declare function value_int16(v: any) : any;
declare function value_set_uint16(v: any, value: any) : any;
declare function value_uint16(v: any) : any;
declare function value_set_int32(v: any, value: any) : any;
declare function value_int32(v: any) : any;
declare function value_set_uint32(v: any, value: any) : any;
declare function value_set_int64(v: any, value: any) : any;
declare function value_int64(v: any) : any;
declare function value_set_uint64(v: any, value: any) : any;
declare function value_uint64(v: any) : any;
declare function value_set_float(v: any, value: any) : any;
declare function value_float(v: any) : any;
declare function value_set_float32(v: any, value: any) : any;
declare function value_float32(v: any) : any;
declare function value_set_double(v: any, value: any) : any;
declare function value_double(v: any) : any;
declare function value_dup_str(v: any, value: any) : any;
declare function value_str(v: any) : any;
declare function value_wstr(v: any) : any;
declare function value_is_null(value: any) : any;
declare function value_int(v: any) : any;
declare function value_set_int(v: any, value: any) : any;
declare function value_set_object(v: any, value: any) : any;
declare function value_object(v: any) : any;
declare function value_set_token(v: any, value: any) : any;
declare function value_token(v: any) : any;
declare function value_set_sized_str(v: any, str: any, size: any) : any;
declare function value_sized_str(v: any) : any;
declare function value_set_binary_data(v: any, value: any, size: any) : any;
declare function value_binary_data(v: any) : any;
declare function value_set_ubjson(v: any, value: any, size: any) : any;
declare function value_ubjson(v: any) : any;
declare function value_create() : any;
declare function value_destroy(v: any) : any;
declare function value_reset(v: any) : any;
declare function value_cast(value: any) : any;
declare function image_manager() : any;
declare function image_manager_get_bitmap(imm: any, name: any, image: any) : any;
declare function INPUT_TEXT();
declare function INPUT_INT();
declare function INPUT_UINT();
declare function INPUT_HEX();
declare function INPUT_FLOAT();
declare function INPUT_UFLOAT();
declare function INPUT_EMAIL();
declare function INPUT_PASSWORD();
declare function INPUT_PHONE();
declare function INPUT_CUSTOM();
declare function VALUE_TYPE_INVALID();
declare function VALUE_TYPE_BOOL();
declare function VALUE_TYPE_INT8();
declare function VALUE_TYPE_UINT8();
declare function VALUE_TYPE_INT16();
declare function VALUE_TYPE_UINT16();
declare function VALUE_TYPE_INT32();
declare function VALUE_TYPE_UINT32();
declare function VALUE_TYPE_INT64();
declare function VALUE_TYPE_UINT64();
declare function VALUE_TYPE_POINTER();
declare function VALUE_TYPE_FLOAT();
declare function VALUE_TYPE_FLOAT32();
declare function VALUE_TYPE_DOUBLE();
declare function VALUE_TYPE_STRING();
declare function VALUE_TYPE_WSTRING();
declare function VALUE_TYPE_OBJECT();
declare function VALUE_TYPE_SIZED_STRING();
declare function VALUE_TYPE_BINARY();
declare function VALUE_TYPE_UBJSON();
declare function VALUE_TYPE_TOKEN();
declare function input_method_commit_text(im: any, text: any) : any;
declare function input_method_dispatch_key(im: any, key: any) : any;
declare function input_method() : any;
declare function TK_KEY_RETURN();
declare function TK_KEY_ESCAPE();
declare function TK_KEY_BACKSPACE();
declare function TK_KEY_TAB();
declare function TK_KEY_SPACE();
declare function TK_KEY_EXCLAIM();
declare function TK_KEY_QUOTEDBL();
declare function TK_KEY_HASH();
declare function TK_KEY_PERCENT();
declare function TK_KEY_DOLLAR();
declare function TK_KEY_AMPERSAND();
declare function TK_KEY_QUOTE();
declare function TK_KEY_LEFTPAREN();
declare function TK_KEY_RIGHTPAREN();
declare function TK_KEY_ASTERISK();
declare function TK_KEY_PLUS();
declare function TK_KEY_COMMA();
declare function TK_KEY_MINUS();
declare function TK_KEY_PERIOD();
declare function TK_KEY_SLASH();
declare function TK_KEY_0();
declare function TK_KEY_1();
declare function TK_KEY_2();
declare function TK_KEY_3();
declare function TK_KEY_4();
declare function TK_KEY_5();
declare function TK_KEY_6();
declare function TK_KEY_7();
declare function TK_KEY_8();
declare function TK_KEY_9();
declare function TK_KEY_COLON();
declare function TK_KEY_SEMICOLON();
declare function TK_KEY_LESS();
declare function TK_KEY_EQUAL();
declare function TK_KEY_GREATER();
declare function TK_KEY_QUESTION();
declare function TK_KEY_AT();
declare function TK_KEY_LEFTBRACKET();
declare function TK_KEY_BACKSLASH();
declare function TK_KEY_RIGHTBRACKET();
declare function TK_KEY_CARET();
declare function TK_KEY_UNDERSCORE();
declare function TK_KEY_BACKQUOTE();
declare function TK_KEY_a();
declare function TK_KEY_b();
declare function TK_KEY_c();
declare function TK_KEY_d();
declare function TK_KEY_e();
declare function TK_KEY_f();
declare function TK_KEY_g();
declare function TK_KEY_h();
declare function TK_KEY_i();
declare function TK_KEY_j();
declare function TK_KEY_k();
declare function TK_KEY_l();
declare function TK_KEY_m();
declare function TK_KEY_n();
declare function TK_KEY_o();
declare function TK_KEY_p();
declare function TK_KEY_q();
declare function TK_KEY_r();
declare function TK_KEY_s();
declare function TK_KEY_t();
declare function TK_KEY_u();
declare function TK_KEY_v();
declare function TK_KEY_w();
declare function TK_KEY_x();
declare function TK_KEY_y();
declare function TK_KEY_z();
declare function TK_KEY_A();
declare function TK_KEY_B();
declare function TK_KEY_C();
declare function TK_KEY_D();
declare function TK_KEY_E();
declare function TK_KEY_F();
declare function TK_KEY_G();
declare function TK_KEY_H();
declare function TK_KEY_I();
declare function TK_KEY_J();
declare function TK_KEY_K();
declare function TK_KEY_L();
declare function TK_KEY_M();
declare function TK_KEY_N();
declare function TK_KEY_O();
declare function TK_KEY_P();
declare function TK_KEY_Q();
declare function TK_KEY_R();
declare function TK_KEY_S();
declare function TK_KEY_T();
declare function TK_KEY_U();
declare function TK_KEY_V();
declare function TK_KEY_W();
declare function TK_KEY_X();
declare function TK_KEY_Y();
declare function TK_KEY_Z();
declare function TK_KEY_DOT();
declare function TK_KEY_DELETE();
declare function TK_KEY_LEFTBRACE();
declare function TK_KEY_RIGHTBRACE();
declare function TK_KEY_LSHIFT();
declare function TK_KEY_RSHIFT();
declare function TK_KEY_LCTRL();
declare function TK_KEY_RCTRL();
declare function TK_KEY_LALT();
declare function TK_KEY_RALT();
declare function TK_KEY_CAPSLOCK();
declare function TK_KEY_HOME();
declare function TK_KEY_END();
declare function TK_KEY_INSERT();
declare function TK_KEY_UP();
declare function TK_KEY_DOWN();
declare function TK_KEY_LEFT();
declare function TK_KEY_RIGHT();
declare function TK_KEY_PAGEUP();
declare function TK_KEY_PAGEDOWN();
declare function TK_KEY_F1();
declare function TK_KEY_F2();
declare function TK_KEY_F3();
declare function TK_KEY_F4();
declare function TK_KEY_F5();
declare function TK_KEY_F6();
declare function TK_KEY_F7();
declare function TK_KEY_F8();
declare function TK_KEY_F9();
declare function TK_KEY_F10();
declare function TK_KEY_F11();
declare function TK_KEY_F12();
declare function TK_KEY_MENU();
declare function TK_KEY_COMMAND();
declare function TK_KEY_BACK();
declare function TK_KEY_CANCEL();
declare function locale_info() : any;
declare function locale_info_tr(locale_info: any, text: any) : any;
declare function locale_info_change(locale_info: any, language: any, country: any) : any;
declare function locale_info_on(locale_info: any, type: any, on_event: any, ctx: any) : any;
declare function locale_info_off(locale_info: any, id: any) : any;
declare function STYLE_ID_BG_COLOR();
declare function STYLE_ID_FG_COLOR();
declare function STYLE_ID_MASK_COLOR();
declare function STYLE_ID_FONT_NAME();
declare function STYLE_ID_FONT_SIZE();
declare function STYLE_ID_FONT_STYLE();
declare function STYLE_ID_TEXT_COLOR();
declare function STYLE_ID_TIPS_TEXT_COLOR();
declare function STYLE_ID_TEXT_ALIGN_H();
declare function STYLE_ID_TEXT_ALIGN_V();
declare function STYLE_ID_BORDER_COLOR();
declare function STYLE_ID_BORDER_WIDTH();
declare function STYLE_ID_BORDER();
declare function STYLE_ID_BG_IMAGE();
declare function STYLE_ID_BG_IMAGE_DRAW_TYPE();
declare function STYLE_ID_ICON();
declare function STYLE_ID_FG_IMAGE();
declare function STYLE_ID_FG_IMAGE_DRAW_TYPE();
declare function STYLE_ID_SPACER();
declare function STYLE_ID_MARGIN();
declare function STYLE_ID_MARGIN_LEFT();
declare function STYLE_ID_MARGIN_RIGHT();
declare function STYLE_ID_MARGIN_TOP();
declare function STYLE_ID_MARGIN_BOTTOM();
declare function STYLE_ID_ICON_AT();
declare function STYLE_ID_ACTIVE_ICON();
declare function STYLE_ID_X_OFFSET();
declare function STYLE_ID_Y_OFFSET();
declare function STYLE_ID_SELECTED_BG_COLOR();
declare function STYLE_ID_SELECTED_FG_COLOR();
declare function STYLE_ID_SELECTED_TEXT_COLOR();
declare function STYLE_ID_ROUND_RADIUS();
declare function style_notify_widget_state_changed(s: any, widget: any) : any;
declare function style_is_valid(s: any) : any;
declare function style_get_int(s: any, name: any, defval: any) : any;
declare function style_get_str(s: any, name: any, defval: any) : any;
declare function style_set(s: any, state: any, name: any, value: any) : any;
declare function style_is_mutable(s: any) : any;
declare function theme() : any;
declare function timer_add(on_timer: any, ctx: any, duration: any) : any;
declare function timer_remove(timer_id: any) : any;
declare function timer_reset(timer_id: any) : any;
declare function timer_modify(timer_id: any, duration: any) : any;
declare function ALIGN_V_NONE();
declare function ALIGN_V_MIDDLE();
declare function ALIGN_V_TOP();
declare function ALIGN_V_BOTTOM();
declare function ALIGN_H_NONE();
declare function ALIGN_H_CENTER();
declare function ALIGN_H_LEFT();
declare function ALIGN_H_RIGHT();
declare function BITMAP_FMT_NONE();
declare function BITMAP_FMT_RGBA8888();
declare function BITMAP_FMT_ABGR8888();
declare function BITMAP_FMT_BGRA8888();
declare function BITMAP_FMT_ARGB8888();
declare function BITMAP_FMT_RGB565();
declare function BITMAP_FMT_BGR565();
declare function BITMAP_FMT_RGB888();
declare function BITMAP_FMT_BGR888();
declare function BITMAP_FMT_GRAY();
declare function BITMAP_FMT_MONO();
declare function BITMAP_FLAG_NONE();
declare function BITMAP_FLAG_OPAQUE();
declare function BITMAP_FLAG_IMMUTABLE();
declare function BITMAP_FLAG_TEXTURE();
declare function BITMAP_FLAG_CHANGED();
declare function BITMAP_FLAG_PREMULTI_ALPHA();
declare function vgcanvas_cast(vg: any) : any;
declare function vgcanvas_flush(vg: any) : any;
declare function vgcanvas_begin_path(vg: any) : any;
declare function vgcanvas_move_to(vg: any, x: any, y: any) : any;
declare function vgcanvas_line_to(vg: any, x: any, y: any) : any;
declare function vgcanvas_quad_to(vg: any, cpx: any, cpy: any, x: any, y: any) : any;
declare function vgcanvas_bezier_to(vg: any, cp1x: any, cp1y: any, cp2x: any, cp2y: any, x: any, y: any) : any;
declare function vgcanvas_arc_to(vg: any, x1: any, y1: any, x2: any, y2: any, r: any) : any;
declare function vgcanvas_arc(vg: any, x: any, y: any, r: any, start_angle: any, end_angle: any, ccw: any) : any;
declare function vgcanvas_is_point_in_path(vg: any, x: any, y: any) : any;
declare function vgcanvas_rect(vg: any, x: any, y: any, w: any, h: any) : any;
declare function vgcanvas_rounded_rect(vg: any, x: any, y: any, w: any, h: any, r: any) : any;
declare function vgcanvas_ellipse(vg: any, x: any, y: any, rx: any, ry: any) : any;
declare function vgcanvas_close_path(vg: any) : any;
declare function vgcanvas_rotate(vg: any, rad: any) : any;
declare function vgcanvas_scale(vg: any, x: any, y: any) : any;
declare function vgcanvas_translate(vg: any, x: any, y: any) : any;
declare function vgcanvas_transform(vg: any, a: any, b: any, c: any, d: any, e: any, f: any) : any;
declare function vgcanvas_set_transform(vg: any, a: any, b: any, c: any, d: any, e: any, f: any) : any;
declare function vgcanvas_clip_rect(vg: any, x: any, y: any, w: any, h: any) : any;
declare function vgcanvas_fill(vg: any) : any;
declare function vgcanvas_stroke(vg: any) : any;
declare function vgcanvas_paint(vg: any, stroke: any, img: any) : any;
declare function vgcanvas_set_font(vg: any, font: any) : any;
declare function vgcanvas_set_font_size(vg: any, font: any) : any;
declare function vgcanvas_set_text_align(vg: any, value: any) : any;
declare function vgcanvas_set_text_baseline(vg: any, value: any) : any;
declare function vgcanvas_fill_text(vg: any, text: any, x: any, y: any, max_width: any) : any;
declare function vgcanvas_measure_text(vg: any, text: any) : any;
declare function vgcanvas_draw_image(vg: any, img: any, sx: any, sy: any, sw: any, sh: any, dx: any, dy: any, dw: any, dh: any) : any;
declare function vgcanvas_draw_icon(vg: any, img: any, sx: any, sy: any, sw: any, sh: any, dx: any, dy: any, dw: any, dh: any) : any;
declare function vgcanvas_set_antialias(vg: any, value: any) : any;
declare function vgcanvas_set_global_alpha(vg: any, alpha: any) : any;
declare function vgcanvas_set_line_width(vg: any, value: any) : any;
declare function vgcanvas_set_fill_color_str(vg: any, color: any) : any;
declare function vgcanvas_set_stroke_color_str(vg: any, color: any) : any;
declare function vgcanvas_set_line_cap(vg: any, value: any) : any;
declare function vgcanvas_set_line_join(vg: any, value: any) : any;
declare function vgcanvas_set_miter_limit(vg: any, value: any) : any;
declare function vgcanvas_save(vg: any) : any;
declare function vgcanvas_restore(vg: any) : any;
declare function vgcanvas_t_get_prop_w(nativeObj);
declare function vgcanvas_t_get_prop_h(nativeObj);
declare function vgcanvas_t_get_prop_ratio(nativeObj);
declare function vgcanvas_t_get_prop_anti_alias(nativeObj);
declare function vgcanvas_t_get_prop_line_width(nativeObj);
declare function vgcanvas_t_get_prop_global_alpha(nativeObj);
declare function vgcanvas_t_get_prop_miter_limit(nativeObj);
declare function vgcanvas_t_get_prop_line_cap(nativeObj);
declare function vgcanvas_t_get_prop_line_join(nativeObj);
declare function vgcanvas_t_get_prop_font(nativeObj);
declare function vgcanvas_t_get_prop_font_size(nativeObj);
declare function vgcanvas_t_get_prop_text_align(nativeObj);
declare function vgcanvas_t_get_prop_text_baseline(nativeObj);
declare function WIDGET_PROP_EXEC();
declare function WIDGET_PROP_X();
declare function WIDGET_PROP_Y();
declare function WIDGET_PROP_W();
declare function WIDGET_PROP_H();
declare function WIDGET_PROP_CANVAS();
declare function WIDGET_PROP_LOCALIZE_OPTIONS();
declare function WIDGET_PROP_NATIVE_WINDOW();
declare function WIDGET_PROP_HIGHLIGHT();
declare function WIDGET_PROP_BAR_SIZE();
declare function WIDGET_PROP_OPACITY();
declare function WIDGET_PROP_MIN_W();
declare function WIDGET_PROP_MAX_W();
declare function WIDGET_PROP_CHILDREN_LAYOUT();
declare function WIDGET_PROP_LAYOUT();
declare function WIDGET_PROP_SELF_LAYOUT();
declare function WIDGET_PROP_LAYOUT_W();
declare function WIDGET_PROP_LAYOUT_H();
declare function WIDGET_PROP_VIRTUAL_W();
declare function WIDGET_PROP_VIRTUAL_H();
declare function WIDGET_PROP_NAME();
declare function WIDGET_PROP_TYPE();
declare function WIDGET_PROP_CLOSABLE();
declare function WIDGET_PROP_CURSOR();
declare function WIDGET_PROP_VALUE();
declare function WIDGET_PROP_LENGTH();
declare function WIDGET_PROP_TEXT();
declare function WIDGET_PROP_TR_TEXT();
declare function WIDGET_PROP_STYLE();
declare function WIDGET_PROP_ENABLE();
declare function WIDGET_PROP_FEEDBACK();
declare function WIDGET_PROP_FLOATING();
declare function WIDGET_PROP_MARGIN();
declare function WIDGET_PROP_SPACING();
declare function WIDGET_PROP_LEFT_MARGIN();
declare function WIDGET_PROP_RIGHT_MARGIN();
declare function WIDGET_PROP_TOP_MARGIN();
declare function WIDGET_PROP_BOTTOM_MARGIN();
declare function WIDGET_PROP_STEP();
declare function WIDGET_PROP_VISIBLE();
declare function WIDGET_PROP_SENSITIVE();
declare function WIDGET_PROP_ANIMATION();
declare function WIDGET_PROP_ANIM_HINT();
declare function WIDGET_PROP_FULLSCREEN();
declare function WIDGET_PROP_OPEN_ANIM_HINT();
declare function WIDGET_PROP_CLOSE_ANIM_HINT();
declare function WIDGET_PROP_MIN();
declare function WIDGET_PROP_TIPS();
declare function WIDGET_PROP_INPUT_TYPE();
declare function WIDGET_PROP_READONLY();
declare function WIDGET_PROP_PASSWORD_VISIBLE();
declare function WIDGET_PROP_ACTIVE();
declare function WIDGET_PROP_VERTICAL();
declare function WIDGET_PROP_SHOW_TEXT();
declare function WIDGET_PROP_XOFFSET();
declare function WIDGET_PROP_YOFFSET();
declare function WIDGET_PROP_ALIGN_V();
declare function WIDGET_PROP_ALIGN_H();
declare function WIDGET_PROP_AUTO_PLAY();
declare function WIDGET_PROP_LOOP();
declare function WIDGET_PROP_AUTO_FIX();
declare function WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED();
declare function WIDGET_PROP_OPEN_IM_WHEN_FOCUSED();
declare function WIDGET_PROP_X_MIN();
declare function WIDGET_PROP_X_MAX();
declare function WIDGET_PROP_Y_MIN();
declare function WIDGET_PROP_Y_MAX();
declare function WIDGET_PROP_MAX();
declare function WIDGET_PROP_GRAB_KEYS();
declare function WIDGET_PROP_ROW();
declare function WIDGET_PROP_STATE_FOR_STYLE();
declare function WIDGET_PROP_THEME();
declare function WIDGET_PROP_STAGE();
declare function WIDGET_PROP_IMAGE_MANAGER();
declare function WIDGET_PROP_ASSETS_MANAGER();
declare function WIDGET_PROP_LOCALE_INFO();
declare function WIDGET_PROP_FONT_MANAGER();
declare function WIDGET_PROP_THEME_OBJ();
declare function WIDGET_PROP_DEFAULT_THEME_OBJ();
declare function WIDGET_PROP_ITEM_WIDTH();
declare function WIDGET_PROP_ITEM_HEIGHT();
declare function WIDGET_PROP_DEFAULT_ITEM_HEIGHT();
declare function WIDGET_PROP_XSLIDABLE();
declare function WIDGET_PROP_YSLIDABLE();
declare function WIDGET_PROP_REPEAT();
declare function WIDGET_PROP_ENABLE_LONG_PRESS();
declare function WIDGET_PROP_ANIMATABLE();
declare function WIDGET_PROP_AUTO_HIDE_SCROLL_BAR();
declare function WIDGET_PROP_IMAGE();
declare function WIDGET_PROP_FORMAT();
declare function WIDGET_PROP_DRAW_TYPE();
declare function WIDGET_PROP_SELECTABLE();
declare function WIDGET_PROP_CLICKABLE();
declare function WIDGET_PROP_SCALE_X();
declare function WIDGET_PROP_SCALE_Y();
declare function WIDGET_PROP_ANCHOR_X();
declare function WIDGET_PROP_ANCHOR_Y();
declare function WIDGET_PROP_ROTATION();
declare function WIDGET_PROP_COMPACT();
declare function WIDGET_PROP_SCROLLABLE();
declare function WIDGET_PROP_ICON();
declare function WIDGET_PROP_OPTIONS();
declare function WIDGET_PROP_SELECTED();
declare function WIDGET_PROP_CHECKED();
declare function WIDGET_PROP_ACTIVE_ICON();
declare function WIDGET_PROP_OPEN_WINDOW();
declare function WIDGET_PROP_SELECTED_INDEX();
declare function WIDGET_PROP_CLOSE_WHEN_CLICK();
declare function WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE();
declare function WIDGET_PROP_LINE_GAP();
declare function WIDGET_PROP_BG_COLOR();
declare function WIDGET_PROP_BORDER_COLOR();
declare function WIDGET_PROP_DELAY();
declare function WIDGET_PROP_IS_KEYBOARD();
declare function WIDGET_PROP_FOCUSED();
declare function WIDGET_PROP_FOCUS();
declare function WIDGET_PROP_FOCUSABLE();
declare function WIDGET_PROP_WITH_FOCUS_STATE();
declare function WIDGET_PROP_MOVE_FOCUS_PREV_KEY();
declare function WIDGET_PROP_MOVE_FOCUS_NEXT_KEY();
declare function WIDGET_PROP_MOVE_FOCUS_UP_KEY();
declare function WIDGET_PROP_MOVE_FOCUS_DOWN_KEY();
declare function WIDGET_PROP_MOVE_FOCUS_LEFT_KEY();
declare function WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY();
declare function WIDGET_TYPE_NONE();
declare function WIDGET_TYPE_WINDOW_MANAGER();
declare function WIDGET_TYPE_NORMAL_WINDOW();
declare function WIDGET_TYPE_OVERLAY();
declare function WIDGET_TYPE_TOOL_BAR();
declare function WIDGET_TYPE_DIALOG();
declare function WIDGET_TYPE_POPUP();
declare function WIDGET_TYPE_SYSTEM_BAR();
declare function WIDGET_TYPE_SYSTEM_BAR_BOTTOM();
declare function WIDGET_TYPE_SPRITE();
declare function WIDGET_TYPE_KEYBOARD();
declare function WIDGET_TYPE_DND();
declare function WIDGET_TYPE_LABEL();
declare function WIDGET_TYPE_BUTTON();
declare function WIDGET_TYPE_IMAGE();
declare function WIDGET_TYPE_EDIT();
declare function WIDGET_TYPE_PROGRESS_BAR();
declare function WIDGET_TYPE_GROUP_BOX();
declare function WIDGET_TYPE_CHECK_BUTTON();
declare function WIDGET_TYPE_RADIO_BUTTON();
declare function WIDGET_TYPE_DIALOG_TITLE();
declare function WIDGET_TYPE_DIALOG_CLIENT();
declare function WIDGET_TYPE_SLIDER();
declare function WIDGET_TYPE_VIEW();
declare function WIDGET_TYPE_COMBO_BOX();
declare function WIDGET_TYPE_COMBO_BOX_ITEM();
declare function WIDGET_TYPE_SLIDE_VIEW();
declare function WIDGET_TYPE_SLIDE_INDICATOR();
declare function WIDGET_TYPE_SLIDE_INDICATOR_ARC();
declare function WIDGET_TYPE_PAGES();
declare function WIDGET_TYPE_TAB_BUTTON();
declare function WIDGET_TYPE_TAB_CONTROL();
declare function WIDGET_TYPE_TAB_BUTTON_GROUP();
declare function WIDGET_TYPE_BUTTON_GROUP();
declare function WIDGET_TYPE_CANDIDATES();
declare function WIDGET_TYPE_SPIN_BOX();
declare function WIDGET_TYPE_DRAGGER();
declare function WIDGET_TYPE_SCROLL_BAR();
declare function WIDGET_TYPE_SCROLL_BAR_DESKTOP();
declare function WIDGET_TYPE_SCROLL_BAR_MOBILE();
declare function WIDGET_TYPE_SCROLL_VIEW();
declare function WIDGET_TYPE_LIST_VIEW();
declare function WIDGET_TYPE_LIST_VIEW_H();
declare function WIDGET_TYPE_LIST_ITEM();
declare function WIDGET_TYPE_COLOR_PICKER();
declare function WIDGET_TYPE_COLOR_COMPONENT();
declare function WIDGET_TYPE_COLOR_TILE();
declare function WIDGET_TYPE_RICH_TEXT();
declare function WIDGET_TYPE_APP_BAR();
declare function WIDGET_TYPE_GRID();
declare function WIDGET_TYPE_GRID_ITEM();
declare function WIDGET_TYPE_ROW();
declare function WIDGET_TYPE_COLUMN();
declare function WIDGET_TYPE_CALIBRATION_WIN();
declare function WINDOW_STAGE_NONE();
declare function WINDOW_STAGE_CREATED();
declare function WINDOW_STAGE_OPENED();
declare function WINDOW_STAGE_CLOSED();
declare function WINDOW_CLOSABLE_YES();
declare function WINDOW_CLOSABLE_NO();
declare function WINDOW_CLOSABLE_CONFIRM();
declare function WIDGET_STATE_NONE();
declare function WIDGET_STATE_NORMAL();
declare function WIDGET_STATE_PRESSED();
declare function WIDGET_STATE_OVER();
declare function WIDGET_STATE_DISABLE();
declare function WIDGET_STATE_FOCUSED();
declare function WIDGET_STATE_CHECKED();
declare function WIDGET_STATE_UNCHECKED();
declare function WIDGET_STATE_EMPTY();
declare function WIDGET_STATE_EMPTY_FOCUS();
declare function WIDGET_STATE_ERROR();
declare function WIDGET_STATE_SELECTED();
declare function WIDGET_STATE_NORMAL_OF_CHECKED();
declare function WIDGET_STATE_PRESSED_OF_CHECKED();
declare function WIDGET_STATE_OVER_OF_CHECKED();
declare function WIDGET_STATE_FOCUSED_OF_CHECKED();
declare function WIDGET_STATE_NORMAL_OF_ACTIVE();
declare function WIDGET_STATE_PRESSED_OF_ACTIVE();
declare function WIDGET_STATE_OVER_OF_ACTIVE();
declare function WIDGET_STATE_FOCUSED_OF_ACTIVE();
declare function widget_count_children(widget: any) : any;
declare function widget_get_child(widget: any, index: any) : any;
declare function widget_index_of(widget: any) : any;
declare function widget_move(widget: any, x: any, y: any) : any;
declare function widget_resize(widget: any, w: any, h: any) : any;
declare function widget_move_resize(widget: any, x: any, y: any, w: any, h: any) : any;
declare function widget_set_value(widget: any, value: any) : any;
declare function widget_animate_value_to(widget: any, value: any, duration: any) : any;
declare function widget_add_value(widget: any, delta: any) : any;
declare function widget_use_style(widget: any, style: any) : any;
declare function widget_set_text_utf8(widget: any, text: any) : any;
declare function widget_set_tr_text(widget: any, text: any) : any;
declare function widget_get_value(widget: any) : any;
declare function widget_get_text(widget: any) : any;
declare function widget_set_name(widget: any, name: any) : any;
declare function widget_set_theme(widget: any, name: any) : any;
declare function widget_set_cursor(widget: any, cursor: any) : any;
declare function widget_set_animation(widget: any, animation: any) : any;
declare function widget_create_animator(widget: any, animation: any) : any;
declare function widget_start_animator(widget: any, name: any) : any;
declare function widget_set_animator_time_scale(widget: any, name: any, time_scale: any) : any;
declare function widget_pause_animator(widget: any, name: any) : any;
declare function widget_stop_animator(widget: any, name: any) : any;
declare function widget_destroy_animator(widget: any, name: any) : any;
declare function widget_set_enable(widget: any, enable: any) : any;
declare function widget_set_feedback(widget: any, feedback: any) : any;
declare function widget_set_floating(widget: any, floating: any) : any;
declare function widget_set_focused(widget: any, focused: any) : any;
declare function widget_child(widget: any, name: any) : any;
declare function widget_lookup(widget: any, name: any, recursive: any) : any;
declare function widget_lookup_by_type(widget: any, type: any, recursive: any) : any;
declare function widget_set_visible(widget: any, visible: any, recursive: any) : any;
declare function widget_set_visible_only(widget: any, visible: any) : any;
declare function widget_set_sensitive(widget: any, sensitive: any) : any;
declare function widget_on(widget: any, type: any, on_event: any, ctx: any) : any;
declare function widget_on_with_tag(widget: any, type: any, on_event: any, ctx: any, tag: any) : any;
declare function widget_off(widget: any, id: any) : any;
declare function widget_invalidate_force(widget: any, r: any) : any;
declare function widget_set_prop_str(widget: any, name: any, v: any) : any;
declare function widget_get_prop_str(widget: any, name: any, defval: any) : any;
declare function widget_set_prop_int(widget: any, name: any, v: any) : any;
declare function widget_get_prop_int(widget: any, name: any, defval: any) : any;
declare function widget_set_prop_bool(widget: any, name: any, v: any) : any;
declare function widget_get_prop_bool(widget: any, name: any, defval: any) : any;
declare function widget_is_window_opened(widget: any) : any;
declare function widget_is_window(widget: any) : any;
declare function widget_is_designing_window(widget: any) : any;
declare function widget_is_window_manager(widget: any) : any;
declare function widget_foreach(widget: any, visit: any, ctx: any) : any;
declare function widget_get_window(widget: any) : any;
declare function widget_get_window_manager(widget: any) : any;
declare function widget_get_type(widget: any) : any;
declare function widget_clone(widget: any, parent: any) : any;
declare function widget_equal(widget: any, other: any) : any;
declare function widget_cast(widget: any) : any;
declare function widget_destroy(widget: any) : any;
declare function widget_unref(widget: any) : any;
declare function widget_layout(widget: any) : any;
declare function widget_set_self_layout(widget: any, params: any) : any;
declare function widget_set_children_layout(widget: any, params: any) : any;
declare function widget_set_self_layout_params(widget: any, x: any, y: any, w: any, h: any) : any;
declare function widget_set_style_int(widget: any, state_and_name: any, value: any) : any;
declare function widget_set_style_str(widget: any, state_and_name: any, value: any) : any;
declare function widget_set_style_color(widget: any, state_and_name: any, value: any) : any;
declare function widget_t_get_prop_x(nativeObj);
declare function widget_t_get_prop_y(nativeObj);
declare function widget_t_get_prop_w(nativeObj);
declare function widget_t_get_prop_h(nativeObj);
declare function widget_t_get_prop_name(nativeObj);
declare function widget_t_get_prop_tr_text(nativeObj);
declare function widget_t_get_prop_style(nativeObj);
declare function widget_t_get_prop_animation(nativeObj);
declare function widget_t_get_prop_enable(nativeObj);
declare function widget_t_get_prop_feedback(nativeObj);
declare function widget_t_get_prop_visible(nativeObj);
declare function widget_t_set_prop_visible(nativeObj, value);
declare function widget_t_get_prop_sensitive(nativeObj);
declare function widget_t_set_prop_sensitive(nativeObj, value);
declare function widget_t_get_prop_focusable(nativeObj);
declare function widget_t_set_prop_focusable(nativeObj, value);
declare function widget_t_get_prop_with_focus_state(nativeObj);
declare function widget_t_set_prop_with_focus_state(nativeObj, value);
declare function widget_t_get_prop_floating(nativeObj);
declare function RET_OK();
declare function RET_OOM();
declare function RET_FAIL();
declare function RET_NOT_IMPL();
declare function RET_QUIT();
declare function RET_FOUND();
declare function RET_BUSY();
declare function RET_REMOVE();
declare function RET_REPEAT();
declare function RET_NOT_FOUND();
declare function RET_DONE();
declare function RET_STOP();
declare function RET_SKIP();
declare function RET_CONTINUE();
declare function RET_OBJECT_CHANGED();
declare function RET_ITEMS_CHANGED();
declare function RET_BAD_PARAMS();
declare function RET_TIMEOUT();
declare function RET_CRC();
declare function RET_IO();
declare function RET_EOS();
declare function time_now_s() : any;
declare function time_now_ms() : any;
declare function rect_create(x: any, y: any, w: any, h: any) : any;
declare function rect_set(rect: any, x: any, y: any, w: any, h: any) : any;
declare function rect_cast(rect: any) : any;
declare function rect_destroy(r: any) : any;
declare function rect_t_get_prop_x(nativeObj);
declare function rect_t_get_prop_y(nativeObj);
declare function rect_t_get_prop_w(nativeObj);
declare function rect_t_get_prop_h(nativeObj);
declare function named_value_create() : any;
declare function named_value_cast(nv: any) : any;
declare function named_value_set_name(nv: any, name: any) : any;
declare function named_value_set_value(nv: any, value: any) : any;
declare function named_value_get_value(nv: any) : any;
declare function named_value_destroy(nv: any) : any;
declare function named_value_t_get_prop_name(nativeObj);
declare function MIME_TYPE_APPLICATION_ENVOY();
declare function MIME_TYPE_APPLICATION_FRACTALS();
declare function MIME_TYPE_APPLICATION_FUTURESPLASH();
declare function MIME_TYPE_APPLICATION_HTA();
declare function MIME_TYPE_APPLICATION_JSON();
declare function MIME_TYPE_APPLICATION_UBJSON();
declare function MIME_TYPE_APPLICATION_MAC_BINHEX40();
declare function MIME_TYPE_APPLICATION_MSWORD();
declare function MIME_TYPE_APPLICATION_OCTET_STREAM();
declare function MIME_TYPE_APPLICATION_ODA();
declare function MIME_TYPE_APPLICATION_OLESCRIPT();
declare function MIME_TYPE_APPLICATION_PDF();
declare function MIME_TYPE_APPLICATION_PICS_RULES();
declare function MIME_TYPE_APPLICATION_PKCS10();
declare function MIME_TYPE_APPLICATION_PKIX_CRL();
declare function MIME_TYPE_APPLICATION_POSTSCRIPT();
declare function MIME_TYPE_APPLICATION_RTF();
declare function MIME_TYPE_APPLICATION_VND_MS_EXCEL();
declare function MIME_TYPE_APPLICATION_VND_MS_OUTLOOK();
declare function MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE();
declare function MIME_TYPE_APPLICATION_VND_MS_PKISECCAT();
declare function MIME_TYPE_APPLICATION_VND_MS_PKISTL();
declare function MIME_TYPE_APPLICATION_VND_MS_POWERPOINT();
declare function MIME_TYPE_APPLICATION_VND_MS_PROJECT();
declare function MIME_TYPE_APPLICATION_VND_MS_WORKS();
declare function MIME_TYPE_APPLICATION_WINHLP();
declare function MIME_TYPE_APPLICATION_X_BCPIO();
declare function MIME_TYPE_APPLICATION_X_CDF();
declare function MIME_TYPE_APPLICATION_X_COMPRESS();
declare function MIME_TYPE_APPLICATION_X_COMPRESSED();
declare function MIME_TYPE_APPLICATION_X_CPIO();
declare function MIME_TYPE_APPLICATION_X_CSH();
declare function MIME_TYPE_APPLICATION_X_DIRECTOR();
declare function MIME_TYPE_APPLICATION_X_DVI();
declare function MIME_TYPE_APPLICATION_X_GTAR();
declare function MIME_TYPE_APPLICATION_X_GZIP();
declare function MIME_TYPE_APPLICATION_X_HDF();
declare function MIME_TYPE_APPLICATION_X_IPHONE();
declare function MIME_TYPE_APPLICATION_X_JAVASCRIPT();
declare function MIME_TYPE_APPLICATION_X_LATEX();
declare function MIME_TYPE_APPLICATION_X_MSACCESS();
declare function MIME_TYPE_APPLICATION_X_MSCARDFILE();
declare function MIME_TYPE_APPLICATION_X_MSCLIP();
declare function MIME_TYPE_APPLICATION_X_MSDOWNLOAD();
declare function MIME_TYPE_APPLICATION_X_MSMEDIAVIEW();
declare function MIME_TYPE_APPLICATION_X_MSMETAFILE();
declare function MIME_TYPE_APPLICATION_X_MSMONEY();
declare function MIME_TYPE_APPLICATION_X_MSPUBLISHER();
declare function MIME_TYPE_APPLICATION_X_MSSCHEDULE();
declare function MIME_TYPE_APPLICATION_X_MSTERMINAL();
declare function MIME_TYPE_APPLICATION_X_MSWRITE();
declare function MIME_TYPE_APPLICATION_X_NETCDF();
declare function MIME_TYPE_APPLICATION_X_PERFMON();
declare function MIME_TYPE_APPLICATION_X_PKCS12();
declare function MIME_TYPE_APPLICATION_X_SH();
declare function MIME_TYPE_APPLICATION_X_SHAR();
declare function MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH();
declare function MIME_TYPE_APPLICATION_X_STUFFIT();
declare function MIME_TYPE_APPLICATION_X_SV4CPIO();
declare function MIME_TYPE_APPLICATION_X_SV4CRC();
declare function MIME_TYPE_APPLICATION_X_TAR();
declare function MIME_TYPE_APPLICATION_X_TCL();
declare function MIME_TYPE_APPLICATION_X_TEX();
declare function MIME_TYPE_APPLICATION_X_TEXINFO();
declare function MIME_TYPE_APPLICATION_X_TROFF();
declare function MIME_TYPE_APPLICATION_X_USTAR();
declare function MIME_TYPE_APPLICATION_ZIP();
declare function MIME_TYPE_AUDIO_BASIC();
declare function MIME_TYPE_AUDIO_MID();
declare function MIME_TYPE_AUDIO_MPEG();
declare function MIME_TYPE_AUDIO_X_AIFF();
declare function MIME_TYPE_AUDIO_X_MPEGURL();
declare function MIME_TYPE_AUDIO_X_WAV();
declare function MIME_TYPE_IMAGE_BMP();
declare function MIME_TYPE_IMAGE_CIS_COD();
declare function MIME_TYPE_IMAGE_GIF();
declare function MIME_TYPE_IMAGE_IEF();
declare function MIME_TYPE_IMAGE_JPEG();
declare function MIME_TYPE_IMAGE_PIPEG();
declare function MIME_TYPE_IMAGE_SVG_XML();
declare function MIME_TYPE_IMAGE_TIFF();
declare function MIME_TYPE_IMAGE_X_CMX();
declare function MIME_TYPE_IMAGE_X_ICON();
declare function MIME_TYPE_IMAGE_X_RGB();
declare function MIME_TYPE_IMAGE_X_XBITMAP();
declare function MIME_TYPE_IMAGE_X_XPIXMAP();
declare function MIME_TYPE_IMAGE_X_XWINDOWDUMP();
declare function MIME_TYPE_MESSAGE_RFC822();
declare function MIME_TYPE_TEXT_CSS();
declare function MIME_TYPE_TEXT_H323();
declare function MIME_TYPE_TEXT_HTML();
declare function MIME_TYPE_TEXT_IULS();
declare function MIME_TYPE_TEXT_PLAIN();
declare function MIME_TYPE_TEXT_RICHTEXT();
declare function MIME_TYPE_TEXT_SCRIPTLET();
declare function MIME_TYPE_TEXT_WEBVIEWHTML();
declare function MIME_TYPE_TEXT_X_COMPONENT();
declare function MIME_TYPE_TEXT_X_SETEXT();
declare function MIME_TYPE_TEXT_X_VCARD();
declare function MIME_TYPE_VIDEO_MPEG();
declare function MIME_TYPE_VIDEO_QUICKTIME();
declare function MIME_TYPE_VIDEO_X_MSVIDEO();
declare function INDICATOR_DEFAULT_PAINT_AUTO();
declare function INDICATOR_DEFAULT_PAINT_FILL_DOT();
declare function INDICATOR_DEFAULT_PAINT_STROKE_DOT();
declare function INDICATOR_DEFAULT_PAINT_FILL_RECT();
declare function INDICATOR_DEFAULT_PAINT_STROKE_RECT();
declare function event_cast(event: any) : any;
declare function event_create(type: any, target: any) : any;
declare function event_destroy(event: any) : any;
declare function event_t_get_prop_type(nativeObj);
declare function event_t_get_prop_time(nativeObj);
declare function event_t_get_prop_target(nativeObj);
declare function EVT_NONE();
declare function EVT_PROP_WILL_CHANGE();
declare function EVT_PROP_CHANGED();
declare function EVT_ITEMS_WILL_CHANGE();
declare function EVT_ITEMS_CHANGED();
declare function EVT_PROPS_CHANGED();
declare function EVT_PROGRESS();
declare function EVT_DESTROY();
declare function emitter_create() : any;
declare function emitter_dispatch(emitter: any, e: any) : any;
declare function emitter_dispatch_simple_event(emitter: any, type: any) : any;
declare function emitter_on(emitter: any, type: any, on_event: any, ctx: any) : any;
declare function emitter_on_with_tag(emitter: any, type: any, on_event: any, ctx: any, tag: any) : any;
declare function emitter_off(emitter: any, id: any) : any;
declare function emitter_enable(emitter: any) : any;
declare function emitter_disable(emitter: any) : any;
declare function emitter_size(emitter: any) : any;
declare function emitter_destroy(emitter: any) : any;
declare function emitter_cast(emitter: any) : any;
declare function EASING_LINEAR();
declare function EASING_QUADRATIC_IN();
declare function EASING_QUADRATIC_OUT();
declare function EASING_QUADRATIC_INOUT();
declare function EASING_CUBIC_IN();
declare function EASING_CUBIC_OUT();
declare function EASING_SIN_IN();
declare function EASING_SIN_OUT();
declare function EASING_SIN_INOUT();
declare function EASING_POW_IN();
declare function EASING_POW_OUT();
declare function EASING_POW_INOUT();
declare function EASING_CIRCULAR_IN();
declare function EASING_CIRCULAR_OUT();
declare function EASING_CIRCULAR_INOUT();
declare function EASING_ELASTIC_IN();
declare function EASING_ELASTIC_OUT();
declare function EASING_ELASTIC_INOUT();
declare function EASING_BACK_IN();
declare function EASING_BACK_OUT();
declare function EASING_BACK_INOUT();
declare function EASING_BOUNCE_IN();
declare function EASING_BOUNCE_OUT();
declare function EASING_BOUNCE_INOUT();
declare function date_time_create() : any;
declare function date_time_set(dt: any) : any;
declare function date_time_destroy(dt: any) : any;
declare function date_time_t_get_prop_second(nativeObj);
declare function date_time_t_get_prop_minute(nativeObj);
declare function date_time_t_get_prop_hour(nativeObj);
declare function date_time_t_get_prop_day(nativeObj);
declare function date_time_t_get_prop_wday(nativeObj);
declare function date_time_t_get_prop_month(nativeObj);
declare function date_time_t_get_prop_year(nativeObj);
declare function color_create(r: any, b: any, g: any, a: any) : any;
declare function color_from_str(c: any, str: any) : any;
declare function color_r(c: any) : any;
declare function color_g(c: any) : any;
declare function color_b(c: any) : any;
declare function color_a(c: any) : any;
declare function color_cast(color: any) : any;
declare function color_destroy(c: any) : any;
declare function color_t_get_prop_color(nativeObj);
declare function color_t_set_prop_color(nativeObj, value);
declare function asset_info_t_get_prop_type(nativeObj);
declare function asset_info_t_get_prop_subtype(nativeObj);
declare function asset_info_t_get_prop_is_in_rom(nativeObj);
declare function asset_info_t_get_prop_size(nativeObj);
declare function asset_info_t_get_prop_refcount(nativeObj);
declare function asset_info_t_get_prop_name(nativeObj);
declare function ASSET_TYPE_NONE();
declare function ASSET_TYPE_FONT();
declare function ASSET_TYPE_IMAGE();
declare function ASSET_TYPE_STYLE();
declare function ASSET_TYPE_UI();
declare function ASSET_TYPE_XML();
declare function ASSET_TYPE_STRINGS();
declare function ASSET_TYPE_SCRIPT();
declare function ASSET_TYPE_DATA();
declare function assets_manager() : any;
declare function assets_manager_ref(am: any, type: any, name: any) : any;
declare function assets_manager_unref(am: any, info: any) : any;
declare function color_component_cast(widget: any) : any;
declare function time_clock_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function time_clock_cast(widget: any) : any;
declare function time_clock_set_hour(widget: any, hour: any) : any;
declare function time_clock_set_minute(widget: any, minute: any) : any;
declare function time_clock_set_second(widget: any, second: any) : any;
declare function time_clock_set_hour_image(widget: any, hour: any) : any;
declare function time_clock_set_minute_image(widget: any, minute_image: any) : any;
declare function time_clock_set_second_image(widget: any, second_image: any) : any;
declare function time_clock_set_bg_image(widget: any, bg_image: any) : any;
declare function time_clock_set_image(widget: any, image: any) : any;
declare function time_clock_set_hour_anchor(widget: any, anchor_x: any, anchor_y: any) : any;
declare function time_clock_set_minute_anchor(widget: any, anchor_x: any, anchor_y: any) : any;
declare function time_clock_set_second_anchor(widget: any, anchor_x: any, anchor_y: any) : any;
declare function time_clock_t_get_prop_hour(nativeObj);
declare function time_clock_t_get_prop_minute(nativeObj);
declare function time_clock_t_get_prop_second(nativeObj);
declare function time_clock_t_get_prop_image(nativeObj);
declare function time_clock_t_get_prop_bg_image(nativeObj);
declare function time_clock_t_get_prop_hour_image(nativeObj);
declare function time_clock_t_get_prop_minute_image(nativeObj);
declare function time_clock_t_get_prop_second_image(nativeObj);
declare function time_clock_t_get_prop_hour_anchor_x(nativeObj);
declare function time_clock_t_get_prop_hour_anchor_y(nativeObj);
declare function time_clock_t_get_prop_minute_anchor_x(nativeObj);
declare function time_clock_t_get_prop_minute_anchor_y(nativeObj);
declare function time_clock_t_get_prop_second_anchor_x(nativeObj);
declare function time_clock_t_get_prop_second_anchor_y(nativeObj);
declare function text_selector_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function text_selector_cast(widget: any) : any;
declare function text_selector_reset_options(widget: any) : any;
declare function text_selector_count_options(widget: any) : any;
declare function text_selector_append_option(widget: any, value: any, text: any) : any;
declare function text_selector_set_options(widget: any, options: any) : any;
declare function text_selector_set_range_options(widget: any, start: any, nr: any, step: any) : any;
declare function text_selector_get_value(widget: any) : any;
declare function text_selector_set_value(widget: any, value: any) : any;
declare function text_selector_get_text(widget: any) : any;
declare function text_selector_set_text(widget: any, text: any) : any;
declare function text_selector_set_selected_index(widget: any, index: any) : any;
declare function text_selector_set_visible_nr(widget: any, visible_nr: any) : any;
declare function text_selector_t_get_prop_visible_nr(nativeObj);
declare function text_selector_t_get_prop_selected_index(nativeObj);
declare function text_selector_t_get_prop_options(nativeObj);
declare function switch_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function switch_set_value(widget: any, value: any) : any;
declare function switch_cast(widget: any) : any;
declare function switch_t_get_prop_value(nativeObj);
declare function switch_t_get_prop_max_xoffset_ratio(nativeObj);
declare function prop_change_event_cast(event: any) : any;
declare function prop_change_event_t_get_prop_name(nativeObj);
declare function prop_change_event_t_get_prop_value(nativeObj);
declare function progress_event_cast(event: any) : any;
declare function progress_event_t_get_prop_percent(nativeObj);
declare function dialog_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function dialog_create_simple(parent: any, x: any, y: any, w: any, h: any) : any;
declare function dialog_cast(widget: any) : any;
declare function dialog_get_title(widget: any) : any;
declare function dialog_get_client(widget: any) : any;
declare function dialog_open(name: any) : any;
declare function dialog_set_title(widget: any, title: any) : any;
declare function dialog_modal(widget: any) : any;
declare function dialog_quit(widget: any, code: any) : any;
declare function dialog_is_quited(widget: any) : any;
declare function dialog_is_modal(widget: any) : any;
declare function dialog_toast(text: any, duration: any) : any;
declare function dialog_info(title: any, text: any) : any;
declare function dialog_warn(title: any, text: any) : any;
declare function dialog_confirm(title: any, text: any) : any;
declare function dialog_t_get_prop_highlight(nativeObj);
declare function slide_view_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function slide_view_cast(widget: any) : any;
declare function slide_view_set_auto_play(widget: any, auto_play: any) : any;
declare function slide_view_set_active(widget: any, index: any) : any;
declare function slide_view_set_vertical(widget: any, vertical: any) : any;
declare function slide_view_set_anim_hint(widget: any, anim_hint: any) : any;
declare function slide_view_set_loop(widget: any, loop: any) : any;
declare function slide_view_t_get_prop_vertical(nativeObj);
declare function slide_view_t_get_prop_auto_play(nativeObj);
declare function slide_view_t_get_prop_loop(nativeObj);
declare function slide_view_t_get_prop_anim_hint(nativeObj);
declare function slide_indicator_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function slide_indicator_create_linear(parent: any, x: any, y: any, w: any, h: any) : any;
declare function slide_indicator_create_arc(parent: any, x: any, y: any, w: any, h: any) : any;
declare function slide_indicator_cast(widget: any) : any;
declare function slide_indicator_set_value(widget: any, value: any) : any;
declare function slide_indicator_set_max(widget: any, max: any) : any;
declare function slide_indicator_set_default_paint(widget: any, default_paint: any) : any;
declare function slide_indicator_set_auto_hide(widget: any, auto_hide: any) : any;
declare function slide_indicator_set_margin(widget: any, margin: any) : any;
declare function slide_indicator_set_spacing(widget: any, spacing: any) : any;
declare function slide_indicator_set_size(widget: any, size: any) : any;
declare function slide_indicator_set_anchor(widget: any, anchor_x: any, anchor_y: any) : any;
declare function slide_indicator_set_indicated_target(widget: any, indicated_target: any) : any;
declare function slide_indicator_t_get_prop_value(nativeObj);
declare function slide_indicator_t_get_prop_max(nativeObj);
declare function slide_indicator_t_get_prop_default_paint(nativeObj);
declare function slide_indicator_t_get_prop_auto_hide(nativeObj);
declare function slide_indicator_t_get_prop_margin(nativeObj);
declare function slide_indicator_t_get_prop_spacing(nativeObj);
declare function slide_indicator_t_get_prop_size(nativeObj);
declare function slide_indicator_t_get_prop_anchor_x(nativeObj);
declare function slide_indicator_t_get_prop_anchor_y(nativeObj);
declare function slide_indicator_t_get_prop_indicated_target(nativeObj);
declare function slide_menu_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function slide_menu_cast(widget: any) : any;
declare function slide_menu_set_value(widget: any, value: any) : any;
declare function slide_menu_set_align_v(widget: any, align_v: any) : any;
declare function slide_menu_set_min_scale(widget: any, min_scale: any) : any;
declare function slide_menu_t_get_prop_value(nativeObj);
declare function slide_menu_t_get_prop_align_v(nativeObj);
declare function slide_menu_t_get_prop_min_scale(nativeObj);
declare function scroll_view_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function scroll_view_cast(widget: any) : any;
declare function scroll_view_set_virtual_w(widget: any, w: any) : any;
declare function scroll_view_set_virtual_h(widget: any, h: any) : any;
declare function scroll_view_set_xslidable(widget: any, xslidable: any) : any;
declare function scroll_view_set_yslidable(widget: any, yslidable: any) : any;
declare function scroll_view_set_offset(widget: any, xoffset: any, yoffset: any) : any;
declare function scroll_view_scroll_to(widget: any, xoffset_end: any, yoffset_end: any, duration: any) : any;
declare function scroll_view_scroll_delta_to(widget: any, xoffset_delta: any, yoffset_delta: any, duration: any) : any;
declare function scroll_view_t_get_prop_virtual_w(nativeObj);
declare function scroll_view_t_get_prop_virtual_h(nativeObj);
declare function scroll_view_t_get_prop_xoffset(nativeObj);
declare function scroll_view_t_get_prop_yoffset(nativeObj);
declare function scroll_view_t_get_prop_xslidable(nativeObj);
declare function scroll_view_t_get_prop_yslidable(nativeObj);
declare function scroll_bar_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function scroll_bar_cast(widget: any) : any;
declare function scroll_bar_create_mobile(parent: any, x: any, y: any, w: any, h: any) : any;
declare function scroll_bar_create_desktop(parent: any, x: any, y: any, w: any, h: any) : any;
declare function scroll_bar_set_params(widget: any, virtual_size: any, row: any) : any;
declare function scroll_bar_scroll_to(widget: any, value: any, duration: any) : any;
declare function scroll_bar_set_value(widget: any, value: any) : any;
declare function scroll_bar_add_delta(widget: any, delta: any) : any;
declare function scroll_bar_scroll_delta(widget: any, delta: any) : any;
declare function scroll_bar_set_value_only(widget: any, value: any) : any;
declare function scroll_bar_is_mobile(widget: any) : any;
declare function scroll_bar_t_get_prop_virtual_size(nativeObj);
declare function scroll_bar_t_get_prop_value(nativeObj);
declare function scroll_bar_t_get_prop_row(nativeObj);
declare function scroll_bar_t_get_prop_animatable(nativeObj);
declare function view_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function view_cast(widget: any) : any;
declare function list_view_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function list_view_set_item_height(widget: any, item_height: any) : any;
declare function list_view_set_default_item_height(widget: any, default_item_height: any) : any;
declare function list_view_set_auto_hide_scroll_bar(widget: any, auto_hide_scroll_bar: any) : any;
declare function list_view_cast(widget: any) : any;
declare function list_view_t_get_prop_item_height(nativeObj);
declare function list_view_t_get_prop_default_item_height(nativeObj);
declare function list_view_t_get_prop_auto_hide_scroll_bar(nativeObj);
declare function list_view_h_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function list_view_h_set_item_width(widget: any, item_width: any) : any;
declare function list_view_h_set_spacing(widget: any, spacing: any) : any;
declare function list_view_h_cast(widget: any) : any;
declare function list_view_h_t_get_prop_item_width(nativeObj);
declare function list_view_h_t_get_prop_spacing(nativeObj);
declare function tab_control_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function tab_control_cast(widget: any) : any;
declare function tab_button_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function tab_button_cast(widget: any) : any;
declare function tab_button_set_value(widget: any, value: any) : any;
declare function tab_button_set_icon(widget: any, name: any) : any;
declare function tab_button_set_active_icon(widget: any, name: any) : any;
declare function tab_button_t_get_prop_value(nativeObj);
declare function tab_button_t_get_prop_active_icon(nativeObj);
declare function tab_button_t_get_prop_icon(nativeObj);
declare function list_item_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function list_item_cast(widget: any) : any;
declare function hscroll_label_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function hscroll_label_set_lull(widget: any, lull: any) : any;
declare function hscroll_label_set_duration(widget: any, duration: any) : any;
declare function hscroll_label_set_only_focus(widget: any, only_focus: any) : any;
declare function hscroll_label_set_only_parent_focus(widget: any, only_parent_focus: any) : any;
declare function hscroll_label_set_loop(widget: any, loop: any) : any;
declare function hscroll_label_set_yoyo(widget: any, yoyo: any) : any;
declare function hscroll_label_set_ellipses(widget: any, ellipses: any) : any;
declare function hscroll_label_set_xoffset(widget: any, xoffset: any) : any;
declare function hscroll_label_start(widget: any) : any;
declare function hscroll_label_stop(widget: any) : any;
declare function hscroll_label_cast(widget: any) : any;
declare function hscroll_label_t_get_prop_only_focus(nativeObj);
declare function hscroll_label_t_get_prop_only_parent_focus(nativeObj);
declare function hscroll_label_t_get_prop_loop(nativeObj);
declare function hscroll_label_t_get_prop_yoyo(nativeObj);
declare function hscroll_label_t_get_prop_ellipses(nativeObj);
declare function hscroll_label_t_get_prop_lull(nativeObj);
declare function hscroll_label_t_get_prop_duration(nativeObj);
declare function hscroll_label_t_get_prop_xoffset(nativeObj);
declare function hscroll_label_t_get_prop_text_w(nativeObj);
declare function rich_text_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function rich_text_set_text(widget: any, text: any) : any;
declare function rich_text_cast(widget: any) : any;
declare function rich_text_t_get_prop_line_gap(nativeObj);
declare function progress_circle_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function progress_circle_cast(widget: any) : any;
declare function progress_circle_set_value(widget: any, value: any) : any;
declare function progress_circle_set_max(widget: any, max: any) : any;
declare function progress_circle_set_line_width(widget: any, line_width: any) : any;
declare function progress_circle_set_start_angle(widget: any, start_angle: any) : any;
declare function progress_circle_set_unit(widget: any, unit: any) : any;
declare function progress_circle_set_show_text(widget: any, show_text: any) : any;
declare function progress_circle_set_counter_clock_wise(widget: any, counter_clock_wise: any) : any;
declare function progress_circle_t_get_prop_value(nativeObj);
declare function progress_circle_t_get_prop_max(nativeObj);
declare function progress_circle_t_get_prop_start_angle(nativeObj);
declare function progress_circle_t_get_prop_line_width(nativeObj);
declare function progress_circle_t_get_prop_unit(nativeObj);
declare function progress_circle_t_get_prop_counter_clock_wise(nativeObj);
declare function progress_circle_t_get_prop_show_text(nativeObj);
declare function tab_button_group_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function tab_button_group_set_compact(widget: any, compact: any) : any;
declare function tab_button_group_set_scrollable(widget: any, scrollable: any) : any;
declare function tab_button_group_cast(widget: any) : any;
declare function tab_button_group_t_get_prop_compact(nativeObj);
declare function tab_button_group_t_get_prop_scrollable(nativeObj);
declare function mledit_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function mledit_set_readonly(widget: any, readonly: any) : any;
declare function mledit_set_focus(widget: any, focus: any) : any;
declare function mledit_set_wrap_word(widget: any, wrap_word: any) : any;
declare function mledit_set_max_lines(widget: any, max_lines: any) : any;
declare function mledit_set_input_tips(widget: any, tips: any) : any;
declare function mledit_set_cursor(widget: any, cursor: any) : any;
declare function mledit_set_scroll_line(widget: any, scroll_line: any) : any;
declare function mledit_cast(widget: any) : any;
declare function mledit_t_get_prop_readonly(nativeObj);
declare function mledit_t_get_prop_tips(nativeObj);
declare function mledit_t_get_prop_wrap_word(nativeObj);
declare function mledit_t_get_prop_max_lines(nativeObj);
declare function mledit_t_get_prop_scroll_line(nativeObj);
declare function slider_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function slider_cast(widget: any) : any;
declare function slider_set_value(widget: any, value: any) : any;
declare function slider_set_min(widget: any, min: any) : any;
declare function slider_set_max(widget: any, max: any) : any;
declare function slider_set_step(widget: any, step: any) : any;
declare function slider_set_bar_size(widget: any, bar_size: any) : any;
declare function slider_set_vertical(widget: any, vertical: any) : any;
declare function slider_t_get_prop_value(nativeObj);
declare function slider_t_get_prop_min(nativeObj);
declare function slider_t_get_prop_max(nativeObj);
declare function slider_t_get_prop_step(nativeObj);
declare function slider_t_get_prop_vertical(nativeObj);
declare function slider_t_get_prop_bar_size(nativeObj);
declare function row_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function row_cast(widget: any) : any;
declare function object_unref(obj: any) : any;
declare function object_ref(obj: any) : any;
declare function object_get_type(obj: any) : any;
declare function object_get_desc(obj: any) : any;
declare function object_get_size(obj: any) : any;
declare function object_is_collection(obj: any) : any;
declare function object_set_name(obj: any, name: any) : any;
declare function object_compare(obj: any, other: any) : any;
declare function object_get_prop(obj: any, name: any, v: any) : any;
declare function object_get_prop_str(obj: any, name: any) : any;
declare function object_get_prop_pointer(obj: any, name: any) : any;
declare function object_get_prop_object(obj: any, name: any) : any;
declare function object_get_prop_int(obj: any, name: any, defval: any) : any;
declare function object_get_prop_bool(obj: any, name: any, defval: any) : any;
declare function object_get_prop_float(obj: any, name: any, defval: any) : any;
declare function object_remove_prop(obj: any, name: any) : any;
declare function object_set_prop(obj: any, name: any, value: any) : any;
declare function object_set_prop_str(obj: any, name: any, value: any) : any;
declare function object_set_prop_pointer(obj: any, name: any, value: any) : any;
declare function object_set_prop_object(obj: any, name: any, value: any) : any;
declare function object_set_prop_int(obj: any, name: any, value: any) : any;
declare function object_set_prop_bool(obj: any, name: any, value: any) : any;
declare function object_set_prop_float(obj: any, name: any, value: any) : any;
declare function object_copy_prop(obj: any, src: any, name: any) : any;
declare function object_foreach_prop(obj: any, on_prop: any, ctx: any) : any;
declare function object_has_prop(obj: any, name: any) : any;
declare function object_eval(obj: any, expr: any, v: any) : any;
declare function object_can_exec(obj: any, name: any, args: any) : any;
declare function object_exec(obj: any, name: any, args: any) : any;
declare function object_notify_changed(obj: any) : any;
declare function object_get_prop_str_by_path(obj: any, path: any) : any;
declare function object_get_prop_pointer_by_path(obj: any, path: any) : any;
declare function object_get_prop_object_by_path(obj: any, path: any) : any;
declare function object_get_prop_int_by_path(obj: any, path: any, defval: any) : any;
declare function object_get_prop_bool_by_path(obj: any, path: any, defval: any) : any;
declare function object_get_prop_float_by_path(obj: any, path: any, defval: any) : any;
declare function object_t_get_prop_ref_count(nativeObj);
declare function object_t_get_prop_name(nativeObj);
declare function progress_bar_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function progress_bar_cast(widget: any) : any;
declare function progress_bar_set_value(widget: any, value: any) : any;
declare function progress_bar_set_max(widget: any, max: any) : any;
declare function progress_bar_set_vertical(widget: any, vertical: any) : any;
declare function progress_bar_set_show_text(widget: any, show_text: any) : any;
declare function progress_bar_get_percent(widget: any) : any;
declare function progress_bar_t_get_prop_value(nativeObj);
declare function progress_bar_t_get_prop_max(nativeObj);
declare function progress_bar_t_get_prop_vertical(nativeObj);
declare function progress_bar_t_get_prop_show_text(nativeObj);
declare function line_number_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function line_number_set_top_margin(widget: any, top_margin: any) : any;
declare function line_number_set_bottom_margin(widget: any, bottom_margin: any) : any;
declare function line_number_set_line_height(widget: any, line_height: any) : any;
declare function line_number_set_yoffset(widget: any, yoffset: any) : any;
declare function line_number_cast(widget: any) : any;
declare function keyboard_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function keyboard_cast(widget: any) : any;
declare function image_value_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function image_value_set_image(widget: any, image: any) : any;
declare function image_value_set_format(widget: any, format: any) : any;
declare function image_value_set_value(widget: any, value: any) : any;
declare function image_value_cast(widget: any) : any;
declare function image_value_t_get_prop_image(nativeObj);
declare function image_value_t_get_prop_format(nativeObj);
declare function image_value_t_get_prop_value(nativeObj);
declare function image_animation_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function image_animation_set_loop(widget: any, loop: any) : any;
declare function image_animation_set_image(widget: any, image: any) : any;
declare function image_animation_set_interval(widget: any, interval: any) : any;
declare function image_animation_set_delay(widget: any, delay: any) : any;
declare function image_animation_set_auto_play(widget: any, auto_play: any) : any;
declare function image_animation_set_sequence(widget: any, sequence: any) : any;
declare function image_animation_set_range_sequence(widget: any, start_index: any, end_index: any) : any;
declare function image_animation_play(widget: any) : any;
declare function image_animation_stop(widget: any) : any;
declare function image_animation_pause(widget: any) : any;
declare function image_animation_next(widget: any) : any;
declare function image_animation_set_format(widget: any, format: any) : any;
declare function image_animation_set_unload_after_paint(widget: any, unload_after_paint: any) : any;
declare function image_animation_cast(widget: any) : any;
declare function image_animation_t_get_prop_image(nativeObj);
declare function image_animation_t_get_prop_sequence(nativeObj);
declare function image_animation_t_get_prop_start_index(nativeObj);
declare function image_animation_t_get_prop_end_index(nativeObj);
declare function image_animation_t_get_prop_loop(nativeObj);
declare function image_animation_t_get_prop_auto_play(nativeObj);
declare function image_animation_t_get_prop_unload_after_paint(nativeObj);
declare function image_animation_t_get_prop_format(nativeObj);
declare function image_animation_t_get_prop_interval(nativeObj);
declare function image_animation_t_get_prop_delay(nativeObj);
declare function guage_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function guage_cast(widget: any) : any;
declare function guage_set_image(widget: any, name: any) : any;
declare function guage_set_draw_type(widget: any, draw_type: any) : any;
declare function guage_t_get_prop_image(nativeObj);
declare function guage_t_get_prop_draw_type(nativeObj);
declare function guage_pointer_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function guage_pointer_cast(widget: any) : any;
declare function guage_pointer_set_angle(widget: any, angle: any) : any;
declare function guage_pointer_set_image(widget: any, image: any) : any;
declare function guage_pointer_set_anchor(widget: any, anchor_x: any, anchor_y: any) : any;
declare function guage_pointer_t_get_prop_angle(nativeObj);
declare function guage_pointer_t_get_prop_image(nativeObj);
declare function guage_pointer_t_get_prop_anchor_x(nativeObj);
declare function guage_pointer_t_get_prop_anchor_y(nativeObj);
declare function popup_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function popup_cast(widget: any) : any;
declare function popup_set_close_when_click(widget: any, close_when_click: any) : any;
declare function popup_set_close_when_click_outside(widget: any, close_when_click_outside: any) : any;
declare function popup_t_get_prop_close_when_click(nativeObj);
declare function popup_t_get_prop_close_when_click_outside(nativeObj);
declare function draggable_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function draggable_cast(widget: any) : any;
declare function draggable_set_top(widget: any, top: any) : any;
declare function draggable_set_bottom(widget: any, bottom: any) : any;
declare function draggable_set_left(widget: any, left: any) : any;
declare function draggable_set_right(widget: any, right: any) : any;
declare function draggable_set_vertical_only(widget: any, vertical_only: any) : any;
declare function draggable_set_horizontal_only(widget: any, horizontal_only: any) : any;
declare function draggable_set_drag_window(widget: any, drag_window: any) : any;
declare function draggable_t_get_prop_top(nativeObj);
declare function draggable_t_get_prop_bottom(nativeObj);
declare function draggable_t_get_prop_left(nativeObj);
declare function draggable_t_get_prop_right(nativeObj);
declare function draggable_t_get_prop_vertical_only(nativeObj);
declare function draggable_t_get_prop_horizontal_only(nativeObj);
declare function draggable_t_get_prop_drag_window(nativeObj);
declare function pages_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function pages_cast(widget: any) : any;
declare function pages_set_active(widget: any, index: any) : any;
declare function pages_set_active_by_name(widget: any, name: any) : any;
declare function pages_t_get_prop_active(nativeObj);
declare function color_picker_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function color_picker_set_color(widget: any, color: any) : any;
declare function color_picker_cast(widget: any) : any;
declare function color_picker_t_get_prop_value(nativeObj);
declare function canvas_widget_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function canvas_widget_cast(widget: any) : any;
declare function overlay_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function overlay_cast(widget: any) : any;
declare function window_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function window_set_fullscreen(widget: any, fullscreen: any) : any;
declare function window_open(name: any) : any;
declare function window_open_and_close(name: any, to_close: any) : any;
declare function window_close(widget: any) : any;
declare function window_close_force(widget: any) : any;
declare function window_cast(widget: any) : any;
declare function window_t_get_prop_fullscreen(nativeObj);
declare function window_manager() : any;
declare function window_manager_cast(widget: any) : any;
declare function window_manager_get_top_main_window(widget: any) : any;
declare function window_manager_get_top_window(widget: any) : any;
declare function window_manager_get_prev_window(widget: any) : any;
declare function window_manager_get_pointer_x(widget: any) : any;
declare function window_manager_get_pointer_y(widget: any) : any;
declare function window_manager_get_pointer_pressed(widget: any) : any;
declare function window_manager_set_show_fps(widget: any, show_fps: any) : any;
declare function window_manager_set_screen_saver_time(widget: any, screen_saver_time: any) : any;
declare function window_manager_set_cursor(widget: any, cursor: any) : any;
declare function window_manager_back(widget: any) : any;
declare function window_manager_back_to_home(widget: any) : any;
declare function window_base_cast(widget: any) : any;
declare function window_base_t_get_prop_theme(nativeObj);
declare function window_base_t_get_prop_closable(nativeObj);
declare function label_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function label_set_length(widget: any, length: any) : any;
declare function label_resize_to_content(widget: any, min_w: any, max_w: any, min_h: any, max_h: any) : any;
declare function label_cast(widget: any) : any;
declare function label_t_get_prop_length(nativeObj);
declare function style_mutable_get_name(s: any) : any;
declare function style_mutable_set_name(s: any, name: any) : any;
declare function style_mutable_set_int(s: any, state: any, name: any, val: any) : any;
declare function style_mutable_cast(s: any) : any;
declare function style_mutable_create(widget: any, default_style: any) : any;
declare function style_mutable_t_get_prop_name(nativeObj);
declare function group_box_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function group_box_cast(widget: any) : any;
declare function image_base_set_image(widget: any, name: any) : any;
declare function image_base_set_rotation(widget: any, rotation: any) : any;
declare function image_base_set_scale(widget: any, scale_x: any, scale_y: any) : any;
declare function image_base_set_anchor(widget: any, anchor_x: any, anchor_y: any) : any;
declare function image_base_set_selected(widget: any, selected: any) : any;
declare function image_base_set_selectable(widget: any, selectable: any) : any;
declare function image_base_set_clickable(widget: any, clickable: any) : any;
declare function image_base_cast(widget: any) : any;
declare function image_base_t_get_prop_image(nativeObj);
declare function image_base_t_get_prop_anchor_x(nativeObj);
declare function image_base_t_get_prop_anchor_y(nativeObj);
declare function image_base_t_get_prop_scale_x(nativeObj);
declare function image_base_t_get_prop_scale_y(nativeObj);
declare function image_base_t_get_prop_rotation(nativeObj);
declare function image_base_t_get_prop_clickable(nativeObj);
declare function image_base_t_get_prop_selectable(nativeObj);
declare function image_base_t_get_prop_selected(nativeObj);
declare function window_event_cast(event: any) : any;
declare function window_event_t_get_prop_window(nativeObj);
declare function paint_event_cast(event: any) : any;
declare function paint_event_t_get_prop_c(nativeObj);
declare function key_event_cast(event: any) : any;
declare function key_event_t_get_prop_key(nativeObj);
declare function key_event_t_get_prop_alt(nativeObj);
declare function key_event_t_get_prop_lalt(nativeObj);
declare function key_event_t_get_prop_ralt(nativeObj);
declare function key_event_t_get_prop_ctrl(nativeObj);
declare function key_event_t_get_prop_lctrl(nativeObj);
declare function key_event_t_get_prop_rctrl(nativeObj);
declare function key_event_t_get_prop_shift(nativeObj);
declare function key_event_t_get_prop_lshift(nativeObj);
declare function key_event_t_get_prop_rshift(nativeObj);
declare function key_event_t_get_prop_cmd(nativeObj);
declare function key_event_t_get_prop_menu(nativeObj);
declare function key_event_t_get_prop_capslock(nativeObj);
declare function pointer_event_cast(event: any) : any;
declare function pointer_event_t_get_prop_x(nativeObj);
declare function pointer_event_t_get_prop_y(nativeObj);
declare function pointer_event_t_get_prop_button(nativeObj);
declare function pointer_event_t_get_prop_pressed(nativeObj);
declare function pointer_event_t_get_prop_alt(nativeObj);
declare function pointer_event_t_get_prop_ctrl(nativeObj);
declare function pointer_event_t_get_prop_cmd(nativeObj);
declare function pointer_event_t_get_prop_menu(nativeObj);
declare function pointer_event_t_get_prop_shift(nativeObj);
declare function orientation_event_cast(event: any) : any;
declare function orientation_event_t_get_prop_orientation(nativeObj);
declare function wheel_event_cast(event: any) : any;
declare function wheel_event_t_get_prop_dy(nativeObj);
declare function wheel_event_t_get_prop_alt(nativeObj);
declare function wheel_event_t_get_prop_ctrl(nativeObj);
declare function wheel_event_t_get_prop_shift(nativeObj);
declare function app_bar_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function app_bar_cast(widget: any) : any;
declare function button_group_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function button_group_cast(widget: any) : any;
declare function button_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function button_cast(widget: any) : any;
declare function button_set_repeat(widget: any, repeat: any) : any;
declare function button_set_enable_long_press(widget: any, enable_long_press: any) : any;
declare function button_t_get_prop_repeat(nativeObj);
declare function button_t_get_prop_enable_long_press(nativeObj);
declare function check_button_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function check_button_create_radio(parent: any, x: any, y: any, w: any, h: any) : any;
declare function check_button_set_value(widget: any, value: any) : any;
declare function check_button_cast(widget: any) : any;
declare function check_button_t_get_prop_value(nativeObj);
declare function color_tile_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function color_tile_cast(widget: any) : any;
declare function color_tile_set_bg_color(widget: any, color: any) : any;
declare function color_tile_t_get_prop_bg_color(nativeObj);
declare function color_tile_t_get_prop_border_color(nativeObj);
declare function column_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function column_cast(widget: any) : any;
declare function combo_box_item_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function combo_box_item_cast(widget: any) : any;
declare function combo_box_item_set_checked(widget: any, checked: any) : any;
declare function combo_box_item_set_value(widget: any, value: any) : any;
declare function combo_box_item_t_get_prop_value(nativeObj);
declare function combo_box_item_t_get_prop_checked(nativeObj);
declare function combo_box_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function combo_box_cast(widget: any) : any;
declare function combo_box_set_open_window(widget: any, open_window: any) : any;
declare function combo_box_reset_options(widget: any) : any;
declare function combo_box_count_options(widget: any) : any;
declare function combo_box_set_selected_index(widget: any, index: any) : any;
declare function combo_box_set_localize_options(widget: any, localize_options: any) : any;
declare function combo_box_set_value(widget: any, value: any) : any;
declare function combo_box_set_item_height(widget: any, item_height: any) : any;
declare function combo_box_append_option(widget: any, value: any, text: any) : any;
declare function combo_box_set_options(widget: any, options: any) : any;
declare function combo_box_get_value(widget: any) : any;
declare function combo_box_get_text(widget: any) : any;
declare function combo_box_t_get_prop_open_window(nativeObj);
declare function combo_box_t_get_prop_selected_index(nativeObj);
declare function combo_box_t_get_prop_value(nativeObj);
declare function combo_box_t_get_prop_localize_options(nativeObj);
declare function combo_box_t_get_prop_options(nativeObj);
declare function combo_box_t_get_prop_item_height(nativeObj);
declare function dialog_client_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function dialog_client_cast(widget: any) : any;
declare function dialog_title_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function dialog_title_cast(widget: any) : any;
declare function digit_clock_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function digit_clock_cast(widget: any) : any;
declare function digit_clock_set_format(widget: any, format: any) : any;
declare function digit_clock_t_get_prop_format(nativeObj);
declare function dragger_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function dragger_cast(widget: any) : any;
declare function dragger_set_range(widget: any, x_min: any, y_min: any, x_max: any, y_max: any) : any;
declare function dragger_t_get_prop_x_min(nativeObj);
declare function dragger_t_get_prop_y_min(nativeObj);
declare function dragger_t_get_prop_x_max(nativeObj);
declare function dragger_t_get_prop_y_max(nativeObj);
declare function edit_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function edit_cast(widget: any) : any;
declare function edit_get_int(widget: any) : any;
declare function edit_get_double(widget: any) : any;
declare function edit_set_int(widget: any, value: any) : any;
declare function edit_set_double(widget: any, value: any) : any;
declare function edit_set_text_limit(widget: any, min: any, max: any) : any;
declare function edit_set_int_limit(widget: any, min: any, max: any, step: any) : any;
declare function edit_set_float_limit(widget: any, min: any, max: any, step: any) : any;
declare function edit_set_readonly(widget: any, readonly: any) : any;
declare function edit_set_auto_fix(widget: any, auto_fix: any) : any;
declare function edit_set_select_none_when_focused(widget: any, select_none_when_focused: any) : any;
declare function edit_set_open_im_when_focused(widget: any, open_im_when_focused: any) : any;
declare function edit_set_input_type(widget: any, type: any) : any;
declare function edit_set_input_tips(widget: any, tips: any) : any;
declare function edit_set_password_visible(widget: any, password_visible: any) : any;
declare function edit_set_focus(widget: any, focus: any) : any;
declare function edit_set_cursor(widget: any, cursor: any) : any;
declare function edit_t_get_prop_readonly(nativeObj);
declare function edit_t_get_prop_password_visible(nativeObj);
declare function edit_t_get_prop_auto_fix(nativeObj);
declare function edit_t_get_prop_select_none_when_focused(nativeObj);
declare function edit_t_get_prop_open_im_when_focused(nativeObj);
declare function edit_t_get_prop_tips(nativeObj);
declare function edit_t_get_prop_input_type(nativeObj);
declare function edit_t_get_prop_min(nativeObj);
declare function edit_t_get_prop_max(nativeObj);
declare function edit_t_get_prop_step(nativeObj);
declare function grid_item_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function grid_item_cast(widget: any) : any;
declare function grid_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function grid_cast(widget: any) : any;
declare function spin_box_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function spin_box_cast(widget: any) : any;
declare function timer_info_cast(timer: any) : any;
declare function timer_info_t_get_prop_ctx(nativeObj);
declare function timer_info_t_get_prop_id(nativeObj);
declare function timer_info_t_get_prop_now(nativeObj);
declare function combo_box_ex_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function gif_image_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function gif_image_cast(widget: any) : any;
declare function object_default_create() : any;
declare function object_default_unref(obj: any) : any;
declare function object_default_clear_props(obj: any) : any;
declare function object_default_t_get_prop_props_size(nativeObj);
declare function object_array_create() : any;
declare function object_array_unref(obj: any) : any;
declare function object_array_clear_props(obj: any) : any;
declare function object_array_t_get_prop_props_size(nativeObj);
declare function image_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function image_set_draw_type(widget: any, draw_type: any) : any;
declare function image_cast(widget: any) : any;
declare function image_t_get_prop_draw_type(nativeObj);
declare function system_bar_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function system_bar_cast(widget: any) : any;
declare function idle_info_cast(idle: any) : any;
declare function idle_info_t_get_prop_ctx(nativeObj);
declare function idle_info_t_get_prop_id(nativeObj);
declare function svg_image_create(parent: any, x: any, y: any, w: any, h: any) : any;
declare function svg_image_set_image(widget: any, name: any) : any;
declare function svg_image_cast(widget: any) : any;
class TGlobal {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static quit() {
   return tk_quit();
 }

 static getPointerX() {
   return tk_get_pointer_x();
 }

 static getPointerY() {
   return tk_get_pointer_y();
 }

 static isPointerPressed() {
   return tk_is_pointer_pressed();
 }

}

class TBitmap {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static create() {
   return new TBitmap(bitmap_create());
 }

 static createEx(w: any, h: any, line_length: any, format: any) {
   return new TBitmap(bitmap_create_ex(w, h, line_length, format));
 }

 getBpp() {
   return bitmap_get_bpp(this.nativeObj);
 }

 destroy() {
   return bitmap_destroy(this.nativeObj);
 }

 get w() {
   return bitmap_t_get_prop_w(this.nativeObj);
 }

 get h() {
   return bitmap_t_get_prop_h(this.nativeObj);
 }

 get lineLength() {
   return bitmap_t_get_prop_line_length(this.nativeObj);
 }

 get flags() {
   return bitmap_t_get_prop_flags(this.nativeObj);
 }

 get format() {
   return bitmap_t_get_prop_format(this.nativeObj);
 }

 get name() {
   return bitmap_t_get_prop_name(this.nativeObj);
 }

}

enum TImageDrawType {
 DEFAULT = IMAGE_DRAW_DEFAULT(),
 CENTER = IMAGE_DRAW_CENTER(),
 ICON = IMAGE_DRAW_ICON(),
 SCALE = IMAGE_DRAW_SCALE(),
 SCALE_AUTO = IMAGE_DRAW_SCALE_AUTO(),
 SCALE_DOWN = IMAGE_DRAW_SCALE_DOWN(),
 SCALE_W = IMAGE_DRAW_SCALE_W(),
 SCALE_H = IMAGE_DRAW_SCALE_H(),
 REPEAT = IMAGE_DRAW_REPEAT(),
 REPEAT_X = IMAGE_DRAW_REPEAT_X(),
 REPEAT_Y = IMAGE_DRAW_REPEAT_Y(),
 REPEAT_Y_INVERSE = IMAGE_DRAW_REPEAT_Y_INVERSE(),
 PATCH9 = IMAGE_DRAW_PATCH9(),
 PATCH3_X = IMAGE_DRAW_PATCH3_X(),
 PATCH3_Y = IMAGE_DRAW_PATCH3_Y(),
 PATCH3_X_SCALE_Y = IMAGE_DRAW_PATCH3_X_SCALE_Y(),
 PATCH3_Y_SCALE_X = IMAGE_DRAW_PATCH3_Y_SCALE_X(),
};

class TCanvas {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 getWidth() {
   return canvas_get_width(this.nativeObj);
 }

 getHeight() {
   return canvas_get_height(this.nativeObj);
 }

 getClipRect(r: any) {
   return canvas_get_clip_rect(this.nativeObj, r ? r.nativeObj : null);
 }

 setClipRect(r: any) {
   return canvas_set_clip_rect(this.nativeObj, r ? r.nativeObj : null);
 }

 setClipRectEx(r: any, translate: any) {
   return canvas_set_clip_rect_ex(this.nativeObj, r ? r.nativeObj : null, translate);
 }

 setFillColor(color: any) {
   return canvas_set_fill_color_str(this.nativeObj, color);
 }

 setTextColor(color: any) {
   return canvas_set_text_color_str(this.nativeObj, color);
 }

 setStrokeColor(color: any) {
   return canvas_set_stroke_color_str(this.nativeObj, color);
 }

 setGlobalAlpha(alpha: any) {
   return canvas_set_global_alpha(this.nativeObj, alpha);
 }

 translate(dx: any, dy: any) {
   return canvas_translate(this.nativeObj, dx, dy);
 }

 untranslate(dx: any, dy: any) {
   return canvas_untranslate(this.nativeObj, dx, dy);
 }

 drawVline(x: any, y: any, h: any) {
   return canvas_draw_vline(this.nativeObj, x, y, h);
 }

 drawHline(x: any, y: any, w: any) {
   return canvas_draw_hline(this.nativeObj, x, y, w);
 }

 fillRect(x: any, y: any, w: any, h: any) {
   return canvas_fill_rect(this.nativeObj, x, y, w, h);
 }

 strokeRect(x: any, y: any, w: any, h: any) {
   return canvas_stroke_rect(this.nativeObj, x, y, w, h);
 }

 setFont(name: any, size: any) {
   return canvas_set_font(this.nativeObj, name, size);
 }

 measureText(str: any) {
   return canvas_measure_utf8(this.nativeObj, str);
 }

 drawText(str: any, x: any, y: any) {
   return canvas_draw_utf8(this.nativeObj, str, x, y);
 }

 drawTextInRect(str: any, r: any) {
   return canvas_draw_utf8_in_rect(this.nativeObj, str, r ? r.nativeObj : null);
 }

 drawIcon(img: any, cx: any, cy: any) {
   return canvas_draw_icon(this.nativeObj, img ? img.nativeObj : null, cx, cy);
 }

 drawImage(img: any, src: any, dst: any) {
   return canvas_draw_image(this.nativeObj, img ? img.nativeObj : null, src ? src.nativeObj : null, dst ? dst.nativeObj : null);
 }

 drawImageEx(img: any, draw_type: any, dst: any) {
   return canvas_draw_image_ex(this.nativeObj, img ? img.nativeObj : null, draw_type, dst ? dst.nativeObj : null);
 }

 getVgcanvas() {
   return new TVgcanvas(canvas_get_vgcanvas(this.nativeObj));
 }

 static cast(c: any) {
   return new TCanvas(canvas_cast(c ? (c.nativeObj || c) : null));
 }

 reset() {
   return canvas_reset(this.nativeObj);
 }

 get ox() {
   return canvas_t_get_prop_ox(this.nativeObj);
 }

 get oy() {
   return canvas_t_get_prop_oy(this.nativeObj);
 }

 get fontName() {
   return canvas_t_get_prop_font_name(this.nativeObj);
 }

 get fontSize() {
   return canvas_t_get_prop_font_size(this.nativeObj);
 }

 get globalAlpha() {
   return canvas_t_get_prop_global_alpha(this.nativeObj);
 }

}

enum TClipBoardDataType {
 NONE = CLIP_BOARD_DATA_TYPE_NONE(),
 TEXT = CLIP_BOARD_DATA_TYPE_TEXT(),
};

class TClipBoard {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static setText(text: any) {
   return clip_board_set_text(text);
 }

 static getText() {
   return clip_board_get_text();
 }

}

enum TDialogQuitCode {
 NONE = DIALOG_QUIT_NONE(),
 OK = DIALOG_QUIT_OK(),
 YES = DIALOG_QUIT_YES(),
 CANCEL = DIALOG_QUIT_CANCEL(),
 NO = DIALOG_QUIT_NO(),
 OTHER = DIALOG_QUIT_OTHER(),
};

enum TEventType {
 POINTER_DOWN = EVT_POINTER_DOWN(),
 POINTER_DOWN_BEFORE_CHILDREN = EVT_POINTER_DOWN_BEFORE_CHILDREN(),
 POINTER_MOVE = EVT_POINTER_MOVE(),
 POINTER_MOVE_BEFORE_CHILDREN = EVT_POINTER_MOVE_BEFORE_CHILDREN(),
 POINTER_UP = EVT_POINTER_UP(),
 POINTER_UP_BEFORE_CHILDREN = EVT_POINTER_UP_BEFORE_CHILDREN(),
 WHEEL = EVT_WHEEL(),
 WHEEL_BEFORE_CHILDREN = EVT_WHEEL_BEFORE_CHILDREN(),
 POINTER_DOWN_ABORT = EVT_POINTER_DOWN_ABORT(),
 CONTEXT_MENU = EVT_CONTEXT_MENU(),
 POINTER_ENTER = EVT_POINTER_ENTER(),
 POINTER_LEAVE = EVT_POINTER_LEAVE(),
 LONG_PRESS = EVT_LONG_PRESS(),
 CLICK = EVT_CLICK(),
 FOCUS = EVT_FOCUS(),
 BLUR = EVT_BLUR(),
 KEY_DOWN = EVT_KEY_DOWN(),
 KEY_DOWN_BEFORE_CHILDREN = EVT_KEY_DOWN_BEFORE_CHILDREN(),
 KEY_REPEAT = EVT_KEY_REPEAT(),
 KEY_UP = EVT_KEY_UP(),
 KEY_UP_BEFORE_CHILDREN = EVT_KEY_UP_BEFORE_CHILDREN(),
 WILL_MOVE = EVT_WILL_MOVE(),
 MOVE = EVT_MOVE(),
 WILL_RESIZE = EVT_WILL_RESIZE(),
 RESIZE = EVT_RESIZE(),
 WILL_MOVE_RESIZE = EVT_WILL_MOVE_RESIZE(),
 MOVE_RESIZE = EVT_MOVE_RESIZE(),
 VALUE_WILL_CHANGE = EVT_VALUE_WILL_CHANGE(),
 VALUE_CHANGED = EVT_VALUE_CHANGED(),
 VALUE_CHANGING = EVT_VALUE_CHANGING(),
 PAINT = EVT_PAINT(),
 BEFORE_PAINT = EVT_BEFORE_PAINT(),
 AFTER_PAINT = EVT_AFTER_PAINT(),
 PAINT_DONE = EVT_PAINT_DONE(),
 LOCALE_CHANGED = EVT_LOCALE_CHANGED(),
 ANIM_START = EVT_ANIM_START(),
 ANIM_STOP = EVT_ANIM_STOP(),
 ANIM_PAUSE = EVT_ANIM_PAUSE(),
 ANIM_ONCE = EVT_ANIM_ONCE(),
 ANIM_END = EVT_ANIM_END(),
 WINDOW_LOAD = EVT_WINDOW_LOAD(),
 WINDOW_WILL_OPEN = EVT_WINDOW_WILL_OPEN(),
 WINDOW_OPEN = EVT_WINDOW_OPEN(),
 WINDOW_TO_BACKGROUND = EVT_WINDOW_TO_BACKGROUND(),
 WINDOW_TO_FOREGROUND = EVT_WINDOW_TO_FOREGROUND(),
 WINDOW_CLOSE = EVT_WINDOW_CLOSE(),
 REQUEST_CLOSE_WINDOW = EVT_REQUEST_CLOSE_WINDOW(),
 TOP_WINDOW_CHANGED = EVT_TOP_WINDOW_CHANGED(),
 IM_COMMIT = EVT_IM_COMMIT(),
 IM_SHOW_CANDIDATES = EVT_IM_SHOW_CANDIDATES(),
 IM_ACTION = EVT_IM_ACTION(),
 IM_ACTION_INFO = EVT_IM_ACTION_INFO(),
 DRAG_START = EVT_DRAG_START(),
 DRAG = EVT_DRAG(),
 DRAG_END = EVT_DRAG_END(),
 SCREEN_SAVER = EVT_SCREEN_SAVER(),
 LOW_MEMORY = EVT_LOW_MEMORY(),
 OUT_OF_MEMORY = EVT_OUT_OF_MEMORY(),
 ORIENTATION_WILL_CHANGED = EVT_ORIENTATION_WILL_CHANGED(),
 ORIENTATION_CHANGED = EVT_ORIENTATION_CHANGED(),
 WIDGET_CREATED = EVT_WIDGET_CREATED(),
 REQUEST_QUIT_APP = EVT_REQUEST_QUIT_APP(),
 THEME_CHANGED = EVT_THEME_CHANGED(),
 REQ_START = EVT_REQ_START(),
 USER_START = EVT_USER_START(),
};

class TFontManager {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 unloadFont(name: any, size: any) {
   return font_manager_unload_font(this.nativeObj, name, size);
 }

 unloadAll() {
   return font_manager_unload_all(this.nativeObj);
 }

}

enum TGlyphFormat {
 ALPHA = GLYPH_FMT_ALPHA(),
 MONO = GLYPH_FMT_MONO(),
 RGBA = GLYPH_FMT_RGBA(),
};

class TIdle {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static add(on_idle: any, ctx: any) {
   return idle_add(on_idle, ctx);
 }

 static remove(idle_id: any) {
   return idle_remove(idle_id);
 }

}

class TValue {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 setBool(value: any) {
   return new TValue(value_set_bool(this.nativeObj, value));
 }

 bool() {
   return value_bool(this.nativeObj);
 }

 setInt8(value: any) {
   return new TValue(value_set_int8(this.nativeObj, value));
 }

 int8() {
   return value_int8(this.nativeObj);
 }

 setUint8(value: any) {
   return new TValue(value_set_uint8(this.nativeObj, value));
 }

 uint8() {
   return value_uint8(this.nativeObj);
 }

 setInt16(value: any) {
   return new TValue(value_set_int16(this.nativeObj, value));
 }

 int16() {
   return value_int16(this.nativeObj);
 }

 setUint16(value: any) {
   return new TValue(value_set_uint16(this.nativeObj, value));
 }

 uint16() {
   return value_uint16(this.nativeObj);
 }

 setInt32(value: any) {
   return new TValue(value_set_int32(this.nativeObj, value));
 }

 int32() {
   return value_int32(this.nativeObj);
 }

 setUint32(value: any) {
   return new TValue(value_set_uint32(this.nativeObj, value));
 }

 setInt64(value: any) {
   return new TValue(value_set_int64(this.nativeObj, value));
 }

 int64() {
   return value_int64(this.nativeObj);
 }

 setUint64(value: any) {
   return new TValue(value_set_uint64(this.nativeObj, value));
 }

 uint64() {
   return value_uint64(this.nativeObj);
 }

 setFloat(value: any) {
   return new TValue(value_set_float(this.nativeObj, value));
 }

 float() {
   return value_float(this.nativeObj);
 }

 setFloat32(value: any) {
   return new TValue(value_set_float32(this.nativeObj, value));
 }

 float32() {
   return value_float32(this.nativeObj);
 }

 setDouble(value: any) {
   return new TValue(value_set_double(this.nativeObj, value));
 }

 double() {
   return value_double(this.nativeObj);
 }

 setStr(value: any) {
   return new TValue(value_dup_str(this.nativeObj, value));
 }

 str() {
   return value_str(this.nativeObj);
 }

 wstr() {
   return value_wstr(this.nativeObj);
 }

 isNull() {
   return value_is_null(this.nativeObj);
 }

 int() {
   return value_int(this.nativeObj);
 }

 setInt(value: any) {
   return new TValue(value_set_int(this.nativeObj, value));
 }

 setObject(value: any) {
   return new TValue(value_set_object(this.nativeObj, value ? value.nativeObj : null));
 }

 object() {
   return new TObject(value_object(this.nativeObj));
 }

 setToken(value: any) {
   return new TValue(value_set_token(this.nativeObj, value));
 }

 token() {
   return value_token(this.nativeObj);
 }

 setSizedStr(str: any, size: any) {
   return new TValue(value_set_sized_str(this.nativeObj, str, size));
 }

 sizedStr() {
   return value_sized_str(this.nativeObj);
 }

 setBinaryData(value: any, size: any) {
   return new TValue(value_set_binary_data(this.nativeObj, value, size));
 }

 binaryData() {
   return value_binary_data(this.nativeObj);
 }

 setUbjson(value: any, size: any) {
   return new TValue(value_set_ubjson(this.nativeObj, value, size));
 }

 ubjson() {
   return value_ubjson(this.nativeObj);
 }

 static create() {
   return new TValue(value_create());
 }

 destroy() {
   return value_destroy(this.nativeObj);
 }

 reset() {
   return value_reset(this.nativeObj);
 }

 static cast(value: any) {
   return new TValue(value_cast(value ? (value.nativeObj || value) : null));
 }

}

class TImageManager {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static instance() {
   return new TImageManager(image_manager());
 }

 getBitmap(name: any, image: any) {
   return image_manager_get_bitmap(this.nativeObj, name, image ? image.nativeObj : null);
 }

}

enum TInputType {
 TEXT = INPUT_TEXT(),
 INT = INPUT_INT(),
 UINT = INPUT_UINT(),
 HEX = INPUT_HEX(),
 FLOAT = INPUT_FLOAT(),
 UFLOAT = INPUT_UFLOAT(),
 EMAIL = INPUT_EMAIL(),
 PASSWORD = INPUT_PASSWORD(),
 PHONE = INPUT_PHONE(),
 CUSTOM = INPUT_CUSTOM(),
};

enum TValueType {
 INVALID = VALUE_TYPE_INVALID(),
 BOOL = VALUE_TYPE_BOOL(),
 INT8 = VALUE_TYPE_INT8(),
 UINT8 = VALUE_TYPE_UINT8(),
 INT16 = VALUE_TYPE_INT16(),
 UINT16 = VALUE_TYPE_UINT16(),
 INT32 = VALUE_TYPE_INT32(),
 UINT32 = VALUE_TYPE_UINT32(),
 INT64 = VALUE_TYPE_INT64(),
 UINT64 = VALUE_TYPE_UINT64(),
 POINTER = VALUE_TYPE_POINTER(),
 FLOAT = VALUE_TYPE_FLOAT(),
 FLOAT32 = VALUE_TYPE_FLOAT32(),
 DOUBLE = VALUE_TYPE_DOUBLE(),
 STRING = VALUE_TYPE_STRING(),
 WSTRING = VALUE_TYPE_WSTRING(),
 OBJECT = VALUE_TYPE_OBJECT(),
 SIZED_STRING = VALUE_TYPE_SIZED_STRING(),
 BINARY = VALUE_TYPE_BINARY(),
 UBJSON = VALUE_TYPE_UBJSON(),
 TOKEN = VALUE_TYPE_TOKEN(),
};

class TInputMethod {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 commitText(text: any) {
   return input_method_commit_text(this.nativeObj, text);
 }

 dispatchKey(key: any) {
   return input_method_dispatch_key(this.nativeObj, key);
 }

 static instance() {
   return new TInputMethod(input_method());
 }

}

enum TKeyCode {
 KEY_RETURN = TK_KEY_RETURN(),
 KEY_ESCAPE = TK_KEY_ESCAPE(),
 KEY_BACKSPACE = TK_KEY_BACKSPACE(),
 KEY_TAB = TK_KEY_TAB(),
 KEY_SPACE = TK_KEY_SPACE(),
 KEY_EXCLAIM = TK_KEY_EXCLAIM(),
 KEY_QUOTEDBL = TK_KEY_QUOTEDBL(),
 KEY_HASH = TK_KEY_HASH(),
 KEY_PERCENT = TK_KEY_PERCENT(),
 KEY_DOLLAR = TK_KEY_DOLLAR(),
 KEY_AMPERSAND = TK_KEY_AMPERSAND(),
 KEY_QUOTE = TK_KEY_QUOTE(),
 KEY_LEFTPAREN = TK_KEY_LEFTPAREN(),
 KEY_RIGHTPAREN = TK_KEY_RIGHTPAREN(),
 KEY_ASTERISK = TK_KEY_ASTERISK(),
 KEY_PLUS = TK_KEY_PLUS(),
 KEY_COMMA = TK_KEY_COMMA(),
 KEY_MINUS = TK_KEY_MINUS(),
 KEY_PERIOD = TK_KEY_PERIOD(),
 KEY_SLASH = TK_KEY_SLASH(),
 KEY_0 = TK_KEY_0(),
 KEY_1 = TK_KEY_1(),
 KEY_2 = TK_KEY_2(),
 KEY_3 = TK_KEY_3(),
 KEY_4 = TK_KEY_4(),
 KEY_5 = TK_KEY_5(),
 KEY_6 = TK_KEY_6(),
 KEY_7 = TK_KEY_7(),
 KEY_8 = TK_KEY_8(),
 KEY_9 = TK_KEY_9(),
 KEY_COLON = TK_KEY_COLON(),
 KEY_SEMICOLON = TK_KEY_SEMICOLON(),
 KEY_LESS = TK_KEY_LESS(),
 KEY_EQUAL = TK_KEY_EQUAL(),
 KEY_GREATER = TK_KEY_GREATER(),
 KEY_QUESTION = TK_KEY_QUESTION(),
 KEY_AT = TK_KEY_AT(),
 KEY_LEFTBRACKET = TK_KEY_LEFTBRACKET(),
 KEY_BACKSLASH = TK_KEY_BACKSLASH(),
 KEY_RIGHTBRACKET = TK_KEY_RIGHTBRACKET(),
 KEY_CARET = TK_KEY_CARET(),
 KEY_UNDERSCORE = TK_KEY_UNDERSCORE(),
 KEY_BACKQUOTE = TK_KEY_BACKQUOTE(),
 KEY_a = TK_KEY_a(),
 KEY_b = TK_KEY_b(),
 KEY_c = TK_KEY_c(),
 KEY_d = TK_KEY_d(),
 KEY_e = TK_KEY_e(),
 KEY_f = TK_KEY_f(),
 KEY_g = TK_KEY_g(),
 KEY_h = TK_KEY_h(),
 KEY_i = TK_KEY_i(),
 KEY_j = TK_KEY_j(),
 KEY_k = TK_KEY_k(),
 KEY_l = TK_KEY_l(),
 KEY_m = TK_KEY_m(),
 KEY_n = TK_KEY_n(),
 KEY_o = TK_KEY_o(),
 KEY_p = TK_KEY_p(),
 KEY_q = TK_KEY_q(),
 KEY_r = TK_KEY_r(),
 KEY_s = TK_KEY_s(),
 KEY_t = TK_KEY_t(),
 KEY_u = TK_KEY_u(),
 KEY_v = TK_KEY_v(),
 KEY_w = TK_KEY_w(),
 KEY_x = TK_KEY_x(),
 KEY_y = TK_KEY_y(),
 KEY_z = TK_KEY_z(),
 KEY_A = TK_KEY_A(),
 KEY_B = TK_KEY_B(),
 KEY_C = TK_KEY_C(),
 KEY_D = TK_KEY_D(),
 KEY_E = TK_KEY_E(),
 KEY_F = TK_KEY_F(),
 KEY_G = TK_KEY_G(),
 KEY_H = TK_KEY_H(),
 KEY_I = TK_KEY_I(),
 KEY_J = TK_KEY_J(),
 KEY_K = TK_KEY_K(),
 KEY_L = TK_KEY_L(),
 KEY_M = TK_KEY_M(),
 KEY_N = TK_KEY_N(),
 KEY_O = TK_KEY_O(),
 KEY_P = TK_KEY_P(),
 KEY_Q = TK_KEY_Q(),
 KEY_R = TK_KEY_R(),
 KEY_S = TK_KEY_S(),
 KEY_T = TK_KEY_T(),
 KEY_U = TK_KEY_U(),
 KEY_V = TK_KEY_V(),
 KEY_W = TK_KEY_W(),
 KEY_X = TK_KEY_X(),
 KEY_Y = TK_KEY_Y(),
 KEY_Z = TK_KEY_Z(),
 KEY_DOT = TK_KEY_DOT(),
 KEY_DELETE = TK_KEY_DELETE(),
 KEY_LEFTBRACE = TK_KEY_LEFTBRACE(),
 KEY_RIGHTBRACE = TK_KEY_RIGHTBRACE(),
 KEY_LSHIFT = TK_KEY_LSHIFT(),
 KEY_RSHIFT = TK_KEY_RSHIFT(),
 KEY_LCTRL = TK_KEY_LCTRL(),
 KEY_RCTRL = TK_KEY_RCTRL(),
 KEY_LALT = TK_KEY_LALT(),
 KEY_RALT = TK_KEY_RALT(),
 KEY_CAPSLOCK = TK_KEY_CAPSLOCK(),
 KEY_HOME = TK_KEY_HOME(),
 KEY_END = TK_KEY_END(),
 KEY_INSERT = TK_KEY_INSERT(),
 KEY_UP = TK_KEY_UP(),
 KEY_DOWN = TK_KEY_DOWN(),
 KEY_LEFT = TK_KEY_LEFT(),
 KEY_RIGHT = TK_KEY_RIGHT(),
 KEY_PAGEUP = TK_KEY_PAGEUP(),
 KEY_PAGEDOWN = TK_KEY_PAGEDOWN(),
 KEY_F1 = TK_KEY_F1(),
 KEY_F2 = TK_KEY_F2(),
 KEY_F3 = TK_KEY_F3(),
 KEY_F4 = TK_KEY_F4(),
 KEY_F5 = TK_KEY_F5(),
 KEY_F6 = TK_KEY_F6(),
 KEY_F7 = TK_KEY_F7(),
 KEY_F8 = TK_KEY_F8(),
 KEY_F9 = TK_KEY_F9(),
 KEY_F10 = TK_KEY_F10(),
 KEY_F11 = TK_KEY_F11(),
 KEY_F12 = TK_KEY_F12(),
 KEY_MENU = TK_KEY_MENU(),
 KEY_COMMAND = TK_KEY_COMMAND(),
 KEY_BACK = TK_KEY_BACK(),
 KEY_CANCEL = TK_KEY_CANCEL(),
};

class TLocaleInfo {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static instance() {
   return new TLocaleInfo(locale_info());
 }

 tr(text: any) {
   return locale_info_tr(this.nativeObj, text);
 }

 change(language: any, country: any) {
   return locale_info_change(this.nativeObj, language, country);
 }

 on(type: any, on_event: any, ctx: any) {
   return locale_info_on(this.nativeObj, type, on_event, ctx);
 }

 off(id: any) {
   return locale_info_off(this.nativeObj, id);
 }

}

enum TStyleId {
 _ID_BG_COLOR = STYLE_ID_BG_COLOR(),
 _ID_FG_COLOR = STYLE_ID_FG_COLOR(),
 _ID_MASK_COLOR = STYLE_ID_MASK_COLOR(),
 _ID_FONT_NAME = STYLE_ID_FONT_NAME(),
 _ID_FONT_SIZE = STYLE_ID_FONT_SIZE(),
 _ID_FONT_STYLE = STYLE_ID_FONT_STYLE(),
 _ID_TEXT_COLOR = STYLE_ID_TEXT_COLOR(),
 _ID_TIPS_TEXT_COLOR = STYLE_ID_TIPS_TEXT_COLOR(),
 _ID_TEXT_ALIGN_H = STYLE_ID_TEXT_ALIGN_H(),
 _ID_TEXT_ALIGN_V = STYLE_ID_TEXT_ALIGN_V(),
 _ID_BORDER_COLOR = STYLE_ID_BORDER_COLOR(),
 _ID_BORDER_WIDTH = STYLE_ID_BORDER_WIDTH(),
 _ID_BORDER = STYLE_ID_BORDER(),
 _ID_BG_IMAGE = STYLE_ID_BG_IMAGE(),
 _ID_BG_IMAGE_DRAW_TYPE = STYLE_ID_BG_IMAGE_DRAW_TYPE(),
 _ID_ICON = STYLE_ID_ICON(),
 _ID_FG_IMAGE = STYLE_ID_FG_IMAGE(),
 _ID_FG_IMAGE_DRAW_TYPE = STYLE_ID_FG_IMAGE_DRAW_TYPE(),
 _ID_SPACER = STYLE_ID_SPACER(),
 _ID_MARGIN = STYLE_ID_MARGIN(),
 _ID_MARGIN_LEFT = STYLE_ID_MARGIN_LEFT(),
 _ID_MARGIN_RIGHT = STYLE_ID_MARGIN_RIGHT(),
 _ID_MARGIN_TOP = STYLE_ID_MARGIN_TOP(),
 _ID_MARGIN_BOTTOM = STYLE_ID_MARGIN_BOTTOM(),
 _ID_ICON_AT = STYLE_ID_ICON_AT(),
 _ID_ACTIVE_ICON = STYLE_ID_ACTIVE_ICON(),
 _ID_X_OFFSET = STYLE_ID_X_OFFSET(),
 _ID_Y_OFFSET = STYLE_ID_Y_OFFSET(),
 _ID_SELECTED_BG_COLOR = STYLE_ID_SELECTED_BG_COLOR(),
 _ID_SELECTED_FG_COLOR = STYLE_ID_SELECTED_FG_COLOR(),
 _ID_SELECTED_TEXT_COLOR = STYLE_ID_SELECTED_TEXT_COLOR(),
 _ID_ROUND_RADIUS = STYLE_ID_ROUND_RADIUS(),
};

class TStyle {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 notifyWidgetStateChanged(widget: any) {
   return style_notify_widget_state_changed(this.nativeObj, widget ? widget.nativeObj : null);
 }

 isValid() {
   return style_is_valid(this.nativeObj);
 }

 getInt(name: any, defval: any) {
   return style_get_int(this.nativeObj, name, defval);
 }

 getStr(name: any, defval: any) {
   return style_get_str(this.nativeObj, name, defval);
 }

 set(state: any, name: any, value: any) {
   return style_set(this.nativeObj, state, name, value ? value.nativeObj : null);
 }

 isMutable() {
   return style_is_mutable(this.nativeObj);
 }

}

class TTheme {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static instance() {
   return new TTheme(theme());
 }

}

class TTimer {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static add(on_timer: any, ctx: any, duration: any) {
   return timer_add(on_timer, ctx, duration);
 }

 static remove(timer_id: any) {
   return timer_remove(timer_id);
 }

 static reset(timer_id: any) {
   return timer_reset(timer_id);
 }

 static modify(timer_id: any, duration: any) {
   return timer_modify(timer_id, duration);
 }

}

enum TAlignV {
 NONE = ALIGN_V_NONE(),
 MIDDLE = ALIGN_V_MIDDLE(),
 TOP = ALIGN_V_TOP(),
 BOTTOM = ALIGN_V_BOTTOM(),
};

enum TAlignH {
 NONE = ALIGN_H_NONE(),
 CENTER = ALIGN_H_CENTER(),
 LEFT = ALIGN_H_LEFT(),
 RIGHT = ALIGN_H_RIGHT(),
};

enum TBitmapFormat {
 NONE = BITMAP_FMT_NONE(),
 RGBA8888 = BITMAP_FMT_RGBA8888(),
 ABGR8888 = BITMAP_FMT_ABGR8888(),
 BGRA8888 = BITMAP_FMT_BGRA8888(),
 ARGB8888 = BITMAP_FMT_ARGB8888(),
 RGB565 = BITMAP_FMT_RGB565(),
 BGR565 = BITMAP_FMT_BGR565(),
 RGB888 = BITMAP_FMT_RGB888(),
 BGR888 = BITMAP_FMT_BGR888(),
 GRAY = BITMAP_FMT_GRAY(),
 MONO = BITMAP_FMT_MONO(),
};

enum TBitmapFlag {
 NONE = BITMAP_FLAG_NONE(),
 OPAQUE = BITMAP_FLAG_OPAQUE(),
 IMMUTABLE = BITMAP_FLAG_IMMUTABLE(),
 TEXTURE = BITMAP_FLAG_TEXTURE(),
 CHANGED = BITMAP_FLAG_CHANGED(),
 PREMULTI_ALPHA = BITMAP_FLAG_PREMULTI_ALPHA(),
};

class TVgcanvas {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static cast(vg: any) {
   return new TVgcanvas(vgcanvas_cast(vg ? (vg.nativeObj || vg) : null));
 }

 flush() {
   return vgcanvas_flush(this.nativeObj);
 }

 beginPath() {
   return vgcanvas_begin_path(this.nativeObj);
 }

 moveTo(x: any, y: any) {
   return vgcanvas_move_to(this.nativeObj, x, y);
 }

 lineTo(x: any, y: any) {
   return vgcanvas_line_to(this.nativeObj, x, y);
 }

 quadTo(cpx: any, cpy: any, x: any, y: any) {
   return vgcanvas_quad_to(this.nativeObj, cpx, cpy, x, y);
 }

 bezierTo(cp1x: any, cp1y: any, cp2x: any, cp2y: any, x: any, y: any) {
   return vgcanvas_bezier_to(this.nativeObj, cp1x, cp1y, cp2x, cp2y, x, y);
 }

 arcTo(x1: any, y1: any, x2: any, y2: any, r: any) {
   return vgcanvas_arc_to(this.nativeObj, x1, y1, x2, y2, r);
 }

 arc(x: any, y: any, r: any, start_angle: any, end_angle: any, ccw: any) {
   return vgcanvas_arc(this.nativeObj, x, y, r, start_angle, end_angle, ccw);
 }

 isPointInPath(x: any, y: any) {
   return vgcanvas_is_point_in_path(this.nativeObj, x, y);
 }

 rect(x: any, y: any, w: any, h: any) {
   return vgcanvas_rect(this.nativeObj, x, y, w, h);
 }

 roundedRect(x: any, y: any, w: any, h: any, r: any) {
   return vgcanvas_rounded_rect(this.nativeObj, x, y, w, h, r);
 }

 ellipse(x: any, y: any, rx: any, ry: any) {
   return vgcanvas_ellipse(this.nativeObj, x, y, rx, ry);
 }

 closePath() {
   return vgcanvas_close_path(this.nativeObj);
 }

 rotate(rad: any) {
   return vgcanvas_rotate(this.nativeObj, rad);
 }

 scale(x: any, y: any) {
   return vgcanvas_scale(this.nativeObj, x, y);
 }

 translate(x: any, y: any) {
   return vgcanvas_translate(this.nativeObj, x, y);
 }

 transform(a: any, b: any, c: any, d: any, e: any, f: any) {
   return vgcanvas_transform(this.nativeObj, a, b, c, d, e, f);
 }

 setTransform(a: any, b: any, c: any, d: any, e: any, f: any) {
   return vgcanvas_set_transform(this.nativeObj, a, b, c, d, e, f);
 }

 clipRect(x: any, y: any, w: any, h: any) {
   return vgcanvas_clip_rect(this.nativeObj, x, y, w, h);
 }

 fill() {
   return vgcanvas_fill(this.nativeObj);
 }

 stroke() {
   return vgcanvas_stroke(this.nativeObj);
 }

 paint(stroke: any, img: any) {
   return vgcanvas_paint(this.nativeObj, stroke, img ? img.nativeObj : null);
 }

 setFont(font: any) {
   return vgcanvas_set_font(this.nativeObj, font);
 }

 setFontSize(font: any) {
   return vgcanvas_set_font_size(this.nativeObj, font);
 }

 setTextAlign(value: any) {
   return vgcanvas_set_text_align(this.nativeObj, value);
 }

 setTextBaseline(value: any) {
   return vgcanvas_set_text_baseline(this.nativeObj, value);
 }

 fillText(text: any, x: any, y: any, max_width: any) {
   return vgcanvas_fill_text(this.nativeObj, text, x, y, max_width);
 }

 measureText(text: any) {
   return vgcanvas_measure_text(this.nativeObj, text);
 }

 drawImage(img: any, sx: any, sy: any, sw: any, sh: any, dx: any, dy: any, dw: any, dh: any) {
   return vgcanvas_draw_image(this.nativeObj, img ? img.nativeObj : null, sx, sy, sw, sh, dx, dy, dw, dh);
 }

 drawIcon(img: any, sx: any, sy: any, sw: any, sh: any, dx: any, dy: any, dw: any, dh: any) {
   return vgcanvas_draw_icon(this.nativeObj, img ? img.nativeObj : null, sx, sy, sw, sh, dx, dy, dw, dh);
 }

 setAntialias(value: any) {
   return vgcanvas_set_antialias(this.nativeObj, value);
 }

 setGlobalAlpha(alpha: any) {
   return vgcanvas_set_global_alpha(this.nativeObj, alpha);
 }

 setLineWidth(value: any) {
   return vgcanvas_set_line_width(this.nativeObj, value);
 }

 setFillColor(color: any) {
   return vgcanvas_set_fill_color_str(this.nativeObj, color);
 }

 setStrokeColor(color: any) {
   return vgcanvas_set_stroke_color_str(this.nativeObj, color);
 }

 setLineCap(value: any) {
   return vgcanvas_set_line_cap(this.nativeObj, value);
 }

 setLineJoin(value: any) {
   return vgcanvas_set_line_join(this.nativeObj, value);
 }

 setMiterLimit(value: any) {
   return vgcanvas_set_miter_limit(this.nativeObj, value);
 }

 save() {
   return vgcanvas_save(this.nativeObj);
 }

 restore() {
   return vgcanvas_restore(this.nativeObj);
 }

 get w() {
   return vgcanvas_t_get_prop_w(this.nativeObj);
 }

 get h() {
   return vgcanvas_t_get_prop_h(this.nativeObj);
 }

 get ratio() {
   return vgcanvas_t_get_prop_ratio(this.nativeObj);
 }

 get antiAlias() {
   return vgcanvas_t_get_prop_anti_alias(this.nativeObj);
 }

 get lineWidth() {
   return vgcanvas_t_get_prop_line_width(this.nativeObj);
 }

 get globalAlpha() {
   return vgcanvas_t_get_prop_global_alpha(this.nativeObj);
 }

 get miterLimit() {
   return vgcanvas_t_get_prop_miter_limit(this.nativeObj);
 }

 get lineCap() {
   return vgcanvas_t_get_prop_line_cap(this.nativeObj);
 }

 get lineJoin() {
   return vgcanvas_t_get_prop_line_join(this.nativeObj);
 }

 get font() {
   return vgcanvas_t_get_prop_font(this.nativeObj);
 }

 get fontSize() {
   return vgcanvas_t_get_prop_font_size(this.nativeObj);
 }

 get textAlign() {
   return vgcanvas_t_get_prop_text_align(this.nativeObj);
 }

 get textBaseline() {
   return vgcanvas_t_get_prop_text_baseline(this.nativeObj);
 }

}

enum TWidgetProp {
 EXEC = WIDGET_PROP_EXEC(),
 X = WIDGET_PROP_X(),
 Y = WIDGET_PROP_Y(),
 W = WIDGET_PROP_W(),
 H = WIDGET_PROP_H(),
 CANVAS = WIDGET_PROP_CANVAS(),
 LOCALIZE_OPTIONS = WIDGET_PROP_LOCALIZE_OPTIONS(),
 NATIVE_WINDOW = WIDGET_PROP_NATIVE_WINDOW(),
 HIGHLIGHT = WIDGET_PROP_HIGHLIGHT(),
 BAR_SIZE = WIDGET_PROP_BAR_SIZE(),
 OPACITY = WIDGET_PROP_OPACITY(),
 MIN_W = WIDGET_PROP_MIN_W(),
 MAX_W = WIDGET_PROP_MAX_W(),
 CHILDREN_LAYOUT = WIDGET_PROP_CHILDREN_LAYOUT(),
 LAYOUT = WIDGET_PROP_LAYOUT(),
 SELF_LAYOUT = WIDGET_PROP_SELF_LAYOUT(),
 LAYOUT_W = WIDGET_PROP_LAYOUT_W(),
 LAYOUT_H = WIDGET_PROP_LAYOUT_H(),
 VIRTUAL_W = WIDGET_PROP_VIRTUAL_W(),
 VIRTUAL_H = WIDGET_PROP_VIRTUAL_H(),
 NAME = WIDGET_PROP_NAME(),
 TYPE = WIDGET_PROP_TYPE(),
 CLOSABLE = WIDGET_PROP_CLOSABLE(),
 CURSOR = WIDGET_PROP_CURSOR(),
 VALUE = WIDGET_PROP_VALUE(),
 LENGTH = WIDGET_PROP_LENGTH(),
 TEXT = WIDGET_PROP_TEXT(),
 TR_TEXT = WIDGET_PROP_TR_TEXT(),
 STYLE = WIDGET_PROP_STYLE(),
 ENABLE = WIDGET_PROP_ENABLE(),
 FEEDBACK = WIDGET_PROP_FEEDBACK(),
 FLOATING = WIDGET_PROP_FLOATING(),
 MARGIN = WIDGET_PROP_MARGIN(),
 SPACING = WIDGET_PROP_SPACING(),
 LEFT_MARGIN = WIDGET_PROP_LEFT_MARGIN(),
 RIGHT_MARGIN = WIDGET_PROP_RIGHT_MARGIN(),
 TOP_MARGIN = WIDGET_PROP_TOP_MARGIN(),
 BOTTOM_MARGIN = WIDGET_PROP_BOTTOM_MARGIN(),
 STEP = WIDGET_PROP_STEP(),
 VISIBLE = WIDGET_PROP_VISIBLE(),
 SENSITIVE = WIDGET_PROP_SENSITIVE(),
 ANIMATION = WIDGET_PROP_ANIMATION(),
 ANIM_HINT = WIDGET_PROP_ANIM_HINT(),
 FULLSCREEN = WIDGET_PROP_FULLSCREEN(),
 OPEN_ANIM_HINT = WIDGET_PROP_OPEN_ANIM_HINT(),
 CLOSE_ANIM_HINT = WIDGET_PROP_CLOSE_ANIM_HINT(),
 MIN = WIDGET_PROP_MIN(),
 TIPS = WIDGET_PROP_TIPS(),
 INPUT_TYPE = WIDGET_PROP_INPUT_TYPE(),
 READONLY = WIDGET_PROP_READONLY(),
 PASSWORD_VISIBLE = WIDGET_PROP_PASSWORD_VISIBLE(),
 ACTIVE = WIDGET_PROP_ACTIVE(),
 VERTICAL = WIDGET_PROP_VERTICAL(),
 SHOW_TEXT = WIDGET_PROP_SHOW_TEXT(),
 XOFFSET = WIDGET_PROP_XOFFSET(),
 YOFFSET = WIDGET_PROP_YOFFSET(),
 ALIGN_V = WIDGET_PROP_ALIGN_V(),
 ALIGN_H = WIDGET_PROP_ALIGN_H(),
 AUTO_PLAY = WIDGET_PROP_AUTO_PLAY(),
 LOOP = WIDGET_PROP_LOOP(),
 AUTO_FIX = WIDGET_PROP_AUTO_FIX(),
 SELECT_NONE_WHEN_FOCUSED = WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED(),
 OPEN_IM_WHEN_FOCUSED = WIDGET_PROP_OPEN_IM_WHEN_FOCUSED(),
 X_MIN = WIDGET_PROP_X_MIN(),
 X_MAX = WIDGET_PROP_X_MAX(),
 Y_MIN = WIDGET_PROP_Y_MIN(),
 Y_MAX = WIDGET_PROP_Y_MAX(),
 MAX = WIDGET_PROP_MAX(),
 GRAB_KEYS = WIDGET_PROP_GRAB_KEYS(),
 ROW = WIDGET_PROP_ROW(),
 STATE_FOR_STYLE = WIDGET_PROP_STATE_FOR_STYLE(),
 THEME = WIDGET_PROP_THEME(),
 STAGE = WIDGET_PROP_STAGE(),
 IMAGE_MANAGER = WIDGET_PROP_IMAGE_MANAGER(),
 ASSETS_MANAGER = WIDGET_PROP_ASSETS_MANAGER(),
 LOCALE_INFO = WIDGET_PROP_LOCALE_INFO(),
 FONT_MANAGER = WIDGET_PROP_FONT_MANAGER(),
 THEME_OBJ = WIDGET_PROP_THEME_OBJ(),
 DEFAULT_THEME_OBJ = WIDGET_PROP_DEFAULT_THEME_OBJ(),
 ITEM_WIDTH = WIDGET_PROP_ITEM_WIDTH(),
 ITEM_HEIGHT = WIDGET_PROP_ITEM_HEIGHT(),
 DEFAULT_ITEM_HEIGHT = WIDGET_PROP_DEFAULT_ITEM_HEIGHT(),
 XSLIDABLE = WIDGET_PROP_XSLIDABLE(),
 YSLIDABLE = WIDGET_PROP_YSLIDABLE(),
 REPEAT = WIDGET_PROP_REPEAT(),
 ENABLE_LONG_PRESS = WIDGET_PROP_ENABLE_LONG_PRESS(),
 ANIMATABLE = WIDGET_PROP_ANIMATABLE(),
 AUTO_HIDE_SCROLL_BAR = WIDGET_PROP_AUTO_HIDE_SCROLL_BAR(),
 IMAGE = WIDGET_PROP_IMAGE(),
 FORMAT = WIDGET_PROP_FORMAT(),
 DRAW_TYPE = WIDGET_PROP_DRAW_TYPE(),
 SELECTABLE = WIDGET_PROP_SELECTABLE(),
 CLICKABLE = WIDGET_PROP_CLICKABLE(),
 SCALE_X = WIDGET_PROP_SCALE_X(),
 SCALE_Y = WIDGET_PROP_SCALE_Y(),
 ANCHOR_X = WIDGET_PROP_ANCHOR_X(),
 ANCHOR_Y = WIDGET_PROP_ANCHOR_Y(),
 ROTATION = WIDGET_PROP_ROTATION(),
 COMPACT = WIDGET_PROP_COMPACT(),
 SCROLLABLE = WIDGET_PROP_SCROLLABLE(),
 ICON = WIDGET_PROP_ICON(),
 OPTIONS = WIDGET_PROP_OPTIONS(),
 SELECTED = WIDGET_PROP_SELECTED(),
 CHECKED = WIDGET_PROP_CHECKED(),
 ACTIVE_ICON = WIDGET_PROP_ACTIVE_ICON(),
 OPEN_WINDOW = WIDGET_PROP_OPEN_WINDOW(),
 SELECTED_INDEX = WIDGET_PROP_SELECTED_INDEX(),
 CLOSE_WHEN_CLICK = WIDGET_PROP_CLOSE_WHEN_CLICK(),
 CLOSE_WHEN_CLICK_OUTSIDE = WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE(),
 LINE_GAP = WIDGET_PROP_LINE_GAP(),
 BG_COLOR = WIDGET_PROP_BG_COLOR(),
 BORDER_COLOR = WIDGET_PROP_BORDER_COLOR(),
 DELAY = WIDGET_PROP_DELAY(),
 IS_KEYBOARD = WIDGET_PROP_IS_KEYBOARD(),
 FOCUSED = WIDGET_PROP_FOCUSED(),
 FOCUS = WIDGET_PROP_FOCUS(),
 FOCUSABLE = WIDGET_PROP_FOCUSABLE(),
 WITH_FOCUS_STATE = WIDGET_PROP_WITH_FOCUS_STATE(),
 MOVE_FOCUS_PREV_KEY = WIDGET_PROP_MOVE_FOCUS_PREV_KEY(),
 MOVE_FOCUS_NEXT_KEY = WIDGET_PROP_MOVE_FOCUS_NEXT_KEY(),
 MOVE_FOCUS_UP_KEY = WIDGET_PROP_MOVE_FOCUS_UP_KEY(),
 MOVE_FOCUS_DOWN_KEY = WIDGET_PROP_MOVE_FOCUS_DOWN_KEY(),
 MOVE_FOCUS_LEFT_KEY = WIDGET_PROP_MOVE_FOCUS_LEFT_KEY(),
 MOVE_FOCUS_RIGHT_KEY = WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY(),
};

enum TWidgetType {
 NONE = WIDGET_TYPE_NONE(),
 WINDOW_MANAGER = WIDGET_TYPE_WINDOW_MANAGER(),
 NORMAL_WINDOW = WIDGET_TYPE_NORMAL_WINDOW(),
 OVERLAY = WIDGET_TYPE_OVERLAY(),
 TOOL_BAR = WIDGET_TYPE_TOOL_BAR(),
 DIALOG = WIDGET_TYPE_DIALOG(),
 POPUP = WIDGET_TYPE_POPUP(),
 SYSTEM_BAR = WIDGET_TYPE_SYSTEM_BAR(),
 SYSTEM_BAR_BOTTOM = WIDGET_TYPE_SYSTEM_BAR_BOTTOM(),
 SPRITE = WIDGET_TYPE_SPRITE(),
 KEYBOARD = WIDGET_TYPE_KEYBOARD(),
 DND = WIDGET_TYPE_DND(),
 LABEL = WIDGET_TYPE_LABEL(),
 BUTTON = WIDGET_TYPE_BUTTON(),
 IMAGE = WIDGET_TYPE_IMAGE(),
 EDIT = WIDGET_TYPE_EDIT(),
 PROGRESS_BAR = WIDGET_TYPE_PROGRESS_BAR(),
 GROUP_BOX = WIDGET_TYPE_GROUP_BOX(),
 CHECK_BUTTON = WIDGET_TYPE_CHECK_BUTTON(),
 RADIO_BUTTON = WIDGET_TYPE_RADIO_BUTTON(),
 DIALOG_TITLE = WIDGET_TYPE_DIALOG_TITLE(),
 DIALOG_CLIENT = WIDGET_TYPE_DIALOG_CLIENT(),
 SLIDER = WIDGET_TYPE_SLIDER(),
 VIEW = WIDGET_TYPE_VIEW(),
 COMBO_BOX = WIDGET_TYPE_COMBO_BOX(),
 COMBO_BOX_ITEM = WIDGET_TYPE_COMBO_BOX_ITEM(),
 SLIDE_VIEW = WIDGET_TYPE_SLIDE_VIEW(),
 SLIDE_INDICATOR = WIDGET_TYPE_SLIDE_INDICATOR(),
 SLIDE_INDICATOR_ARC = WIDGET_TYPE_SLIDE_INDICATOR_ARC(),
 PAGES = WIDGET_TYPE_PAGES(),
 TAB_BUTTON = WIDGET_TYPE_TAB_BUTTON(),
 TAB_CONTROL = WIDGET_TYPE_TAB_CONTROL(),
 TAB_BUTTON_GROUP = WIDGET_TYPE_TAB_BUTTON_GROUP(),
 BUTTON_GROUP = WIDGET_TYPE_BUTTON_GROUP(),
 CANDIDATES = WIDGET_TYPE_CANDIDATES(),
 SPIN_BOX = WIDGET_TYPE_SPIN_BOX(),
 DRAGGER = WIDGET_TYPE_DRAGGER(),
 SCROLL_BAR = WIDGET_TYPE_SCROLL_BAR(),
 SCROLL_BAR_DESKTOP = WIDGET_TYPE_SCROLL_BAR_DESKTOP(),
 SCROLL_BAR_MOBILE = WIDGET_TYPE_SCROLL_BAR_MOBILE(),
 SCROLL_VIEW = WIDGET_TYPE_SCROLL_VIEW(),
 LIST_VIEW = WIDGET_TYPE_LIST_VIEW(),
 LIST_VIEW_H = WIDGET_TYPE_LIST_VIEW_H(),
 LIST_ITEM = WIDGET_TYPE_LIST_ITEM(),
 COLOR_PICKER = WIDGET_TYPE_COLOR_PICKER(),
 COLOR_COMPONENT = WIDGET_TYPE_COLOR_COMPONENT(),
 COLOR_TILE = WIDGET_TYPE_COLOR_TILE(),
 RICH_TEXT = WIDGET_TYPE_RICH_TEXT(),
 APP_BAR = WIDGET_TYPE_APP_BAR(),
 GRID = WIDGET_TYPE_GRID(),
 GRID_ITEM = WIDGET_TYPE_GRID_ITEM(),
 ROW = WIDGET_TYPE_ROW(),
 COLUMN = WIDGET_TYPE_COLUMN(),
 CALIBRATION_WIN = WIDGET_TYPE_CALIBRATION_WIN(),
};

enum TWindowStage {
 NONE = WINDOW_STAGE_NONE(),
 CREATED = WINDOW_STAGE_CREATED(),
 OPENED = WINDOW_STAGE_OPENED(),
 CLOSED = WINDOW_STAGE_CLOSED(),
};

enum TWindowClosable {
 YES = WINDOW_CLOSABLE_YES(),
 NO = WINDOW_CLOSABLE_NO(),
 CONFIRM = WINDOW_CLOSABLE_CONFIRM(),
};

enum TWidgetState {
 STATE_NONE = WIDGET_STATE_NONE(),
 STATE_NORMAL = WIDGET_STATE_NORMAL(),
 STATE_PRESSED = WIDGET_STATE_PRESSED(),
 STATE_OVER = WIDGET_STATE_OVER(),
 STATE_DISABLE = WIDGET_STATE_DISABLE(),
 STATE_FOCUSED = WIDGET_STATE_FOCUSED(),
 STATE_CHECKED = WIDGET_STATE_CHECKED(),
 STATE_UNCHECKED = WIDGET_STATE_UNCHECKED(),
 STATE_EMPTY = WIDGET_STATE_EMPTY(),
 STATE_EMPTY_FOCUS = WIDGET_STATE_EMPTY_FOCUS(),
 STATE_ERROR = WIDGET_STATE_ERROR(),
 STATE_SELECTED = WIDGET_STATE_SELECTED(),
 STATE_NORMAL_OF_CHECKED = WIDGET_STATE_NORMAL_OF_CHECKED(),
 STATE_PRESSED_OF_CHECKED = WIDGET_STATE_PRESSED_OF_CHECKED(),
 STATE_OVER_OF_CHECKED = WIDGET_STATE_OVER_OF_CHECKED(),
 STATE_FOCUSED_OF_CHECKED = WIDGET_STATE_FOCUSED_OF_CHECKED(),
 STATE_NORMAL_OF_ACTIVE = WIDGET_STATE_NORMAL_OF_ACTIVE(),
 STATE_PRESSED_OF_ACTIVE = WIDGET_STATE_PRESSED_OF_ACTIVE(),
 STATE_OVER_OF_ACTIVE = WIDGET_STATE_OVER_OF_ACTIVE(),
 STATE_FOCUSED_OF_ACTIVE = WIDGET_STATE_FOCUSED_OF_ACTIVE(),
};

class TWidget {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 countChildren() {
   return widget_count_children(this.nativeObj);
 }

 getChild(index: any) {
   return new TWidget(widget_get_child(this.nativeObj, index));
 }

 indexOf() {
   return widget_index_of(this.nativeObj);
 }

 move(x: any, y: any) {
   return widget_move(this.nativeObj, x, y);
 }

 resize(w: any, h: any) {
   return widget_resize(this.nativeObj, w, h);
 }

 moveResize(x: any, y: any, w: any, h: any) {
   return widget_move_resize(this.nativeObj, x, y, w, h);
 }

 setValue(value: any) {
   return widget_set_value(this.nativeObj, value);
 }

 animateValueTo(value: any, duration: any) {
   return widget_animate_value_to(this.nativeObj, value, duration);
 }

 addValue(delta: any) {
   return widget_add_value(this.nativeObj, delta);
 }

 useStyle(style: any) {
   return widget_use_style(this.nativeObj, style);
 }

 setText(text: any) {
   return widget_set_text_utf8(this.nativeObj, text);
 }

 setTrText(text: any) {
   return widget_set_tr_text(this.nativeObj, text);
 }

 getValue() {
   return widget_get_value(this.nativeObj);
 }

 getText() {
   return widget_get_text(this.nativeObj);
 }

 setName(name: any) {
   return widget_set_name(this.nativeObj, name);
 }

 setTheme(name: any) {
   return widget_set_theme(this.nativeObj, name);
 }

 setCursor(cursor: any) {
   return widget_set_cursor(this.nativeObj, cursor);
 }

 setAnimation(animation: any) {
   return widget_set_animation(this.nativeObj, animation);
 }

 createAnimator(animation: any) {
   return widget_create_animator(this.nativeObj, animation);
 }

 startAnimator(name: any) {
   return widget_start_animator(this.nativeObj, name);
 }

 setAnimatorTimeScale(name: any, time_scale: any) {
   return widget_set_animator_time_scale(this.nativeObj, name, time_scale);
 }

 pauseAnimator(name: any) {
   return widget_pause_animator(this.nativeObj, name);
 }

 stopAnimator(name: any) {
   return widget_stop_animator(this.nativeObj, name);
 }

 destroyAnimator(name: any) {
   return widget_destroy_animator(this.nativeObj, name);
 }

 setEnable(enable: any) {
   return widget_set_enable(this.nativeObj, enable);
 }

 setFeedback(feedback: any) {
   return widget_set_feedback(this.nativeObj, feedback);
 }

 setFloating(floating: any) {
   return widget_set_floating(this.nativeObj, floating);
 }

 setFocused(focused: any) {
   return widget_set_focused(this.nativeObj, focused);
 }

 child(name: any) {
   return new TWidget(widget_child(this.nativeObj, name));
 }

 lookup(name: any, recursive: any) {
   return new TWidget(widget_lookup(this.nativeObj, name, recursive));
 }

 lookupByType(type: any, recursive: any) {
   return new TWidget(widget_lookup_by_type(this.nativeObj, type, recursive));
 }

 setVisible(visible: any, recursive: any) {
   return widget_set_visible(this.nativeObj, visible, recursive);
 }

 setVisibleOnly(visible: any) {
   return widget_set_visible_only(this.nativeObj, visible);
 }

 setSensitive(sensitive: any) {
   return widget_set_sensitive(this.nativeObj, sensitive);
 }

 on(type: any, on_event: any, ctx: any) {
   return widget_on(this.nativeObj, type, on_event, ctx);
 }

 onWithTag(type: any, on_event: any, ctx: any, tag: any) {
   return widget_on_with_tag(this.nativeObj, type, on_event, ctx, tag);
 }

 off(id: any) {
   return widget_off(this.nativeObj, id);
 }

 invalidateForce(r: any) {
   return widget_invalidate_force(this.nativeObj, r ? r.nativeObj : null);
 }

 setPropStr(name: any, v: any) {
   return widget_set_prop_str(this.nativeObj, name, v);
 }

 getPropStr(name: any, defval: any) {
   return widget_get_prop_str(this.nativeObj, name, defval);
 }

 setPropInt(name: any, v: any) {
   return widget_set_prop_int(this.nativeObj, name, v);
 }

 getPropInt(name: any, defval: any) {
   return widget_get_prop_int(this.nativeObj, name, defval);
 }

 setPropBool(name: any, v: any) {
   return widget_set_prop_bool(this.nativeObj, name, v);
 }

 getPropBool(name: any, defval: any) {
   return widget_get_prop_bool(this.nativeObj, name, defval);
 }

 isWindowOpened() {
   return widget_is_window_opened(this.nativeObj);
 }

 isWindow() {
   return widget_is_window(this.nativeObj);
 }

 isDesigningWindow() {
   return widget_is_designing_window(this.nativeObj);
 }

 isWindowManager() {
   return widget_is_window_manager(this.nativeObj);
 }

 foreach(visit: any, ctx: any) {
   return widget_foreach(this.nativeObj, visit, ctx);
 }

 getWindow() {
   return new TWidget(widget_get_window(this.nativeObj));
 }

 getWindowManager() {
   return new TWidget(widget_get_window_manager(this.nativeObj));
 }

 getType() {
   return widget_get_type(this.nativeObj);
 }

 clone(parent: any) {
   return new TWidget(widget_clone(this.nativeObj, parent ? parent.nativeObj : null));
 }

 equal(other: any) {
   return widget_equal(this.nativeObj, other ? other.nativeObj : null);
 }

 static cast(widget: any) {
   return new TWidget(widget_cast(widget ? (widget.nativeObj || widget) : null));
 }

 destroy() {
   return widget_destroy(this.nativeObj);
 }

 unref() {
   return widget_unref(this.nativeObj);
 }

 layout() {
   return widget_layout(this.nativeObj);
 }

 setSelfLayout(params: any) {
   return widget_set_self_layout(this.nativeObj, params);
 }

 setChildrenLayout(params: any) {
   return widget_set_children_layout(this.nativeObj, params);
 }

 setSelfLayoutParams(x: any, y: any, w: any, h: any) {
   return widget_set_self_layout_params(this.nativeObj, x, y, w, h);
 }

 setStyleInt(state_and_name: any, value: any) {
   return widget_set_style_int(this.nativeObj, state_and_name, value);
 }

 setStyleStr(state_and_name: any, value: any) {
   return widget_set_style_str(this.nativeObj, state_and_name, value);
 }

 setStyleColor(state_and_name: any, value: any) {
   return widget_set_style_color(this.nativeObj, state_and_name, value);
 }

 get x() {
   return widget_t_get_prop_x(this.nativeObj);
 }

 get y() {
   return widget_t_get_prop_y(this.nativeObj);
 }

 get w() {
   return widget_t_get_prop_w(this.nativeObj);
 }

 get h() {
   return widget_t_get_prop_h(this.nativeObj);
 }

 get name() {
   return widget_t_get_prop_name(this.nativeObj);
 }

 get trText() {
   return widget_t_get_prop_tr_text(this.nativeObj);
 }

 get style() {
   return widget_t_get_prop_style(this.nativeObj);
 }

 get animation() {
   return widget_t_get_prop_animation(this.nativeObj);
 }

 get enable() {
   return widget_t_get_prop_enable(this.nativeObj);
 }

 get feedback() {
   return widget_t_get_prop_feedback(this.nativeObj);
 }

 set visible(value) {
   widget_t_set_prop_visible(this.nativeObj, value);
 }

 get visible() {
   return widget_t_get_prop_visible(this.nativeObj);
 }

 set sensitive(value) {
   widget_t_set_prop_sensitive(this.nativeObj, value);
 }

 get sensitive() {
   return widget_t_get_prop_sensitive(this.nativeObj);
 }

 set focusable(value) {
   widget_t_set_prop_focusable(this.nativeObj, value);
 }

 get focusable() {
   return widget_t_get_prop_focusable(this.nativeObj);
 }

 set withFocusState(value) {
   widget_t_set_prop_with_focus_state(this.nativeObj, value);
 }

 get withFocusState() {
   return widget_t_get_prop_with_focus_state(this.nativeObj);
 }

 get floating() {
   return widget_t_get_prop_floating(this.nativeObj);
 }

}

enum TRet {
 OK = RET_OK(),
 OOM = RET_OOM(),
 FAIL = RET_FAIL(),
 NOT_IMPL = RET_NOT_IMPL(),
 QUIT = RET_QUIT(),
 FOUND = RET_FOUND(),
 BUSY = RET_BUSY(),
 REMOVE = RET_REMOVE(),
 REPEAT = RET_REPEAT(),
 NOT_FOUND = RET_NOT_FOUND(),
 DONE = RET_DONE(),
 STOP = RET_STOP(),
 SKIP = RET_SKIP(),
 CONTINUE = RET_CONTINUE(),
 OBJECT_CHANGED = RET_OBJECT_CHANGED(),
 ITEMS_CHANGED = RET_ITEMS_CHANGED(),
 BAD_PARAMS = RET_BAD_PARAMS(),
 TIMEOUT = RET_TIMEOUT(),
 CRC = RET_CRC(),
 IO = RET_IO(),
 EOS = RET_EOS(),
};

class TTimerManager {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

}

class TTimeNow {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static s() {
   return time_now_s();
 }

 static ms() {
   return time_now_ms();
 }

}

class TRect {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static create(x: any, y: any, w: any, h: any) {
   return new TRect(rect_create(x, y, w, h));
 }

 set(x: any, y: any, w: any, h: any) {
   return new TRect(rect_set(this.nativeObj, x, y, w, h));
 }

 static cast(rect: any) {
   return new TRect(rect_cast(rect ? (rect.nativeObj || rect) : null));
 }

 destroy() {
   return rect_destroy(this.nativeObj);
 }

 get x() {
   return rect_t_get_prop_x(this.nativeObj);
 }

 get y() {
   return rect_t_get_prop_y(this.nativeObj);
 }

 get w() {
   return rect_t_get_prop_w(this.nativeObj);
 }

 get h() {
   return rect_t_get_prop_h(this.nativeObj);
 }

}

class TPointf {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

}

class TPoint {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

}

class TPath {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

}

class TNamedValue {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static create() {
   return new TNamedValue(named_value_create());
 }

 static cast(nv: any) {
   return new TNamedValue(named_value_cast(nv ? (nv.nativeObj || nv) : null));
 }

 setName(name: any) {
   return named_value_set_name(this.nativeObj, name);
 }

 setValue(value: any) {
   return named_value_set_value(this.nativeObj, value ? value.nativeObj : null);
 }

 getValue() {
   return new TValue(named_value_get_value(this.nativeObj));
 }

 destroy() {
   return named_value_destroy(this.nativeObj);
 }

 get name() {
   return named_value_t_get_prop_name(this.nativeObj);
 }

}

enum TMIME_TYPE {
 APPLICATION_ENVOY = MIME_TYPE_APPLICATION_ENVOY(),
 APPLICATION_FRACTALS = MIME_TYPE_APPLICATION_FRACTALS(),
 APPLICATION_FUTURESPLASH = MIME_TYPE_APPLICATION_FUTURESPLASH(),
 APPLICATION_HTA = MIME_TYPE_APPLICATION_HTA(),
 APPLICATION_JSON = MIME_TYPE_APPLICATION_JSON(),
 APPLICATION_UBJSON = MIME_TYPE_APPLICATION_UBJSON(),
 APPLICATION_MAC_BINHEX40 = MIME_TYPE_APPLICATION_MAC_BINHEX40(),
 APPLICATION_MSWORD = MIME_TYPE_APPLICATION_MSWORD(),
 APPLICATION_OCTET_STREAM = MIME_TYPE_APPLICATION_OCTET_STREAM(),
 APPLICATION_ODA = MIME_TYPE_APPLICATION_ODA(),
 APPLICATION_OLESCRIPT = MIME_TYPE_APPLICATION_OLESCRIPT(),
 APPLICATION_PDF = MIME_TYPE_APPLICATION_PDF(),
 APPLICATION_PICS_RULES = MIME_TYPE_APPLICATION_PICS_RULES(),
 APPLICATION_PKCS10 = MIME_TYPE_APPLICATION_PKCS10(),
 APPLICATION_PKIX_CRL = MIME_TYPE_APPLICATION_PKIX_CRL(),
 APPLICATION_POSTSCRIPT = MIME_TYPE_APPLICATION_POSTSCRIPT(),
 APPLICATION_RTF = MIME_TYPE_APPLICATION_RTF(),
 APPLICATION_VND_MS_EXCEL = MIME_TYPE_APPLICATION_VND_MS_EXCEL(),
 APPLICATION_VND_MS_OUTLOOK = MIME_TYPE_APPLICATION_VND_MS_OUTLOOK(),
 APPLICATION_VND_MS_PKICERTSTORE = MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE(),
 APPLICATION_VND_MS_PKISECCAT = MIME_TYPE_APPLICATION_VND_MS_PKISECCAT(),
 APPLICATION_VND_MS_PKISTL = MIME_TYPE_APPLICATION_VND_MS_PKISTL(),
 APPLICATION_VND_MS_POWERPOINT = MIME_TYPE_APPLICATION_VND_MS_POWERPOINT(),
 APPLICATION_VND_MS_PROJECT = MIME_TYPE_APPLICATION_VND_MS_PROJECT(),
 APPLICATION_VND_MS_WORKS = MIME_TYPE_APPLICATION_VND_MS_WORKS(),
 APPLICATION_WINHLP = MIME_TYPE_APPLICATION_WINHLP(),
 APPLICATION_X_BCPIO = MIME_TYPE_APPLICATION_X_BCPIO(),
 APPLICATION_X_CDF = MIME_TYPE_APPLICATION_X_CDF(),
 APPLICATION_X_COMPRESS = MIME_TYPE_APPLICATION_X_COMPRESS(),
 APPLICATION_X_COMPRESSED = MIME_TYPE_APPLICATION_X_COMPRESSED(),
 APPLICATION_X_CPIO = MIME_TYPE_APPLICATION_X_CPIO(),
 APPLICATION_X_CSH = MIME_TYPE_APPLICATION_X_CSH(),
 APPLICATION_X_DIRECTOR = MIME_TYPE_APPLICATION_X_DIRECTOR(),
 APPLICATION_X_DVI = MIME_TYPE_APPLICATION_X_DVI(),
 APPLICATION_X_GTAR = MIME_TYPE_APPLICATION_X_GTAR(),
 APPLICATION_X_GZIP = MIME_TYPE_APPLICATION_X_GZIP(),
 APPLICATION_X_HDF = MIME_TYPE_APPLICATION_X_HDF(),
 APPLICATION_X_IPHONE = MIME_TYPE_APPLICATION_X_IPHONE(),
 APPLICATION_X_JAVASCRIPT = MIME_TYPE_APPLICATION_X_JAVASCRIPT(),
 APPLICATION_X_LATEX = MIME_TYPE_APPLICATION_X_LATEX(),
 APPLICATION_X_MSACCESS = MIME_TYPE_APPLICATION_X_MSACCESS(),
 APPLICATION_X_MSCARDFILE = MIME_TYPE_APPLICATION_X_MSCARDFILE(),
 APPLICATION_X_MSCLIP = MIME_TYPE_APPLICATION_X_MSCLIP(),
 APPLICATION_X_MSDOWNLOAD = MIME_TYPE_APPLICATION_X_MSDOWNLOAD(),
 APPLICATION_X_MSMEDIAVIEW = MIME_TYPE_APPLICATION_X_MSMEDIAVIEW(),
 APPLICATION_X_MSMETAFILE = MIME_TYPE_APPLICATION_X_MSMETAFILE(),
 APPLICATION_X_MSMONEY = MIME_TYPE_APPLICATION_X_MSMONEY(),
 APPLICATION_X_MSPUBLISHER = MIME_TYPE_APPLICATION_X_MSPUBLISHER(),
 APPLICATION_X_MSSCHEDULE = MIME_TYPE_APPLICATION_X_MSSCHEDULE(),
 APPLICATION_X_MSTERMINAL = MIME_TYPE_APPLICATION_X_MSTERMINAL(),
 APPLICATION_X_MSWRITE = MIME_TYPE_APPLICATION_X_MSWRITE(),
 APPLICATION_X_NETCDF = MIME_TYPE_APPLICATION_X_NETCDF(),
 APPLICATION_X_PERFMON = MIME_TYPE_APPLICATION_X_PERFMON(),
 APPLICATION_X_PKCS12 = MIME_TYPE_APPLICATION_X_PKCS12(),
 APPLICATION_X_SH = MIME_TYPE_APPLICATION_X_SH(),
 APPLICATION_X_SHAR = MIME_TYPE_APPLICATION_X_SHAR(),
 APPLICATION_X_SHOCKWAVE_FLASH = MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH(),
 APPLICATION_X_STUFFIT = MIME_TYPE_APPLICATION_X_STUFFIT(),
 APPLICATION_X_SV4CPIO = MIME_TYPE_APPLICATION_X_SV4CPIO(),
 APPLICATION_X_SV4CRC = MIME_TYPE_APPLICATION_X_SV4CRC(),
 APPLICATION_X_TAR = MIME_TYPE_APPLICATION_X_TAR(),
 APPLICATION_X_TCL = MIME_TYPE_APPLICATION_X_TCL(),
 APPLICATION_X_TEX = MIME_TYPE_APPLICATION_X_TEX(),
 APPLICATION_X_TEXINFO = MIME_TYPE_APPLICATION_X_TEXINFO(),
 APPLICATION_X_TROFF = MIME_TYPE_APPLICATION_X_TROFF(),
 APPLICATION_X_USTAR = MIME_TYPE_APPLICATION_X_USTAR(),
 APPLICATION_ZIP = MIME_TYPE_APPLICATION_ZIP(),
 AUDIO_BASIC = MIME_TYPE_AUDIO_BASIC(),
 AUDIO_MID = MIME_TYPE_AUDIO_MID(),
 AUDIO_MPEG = MIME_TYPE_AUDIO_MPEG(),
 AUDIO_X_AIFF = MIME_TYPE_AUDIO_X_AIFF(),
 AUDIO_X_MPEGURL = MIME_TYPE_AUDIO_X_MPEGURL(),
 AUDIO_X_WAV = MIME_TYPE_AUDIO_X_WAV(),
 IMAGE_BMP = MIME_TYPE_IMAGE_BMP(),
 IMAGE_CIS_COD = MIME_TYPE_IMAGE_CIS_COD(),
 IMAGE_GIF = MIME_TYPE_IMAGE_GIF(),
 IMAGE_IEF = MIME_TYPE_IMAGE_IEF(),
 IMAGE_JPEG = MIME_TYPE_IMAGE_JPEG(),
 IMAGE_PIPEG = MIME_TYPE_IMAGE_PIPEG(),
 IMAGE_SVG_XML = MIME_TYPE_IMAGE_SVG_XML(),
 IMAGE_TIFF = MIME_TYPE_IMAGE_TIFF(),
 IMAGE_X_CMX = MIME_TYPE_IMAGE_X_CMX(),
 IMAGE_X_ICON = MIME_TYPE_IMAGE_X_ICON(),
 IMAGE_X_RGB = MIME_TYPE_IMAGE_X_RGB(),
 IMAGE_X_XBITMAP = MIME_TYPE_IMAGE_X_XBITMAP(),
 IMAGE_X_XPIXMAP = MIME_TYPE_IMAGE_X_XPIXMAP(),
 IMAGE_X_XWINDOWDUMP = MIME_TYPE_IMAGE_X_XWINDOWDUMP(),
 MESSAGE_RFC822 = MIME_TYPE_MESSAGE_RFC822(),
 TEXT_CSS = MIME_TYPE_TEXT_CSS(),
 TEXT_H323 = MIME_TYPE_TEXT_H323(),
 TEXT_HTML = MIME_TYPE_TEXT_HTML(),
 TEXT_IULS = MIME_TYPE_TEXT_IULS(),
 TEXT_PLAIN = MIME_TYPE_TEXT_PLAIN(),
 TEXT_RICHTEXT = MIME_TYPE_TEXT_RICHTEXT(),
 TEXT_SCRIPTLET = MIME_TYPE_TEXT_SCRIPTLET(),
 TEXT_WEBVIEWHTML = MIME_TYPE_TEXT_WEBVIEWHTML(),
 TEXT_X_COMPONENT = MIME_TYPE_TEXT_X_COMPONENT(),
 TEXT_X_SETEXT = MIME_TYPE_TEXT_X_SETEXT(),
 TEXT_X_VCARD = MIME_TYPE_TEXT_X_VCARD(),
 VIDEO_MPEG = MIME_TYPE_VIDEO_MPEG(),
 VIDEO_QUICKTIME = MIME_TYPE_VIDEO_QUICKTIME(),
 VIDEO_X_MSVIDEO = MIME_TYPE_VIDEO_X_MSVIDEO(),
};

class TIdleManager {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

}

enum TIndicatorDefaultPaint {
 AUTO = INDICATOR_DEFAULT_PAINT_AUTO(),
 FILL_DOT = INDICATOR_DEFAULT_PAINT_FILL_DOT(),
 STROKE_DOT = INDICATOR_DEFAULT_PAINT_STROKE_DOT(),
 FILL_RECT = INDICATOR_DEFAULT_PAINT_FILL_RECT(),
 STROKE_RECT = INDICATOR_DEFAULT_PAINT_STROKE_RECT(),
};

class TFsFile {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

}

class TEvent {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static cast(event: any) {
   return new TEvent(event_cast(event ? (event.nativeObj || event) : null));
 }

 static create(type: any, target: any) {
   return new TEvent(event_create(type, target));
 }

 destroy() {
   return event_destroy(this.nativeObj);
 }

 get type() {
   return event_t_get_prop_type(this.nativeObj);
 }

 get time() {
   return event_t_get_prop_time(this.nativeObj);
 }

 get target() {
   return event_t_get_prop_target(this.nativeObj);
 }

}

enum TEventBaseType {
 NONE = EVT_NONE(),
 PROP_WILL_CHANGE = EVT_PROP_WILL_CHANGE(),
 PROP_CHANGED = EVT_PROP_CHANGED(),
 ITEMS_WILL_CHANGE = EVT_ITEMS_WILL_CHANGE(),
 ITEMS_CHANGED = EVT_ITEMS_CHANGED(),
 PROPS_CHANGED = EVT_PROPS_CHANGED(),
 PROGRESS = EVT_PROGRESS(),
 DESTROY = EVT_DESTROY(),
};

class TEmitter {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static create() {
   return new TEmitter(emitter_create());
 }

 dispatch(e: any) {
   return emitter_dispatch(this.nativeObj, e ? e.nativeObj : null);
 }

 dispatchSimpleEvent(type: any) {
   return emitter_dispatch_simple_event(this.nativeObj, type);
 }

 on(type: any, on_event: any, ctx: any) {
   return emitter_on(this.nativeObj, type, on_event, ctx);
 }

 onWithTag(type: any, on_event: any, ctx: any, tag: any) {
   return emitter_on_with_tag(this.nativeObj, type, on_event, ctx, tag);
 }

 off(id: any) {
   return emitter_off(this.nativeObj, id);
 }

 enable() {
   return emitter_enable(this.nativeObj);
 }

 disable() {
   return emitter_disable(this.nativeObj);
 }

 size() {
   return emitter_size(this.nativeObj);
 }

 destroy() {
   return emitter_destroy(this.nativeObj);
 }

 static cast(emitter: any) {
   return new TEmitter(emitter_cast(emitter ? (emitter.nativeObj || emitter) : null));
 }

}

enum TEasingType {
 LINEAR = EASING_LINEAR(),
 QUADRATIC_IN = EASING_QUADRATIC_IN(),
 QUADRATIC_OUT = EASING_QUADRATIC_OUT(),
 QUADRATIC_INOUT = EASING_QUADRATIC_INOUT(),
 CUBIC_IN = EASING_CUBIC_IN(),
 CUBIC_OUT = EASING_CUBIC_OUT(),
 SIN_IN = EASING_SIN_IN(),
 SIN_OUT = EASING_SIN_OUT(),
 SIN_INOUT = EASING_SIN_INOUT(),
 POW_IN = EASING_POW_IN(),
 POW_OUT = EASING_POW_OUT(),
 POW_INOUT = EASING_POW_INOUT(),
 CIRCULAR_IN = EASING_CIRCULAR_IN(),
 CIRCULAR_OUT = EASING_CIRCULAR_OUT(),
 CIRCULAR_INOUT = EASING_CIRCULAR_INOUT(),
 ELASTIC_IN = EASING_ELASTIC_IN(),
 ELASTIC_OUT = EASING_ELASTIC_OUT(),
 ELASTIC_INOUT = EASING_ELASTIC_INOUT(),
 BACK_IN = EASING_BACK_IN(),
 BACK_OUT = EASING_BACK_OUT(),
 BACK_INOUT = EASING_BACK_INOUT(),
 BOUNCE_IN = EASING_BOUNCE_IN(),
 BOUNCE_OUT = EASING_BOUNCE_OUT(),
 BOUNCE_INOUT = EASING_BOUNCE_INOUT(),
};

class TDateTime {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static create() {
   return new TDateTime(date_time_create());
 }

 set() {
   return date_time_set(this.nativeObj);
 }

 destroy() {
   return date_time_destroy(this.nativeObj);
 }

 get second() {
   return date_time_t_get_prop_second(this.nativeObj);
 }

 get minute() {
   return date_time_t_get_prop_minute(this.nativeObj);
 }

 get hour() {
   return date_time_t_get_prop_hour(this.nativeObj);
 }

 get day() {
   return date_time_t_get_prop_day(this.nativeObj);
 }

 get wday() {
   return date_time_t_get_prop_wday(this.nativeObj);
 }

 get month() {
   return date_time_t_get_prop_month(this.nativeObj);
 }

 get year() {
   return date_time_t_get_prop_year(this.nativeObj);
 }

}

class TColor {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static create(r: any, b: any, g: any, a: any) {
   return new TColor(color_create(r, b, g, a));
 }

 fromStr(str: any) {
   return new TColor(color_from_str(this.nativeObj, str));
 }

 r() {
   return color_r(this.nativeObj);
 }

 g() {
   return color_g(this.nativeObj);
 }

 b() {
   return color_b(this.nativeObj);
 }

 a() {
   return color_a(this.nativeObj);
 }

 static cast(color: any) {
   return new TColor(color_cast(color ? (color.nativeObj || color) : null));
 }

 destroy() {
   return color_destroy(this.nativeObj);
 }

 set color(value) {
   color_t_set_prop_color(this.nativeObj, value);
 }

 get color() {
   return color_t_get_prop_color(this.nativeObj);
 }

}

class TAssetInfo {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 get type() {
   return asset_info_t_get_prop_type(this.nativeObj);
 }

 get subtype() {
   return asset_info_t_get_prop_subtype(this.nativeObj);
 }

 get isInRom() {
   return asset_info_t_get_prop_is_in_rom(this.nativeObj);
 }

 get size() {
   return asset_info_t_get_prop_size(this.nativeObj);
 }

 get refcount() {
   return asset_info_t_get_prop_refcount(this.nativeObj);
 }

 get name() {
   return asset_info_t_get_prop_name(this.nativeObj);
 }

}

enum TAssetType {
 NONE = ASSET_TYPE_NONE(),
 FONT = ASSET_TYPE_FONT(),
 IMAGE = ASSET_TYPE_IMAGE(),
 STYLE = ASSET_TYPE_STYLE(),
 UI = ASSET_TYPE_UI(),
 XML = ASSET_TYPE_XML(),
 STRINGS = ASSET_TYPE_STRINGS(),
 SCRIPT = ASSET_TYPE_SCRIPT(),
 DATA = ASSET_TYPE_DATA(),
};

class TAssetsManager {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static instance() {
   return new TAssetsManager(assets_manager());
 }

 ref(type: any, name: any) {
   return new TAssetInfo(assets_manager_ref(this.nativeObj, type, name));
 }

 unref(info: any) {
   return assets_manager_unref(this.nativeObj, info ? info.nativeObj : null);
 }

}

class TColorComponent extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(widget: any) {
   return new TColorComponent(color_component_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TTimeClock extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TTimeClock(time_clock_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TTimeClock(time_clock_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setHour(hour: any) {
   return time_clock_set_hour(this.nativeObj, hour);
 }

 setMinute(minute: any) {
   return time_clock_set_minute(this.nativeObj, minute);
 }

 setSecond(second: any) {
   return time_clock_set_second(this.nativeObj, second);
 }

 setHourImage(hour: any) {
   return time_clock_set_hour_image(this.nativeObj, hour);
 }

 setMinuteImage(minute_image: any) {
   return time_clock_set_minute_image(this.nativeObj, minute_image);
 }

 setSecondImage(second_image: any) {
   return time_clock_set_second_image(this.nativeObj, second_image);
 }

 setBgImage(bg_image: any) {
   return time_clock_set_bg_image(this.nativeObj, bg_image);
 }

 setImage(image: any) {
   return time_clock_set_image(this.nativeObj, image);
 }

 setHourAnchor(anchor_x: any, anchor_y: any) {
   return time_clock_set_hour_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 setMinuteAnchor(anchor_x: any, anchor_y: any) {
   return time_clock_set_minute_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 setSecondAnchor(anchor_x: any, anchor_y: any) {
   return time_clock_set_second_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 get hour() {
   return time_clock_t_get_prop_hour(this.nativeObj);
 }

 get minute() {
   return time_clock_t_get_prop_minute(this.nativeObj);
 }

 get second() {
   return time_clock_t_get_prop_second(this.nativeObj);
 }

 get image() {
   return time_clock_t_get_prop_image(this.nativeObj);
 }

 get bgImage() {
   return time_clock_t_get_prop_bg_image(this.nativeObj);
 }

 get hourImage() {
   return time_clock_t_get_prop_hour_image(this.nativeObj);
 }

 get minuteImage() {
   return time_clock_t_get_prop_minute_image(this.nativeObj);
 }

 get secondImage() {
   return time_clock_t_get_prop_second_image(this.nativeObj);
 }

 get hourAnchorX() {
   return time_clock_t_get_prop_hour_anchor_x(this.nativeObj);
 }

 get hourAnchorY() {
   return time_clock_t_get_prop_hour_anchor_y(this.nativeObj);
 }

 get minuteAnchorX() {
   return time_clock_t_get_prop_minute_anchor_x(this.nativeObj);
 }

 get minuteAnchorY() {
   return time_clock_t_get_prop_minute_anchor_y(this.nativeObj);
 }

 get secondAnchorX() {
   return time_clock_t_get_prop_second_anchor_x(this.nativeObj);
 }

 get secondAnchorY() {
   return time_clock_t_get_prop_second_anchor_y(this.nativeObj);
 }

}

class TTextSelector extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TTextSelector(text_selector_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TTextSelector(text_selector_cast(widget ? (widget.nativeObj || widget) : null));
 }

 resetOptions() {
   return text_selector_reset_options(this.nativeObj);
 }

 countOptions() {
   return text_selector_count_options(this.nativeObj);
 }

 appendOption(value: any, text: any) {
   return text_selector_append_option(this.nativeObj, value, text);
 }

 setOptions(options: any) {
   return text_selector_set_options(this.nativeObj, options);
 }

 setRangeOptions(start: any, nr: any, step: any) {
   return text_selector_set_range_options(this.nativeObj, start, nr, step);
 }

 getValue() {
   return text_selector_get_value(this.nativeObj);
 }

 setValue(value: any) {
   return text_selector_set_value(this.nativeObj, value);
 }

 getText() {
   return text_selector_get_text(this.nativeObj);
 }

 setText(text: any) {
   return text_selector_set_text(this.nativeObj, text);
 }

 setSelectedIndex(index: any) {
   return text_selector_set_selected_index(this.nativeObj, index);
 }

 setVisibleNr(visible_nr: any) {
   return text_selector_set_visible_nr(this.nativeObj, visible_nr);
 }

 get visibleNr() {
   return text_selector_t_get_prop_visible_nr(this.nativeObj);
 }

 get selectedIndex() {
   return text_selector_t_get_prop_selected_index(this.nativeObj);
 }

 get options() {
   return text_selector_t_get_prop_options(this.nativeObj);
 }

}

class TSwitch extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TSwitch(switch_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setValue(value: any) {
   return switch_set_value(this.nativeObj, value);
 }

 static cast(widget: any) {
   return new TSwitch(switch_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get value() {
   return switch_t_get_prop_value(this.nativeObj);
 }

 get maxXoffsetRatio() {
   return switch_t_get_prop_max_xoffset_ratio(this.nativeObj);
 }

}

class TPropChangeEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event: any) {
   return new TPropChangeEvent(prop_change_event_cast(event ? (event.nativeObj || event) : null));
 }

 get name() {
   return prop_change_event_t_get_prop_name(this.nativeObj);
 }

 get value() {
   return prop_change_event_t_get_prop_value(this.nativeObj);
 }

}

class TProgressEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event: any) {
   return new TProgressEvent(progress_event_cast(event ? (event.nativeObj || event) : null));
 }

 get percent() {
   return progress_event_t_get_prop_percent(this.nativeObj);
 }

}

class TDialog extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TDialog(dialog_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static createSimple(parent: any, x: any, y: any, w: any, h: any) {
   return new TDialog(dialog_create_simple(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TDialog(dialog_cast(widget ? (widget.nativeObj || widget) : null));
 }

 getTitle() {
   return new TWidget(dialog_get_title(this.nativeObj));
 }

 getClient() {
   return new TWidget(dialog_get_client(this.nativeObj));
 }

 static open(name: any) {
   return new TDialog(dialog_open(name));
 }

 setTitle(title: any) {
   return dialog_set_title(this.nativeObj, title);
 }

 modal() {
   return dialog_modal(this.nativeObj);
 }

 quit(code: any) {
   return dialog_quit(this.nativeObj, code);
 }

 isQuited() {
   return dialog_is_quited(this.nativeObj);
 }

 isModal() {
   return dialog_is_modal(this.nativeObj);
 }

 static toast(text: any, duration: any) {
   return dialog_toast(text, duration);
 }

 static info(title: any, text: any) {
   return dialog_info(title, text);
 }

 static warn(title: any, text: any) {
   return dialog_warn(title, text);
 }

 static confirm(title: any, text: any) {
   return dialog_confirm(title, text);
 }

 get highlight() {
   return dialog_t_get_prop_highlight(this.nativeObj);
 }

}

class TSlideView extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TSlideView(slide_view_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TSlideView(slide_view_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setAutoPlay(auto_play: any) {
   return slide_view_set_auto_play(this.nativeObj, auto_play);
 }

 setActive(index: any) {
   return slide_view_set_active(this.nativeObj, index);
 }

 setVertical(vertical: any) {
   return slide_view_set_vertical(this.nativeObj, vertical);
 }

 setAnimHint(anim_hint: any) {
   return slide_view_set_anim_hint(this.nativeObj, anim_hint);
 }

 setLoop(loop: any) {
   return slide_view_set_loop(this.nativeObj, loop);
 }

 get vertical() {
   return slide_view_t_get_prop_vertical(this.nativeObj);
 }

 get autoPlay() {
   return slide_view_t_get_prop_auto_play(this.nativeObj);
 }

 get loop() {
   return slide_view_t_get_prop_loop(this.nativeObj);
 }

 get animHint() {
   return slide_view_t_get_prop_anim_hint(this.nativeObj);
 }

}

class TSlideIndicator extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TSlideIndicator(slide_indicator_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static createLinear(parent: any, x: any, y: any, w: any, h: any) {
   return new TSlideIndicator(slide_indicator_create_linear(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static createArc(parent: any, x: any, y: any, w: any, h: any) {
   return new TSlideIndicator(slide_indicator_create_arc(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TSlideIndicator(slide_indicator_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setValue(value: any) {
   return slide_indicator_set_value(this.nativeObj, value);
 }

 setMax(max: any) {
   return slide_indicator_set_max(this.nativeObj, max);
 }

 setDefaultPaint(default_paint: any) {
   return slide_indicator_set_default_paint(this.nativeObj, default_paint);
 }

 setAutoHide(auto_hide: any) {
   return slide_indicator_set_auto_hide(this.nativeObj, auto_hide);
 }

 setMargin(margin: any) {
   return slide_indicator_set_margin(this.nativeObj, margin);
 }

 setSpacing(spacing: any) {
   return slide_indicator_set_spacing(this.nativeObj, spacing);
 }

 setSize(size: any) {
   return slide_indicator_set_size(this.nativeObj, size);
 }

 setAnchor(anchor_x: any, anchor_y: any) {
   return slide_indicator_set_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 setIndicatedTarget(indicated_target: any) {
   return slide_indicator_set_indicated_target(this.nativeObj, indicated_target);
 }

 get value() {
   return slide_indicator_t_get_prop_value(this.nativeObj);
 }

 get max() {
   return slide_indicator_t_get_prop_max(this.nativeObj);
 }

 get defaultPaint() {
   return slide_indicator_t_get_prop_default_paint(this.nativeObj);
 }

 get autoHide() {
   return slide_indicator_t_get_prop_auto_hide(this.nativeObj);
 }

 get margin() {
   return slide_indicator_t_get_prop_margin(this.nativeObj);
 }

 get spacing() {
   return slide_indicator_t_get_prop_spacing(this.nativeObj);
 }

 get size() {
   return slide_indicator_t_get_prop_size(this.nativeObj);
 }

 get anchorX() {
   return slide_indicator_t_get_prop_anchor_x(this.nativeObj);
 }

 get anchorY() {
   return slide_indicator_t_get_prop_anchor_y(this.nativeObj);
 }

 get indicatedTarget() {
   return slide_indicator_t_get_prop_indicated_target(this.nativeObj);
 }

}

class TSlideMenu extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TSlideMenu(slide_menu_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TSlideMenu(slide_menu_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setValue(value: any) {
   return slide_menu_set_value(this.nativeObj, value);
 }

 setAlignV(align_v: any) {
   return slide_menu_set_align_v(this.nativeObj, align_v);
 }

 setMinScale(min_scale: any) {
   return slide_menu_set_min_scale(this.nativeObj, min_scale);
 }

 get value() {
   return slide_menu_t_get_prop_value(this.nativeObj);
 }

 get alignV() {
   return slide_menu_t_get_prop_align_v(this.nativeObj);
 }

 get minScale() {
   return slide_menu_t_get_prop_min_scale(this.nativeObj);
 }

}

class TScrollView extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TScrollView(scroll_view_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TScrollView(scroll_view_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setVirtualW(w: any) {
   return scroll_view_set_virtual_w(this.nativeObj, w);
 }

 setVirtualH(h: any) {
   return scroll_view_set_virtual_h(this.nativeObj, h);
 }

 setXslidable(xslidable: any) {
   return scroll_view_set_xslidable(this.nativeObj, xslidable);
 }

 setYslidable(yslidable: any) {
   return scroll_view_set_yslidable(this.nativeObj, yslidable);
 }

 setOffset(xoffset: any, yoffset: any) {
   return scroll_view_set_offset(this.nativeObj, xoffset, yoffset);
 }

 scrollTo(xoffset_end: any, yoffset_end: any, duration: any) {
   return scroll_view_scroll_to(this.nativeObj, xoffset_end, yoffset_end, duration);
 }

 scrollDeltaTo(xoffset_delta: any, yoffset_delta: any, duration: any) {
   return scroll_view_scroll_delta_to(this.nativeObj, xoffset_delta, yoffset_delta, duration);
 }

 get virtualW() {
   return scroll_view_t_get_prop_virtual_w(this.nativeObj);
 }

 get virtualH() {
   return scroll_view_t_get_prop_virtual_h(this.nativeObj);
 }

 get xoffset() {
   return scroll_view_t_get_prop_xoffset(this.nativeObj);
 }

 get yoffset() {
   return scroll_view_t_get_prop_yoffset(this.nativeObj);
 }

 get xslidable() {
   return scroll_view_t_get_prop_xslidable(this.nativeObj);
 }

 get yslidable() {
   return scroll_view_t_get_prop_yslidable(this.nativeObj);
 }

}

class TScrollBar extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TScrollBar(scroll_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TScrollBar(scroll_bar_cast(widget ? (widget.nativeObj || widget) : null));
 }

 static createMobile(parent: any, x: any, y: any, w: any, h: any) {
   return new TScrollBar(scroll_bar_create_mobile(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static createDesktop(parent: any, x: any, y: any, w: any, h: any) {
   return new TScrollBar(scroll_bar_create_desktop(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setParams(virtual_size: any, row: any) {
   return scroll_bar_set_params(this.nativeObj, virtual_size, row);
 }

 scrollTo(value: any, duration: any) {
   return scroll_bar_scroll_to(this.nativeObj, value, duration);
 }

 setValue(value: any) {
   return scroll_bar_set_value(this.nativeObj, value);
 }

 addDelta(delta: any) {
   return scroll_bar_add_delta(this.nativeObj, delta);
 }

 scrollDelta(delta: any) {
   return scroll_bar_scroll_delta(this.nativeObj, delta);
 }

 setValueOnly(value: any) {
   return scroll_bar_set_value_only(this.nativeObj, value);
 }

 isMobile() {
   return scroll_bar_is_mobile(this.nativeObj);
 }

 get virtualSize() {
   return scroll_bar_t_get_prop_virtual_size(this.nativeObj);
 }

 get value() {
   return scroll_bar_t_get_prop_value(this.nativeObj);
 }

 get row() {
   return scroll_bar_t_get_prop_row(this.nativeObj);
 }

 get animatable() {
   return scroll_bar_t_get_prop_animatable(this.nativeObj);
 }

}

class TView extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TView(view_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TView(view_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TListView extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TListView(list_view_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setItemHeight(item_height: any) {
   return list_view_set_item_height(this.nativeObj, item_height);
 }

 setDefaultItemHeight(default_item_height: any) {
   return list_view_set_default_item_height(this.nativeObj, default_item_height);
 }

 setAutoHideScrollBar(auto_hide_scroll_bar: any) {
   return list_view_set_auto_hide_scroll_bar(this.nativeObj, auto_hide_scroll_bar);
 }

 static cast(widget: any) {
   return new TListView(list_view_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get itemHeight() {
   return list_view_t_get_prop_item_height(this.nativeObj);
 }

 get defaultItemHeight() {
   return list_view_t_get_prop_default_item_height(this.nativeObj);
 }

 get autoHideScrollBar() {
   return list_view_t_get_prop_auto_hide_scroll_bar(this.nativeObj);
 }

}

class TListViewH extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TListViewH(list_view_h_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setItemWidth(item_width: any) {
   return list_view_h_set_item_width(this.nativeObj, item_width);
 }

 setSpacing(spacing: any) {
   return list_view_h_set_spacing(this.nativeObj, spacing);
 }

 static cast(widget: any) {
   return new TListViewH(list_view_h_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get itemWidth() {
   return list_view_h_t_get_prop_item_width(this.nativeObj);
 }

 get spacing() {
   return list_view_h_t_get_prop_spacing(this.nativeObj);
 }

}

class TTabControl extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TTabControl(tab_control_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TTabControl(tab_control_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TTabButton extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TTabButton(tab_button_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TTabButton(tab_button_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setValue(value: any) {
   return tab_button_set_value(this.nativeObj, value);
 }

 setIcon(name: any) {
   return tab_button_set_icon(this.nativeObj, name);
 }

 setActiveIcon(name: any) {
   return tab_button_set_active_icon(this.nativeObj, name);
 }

 get value() {
   return tab_button_t_get_prop_value(this.nativeObj);
 }

 get activeIcon() {
   return tab_button_t_get_prop_active_icon(this.nativeObj);
 }

 get icon() {
   return tab_button_t_get_prop_icon(this.nativeObj);
 }

}

class TListItem extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TListItem(list_item_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TListItem(list_item_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class THscrollLabel extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new THscrollLabel(hscroll_label_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setLull(lull: any) {
   return hscroll_label_set_lull(this.nativeObj, lull);
 }

 setDuration(duration: any) {
   return hscroll_label_set_duration(this.nativeObj, duration);
 }

 setOnlyFocus(only_focus: any) {
   return hscroll_label_set_only_focus(this.nativeObj, only_focus);
 }

 setOnlyParentFocus(only_parent_focus: any) {
   return hscroll_label_set_only_parent_focus(this.nativeObj, only_parent_focus);
 }

 setLoop(loop: any) {
   return hscroll_label_set_loop(this.nativeObj, loop);
 }

 setYoyo(yoyo: any) {
   return hscroll_label_set_yoyo(this.nativeObj, yoyo);
 }

 setEllipses(ellipses: any) {
   return hscroll_label_set_ellipses(this.nativeObj, ellipses);
 }

 setXoffset(xoffset: any) {
   return hscroll_label_set_xoffset(this.nativeObj, xoffset);
 }

 start() {
   return hscroll_label_start(this.nativeObj);
 }

 stop() {
   return hscroll_label_stop(this.nativeObj);
 }

 static cast(widget: any) {
   return new THscrollLabel(hscroll_label_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get onlyFocus() {
   return hscroll_label_t_get_prop_only_focus(this.nativeObj);
 }

 get onlyParentFocus() {
   return hscroll_label_t_get_prop_only_parent_focus(this.nativeObj);
 }

 get loop() {
   return hscroll_label_t_get_prop_loop(this.nativeObj);
 }

 get yoyo() {
   return hscroll_label_t_get_prop_yoyo(this.nativeObj);
 }

 get ellipses() {
   return hscroll_label_t_get_prop_ellipses(this.nativeObj);
 }

 get lull() {
   return hscroll_label_t_get_prop_lull(this.nativeObj);
 }

 get duration() {
   return hscroll_label_t_get_prop_duration(this.nativeObj);
 }

 get xoffset() {
   return hscroll_label_t_get_prop_xoffset(this.nativeObj);
 }

 get textW() {
   return hscroll_label_t_get_prop_text_w(this.nativeObj);
 }

}

class TRichText extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TRichText(rich_text_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setText(text: any) {
   return rich_text_set_text(this.nativeObj, text);
 }

 static cast(widget: any) {
   return new TRichText(rich_text_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get lineGap() {
   return rich_text_t_get_prop_line_gap(this.nativeObj);
 }

}

class TProgressCircle extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TProgressCircle(progress_circle_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TProgressCircle(progress_circle_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setValue(value: any) {
   return progress_circle_set_value(this.nativeObj, value);
 }

 setMax(max: any) {
   return progress_circle_set_max(this.nativeObj, max);
 }

 setLineWidth(line_width: any) {
   return progress_circle_set_line_width(this.nativeObj, line_width);
 }

 setStartAngle(start_angle: any) {
   return progress_circle_set_start_angle(this.nativeObj, start_angle);
 }

 setUnit(unit: any) {
   return progress_circle_set_unit(this.nativeObj, unit);
 }

 setShowText(show_text: any) {
   return progress_circle_set_show_text(this.nativeObj, show_text);
 }

 setCounterClockWise(counter_clock_wise: any) {
   return progress_circle_set_counter_clock_wise(this.nativeObj, counter_clock_wise);
 }

 get value() {
   return progress_circle_t_get_prop_value(this.nativeObj);
 }

 get max() {
   return progress_circle_t_get_prop_max(this.nativeObj);
 }

 get startAngle() {
   return progress_circle_t_get_prop_start_angle(this.nativeObj);
 }

 get lineWidth() {
   return progress_circle_t_get_prop_line_width(this.nativeObj);
 }

 get unit() {
   return progress_circle_t_get_prop_unit(this.nativeObj);
 }

 get counterClockWise() {
   return progress_circle_t_get_prop_counter_clock_wise(this.nativeObj);
 }

 get showText() {
   return progress_circle_t_get_prop_show_text(this.nativeObj);
 }

}

class TTabButtonGroup extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TTabButtonGroup(tab_button_group_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setCompact(compact: any) {
   return tab_button_group_set_compact(this.nativeObj, compact);
 }

 setScrollable(scrollable: any) {
   return tab_button_group_set_scrollable(this.nativeObj, scrollable);
 }

 static cast(widget: any) {
   return new TTabButtonGroup(tab_button_group_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get compact() {
   return tab_button_group_t_get_prop_compact(this.nativeObj);
 }

 get scrollable() {
   return tab_button_group_t_get_prop_scrollable(this.nativeObj);
 }

}

class TMledit extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TMledit(mledit_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setReadonly(readonly: any) {
   return mledit_set_readonly(this.nativeObj, readonly);
 }

 setFocus(focus: any) {
   return mledit_set_focus(this.nativeObj, focus);
 }

 setWrapWord(wrap_word: any) {
   return mledit_set_wrap_word(this.nativeObj, wrap_word);
 }

 setMaxLines(max_lines: any) {
   return mledit_set_max_lines(this.nativeObj, max_lines);
 }

 setInputTips(tips: any) {
   return mledit_set_input_tips(this.nativeObj, tips);
 }

 setCursor(cursor: any) {
   return mledit_set_cursor(this.nativeObj, cursor);
 }

 setScrollLine(scroll_line: any) {
   return mledit_set_scroll_line(this.nativeObj, scroll_line);
 }

 static cast(widget: any) {
   return new TMledit(mledit_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get readonly() {
   return mledit_t_get_prop_readonly(this.nativeObj);
 }

 get tips() {
   return mledit_t_get_prop_tips(this.nativeObj);
 }

 get wrapWord() {
   return mledit_t_get_prop_wrap_word(this.nativeObj);
 }

 get maxLines() {
   return mledit_t_get_prop_max_lines(this.nativeObj);
 }

 get scrollLine() {
   return mledit_t_get_prop_scroll_line(this.nativeObj);
 }

}

class TSlider extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TSlider(slider_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TSlider(slider_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setValue(value: any) {
   return slider_set_value(this.nativeObj, value);
 }

 setMin(min: any) {
   return slider_set_min(this.nativeObj, min);
 }

 setMax(max: any) {
   return slider_set_max(this.nativeObj, max);
 }

 setStep(step: any) {
   return slider_set_step(this.nativeObj, step);
 }

 setBarSize(bar_size: any) {
   return slider_set_bar_size(this.nativeObj, bar_size);
 }

 setVertical(vertical: any) {
   return slider_set_vertical(this.nativeObj, vertical);
 }

 get value() {
   return slider_t_get_prop_value(this.nativeObj);
 }

 get min() {
   return slider_t_get_prop_min(this.nativeObj);
 }

 get max() {
   return slider_t_get_prop_max(this.nativeObj);
 }

 get step() {
   return slider_t_get_prop_step(this.nativeObj);
 }

 get vertical() {
   return slider_t_get_prop_vertical(this.nativeObj);
 }

 get barSize() {
   return slider_t_get_prop_bar_size(this.nativeObj);
 }

}

class TRow extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TRow(row_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TRow(row_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TObject extends TEmitter {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 unref() {
   return object_unref(this.nativeObj);
 }

 static ref(obj: any) {
   return new TObject(object_ref(obj ? obj.nativeObj : null));
 }

 getType() {
   return object_get_type(this.nativeObj);
 }

 getDesc() {
   return object_get_desc(this.nativeObj);
 }

 getSize() {
   return object_get_size(this.nativeObj);
 }

 isCollection() {
   return object_is_collection(this.nativeObj);
 }

 setName(name: any) {
   return object_set_name(this.nativeObj, name);
 }

 compare(other: any) {
   return object_compare(this.nativeObj, other ? other.nativeObj : null);
 }

 getProp(name: any, v: any) {
   return object_get_prop(this.nativeObj, name, v ? v.nativeObj : null);
 }

 getPropStr(name: any) {
   return object_get_prop_str(this.nativeObj, name);
 }

 getPropPointer(name: any) {
   return object_get_prop_pointer(this.nativeObj, name);
 }

 getPropObject(name: any) {
   return new TObject(object_get_prop_object(this.nativeObj, name));
 }

 getPropInt(name: any, defval: any) {
   return object_get_prop_int(this.nativeObj, name, defval);
 }

 getPropBool(name: any, defval: any) {
   return object_get_prop_bool(this.nativeObj, name, defval);
 }

 getPropFloat(name: any, defval: any) {
   return object_get_prop_float(this.nativeObj, name, defval);
 }

 removeProp(name: any) {
   return object_remove_prop(this.nativeObj, name);
 }

 setProp(name: any, value: any) {
   return object_set_prop(this.nativeObj, name, value ? value.nativeObj : null);
 }

 setPropStr(name: any, value: any) {
   return object_set_prop_str(this.nativeObj, name, value);
 }

 setPropPointer(name: any, value: any) {
   return object_set_prop_pointer(this.nativeObj, name, value);
 }

 setPropObject(name: any, value: any) {
   return object_set_prop_object(this.nativeObj, name, value ? value.nativeObj : null);
 }

 setPropInt(name: any, value: any) {
   return object_set_prop_int(this.nativeObj, name, value);
 }

 setPropBool(name: any, value: any) {
   return object_set_prop_bool(this.nativeObj, name, value);
 }

 setPropFloat(name: any, value: any) {
   return object_set_prop_float(this.nativeObj, name, value);
 }

 copyProp(src: any, name: any) {
   return object_copy_prop(this.nativeObj, src ? src.nativeObj : null, name);
 }

 foreachProp(on_prop: any, ctx: any) {
   return object_foreach_prop(this.nativeObj, on_prop, ctx);
 }

 hasProp(name: any) {
   return object_has_prop(this.nativeObj, name);
 }

 eval(expr: any, v: any) {
   return object_eval(this.nativeObj, expr, v ? v.nativeObj : null);
 }

 canExec(name: any, args: any) {
   return object_can_exec(this.nativeObj, name, args);
 }

 exec(name: any, args: any) {
   return object_exec(this.nativeObj, name, args);
 }

 notifyChanged() {
   return object_notify_changed(this.nativeObj);
 }

 getPropStrByPath(path: any) {
   return object_get_prop_str_by_path(this.nativeObj, path);
 }

 getPropPointerByPath(path: any) {
   return object_get_prop_pointer_by_path(this.nativeObj, path);
 }

 getPropObjectByPath(path: any) {
   return new TObject(object_get_prop_object_by_path(this.nativeObj, path));
 }

 getPropIntByPath(path: any, defval: any) {
   return object_get_prop_int_by_path(this.nativeObj, path, defval);
 }

 getPropBoolByPath(path: any, defval: any) {
   return object_get_prop_bool_by_path(this.nativeObj, path, defval);
 }

 getPropFloatByPath(path: any, defval: any) {
   return object_get_prop_float_by_path(this.nativeObj, path, defval);
 }

 get refCount() {
   return object_t_get_prop_ref_count(this.nativeObj);
 }

 get name() {
   return object_t_get_prop_name(this.nativeObj);
 }

}

class TProgressBar extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TProgressBar(progress_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TProgressBar(progress_bar_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setValue(value: any) {
   return progress_bar_set_value(this.nativeObj, value);
 }

 setMax(max: any) {
   return progress_bar_set_max(this.nativeObj, max);
 }

 setVertical(vertical: any) {
   return progress_bar_set_vertical(this.nativeObj, vertical);
 }

 setShowText(show_text: any) {
   return progress_bar_set_show_text(this.nativeObj, show_text);
 }

 getPercent() {
   return progress_bar_get_percent(this.nativeObj);
 }

 get value() {
   return progress_bar_t_get_prop_value(this.nativeObj);
 }

 get max() {
   return progress_bar_t_get_prop_max(this.nativeObj);
 }

 get vertical() {
   return progress_bar_t_get_prop_vertical(this.nativeObj);
 }

 get showText() {
   return progress_bar_t_get_prop_show_text(this.nativeObj);
 }

}

class TLineNumber extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TLineNumber(line_number_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setTopMargin(top_margin: any) {
   return line_number_set_top_margin(this.nativeObj, top_margin);
 }

 setBottomMargin(bottom_margin: any) {
   return line_number_set_bottom_margin(this.nativeObj, bottom_margin);
 }

 setLineHeight(line_height: any) {
   return line_number_set_line_height(this.nativeObj, line_height);
 }

 setYoffset(yoffset: any) {
   return line_number_set_yoffset(this.nativeObj, yoffset);
 }

 static cast(widget: any) {
   return new TLineNumber(line_number_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TKeyboard extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TKeyboard(keyboard_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TKeyboard(keyboard_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TImageValue extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TImageValue(image_value_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setImage(image: any) {
   return image_value_set_image(this.nativeObj, image);
 }

 setFormat(format: any) {
   return image_value_set_format(this.nativeObj, format);
 }

 setValue(value: any) {
   return image_value_set_value(this.nativeObj, value);
 }

 static cast(widget: any) {
   return new TImageValue(image_value_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get image() {
   return image_value_t_get_prop_image(this.nativeObj);
 }

 get format() {
   return image_value_t_get_prop_format(this.nativeObj);
 }

 get value() {
   return image_value_t_get_prop_value(this.nativeObj);
 }

}

class TImageAnimation extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TImageAnimation(image_animation_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setLoop(loop: any) {
   return image_animation_set_loop(this.nativeObj, loop);
 }

 setImage(image: any) {
   return image_animation_set_image(this.nativeObj, image);
 }

 setInterval(interval: any) {
   return image_animation_set_interval(this.nativeObj, interval);
 }

 setDelay(delay: any) {
   return image_animation_set_delay(this.nativeObj, delay);
 }

 setAutoPlay(auto_play: any) {
   return image_animation_set_auto_play(this.nativeObj, auto_play);
 }

 setSequence(sequence: any) {
   return image_animation_set_sequence(this.nativeObj, sequence);
 }

 setRangeSequence(start_index: any, end_index: any) {
   return image_animation_set_range_sequence(this.nativeObj, start_index, end_index);
 }

 play() {
   return image_animation_play(this.nativeObj);
 }

 stop() {
   return image_animation_stop(this.nativeObj);
 }

 pause() {
   return image_animation_pause(this.nativeObj);
 }

 next() {
   return image_animation_next(this.nativeObj);
 }

 setFormat(format: any) {
   return image_animation_set_format(this.nativeObj, format);
 }

 setUnloadAfterPaint(unload_after_paint: any) {
   return image_animation_set_unload_after_paint(this.nativeObj, unload_after_paint);
 }

 static cast(widget: any) {
   return new TImageAnimation(image_animation_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get image() {
   return image_animation_t_get_prop_image(this.nativeObj);
 }

 get sequence() {
   return image_animation_t_get_prop_sequence(this.nativeObj);
 }

 get startIndex() {
   return image_animation_t_get_prop_start_index(this.nativeObj);
 }

 get endIndex() {
   return image_animation_t_get_prop_end_index(this.nativeObj);
 }

 get loop() {
   return image_animation_t_get_prop_loop(this.nativeObj);
 }

 get autoPlay() {
   return image_animation_t_get_prop_auto_play(this.nativeObj);
 }

 get unloadAfterPaint() {
   return image_animation_t_get_prop_unload_after_paint(this.nativeObj);
 }

 get format() {
   return image_animation_t_get_prop_format(this.nativeObj);
 }

 get interval() {
   return image_animation_t_get_prop_interval(this.nativeObj);
 }

 get delay() {
   return image_animation_t_get_prop_delay(this.nativeObj);
 }

}

class TGuage extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TGuage(guage_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TGuage(guage_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setImage(name: any) {
   return guage_set_image(this.nativeObj, name);
 }

 setDrawType(draw_type: any) {
   return guage_set_draw_type(this.nativeObj, draw_type);
 }

 get image() {
   return guage_t_get_prop_image(this.nativeObj);
 }

 get drawType() {
   return guage_t_get_prop_draw_type(this.nativeObj);
 }

}

class TGuagePointer extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TGuagePointer(guage_pointer_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TGuagePointer(guage_pointer_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setAngle(angle: any) {
   return guage_pointer_set_angle(this.nativeObj, angle);
 }

 setImage(image: any) {
   return guage_pointer_set_image(this.nativeObj, image);
 }

 setAnchor(anchor_x: any, anchor_y: any) {
   return guage_pointer_set_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 get angle() {
   return guage_pointer_t_get_prop_angle(this.nativeObj);
 }

 get image() {
   return guage_pointer_t_get_prop_image(this.nativeObj);
 }

 get anchorX() {
   return guage_pointer_t_get_prop_anchor_x(this.nativeObj);
 }

 get anchorY() {
   return guage_pointer_t_get_prop_anchor_y(this.nativeObj);
 }

}

class TPopup extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TPopup(popup_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TPopup(popup_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setCloseWhenClick(close_when_click: any) {
   return popup_set_close_when_click(this.nativeObj, close_when_click);
 }

 setCloseWhenClickOutside(close_when_click_outside: any) {
   return popup_set_close_when_click_outside(this.nativeObj, close_when_click_outside);
 }

 get closeWhenClick() {
   return popup_t_get_prop_close_when_click(this.nativeObj);
 }

 get closeWhenClickOutside() {
   return popup_t_get_prop_close_when_click_outside(this.nativeObj);
 }

}

class TDraggable extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TDraggable(draggable_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TDraggable(draggable_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setTop(top: any) {
   return draggable_set_top(this.nativeObj, top);
 }

 setBottom(bottom: any) {
   return draggable_set_bottom(this.nativeObj, bottom);
 }

 setLeft(left: any) {
   return draggable_set_left(this.nativeObj, left);
 }

 setRight(right: any) {
   return draggable_set_right(this.nativeObj, right);
 }

 setVerticalOnly(vertical_only: any) {
   return draggable_set_vertical_only(this.nativeObj, vertical_only);
 }

 setHorizontalOnly(horizontal_only: any) {
   return draggable_set_horizontal_only(this.nativeObj, horizontal_only);
 }

 setDragWindow(drag_window: any) {
   return draggable_set_drag_window(this.nativeObj, drag_window);
 }

 get top() {
   return draggable_t_get_prop_top(this.nativeObj);
 }

 get bottom() {
   return draggable_t_get_prop_bottom(this.nativeObj);
 }

 get left() {
   return draggable_t_get_prop_left(this.nativeObj);
 }

 get right() {
   return draggable_t_get_prop_right(this.nativeObj);
 }

 get verticalOnly() {
   return draggable_t_get_prop_vertical_only(this.nativeObj);
 }

 get horizontalOnly() {
   return draggable_t_get_prop_horizontal_only(this.nativeObj);
 }

 get dragWindow() {
   return draggable_t_get_prop_drag_window(this.nativeObj);
 }

}

class TPages extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TPages(pages_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TPages(pages_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setActive(index: any) {
   return pages_set_active(this.nativeObj, index);
 }

 setActiveByName(name: any) {
   return pages_set_active_by_name(this.nativeObj, name);
 }

 get active() {
   return pages_t_get_prop_active(this.nativeObj);
 }

}

class TColorPicker extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TColorPicker(color_picker_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setColor(color: any) {
   return color_picker_set_color(this.nativeObj, color);
 }

 static cast(widget: any) {
   return new TColorPicker(color_picker_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get value() {
   return color_picker_t_get_prop_value(this.nativeObj);
 }

}

class TCanvasWidget extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TCanvasWidget(canvas_widget_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TCanvasWidget(canvas_widget_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TOverlay extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TOverlay(overlay_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TOverlay(overlay_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TWindow extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TWindow(window_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setFullscreen(fullscreen: any) {
   return window_set_fullscreen(this.nativeObj, fullscreen);
 }

 static open(name: any) {
   return new TWindow(window_open(name));
 }

 static openAndClose(name: any, to_close: any) {
   return new TWindow(window_open_and_close(name, to_close ? to_close.nativeObj : null));
 }

 close() {
   return window_close(this.nativeObj);
 }

 closeForce() {
   return window_close_force(this.nativeObj);
 }

 static cast(widget: any) {
   return new TWindow(window_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get fullscreen() {
   return window_t_get_prop_fullscreen(this.nativeObj);
 }

}

class TWindowManager extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static instance() {
   return new TWindowManager(window_manager());
 }

 static cast(widget: any) {
   return new TWindowManager(window_manager_cast(widget ? (widget.nativeObj || widget) : null));
 }

 getTopMainWindow() {
   return new TWidget(window_manager_get_top_main_window(this.nativeObj));
 }

 getTopWindow() {
   return new TWidget(window_manager_get_top_window(this.nativeObj));
 }

 getPrevWindow() {
   return new TWidget(window_manager_get_prev_window(this.nativeObj));
 }

 getPointerX() {
   return window_manager_get_pointer_x(this.nativeObj);
 }

 getPointerY() {
   return window_manager_get_pointer_y(this.nativeObj);
 }

 getPointerPressed() {
   return window_manager_get_pointer_pressed(this.nativeObj);
 }

 setShowFps(show_fps: any) {
   return window_manager_set_show_fps(this.nativeObj, show_fps);
 }

 setScreenSaverTime(screen_saver_time: any) {
   return window_manager_set_screen_saver_time(this.nativeObj, screen_saver_time);
 }

 setCursor(cursor: any) {
   return window_manager_set_cursor(this.nativeObj, cursor);
 }

 back() {
   return window_manager_back(this.nativeObj);
 }

 backToHome() {
   return window_manager_back_to_home(this.nativeObj);
 }

}

class TWindowBase extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(widget: any) {
   return new TWindowBase(window_base_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get theme() {
   return window_base_t_get_prop_theme(this.nativeObj);
 }

 get closable() {
   return window_base_t_get_prop_closable(this.nativeObj);
 }

}

class TLabel extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TLabel(label_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setLength(length: any) {
   return label_set_length(this.nativeObj, length);
 }

 resizeToContent(min_w: any, max_w: any, min_h: any, max_h: any) {
   return label_resize_to_content(this.nativeObj, min_w, max_w, min_h, max_h);
 }

 static cast(widget: any) {
   return new TLabel(label_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get length() {
   return label_t_get_prop_length(this.nativeObj);
 }

}

class TStyleMutable extends TStyle {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 getName() {
   return style_mutable_get_name(this.nativeObj);
 }

 setName(name: any) {
   return style_mutable_set_name(this.nativeObj, name);
 }

 setInt(state: any, name: any, val: any) {
   return style_mutable_set_int(this.nativeObj, state, name, val);
 }

 static cast(s: any) {
   return new TStyleMutable(style_mutable_cast(s ? (s.nativeObj || s) : null));
 }

 static create(widget: any, default_style: any) {
   return new TStyleMutable(style_mutable_create(widget ? widget.nativeObj : null, default_style ? default_style.nativeObj : null));
 }

 get name() {
   return style_mutable_t_get_prop_name(this.nativeObj);
 }

}

class TGroupBox extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TGroupBox(group_box_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TGroupBox(group_box_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TImageBase extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 setImage(name: any) {
   return image_base_set_image(this.nativeObj, name);
 }

 setRotation(rotation: any) {
   return image_base_set_rotation(this.nativeObj, rotation);
 }

 setScale(scale_x: any, scale_y: any) {
   return image_base_set_scale(this.nativeObj, scale_x, scale_y);
 }

 setAnchor(anchor_x: any, anchor_y: any) {
   return image_base_set_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 setSelected(selected: any) {
   return image_base_set_selected(this.nativeObj, selected);
 }

 setSelectable(selectable: any) {
   return image_base_set_selectable(this.nativeObj, selectable);
 }

 setClickable(clickable: any) {
   return image_base_set_clickable(this.nativeObj, clickable);
 }

 static cast(widget: any) {
   return new TImageBase(image_base_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get image() {
   return image_base_t_get_prop_image(this.nativeObj);
 }

 get anchorX() {
   return image_base_t_get_prop_anchor_x(this.nativeObj);
 }

 get anchorY() {
   return image_base_t_get_prop_anchor_y(this.nativeObj);
 }

 get scaleX() {
   return image_base_t_get_prop_scale_x(this.nativeObj);
 }

 get scaleY() {
   return image_base_t_get_prop_scale_y(this.nativeObj);
 }

 get rotation() {
   return image_base_t_get_prop_rotation(this.nativeObj);
 }

 get clickable() {
   return image_base_t_get_prop_clickable(this.nativeObj);
 }

 get selectable() {
   return image_base_t_get_prop_selectable(this.nativeObj);
 }

 get selected() {
   return image_base_t_get_prop_selected(this.nativeObj);
 }

}

class TWindowEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event: any) {
   return new TWindowEvent(window_event_cast(event ? (event.nativeObj || event) : null));
 }

 get window() {
   return window_event_t_get_prop_window(this.nativeObj);
 }

}

class TPaintEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event: any) {
   return new TPaintEvent(paint_event_cast(event ? (event.nativeObj || event) : null));
 }

 get c() {
   return paint_event_t_get_prop_c(this.nativeObj);
 }

}

class TKeyEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event: any) {
   return new TKeyEvent(key_event_cast(event ? (event.nativeObj || event) : null));
 }

 get key() {
   return key_event_t_get_prop_key(this.nativeObj);
 }

 get alt() {
   return key_event_t_get_prop_alt(this.nativeObj);
 }

 get lalt() {
   return key_event_t_get_prop_lalt(this.nativeObj);
 }

 get ralt() {
   return key_event_t_get_prop_ralt(this.nativeObj);
 }

 get ctrl() {
   return key_event_t_get_prop_ctrl(this.nativeObj);
 }

 get lctrl() {
   return key_event_t_get_prop_lctrl(this.nativeObj);
 }

 get rctrl() {
   return key_event_t_get_prop_rctrl(this.nativeObj);
 }

 get shift() {
   return key_event_t_get_prop_shift(this.nativeObj);
 }

 get lshift() {
   return key_event_t_get_prop_lshift(this.nativeObj);
 }

 get rshift() {
   return key_event_t_get_prop_rshift(this.nativeObj);
 }

 get cmd() {
   return key_event_t_get_prop_cmd(this.nativeObj);
 }

 get menu() {
   return key_event_t_get_prop_menu(this.nativeObj);
 }

 get capslock() {
   return key_event_t_get_prop_capslock(this.nativeObj);
 }

}

class TPointerEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event: any) {
   return new TPointerEvent(pointer_event_cast(event ? (event.nativeObj || event) : null));
 }

 get x() {
   return pointer_event_t_get_prop_x(this.nativeObj);
 }

 get y() {
   return pointer_event_t_get_prop_y(this.nativeObj);
 }

 get button() {
   return pointer_event_t_get_prop_button(this.nativeObj);
 }

 get pressed() {
   return pointer_event_t_get_prop_pressed(this.nativeObj);
 }

 get alt() {
   return pointer_event_t_get_prop_alt(this.nativeObj);
 }

 get ctrl() {
   return pointer_event_t_get_prop_ctrl(this.nativeObj);
 }

 get cmd() {
   return pointer_event_t_get_prop_cmd(this.nativeObj);
 }

 get menu() {
   return pointer_event_t_get_prop_menu(this.nativeObj);
 }

 get shift() {
   return pointer_event_t_get_prop_shift(this.nativeObj);
 }

}

class TOrientationEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event: any) {
   return new TOrientationEvent(orientation_event_cast(event ? (event.nativeObj || event) : null));
 }

 get orientation() {
   return orientation_event_t_get_prop_orientation(this.nativeObj);
 }

}

class TWheelEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event: any) {
   return new TWheelEvent(wheel_event_cast(event ? (event.nativeObj || event) : null));
 }

 get dy() {
   return wheel_event_t_get_prop_dy(this.nativeObj);
 }

 get alt() {
   return wheel_event_t_get_prop_alt(this.nativeObj);
 }

 get ctrl() {
   return wheel_event_t_get_prop_ctrl(this.nativeObj);
 }

 get shift() {
   return wheel_event_t_get_prop_shift(this.nativeObj);
 }

}

class TAppBar extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TAppBar(app_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TAppBar(app_bar_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TButtonGroup extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TButtonGroup(button_group_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TButtonGroup(button_group_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TButton extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TButton(button_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TButton(button_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setRepeat(repeat: any) {
   return button_set_repeat(this.nativeObj, repeat);
 }

 setEnableLongPress(enable_long_press: any) {
   return button_set_enable_long_press(this.nativeObj, enable_long_press);
 }

 get repeat() {
   return button_t_get_prop_repeat(this.nativeObj);
 }

 get enableLongPress() {
   return button_t_get_prop_enable_long_press(this.nativeObj);
 }

}

class TCheckButton extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TCheckButton(check_button_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static createRadio(parent: any, x: any, y: any, w: any, h: any) {
   return new TCheckButton(check_button_create_radio(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setValue(value: any) {
   return check_button_set_value(this.nativeObj, value);
 }

 static cast(widget: any) {
   return new TCheckButton(check_button_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get value() {
   return check_button_t_get_prop_value(this.nativeObj);
 }

}

class TColorTile extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TColorTile(color_tile_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TColorTile(color_tile_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setBgColor(color: any) {
   return color_tile_set_bg_color(this.nativeObj, color);
 }

 get bgColor() {
   return color_tile_t_get_prop_bg_color(this.nativeObj);
 }

 get borderColor() {
   return color_tile_t_get_prop_border_color(this.nativeObj);
 }

}

class TColumn extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TColumn(column_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TColumn(column_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TComboBoxItem extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TComboBoxItem(combo_box_item_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TComboBoxItem(combo_box_item_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setChecked(checked: any) {
   return combo_box_item_set_checked(this.nativeObj, checked);
 }

 setValue(value: any) {
   return combo_box_item_set_value(this.nativeObj, value);
 }

 get value() {
   return combo_box_item_t_get_prop_value(this.nativeObj);
 }

 get checked() {
   return combo_box_item_t_get_prop_checked(this.nativeObj);
 }

}

class TComboBox extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TComboBox(combo_box_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TComboBox(combo_box_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setOpenWindow(open_window: any) {
   return combo_box_set_open_window(this.nativeObj, open_window);
 }

 resetOptions() {
   return combo_box_reset_options(this.nativeObj);
 }

 countOptions() {
   return combo_box_count_options(this.nativeObj);
 }

 setSelectedIndex(index: any) {
   return combo_box_set_selected_index(this.nativeObj, index);
 }

 setLocalizeOptions(localize_options: any) {
   return combo_box_set_localize_options(this.nativeObj, localize_options);
 }

 setValue(value: any) {
   return combo_box_set_value(this.nativeObj, value);
 }

 setItemHeight(item_height: any) {
   return combo_box_set_item_height(this.nativeObj, item_height);
 }

 appendOption(value: any, text: any) {
   return combo_box_append_option(this.nativeObj, value, text);
 }

 setOptions(options: any) {
   return combo_box_set_options(this.nativeObj, options);
 }

 getValue() {
   return combo_box_get_value(this.nativeObj);
 }

 getText() {
   return combo_box_get_text(this.nativeObj);
 }

 get openWindow() {
   return combo_box_t_get_prop_open_window(this.nativeObj);
 }

 get selectedIndex() {
   return combo_box_t_get_prop_selected_index(this.nativeObj);
 }

 get value() {
   return combo_box_t_get_prop_value(this.nativeObj);
 }

 get localizeOptions() {
   return combo_box_t_get_prop_localize_options(this.nativeObj);
 }

 get options() {
   return combo_box_t_get_prop_options(this.nativeObj);
 }

 get itemHeight() {
   return combo_box_t_get_prop_item_height(this.nativeObj);
 }

}

class TDialogClient extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TDialogClient(dialog_client_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TDialogClient(dialog_client_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TDialogTitle extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TDialogTitle(dialog_title_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TDialogTitle(dialog_title_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TDigitClock extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TDigitClock(digit_clock_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TDigitClock(digit_clock_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setFormat(format: any) {
   return digit_clock_set_format(this.nativeObj, format);
 }

 get format() {
   return digit_clock_t_get_prop_format(this.nativeObj);
 }

}

class TDragger extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TDragger(dragger_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TDragger(dragger_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setRange(x_min: any, y_min: any, x_max: any, y_max: any) {
   return new TWidget(dragger_set_range(this.nativeObj, x_min, y_min, x_max, y_max));
 }

 get xMin() {
   return dragger_t_get_prop_x_min(this.nativeObj);
 }

 get yMin() {
   return dragger_t_get_prop_y_min(this.nativeObj);
 }

 get xMax() {
   return dragger_t_get_prop_x_max(this.nativeObj);
 }

 get yMax() {
   return dragger_t_get_prop_y_max(this.nativeObj);
 }

}

class TEdit extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TEdit(edit_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TEdit(edit_cast(widget ? (widget.nativeObj || widget) : null));
 }

 getInt() {
   return edit_get_int(this.nativeObj);
 }

 getDouble() {
   return edit_get_double(this.nativeObj);
 }

 setInt(value: any) {
   return edit_set_int(this.nativeObj, value);
 }

 setDouble(value: any) {
   return edit_set_double(this.nativeObj, value);
 }

 setTextLimit(min: any, max: any) {
   return edit_set_text_limit(this.nativeObj, min, max);
 }

 setIntLimit(min: any, max: any, step: any) {
   return edit_set_int_limit(this.nativeObj, min, max, step);
 }

 setFloatLimit(min: any, max: any, step: any) {
   return edit_set_float_limit(this.nativeObj, min, max, step);
 }

 setReadonly(readonly: any) {
   return edit_set_readonly(this.nativeObj, readonly);
 }

 setAutoFix(auto_fix: any) {
   return edit_set_auto_fix(this.nativeObj, auto_fix);
 }

 setSelectNoneWhenFocused(select_none_when_focused: any) {
   return edit_set_select_none_when_focused(this.nativeObj, select_none_when_focused);
 }

 setOpenImWhenFocused(open_im_when_focused: any) {
   return edit_set_open_im_when_focused(this.nativeObj, open_im_when_focused);
 }

 setInputType(type: any) {
   return edit_set_input_type(this.nativeObj, type);
 }

 setInputTips(tips: any) {
   return edit_set_input_tips(this.nativeObj, tips);
 }

 setPasswordVisible(password_visible: any) {
   return edit_set_password_visible(this.nativeObj, password_visible);
 }

 setFocus(focus: any) {
   return edit_set_focus(this.nativeObj, focus);
 }

 setCursor(cursor: any) {
   return edit_set_cursor(this.nativeObj, cursor);
 }

 get readonly() {
   return edit_t_get_prop_readonly(this.nativeObj);
 }

 get passwordVisible() {
   return edit_t_get_prop_password_visible(this.nativeObj);
 }

 get autoFix() {
   return edit_t_get_prop_auto_fix(this.nativeObj);
 }

 get selectNoneWhenFocused() {
   return edit_t_get_prop_select_none_when_focused(this.nativeObj);
 }

 get openImWhenFocused() {
   return edit_t_get_prop_open_im_when_focused(this.nativeObj);
 }

 get tips() {
   return edit_t_get_prop_tips(this.nativeObj);
 }

 get inputType() {
   return edit_t_get_prop_input_type(this.nativeObj);
 }

 get min() {
   return edit_t_get_prop_min(this.nativeObj);
 }

 get max() {
   return edit_t_get_prop_max(this.nativeObj);
 }

 get step() {
   return edit_t_get_prop_step(this.nativeObj);
 }

}

class TGridItem extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TGridItem(grid_item_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TGridItem(grid_item_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TGrid extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TGrid(grid_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TGrid(grid_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TSpinBox extends TEdit {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TSpinBox(spin_box_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TSpinBox(spin_box_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TTimerInfo extends TObject {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(timer: any) {
   return new TTimerInfo(timer_info_cast(timer ? (timer.nativeObj || timer) : null));
 }

 get ctx() {
   return timer_info_t_get_prop_ctx(this.nativeObj);
 }

 get id() {
   return timer_info_t_get_prop_id(this.nativeObj);
 }

 get now() {
   return timer_info_t_get_prop_now(this.nativeObj);
 }

}

class TComboBoxEx extends TComboBox {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TComboBoxEx(combo_box_ex_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

}

class TGifImage extends TImageBase {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TGifImage(gif_image_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TGifImage(gif_image_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TObjectDefault extends TObject {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create() {
   return new TObjectDefault(object_default_create());
 }

 unref() {
   return object_default_unref(this.nativeObj);
 }

 clearProps() {
   return object_default_clear_props(this.nativeObj);
 }

 get propsSize() {
   return object_default_t_get_prop_props_size(this.nativeObj);
 }

}

class TObjectArray extends TObject {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create() {
   return new TObjectArray(object_array_create());
 }

 unref() {
   return object_array_unref(this.nativeObj);
 }

 clearProps() {
   return object_array_clear_props(this.nativeObj);
 }

 get propsSize() {
   return object_array_t_get_prop_props_size(this.nativeObj);
 }

}

class TImage extends TImageBase {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TImage(image_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setDrawType(draw_type: any) {
   return image_set_draw_type(this.nativeObj, draw_type);
 }

 static cast(widget: any) {
   return new TImage(image_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get drawType() {
   return image_t_get_prop_draw_type(this.nativeObj);
 }

}

class TSystemBar extends TWindowBase {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TSystemBar(system_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget: any) {
   return new TSystemBar(system_bar_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TMutableImage extends TImageBase {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

}

class TIdleInfo extends TObject {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(idle: any) {
   return new TIdleInfo(idle_info_cast(idle ? (idle.nativeObj || idle) : null));
 }

 get ctx() {
   return idle_info_t_get_prop_ctx(this.nativeObj);
 }

 get id() {
   return idle_info_t_get_prop_id(this.nativeObj);
 }

}

class TSvgImage extends TImageBase {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent: any, x: any, y: any, w: any, h: any) {
   return new TSvgImage(svg_image_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setImage(name: any) {
   return svg_image_set_image(this.nativeObj, name);
 }

 static cast(widget: any) {
   return new TSvgImage(svg_image_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TWindowManagerDefault extends TWindowManager {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

}

class TWindowManagerSimple extends TWindowManager {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

}

