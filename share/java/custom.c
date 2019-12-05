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
