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

typedef struct _async_callback_info_t {
  JNIEnv* env;
  jobject obj;
  char func[TK_NAME_LEN+1];
} async_callback_info_t;

static ret_t call_on_event(void* ctx, event_t* e) {
  ret_t ret = RET_REMOVE;
  async_callback_info_t* info = (async_callback_info_t*)(ctx);

  return ret;
}

static async_callback_info_t* async_callback_info_create(JNIEnv* env, jobject obj, const char* name) {
  async_callback_info_t* info = TKMEM_ZALLOC(async_callback_info_t);
  return_value_if_fail(info != NULL, NULL);

  info->env = env;
  info->obj = (*env)->NewGlobalRef(env, obj);
  tk_strncpy(info->func, name, TK_NAME_LEN);

  return info;
}

static ret_t async_callback_info_destroy(async_callback_info_t* info) {
  return_value_if_fail(info != NULL, RET_BAD_PARAMS);
  (*(info->env))->DeleteGlobalRef(info->env, info->obj);

  TKMEM_FREE(info);

  return RET_OK;
}

static ret_t emitter_item_on_destroy(void* data) {
  emitter_item_t* item = (emitter_item_t*)data;

  async_callback_info_destroy((async_callback_info_t*)(item->ctx));

  return RET_OK;
}

JNIEXPORT jint JNICALL Java_awtk_Idle_idle_1add(JNIEnv* env,  jclass ajc, jobject on_idle, jlong ctx) { /*func*/
  printf("jobject=%lu", sizeof(jobject));
  return RET_OK;
}


JNIEXPORT jint JNICALL Java_awtk_LocaleInfo_locale_1info_1on(JNIEnv* env,  jclass ajc, jlong jlocale_info, jint type, jobject on_event, jlong ctx) { /*func*/
  return RET_OK;
}


JNIEXPORT jint JNICALL Java_awtk_Timer_timer_1add(JNIEnv* env,  jclass ajc, jobject on_timer, jlong ctx, jint duration) { /*func*/
  return RET_OK;
}


JNIEXPORT jint JNICALL Java_awtk_Widget_widget_1on(JNIEnv* env,  jclass ajc, jlong jwidget, jint type, jobject on_event, jlong ctx) { /*func*/
  widget_t* widget = WIDGET(jwidget);
  async_callback_info_t* info = async_callback_info_create(env, on_event, "onEvent");
  
  ret_t ret = widget_on(widget, type, call_on_event, info);
  emitter_set_on_destroy(widget->emitter, ret, emitter_item_on_destroy, NULL);

  return RET_OK;
}


JNIEXPORT jint JNICALL Java_awtk_Widget_widget_1on_1with_1tag(JNIEnv* env,  jclass ajc, jlong jwidget, jint type, jobject on_event, jlong ctx, jint tag) { /*func*/
  return RET_OK;
}


JNIEXPORT jint JNICALL Java_awtk_Widget_widget_1foreach(JNIEnv* env,  jclass ajc, jlong jwidget, jobject visit, jlong ctx) { /*func*/
  return RET_OK;
}


JNIEXPORT jint JNICALL Java_awtk_Emitter_emitter_1on(JNIEnv* env,  jclass ajc, jlong jemitter, jint type, jobject on_event, jlong ctx) { /*func*/
  return RET_OK;
}


JNIEXPORT jint JNICALL Java_awtk_Emitter_emitter_1on_1with_1tag(JNIEnv* env,  jclass ajc, jlong jemitter, jint type, jobject on_event, jlong ctx, jint tag) { /*func*/
  return RET_OK;
}


JNIEXPORT jint JNICALL Java_awtk_Object_object_1foreach_1prop(JNIEnv* env,  jclass ajc, jlong jobj, jobject on_prop, jlong ctx) { /*func*/
  return RET_OK;
}

