#include "awtk.h"

extern ret_t assets_init(void);

JNIEXPORT jint JNICALL Java_awtk_AWTK_init(JNIEnv* env,  jclass ajc, jint w, jint h, jint app_type) { /*func*/
  tk_init(w, h, APP_SIMULATOR, NULL, RES_ROOT);

  assets_init();

  return RET_OK;
}

JNIEXPORT jint JNICALL Java_awtk_AWTK_run(JNIEnv* env,  jclass ajc) { /*func*/
  return (jint) tk_run();
}

JNIEXPORT jint JNICALL Java_awtk_Idle_idle_1add(JNIEnv* env,  jclass ajc, jobject on_idle, jlong ctx) { /*func*/
}


JNIEXPORT jint JNICALL Java_awtk_LocaleInfo_locale_1info_1on(JNIEnv* env,  jclass ajc, jlong jlocale_info, jint type, jobject on_event, jlong ctx) { /*func*/
}


JNIEXPORT jint JNICALL Java_awtk_Timer_timer_1add(JNIEnv* env,  jclass ajc, jobject on_timer, jlong ctx, jint duration) { /*func*/
}


JNIEXPORT jint JNICALL Java_awtk_Widget_widget_1on(JNIEnv* env,  jclass ajc, jlong jwidget, jint type, jobject on_event, jlong ctx) { /*func*/
}


JNIEXPORT jint JNICALL Java_awtk_Widget_widget_1on_1with_1tag(JNIEnv* env,  jclass ajc, jlong jwidget, jint type, jobject on_event, jlong ctx, jint tag) { /*func*/
}


JNIEXPORT jint JNICALL Java_awtk_Widget_widget_1foreach(JNIEnv* env,  jclass ajc, jlong jwidget, jobject visit, jlong ctx) { /*func*/
}


JNIEXPORT jint JNICALL Java_awtk_Emitter_emitter_1on(JNIEnv* env,  jclass ajc, jlong jemitter, jint type, jobject on_event, jlong ctx) { /*func*/
}


JNIEXPORT jint JNICALL Java_awtk_Emitter_emitter_1on_1with_1tag(JNIEnv* env,  jclass ajc, jlong jemitter, jint type, jobject on_event, jlong ctx, jint tag) { /*func*/
}


JNIEXPORT jint JNICALL Java_awtk_Object_object_1foreach_1prop(JNIEnv* env,  jclass ajc, jlong jobj, jobject on_prop, jlong ctx) { /*func*/
}

