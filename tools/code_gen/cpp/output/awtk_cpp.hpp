#ifndef AWTK_CPP_HPP
#define AWTK_CPP_HPP
#include "awtk.h"
class TValue;
class TRect;
class TObject;
class TEmitter;
class TEvent;
class TWidget;
class TWindow;

/**
 * 事件基类。
 *
 */
class TEvent {
public:
 event_t* nativeObj;

 TEvent(event_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TEvent(const event_t* nativeObj) {
   this->nativeObj = (event_t*)nativeObj;
 }

 static TEvent cast(event_t* nativeObj) {
   return TEvent(nativeObj);
 }

 static TEvent cast(const event_t* nativeObj) {
   return TEvent((event_t*)nativeObj);
 }


/**
 * 转换为event对象。
 * 
 * 供脚本语言使用
 * 
 * @param event event对象。
 *
 * @return event对象。
 */
 static TEvent Cast(TEvent& event) ;

/**
 * 创建event对象。
 * 
 * 主要给脚本语言使用。
 * 
 * @param type 事件类型。
 *
 * @return 返回事件对象。
 */
 static TEvent Create(uint32_t type) ;

/**
 * 销毁事件对象。
 * 
 * 主要给脚本语言使用。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Destroy() ;
 int32_t getType() const;
 int32_t getTime() const;
 void* getTarget() const;
};


/**
 * 矩形。包括一个x坐标、y坐标、宽度和高度。
 *
 */
class TRect {
public:
 rect_t* nativeObj;

 TRect(rect_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TRect(const rect_t* nativeObj) {
   this->nativeObj = (rect_t*)nativeObj;
 }

 static TRect cast(rect_t* nativeObj) {
   return TRect(nativeObj);
 }

 static TRect cast(const rect_t* nativeObj) {
   return TRect((rect_t*)nativeObj);
 }


/**
 * 创建rect对象。
 * 
 * 主要供脚本语言使用。
 * 
 * @param x x坐标。
 * @param y y坐标。
 * @param w 宽度。
 * @param h 高度。
 *
 * @return rect对象。
 */
 static TRect Create(xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置rect对象的xywh。
 * 
 * 主要供脚本语言使用。
 * 
 * @param x x坐标。
 * @param y y坐标。
 * @param w 宽度。
 * @param h 高度。
 *
 * @return rect对象。
 */
 TRect Set(xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为rect对象。
 * 
 * 供脚本语言使用。
 * 
 * @param rect rect对象。
 *
 * @return rect对象。
 */
 static TRect Cast(TRect& rect) ;

/**
 * 销毁rect对象。
 * 
 * 主要供脚本语言使用。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Destroy() ;
 xy_t getX() const;
 xy_t getY() const;
 wh_t getW() const;
 wh_t getH() const;
};


/**
 * 点(浮点数)。包括一个x坐标和一个y坐标。
 *
 */
class TPointf {
public:
 pointf_t* nativeObj;

 TPointf(pointf_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TPointf(const pointf_t* nativeObj) {
   this->nativeObj = (pointf_t*)nativeObj;
 }

 static TPointf cast(pointf_t* nativeObj) {
   return TPointf(nativeObj);
 }

 static TPointf cast(const pointf_t* nativeObj) {
   return TPointf((pointf_t*)nativeObj);
 }

};


/**
 * 点。包括一个x坐标和一个y坐标。
 *
 */
class TPoint {
public:
 point_t* nativeObj;

 TPoint(point_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TPoint(const point_t* nativeObj) {
   this->nativeObj = (point_t*)nativeObj;
 }

 static TPoint cast(point_t* nativeObj) {
   return TPoint(nativeObj);
 }

 static TPoint cast(const point_t* nativeObj) {
   return TPoint((point_t*)nativeObj);
 }

};


/**
 * 事件分发器, 用于实现观察者模式。
 *
 */
class TEmitter {
public:
 emitter_t* nativeObj;

 TEmitter(emitter_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TEmitter(const emitter_t* nativeObj) {
   this->nativeObj = (emitter_t*)nativeObj;
 }

 static TEmitter cast(emitter_t* nativeObj) {
   return TEmitter(nativeObj);
 }

 static TEmitter cast(const emitter_t* nativeObj) {
   return TEmitter((emitter_t*)nativeObj);
 }


/**
 * 创建emitter对象。
 * 
 *
 * @return 对象。
 */
 static TEmitter Create() ;

/**
 * 分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
 * 禁用状态下，本函数不做任何事情。
 * 
 * @param e 事件对象。
 *
 * @return 如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。
 */
 ret_t Dispatch(TEvent& e) ;

/**
 * 分发事件。
 * 对emitter_dispatch的包装，分发一个简单的事件。
 * 如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。
 * 
 * @param type 事件类型。
 *
 * @return 
 */
 ret_t DispatchSimpleEvent(event_type_t type) ;

/**
 * 注册指定事件的处理函数。
 * 
 * @param type 事件类型。
 * @param on_event 事件处理函数。
 * @param ctx 事件处理函数上下文。
 *
 * @return 返回id，用于emitter_off。
 */
 uint32_t On(event_type_t type, event_func_t on_event, void* ctx) ;

/**
 * 注销指定事件的处理函数。
 * 
 * @param id emitter_on返回的ID。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Off(uint32_t id) ;

/**
 * 启用。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Enable() ;

/**
 * 禁用。
 * 
 * 禁用后emitter_dispatch无效，但可以注册和注销。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Disable() ;

/**
 * 获取注册的回调函数个数，主要用于辅助测试。
 * 
 *
 * @return 回调函数个数。
 */
 uint32_t Size() ;

/**
 * 销毁。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Destroy() ;

/**
 * 转换为emitter对象(供脚本语言使用)。
 * 
 * 主要给脚本语言使用。
 * 
 * @param emitter emitter对象。
 *
 * @return 对象。
 */
 static TEmitter Cast(TEmitter& emitter) ;
};


/**
 * 位图。
 *
 */
class TBitmap {
public:
 bitmap_t* nativeObj;

 TBitmap(bitmap_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TBitmap(const bitmap_t* nativeObj) {
   this->nativeObj = (bitmap_t*)nativeObj;
 }

 static TBitmap cast(bitmap_t* nativeObj) {
   return TBitmap(nativeObj);
 }

 static TBitmap cast(const bitmap_t* nativeObj) {
   return TBitmap((bitmap_t*)nativeObj);
 }


/**
 * 创建图片对象(一般供脚本语言中使用)。
 * 
 *
 * @return 返回bitmap对象。
 */
 static TBitmap Create() ;

/**
 * 创建图片对象。
 * 
 * @param w 宽度。
 * @param h 高度。
 * @param line_length line_length。
 * @param format 格式。
 *
 * @return 返回bitmap对象。
 */
 static TBitmap CreateEx(uint32_t w, uint32_t h, uint32_t line_length, bitmap_format_t format) ;

/**
 * 获取图片一个像素占用的字节数。
 * 
 *
 * @return 返回一个像素占用的字节数。
 */
 uint32_t GetBpp() ;

/**
 * 销毁图片。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Destroy() ;
 wh_t getW() const;
 wh_t getH() const;
 uint32_t getLineLength() const;
 uint16_t getFlags() const;
 uint16_t getFormat() const;
 const char* getName() const;
};


/**
 * 一个通用数据类型，用来存放整数、浮点数、字符串和其它对象。
 * 
 * 在C/C++中，一般不需动态创建对象，直接声明并初始化即可。如：
 * 
 * 
 * 在脚本语言中，需要动态创建对象。
 *
 */
class TValue {
public:
 value_t* nativeObj;

 TValue(value_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TValue(const value_t* nativeObj) {
   this->nativeObj = (value_t*)nativeObj;
 }

 static TValue cast(value_t* nativeObj) {
   return TValue(nativeObj);
 }

 static TValue cast(const value_t* nativeObj) {
   return TValue((value_t*)nativeObj);
 }


/**
 * 设置类型为bool的值。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetBool(bool value) ;

/**
 * 获取类型为bool的值。
 * 
 *
 * @return 值。
 */
 bool Bool() ;

/**
 * 设置类型为int8的值。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetInt8(int8_t value) ;

/**
 * 获取类型为int8的值。
 * 
 *
 * @return 值。
 */
 int8_t Int8() ;

/**
 * 设置类型为uint8的值。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetUint8(uint8_t value) ;

/**
 * 获取类型为uint8的值。
 * 
 *
 * @return 值。
 */
 int8_t Uint8() ;

/**
 * 设置类型为int16的值。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetInt16(int16_t value) ;

/**
 * 获取类型为int16的值。
 * 
 *
 * @return 值。
 */
 int16_t Int16() ;

/**
 * 设置类型为uint16的值。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetUint16(uint16_t value) ;

/**
 * 获取类型为uint16的值。
 * 
 *
 * @return 值。
 */
 uint16_t Uint16() ;

/**
 * 设置类型为int32的值。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetInt32(int32_t value) ;

/**
 * 获取类型为int32的值。
 * 
 *
 * @return 值。
 */
 int32_t Int32() ;

/**
 * 设置类型为uint32的值。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetUint32(uint32_t value) ;

/**
 * 设置类型为int64的值。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetInt64(int64_t value) ;

/**
 * 获取类型为int64的值。
 * 
 *
 * @return 值。
 */
 int64_t Int64() ;

/**
 * 设置类型为uint64的值。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetUint64(uint64_t value) ;

/**
 * 获取类型为uint64的值。
 * 
 *
 * @return 值。
 */
 uint64_t Uint64() ;

/**
 * 设置类型为float\_t的值。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetFloat(float_t value) ;

/**
 * 获取类型为float的值。
 * 
 *
 * @return 值。
 */
 float Float32() ;

/**
 * 设置类型为double的值。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetFloat64(double value) ;

/**
 * 获取类型为double的值。
 * 
 *
 * @return 值。
 */
 double Float64() ;

/**
 * 设置类型为字符串的值(并拷贝字符串)。
 * 
 * 供脚本语言使用。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetStr(const char* value) ;

/**
 * 获取类型为字符串的值。
 * 
 *
 * @return 值。
 */
 const char* Str() ;

/**
 * 判断value是否为空值。
 * 
 *
 * @return 为空值返回TRUE，否则返回FALSE。
 */
 bool IsNull() ;

/**
 * 设置类型为int的值。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetInt(int32_t value) ;

/**
 * 设置类型为object的值。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetObject(TObject& value) ;

/**
 * 转换为object的值。
 * 
 *
 * @return 值。
 */
 TObject Object() ;

/**
 * 设置类型为token的值。
 * 
 * @param value 待设置的值。
 *
 * @return value对象本身。
 */
 TValue SetToken(uint32_t value) ;

/**
 * 获取token的值。
 * 
 *
 * @return 值。
 */
 uint32_t Token() ;

/**
 * 创建value对象。
 * 
 *
 * @return 对象。
 */
 static TValue Create() ;

/**
 * 销毁value对象。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Destroy() ;

/**
 * 重置value对象。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Reset() ;

/**
 * 转换为value对象。
 * 
 * 供脚本语言使用
 * 
 * @param value value对象。
 *
 * @return 对象。
 */
 static TValue Cast(TValue& value) ;
};


/**
 * 对象接口。
 *
 */
class TObject : public TEmitter {
public:
 TObject(emitter_t* nativeObj) : TEmitter(nativeObj) {
 }

 TObject(const object_t* nativeObj) : TEmitter((emitter_t*)nativeObj) {
 }

 static TObject cast(emitter_t* nativeObj) {
   return TObject(nativeObj);
 }

 static TObject cast(const emitter_t* nativeObj) {
   return TObject((emitter_t*)nativeObj);
 }


/**
 * 引用计数减1。引用计数为0时，销毁对象。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Unref() ;

/**
 * 引用计数加1。
 * 
 * @param obj object对象。
 *
 * @return 返回object对象。
 */
 static TObject Ref(TObject& obj) ;

/**
 * 获取对象的类型名称。
 * 
 *
 * @return 返回对象的类型名称。
 */
 const char* GetType() ;

/**
 * 获取对象的描述信息。
 * 
 *
 * @return 返回对象的描述信息。
 */
 const char* GetDesc() ;

/**
 * 获取对象占用内存的大小。
 * 
 *
 * @return 返回对象占用内存的大小。
 */
 uint32_t GetSize() ;

/**
 * 判断对象是否是集合。
 * 
 *
 * @return 返回TRUE表示是集合，否则不是。
 */
 bool IsCollection() ;

/**
 * 设置对象的名称。
 * 
 * @param name 对象的名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetName(const char* name) ;

/**
 * 比较两个对象。
 * 
 * @param other 比较的object对象。
 *
 * @return 返回比较结果。
 */
 int Compare(TObject& other) ;

/**
 * 获取指定属性的值。
 * 
 * @param name 属性的名称。
 * @param v 返回属性的值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t GetProp(const char* name, TValue& v) ;

/**
 * 获取指定属性的字符串类型的值。
 * 
 * @param name 属性的名称。
 *
 * @return 返回指定属性的字符串类型的值。
 */
 const char* GetPropStr(const char* name) ;

/**
 * 获取指定属性的指针类型的值。
 * 
 * @param name 属性的名称。
 *
 * @return 返回指定属性的指针类型的值。
 */
 void* GetPropPointer(const char* name) ;

/**
 * 获取指定属性的object类型的值。
 * 
 * @param name 属性的名称。
 *
 * @return 返回指定属性的object类型的值。
 */
 TObject GetPropObject(const char* name) ;

/**
 * 获取指定属性的整数类型的值。
 * 
 * @param name 属性的名称。
 * @param defval 缺省值。
 *
 * @return 返回指定属性的整数类型的值。
 */
 int32_t GetPropInt(const char* name, int32_t defval) ;

/**
 * 获取指定属性的bool类型的值。
 * 
 * @param name 属性的名称。
 * @param defval 缺省值。
 *
 * @return 返回指定属性的bool类型的值。
 */
 bool GetPropBool(const char* name, bool defval) ;

/**
 * 获取指定属性的浮点数类型的值。
 * 
 * @param name 属性的名称。
 * @param defval 缺省值。
 *
 * @return 返回指定属性的浮点数类型的值。
 */
 float_t GetPropFloat(const char* name, float_t defval) ;

/**
 * 删除指定属性。
 * 
 * @param name 属性的名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t RemoveProp(const char* name) ;

/**
 * 设置指定属性的值。
 * 
 * @param name 属性的名称。
 * @param value 属性的值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetProp(const char* name, TValue& value) ;

/**
 * 设置指定属性的字符串类型的值。
 * 
 * @param name 属性的名称。
 * @param value 属性的值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetPropStr(const char* name, const char* value) ;

/**
 * 设置指定属性的object类型的值。
 * 
 * @param name 属性的名称。
 * @param value 属性的值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetPropObject(const char* name, TObject& value) ;

/**
 * 设置指定属性的整数类型的值。
 * 
 * @param name 属性的名称。
 * @param value 属性的值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetPropInt(const char* name, int32_t value) ;

/**
 * 设置指定属性的bool类型的值。
 * 
 * @param name 属性的名称。
 * @param value 属性的值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetPropBool(const char* name, bool value) ;

/**
 * 设置指定属性的浮点数类型的值。
 * 
 * @param name 属性的名称。
 * @param value 属性的值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetPropFloat(const char* name, float_t value) ;

/**
 * 拷贝指定的属性。
 * 
 * @param src 源对象。
 * @param name 属性的名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t CopyProp(TObject& src, const char* name) ;

/**
 * 检查是否存在指定的属性。
 * 
 * @param name 属性的名称。
 *
 * @return 返回TRUE表示存在，否则表示不存在。
 */
 bool HasProp(const char* name) ;

/**
 * 计算一个表达式，表达式中引用的变量从prop中获取。
 * 
 * @param expr 表达式。
 * @param v 返回计算结果。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Eval(const char* expr, TValue& v) ;

/**
 * 检查是否可以执行指定的命令。
 * 
 * @param name 命令的名称。
 * @param args 命令的参数。
 *
 * @return 返回TRUE表示可以执行，否则表示不可以执行。
 */
 bool CanExec(const char* name, const char* args) ;

/**
 * 执行指定的命令。
 * 
 * @param name 命令的名称。
 * @param args 命令的参数。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Exec(const char* name, const char* args) ;

/**
 * 触发EVT_PROPS_CHANGED事件。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t NotifyChanged() ;

/**
 * 获取指定属性的字符串类型的值。
 * 
 * @param path 属性的path。
 *
 * @return 返回指定属性的字符串类型的值。
 */
 const char* GetPropStrByPath(const char* path) ;

/**
 * 获取指定属性的指针类型的值。
 * 
 * @param path 属性的path。
 *
 * @return 返回指定属性的指针类型的值。
 */
 void* GetPropPointerByPath(const char* path) ;

/**
 * 获取指定属性的object类型的值。
 * 
 * @param path 属性的path。
 *
 * @return 返回指定属性的object类型的值。
 */
 TObject GetPropObjectByPath(const char* path) ;

/**
 * 获取指定属性的整数类型的值。
 * 
 * @param path 属性的path。
 * @param defval 缺省值。
 *
 * @return 返回指定属性的整数类型的值。
 */
 int32_t GetPropIntByPath(const char* path, int32_t defval) ;

/**
 * 获取指定属性的bool类型的值。
 * 
 * @param path 属性的path。
 * @param defval 缺省值。
 *
 * @return 返回指定属性的bool类型的值。
 */
 bool GetPropBoolByPath(const char* path, bool defval) ;

/**
 * 获取指定属性的浮点数类型的值。
 * 
 * @param path 属性的path。
 * @param defval 缺省值。
 *
 * @return 返回指定属性的浮点数类型的值。
 */
 float_t GetPropFloatByPath(const char* path, float_t defval) ;
 int32_t getRefCount() const;
 char* getName() const;
};


/**
 * TK全局对象。
 *
 */
class TGlobal {
public:

/**
 * 退出TK事件主循环。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 static ret_t Quit() ;

/**
 * 获取全局指针的X坐标。
 * 
 *
 * @return 返回全局指针的X坐标。
 */
 static int32_t GetPointerX() ;

/**
 * 获取全局指针的Y坐标。
 * 
 *
 * @return 返回全局指针的X坐标。
 */
 static int32_t GetPointerY() ;

/**
 * 获取全局指针是否按下。
 * 
 *
 * @return 返回全局指针是否按下。
 */
 static bool IsPointerPressed() ;
};


/**
 * 字体管理器，负责字体的加载和缓存管理。
 * (如果使用nanovg，字体由nanovg内部管理)
 *
 */
class TFontManager {
public:
 font_manager_t* nativeObj;

 TFontManager(font_manager_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TFontManager(const font_manager_t* nativeObj) {
   this->nativeObj = (font_manager_t*)nativeObj;
 }

 static TFontManager cast(font_manager_t* nativeObj) {
   return TFontManager(nativeObj);
 }

 static TFontManager cast(const font_manager_t* nativeObj) {
   return TFontManager((font_manager_t*)nativeObj);
 }


/**
 * 卸载指定的字体。
 * 
 * @param name 字体名，为NULL时使用缺省字体。
 * @param size 字体的大小(矢量字体指定为0即可)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t UnloadFont(char* name, font_size_t size) ;

/**
 * 卸载全部字体。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t UnloadAll() ;
};


/**
 * idle可以看作是duration为0的定时器。
 * 
 * idle可以用来实现一些异步处理。
 * 
 * 示例：
 * 
 * 
 * 在非GUI线程请用idle\_queue。
 *
 */
class TIdle {
public:

/**
 * 增加一个idle。
 * 
 * @param on_idle idle回调函数，回调函数返回RET_REPEAT，则下次继续执行，否则自动移出。
 * @param ctx idle回调函数的上下文。
 *
 * @return 返回idle的ID，0表示失败。
 */
 static uint32_t Add(idle_func_t on_idle, void* ctx) ;

/**
 * 删除指定的idle。
 * 
 * @param idle_id idleID。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 static ret_t Remove(uint32_t idle_id) ;
};


/**
 * 图片管理器。负责加载，解码和缓存图片。
 *
 */
class TImageManager {
public:
 image_manager_t* nativeObj;

 TImageManager(image_manager_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TImageManager(const image_manager_t* nativeObj) {
   this->nativeObj = (image_manager_t*)nativeObj;
 }

 static TImageManager cast(image_manager_t* nativeObj) {
   return TImageManager(nativeObj);
 }

 static TImageManager cast(const image_manager_t* nativeObj) {
   return TImageManager((image_manager_t*)nativeObj);
 }


/**
 * 获取缺省的图片管理器。
 * 
 *
 * @return 返回图片管理器对象。
 */
 static TImageManager Instance() ;

/**
 * 获取指定的图片。
 * 先从缓存查找，如果没找到，再加载并缓存。
 * 
 * @param name 图片名称。
 * @param image 用于返回图片。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t GetBitmap(char* name, TBitmap& image) ;
};


/**
 * 输入法接口。
 * 
 * 常见的实现方式有以下几种：
 * 
 * * 空实现。用于不需要输入法的嵌入式平台。
 * 
 * * 缺省实现。用于需要输入法的嵌入式平台。
 * 
 * * 基于SDL实现的平台原生输入法。用于桌面系统和手机系统。
 * 
 * 
 * 
 * 输入类型请参考：[input\_type](input_type_t.md)
 *
 */
class TInputMethod {
public:
 input_method_t* nativeObj;

 TInputMethod(input_method_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TInputMethod(const input_method_t* nativeObj) {
   this->nativeObj = (input_method_t*)nativeObj;
 }

 static TInputMethod cast(input_method_t* nativeObj) {
   return TInputMethod(nativeObj);
 }

 static TInputMethod cast(const input_method_t* nativeObj) {
   return TInputMethod((input_method_t*)nativeObj);
 }


/**
 * 提交输入文本。
 * 
 * @param text 文本。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t CommitText(char* text) ;

/**
 * 提交按键。
 * 
 * @param key 键值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t DispatchKey(uint32_t key) ;

/**
 * 获取全局输入法对象。
 * 
 *
 * @return 成功返回输入法对象，失败返回NULL。
 */
 static TInputMethod Instance() ;
};


/**
 * 本地化信息。提供字符串翻译数据管理，当前语言改变的事件通知等等。
 *
 */
class TLocaleInfo {
public:
 locale_info_t* nativeObj;

 TLocaleInfo(locale_info_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TLocaleInfo(const locale_info_t* nativeObj) {
   this->nativeObj = (locale_info_t*)nativeObj;
 }

 static TLocaleInfo cast(locale_info_t* nativeObj) {
   return TLocaleInfo(nativeObj);
 }

 static TLocaleInfo cast(const locale_info_t* nativeObj) {
   return TLocaleInfo((locale_info_t*)nativeObj);
 }


/**
 * 获取缺省locale_info。
 * 
 *
 * @return 返回locale_info对象。
 */
 static TLocaleInfo Instance() ;

/**
 * 翻译字符串。
 * 
 * @param text 待翻译的文本。
 *
 * @return 返回翻译之后的字符串。
 */
 const char* Tr(const char* text) ;

/**
 * 设置当前的国家和语言。
 * 
 * @param language 语言。
 * @param country 国家或地区。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Change(char* language, char* country) ;

/**
 * 注销指定事件的处理函数。
 * 
 * @param id locale_info_on返回的ID。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Off(uint32_t id) ;
};


/**
 * 控件风格。
 * 
 * widget从style对象中，获取诸如字体、颜色和图片相关的参数，根据这些参数来绘制界面。
 * 
 * 
 * 属性名称的请参考[style\_id](style_id_t.md)
 *
 */
class TStyle {
public:
 style_t* nativeObj;

 TStyle(style_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TStyle(const style_t* nativeObj) {
   this->nativeObj = (style_t*)nativeObj;
 }

 static TStyle cast(style_t* nativeObj) {
   return TStyle(nativeObj);
 }

 static TStyle cast(const style_t* nativeObj) {
   return TStyle((style_t*)nativeObj);
 }


/**
 * widget状态改变时，通知style更新数据。
 * 
 * @param widget 控件对象。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t NotifyWidgetStateChanged(TWidget& widget) ;

/**
 * 检查style对象是否有效
 * 
 *
 * @return 返回是否有效。
 */
 bool IsValid() ;

/**
 * 获取指定name的整数格式的值。
 * 
 * @param name 属性名。
 * @param defval 缺省值。
 *
 * @return 返回整数格式的值。
 */
 int32_t GetInt(const char* name, int32_t defval) ;

/**
 * 获取指定name的字符串格式的值。
 * 
 * @param name 属性名。
 * @param defval 缺省值。
 *
 * @return 返回字符串格式的值。
 */
 const char* GetStr(const char* name, const char* defval) ;

/**
 * 设置指定状态的指定属性的值(仅仅对mutable的style有效)。
 * 
 * @param state 状态。
 * @param name 属性名。
 * @param value 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Set(const char* state, const char* name, TValue& value) ;

/**
 * 检查style是否是mutable的。
 * 
 *
 * @return 返回TRUE表示是，否则表示不是。
 */
 bool IsMutable() ;
};


/**
 * 主题。
 * 
 * 负责管理缺省的主题数据，方便实现style\_const。
 *
 */
class TTheme {
public:
 theme_t* nativeObj;

 TTheme(theme_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TTheme(const theme_t* nativeObj) {
   this->nativeObj = (theme_t*)nativeObj;
 }

 static TTheme cast(theme_t* nativeObj) {
   return TTheme(nativeObj);
 }

 static TTheme cast(const theme_t* nativeObj) {
   return TTheme((theme_t*)nativeObj);
 }


/**
 * 获取缺省的主题对象。
 * 
 *
 * @return 返回主题对象。
 */
 static TTheme Instance() ;
};


/**
 * 定时器系统。
 * 
 * 本定时器精度较低，最高精度为1000/FPS，如果需要高精度的定时器，请用OS提供的定时器。
 * 
 * 示例：
 * 
 * 在非GUI线程请用timer\_queue。
 *
 */
class TTimer {
public:

/**
 * 增加一个timer。
 * 
 * @param on_timer timer回调函数。
 * @param ctx timer回调函数的上下文。
 * @param duration 时间。
 *
 * @return 返回timer的ID，TK_INVALID_ID表示失败。
 */
 static uint32_t Add(timer_func_t on_timer, void* ctx, uint32_t duration) ;

/**
 * 删除指定的timer。
 * 
 * @param timer_id timerID。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 static ret_t Remove(uint32_t timer_id) ;

/**
 * 重置指定的timer，重置之后定时器重新开始计时。
 * 
 * @param timer_id timerID。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 static ret_t Reset(uint32_t timer_id) ;

/**
 * 修改指定的timer的duration，修改之后定时器重新开始计时。
 * 
 * @param timer_id timerID。
 * @param duration 新的时间。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 static ret_t Modify(uint32_t timer_id, uint32_t duration) ;
};


/**
 * 矢量图画布抽象基类。
 * 
 * 具体实现时可以使用agg，nanovg, cairo和skia等方式。
 * 
 * cairo和skia体积太大，不适合嵌入式平台，但在PC平台也是一种选择。
 * 
 * 目前我们只提供了基于nanovg的实现，支持软件渲染和硬件渲染。
 * 
 * 我们对nanovg进行了一些改进:
 * 
 * * 可以用agg/agge实现软件渲染(暂时不支持文本绘制)。
 * 
 * * 可以用bgfx使用DirectX(Windows平台)和Metal(iOS)平台硬件加速。
 * 
 * 
 * 
 * 示例：
 * 
 * 
 *请参考：https://www.w3schools.com/tags/ref_canvas.asp
 *
 */
class TVgcanvas {
public:
 vgcanvas_t* nativeObj;

 TVgcanvas(vgcanvas_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TVgcanvas(const vgcanvas_t* nativeObj) {
   this->nativeObj = (vgcanvas_t*)nativeObj;
 }

 static TVgcanvas cast(vgcanvas_t* nativeObj) {
   return TVgcanvas(nativeObj);
 }

 static TVgcanvas cast(const vgcanvas_t* nativeObj) {
   return TVgcanvas((vgcanvas_t*)nativeObj);
 }


/**
 * 转换为vgcanvas对象(供脚本语言使用)。
 * 
 * @param vg vgcanvas对象。
 *
 * @return vgcanvas对象。
 */
 static TVgcanvas Cast(TVgcanvas& vg) ;

/**
 * flush
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Flush() ;

/**
 * 清除之前的路径，并重新开始一条路径。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t BeginPath() ;

/**
 * 移动当前点到指定点。
 * 
 * @param x x坐标。
 * @param y y坐标。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t MoveTo(float_t x, float_t y) ;

/**
 * 生成一条线段(从当前点到目标点)。
 * 
 * @param x x坐标。
 * @param y y坐标。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t LineTo(float_t x, float_t y) ;

/**
 * 生成一条二次贝塞尔曲线。
 * 
 * @param cpx 控制点x坐标。
 * @param cpy 控制点y坐标。
 * @param x x坐标。
 * @param y y坐标。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t QuadTo(float_t cpx, float_t cpy, float_t x, float_t y) ;

/**
 * 生成一条三次贝塞尔曲线。
 * 
 * @param cp1x 控制点1x坐标。
 * @param cp1y 控制点1y坐标。
 * @param cp2x 控制点2x坐标。
 * @param cp2y 控制点3y坐标。
 * @param x x坐标。
 * @param y y坐标。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t BezierTo(float_t cp1x, float_t cp1y, float_t cp2x, float_t cp2y, float_t x, float_t y) ;

/**
 * 生成一条圆弧路径到指定点。
 * 
 * @param x1 起始点x坐标。
 * @param y1 起始点y坐标。
 * @param x2 结束点x坐标。
 * @param y2 结束点y坐标。
 * @param r 半径。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t ArcTo(float_t x1, float_t y1, float_t x2, float_t y2, float_t r) ;

/**
 * 生成一条圆弧。
 * 
 * @param x 原点x坐标。
 * @param y 原点y坐标。
 * @param r 半径。
 * @param start_angle 起始角度。
 * @param end_angle 结束角度。
 * @param ccw 是否逆时针。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Arc(float_t x, float_t y, float_t r, float_t start_angle, float_t end_angle, bool ccw) ;

/**
 * 检查点是否在当前路径中。
 * 
 * @param x x坐标。
 * @param y y坐标。
 *
 * @return 返回TRUE表示在，否则表示不在。
 */
 bool IsPointInPath(float_t x, float_t y) ;

/**
 * 生成一个矩形路径。
 * 
 * @param x x坐标。
 * @param y y坐标。
 * @param w 宽度。
 * @param h 高度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Rect(float_t x, float_t y, float_t w, float_t h) ;

/**
 * 生成一个圆角矩形路径。
 * 
 * @param x x坐标。
 * @param y y坐标。
 * @param w 宽度。
 * @param h 高度。
 * @param r 圆角半径。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t RoundedRect(float_t x, float_t y, float_t w, float_t h, float_t r) ;

/**
 * 生成一个椭圆路径。
 * 
 * @param x x坐标。
 * @param y y坐标。
 * @param rx 圆角半径。
 * @param ry 圆角半径。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Ellipse(float_t x, float_t y, float_t rx, float_t ry) ;

/**
 * 闭合路径。
 * 
 *闭合路径是指把起点和终点连接起来，形成一个封闭的多边形。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t ClosePath() ;

/**
 * 旋转。
 * 
 * @param rad 角度
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Rotate(float_t rad) ;

/**
 * 缩放。
 * 
 * @param x x方向缩放比例。
 * @param y y方向缩放比例。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Scale(float_t x, float_t y) ;

/**
 * 平移。
 * 
 * @param x x方向偏移。
 * @param y y方向偏移。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Translate(float_t x, float_t y) ;

/**
 * 变换矩阵。
 * 
 * @param a a
 * @param b b
 * @param c c
 * @param d d
 * @param e e
 * @param f f
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Transform(float_t a, float_t b, float_t c, float_t d, float_t e, float_t f) ;

/**
 * 设置变换矩阵。
 * 
 * @param a a
 * @param b b
 * @param c c
 * @param d d
 * @param e e
 * @param f f
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetTransform(float_t a, float_t b, float_t c, float_t d, float_t e, float_t f) ;

/**
 * 矩形裁剪。
 * 
 * @param x x坐标。
 * @param y y坐标。
 * @param w 宽度。
 * @param h 高度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t ClipRect(float_t x, float_t y, float_t w, float_t h) ;

/**
 * 填充多边形。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Fill() ;

/**
 * 画线。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Stroke() ;

/**
 * 用图片填充/画多边形(可能存在可移植性问题，除非必要请勿使用)。
 * 多边形的顶点必须在图片范围内，可以通过矩阵变化画到不同的位置。
 * 
 * @param stroke TRUE表示画线FALSE表示填充。
 * @param img 图片。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Paint(bool stroke, TBitmap& img) ;

/**
 * 设置字体的名称。
 * 
 * @param font 字体名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFont(char* font) ;

/**
 * 设置字体的大小。
 * 
 * @param font 字体大小。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFontSize(float_t font) ;

/**
 * 设置文本水平对齐的方式。
 * 
 * @param value 取值：left|center|right，必须为常量字符串。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetTextAlign(char* value) ;

/**
 * 设置文本垂直对齐的方式。
 * 
 * @param value 取值：top|middle|bottom，必须为常量字符串。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetTextBaseline(char* value) ;

/**
 * 绘制文本。
 * 
 * @param text text
 * @param x x坐标。
 * @param y y坐标。
 * @param max_width 最大宽度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t FillText(char* text, float_t x, float_t y, float_t max_width) ;

/**
 * 测量文本的宽度。
 * 
 * @param text text
 *
 * @return 返回text的宽度。
 */
 float_t MeasureText(char* text) ;

/**
 * 绘制图片。
 * 
 * @param img 图片。
 * @param sx sx
 * @param sy sy
 * @param sw sw
 * @param sh sh
 * @param dx dx
 * @param dy dy
 * @param dw dw
 * @param dh dh
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t DrawImage(TBitmap& img, float_t sx, float_t sy, float_t sw, float_t sh, float_t dx, float_t dy, float_t dw, float_t dh) ;

/**
 * 绘制图标。
 * 
 * 绘制图标时会根据屏幕密度进行自动缩放，而绘制普通图片时不会。
 * 
 * @param img 图片。
 * @param sx sx
 * @param sy sy
 * @param sw sw
 * @param sh sh
 * @param dx dx
 * @param dy dy
 * @param dw dw
 * @param dh dh
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t DrawIcon(TBitmap& img, float_t sx, float_t sy, float_t sw, float_t sh, float_t dx, float_t dy, float_t dw, float_t dh) ;

/**
 * 设置是否启用反走样。
 * 
 * @param value 是否启用反走样。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetAntialias(bool value) ;

/**
 * 设置全局透明度。
 * 
 * @param alpha global alpha。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetGlobalAlpha(float_t alpha) ;

/**
 * 设置线条的宽度。
 * 
 * @param value 线宽。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetLineWidth(float_t value) ;

/**
 * 设置填充颜色。
 * 
 * @param color 颜色。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFillColor(const char* color) ;

/**
 * 设置线条颜色。
 * 
 * @param color 颜色。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetStrokeColor(const char* color) ;

/**
 * 设置line cap。
 * 
 * @param value 取值：butt|round|square，必须为常量字符串。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetLineCap(char* value) ;

/**
 * 设置line join。
 * 
 * @param value 取值：bevel|round|miter，必须为常量字符串。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetLineJoin(char* value) ;

/**
 * 设置miter limit。
 * 
 * @param value miter limit
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetMiterLimit(float_t value) ;

/**
 * 保存当前的状态。如颜色和矩阵等信息。
 * 
 * save/restore必须配套使用，否则可能导致状态混乱。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Save() ;

/**
 * 恢复上次save的状态。
 * 
 * save/restore必须配套使用，否则可能导致状态混乱。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Restore() ;
 wh_t getW() const;
 wh_t getH() const;
 uint32_t getStride() const;
 float_t getRatio() const;
 bool getAntiAlias() const;
 float_t getLineWidth() const;
 float_t getGlobalAlpha() const;
 float_t getMiterLimit() const;
 const char* getLineCap() const;
 const char* getLineJoin() const;
 char* getFont() const;
 float_t getFontSize() const;
 const char* getTextAlign() const;
 const char* getTextBaseline() const;
};


/**
 * widget_t* button = button_create(win, 10, 10, 128, 30);
 * widget_set_text(button, L"OK");
 * widget_on(button, EVT_CLICK, on_click, NULL);
 * ```
 *
 */
class TWidget {
public:
 widget_t* nativeObj;

 TWidget(widget_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TWidget(const widget_t* nativeObj) {
   this->nativeObj = (widget_t*)nativeObj;
 }

 static TWidget cast(widget_t* nativeObj) {
   return TWidget(nativeObj);
 }

 static TWidget cast(const widget_t* nativeObj) {
   return TWidget((widget_t*)nativeObj);
 }


/**
 * 获取子控件的个数。
 * 
 *
 * @return 子控件的个数。
 */
 int32_t CountChildren() ;

/**
 * 获取指定索引的子控件。
 * 
 * @param index 索引。
 *
 * @return 子控件。
 */
 TWidget GetChild(int32_t index) ;

/**
 * 获取控件在父控件中的索引编号。
 * 
 *
 * @return 在父控件中的索引编号。
 */
 int32_t IndexOf() ;

/**
 * 移动控件。
 * 
 * @param x x坐标
 * @param y y坐标
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Move(xy_t x, xy_t y) ;

/**
 * 调整控件的大小。
 * 
 * @param w 宽度
 * @param h 高度
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Resize(wh_t w, wh_t h) ;

/**
 * 移动控件并调整控件的大小。
 * 
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t MoveResize(xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置控件的值。
 * 只是对widget\_set\_prop的包装，值的意义由子类控件决定。
 * 
 * @param value 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(int32_t value) ;

/**
 * 设置控件的值(以动画形式变化到指定的值)。
 * 只是对widget\_set\_prop的包装，值的意义由子类控件决定。
 * 
 * @param value 值。
 * @param duration 动画持续时间(毫秒)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t AnimateValueTo(int32_t value, uint32_t duration) ;

/**
 * 增加控件的值。
 * 只是对widget\_set\_prop的包装，值的意义由子类控件决定。
 * 
 * @param delta 增量。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t AddValue(int32_t delta) ;

/**
 * 启用指定的主题。
 * 
 * @param style style的名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t UseStyle(char* style) ;

/**
 * 设置控件的文本。
 * 只是对widget\_set\_prop的包装，文本的意义由子类控件决定。
 * 
 * @param text 文本。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetText(const char* text) ;

/**
 * 获取翻译之后的文本，然后调用widget_set_text。
 * 
 * @param text 文本。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetTrText(char* text) ;

/**
 * 获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。
 * 
 *
 * @return 返回值。
 */
 int32_t GetValue() ;

/**
 * 获取控件的文本。
 * 只是对widget\_get\_prop的包装，文本的意义由子类控件决定。
 * 
 *
 * @return 返回文本。
 */
 const wchar_t* GetText() ;

/**
 * 设置控件的名称。
 * 
 * @param name 名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetName(char* name) ;

/**
 * 设置theme的名称，用于动态切换主题。名称与当前主题名称相同，则重新加载全部资源。
 * 
 * 目前只支持带有文件系统的平台。
 * 
 * @param name 主题的名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetTheme(char* name) ;

/**
 * 设置鼠标指针的图片名。
 * 
 * @param cursor 图片名称(无扩展名)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetPointerCursor(char* cursor) ;

/**
 * 设置控件的动画参数(仅用于在UI文件使用)。
 * 请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
 * 
 * @param animation 动画参数。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetAnimation(const char* animation) ;

/**
 * 创建动画。
 * 请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
 * 
 * * 除非指定auto_start=false，动画创建后自动启动。
 * * 除非指定auto_destroy=false，动画播放完成后自动销毁。
 * 
 * @param animation 动画参数。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t CreateAnimator(const char* animation) ;

/**
 * 播放动画。
 * 请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
 * 
 * * 1.widget为NULL时，播放所有名称为name的动画。
 * * 2.name为NULL时，播放所有widget相关的动画。
 * * 3.widget和name均为NULL，播放所有动画。
 * 
 * @param name 动画名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t StartAnimator(const char* name) ;

/**
 * 设置动画的时间倍率，<0: 时间倒退，<1: 时间变慢，>1 时间变快。
 * 请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
 * 
 * * 1.widget为NULL时，设置所有名称为name的动画的时间倍率。
 * * 2.name为NULL时，设置所有widget相关的动画的时间倍率。
 * * 3.widget和name均为NULL，设置所有动画的时间倍率。
 * 
 * @param name 动画名称。
 * @param time_scale 时间倍率。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetAnimatorTimeScale(const char* name, float_t time_scale) ;

/**
 * 暂停动画。
 * 请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
 * 
 * * 1.widget为NULL时，暂停所有名称为name的动画。
 * * 2.name为NULL时，暂停所有widget相关的动画。
 * * 3.widget和name均为NULL，暂停所有动画。
 * 
 * @param name 动画名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t PauseAnimator(char* name) ;

/**
 * 停止动画(控件的相应属性回归原位)。
 * 请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
 * 
 * * 1.widget为NULL时，停止所有名称为name的动画。
 * * 2.name为NULL时，停止所有widget相关的动画。
 * * 3.widget和name均为NULL，停止所有动画。
 * 
 * @param name 动画名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t StopAnimator(char* name) ;

/**
 * 销毁动画。
 * 请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
 * 
 * * 1.widget为NULL时，销毁所有名称为name的动画。
 * * 2.name为NULL时，销毁所有widget相关的动画。
 * * 3.widget和name均为NULL，销毁所有动画。
 * 
 * @param name 动画名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t DestroyAnimator(char* name) ;

/**
 * 设置控件的可用性。
 * 
 * @param enable 是否可用性。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetEnable(bool enable) ;

/**
 * 设置控件是否启用反馈。
 * 
 * @param feedback 是否启用反馈。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFeedback(bool feedback) ;

/**
 * 设置控件的floating标志。
 * floating的控件不受父控件的子控件布局参数的影响。
 * 
 * @param floating 是否启用floating布局。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFloating(bool floating) ;

/**
 * 设置控件的是否聚焦。
 * 
 * @param focused 是否聚焦。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFocused(bool focused) ;

/**
 * 设置控件的状态。
 * 
 * @param state 状态(必须为真正的常量字符串，在widget的整个生命周期有效)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetState(const char* state) ;

/**
 * 设置控件的不透明度。
 * 
 *在嵌入式平台，半透明效果会使性能大幅下降，请谨慎使用。
 * 
 * @param opacity 不透明度(取值0-255，0表示完全透明，255表示完全不透明)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetOpacity(uint8_t opacity) ;

/**
 * 销毁全部子控件。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t DestroyChildren() ;

/**
 * 加入一个子控件。
 * 
 * @param child 子控件对象。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t AddChild(TWidget& child) ;

/**
 * 移出指定的子控件(并不销毁)。
 * 
 * @param child 子控件对象。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t RemoveChild(TWidget& child) ;

/**
 * 插入子控件到指定的位置。
 * 
 * @param index 位置序数(大于等于总个数，则放到最后)。
 * @param child 子控件对象。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t InsertChild(uint32_t index, TWidget& child) ;

/**
 * 调整控件在父控件中的位置序数。
 * 
 * @param index 位置序数(大于等于总个数，则放到最后)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Restack(uint32_t index) ;

/**
 * 查找指定名称的子控件(同widget_lookup(widget, name, FALSE))。
 * 
 * @param name 子控件的名称。
 *
 * @return 子控件或NULL。
 */
 TWidget Child(char* name) ;

/**
 * 查找指定名称的子控件(返回第一个)。
 * 
 * @param name 子控件的名称。
 * @param recursive 是否递归查找全部子控件。
 *
 * @return 子控件或NULL。
 */
 TWidget Lookup(char* name, bool recursive) ;

/**
 * 查找指定类型的子控件(返回第一个)。
 * 
 * @param type 子控件的名称。
 * @param recursive 是否递归查找全部子控件。
 *
 * @return 子控件或NULL。
 */
 TWidget LookupByType(char* type, bool recursive) ;

/**
 * 设置控件的可见性。
 * 
 * @param visible 是否可见。
 * @param recursive 是否递归设置全部子控件。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetVisible(bool visible, bool recursive) ;

/**
 * 设置控件的可见性(不触发repaint和relayout)。
 * 
 * @param visible 是否可见。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetVisibleOnly(bool visible) ;

/**
 * 设置控件是否接受用户事件。
 * 
 * @param sensitive 是否接受用户事件。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSensitive(bool sensitive) ;

/**
 * widget_t* ok = button_create(win, 10, 10, 80, 30);
 * widget_on(ok, EVT_CLICK, on_click, NULL);
 * 
 * ```
 * 
 * @param type 事件类型。
 * @param on_event 事件处理函数。
 * @param ctx 事件处理函数上下文。
 *
 * @return 返回id，用于widget_off。
 */
 int32_t On(event_type_t type, event_func_t on_event, void* ctx) ;

/**
 * 注销指定事件的处理函数。
 * 
 * @param id widget_on返回的ID。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Off(int32_t id) ;

/**
 * 请求强制重绘控件。
 * 
 * @param r 矩形对象(widget本地坐标)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t InvalidateForce(TRect& r) ;

/**
 * 设置字符串格式的属性。
 * 
 * @param name 属性的名称。
 * @param v 属性的值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetPropStr(const char* name, const char* v) ;

/**
 * 获取字符串格式的属性。
 * 
 * @param name 属性的名称。
 * @param defval 缺省值。
 *
 * @return 返回属性的值。
 */
 const char* GetPropStr(const char* name, const char* defval) ;

/**
 * 设置整数格式的属性。
 * 
 * @param name 属性的名称。
 * @param v 属性的值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetPropInt(const char* name, int32_t v) ;

/**
 * 获取整数格式的属性。
 * 
 * @param name 属性的名称。
 * @param defval 缺省值。
 *
 * @return 返回属性的值。
 */
 int32_t GetPropInt(const char* name, int32_t defval) ;

/**
 * 设置布尔格式的属性。
 * 
 * @param name 属性的名称。
 * @param v 属性的值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetPropBool(const char* name, bool v) ;

/**
 * 获取布尔格式的属性。
 * 
 * @param name 属性的名称。
 * @param defval 缺省值。
 *
 * @return 返回属性的值。
 */
 bool GetPropBool(const char* name, bool defval) ;

/**
 * 判断当前控件所在的窗口是否已经打开。
 * 
 *
 * @return 返回当前控件所在的窗口是否已经打开。
 */
 bool IsWindowOpened() ;

/**
 * 判断当前控件是否是窗口。
 * 
 *
 * @return 返回当前控件是否是窗口。
 */
 bool IsWindow() ;

/**
 * 判断当前控件是否是设计窗口。
 * 
 *
 * @return 返回当前控件是否是设计窗口。
 */
 bool IsDesigningWindow() ;

/**
 * 判断当前控件是否是窗口管理器。
 * 
 *
 * @return 返回当前控件是否是窗口管理器。
 */
 bool IsWindowManager() ;

/**
 * 遍历当前控件及子控件。
 * 
 * @param visit 遍历的回调函数。
 * @param ctx 回调函数的上下文。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Foreach(tk_visit_t visit, void* ctx) ;

/**
 * 获取当前控件所在的窗口。
 * 
 *
 * @return 窗口对象。
 */
 TWidget GetWindow() ;

/**
 * 获取当前的窗口管理器。
 * 
 *
 * @return 窗口管理器对象。
 */
 TWidget GetWindowManager() ;

/**
 * 获取当前控件的类型名称。
 * 
 *
 * @return 返回类型名。
 */
 const char* GetType() ;

/**
 * clone。
 * 
 * @param parent clone新控件的parent对象。
 *
 * @return 返回clone的对象。
 */
 TWidget Clone(TWidget& parent) ;

/**
 * 判断两个widget是否相同。
 * 
 * @param other 要比较的控件对象。
 *
 * @return 返回TRUE表示相同，否则表示不同。
 */
 bool Equal(TWidget& other) ;

/**
 * 转换为widget对象(供脚本语言使用)。
 * 
 * @param widget widget对象。
 *
 * @return widget对象。
 */
 static TWidget Cast(TWidget& widget) ;

/**
 * 从父控件中移除控件，并调用unref函数销毁控件。
 * 
 * 一般无需直接调用，关闭窗口时，自动销毁相关控件。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Destroy() ;

/**
 * 减少控件的引用计数。引用计数为0时销毁控件。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Unref() ;

/**
 * 布局当前控件及子控件。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Layout() ;

/**
 * 设置控件自己的布局参数。
 * 
 * @param params 布局参数。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSelfLayout(const char* params) ;

/**
 * 设置子控件的布局参数。
 * 
 * @param params 布局参数。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetChildrenLayout(const char* params) ;

/**
 * 设置控件自己的布局(缺省布局器)参数(过时，请用widget\_set\_self\_layout)。
 * 
 * @param x x参数。
 * @param y y参数。
 * @param w w参数。
 * @param h h参数。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSelfLayoutParams(const char* x, const char* y, const char* w, const char* h) ;

/**
 * 设置整数类型的style。
 * 
 * @param state_and_name 状态和名字，用英文的冒号分隔。
 * @param value 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetStyleInt(const char* state_and_name, int32_t value) ;

/**
 * 设置字符串类型的style。
 * 
 * @param state_and_name 状态和名字，用英文的冒号分隔。
 * @param value 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetStyleStr(const char* state_and_name, const char* value) ;

/**
 * 设置颜色类型的style。
 * 
 * @param state_and_name 状态和名字，用英文的冒号分隔。
 * @param value 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetStyleColor(const char* state_and_name, uint32_t value) ;
 xy_t getX() const;
 xy_t getY() const;
 wh_t getW() const;
 wh_t getH() const;
 char* getName() const;
 char* getTrText() const;
 char* getStyle() const;
 char* getAnimation() const;
 bool getEnable() const;
 bool getFeedback() const;
 bool getVisible() const;
 bool getSensitive() const;
 bool getFocusable() const;
 bool getWithFocusState() const;
 bool getFloating() const;
 TWidget getParent() const;
};


/**
 * 定时器管理器。
 *
 */
class TTimerManager {
public:
 timer_manager_t* nativeObj;

 TTimerManager(timer_manager_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TTimerManager(const timer_manager_t* nativeObj) {
   this->nativeObj = (timer_manager_t*)nativeObj;
 }

 static TTimerManager cast(timer_manager_t* nativeObj) {
   return TTimerManager(nativeObj);
 }

 static TTimerManager cast(const timer_manager_t* nativeObj) {
   return TTimerManager((timer_manager_t*)nativeObj);
 }

};


/**
 * 获取当前时间的函数。
 * 这里的当前时间是相对的，在嵌入式系统一般相对于开机时间。
 * 它本身并没有任何意义，一般用来计算时间间隔，如实现定时器和动画等等。
 *
 */
class TTimeNow {
public:

/**
 * 获取当前时间(秒)。
 * 
 *
 * @return 返回当前时间(秒)。
 */
 static uint64_t S() ;

/**
 * 获取当前时间(毫秒)。
 * 
 *
 * @return 返回当前时间(毫秒)。
 */
 static uint64_t Ms() ;
};


/**
 * 提供基本的绘图功能和状态管理。
 *
 */
class TCanvas {
public:
 canvas_t* nativeObj;

 TCanvas(canvas_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TCanvas(const canvas_t* nativeObj) {
   this->nativeObj = (canvas_t*)nativeObj;
 }

 static TCanvas cast(canvas_t* nativeObj) {
   return TCanvas(nativeObj);
 }

 static TCanvas cast(const canvas_t* nativeObj) {
   return TCanvas((canvas_t*)nativeObj);
 }


/**
 * 获取画布的宽度。
 * 
 *
 * @return 返回画布的宽度。
 */
 wh_t GetWidth() ;

/**
 * 获取画布的高度。
 * 
 *
 * @return 返回画布的高度。
 */
 wh_t GetHeight() ;

/**
 * 获取裁剪区。
 * 
 * @param r rect对象。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t GetClipRect(TRect& r) ;

/**
 * 设置裁剪区。
 * 
 * @param r rect对象。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetClipRect(TRect& r) ;

/**
 * 设置裁剪区。
 * 
 * @param r rect对象。
 * @param translate 是否将裁剪区的位置加上canvas当前的偏移。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetClipRectEx(TRect& r, bool translate) ;

/**
 * 设置填充颜色。
 * 
 * 供脚本语言使用。
 * 
 * @param color 颜色。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFillColor(const char* color) ;

/**
 * 设置文本颜色。
 * 
 * 供脚本语言使用。
 * 
 * @param color 颜色。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetTextColor(const char* color) ;

/**
 * 设置线条颜色。
 * 
 * 供脚本语言使用。
 * 
 * @param color 颜色。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetStrokeColor(const char* color) ;

/**
 * 设置全局alpha值。
 * 
 * @param alpha alpha值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetGlobalAlpha(uint8_t alpha) ;

/**
 * 平移原点坐标。
 * 
 * @param dx x偏移。
 * @param dy y偏移。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Translate(xy_t dx, xy_t dy) ;

/**
 * 反向平移原点坐标。
 * 
 * @param dx x偏移。
 * @param dy y偏移。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Untranslate(xy_t dx, xy_t dy) ;

/**
 * 画垂直线。
 * 
 * @param x x坐标。
 * @param y y坐标。
 * @param h 高度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t DrawVline(xy_t x, xy_t y, wh_t h) ;

/**
 * 画水平线。
 * 
 * @param x x坐标。
 * @param y y坐标。
 * @param w 宽度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t DrawHline(xy_t x, xy_t y, wh_t w) ;

/**
 * 填充矩形。
 * 
 * @param x x坐标。
 * @param y y坐标。
 * @param w 宽度。
 * @param h 高度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t FillRect(xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 绘制矩形。
 * 
 * @param x x坐标。
 * @param y y坐标。
 * @param w 宽度。
 * @param h 高度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t StrokeRect(xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置字体。
 * 
 * @param name 字体名称。
 * @param size 字体大小。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFont(const char* name, font_size_t size) ;

/**
 * 计算文本所占的宽度。
 * 
 * 供脚本语言使用。
 * 
 * @param str 字符串。
 *
 * @return 返回文本所占的宽度。
 */
 float_t MeasureText(const char* str) ;

/**
 * 绘制文本。
 * 
 * 供脚本语言使用。
 * 
 * @param str 字符串。
 * @param x x坐标。
 * @param y y坐标。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t DrawText(const char* str, xy_t x, xy_t y) ;

/**
 * 绘制文本。
 * 
 * 供脚本语言使用。
 * 
 * @param str 字符串。
 * @param r 矩形区域。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t DrawTextInRect(const char* str, TRect& r) ;

/**
 * 绘制图标。
 * 
 * @param img 图片对象。
 * @param cx 中心点x坐标。
 * @param cy 中心点y坐标。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t DrawIcon(TBitmap& img, xy_t cx, xy_t cy) ;

/**
 * 绘制图片。
 * 
 * @param img 图片对象。
 * @param src 源区域。
 * @param dst 目的区域。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t DrawImage(TBitmap& img, TRect& src, TRect& dst) ;

/**
 * 绘制图片。
 * 
 * @param img 图片对象。
 * @param draw_type 绘制类型。
 * @param dst 目的区域。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t DrawImageEx(TBitmap& img, image_draw_type_t draw_type, TRect& dst) ;

/**
 * 获取vgcanvas对象。
 * 
 *
 * @return 返回vgcanvas对象。
 */
 TVgcanvas GetVgcanvas() ;

/**
 * 转换为canvas对象(供脚本语言使用)。
 * 
 * @param c canvas对象。
 *
 * @return canvas对象。
 */
 static TCanvas Cast(TCanvas& c) ;

/**
 * 释放相关资源。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Reset() ;
 xy_t getOx() const;
 xy_t getOy() const;
 char* getFontName() const;
 uint16_t getFontSize() const;
 uint8_t getGlobalAlpha() const;
};


/**
 * 路径相关的工具函数。
 *
 */
class TPath {
public:
};


/**
 * 命名的值。
 *
 */
class TNamedValue {
public:
 named_value_t* nativeObj;

 TNamedValue(named_value_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TNamedValue(const named_value_t* nativeObj) {
   this->nativeObj = (named_value_t*)nativeObj;
 }

 static TNamedValue cast(named_value_t* nativeObj) {
   return TNamedValue(nativeObj);
 }

 static TNamedValue cast(const named_value_t* nativeObj) {
   return TNamedValue((named_value_t*)nativeObj);
 }


/**
 * 创建named_value对象。
 * 
 *
 * @return 返回named_value对象。
 */
 static TNamedValue Create() ;

/**
 * 转换为named_value对象(供脚本语言使用)。
 * 
 * @param nv named_value对象。
 *
 * @return 返回named_value对象。
 */
 static TNamedValue Cast(TNamedValue& nv) ;

/**
 * 设置名称。
 * 
 * @param name 名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetName(const char* name) ;

/**
 * 设置值。
 * 
 * @param value 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(TValue& value) ;

/**
 * 获取值对象(主要给脚本语言使用)。
 * 
 *
 * @return 返回值对象。
 */
 TValue GetValue() ;

/**
 * 销毁named_value对象。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Destroy() ;
 char* getName() const;
};


/**
 * idle_manager_t管理器。
 *
 */
class TIdleManager {
public:
 idle_manager_t* nativeObj;

 TIdleManager(idle_manager_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TIdleManager(const idle_manager_t* nativeObj) {
   this->nativeObj = (idle_manager_t*)nativeObj;
 }

 static TIdleManager cast(idle_manager_t* nativeObj) {
   return TIdleManager(nativeObj);
 }

 static TIdleManager cast(const idle_manager_t* nativeObj) {
   return TIdleManager((idle_manager_t*)nativeObj);
 }

};


/**
 * int32_t ret = 0;
 * const char* file_name = "test.txt";
 * int32_t len = file_get_size(file_name);
 * uint8_t* buff = (uint8_t*)TKMEM_ALLOC(len + 1);
 * return_value_if_fail(buff != NULL, NULL);
 * 
 * fs_file_t* fp = fs_open_file(os_fs(), file_name, "rb");
 * if (fp != NULL) {
 * ret = fs_file_read(fp, buff, len);
 * fs_file_close(fp);
 * }
 * ```
 *
 */
class TFsFile {
public:
};


/**
 * 剪切板接口。
 *
 */
class TClipBoard {
public:
 clip_board_t* nativeObj;

 TClipBoard(clip_board_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TClipBoard(const clip_board_t* nativeObj) {
   this->nativeObj = (clip_board_t*)nativeObj;
 }

 static TClipBoard cast(clip_board_t* nativeObj) {
   return TClipBoard(nativeObj);
 }

 static TClipBoard cast(const clip_board_t* nativeObj) {
   return TClipBoard((clip_board_t*)nativeObj);
 }


/**
 * 设置文本(UTF8)数据到剪切板。
 * 
 * @param text 文本。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 static ret_t SetText(const char* text) ;

/**
 * 从剪切板中获取文本(UTF8)数据。
 * 
 *
 * @return 返回文本数据。
 */
 static const char* GetText() ;
};


/**
 * 日期时间。
 * 
 * 在嵌入式平台中，在系统初始时，需要调用date\_time\_global\_init设置实际获取/设置系统时间的函数。
 *
 */
class TDateTime {
public:
 date_time_t* nativeObj;

 TDateTime(date_time_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TDateTime(const date_time_t* nativeObj) {
   this->nativeObj = (date_time_t*)nativeObj;
 }

 static TDateTime cast(date_time_t* nativeObj) {
   return TDateTime(nativeObj);
 }

 static TDateTime cast(const date_time_t* nativeObj) {
   return TDateTime((date_time_t*)nativeObj);
 }


/**
 * 创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。
 * 
 *
 * @return 返回date_time对象。
 */
 static TDateTime Create() ;

/**
 * 设置当前时间。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Set() ;

/**
 * 销毁date_time对象(一般供脚本语言中使用)。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Destroy() ;
 int32_t getSecond() const;
 int32_t getMinute() const;
 int32_t getHour() const;
 int32_t getDay() const;
 int32_t getWday() const;
 int32_t getMonth() const;
 int32_t getYear() const;
};


/**
 * 颜色。
 *
 */
class TColor {
public:
 color_t* nativeObj;

 TColor(color_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TColor(const color_t* nativeObj) {
   this->nativeObj = (color_t*)nativeObj;
 }

 static TColor cast(color_t* nativeObj) {
   return TColor(nativeObj);
 }

 static TColor cast(const color_t* nativeObj) {
   return TColor((color_t*)nativeObj);
 }


/**
 * 创建color对象。
 * 
 * 主要供脚本语言使用。
 * 
 * @param r 红色通道。
 * @param b 蓝色通道。
 * @param g 绿色通道。
 * @param a alpha通道。
 *
 * @return color对象。
 */
 static TColor Create(uint8_t r, uint8_t b, uint8_t g, uint8_t a) ;

/**
 * 创建color对象。
 * 
 * 主要供脚本语言使用。
 * 
 * @param str css类似的颜色值。
 *
 * @return color对象。
 */
 TColor FromStr(const char* str) ;

/**
 * 获取红色通道的值。
 * 
 * 主要供脚本语言使用。
 * 
 *
 * @return 返回红色通道的值。
 */
 uint8_t R() ;

/**
 * 获取绿色通道的值。
 * 
 * 主要供脚本语言使用。
 * 
 *
 * @return 返回绿色通道的值。
 */
 uint8_t G() ;

/**
 * 获取蓝色通道的值。
 * 
 * 主要供脚本语言使用。
 * 
 *
 * @return 返回蓝色通道的值。
 */
 uint8_t B() ;

/**
 * 获取alpha通道的值。
 * 
 * 主要供脚本语言使用。
 * 
 *
 * @return 返回alpha通道的值。
 */
 uint8_t A() ;

/**
 * 转换为color对象。
 * 
 * 供脚本语言使用。
 * 
 * @param color color对象。
 *
 * @return color对象。
 */
 static TColor Cast(TColor& color) ;

/**
 * 销毁color对象。
 * 主要供脚本语言使用。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Destroy() ;
 uint32_t getColor() const;
};


/**
 * 单个资源的描述信息。
 *
 */
class TAssetInfo {
public:
 asset_info_t* nativeObj;

 TAssetInfo(asset_info_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TAssetInfo(const asset_info_t* nativeObj) {
   this->nativeObj = (asset_info_t*)nativeObj;
 }

 static TAssetInfo cast(asset_info_t* nativeObj) {
   return TAssetInfo(nativeObj);
 }

 static TAssetInfo cast(const asset_info_t* nativeObj) {
   return TAssetInfo((asset_info_t*)nativeObj);
 }

 uint16_t getType() const;
 uint8_t getSubtype() const;
 uint8_t getIsInRom() const;
 uint32_t getSize() const;
 uint32_t getRefcount() const;
 char* getName() const;
};


/**
 * 资源管理器。
 * 这里的资源管理器并非Windows下的文件浏览器，而是负责对各种资源，比如字体、主题、图片、界面数据、字符串和其它数据的进行集中管理的组件。引入资源管理器的目的有以下几个：
 * 
 * * 让上层不需要了解存储的方式。
 * 在没有文件系统时或者内存紧缺时，把资源转成常量数组直接编译到代码中。在有文件系统而且内存充足时，资源放在文件系统中。在有网络时，资源也可以存放在服务器上(暂未实现)。资源管理器为上层提供统一的接口，让上层而不用关心底层的存储方式。
 * 
 * * 让上层不需要了解资源的具体格式。
 * 比如一个名为earth的图片，没有文件系统或内存紧缺，图片直接用位图数据格式存在ROM中，而有文件系统时，则用PNG格式存放在文件系统中。资源管理器让上层不需要关心图片的格式，访问时指定图片的名称即可(不用指定扩展名)。
 * 
 * * 让上层不需要了解屏幕的密度。
 * 不同的屏幕密度下需要加载不同的图片，比如MacPro的Retina屏就需要用双倍解析度的图片，否则就出现界面模糊。AWTK以后会支持PC软件和手机软件的开发，所以资源管理器需要为此提供支持，让上层不需关心屏幕的密度。
 * 
 * * 对资源进行内存缓存。
 * 不同类型的资源使用方式是不一样的，比如字体和主题加载之后会一直使用，UI文件在生成界面之后就暂时不需要了，PNG文件解码之后就只需要保留解码的位图数据即可。资源管理器配合图片管理器等其它组件实现资源的自动缓存。
 * 
 * 当从文件系统加载资源时，目录结构要求如下：
 * 
 * ```
 * assets/{theme}/raw/
 * fonts   字体
 * images  图片
 * x1   普通密度屏幕的图片。
 * x2   2倍密度屏幕的图片。
 * x3   3倍密度屏幕的图片。
 * xx   密度无关的图片。
 * strings 需要翻译的字符串。
 * styles  主题数据。
 * ui      UI描述数据。
 * ```
 *
 */
class TAssetsManager {
public:
 assets_manager_t* nativeObj;

 TAssetsManager(assets_manager_t* nativeObj) {
   this->nativeObj = nativeObj;
 }

 TAssetsManager(const assets_manager_t* nativeObj) {
   this->nativeObj = (assets_manager_t*)nativeObj;
 }

 static TAssetsManager cast(assets_manager_t* nativeObj) {
   return TAssetsManager(nativeObj);
 }

 static TAssetsManager cast(const assets_manager_t* nativeObj) {
   return TAssetsManager((assets_manager_t*)nativeObj);
 }


/**
 * 获取缺省资源管理器。
 * 
 *
 * @return 返回asset manager对象。
 */
 static TAssetsManager Instance() ;

/**
 * 在资源管理器的缓存中查找指定的资源并引用它，如果缓存中不存在，尝试加载该资源。
 * 
 * @param type 资源的类型。
 * @param name 资源的名称。
 *
 * @return 返回资源。
 */
 TAssetInfo Ref(asset_type_t type, char* name) ;

/**
 * 释放指定的资源。
 * 
 * @param info 资源。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Unref(TAssetInfo& info) ;
};


/**
 * 画布控件。
 * 
 * 画布控件让开发者可以自己在控件上绘制需要的内容。
 * 
 * canvas\_widget\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于canvas\_widget\_t控件。
 * 
 * 在xml中使用"canvas"标签创建画布控件。如：
 * 
 * ```xml
 * <canvas name="paint_vgcanvas" x="0" y="0" w="100%" h="100%" />
 * ```
 * 
 * 更多用法请参考：
 * [canvas_widget.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/vgcanvas.xml)
 * 
 * 在c代码中使用函数canvas\_widget\_create创建画布控件。如：
 * 
 * 
 * 创建之后，需要用widget\_on注册EVT\_PAINT事件，并在EVT\_PAINT事件处理函数中绘制。
 * 
 * 
 * 绘制时，可以通过canvas接口去绘制，也可以通过vgcanvas接口去绘制。
 * 先从evt获取canvas对象，再通过canvas\_get\_vgcanvas从canvas中获取vgcanvas对象。
 * 
 * 
 * 完整示例请参考：
 * [canvas demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/canvas.c)
 * 
 * 参考：
 * 
 * * [canvas接口描述](canvas_t.md)
 * * [vgcanvas接口描述](vgcanvas_t.md)
 *
 */
class TCanvasWidget : public TWidget {
public:
 TCanvasWidget(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TCanvasWidget(const canvas_widget_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TCanvasWidget cast(widget_t* nativeObj) {
   return TCanvasWidget(nativeObj);
 }

 static TCanvasWidget cast(const widget_t* nativeObj) {
   return TCanvasWidget((widget_t*)nativeObj);
 }


/**
 * 创建canvas_widget对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为canvas_widget对象(供脚本语言使用)。
 * 
 * @param widget canvas_widget对象。
 *
 * @return canvas_widget对象。
 */
 static TCanvasWidget Cast(TWidget& widget) ;
};


/**
 * 模拟时钟控件。
 * 
 * time\_clock\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于time\_clock\_t控件。
 * 
 * 在xml中使用"time\_clock"标签创建模拟时钟控件。如：
 * 
 * ```xml
 * <time_clock x="c" y="m" w="300" h="300" bg_image="clock_bg" image="clock"
 * hour_image="clock_hour" minute_image="clock_minute" second_image="clock_second"/>
 * ```
 * 
 * 更多用法请参考：[time\_clock.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/time_clock.xml)
 * 
 * 在c代码中使用函数time\_clock\_create创建模拟时钟控件。如：
 * 
 * 
 * 完整示例请参考：[time_clock demo](
 * https://github.com/zlgopen/awtk-c-demos/blob/master/demos/time_clock.c)
 * 
 * time\_clock一般不需要设置style。
 *
 */
class TTimeClock : public TWidget {
public:
 TTimeClock(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TTimeClock(const time_clock_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TTimeClock cast(widget_t* nativeObj) {
   return TTimeClock(nativeObj);
 }

 static TTimeClock cast(const widget_t* nativeObj) {
   return TTimeClock((widget_t*)nativeObj);
 }


/**
 * 创建time_clock对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为time_clock对象(供脚本语言使用)。
 * 
 * @param widget time_clock对象。
 *
 * @return time_clock对象。
 */
 static TTimeClock Cast(TWidget& widget) ;

/**
 * 设置小时的值。
 * 
 * @param hour 小时的值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetHour(int32_t hour) ;

/**
 * 设置分钟的值。
 * 
 * @param minute 分钟的值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetMinute(int32_t minute) ;

/**
 * 设置秒的值。
 * 
 * @param second 秒的值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSecond(int32_t second) ;

/**
 * 设置小时的图片。
 * 
 * @param hour 小时的图片。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetHourImage(const char* hour) ;

/**
 * 设置分钟的图片。
 * 
 * @param minute_image 分钟的图片。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetMinuteImage(const char* minute_image) ;

/**
 * 设置秒的图片。
 * 
 * @param second_image 秒的图片。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSecondImage(const char* second_image) ;

/**
 * 设置背景图片。
 * 
 * @param bg_image 背景图片。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetBgImage(const char* bg_image) ;

/**
 * 设置中心图片。
 * 
 * @param image 图片。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetImage(const char* image) ;

/**
 * 设置小时指针的旋转锚点。
 * 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
 * 
 * @param anchor_x 指针的锚点坐标x。
 * @param anchor_y 指针的锚点坐标y。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetHourAnchor(const char* anchor_x, const char* anchor_y) ;

/**
 * 设置分钟指针的旋转锚点。
 * 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
 * 
 * @param anchor_x 指针的锚点坐标x。
 * @param anchor_y 指针的锚点坐标y。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetMinuteAnchor(const char* anchor_x, const char* anchor_y) ;

/**
 * 设置秒钟指针的旋转锚点。
 * 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
 * 
 * @param anchor_x 指针的锚点坐标x。
 * @param anchor_y 指针的锚点坐标y。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSecondAnchor(const char* anchor_x, const char* anchor_y) ;
 int32_t getHour() const;
 int32_t getMinute() const;
 int32_t getSecond() const;
 char* getImage() const;
 char* getBgImage() const;
 char* getHourImage() const;
 char* getMinuteImage() const;
 char* getSecondImage() const;
 char* getHourAnchorX() const;
 char* getHourAnchorY() const;
 char* getMinuteAnchorX() const;
 char* getMinuteAnchorY() const;
 char* getSecondAnchorX() const;
 char* getSecondAnchorY() const;
};


/**
 * 文本选择器控件，通常用于选择日期和时间等。
 * 
 * XXX: 目前需要先设置options和visible_nr，再设置其它参数(在XML中也需要按此顺序)。
 * 
 * text\_selector\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于text\_selector\_t控件。
 * 
 * 在xml中使用"text\_selector"标签创建文本选择器控件。如：
 * 
 * ```xml
 * <text_selector options="red;green;blue;gold;orange" visible_nr="3" text="red"/>
 * ```
 * 
 * 更多用法请参考：[text\_selector.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/text_selector.xml)
 * 
 * 在c代码中使用函数text\_selector\_create创建文本选择器控件。如：
 * 
 * 
 * 完整示例请参考：[text\_selector demo](
 * https://github.com/zlgopen/awtk-c-demos/blob/master/demos/text_selector.c)
 * 
 * 可用通过style来设置控件的显示风格，如字体和背景颜色等。如：
 * 
 * ```xml
 * <style name="dark" fg_color="#a0a0a0"  text_color="black" text_align_h="center">
 * <normal     bg_color="#ffffff" mask_color="#404040" border_color="#404040"/>
 * </style>
 * ```
 * 
 * 更多用法请参考：[theme default](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L443)
 *
 */
class TTextSelector : public TWidget {
public:
 TTextSelector(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TTextSelector(const text_selector_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TTextSelector cast(widget_t* nativeObj) {
   return TTextSelector(nativeObj);
 }

 static TTextSelector cast(const widget_t* nativeObj) {
   return TTextSelector((widget_t*)nativeObj);
 }


/**
 * 创建text_selector对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换text_selector对象(供脚本语言使用)。
 * 
 * @param widget text_selector对象。
 *
 * @return text_selector对象。
 */
 static TTextSelector Cast(TWidget& widget) ;

/**
 * 重置所有选项。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t ResetOptions() ;

/**
 * 获取选项个数。
 * 
 *
 * @return 返回选项个数。
 */
 int32_t CountOptions() ;

/**
 * 追加一个选项。
 * 
 * @param value 值。
 * @param text 文本。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t AppendOption(int32_t value, char* text) ;

/**
 * 设置选项。
 * 
 * @param options 选项。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetOptions(char* options) ;

/**
 * 设置一系列的整数选项。
 * 
 * @param start 起始值。
 * @param nr 个数。
 * @param step 步长。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetRangeOptions(int32_t start, uint32_t nr, int32_t step) ;

/**
 * 获取text_selector的值。
 * 
 *
 * @return 返回值。
 */
 int32_t GetValue() ;

/**
 * 设置text_selector的值。
 * 
 * @param value 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(int32_t value) ;

/**
 * 获取text_selector的文本。
 * 
 *
 * @return 返回文本。
 */
 const char* GetTextValue() ;

/**
 * 设置text_selector的文本。
 * 
 * @param text 文本。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetText(const char* text) ;

/**
 * 设置第index个选项为当前选中的选项。
 * 
 * @param index 选项的索引。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSelectedIndex(uint32_t index) ;

/**
 * 设置可见的选项数。
 * 
 * @param visible_nr 选项数。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetVisibleNr(uint32_t visible_nr) ;
 uint32_t getVisibleNr() const;
 int32_t getSelectedIndex() const;
 char* getOptions() const;
};


/**
 * 对象属性变化事件。
 *
 */
class TPropChangeEvent : public TEvent {
public:
 TPropChangeEvent(event_t* nativeObj) : TEvent(nativeObj) {
 }

 TPropChangeEvent(const prop_change_event_t* nativeObj) : TEvent((event_t*)nativeObj) {
 }

 static TPropChangeEvent cast(event_t* nativeObj) {
   return TPropChangeEvent(nativeObj);
 }

 static TPropChangeEvent cast(const event_t* nativeObj) {
   return TPropChangeEvent((event_t*)nativeObj);
 }


/**
 * 把event对象转prop_change_event_t对象，主要给脚本语言使用。
 * 
 * @param event event对象。
 *
 * @return 返回event对象。
 */
 static TPropChangeEvent Cast(TEvent& event) ;
 const char* getName() const;
 TValue getValue() const;
};


/**
 * 进度变化事件。
 *
 */
class TProgressEvent : public TEvent {
public:
 TProgressEvent(event_t* nativeObj) : TEvent(nativeObj) {
 }

 TProgressEvent(const progress_event_t* nativeObj) : TEvent((event_t*)nativeObj) {
 }

 static TProgressEvent cast(event_t* nativeObj) {
   return TProgressEvent(nativeObj);
 }

 static TProgressEvent cast(const event_t* nativeObj) {
   return TProgressEvent((event_t*)nativeObj);
 }


/**
 * 把event对象转progress_event_t对象，主要给脚本语言使用。
 * 
 * @param event event对象。
 *
 * @return 返回event对象。
 */
 static TProgressEvent Cast(TEvent& event) ;
 uint32_t getPercent() const;
};


/**
 * 开关控件。
 * 
 * switch\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于switch\_t控件。
 * 
 * 在xml中使用"switch"标签创建开关控件。如：
 * 
 * ```xml
 * <switch x="10" y="60" w="60" h="22" />
 * ```
 * 
 * 更多用法请参考：[switch.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/switch.xml)
 * 
 * 在c代码中使用函数switch\_create创建开关控件。如：
 * 
 * 
 * 完整示例请参考：[switch demo](
 * https://github.com/zlgopen/awtk-c-demos/blob/master/demos/switch.c)
 * 
 * 可用通过style来设置控件的显示风格，如背景图片等。如：
 * 
 * ```xml
 * <style name="default">
 * <normal  bg_image="switch" />
 * </style>
 * ```
 * 
 * 更多用法请参考：[theme default](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L452)
 *
 */
class TSwitch : public TWidget {
public:
 TSwitch(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TSwitch(const switch_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TSwitch cast(widget_t* nativeObj) {
   return TSwitch(nativeObj);
 }

 static TSwitch cast(const widget_t* nativeObj) {
   return TSwitch((widget_t*)nativeObj);
 }


/**
 * 创建switch对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置控件的值。
 * 
 * @param value 值
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(bool value) ;

/**
 * 转换switch对象(供脚本语言使用)。
 * 
 * @param widget switch对象。
 *
 * @return switch对象。
 */
 static TSwitch Cast(TWidget& widget) ;
 bool getValue() const;
 float_t getMaxXoffsetRatio() const;
};


/**
 * 滑动视图。
 * 
 * 滑动视图可以管理多个页面，并通过滑动来切换当前页面。也可以管理多张图片，让它们自动切换。
 * 
 * slide\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于slide\_view\_t控件。
 * 
 * 在xml中使用"slide\_view"标签创建滑动视图控件。如：
 * 
 * ```xml
 * <slide_view x="0" y="0" w="100%" h="100%" style="dot">
 * <view x="0" y="0" w="100%" h="100%" children_layout="default(w=60,h=60,m=5,s=10)">
 * ...
 * </view>
 * <view x="0" y="0" w="100%" h="100%" children_layout="default(w=60,h=60,m=5,s=10)">
 * ...
 * </view>
 * </slide_view>
 * ```
 * 
 * 更多用法请参考：[slide_view.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/slide_view.xml)
 * 
 * 在c代码中使用函数slide\_view\_create创建滑动视图控件。如：
 * 
 * 
 * 完整示例请参考：
 * [slide_view demo](
 * https://github.com/zlgopen/awtk-c-demos/blob/master/demos/slide_view.c)
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色和指示器的图标等等。如：
 * 
 * ```xml
 * <style name="dot">
 * <normal  icon="dot" active_icon="active_dot"/>
 * </style>
 * ```
 * 
 * 如果希望背景图片跟随滚动，请将背景图片设置到页面上，否则设置到slide\_view上。
 * 
 * 更多用法请参考：[theme default](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L458)
 *
 */
class TSlideView : public TWidget {
public:
 TSlideView(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TSlideView(const slide_view_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TSlideView cast(widget_t* nativeObj) {
   return TSlideView(nativeObj);
 }

 static TSlideView cast(const widget_t* nativeObj) {
   return TSlideView((widget_t*)nativeObj);
 }


/**
 * 创建slide_view对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为slide_view对象(供脚本语言使用)。
 * 
 * @param widget slide_view对象。
 *
 * @return slide_view对象。
 */
 static TSlideView Cast(TWidget& widget) ;

/**
 * 设置为自动播放模式。
 * 
 * @param auto_play 0表示禁止自动播放，非0表示自动播放时每一页播放的时间。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetAutoPlay(uint16_t auto_play) ;

/**
 * 设置当前页的序号。
 * 
 * @param index 当前页的序号。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetActive(uint32_t index) ;

/**
 * 设置为上下滑动(缺省为左右滑动)。
 * 
 * @param vertical TRUE表示上下滑动，FALSE表示左右滑动。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetVertical(bool vertical) ;

/**
 * 设置页面切换动画。
 * 
 * anim_hint取值如下：
 * 
 * * "translate"：平移。
 * * "overlap"：覆盖。
 * * "overlap\_with\_alpha"：覆盖并改变透明度。
 * 
 * 使用"overlap"或"overlap\_with\_alpha"动画时，背景图片最好指定到page上。
 *
 * 使用"overlap\_with\_alpha"动画时，slideview的背景设置为黑色，
 * 或slideview的背景设置为透明，窗口的背景设置为黑色，以获得更好的视觉效果和性能。
 * 
 * @param anim_hint 页面切换动画。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetAnimHint(const char* anim_hint) ;

/**
 * 设置循环切换模式。
 * 
 * @param loop 是否启用循环切换模式。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetLoop(bool loop) ;
 bool getVertical() const;
 uint16_t getAutoPlay() const;
 bool getLoop() const;
 char* getAnimHint() const;
};


/**
 * slide_view的指示器控件。
 * 
 * 支持直线、弧线排布，默认有4种绘制样式，若设置了icon/active_icon，则优先使用icon/active_icon
 * 
 * slide\_indicator\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于slide\_indicator\_t控件。
 * 
 * 在xml中使用"slide\_indicator"或"slide\_indicator\_arc"标签创建指示器控件。如：
 * 
 * ```xml
 * <slide_view name="view" x="0"  y="0" w="100%" h="100%">
 * ...
 * </slide_view>
 * <slide_indicator name="indicator" x="right" y="0" w="6" h="100%"/>
 * ```
 * 
 * 更多用法请参考：[slide\_view.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/slide_view.xml)
 * 
 * 在c代码中使用函数slide\_indicator\_create创建指示器控件。如：
 * 
 * 
 * ```xml
 * <style name="default">
 * <normal fg_color="#FFFFFF80" selected_fg_color="#FFFFFF"/>
 * </style>
 * ```
 * 
 * 更多用法请参考：[theme default](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L350)
 *
 */
class TSlideIndicator : public TWidget {
public:
 TSlideIndicator(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TSlideIndicator(const slide_indicator_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TSlideIndicator cast(widget_t* nativeObj) {
   return TSlideIndicator(nativeObj);
 }

 static TSlideIndicator cast(const widget_t* nativeObj) {
   return TSlideIndicator((widget_t*)nativeObj);
 }


/**
 * 创建slide_indicator对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 创建slide_indicator对象（线性显示）
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget CreateLinear(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 创建slide_indicator对象（圆弧显示）
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget CreateArc(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为slide_indicator对象(供脚本语言使用)。
 * 
 * @param widget slide_indicator对象。
 *
 * @return slide_indicator对象。
 */
 static TSlideIndicator Cast(TWidget& widget) ;

/**
 * 设置当前页的序号。
 * 
 * @param value 当前项的序号。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(uint32_t value) ;

/**
 * 设置指示器的数量。
 * 
 * @param max 数量。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetMax(uint32_t max) ;

/**
 * 设置指示器的默认绘制类型。
 * 
 * @param default_paint 默认绘制类型。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetDefaultPaint(indicator_default_paint_t default_paint) ;

/**
 * 设置指示器是否自动隐藏。
 * 
 * @param auto_hide 0表示禁止，非0表示无操作后延迟多久隐藏。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetAutoHide(uint16_t auto_hide) ;

/**
 * 设置指示器的边距(默认为10像素)。
 * 
 * @param margin 指示器的边距。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetMargin(int32_t margin) ;

/**
 * 设置指示器的间距(指示器有弧度时为角度值，否则为直线间距)。
 * 
 * @param spacing 指示器的间距。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSpacing(float_t spacing) ;

/**
 * 设置指示器的大小(默认为8)。
 * 
 * @param size 指示器的大小。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSize(uint32_t size) ;

/**
 * 设置旋转锚点。
 * 
 * @param anchor_x 锚点坐标x。(后面加上px为像素点，不加px为相对百分比坐标)
 * @param anchor_y 锚点坐标y。(后面加上px为像素点，不加px为相对百分比坐标)
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetAnchor(const char* anchor_x, const char* anchor_y) ;

/**
 * 设置指示器指示的目标。
 * 
 * @param indicated_target 指示器指示的目标
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetIndicatedTarget(const char* indicated_target) ;
 uint32_t getValue() const;
 uint32_t getMax() const;
 indicator_default_paint_t getDefaultPaint() const;
 uint16_t getAutoHide() const;
 int32_t getMargin() const;
 float_t getSpacing() const;
 uint32_t getSize() const;
 float_t getAnchorX() const;
 float_t getAnchorY() const;
 char* getIndicatedTarget() const;
};


/**
 * 左右滑动菜单控件。
 * 
 * 一般用一组按钮作为子控件，通过左右滑动改变当前的项。除了当菜单使用外，也可以用来切换页面。
 * 
 * slide\_menu\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于slide\_menu\_t控件。
 * 
 * 在xml中使用"slide\_menu"标签创建左右滑动菜单控件。如：
 * 
 * ```xml
 * <slide_menu style="mask" align_v="top">
 * <button style="slide_button" text="0"/>
 * <button style="slide_button" text="1"/>
 * <button style="slide_button" text="2"/>
 * <button style="slide_button" text="3"/>
 * <button style="slide_button" text="4"/>
 * </slide_menu>
 * ```
 * 
 * 更多用法请参考：[slide_menu.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/slide_menu.xml)
 * 
 * 在c代码中使用函数slide\_menu\_create创建左右滑动菜单控件。如：
 * 
 * 
 * 可按下面的方法关注当前项改变的事件：
 * 
 * 
 * 可按下面的方法关注当前按钮被点击的事件：
 * 
 * 
 * 完整示例请参考：[slide_menu demo](
 * https://github.com/zlgopen/awtk-c-demos/blob/master/demos/slide_menu.c)
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色和蒙版颜色等等。如：
 * 
 * ```xml
 * <style name="mask">
 * <normal     bg_color="#f0f0f0" mask_color="#f0f0f0"/>
 * </style>
 * ```
 * 
 * 更多用法请参考：[theme default](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L493)
 *
 */
class TSlideMenu : public TWidget {
public:
 TSlideMenu(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TSlideMenu(const slide_menu_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TSlideMenu cast(widget_t* nativeObj) {
   return TSlideMenu(nativeObj);
 }

 static TSlideMenu cast(const widget_t* nativeObj) {
   return TSlideMenu((widget_t*)nativeObj);
 }


/**
 * 创建slide_menu对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换slide_menu对象(供脚本语言使用)。
 * 
 * @param widget slide_menu对象。
 *
 * @return slide_menu对象。
 */
 static TSlideMenu Cast(TWidget& widget) ;

/**
 * 设置当前项。
 * 
 * @param value 当前项的索引。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(uint32_t value) ;

/**
 * 设置垂直对齐方式。
 * 
 * @param align_v 对齐方式。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetAlignV(align_v_t align_v) ;

/**
 * 设置最小缩放比例。
 * 
 * @param min_scale 最小缩放比例，范围[0.5-1]。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetMinScale(float_t min_scale) ;
 int32_t getValue() const;
 align_v_t getAlignV() const;
 float_t getMinScale() const;
};


/**
 * 滚动视图。
 * 
 * scroll\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于scroll\_view\_t控件。
 * 
 * 在xml中使用"scroll\_view"标签创建滚动视图控件。如：
 * 
 * ```xml
 * <list_view x="0"  y="30" w="100%" h="-80" item_height="60">
 * <scroll_view name="view" x="0"  y="0" w="100%" h="100%">
 * <list_item style="odd" children_layout="default(rows=1,cols=0)">
 * <image draw_type="icon" w="30" image="earth"/>
 * <label w="-30" text="1.Hello AWTK !">
 * <switch x="r:10" y="m" w="60" h="20"/>
 * </label>
 * </list_item>
 * ...
 * </scroll_view>
 * </list_view>
 * ```
 * 
 * 滚动视图一般作为列表视图的子控件使用。
 * 
 * 更多用法请参考：[list\_view\_m.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/list_view_m.xml)
 * 
 * 在c代码中使用函数scroll\_view\_create创建列表视图控件。如：
 * 
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色和边框颜色等(一般情况不需要)。
 *
 */
class TScrollView : public TWidget {
public:
 TScrollView(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TScrollView(const scroll_view_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TScrollView cast(widget_t* nativeObj) {
   return TScrollView(nativeObj);
 }

 static TScrollView cast(const widget_t* nativeObj) {
   return TScrollView((widget_t*)nativeObj);
 }


/**
 * 创建scroll_view对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为scroll_view对象(供脚本语言使用)。
 * 
 * @param widget scroll_view对象。
 *
 * @return scroll_view对象。
 */
 static TScrollView Cast(TWidget& widget) ;

/**
 * 设置虚拟宽度。
 * 
 * @param w 虚拟宽度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetVirtualW(wh_t w) ;

/**
 * 设置虚拟高度。
 * 
 * @param h 虚拟高度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetVirtualH(wh_t h) ;

/**
 * 设置是否允许x方向滑动。
 * 
 * @param xslidable 是否允许滑动。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetXslidable(bool xslidable) ;

/**
 * 设置是否允许y方向滑动。
 * 
 * @param yslidable 是否允许滑动。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetYslidable(bool yslidable) ;

/**
 * 设置偏移量。
 * 
 * @param xoffset x偏移量。
 * @param yoffset y偏移量。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetOffset(int32_t xoffset, int32_t yoffset) ;

/**
 * 设置偏移速度比例。
 * 
 * @param xspeed_scale x偏移速度比例。。
 * @param yspeed_scale y偏移速度比例。。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSpeedScale(float_t xspeed_scale, float_t yspeed_scale) ;

/**
 * 滚动到指定的偏移量。
 * 
 * @param xoffset_end x偏移量。
 * @param yoffset_end y偏移量。
 * @param duration 时间。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t ScrollTo(int32_t xoffset_end, int32_t yoffset_end, int32_t duration) ;

/**
 * 滚动到指定的偏移量。
 * 
 * @param xoffset_delta x偏移量。
 * @param yoffset_delta y偏移量。
 * @param duration 时间。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t ScrollDeltaTo(int32_t xoffset_delta, int32_t yoffset_delta, int32_t duration) ;
 wh_t getVirtualW() const;
 wh_t getVirtualH() const;
 int32_t getXoffset() const;
 int32_t getYoffset() const;
 float_t getXspeedScale() const;
 float_t getYspeedScale() const;
 bool getXslidable() const;
 bool getYslidable() const;
};


/**
 * 滚动条控件。
 * 
 * 目前只支持垂直滚动。
 * 
 * scroll\_bar\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于scroll\_bar\_t控件。
 * 
 * 在xml中使用"scroll\_bar"或"scroll\_bar\_d"或"scroll\_bar\_m"标签创建滚动条控件。如：
 * 
 * ```xml
 * <list_view x="0"  y="30" w="100%" h="-80" item_height="60">
 * <scroll_view name="view" x="0"  y="0" w="100%" h="100%">
 * ...
 * </scroll_view>
 * <scroll_bar_m name="bar" x="right" y="0" w="6" h="100%" value="0"/>
 * </list_view>
 * ```
 * 
 * 更多用法请参考：[list\_view\_m.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/list_view_m.xml)
 * 
 * 在c代码中使用函数scroll\_bar\_create创建列表项控件。如：
 * 
 * 
 * ```xml
 * <style name="default">
 * <normal bg_color="#c0c0c0" fg_color="#808080"/>
 * <over bg_color="#c0c0c0" fg_color="#808080"/>
 * <pressed bg_color="#c0c0c0" fg_color="#808080"/>
 * </style>
 * ```
 * 
 * 更多用法请参考：[theme default](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L350)
 *
 */
class TScrollBar : public TWidget {
public:
 TScrollBar(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TScrollBar(const scroll_bar_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TScrollBar cast(widget_t* nativeObj) {
   return TScrollBar(nativeObj);
 }

 static TScrollBar cast(const widget_t* nativeObj) {
   return TScrollBar((widget_t*)nativeObj);
 }


/**
 * 创建scroll_bar对象
 * 
 * 根据宏WITH_DESKTOP_STYLE决定创建desktop风格还是mobile风格的滚动条
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为scroll_bar对象(供脚本语言使用)。
 * 
 * @param widget scroll_bar对象。
 *
 * @return scroll_bar对象。
 */
 static TScrollBar Cast(TWidget& widget) ;

/**
 * 创建mobile风格的scroll_bar对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget CreateMobile(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 创建desktop风格的scroll_bar对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget CreateDesktop(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置参数。
 * 
 * @param virtual_size 虚拟高度。
 * @param row 每一行的高度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetParams(int32_t virtual_size, int32_t row) ;

/**
 * 滚动到指定的值。
 * 
 * @param value 值。
 * @param duration 动画持续时间。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t ScrollTo(int32_t value, int32_t duration) ;

/**
 * 设置值，并触发EVT_VALUE_CHANGED事件。
 * 
 * @param value 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(int32_t value) ;

/**
 * 在当前的值上增加一个值，并触发EVT_VALUE_CHANGED事件。
 * 
 * @param delta 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t AddDelta(int32_t delta) ;

/**
 * 在当前的值上增加一个值，并滚动到新的值，并触发EVT_VALUE_CHANGED事件。
 * 
 * @param delta 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t ScrollDelta(int32_t delta) ;

/**
 * 设置值，但不触发EVT_VALUE_CHANGED事件。
 * 
 * @param value 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValueOnly(int32_t value) ;

/**
 * 判断是否是mobile风格的滚动条。
 * 
 *
 * @return 返回TRUE表示是mobile风格的，否则表示不是mobile风格的。
 */
 bool IsMobile() ;
 int32_t getVirtualSize() const;
 int32_t getValue() const;
 int32_t getRow() const;
 bool getAnimatable() const;
};


/**
 * 列表视图控件。
 * 
 * 列表视图控件是一个可以垂直滚动的列表控件。
 * 
 * 如果不需要滚动，可以用view控件配置适当的layout参数作为列表控件。
 * 
 * 列表视图中的列表项可以固定高度，也可以使用不同高度。请参考[变高列表项](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/list_view_vh.xml)
 * 
 * 列表视图控件的中可以有滚动条，也可以没有滚动条。
 * 可以使用移动设备风格的滚动条，也可以使用桌面风格的滚动条。
 * 
 * list\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于list\_view\_t控件。
 * 
 * 在xml中使用"list\_view"标签创建列表视图控件。如：
 * 
 * ```xml
 * <list_view x="0"  y="30" w="100%" h="-80" item_height="60">
 * <scroll_view name="view" x="0"  y="0" w="100%" h="100%">
 * <list_item style="odd" children_layout="default(rows=1,cols=0)">
 * <image draw_type="icon" w="30" image="earth"/>
 * <label w="-30" text="1.Hello AWTK !">
 * <switch x="r:10" y="m" w="60" h="20"/>
 * </label>
 * </list_item>
 * ...
 * </scroll_view>
 * </list_view>
 * ```
 * 
 * 注意：列表项不是作为列表视图控件的直接子控件，而是作为滚动视图的子控件。
 * 
 * 
 * 更多用法请参考：[list\_view\_m.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/list_view_m.xml)
 * 
 * 在c代码中使用函数list\_view\_create创建列表视图控件。如：
 * 
 * 
 * 用代码构造列表视图是比较繁琐的事情，最好用XML来构造。
 * 如果需要动态修改，可以使用widget\_clone来增加列表项，使用widget\_remove\_child来移出列表项。
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色和边框颜色等(一般情况不需要)。
 *
 */
class TListView : public TWidget {
public:
 TListView(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TListView(const list_view_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TListView cast(widget_t* nativeObj) {
   return TListView(nativeObj);
 }

 static TListView cast(const widget_t* nativeObj) {
   return TListView((widget_t*)nativeObj);
 }


/**
 * 创建list_view对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置列表项的高度。
 * 
 * @param item_height 列表项的高度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetItemHeight(int32_t item_height) ;

/**
 * 设置列表项的缺省高度。
 * 
 * @param default_item_height 列表项的高度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetDefaultItemHeight(int32_t default_item_height) ;

/**
 * 设置是否自动隐藏滚动条。
 * 
 * @param auto_hide_scroll_bar 是否自动隐藏滚动条。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetAutoHideScrollBar(bool auto_hide_scroll_bar) ;

/**
 * 转换为list_view对象(供脚本语言使用)。
 * 
 * @param widget list_view对象。
 *
 * @return list_view对象。
 */
 static TListView Cast(TWidget& widget) ;
 int32_t getItemHeight() const;
 int32_t getDefaultItemHeight() const;
 bool getAutoHideScrollBar() const;
};


/**
 * 水平列表视图控件。
 * 
 * list\_view\_h\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于list\_view\_h\_t控件。
 * 
 * 在xml中使用"list\_view\_h"标签创建水平列表视图控件。如：
 * 
 * ```xml
 * <list_view_h x="center"  y="10" w="90%" h="100" item_width="200" spacing="5">
 * <scroll_view name="view" w="100%" h="100%">
 * <image style="border" draw_type="auto" image="1" text="1"/>
 * ...
 * </scroll_view>
 * </list_view_h>
 * ```
 * 
 * 注意：列表项不是作为列表视图控件的直接子控件，而是作为滚动视图的子控件。
 * 
 * 
 * 更多用法请参考：[list\_view\_h.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/list_view_h.xml)
 * 
 * 在c代码中使用函数list\_view\_h\_create创建水平列表视图控件。如：
 * 
 * 
 * 用代码构造列表视图是比较繁琐的事情，最好用XML来构造。
 * 如果需要动态修改，可以使用widget\_clone来增加列表项，使用widget\_remove\_child来移出列表项。
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色和边框颜色等(一般情况不需要)。
 *
 */
class TListViewH : public TWidget {
public:
 TListViewH(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TListViewH(const list_view_h_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TListViewH cast(widget_t* nativeObj) {
   return TListViewH(nativeObj);
 }

 static TListViewH cast(const widget_t* nativeObj) {
   return TListViewH((widget_t*)nativeObj);
 }


/**
 * 创建list_view_h对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置列表项的宽度。
 * 
 * @param item_width 列表项的宽度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetItemWidth(int32_t item_width) ;

/**
 * 设置列表项的间距。
 * 
 * @param spacing 列表项的间距。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSpacing(int32_t spacing) ;

/**
 * 转换为list_view_h对象(供脚本语言使用)。
 * 
 * @param widget list_view_h对象。
 *
 * @return list_view_h对象。
 */
 static TListViewH Cast(TWidget& widget) ;
 int32_t getItemWidth() const;
 int32_t getSpacing() const;
};


/**
 * 列表项控件。
 * 
 * 列表项控件是一个简单的容器控件，一般作为列表视图中滚动视图的子控件。
 * 
 * list\_item\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于list\_item\_t控件。
 * 
 * 在xml中使用"list\_item"标签创建列表项控件。如：
 * 
 * ```xml
 * <list_view x="0"  y="30" w="100%" h="-80" item_height="60">
 * <scroll_view name="view" x="0"  y="0" w="100%" h="100%">
 * <list_item style="odd" children_layout="default(rows=1,cols=0)">
 * <image draw_type="icon" w="30" image="earth"/>
 * <label w="-30" text="1.Hello AWTK !">
 * <switch x="r:10" y="m" w="60" h="20"/>
 * </label>
 * </list_item>
 * ...
 * </scroll_view>
 * </list_view>
 * ```
 * 
 * 更多用法请参考：[list\_view\_m.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/list_view_m.xml)
 * 
 * 在c代码中使用函数list\_item\_create创建列表项控件。如：
 * 
 * 
 * 列表项控件大小一般由列表控制，不需指定xywh参数。
 * 
 * 可以用style来实现可点击或不可点击的效果。如：
 * 
 * ```xml
 * <style name="odd_clickable" border_color="#a0a0a0"  border="bottom" text_color="black">
 * <normal     bg_color="#f5f5f5" />
 * <pressed    bg_color="#c0c0c0" />
 * <over       bg_color="#f5f5f5" />
 * </style>
 * ```
 * 
 * 更多用法请参考：[theme default](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L372)
 *
 */
class TListItem : public TWidget {
public:
 TListItem(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TListItem(const list_item_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TListItem cast(widget_t* nativeObj) {
   return TListItem(nativeObj);
 }

 static TListItem cast(const widget_t* nativeObj) {
   return TListItem((widget_t*)nativeObj);
 }


/**
 * 创建list_item对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为list_item对象(供脚本语言使用)。
 * 
 * @param widget list_item对象。
 *
 * @return list_item对象。
 */
 static TListItem Cast(TWidget& widget) ;
};


/**
 * 可水平滚动的文本控件，方便实现长文本滚动。
 * 
 * 
 * hscroll\_label\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于hscroll\_label\_t控件。
 * 
 * 在xml中使用"hscroll\_label"标签创建行号控件，一般配合mledit使用。如：
 * 
 * ```xml
 * ```
 * 
 * 更多用法请参考：[mledit.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/mledit.xml)
 * 
 * 可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 * 
 * ```xml
 * <style name="default" text_color="black">
 * <normal   />
 * <focused  />
 * </style>
 * ```
 * 
 * 更多用法请参考：
 * [theme default](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml)
 *
 */
class THscrollLabel : public TWidget {
public:
 THscrollLabel(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 THscrollLabel(const hscroll_label_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static THscrollLabel cast(widget_t* nativeObj) {
   return THscrollLabel(nativeObj);
 }

 static THscrollLabel cast(const widget_t* nativeObj) {
   return THscrollLabel((widget_t*)nativeObj);
 }


/**
 * 创建hscroll_label对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置lull。
 * 
 * @param lull 间歇时间(ms)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetLull(int32_t lull) ;

/**
 * 设置duration。
 * 
 * @param duration 滚动时间(ms)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetDuration(int32_t duration) ;

/**
 * 设置only_focus。
 * 
 * @param only_focus 是否只有处于focus时才滚动。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetOnlyFocus(bool only_focus) ;

/**
 * 设置only_parent_focus。
 * 
 * @param only_parent_focus 是否只有处于focus时才滚动。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetOnlyParentFocus(bool only_parent_focus) ;

/**
 * 设置loop。
 * 
 * @param loop 是否循环滚动。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetLoop(bool loop) ;

/**
 * 设置yoyo。
 * 
 * @param yoyo 是否往返滚动。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetYoyo(bool yoyo) ;

/**
 * 设置ellipses。
 * 
 * @param ellipses 是否在文本超长时在行尾显示"..."。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetEllipses(bool ellipses) ;

/**
 * 设置x偏移(一般无需用户调用)。。
 * 
 * @param xoffset x偏移。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetXoffset(int32_t xoffset) ;

/**
 * 启动(一般无需用户调用)。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Start() ;

/**
 * 停止(一般无需用户调用)。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Stop() ;

/**
 * 转换为hscroll_label对象(供脚本语言使用)。
 * 
 * @param widget hscroll_label对象。
 *
 * @return hscroll_label对象。
 */
 static THscrollLabel Cast(TWidget& widget) ;
 bool getOnlyFocus() const;
 bool getOnlyParentFocus() const;
 bool getLoop() const;
 bool getYoyo() const;
 bool getEllipses() const;
 int32_t getLull() const;
 int32_t getDuration() const;
 int32_t getXoffset() const;
 int32_t getTextW() const;
};


/**
 * 图文混排控件，实现简单的图文混排。
 * 
 * rich\_text\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于rich\_text\_t控件。
 * 
 * 在xml中使用"rich\_text"标签创建图文混排控件。如：
 * 
 * ```xml
 * <rich_text x="0" y="0" w="100%" h="60"
 * text="<image name=&quota;bricks&quota;/><font align_v=&quota;middle&quota;>hello awtk!</font>" />
 * ```
 *
 * 
 * 更多用法请参考：
 * [rich_text.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/rich_text.xml)
 * 
 * 在c代码中使用函数rich\_text\_create创建图文混排控件。如：
 * 
 * 
 * 完整示例请参考：
 * [rich_text demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/rich_text.c)
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色等等。而字体的大小和颜色则由文本内部的属性决定。
 * 
 * 目前支持image和font两个tag：
 * 
 * * image 支持的属性有：
 * * name 图片的名称。
 * * w 图片的宽度。
 * * h 图片的高度。
 * 
 * * font 支持的属性有：
 * * color 颜色。
 * * size 大小。
 * * align_v 垂直方向对齐的方式(top|middle|bottom)。
 * * bold 粗体(暂不支持)
 * * italic 斜体(暂不支持)
 * * underline 下划线(暂不支持)
 *
 */
class TRichText : public TWidget {
public:
 TRichText(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TRichText(const rich_text_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TRichText cast(widget_t* nativeObj) {
   return TRichText(nativeObj);
 }

 static TRichText cast(const widget_t* nativeObj) {
   return TRichText((widget_t*)nativeObj);
 }


/**
 * 创建rich_text对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置文本。
 * 
 * @param text 文本。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetText(char* text) ;

/**
 * 转换为rich_text对象(供脚本语言使用)。
 * 
 * @param widget rich_text对象。
 *
 * @return rich_text对象。
 */
 static TRichText Cast(TWidget& widget) ;
 uint32_t getLineGap() const;
 uint32_t getMargin() const;
};


/**
 * 进度圆环控件。
 * 
 * progress\_circle\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于progress\_circle\_t控件。
 * 
 * 在xml中使用"progress\_circle"标签创建进度圆环控件。如：
 * 
 * ```xml
 * <progress_circle max="360" show_text="true" start_angle="90" />
 * ```
 * 
 * 更多用法请参考：
 * [progress_circle.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/progress_circle.xml)
 * 
 * 在c代码中使用函数progress\_circle\_create创建进度圆环控件。如：
 * 
 * 
 * 完整示例请参考：
 * [progress_circle
 * demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/progress_circle.c)
 * 
 * 可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 * 
 * ```xml
 * <style name="default">
 * <normal text_color="green" fg_color="black" />
 * </style>
 * ```
 * 
 * 更多用法请参考：
 * [theme
 * default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L467)
 *
 */
class TProgressCircle : public TWidget {
public:
 TProgressCircle(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TProgressCircle(const progress_circle_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TProgressCircle cast(widget_t* nativeObj) {
   return TProgressCircle(nativeObj);
 }

 static TProgressCircle cast(const widget_t* nativeObj) {
   return TProgressCircle((widget_t*)nativeObj);
 }


/**
 * 创建progress_circle对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为progress_circle对象(供脚本语言使用)。
 * 
 * @param widget progress_circle对象。
 *
 * @return progress_circle对象。
 */
 static TProgressCircle Cast(TWidget& widget) ;

/**
 * 设置值。
 * 
 * @param value 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(float_t value) ;

/**
 * 设置最大值。
 * 
 * @param max 最大值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetMax(uint32_t max) ;

/**
 * 设置环线的厚度。
 * 
 * @param line_width 环线的厚度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetLineWidth(uint32_t line_width) ;

/**
 * 设置起始角度。
 * 
 * @param start_angle 起始角度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetStartAngle(int32_t start_angle) ;

/**
 * 设置单位。
 * 
 * @param unit 单位。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetUnit(const char* unit) ;

/**
 * 设置是否显示文本。
 * 
 * @param show_text 是否显示文本。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetShowText(bool show_text) ;

/**
 * 设置是否为逆时针方向。
 * 
 * @param counter_clock_wise 是否为逆时针方向。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetCounterClockWise(bool counter_clock_wise) ;
 float_t getValue() const;
 uint32_t getMax() const;
 int32_t getStartAngle() const;
 uint32_t getLineWidth() const;
 char* getUnit() const;
 bool getCounterClockWise() const;
 bool getShowText() const;
};


/**
 * 多行编辑器控件。
 * 
 * mledit\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于mledit\_t控件。
 * 
 * 在xml中使用"mledit"标签创建多行编辑器控件。如：
 * 
 * ```xml
 * <mledit x="c" y="m" w="300" h="300" />
 * ```
 * 
 * 更多用法请参考：[mledit.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/mledit.xml)
 * 
 * 在c代码中使用函数mledit\_create创建多行编辑器控件。如：
 * 
 * 
 * 完整示例请参考：[mledit demo](
 * https://github.com/zlgopen/awtk-c-demos/blob/master/demos/mledit.c)
 * 
 * time\_clock一般不需要设置style。
 *
 */
class TMledit : public TWidget {
public:
 TMledit(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TMledit(const mledit_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TMledit cast(widget_t* nativeObj) {
   return TMledit(nativeObj);
 }

 static TMledit cast(const widget_t* nativeObj) {
   return TMledit((widget_t*)nativeObj);
 }


/**
 * 创建mledit对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置编辑器是否为只读。
 * 
 * @param readonly 只读。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetReadonly(bool readonly) ;

/**
 * 设置为焦点。
 * 
 * @param focus 是否为焦点。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFocus(bool focus) ;

/**
 * 设置编辑器是否自动折行。
 * 
 * @param wrap_word 是否自动折行。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetWrapWord(bool wrap_word) ;

/**
 * 设置编辑器的最大行数。
 * 
 * @param max_lines 最大行数。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetMaxLines(uint32_t max_lines) ;

/**
 * 设置编辑器的输入提示。
 * 
 * @param tips 输入提示。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetInputTips(char* tips) ;

/**
 * 设置编辑器光标位置。
 * 
 * @param cursor 光标位置。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetCursor(uint32_t cursor) ;

/**
 * 设置编辑器滚动速度。
 * 
 * @param scroll_line 滚动行数。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetScrollLine(uint32_t scroll_line) ;

/**
 * 转换为mledit对象(供脚本语言使用)。
 * 
 * @param widget mledit对象。
 *
 * @return mledit对象。
 */
 static TMledit Cast(TWidget& widget) ;
 bool getReadonly() const;
 char* getTips() const;
 bool getWrapWord() const;
 uint32_t getMaxLines() const;
 float_t getScrollLine() const;
};


/**
 * 行号。多行编辑器的行号。
 * 
 * line\_number\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于line\_number\_t控件。
 * 
 * 在xml中使用"lin\e_number"标签创建行号控件，一般配合mledit使用。如：
 * 
 * ```xml
 * <mledit x="c" y="10" h="40%" w="90%" focus="true" left_margin="36" right_margin="16"
 * wrap_word="true">
 * <line_number x="0" y="0" w="32" h="100%" value="0"/>
 * <scroll_bar_d x="right" y="0" w="14" h="100%" value="0"/>
 * </mledit>
 * ```
 * 
 * 更多用法请参考：[mledit.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/mledit.xml)
 * 
 * 可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 * 
 * ```xml
 * <line_number>
 * <style name="default">
 * <normal text_color="black" bg_color="#d0d0d0" text_align_h="right"/>
 * </style>
 * </line_number>
 * ```
 * 
 * 更多用法请参考：
 * [theme default](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L556)
 *
 */
class TLineNumber : public TWidget {
public:
 TLineNumber(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TLineNumber(const line_number_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TLineNumber cast(widget_t* nativeObj) {
   return TLineNumber(nativeObj);
 }

 static TLineNumber cast(const widget_t* nativeObj) {
   return TLineNumber((widget_t*)nativeObj);
 }


/**
 * 创建line_number对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置顶部边距。
 * 
 * @param top_margin 顶部边距。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetTopMargin(int32_t top_margin) ;

/**
 * 设置顶部边距。
 * 
 * @param bottom_margin 顶部边距。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetBottomMargin(int32_t bottom_margin) ;

/**
 * 设置行高。
 * 
 * @param line_height 行高。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetLineHeight(int32_t line_height) ;

/**
 * 设置y偏移。
 * 
 * @param yoffset 行高。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetYoffset(int32_t yoffset) ;

/**
 * 转换为line_number对象(供脚本语言使用)。
 * 
 * @param widget line_number对象。
 *
 * @return line_number对象。
 */
 static TLineNumber Cast(TWidget& widget) ;
};


/**
 * 图片值控件。
 * 
 * 可以用图片来表示如电池电量、WIFI信号强度和其它各种数值的值。
 * 
 * 其原理如下：
 * 
 * * 1.把value以format为格式转换成字符串。
 * * 2.把每个字符与image(图片文件名前缀)映射成一个图片名。
 * * 3.最后把这些图片显示出来。
 * 
 * image\_value\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于image\_value\_t控件。
 * 
 * 在xml中使用"image\_value"标签创建图片值控件。如：
 * 
 * ```xml
 * <image_value  value="0" image="num_" />
 * ```
 * 
 * 更多用法请参考：
 * [image\_value](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/image_value.xml)
 * 
 * 在c代码中使用函数image\_value\_create创建图片值控件。如：
 * 
 * 
 * 完整示例请参考：
 * [image_value demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/image_value.c)
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色和边框等等，不过一般情况并不需要。
 *
 */
class TImageValue : public TWidget {
public:
 TImageValue(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TImageValue(const image_value_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TImageValue cast(widget_t* nativeObj) {
   return TImageValue(nativeObj);
 }

 static TImageValue cast(const widget_t* nativeObj) {
   return TImageValue((widget_t*)nativeObj);
 }


/**
 * 创建image_value对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置图片前缀。
 * 
 * @param image 图片前缀。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetImage(const char* image) ;

/**
 * 设置格式。
 * 
 * @param format 格式。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFormat(const char* format) ;

/**
 * 设置值。
 * 
 * @param value 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(float_t value) ;

/**
 * 转换为image_value对象(供脚本语言使用)。
 * 
 * @param widget image_value对象。
 *
 * @return image_value对象。
 */
 static TImageValue Cast(TWidget& widget) ;
 char* getImage() const;
 char* getFormat() const;
 float_t getValue() const;
};


/**
 * 图片动画控件，指定一个图片前缀，依次显示指定序列的图片，从而形成动画效果。
 * 
 * 图片序列可以用sequence指定，也可以用start\_index和end\_index指定一个范围。
 * 
 * image\_animation\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于image\_animation\_t控件。
 * 
 * 在xml中使用"image\_animation"标签创建图片动画控件。如：
 * 
 * ```xml
 * <image_animation image="ani" start_index="1" end_index="9" auto_play="true" interval="50"
 * delay="100"/>
 * ```
 * 
 * 更多用法请参考：
 * [image_animation.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/image_animation.xml)
 * 
 * 在c代码中使用函数image\_animation\_create创建图片动画控件。如：
 * 
 * 
 * 完整示例请参考：
 * [image_animation
 * demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/image_animation.c)
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色和边框等等，不过一般情况并不需要。
 *
 */
class TImageAnimation : public TWidget {
public:
 TImageAnimation(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TImageAnimation(const image_animation_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TImageAnimation cast(widget_t* nativeObj) {
   return TImageAnimation(nativeObj);
 }

 static TImageAnimation cast(const widget_t* nativeObj) {
   return TImageAnimation((widget_t*)nativeObj);
 }


/**
 * 创建image_animation对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置是否循环播放。
 * 
 * @param loop 是否循环播放。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetLoop(bool loop) ;

/**
 * 设置图片前缀。
 * 
 * @param image 图片前缀。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetImage(const char* image) ;

/**
 * 设置播放间隔时间。
 * 
 * @param interval 间隔时间(毫秒)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetInterval(uint32_t interval) ;

/**
 * 设置延迟播放时间(仅适用于自动播放)。
 * 
 * @param delay 延迟播放时间(毫秒)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetDelay(uint32_t delay) ;

/**
 * 设置是否自动播放。
 * 
 * @param auto_play 是否自动播放。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetAutoPlay(bool auto_play) ;

/**
 * 设置播放序列。比如image为"fire"，sequence为"12223", 将依次播放"fire1", "fire2", "fire2", "fire2",
 * "fire3"。
 * 
 * @param sequence 播放序列。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSequence(const char* sequence) ;

/**
 * 设置播放序列。比如image为"fire"，start_index为0, end_index为99, 将依次播放"fire0", ...,
 * "fire99"。
 * 
 * 若指定的图片不存在，则重复上一张图片。
 * 
 * @param start_index 图片起始序数。
 * @param end_index 图片结束序数。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetRangeSequence(uint32_t start_index, uint32_t end_index) ;

/**
 * 播放。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Play() ;

/**
 * 停止(并重置index为-1)。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Stop() ;

/**
 * 暂停。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Pause() ;

/**
 * 手动切换到下一张图片。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Next() ;

/**
 * 设置生成图片名的格式。
 * 
 * XXX:生成图片名时，第一个参数是图片名前缀，第二个是序数，只能在此前提下设置格式。
 * 
 * ```
 * const char* format = image_animation->format ? image_animation->format : "%s%d";
 * tk_snprintf(name, TK_NAME_LEN, format, image_animation->image, image_animation->index);
 * ```
 * 
 * @param format 格式。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFormat(const char* format) ;

/**
 * 设置绘制完成后unload图片，以释放内存空间。
 * 
 * @param unload_after_paint 是否绘制完成后unload图片。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetUnloadAfterPaint(bool unload_after_paint) ;

/**
 * 转换为image_animation对象(供脚本语言使用)。
 * 
 * @param widget image_animation对象。
 *
 * @return image_animation对象。
 */
 static TImageAnimation Cast(TWidget& widget) ;
 char* getImage() const;
 char* getSequence() const;
 uint32_t getStartIndex() const;
 uint32_t getEndIndex() const;
 bool getLoop() const;
 bool getAutoPlay() const;
 bool getUnloadAfterPaint() const;
 char* getFormat() const;
 uint32_t getInterval() const;
 uint32_t getDelay() const;
};


/**
 * 表盘控件。
 * 
 * 表盘控件就是一张图片。
 * 
 * guage\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于guage\_t控件。
 * 
 * 在xml中使用"guage"标签创建表盘控件。如：
 * 
 * ```xml
 * <guage x="c" y="10" w="240" h="240" image="guage_bg"
 * ```
 * 
 * 更多用法请参考：
 * [guage.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/guage.xml)
 * 
 * 在c代码中使用函数guage\_create创建表盘控件。如：
 * 
 * 
 * 可用通过style来设置控件的显示风格，如背景和边框等。如：
 * 
 * ```xml
 * <guage>
 * <style name="border">
 * <normal border_color="#000000" bg_color="#e0e0e0" text_color="black"/>
 * </style>
 * </guage>
 * ```
 * 
 * 更多用法请参考：
 * [theme
 * default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml)
 *
 */
class TGuage : public TWidget {
public:
 TGuage(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TGuage(const guage_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TGuage cast(widget_t* nativeObj) {
   return TGuage(nativeObj);
 }

 static TGuage cast(const widget_t* nativeObj) {
   return TGuage((widget_t*)nativeObj);
 }


/**
 * 创建guage对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为guage对象(供脚本语言使用)。
 * 
 * @param widget guage对象。
 *
 * @return guage对象。
 */
 static TGuage Cast(TWidget& widget) ;

/**
 * 设置背景图片的名称。
 * 
 * @param name 图片名称，该图片必须存在于资源管理器。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetImage(char* name) ;

/**
 * 设置图片的显示方式。
 * 
 * 绘制方式的属性值和枚举值:
 * [image\_draw\_type\_name\_value](https://github.com/zlgopen/awtk/blob/master/src/base/enums.c#L98)
 * 
 * @param draw_type 显示方式。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetDrawType(image_draw_type_t draw_type) ;
 char* getImage() const;
 image_draw_type_t getDrawType() const;
};


/**
 * 仪表指针控件。
 * 
 * 仪表指针就是一张旋转的图片，图片可以是普通图片也可以是SVG图片。
 * 
 * 在嵌入式平台上，对于旋转的图片，SVG图片的效率比位图高数倍，所以推荐使用SVG图片。
 * 
 * guage\_pointer\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于guage\_pointer\_t控件。
 * 
 * 在xml中使用"guage\_pointer"标签创建仪表指针控件。如：
 * 
 * ```xml
 * <guage_pointer x="c" y="50" w="24" h="140" value="-128" image="guage_pointer" />
 * ```
 * 
 * 更多用法请参考：
 * [guage.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/guage.xml)
 * 
 * 在c代码中使用函数guage\_pointer\_create创建仪表指针控件。如：
 * 
 * 
 * 创建之后，需要用guage\_pointer\_set\_image设置仪表指针图片。
 *
 */
class TGuagePointer : public TWidget {
public:
 TGuagePointer(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TGuagePointer(const guage_pointer_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TGuagePointer cast(widget_t* nativeObj) {
   return TGuagePointer(nativeObj);
 }

 static TGuagePointer cast(const widget_t* nativeObj) {
   return TGuagePointer((widget_t*)nativeObj);
 }


/**
 * 创建guage_pointer对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为guage_pointer对象(供脚本语言使用)。
 * 
 * @param widget guage_pointer对象。
 *
 * @return guage_pointer对象。
 */
 static TGuagePointer Cast(TWidget& widget) ;

/**
 * 设置指针角度。12点钟方向为0度，顺时钟方向为正，单位为度。
 * 
 * @param angle 指针角度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetAngle(int32_t angle) ;

/**
 * 设置指针的图片。
 * 
 * @param image 指针的图片。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetImage(const char* image) ;

/**
 * 设置指针的旋转锚点。
 * 
 * @param anchor_x 指针的锚点坐标x。(后面加上px为像素点，不加px为相对百分比坐标)
 * @param anchor_y 指针的锚点坐标y。(后面加上px为像素点，不加px为相对百分比坐标)
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetAnchor(const char* anchor_x, const char* anchor_y) ;
 int32_t getAngle() const;
 char* getImage() const;
 float_t getAnchorX() const;
 float_t getAnchorY() const;
};


/**
 * 将draggable放入目标控件，即可让目标控件或当前窗口可以被拖动。
 * 
 * draggable\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于draggable\_t控件。
 * 
 * 在xml中使用"draggable"标签创建draggable控件。如：
 * 
 * ```xml
 * <button text="Drag Me" w="80" h="40" x="10" y="10">
 * <draggable />
 * </button>
 * ```
 * 
 * 拖动对话框标题时移动对话框：
 * 
 * ```xml
 * <dialog_title x="0" y="0" w="100%" h="30" text="Hello AWTK"
 * <draggable drag_window="true"/>
 * </dialog_title>
 * ```
 * 
 * 更多用法请参考：
 * [draggable.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/draggable.xml)
 * 
 * 在c代码中使用函数draggable\_create创建按钮控件。如：
 * 
 * 
 * draggable本身不可见，故无需style。
 *
 */
class TDraggable : public TWidget {
public:
 TDraggable(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TDraggable(const draggable_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TDraggable cast(widget_t* nativeObj) {
   return TDraggable(nativeObj);
 }

 static TDraggable cast(const widget_t* nativeObj) {
   return TDraggable((widget_t*)nativeObj);
 }


/**
 * 创建draggable对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为draggable对象(供脚本语言使用)。
 * 
 * @param widget draggable对象。
 *
 * @return draggable对象。
 */
 static TDraggable Cast(TWidget& widget) ;

/**
 * 设置top。
 * 
 * @param top 拖动范围的顶部限制。缺省为父控件的顶部。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetTop(int32_t top) ;

/**
 * 设置bottom。
 * 
 * @param bottom 拖动范围的底部限制。缺省为父控件的底部。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetBottom(int32_t bottom) ;

/**
 * 设置left。
 * 
 * @param left 拖动范围的左边限制。缺省为父控件的左边。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetLeft(int32_t left) ;

/**
 * 设置right。
 * 
 * @param right 拖动范围的右边限制。缺省为父控件的右边边。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetRight(int32_t right) ;

/**
 * 设置vertical_only。
 * 
 * @param vertical_only 只允许垂直拖动。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetVerticalOnly(bool vertical_only) ;

/**
 * 设置horizontal_only。
 * 
 * @param horizontal_only 只允许水平拖动。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetHorizontalOnly(bool horizontal_only) ;

/**
 * 设置drag_window。
 * 拖动窗口而不是父控件。比如放在对话框的titlebar上，拖动titlebar其实是希望拖动对话框。
 * 
 * @param drag_window drag_window
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetDragWindow(bool drag_window) ;
 int32_t getTop() const;
 int32_t getBottom() const;
 int32_t getLeft() const;
 int32_t getRight() const;
 bool getVerticalOnly() const;
 bool getHorizontalOnly() const;
 bool getDragWindow() const;
};


/**
 * 颜色选择器。
 * 
 * color\_picker\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于color\_picker\_t控件。
 * 
 * 在xml中使用"color\_picker"标签创建颜色选择器控件。如：
 * 
 * ```xml
 * <color_picker x="0" y="0" w="100%" h="100%" value="orange">
 * <color_component x="0" y="0" w="200" h="200" name="sv"/>
 * <color_component x="210" y="0" w="20" h="200" name="h"/>
 * <color_tile x="0" y="210" w="50%" h="20" name="new" bg_color="green"/>
 * <color_tile x="right" y="210" w="50%" h="20" name="old" bg_color="blue"/>
 * </color_picker>
 * ```
 * 
 * 更多用法请参考：
 * [color\_picker](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/color_picker.xml)
 * 
 * 其中的子控件必须按下列规则命名：
 * 
 * * r 红色分量。可以是spin_box、edit和slider。
 * * g 绿色分量。可以是spin_box、edit和slider。
 * * b 蓝色分量。可以是spin_box、edit和slider。
 * * h Hue分量。可以是spin_box、edit、slider和color_component。
 * * s Saturation分量。可以是spin_box、edit和slider。
 * * v Value/Brightness分量。可以是spin_box、edit和slider。
 * * sv Saturation和Value/Brightness分量。可以是color_component。
 * * old 旧的值。可以是spin_box、edit和color_tile。
 * * new 新的值。可以是spin_box、edit和color_tile。
 *
 */
class TColorPicker : public TWidget {
public:
 TColorPicker(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TColorPicker(const color_picker_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TColorPicker cast(widget_t* nativeObj) {
   return TColorPicker(nativeObj);
 }

 static TColorPicker cast(const widget_t* nativeObj) {
   return TColorPicker((widget_t*)nativeObj);
 }


/**
 * 创建color_picker对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置颜色。
 * 
 * @param color 颜色。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetColor(const char* color) ;

/**
 * 转换为color_picker对象(供脚本语言使用)。
 * 
 * @param widget color_picker对象。
 *
 * @return color_picker对象。
 */
 static TColorPicker Cast(TWidget& widget) ;
 const char* getValue() const;
};


/**
 * 颜色选择器的颜色分量。
 * 控件的名称有严格规定：
 * COLOR_PICKER_CHILD_SV: 水平为Value/Brightness(递增)，垂直为Saturation(递减)。
 * COLOR_PICKER_CHILD_H: 水平为同色，垂直为Hue(递减)。
 *
 */
class TColorComponent : public TWidget {
public:
 TColorComponent(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TColorComponent(const color_component_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TColorComponent cast(widget_t* nativeObj) {
   return TColorComponent(nativeObj);
 }

 static TColorComponent cast(const widget_t* nativeObj) {
   return TColorComponent((widget_t*)nativeObj);
 }


/**
 * 转换为color_component对象(供脚本语言使用)。
 * 
 * @param widget color_component对象。
 *
 * @return color_component对象。
 */
 static TColorComponent Cast(TWidget& widget) ;
};


/**
 * 窗口管理器。
 *
 */
class TWindowManager : public TWidget {
public:
 TWindowManager(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TWindowManager(const window_manager_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TWindowManager cast(widget_t* nativeObj) {
   return TWindowManager(nativeObj);
 }

 static TWindowManager cast(const widget_t* nativeObj) {
   return TWindowManager((widget_t*)nativeObj);
 }


/**
 * 获取全局window_manager对象
 * 
 *
 * @return 对象。
 */
 static TWindowManager Instance() ;

/**
 * 转换为window_manager对象(供脚本语言使用)。
 * 
 * @param widget window_manager对象。
 *
 * @return window_manager对象。
 */
 static TWindowManager Cast(TWidget& widget) ;

/**
 * 获取最上面的主窗口。
 * 
 *
 * @return 返回窗口对象。
 */
 TWidget GetTopMainWindow() ;

/**
 * 获取最上面的窗口。
 * 
 *
 * @return 返回窗口对象。
 */
 TWidget GetTopWindow() ;

/**
 * 获取前一个的窗口。
 * 
 *
 * @return 返回窗口对象。
 */
 TWidget GetPrevWindow() ;

/**
 * 获取指针当前的X坐标。
 * 
 *
 * @return 返回指针当前的X坐标。
 */
 xy_t GetPointerX() ;

/**
 * 获取指针当前的Y坐标。
 * 
 *
 * @return 返回指针当前的X坐标。
 */
 xy_t GetPointerY() ;

/**
 * 获取指针当前是否按下。
 * 
 *
 * @return 返回指针当前是否按下。
 */
 bool GetPointerPressed() ;

/**
 * 设置是否显示FPS。
 * 
 * @param show_fps 是否显示FPS。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetShowFps(bool show_fps) ;

/**
 * 设置屏保时间。
 * 
 * @param screen_saver_time 屏保时间(单位毫秒)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetScreenSaverTime(uint32_t screen_saver_time) ;

/**
 * 设置鼠标指针。
 * 
 * @param cursor 图片名称(从图片管理器中加载)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetCursor(const char* cursor) ;

/**
 * 请求关闭顶层窗口。
 * 
 * 如果顶层窗口时模态对话框，用DIALOG\_QUIT\_NONE调用dialog\_quit。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Back() ;

/**
 * 回到主窗口，关闭之上的全部窗口。
 * 
 * 如果顶层窗口时模态对话框，用DIALOG\_QUIT\_NONE调用dialog\_quit。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t BackToHome() ;

/**
 * 回到指定的窗口，关闭之上的全部窗口。
 * 
 * 如果顶层窗口时模态对话框，用DIALOG\_QUIT\_NONE调用dialog\_quit。
 * 
 * @param target 目标窗口的名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t BackTo(const char* target) ;
};


/**
 * 窗口。
 * 
 * 本类把窗口相关的公共行为进行抽象，放到一起方便重用。目前已知的具体实现如下图：
 * 
 * 
 * 
 * 本类是一个抽象类，不能进行实例化。请在应用程序中使用具体的类，如window\_t。
 *
 */
class TWindowBase : public TWidget {
public:
 TWindowBase(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TWindowBase(const window_base_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TWindowBase cast(widget_t* nativeObj) {
   return TWindowBase(nativeObj);
 }

 static TWindowBase cast(const widget_t* nativeObj) {
   return TWindowBase((widget_t*)nativeObj);
 }


/**
 * 转换为window_base对象(供脚本语言使用)。
 * 
 * @param widget window_base对象。
 *
 * @return window_base对象。
 */
 static TWindowBase Cast(TWidget& widget) ;
 char* getTheme() const;
 window_closable_t getClosable() const;
};


/**
 * 可变的style(可实时修改并生效，主要用于在designer中被编辑的控件，或者一些特殊控件)。
 * 
 * style\_mutable也对style\_const进行了包装，当用户没修改某个值时，便从style\_const中获取。
 *
 */
class TStyleMutable : public TStyle {
public:
 TStyleMutable(style_t* nativeObj) : TStyle(nativeObj) {
 }

 TStyleMutable(const style_mutable_t* nativeObj) : TStyle((style_t*)nativeObj) {
 }

 static TStyleMutable cast(style_t* nativeObj) {
   return TStyleMutable(nativeObj);
 }

 static TStyleMutable cast(const style_t* nativeObj) {
   return TStyleMutable((style_t*)nativeObj);
 }


/**
 * 设置style的名称。
 * 
 * @param name 名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetName(const char* name) ;

/**
 * 设置指定名称整数格式的值。
 * 
 * @param state 控件状态。
 * @param name 属性名。
 * @param val 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetInt(const char* state, const char* name, int32_t val) ;

/**
 * 转换为style_mutable对象。
 * 
 * @param s style对象。
 *
 * @return style对象。
 */
 static TStyleMutable Cast(TStyle& s) ;

/**
 * 创建style\_mutable对象。
 * 
 * 除了测试程序外不需要直接调用，widget会通过style\_factory\_create创建。
 * 
 * @param widget 控件
 * @param default_style 缺省的style。
 *
 * @return style对象。
 */
 static TStyle Create(TWidget& widget, TStyle& default_style) ;
 char* getName() const;
};


/**
 * 图片控件基类。
 * 
 * 本类把图片相关控件的公共行为进行抽象，放到一起方便重用。目前已知的具体实现如下图：
 * 
 * 
 * 
 * 本类是一个抽象类，不能进行实例化。请在应用程序中使用具体的类，如image\_t。
 * 
 * 如果需要显示文件系统中的图片，只需将图片名称换成实际的文件名，并加上"file://"前缀即可。如：
 * 
 * ```
 * <image draw_type="center" image="file://./demos/assets/default/raw/images/xx/flag_CN.png" />
 * <gif image="file://./demos/assets/default/raw/images/x2/bee.gif" />
 * <svg image="file://./demos/assets/default/raw/images/svg/china.bsvg" />
 * ```
 *
 */
class TImageBase : public TWidget {
public:
 TImageBase(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TImageBase(const image_base_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TImageBase cast(widget_t* nativeObj) {
   return TImageBase(nativeObj);
 }

 static TImageBase cast(const widget_t* nativeObj) {
   return TImageBase((widget_t*)nativeObj);
 }


/**
 * 设置控件的图片名称。
 * 
 * 如果需要显示文件系统中的图片，只需将图片名称换成实际的文件名，并加上"file://"前缀即可。
 * 
 * @param name 图片名称，该图片必须存在于资源管理器。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetImage(char* name) ;

/**
 * 设置控件的旋转角度(仅在WITH_VGCANVAS定义时生效)。
 * 
 * @param rotation 旋转角度(幅度)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetRotation(float_t rotation) ;

/**
 * 设置控件的缩放比例(仅在WITH_VGCANVAS定义时生效)。
 * 
 * @param scale_x X方向缩放比例。
 * @param scale_y Y方向缩放比例。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetScale(float_t scale_x, float_t scale_y) ;

/**
 * 设置控件的锚点(仅在WITH_VGCANVAS定义时生效)。
 * 
 * @param anchor_x 锚点X(0-1)。0在控件左边，0.5在控件中间，1在控件右边。
 * @param anchor_y 锚点Y(0-1)。0在控件顶部，0.5在控件中间，1在控件底部。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetAnchor(float_t anchor_x, float_t anchor_y) ;

/**
 * 设置控件的选中状态。
 * 
 * @param selected 是否被选中。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSelected(bool selected) ;

/**
 * 设置控件是否可以被选中。
 * 
 * @param selectable 是否可以被选中。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSelectable(bool selectable) ;

/**
 * 设置控件是否可以被点击。
 * 
 * @param clickable 是否可以被点击。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetClickable(bool clickable) ;

/**
 * 转换为image_base对象(供脚本语言使用)。
 * 
 * @param widget image_base对象。
 *
 * @return image_base对象。
 */
 static TImageBase Cast(TWidget& widget) ;
 char* getImage() const;
 float_t getAnchorX() const;
 float_t getAnchorY() const;
 float_t getScaleX() const;
 float_t getScaleY() const;
 float_t getRotation() const;
 bool getClickable() const;
 bool getSelectable() const;
 bool getSelected() const;
};


/**
 * 窗口事件，由窗口管理器触发。
 *
 */
class TWindowEvent : public TEvent {
public:
 TWindowEvent(event_t* nativeObj) : TEvent(nativeObj) {
 }

 TWindowEvent(const window_event_t* nativeObj) : TEvent((event_t*)nativeObj) {
 }

 static TWindowEvent cast(event_t* nativeObj) {
   return TWindowEvent(nativeObj);
 }

 static TWindowEvent cast(const event_t* nativeObj) {
   return TWindowEvent((event_t*)nativeObj);
 }


/**
 * 把event对象转window_event_t对象。主要给脚本语言使用。
 * 
 * @param event event对象。
 *
 * @return 对象。
 */
 static TWindowEvent Cast(TEvent& event) ;
 TWidget getWindow() const;
};


/**
 * 绘制事件。
 *
 */
class TPaintEvent : public TEvent {
public:
 TPaintEvent(event_t* nativeObj) : TEvent(nativeObj) {
 }

 TPaintEvent(const paint_event_t* nativeObj) : TEvent((event_t*)nativeObj) {
 }

 static TPaintEvent cast(event_t* nativeObj) {
   return TPaintEvent(nativeObj);
 }

 static TPaintEvent cast(const event_t* nativeObj) {
   return TPaintEvent((event_t*)nativeObj);
 }


/**
 * 把event对象转paint_event_t对象。主要给脚本语言使用。
 * 
 * @param event event对象。
 *
 * @return event 对象。
 */
 static TPaintEvent Cast(TEvent& event) ;
 TCanvas getC() const;
};


/**
 * 按键事件。
 *
 */
class TKeyEvent : public TEvent {
public:
 TKeyEvent(event_t* nativeObj) : TEvent(nativeObj) {
 }

 TKeyEvent(const key_event_t* nativeObj) : TEvent((event_t*)nativeObj) {
 }

 static TKeyEvent cast(event_t* nativeObj) {
   return TKeyEvent(nativeObj);
 }

 static TKeyEvent cast(const event_t* nativeObj) {
   return TKeyEvent((event_t*)nativeObj);
 }


/**
 * 把event对象转key_event_t对象，主要给脚本语言使用。
 * 
 * @param event event对象。
 *
 * @return event对象。
 */
 static TKeyEvent Cast(TEvent& event) ;
 uint32_t getKey() const;
 bool getAlt() const;
 bool getLalt() const;
 bool getRalt() const;
 bool getCtrl() const;
 bool getLctrl() const;
 bool getRctrl() const;
 bool getShift() const;
 bool getLshift() const;
 bool getRshift() const;
 bool getCmd() const;
 bool getMenu() const;
 bool getCapslock() const;
};


/**
 * 指针事件。
 *
 */
class TPointerEvent : public TEvent {
public:
 TPointerEvent(event_t* nativeObj) : TEvent(nativeObj) {
 }

 TPointerEvent(const pointer_event_t* nativeObj) : TEvent((event_t*)nativeObj) {
 }

 static TPointerEvent cast(event_t* nativeObj) {
   return TPointerEvent(nativeObj);
 }

 static TPointerEvent cast(const event_t* nativeObj) {
   return TPointerEvent((event_t*)nativeObj);
 }


/**
 * 把event对象转pointer_event_t对象，主要给脚本语言使用。
 * 
 * @param event event对象。
 *
 * @return event对象。
 */
 static TPointerEvent Cast(TEvent& event) ;
 xy_t getX() const;
 xy_t getY() const;
 uint8_t getButton() const;
 bool getPressed() const;
 bool getAlt() const;
 bool getCtrl() const;
 bool getCmd() const;
 bool getMenu() const;
 bool getShift() const;
};


/**
 * 滚轮事件。
 *
 */
class TOrientationEvent : public TEvent {
public:
 TOrientationEvent(event_t* nativeObj) : TEvent(nativeObj) {
 }

 TOrientationEvent(const orientation_event_t* nativeObj) : TEvent((event_t*)nativeObj) {
 }

 static TOrientationEvent cast(event_t* nativeObj) {
   return TOrientationEvent(nativeObj);
 }

 static TOrientationEvent cast(const event_t* nativeObj) {
   return TOrientationEvent((event_t*)nativeObj);
 }


/**
 * 把event对象转orientation_event_t对象，主要给脚本语言使用。
 * 
 * @param event event对象。
 *
 * @return event对象。
 */
 static TOrientationEvent Cast(TEvent& event) ;
 int32_t getOrientation() const;
};


/**
 * 滚轮事件。
 *
 */
class TWheelEvent : public TEvent {
public:
 TWheelEvent(event_t* nativeObj) : TEvent(nativeObj) {
 }

 TWheelEvent(const wheel_event_t* nativeObj) : TEvent((event_t*)nativeObj) {
 }

 static TWheelEvent cast(event_t* nativeObj) {
   return TWheelEvent(nativeObj);
 }

 static TWheelEvent cast(const event_t* nativeObj) {
   return TWheelEvent((event_t*)nativeObj);
 }


/**
 * 把event对象转wheel_event_t对象，主要给脚本语言使用。
 * 
 * @param event event对象。
 *
 * @return event对象。
 */
 static TWheelEvent Cast(TEvent& event) ;
 int32_t getDy() const;
 bool getAlt() const;
 bool getCtrl() const;
 bool getShift() const;
};


/**
 * app_bar控件。
 * 
 * 一个简单的容器控件，一般在窗口的顶部，用于显示本窗口的状态和信息。
 * 
 * 它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 * 子控件的布局可用layout\_children属性指定。
 * 请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 * 
 * app\_bar\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于app\_bar\_t控件。
 * 
 * 在xml中使用"app\_bar"标签创建app\_bar。如：
 * 
 * ```xml
 * <app_bar x="0" y="0" w="100%" h="30"
 * <label x="0" y="0" w="100%" h="100%" text="Basic Controls" />
 * </app_bar>
 * ```
 * 
 * 在c代码中使用函数app\_bar\_create创建app\_bar。如：
 * 
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色等。如：
 * 
 * ```xml
 * <style name="default" border_color="#a0a0a0">
 * <normal     bg_color="#f0f0f0" />
 * </style>
 * ```
 *
 */
class TAppBar : public TWidget {
public:
 TAppBar(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TAppBar(const app_bar_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TAppBar cast(widget_t* nativeObj) {
   return TAppBar(nativeObj);
 }

 static TAppBar cast(const widget_t* nativeObj) {
   return TAppBar((widget_t*)nativeObj);
 }


/**
 * 创建app_bar对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为app_bar对象(供脚本语言使用)。
 * 
 * @param widget app_bar对象。
 *
 * @return app_bar对象。
 */
 static TAppBar Cast(TWidget& widget) ;
};


/**
 * Button Group控件。一个简单的容器控件，用于容纳一组按钮控件。
 * 
 * 它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 * 子控件的布局可用layout\_children属性指定。
 * 请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 * 
 * button\_group\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于button\_group\_t控件。
 * 
 * 在xml中使用"button\_group"标签创建button\_group。如：
 * 
 * ```xml
 * <button_group x="0" y="m" w="100%" h="40" children_layout="default(c=4,r=1,s=5,m=5)">
 * <button name="open:basic" text="Basic"/>
 * <button name="open:button" text="Buttons"/>
 * <button name="open:edit" text="Edits"/>
 * <button name="open:keyboard" text="KeyBoard"/>
 * </button_group>
 * ```
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色等。如：
 * 
 * ```xml
 * <style name="default" border_color="#a0a0a0">
 * <normal     bg_color="#f0f0f0" />
 * </style>
 * ```
 *
 */
class TButtonGroup : public TWidget {
public:
 TButtonGroup(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TButtonGroup(const button_group_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TButtonGroup cast(widget_t* nativeObj) {
   return TButtonGroup(nativeObj);
 }

 static TButtonGroup cast(const widget_t* nativeObj) {
   return TButtonGroup((widget_t*)nativeObj);
 }


/**
 * 创建button_group对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为button_group对象(供脚本语言使用)。
 * 
 * @param widget button_group对象。
 *
 * @return button_group对象。
 */
 static TButtonGroup Cast(TWidget& widget) ;
};


/**
 * 按钮控件。
 * 
 * 点击按钮之后会触发EVT\_CLICK事件，注册EVT\_CLICK事件以执行特定操作。
 * 
 * 按钮控件也可以作为容器使用，使用图片和文本作为其子控件，可以实现很多有趣的效果。
 * 
 * button\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于button\_t控件。
 * 
 * 在xml中使用"button"标签创建按钮控件。如：
 * 
 * ```xml
 * <button x="c" y="m" w="80" h="30" text="OK"/>
 * ```
 * 
 * 更多用法请参考：
 * [button.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/button.xml)
 * 
 * 在c代码中使用函数button\_create创建按钮控件。如：
 * 
 * 
 * 创建之后，需要用widget\_set\_text或widget\_set\_text\_utf8设置文本内容。
 * 
 * 完整示例请参考：
 * [button demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/button.c)
 * 
 * 可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 * 
 * ```xml
 * <style name="default" border_color="#a0a0a0"  text_color="black">
 * <normal     bg_color="#f0f0f0" />
 * <pressed    bg_color="#c0c0c0" x_offset="1" y_offset="1"/>
 * <over       bg_color="#e0e0e0" />
 * <disable    bg_color="gray" text_color="#d0d0d0" />
 * </style>
 * ```
 * 
 * 更多用法请参考：
 * [theme
 * default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L31)
 *
 */
class TButton : public TWidget {
public:
 TButton(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TButton(const button_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TButton cast(widget_t* nativeObj) {
   return TButton(nativeObj);
 }

 static TButton cast(const widget_t* nativeObj) {
   return TButton((widget_t*)nativeObj);
 }


/**
 * 创建button对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为button对象(供脚本语言使用)。
 * 
 * @param widget button对象。
 *
 * @return button对象。
 */
 static TButton Cast(TWidget& widget) ;

/**
 * 设置触发EVT\_CLICK事件的时间间隔。为0则不重复触发EVT\_CLICK事件。
 * 
 * @param repeat 触发EVT_CLICK事件的时间间隔(毫秒)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetRepeat(int32_t repeat) ;

/**
 * 设置是否启用长按事件。
 * 
 * @param enable_long_press 是否启用长按事件。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetEnableLongPress(bool enable_long_press) ;
 int32_t getRepeat() const;
 bool getEnableLongPress() const;
};


/**
 * 勾选按钮控件(单选/多选)。
 * 
 * check\_button\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于check\_button\_t控件。
 * 
 * 在xml中使用"check_button"标签创建多选按钮控件。如：
 * 
 * ```xml
 * <check_button name="c1" text="Book"/>
 * ```
 * 
 * 在xml中使用"radio_button"标签创建单选按钮控件。如：
 * 
 * ```xml
 * <radio_button name="r1" text="Book"/>
 * ```
 * 
 * 更多用法请参考：
 * [button.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/basic.xml)
 * 
 * 在c代码中使用函数check\_button\_create创建多选按钮控件。如：
 * 
 * 
 * 在c代码中使用函数check\_button\_create\_radio创建单选按钮控件。如：
 * 
 * 
 * 完整示例请参考：
 * [button demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/check_button.c)
 * 
 * 可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 * 
 * ```xml
 * <style name="default" icon_at="left">
 * <normal  icon="unchecked" />
 * <pressed icon="unchecked" />
 * <over    icon="unchecked" text_color="green"/>
 * <normal_of_checked icon="checked" text_color="blue"/>
 * <pressed_of_checked icon="checked" text_color="blue"/>
 * <over_of_checked icon="checked" text_color="green"/>
 * </style>
 * ```
 * 
 * 更多用法请参考：
 * [theme
 * default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L227)
 *
 */
class TCheckButton : public TWidget {
public:
 TCheckButton(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TCheckButton(const check_button_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TCheckButton cast(widget_t* nativeObj) {
   return TCheckButton(nativeObj);
 }

 static TCheckButton cast(const widget_t* nativeObj) {
   return TCheckButton((widget_t*)nativeObj);
 }


/**
 * 创建多选按钮对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 创建单选按钮对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget CreateRadio(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置控件的值。
 * 
 * @param value 值
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(bool value) ;

/**
 * 转换check_button对象(供脚本语言使用)。
 * 
 * @param widget check_button对象。
 *
 * @return check_button对象。
 */
 static TCheckButton Cast(TWidget& widget) ;
 bool getValue() const;
};


/**
 * 一个裁剪子控件的容器控件。
 * 
 * 它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 * 子控件的布局可用layout\_children属性指定。
 * 请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 * 
 * clip\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于clip\_view\_t控件。
 * 
 * 在xml中使用"clip_view"标签创建clip_view，在clip_view控件下的所有子控件都会被裁剪。如下button控件会被裁剪，无法画出clip_view控件 ：
 * 
 * ```xml
 * <clip_view x="0" y="0" w="100" h="100">
 * <button x="50" y="10" w="100" h="50" />
 * </clip_view>
 * ```
 * 
 * 备注：在clip_view控件下的所有子控件都会被裁剪，如果子控件本身会设置裁剪区的话，在子控件中计算裁剪区的交集，具体请参考scroll_view控件的scroll_view_on_paint_children函数。
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色等。如：
 * 
 * ```xml
 * <style name="default" border_color="#a0a0a0">
 * <normal     bg_color="#f0f0f0" />
 * </style>
 * ```
 *
 */
class TClipView : public TWidget {
public:
 TClipView(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TClipView(const clip_view_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TClipView cast(widget_t* nativeObj) {
   return TClipView(nativeObj);
 }

 static TClipView cast(const widget_t* nativeObj) {
   return TClipView((widget_t*)nativeObj);
 }


/**
 * 创建clip_view对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为clip_view对象(供脚本语言使用)。
 * 
 * @param widget clip_view对象。
 *
 * @return clip_view对象。
 */
 static TClipView Cast(TWidget& widget) ;
};


/**
 * 色块控件。
 * 
 * 用来显示一个颜色块，它通过属性而不是主题来设置颜色，方便在运行时动态改变颜色。
 * 
 * 可以使用value属性访问背景颜色的颜色值。
 * 
 * color\_tile\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于color\_tile\_t控件。
 * 
 * 在xml中使用"color_tile"标签创建色块控件。如：
 * 
 * ```xml
 * <color_tile x="c" y="m" w="80" h="30" bg_color="green" />
 * ```
 * 
 * 更多用法请参考：
 * [color_tile](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/color_picker_rgb.xml)
 * 
 * 在c代码中使用函数color_tile\_create创建色块控件。如：
 * 
 * 创建之后，用color\_tile\_set\_bg\_color设置背景颜色。
 *
 */
class TColorTile : public TWidget {
public:
 TColorTile(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TColorTile(const color_tile_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TColorTile cast(widget_t* nativeObj) {
   return TColorTile(nativeObj);
 }

 static TColorTile cast(const widget_t* nativeObj) {
   return TColorTile((widget_t*)nativeObj);
 }


/**
 * 创建color_tile对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为color_tile对象(供脚本语言使用)。
 * 
 * @param widget color_tile对象。
 *
 * @return color_tile对象。
 */
 static TColorTile Cast(TWidget& widget) ;

/**
 * 设置背景颜色。
 * 
 * @param color 背景颜色。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetBgColor(const char* color) ;
 const char* getBgColor() const;
 const char* getBorderColor() const;
};


/**
 * column。一个简单的容器控件，垂直排列其子控件。
 * 
 * 它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 * 子控件的布局可用layout\_children属性指定。
 * 请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 * 
 * column\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于column\_t控件。
 * 
 * 在xml中使用"column"标签创建column。如：
 * 
 * ```xml
 * <column x="0" y="0" w="100%" h="100%" children_layout="default(c=1,r=0)">
 * <button name="open:basic" text="Basic"/>
 * <button name="open:button" text="Buttons"/>
 * <button name="open:edit" text="Edits"/>
 * <button name="open:keyboard" text="KeyBoard"/>
 * </column>
 * ```
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色等。如：
 * 
 * ```xml
 * <style name="default" border_color="#a0a0a0">
 * <normal     bg_color="#f0f0f0" />
 * </style>
 * ```
 *
 */
class TColumn : public TWidget {
public:
 TColumn(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TColumn(const column_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TColumn cast(widget_t* nativeObj) {
   return TColumn(nativeObj);
 }

 static TColumn cast(const widget_t* nativeObj) {
   return TColumn((widget_t*)nativeObj);
 }


/**
 * 创建column对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为column对象(供脚本语言使用)。
 * 
 * @param widget column对象。
 *
 * @return column对象。
 */
 static TColumn Cast(TWidget& widget) ;
};


/**
 * ComboBox Item控件。
 * 
 * 本类仅供combo\_box控件内部使用。
 *
 */
class TComboBoxItem : public TWidget {
public:
 TComboBoxItem(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TComboBoxItem(const combo_box_item_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TComboBoxItem cast(widget_t* nativeObj) {
   return TComboBoxItem(nativeObj);
 }

 static TComboBoxItem cast(const widget_t* nativeObj) {
   return TComboBoxItem((widget_t*)nativeObj);
 }


/**
 * 创建combo_box_item对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换combo_box_item对象(供脚本语言使用)。
 * 
 * @param widget combo_box_item对象。
 *
 * @return combo_box_item对象。
 */
 static TComboBoxItem Cast(TWidget& widget) ;

/**
 * 设置控件是否被选中。
 * 
 * @param checked 是否被选中。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetChecked(bool checked) ;

/**
 * 设置控件的值。
 * 
 * @param value 值
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(int32_t value) ;
 int32_t getValue() const;
 bool getChecked() const;
};


/**
 * 下拉列表控件。
 * 
 * 点击右边的按钮，可弹出一个下拉列表，从中选择一项作为当前的值。
 * 
 * combo\_box\_t是[edit\_t](edit_t.md)的子类控件，edit\_t的函数均适用于combo\_box\_t控件。
 * 
 * 在xml中使用"combo_box"标签创建下拉列表控件。
 * 
 * 列表选项可以直接写在"options"属性中。如：
 * 
 * ```xml
 * <combo_box readonly="true" x="10" y="bottom:5" w="200" h="30" tr_text="ok"
 * options="1:ok;2:cancel;"/>
 * ```
 * 
 * 列表选项也可以放在独立的窗口中，用属性"open_window"指定窗口的名称。如：
 * 
 * ```xml
 * <combo_box open_window="language" readonly="true" x="10" y="bottom:50" w="200" h="30"
 * tr_text="english"/>
 * ```
 * 
 * language.xml:
 * 
 * ```xml
 * <popup close_when_click_outside="true" h="80"
 * <list_view x="0"  y="0" w="100%" h="100%" item_height="30">
 * <scroll_view name="view" x="0"  y="0" w="-12" h="100%">
 * <combo_box_item tr_text="english"/>
 * <combo_box_item tr_text="chinese" />
 * </scroll_view>
 * <scroll_bar_d name="bar" x="right" y="0" w="12" h="100%" value="0"/>
 * </list_view>
 * </popup>
 * ```
 * 
 * 更多用法请参考：[combo_box.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/combo_box.xml)
 * 
 * 
 * 
 * 如果在文本比较长时，希望在获得焦点时文本自动滚动，可以放入一个hscroll_label为子控件，并命名为"value"。如：
 * 
 * ```xml
 * <combo_box left_margin="6" readonly="true" x="10" y="50" w="80" h="30" options="leftttttttttt;centerrrrrrrrrrrrrrrr;rightttttttttt;"
 * selected_index="1">
 * <hscroll_label x="0" y="0" w="-30" h="100%"
 * name="value"
 * lull="1000"
 * loop="true"
 * yoyo="true"
 * ellipses="true"
 * only_parent_focus="true"/>
 * <button style="combobox_down" x="right:5" y="middle" w="20" h="20"/>
 * </combo_box>
 * ```
 * 
 * 在c代码中使用函数combo\_box\_create创建下拉列表控件。如：
 * 
 * 
 * 创建之后：
 * 
 * * 用combo\_box\_set\_options设置可选项目。
 * * 用combo\_box\_set\_selected\_index设置缺省项。
 * 
 * 完整示例请参考：[combo_box
 * demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/combo_box.c)
 * 
 * 可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 * 
 * ```xml
 * <combo_box>
 * <style name="default" border_color="#a0a0a0"  text_color="black" text_align_h="left">
 * <normal     bg_color="#f0f0f0" />
 * <focused    bg_color="#f0f0f0" border_color="black"/>
 * <empty      bg_color="#f0f0f0" text_color="#a0a0a0" />
 * </style>
 * </combo_box>
 * ```
 * 
 * * 1.combobox的下拉按钮的style名称为combobox_down，可以在主题文件中设置。
 * 
 * ```xml
 * <button>
 * <style name="combobox_down" border_color="#a0a0a0">
 * <normal     bg_color="#f0f0f0" icon="arrow_down_n"/>
 * <pressed    bg_color="#c0c0c0" icon="arrow_down_p"/>
 * <over       bg_color="#e0e0e0" icon="arrow_down_o"/>
 * </style>
 * </button>
 * ```
 * 
 * * 2.combobox的弹出popup窗口的style名称为combobox_popup，可以在主题文件中设置。
 * 
 * ```xml
 * <popup>
 * <style name="combobox_popup" border_color="red">
 * <normal bg_color="#808080"/>
 * </style>
 * </popup>
 * ```
 * 
 * 更多用法请参考：[theme
 * default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L422)
 *
 */
class TComboBox : public TWidget {
public:
 TComboBox(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TComboBox(const combo_box_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TComboBox cast(widget_t* nativeObj) {
   return TComboBox(nativeObj);
 }

 static TComboBox cast(const widget_t* nativeObj) {
   return TComboBox((widget_t*)nativeObj);
 }


/**
 * 创建combo_box对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换combo_box对象(供脚本语言使用)。
 * 
 * @param widget combo_box对象。
 *
 * @return combo_box对象。
 */
 static TComboBox Cast(TWidget& widget) ;

/**
 * 点击按钮时可以打开popup窗口，本函数可设置窗口的名称。
 * 
 * @param open_window 弹出窗口的名称。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetOpenWindow(const char* open_window) ;

/**
 * 重置所有选项。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t ResetOptions() ;

/**
 * 获取选项个数。
 * 
 *
 * @return 返回选项个数。
 */
 int32_t CountOptions() ;

/**
 * 设置第index个选项为当前选中的选项。
 * 
 * @param index 选项的索引。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSelectedIndex(uint32_t index) ;

/**
 * 设置是否本地化(翻译)选项。
 * 
 * @param localize_options 是否本地化(翻译)选项。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetLocalizeOptions(bool localize_options) ;

/**
 * 设置值。
 * 
 * @param value 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(int32_t value) ;

/**
 * 设置item高度。
 * 
 * @param item_height item的高度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetItemHeight(uint32_t item_height) ;

/**
 * 追加一个选项。
 * 
 * @param value 值。
 * @param text 文本。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t AppendOption(int32_t value, const char* text) ;

/**
 * 设置选项。
 * 
 * @param options 选项。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetOptions(const char* options) ;

/**
 * 获取combo_box的值。
 * 
 *
 * @return 返回值。
 */
 int32_t GetValue() ;

/**
 * 获取combo_box的文本。
 * 
 *
 * @return 返回文本。
 */
 const char* GetTextValue() ;
 char* getOpenWindow() const;
 int32_t getSelectedIndex() const;
 int32_t getValue() const;
 bool getLocalizeOptions() const;
 char* getOptions() const;
 int32_t getItemHeight() const;
};


/**
 * 对话框客户区控件。
 * 
 * 它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 * 子控件的布局可用layout\_children属性指定。
 * 请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 * 
 * dialog\_client\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于dialog\_client\_t控件。
 * 
 * 在xml中使用"dialog\_client"标签创建dialog\_client。如：
 * 
 * ```xml
 * <dialog anim_hint="center_scale(duration=300)" x="c" y="m" w="80%" h="160" text="Dialog">
 * <dialog_title x="0" y="0" w="100%" h="30" text="Hello AWTK" />
 * <dialog_client x="0" y="bottom" w="100%" h="-30">
 * <label name="" x="center" y="middle:-20" w="200" h="30" text="Are you ready?"/>
 * <button name="quit" x="10" y="bottom:10" w="40%" h="30" text="确定"/>
 * <button name="quit" x="right:10" y="bottom:10" w="40%" h="30" text="取消"/>
 * </dialog_client>
 * </dialog>
 * ```
 * 
 * 在c代码中，用dialog\_create\_simple创建对话框时，自动创建dialog客户区对象。
 *
 */
class TDialogClient : public TWidget {
public:
 TDialogClient(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TDialogClient(const dialog_client_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TDialogClient cast(widget_t* nativeObj) {
   return TDialogClient(nativeObj);
 }

 static TDialogClient cast(const widget_t* nativeObj) {
   return TDialogClient((widget_t*)nativeObj);
 }


/**
 * 创建dialog客户区对象。
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return dialog对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为dialog_client对象(供脚本语言使用)。
 * 
 * @param widget dialog_client对象。
 *
 * @return dialog_client对象。
 */
 static TDialogClient Cast(TWidget& widget) ;
};


/**
 * 对话框标题控件。
 * 
 * 它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 * 子控件的布局可用layout\_children属性指定。
 * 请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 * 
 * dialog\_title\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于dialog\_title\_t控件。
 * 
 * 在xml中使用"dialog\_title"标签创建dialog\_title。如：
 * 
 * ```xml
 * <dialog anim_hint="center_scale(duration=300)" x="c" y="m" w="80%" h="160" text="Dialog">
 * <dialog_title x="0" y="0" w="100%" h="30" text="Hello AWTK" />
 * <dialog_client x="0" y="bottom" w="100%" h="-30">
 * <label name="" x="center" y="middle:-20" w="200" h="30" text="Are you ready?"/>
 * <button name="quit" x="10" y="bottom:10" w="40%" h="30" text="确定"/>
 * <button name="quit" x="right:10" y="bottom:10" w="40%" h="30" text="取消"/>
 * </dialog_client>
 * </dialog>
 * ```
 * 
 * 在c代码中，用dialog\_create\_simple创建对话框时，自动创建dialog标题对象。
 *
 */
class TDialogTitle : public TWidget {
public:
 TDialogTitle(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TDialogTitle(const dialog_title_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TDialogTitle cast(widget_t* nativeObj) {
   return TDialogTitle(nativeObj);
 }

 static TDialogTitle cast(const widget_t* nativeObj) {
   return TDialogTitle((widget_t*)nativeObj);
 }


/**
 * 创建dialog对象。
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return dialog对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为dialog_title对象(供脚本语言使用)。
 * 
 * @param widget dialog_title对象。
 *
 * @return dialog_title对象。
 */
 static TDialogTitle Cast(TWidget& widget) ;
};


/**
 * 数字时钟控件。
 * 
 * digit\_clock\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于digit\_clock\_t控件。
 * 
 * 在xml中使用"digit\_clock"标签创建数字时钟控件。如：
 * 
 * ```xml
 * <digit_clock format="YY/MM/DD h:mm:ss"/>
 * ```
 * 
 * 更多用法请参考：[digit\_clock.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/digit_clock.xml)
 * 
 * 在c代码中使用函数digit\_clock\_create创建数字时钟控件。如：
 * 
 * 
 * 完整示例请参考：[digit\_clock demo](
 * https://github.com/zlgopen/awtk-c-demos/blob/master/demos/digit_clock.c)
 * 
 * 可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 * 
 * ```xml
 * <style name="default">
 * <normal text_color="black" />
 * </style>
 * ```
 * 
 * 更多用法请参考：[theme default](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L138)
 *
 */
class TDigitClock : public TWidget {
public:
 TDigitClock(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TDigitClock(const digit_clock_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TDigitClock cast(widget_t* nativeObj) {
   return TDigitClock(nativeObj);
 }

 static TDigitClock cast(const widget_t* nativeObj) {
   return TDigitClock((widget_t*)nativeObj);
 }


/**
 * 创建digit_clock对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为digit_clock对象(供脚本语言使用)。
 * 
 * @param widget digit_clock对象。
 *
 * @return digit_clock对象。
 */
 static TDigitClock Cast(TWidget& widget) ;

/**
 * 设置显示格式。
 * 
 * @param format 格式。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFormat(const char* format) ;
 char* getFormat() const;
};


/**
 * dragger控件。
 * 
 * 目前主要用于scrollbar里的滑块。
 *
 */
class TDragger : public TWidget {
public:
 TDragger(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TDragger(const dragger_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TDragger cast(widget_t* nativeObj) {
   return TDragger(nativeObj);
 }

 static TDragger cast(const widget_t* nativeObj) {
   return TDragger((widget_t*)nativeObj);
 }


/**
 * 创建dragger对象。
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为dragger对象(供脚本语言使用)。
 * 
 * @param widget dragger对象。
 *
 * @return dragger对象。
 */
 static TDragger Cast(TWidget& widget) ;

/**
 * 设置拖动的范围。
 * 
 * @param x_min x坐标最小值。
 * @param y_min y坐标最小值。
 * @param x_max x坐标最大值。
 * @param y_max y坐标最大值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetRange(xy_t x_min, xy_t y_min, xy_t x_max, xy_t y_max) ;
 xy_t getXMin() const;
 xy_t getYMin() const;
 xy_t getXMax() const;
 xy_t getYMax() const;
};


/**
 * 单行编辑器控件。
 * 
 * 在基于SDL的平台，单行编辑器控件使用平台原生的输入法，对于嵌入式平台使用内置的输入法。
 * 
 * 在使用内置的输入法时，软键盘由输入类型决定，开发者可以自定义软键盘的界面。
 * 
 * edit\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于edit\_t控件。
 * 
 * edit\_t本身可以做为容器，放入按钮等控件。有几个特殊的子控件：
 * 
 * * 名为"clear"的按钮。点击时清除编辑器中的内容。
 * * 名为"inc"的按钮。点击时增加编辑器的值，用于实现类似于spinbox的功能。
 * * 名为"dec"的按钮。点击时减少编辑器的值，用于实现类似于spinbox的功能。
 * * 名为"visible"的复选框。勾选时显示密码，反之不显示密码。
 * 
 * 在xml中使用"edit"标签创建编辑器控件。如：
 * 
 * ```xml
 * <edit x="c" y="m" w="80" h="30"
 * tips="age" input_type="uint" min="0" max="150" step="1" auto_fix="true" style="number" />
 * ```
 * 
 * XXX：需要在min/max/step之前设置input\_type。
 * 
 *更多用法请参考：
 * [edit.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/edit.xml)
 * 
 * 在c代码中使用函数edit\_create创建编辑器控件。如：
 * 
 * 
 * 创建之后，可以用widget\_set\_text或widget\_set\_text\_utf8设置文本内容。
 * 
 * 完整示例请参考：
 * [edit demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/edit.c)
 * 
 * 可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 * 
 * ```xml
 * <style name="default" border_color="#a0a0a0"  text_color="black" text_align_h="left">
 * <normal     bg_color="#f0f0f0" />
 * <focused    bg_color="#f0f0f0" border_color="black"/>
 * <disable    bg_color="gray" text_color="#d0d0d0" />
 * <error      bg_color="#f0f0f0" text_color="red" />
 * <empty      bg_color="#f0f0f0" text_color="#a0a0a0" />
 * </style>
 * ```
 * 
 * 更多用法请参考：
 * [theme
 * default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L104)
 *
 */
class TEdit : public TWidget {
public:
 TEdit(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TEdit(const edit_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TEdit cast(widget_t* nativeObj) {
   return TEdit(nativeObj);
 }

 static TEdit cast(const widget_t* nativeObj) {
   return TEdit((widget_t*)nativeObj);
 }


/**
 * 创建edit对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为edit对象(供脚本语言使用)。
 * 
 * @param widget edit对象。
 *
 * @return edit对象。
 */
 static TEdit Cast(TWidget& widget) ;

/**
 * 获取int类型的值。
 * 
 *
 * @return 返回int的值。
 */
 int32_t GetInt() ;

/**
 * 获取double类型的值。
 * 
 *
 * @return 返回double的值。
 */
 double GetDouble() ;

/**
 * 设置int类型的值。
 * 
 * @param value 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetInt(int32_t value) ;

/**
 * 设置double类型的值。
 * 
 * @param value 值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetDouble(double value) ;

/**
 * 设置为文本输入及其长度限制，不允许输入超过max个字符，少于min个字符时进入error状态。
 * 
 * @param min 最小长度。
 * @param max 最大长度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetTextLimit(uint32_t min, uint32_t max) ;

/**
 * 设置为整数输入及取值范围。
 * 
 * @param min 最小值。
 * @param max 最大值。
 * @param step 步长。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetIntLimit(int32_t min, int32_t max, int32_t step) ;

/**
 * 设置为浮点数输入及取值范围。
 * 
 * @param min 最小值。
 * @param max 最大值。
 * @param step 步长。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFloatLimit(double min, double max, double step) ;

/**
 * 设置编辑器是否为只读。
 * 
 * @param readonly 只读。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetReadonly(bool readonly) ;

/**
 * 设置编辑器是否为自动改正。
 * 
 * @param auto_fix 自动改正。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetAutoFix(bool auto_fix) ;

/**
 * 设置编辑器是否在获得焦点时不选中文本。
 * 
 * @param select_none_when_focused 是否在获得焦点时不选中文本。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetSelectNoneWhenFocused(bool select_none_when_focused) ;

/**
 * 设置编辑器是否在获得焦点时打开输入法。
 * 
 * @param open_im_when_focused 是否在获得焦点时打开输入法。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetOpenImWhenFocused(bool open_im_when_focused) ;

/**
 * 设置编辑器的输入类型。
 * 
 * @param type 输入类型。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetInputType(input_type_t type) ;

/**
 * 设置编辑器的输入提示。
 * 
 * @param tips 输入提示。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetInputTips(char* tips) ;

/**
 * 当编辑器输入类型为密码时，设置密码是否可见。
 * 
 * @param password_visible 密码是否可见。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetPasswordVisible(bool password_visible) ;

/**
 * 设置为焦点。
 * 
 * @param focus 是否为焦点。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFocus(bool focus) ;

/**
 * 设置输入框的光标坐标。
 * 
 * @param cursor 是否为焦点。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetCursor(uint32_t cursor) ;
 bool getReadonly() const;
 bool getPasswordVisible() const;
 bool getAutoFix() const;
 bool getSelectNoneWhenFocused() const;
 bool getOpenImWhenFocused() const;
 char* getTips() const;
 input_type_t getInputType() const;
 double getMin() const;
 double getMax() const;
 double getStep() const;
};


/**
 * grid_item。一个简单的容器控件，一般作为grid的子控件。
 * 
 * 它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 * 子控件的布局可用layout\_children属性指定。
 * 请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 * 
 * grid\_item\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于grid\_item\_t控件。
 * 
 * 在xml中使用"grid\_item"标签创建grid\_item。如：
 * 
 * ```xml
 * <grid x="0" y="0" w="100%" h="100%" children_layout="default(c=2,r=2,m=5,s=5)">
 * <grid_item>
 * <button x="c" y="m" w="80%" h="30" name="0" text="0"/>
 * </grid_item>
 * <grid_item>
 * <button x="c" y="m" w="80%" h="30" name="1" text="1"/>
 * </grid_item>
 * <grid_item>
 * <button x="c" y="m" w="80%" h="30" name="2" text="2"/>
 * </grid_item>
 * <grid_item>
 * <button x="c" y="m" w="80%" h="30" name="3" text="3"/>
 * </grid_item>
 * </grid>```
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色等。如：
 * 
 * ```xml
 * <style name="default" border_color="#a0a0a0">
 * <normal     bg_color="#f0f0f0" />
 * </style>
 * ```
 *
 */
class TGridItem : public TWidget {
public:
 TGridItem(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TGridItem(const grid_item_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TGridItem cast(widget_t* nativeObj) {
   return TGridItem(nativeObj);
 }

 static TGridItem cast(const widget_t* nativeObj) {
   return TGridItem((widget_t*)nativeObj);
 }


/**
 * 创建grid_item对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为grid_item对象(供脚本语言使用)。
 * 
 * @param widget grid_item对象。
 *
 * @return grid_item对象。
 */
 static TGridItem Cast(TWidget& widget) ;
};


/**
 * grid控件。一个简单的容器控件，用于网格排列一组控件。
 * 
 * 它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 * 子控件的布局可用layout\_children属性指定。
 * 请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 * 
 * grid\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于grid\_t控件。
 * 
 * 在xml中使用"grid"标签创建grid。如：
 * 
 * ```xml
 * <grid x="0" y="0" w="100%" h="100%" children_layout="default(c=2,r=2,m=5,s=5)">
 * <button name="open:basic" text="Basic"/>
 * <button name="open:button" text="Buttons"/>
 * <button name="open:edit" text="Edits"/>
 * <button name="open:keyboard" text="KeyBoard"/>
 * </grid>
 * ```
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色等。如：
 * 
 * ```xml
 * <style name="default" border_color="#a0a0a0">
 * <normal     bg_color="#f0f0f0" />
 * </style>
 * ```
 *
 */
class TGrid : public TWidget {
public:
 TGrid(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TGrid(const grid_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TGrid cast(widget_t* nativeObj) {
   return TGrid(nativeObj);
 }

 static TGrid cast(const widget_t* nativeObj) {
   return TGrid((widget_t*)nativeObj);
 }


/**
 * 创建grid对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为grid对象(供脚本语言使用)。
 * 
 * @param widget grid对象。
 *
 * @return grid对象。
 */
 static TGrid Cast(TWidget& widget) ;
};


/**
 * 分组控件。
 * 
 * 单选按钮在同一个父控件中是互斥的，所以通常将相关的单选按钮放在一个group\_box中。
 * 
 * 它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 * 子控件的布局可用layout\_children属性指定。
 * 请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 * 
 * group\_box\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于group\_box\_t控件。
 * 
 * 在xml中使用"group\_box"标签创建group\_box。如：
 * 
 * ```xml
 * <group_box x="20" y="230" w="50%" h="90" children_layout="default(r=3,c=1,ym=2,s=10)"
 * <radio_button name="r1" text="Book"/>
 * <radio_button name="r2" text="Food"/>
 * <radio_button name="r3" text="Pencil" value="true"/>
 * </group_box>
 * ```
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色等。如：
 * 
 * ```xml
 * <style name="default" border_color="#a0a0a0">
 * <normal     bg_color="#f0f0f0" />
 * </style>
 * ```
 *
 */
class TGroupBox : public TWidget {
public:
 TGroupBox(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TGroupBox(const group_box_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TGroupBox cast(widget_t* nativeObj) {
   return TGroupBox(nativeObj);
 }

 static TGroupBox cast(const widget_t* nativeObj) {
   return TGroupBox((widget_t*)nativeObj);
 }


/**
 * 创建group_box对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为group_box对象(供脚本语言使用)。
 * 
 * @param widget group_box对象。
 *
 * @return group_box对象。
 */
 static TGroupBox Cast(TWidget& widget) ;
};


/**
 * 文本控件。用于显示一行或多行文本。
 * 
 * 文本控件不会根据文本的长度自动换行，只有文本内容包含换行符时才会换行。
 * 
 * 如需自动换行请使用[rich\_text\_t](rich_text_t.md)控件。
 * 
 * label\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于label\_t控件。
 * 
 * 在xml中使用"label"标签创建文本控件。如：
 * 
 * ```xml
 * <label style="center" text="center"/>
 * ```
 * 
 * 更多用法请参考：[label.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/label.xml)
 * 
 * 在c代码中使用函数label\_create创建文本控件。如：
 * 
 * 
 * 创建之后，需要用widget\_set\_text或widget\_set\_text\_utf8设置文本内容。
 * 
 * 完整示例请参考：[label demo](
 * https://github.com/zlgopen/awtk-c-demos/blob/master/demos/label.c)
 * 
 * 可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 * 
 * ```xml
 * <style name="left">
 * <normal text_color="red" text_align_h="left" border_color="#a0a0a0" margin="4" />
 * </style>
 * ```
 * 
 * 更多用法请参考：
 * [theme default](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L144)
 *
 */
class TLabel : public TWidget {
public:
 TLabel(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TLabel(const label_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TLabel cast(widget_t* nativeObj) {
   return TLabel(nativeObj);
 }

 static TLabel cast(const widget_t* nativeObj) {
   return TLabel((widget_t*)nativeObj);
 }


/**
 * 创建label对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置显示字符的个数(小余0时全部显示)。。
 * 
 * @param length 最大可显示字符个数。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetLength(int32_t length) ;

/**
 * 根据文本内容调节控件大小。
 * 
 * @param min_w 最小宽度。
 * @param max_w 最大宽度。
 * @param min_h 最小高度。
 * @param max_h 最大高度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t ResizeToContent(uint32_t min_w, uint32_t max_w, uint32_t min_h, uint32_t max_h) ;

/**
 * 转换为label对象(供脚本语言使用)。
 * 
 * @param widget label对象。
 *
 * @return label对象。
 */
 static TLabel Cast(TWidget& widget) ;
 int32_t getLength() const;
};


/**
 * overlay窗口。
 * 
 * overlay窗口有点类似于非模态的dialog，但是它位置和大小是完全自由的，窗口管理器不会对它做任何限制。
 * 
 * 如果overlay窗口有透明或半透效果，则不支持窗口动画，但可以通过移动窗口位置来实现类似动画的效果。
 * 
 * overlay\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于overlay\_t控件。
 * 
 * 在xml中使用"overlay"标签创建窗口。需要指定坐标和大小，可以指定主题和动画名称。如：
 * 
 * ```xml
 * <overlay theme="basic" x="100" y="100" w="200" h="300">
 * ...
 * </overlay>
 * ```
 * 
 *
 * 更多用法请参考：[overlay.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 * 
 * 在c代码中使用函数overlay\_create创建窗口。如：
 * 
 * 
 * 完整示例请参考：[overlay
 * demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/)
 * 
 * 可用通过style来设置窗口的风格，如背景颜色或图片等。如：
 * 
 * ```xml
 * <style name="bricks">
 * <normal bg_image="bricks"  bg_image_draw_type="repeat"/>
 * </style>
 * ```
 * 
 * 更多用法请参考：[theme
 * default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L0)
 *
 */
class TOverlay : public TWidget {
public:
 TOverlay(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TOverlay(const overlay_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TOverlay cast(widget_t* nativeObj) {
   return TOverlay(nativeObj);
 }

 static TOverlay cast(const widget_t* nativeObj) {
   return TOverlay((widget_t*)nativeObj);
 }


/**
 * 创建overlay对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为overlay对象(供脚本语言使用)。
 * 
 * @param widget overlay对象。
 *
 * @return overlay对象。
 */
 static TOverlay Cast(TWidget& widget) ;
};


/**
 * 页面管理控件。
 * 
 * 只有一个Page处于active状态，处于active状态的Page才能显示并接收事件。
 * 常用于实现标签控件中的页面管理。
 * 
 * pages\_t是[widget\_t](widget_t.md)的子类控件，
 * widget\_t的函数均适用于pages\_t控件。
 * 
 * 在xml中使用"pages"标签创建页面管理控件。如：
 * 
 * ```xml
 * <tab_control x="0" y="0" w="100%" h="100%"
 * <pages x="c" y="20" w="90%" h="-60" value="1">
 * ...
 * </pages>
 * <tab_button_group>
 * ...
 * </tab_button_group>
 * </tab_control>
 * ```
 * 
 * 更多用法请参考：
 * [tab control](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 *
 */
class TPages : public TWidget {
public:
 TPages(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TPages(const pages_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TPages cast(widget_t* nativeObj) {
   return TPages(nativeObj);
 }

 static TPages cast(const widget_t* nativeObj) {
   return TPages((widget_t*)nativeObj);
 }


/**
 * 创建pages对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为pages对象(供脚本语言使用)。
 * 
 * @param widget pages对象。
 *
 * @return pages对象。
 */
 static TPages Cast(TWidget& widget) ;

/**
 * 设置当前的Page。
 * 
 * @param index 当前Page的序号。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetActive(uint32_t index) ;

/**
 * 通过页面的名字设置当前的Page。
 * 
 * @param name 当前Page的名字。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetActiveByName(char* name) ;
 uint32_t getActive() const;
};


/**
 * 进度条控件。
 * 
 * 进度条控件可以水平显示也可以垂直显示，由vertical属性决定。
 * 
 * progress\_bar\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于progress\_bar\_t控件。
 * 
 * 在xml中使用"progress\_bar"标签创建进度条控件。如：
 * 
 * ```xml
 * <progress_bar name="bar1" x="10" y="128" w="240" h="30" value="40"/>
 * <progress_bar name="bar2" x="280" y="128" w="30" h="118" value="20" vertical="true"/>
 * ```
 * 
 * 更多用法请参考：
 * [basic demo](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/basic.xml)
 * 
 * 在c代码中使用函数progress\_bar\_create创建进度条控件。如：
 * 
 * 
 * 完整示例请参考：
 * [progress_bar demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/progress_bar.c)
 * 
 * 可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 * 
 * ```xml
 * <style>
 * <normal bg_color="#f0f0f0" text_color="gold" fg_color="#c0c0c0" border_color="#a0a0a0" />
 * </style>
 * ```
 * 
 * 更多用法请参考：
 * [theme
 * default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L183)
 *
 */
class TProgressBar : public TWidget {
public:
 TProgressBar(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TProgressBar(const progress_bar_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TProgressBar cast(widget_t* nativeObj) {
   return TProgressBar(nativeObj);
 }

 static TProgressBar cast(const widget_t* nativeObj) {
   return TProgressBar((widget_t*)nativeObj);
 }


/**
 * 创建progress_bar对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为progress_bar对象(供脚本语言使用)。
 * 
 * @param widget progress_bar对象。
 *
 * @return progress_bar对象。
 */
 static TProgressBar Cast(TWidget& widget) ;

/**
 * 设置进度条的进度。
 * 
 * @param value 进度
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(float_t value) ;

/**
 * 设置最大值。
 * 
 * @param max 最大值。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetMax(uint32_t max) ;

/**
 * 设置进度条的方向。
 * 
 * @param vertical 是否为垂直方向。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetVertical(bool vertical) ;

/**
 * 设置进度条的是否显示文本。
 * 
 * @param show_text 是否显示文本。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetShowText(bool show_text) ;

/**
 * 获取进度百分比。
 * 
 * 当max为100时，percent和value取整后一致。
 * 
 *
 * @return 返回百分比。
 */
 uint32_t GetPercent() ;
 float_t getValue() const;
 float_t getMax() const;
 bool getVertical() const;
 bool getShowText() const;
};


/**
 * row。一个简单的容器控件，用于水平排列其子控件。
 * 
 * 它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 * 子控件的布局可用layout\_children属性指定。
 * 请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 * 
 * row\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于row\_t控件。
 * 
 * 在xml中使用"row"标签创建row。如：
 * 
 * ```xml
 * <row x="0" y="0" w="100%" h="100%" children_layout="default(c=0,r=1)">
 * <button name="open:basic" text="Basic"/>
 * <button name="open:button" text="Buttons"/>
 * <button name="open:edit" text="Edits"/>
 * <button name="open:keyboard" text="KeyBoard"/>
 * </row>
 * ```
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色等。如：
 * 
 * ```xml
 * <style name="default" border_color="#a0a0a0">
 * <normal     bg_color="#f0f0f0" />
 * </style>
 * ```
 *
 */
class TRow : public TWidget {
public:
 TRow(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TRow(const row_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TRow cast(widget_t* nativeObj) {
   return TRow(nativeObj);
 }

 static TRow cast(const widget_t* nativeObj) {
   return TRow((widget_t*)nativeObj);
 }


/**
 * 创建row对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为row对象(供脚本语言使用)。
 * 
 * @param widget row对象。
 *
 * @return row对象。
 */
 static TRow Cast(TWidget& widget) ;
};


/**
 * 滑块控件。
 * 
 * slider\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于slider\_t控件。
 * 
 * 在xml中使用"slider"标签创建滑块控件。如：
 * 
 * ```xml
 * <slider x="center" y="10" w="80%" h="20" value="10"/>
 * <slider style="img" x="center" y="50" w="80%" h="30" value="20" />
 * <slider style="img" x="center" y="90" w="80%" h="30" value="30" min="5" max="50" step="5"/>
 * ```
 * 
 * 更多用法请参考：
 * [basic](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/basic.xml)
 * 
 * 在c代码中使用函数slider\_create创建滑块控件。如：
 * 
 * 
 * 完整示例请参考：
 * [slider demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/slider.c)
 * 
 * 可用通过style来设置控件的显示风格，如图片和颜色等等。如：
 * 
 * ```xml
 * <style name="img" bg_image="slider_bg" fg_image="slider_fg">
 * <normal icon="slider_drag"/>
 * <pressed icon="slider_drag_p"/>
 * <over icon="slider_drag_o"/>
 * </style>
 * ```
 * 
 * 更多用法请参考：
 * [theme
 * default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L179)
 *
 */
class TSlider : public TWidget {
public:
 TSlider(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TSlider(const slider_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TSlider cast(widget_t* nativeObj) {
   return TSlider(nativeObj);
 }

 static TSlider cast(const widget_t* nativeObj) {
   return TSlider((widget_t*)nativeObj);
 }


/**
 * 创建slider对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为slider对象(供脚本语言使用)。
 * 
 * @param widget slider对象。
 *
 * @return slider对象。
 */
 static TSlider Cast(TWidget& widget) ;

/**
 * 设置滑块的值。
 * 
 * @param value 值
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(double value) ;

/**
 * 设置滑块的最小值。
 * 
 * @param min 最小值
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetMin(double min) ;

/**
 * 设置滑块的最大值。
 * 
 * @param max 最大值
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetMax(double max) ;

/**
 * 设置滑块的拖动的最小单位。
 * 
 * @param step 拖动的最小单位。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetStep(double step) ;

/**
 * 设置bar的宽度或高度。
 * 
 * @param bar_size bar的宽度或高度。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetBarSize(uint32_t bar_size) ;

/**
 * 设置滑块的方向。
 * 
 * @param vertical 是否为垂直方向。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetVertical(bool vertical) ;
 double getValue() const;
 double getMin() const;
 double getMax() const;
 double getStep() const;
 bool getVertical() const;
 uint32_t getBarSize() const;
 uint32_t getDraggerSize() const;
 bool getDraggerAdaptToIcon() const;
 bool getSlideWithBar() const;
};


/**
 * 标签按钮分组控件。
 * 
 * 一个简单的容器，主要用于对标签按钮进行布局和管理。
 * 
 * tab\_button\_group\_t是[widget\_t](widget_t.md)的子类控件，
 * widget\_t的函数均适用于tab\_button\_group\_t控件。
 * 
 * 在xml中使用"tab\_button\_group"标签创建标签按钮分组控件。如：
 * 
 * ```xml
 * <tab_button_group x="c" y="bottom:10" w="90%" h="30" compact="true"
 * <tab_button text="General"/>
 * <tab_button text="Network" value="true" />
 * <tab_button text="Security"/>
 * </tab_button_group>
 * ```
 * 
 * 更多用法请参考：
 * [tab control](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 * 
 * 可用通过style来设置控件的显示风格，如颜色等等。如：
 * 
 * ```xml
 * <tab_button_group>
 * <style name="default">
 * <normal/>
 * </style>
 * </tab_button_group>
 * ```
 *
 */
class TTabButtonGroup : public TWidget {
public:
 TTabButtonGroup(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TTabButtonGroup(const tab_button_group_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TTabButtonGroup cast(widget_t* nativeObj) {
   return TTabButtonGroup(nativeObj);
 }

 static TTabButtonGroup cast(const widget_t* nativeObj) {
   return TTabButtonGroup((widget_t*)nativeObj);
 }


/**
 * 创建tab_button_group对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置compact。
 * 
 * @param compact 是否使用紧凑布局(缺省FALSE)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetCompact(bool compact) ;

/**
 * 设置scrollable。
 * 
 * @param scrollable 是否允许滚动(缺省FALSE)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetScrollable(bool scrollable) ;

/**
 * 转换tab_button_group对象(供脚本语言使用)。
 * 
 * @param widget tab_button_group对象。
 *
 * @return tab_button_group对象。
 */
 static TTabButtonGroup Cast(TWidget& widget) ;
 bool getCompact() const;
 bool getScrollable() const;
};


/**
 * 标签按钮控件。
 * 
 * 标签按钮有点类似单选按钮，但点击标签按钮之后会自动切换当前的标签页。
 * 
 * tab\_button\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于tab\_button\_t控件。
 * 
 * 在xml中使用"tab\_button"标签创建标签按钮控件。如：
 * 
 * ```xml
 * <tab_button_group x="c" y="bottom:10" w="90%" h="30" compact="true"
 * <tab_button text="General"/>
 * <tab_button text="Network" value="true" />
 * <tab_button text="Security"/>
 * </tab_button_group>
 * ```
 * 
 * 标签按钮一般放在标签按钮分组中，布局由标签按钮分组控件决定，不需要指定自己的布局参数和坐标。
 * 
 * 更多用法请参考：
 * [tab control](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 * 
 * 可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 * 
 * ```xml
 * <tab_button>
 * <style name="default" border_color="#a0a0a0"  text_color="black">
 * <normal     bg_color="#d0d0d0" />
 * <pressed    bg_color="#f0f0f0" />
 * <over       bg_color="#e0e0e0" />
 * <normal_of_active     bg_color="#f0f0f0" />
 * <pressed_of_active    bg_color="#f0f0f0" />
 * <over_of_active       bg_color="#f0f0f0" />
 * </style>
 * </tab_button>
 * ```
 *
 */
class TTabButton : public TWidget {
public:
 TTabButton(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TTabButton(const tab_button_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TTabButton cast(widget_t* nativeObj) {
   return TTabButton(nativeObj);
 }

 static TTabButton cast(const widget_t* nativeObj) {
   return TTabButton((widget_t*)nativeObj);
 }


/**
 * 创建tab_button对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换tab_button对象(供脚本语言使用)。
 * 
 * @param widget tab_button对象。
 *
 * @return tab_button对象。
 */
 static TTabButton Cast(TWidget& widget) ;

/**
 * 设置为当前标签。
 * 
 * @param value 是否为当前标签。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetValue(uint32_t value) ;

/**
 * 设置控件的图标。
 * 
 * @param name 当前项的图标。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetIcon(char* name) ;

/**
 * 设置控件的active图标。
 * 
 * @param name 当前项的图标。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetActiveIcon(char* name) ;
 bool getValue() const;
 char* getActiveIcon() const;
 char* getIcon() const;
};


/**
 * 标签控件。
 * 
 * 它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 * 
 * 标签控件通常会包含一个pages控件和一个tab\_button\_group控件。
 * 
 * 
 * 
 * tab\_control\_t是[widget\_t](widget_t.md)的子类控件，
 * widget\_t的函数均适用于tab\_control\_t控件。
 * 
 * 在xml中使用"tab\_control"标签创建标签控件。如：
 * 
 * ```xml
 * <tab_control x="0" y="0" w="100%" h="100%"
 * <pages x="c" y="20" w="90%" h="-60" value="1">
 * ...
 * </pages>
 * <tab_button_group>
 * ...
 * </tab_button_group>
 * </tab_control>
 * ```
 * 
 * 更多用法请参考：
 * [tab control](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 *
 */
class TTabControl : public TWidget {
public:
 TTabControl(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TTabControl(const tab_control_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TTabControl cast(widget_t* nativeObj) {
   return TTabControl(nativeObj);
 }

 static TTabControl cast(const widget_t* nativeObj) {
   return TTabControl((widget_t*)nativeObj);
 }


/**
 * 创建tab_control对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换tab_control对象(供脚本语言使用)。
 * 
 * @param widget tab_control对象。
 *
 * @return tab_control对象。
 */
 static TTabControl Cast(TWidget& widget) ;
};


/**
 * 一个通用的容器控件。
 * 
 * 它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 * 子控件的布局可用layout\_children属性指定。
 * 请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 * 
 * view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于view\_t控件。
 * 
 * 在xml中使用"view"标签创建view。如：
 * 
 * ```xml
 * <view x="0" y="0" w="100%" h="100%" children_layout="default(c=2,r=2,m=5,s=5)">
 * </view>
 * ```
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色等。如：
 * 
 * ```xml
 * <style name="default" border_color="#a0a0a0">
 * <normal     bg_color="#f0f0f0" />
 * </style>
 * ```
 *
 */
class TView : public TWidget {
public:
 TView(widget_t* nativeObj) : TWidget(nativeObj) {
 }

 TView(const view_t* nativeObj) : TWidget((widget_t*)nativeObj) {
 }

 static TView cast(widget_t* nativeObj) {
   return TView(nativeObj);
 }

 static TView cast(const widget_t* nativeObj) {
   return TView((widget_t*)nativeObj);
 }


/**
 * 创建view对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为view对象(供脚本语言使用)。
 * 
 * @param widget view对象。
 *
 * @return view对象。
 */
 static TView Cast(TWidget& widget) ;
};


/**
 * 单个idle的信息。
 *
 */
class TIdleInfo : public TObject {
public:
 TIdleInfo(emitter_t* nativeObj) : TObject(nativeObj) {
 }

 TIdleInfo(const idle_info_t* nativeObj) : TObject((emitter_t*)nativeObj) {
 }

 static TIdleInfo cast(emitter_t* nativeObj) {
   return TIdleInfo(nativeObj);
 }

 static TIdleInfo cast(const emitter_t* nativeObj) {
   return TIdleInfo((emitter_t*)nativeObj);
 }


/**
 * 转换为idle_info对象(供脚本语言使用)。
 * 
 * @param idle idle_info对象。
 *
 * @return idle_info对象。
 */
 static TIdleInfo Cast(TIdleInfo& idle) ;
 void* getCtx() const;
 uint32_t getId() const;
};


/**
 * mutable图片控件。
 * 
 * 像摄像头和视频的图像是变化的，每一帧都不同，我们把这类图片称为mutable image。
 * 
 * 本控件辅助实现摄像头和视频的显示功能。
 * 
 * mutable\_image\_t是[image\_base\_t](image_base_t.md)的子类控件，image\_base\_t的函数均适用于mutable\_image\_t控件。
 * 
 * 在xml中使用"mutable\_image"标签创建mutable图片控件。如：
 * 
 * ```xml
 * <mutable_image w="100%" h="100%"/>
 * ```
 * 
 *更多用法请参考：
 * [mutable
 * image](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/mutable_image.xml)
 * 
 * 在c代码中使用函数mutable\_image\_create创建mutable图片控件。如：
 * 
 * 
 * 创建之后:
 *
 * 需要用mutable\_image\_set\_prepare\_image设置准备图片的回调函数。
 * 
 * 完整示例请参考：[mutable image demo](
 * https://github.com/zlgopen/awtk-c-demos/blob/master/demos/mutable_image.c)
 * 
 * 一般不需通过style来设置控件的显示风格，如果在特殊情况下需要，可以参考其它控件。
 *
 */
class TMutableImage : public TImageBase {
public:
 TMutableImage(widget_t* nativeObj) : TImageBase(nativeObj) {
 }

 TMutableImage(const mutable_image_t* nativeObj) : TImageBase((widget_t*)nativeObj) {
 }

 static TMutableImage cast(widget_t* nativeObj) {
   return TMutableImage(nativeObj);
 }

 static TMutableImage cast(const widget_t* nativeObj) {
   return TMutableImage((widget_t*)nativeObj);
 }

};


/**
 * 简单的动态数组，内部存放value对象。
 * 
 * 访问时属性名称为：
 * 
 * * "size"/"length" 用于获取数组的长度。
 * * index 用于访问属性，-1可以用来追加新元素。
 *
 */
class TObjectArray : public TObject {
public:
 TObjectArray(emitter_t* nativeObj) : TObject(nativeObj) {
 }

 TObjectArray(const object_array_t* nativeObj) : TObject((emitter_t*)nativeObj) {
 }

 static TObjectArray cast(emitter_t* nativeObj) {
   return TObjectArray(nativeObj);
 }

 static TObjectArray cast(const emitter_t* nativeObj) {
   return TObjectArray((emitter_t*)nativeObj);
 }


/**
 * 创建对象。
 * 
 *
 * @return 返回object对象。
 */
 static TObject Create() ;

/**
 * for script gc
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Unref() ;

/**
 * 清除全部属性。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t ClearProps() ;
 uint32_t getPropsSize() const;
};


/**
 * GIF图片控件。
 * 
 * 注意：GIF图片的尺寸大于控件大小时会自动缩小图片，但一般的嵌入式系统的硬件加速都不支持图片缩放，
 * 所以缩放图片会导致性能明显下降。如果性能不满意时，请确认一下GIF图片的尺寸是否小余控件大小。
 * 
 * gif\_image\_t是[image\_base\_t](image_base_t.md)的子类控件，image\_base\_t的函数均适用于gif\_image\_t控件。
 * 
 * 在xml中使用"gif"标签创建GIF图片控件。如：
 * 
 * ```xml
 * <gif image="bee"/>
 * ```
 * 
 *更多用法请参考：
 * [gif
 * image](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/gif_image.xml)
 * 
 * 在c代码中使用函数gif\_image\_create创建GIF图片控件。如：
 * 
 * 
 * 创建之后:
 *
 * 需要用widget\_set\_image设置图片名称。
 * 
 * 完整示例请参考：[gif image demo](
 * https://github.com/zlgopen/awtk-c-demos/blob/master/demos/gif_image.c)
 * 
 * 可用通过style来设置控件的显示风格，如背景和边框等。如：
 * 
 * ```xml
 * <gif>
 * <style name="border">
 * <normal border_color="#000000" bg_color="#e0e0e0" text_color="black"/>
 * </style>
 * </gif>
 * ```
 * 
 * 更多用法请参考：[theme default](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml)
 *
 */
class TGifImage : public TImageBase {
public:
 TGifImage(widget_t* nativeObj) : TImageBase(nativeObj) {
 }

 TGifImage(const gif_image_t* nativeObj) : TImageBase((widget_t*)nativeObj) {
 }

 static TGifImage cast(widget_t* nativeObj) {
   return TGifImage(nativeObj);
 }

 static TGifImage cast(const widget_t* nativeObj) {
   return TGifImage((widget_t*)nativeObj);
 }


/**
 * 创建gif_image对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为gif_image对象(供脚本语言使用)。
 * 
 * @param widget gif_image对象。
 *
 * @return gif_image对象。
 */
 static TGifImage Cast(TWidget& widget) ;
};


/**
 * 对象接口的缺省实现。
 * 
 * 内部使用有序数组保存所有属性，可以快速查找指定名称的属性。
 *
 */
class TObjectDefault : public TObject {
public:
 TObjectDefault(emitter_t* nativeObj) : TObject(nativeObj) {
 }

 TObjectDefault(const object_default_t* nativeObj) : TObject((emitter_t*)nativeObj) {
 }

 static TObjectDefault cast(emitter_t* nativeObj) {
   return TObjectDefault(nativeObj);
 }

 static TObjectDefault cast(const emitter_t* nativeObj) {
   return TObjectDefault((emitter_t*)nativeObj);
 }


/**
 * 创建对象。
 * 
 *
 * @return 返回object对象。
 */
 static TObject Create() ;

/**
 * for script gc
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Unref() ;

/**
 * 清除全部属性。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t ClearProps() ;
 uint32_t getPropsSize() const;
};


/**
 * 图片控件。
 * 
 * 用来显示一张静态图片，目前支持bmp/png/jpg等格式。
 * 
 * 如果要显示gif文件，请用[gif\_image](gif_image_t.md)。
 * 
 * 如果要显示svg文件，请用[svg\_image](svg_image_t.md)。
 * 
 * 如果需要支持勾选效果，请设置**selectable**属性。
 * 
 * 如果需要支持点击效果，请设置**clickable**属性。
 * 
 * image\_t是[image\_base\_t](image_base_t.md)的子类控件，image\_base\_t的函数均适用于image\_t控件。
 * 
 * 在xml中使用"image"标签创建图片控件。如：
 * 
 * ```xml
 * <image style="border" image="earth" draw_type="icon" />
 * ```
 * 
 * 更多用法请参考：
 * [image.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/images.xml)
 * 
 * 在c代码中使用函数image\_create创建图片控件。如：
 * 
 * 
 * 创建之后:
 *
 * 需要用widget\_set\_image设置图片名称。
 *
 * 可以用image\_set\_draw\_type设置图片的绘制方式。
 * 
 * 绘制方式请参考[image\_draw\_type\_t](image_draw_type_t.md)
 * 
 * 绘制方式的属性值和枚举值:
 * [image\_draw\_type\_name\_value](https://github.com/zlgopen/awtk/blob/master/src/base/enums.c#L98)
 * 
 * 完整示例请参考：
 * [image demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/image.c)
 * 
 * 可用通过style来设置控件的显示风格，如背景和边框等。如：
 * 
 * ```xml
 * <image>
 * <style name="border">
 * <normal border_color="#000000" bg_color="#e0e0e0" text_color="black"/>
 * </style>
 * </image>
 * ```
 * 
 * 更多用法请参考：
 * [theme
 * default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L313)
 *
 */
class TImage : public TImageBase {
public:
 TImage(widget_t* nativeObj) : TImageBase(nativeObj) {
 }

 TImage(const image_t* nativeObj) : TImageBase((widget_t*)nativeObj) {
 }

 static TImage cast(widget_t* nativeObj) {
   return TImage(nativeObj);
 }

 static TImage cast(const widget_t* nativeObj) {
   return TImage((widget_t*)nativeObj);
 }


/**
 * 创建image对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置图片的绘制方式。
 * 
 * @param draw_type 绘制方式(仅在没有旋转和缩放时生效)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetDrawType(image_draw_type_t draw_type) ;

/**
 * 转换为image对象(供脚本语言使用)。
 * 
 * @param widget image对象。
 *
 * @return image对象。
 */
 static TImage Cast(TWidget& widget) ;
 image_draw_type_t getDrawType() const;
};


/**
 * 可滚动的combo_box控件。
 *
 */
class TComboBoxEx : public TComboBox {
public:
 TComboBoxEx(widget_t* nativeObj) : TComboBox(nativeObj) {
 }

 TComboBoxEx(const combo_box_ex_t* nativeObj) : TComboBox((widget_t*)nativeObj) {
 }

 static TComboBoxEx cast(widget_t* nativeObj) {
   return TComboBoxEx(nativeObj);
 }

 static TComboBoxEx cast(const widget_t* nativeObj) {
   return TComboBoxEx((widget_t*)nativeObj);
 }


/**
 * 创建combo_box_ex对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;
};


/**
 * 弹出窗口。
 * 
 * 弹出窗口是一种特殊的窗口，大小和位置可以自由设置，主要用来实现右键菜单和combo\_box的下列列表等功能。
 * 
 * popup\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于popup\_t控件。
 * 
 * 在xml中使用"popup"标签创建弹出窗口。如：
 * 
 * ```xml
 * <popup close_when_click_outside="true" x="c" y="m" w="80%" h="80"
 * <list_view x="0"  y="0" w="100%" h="100%" item_height="30">
 * <scroll_view name="view" x="0"  y="0" w="-12" h="100%">
 * <combo_box_item tr_text="english"/>
 * <combo_box_item tr_text="chinese" />
 * </scroll_view>
 * <scroll_bar_d name="bar" x="right" y="0" w="12" h="100%" value="0"/>
 * </list_view>
 * </popup>
 * ```
 * 
 *
 * 更多用法请参考：[popup](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 * 
 * 在c代码中使用函数popup\_create创建弹出窗口。如：
 * 
 * 
 * 创建之后，和使用普通窗口是一样的。
 * 
 * 完整示例请参考：[combo_box.c](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/combo_box.c)
 * 
 * 可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 * 
 * ```xml
 * <popup>
 * <style name="default" border_color="#a0a0a0">
 * <normal bg_color="#f0f0f0"/>
 * </style>
 * </popup>
 * ```
 * 
 * 更多用法请参考：[theme
 * default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L324)
 *
 */
class TPopup : public TWindowBase {
public:
 TPopup(widget_t* nativeObj) : TWindowBase(nativeObj) {
 }

 TPopup(const popup_t* nativeObj) : TWindowBase((widget_t*)nativeObj) {
 }

 static TPopup cast(widget_t* nativeObj) {
   return TPopup(nativeObj);
 }

 static TPopup cast(const widget_t* nativeObj) {
   return TPopup((widget_t*)nativeObj);
 }


/**
 * 创建popup对象。
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return popup对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为popup对象(供脚本语言使用)。
 * 
 * @param widget popup对象。
 *
 * @return popup对象。
 */
 static TPopup Cast(TWidget& widget) ;

/**
 * 设置点击时是否关闭窗口。
 * 
 * @param close_when_click 点击时是否关闭窗口。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetCloseWhenClick(bool close_when_click) ;

/**
 * 设置点击窗口外部时是否关闭窗口。
 * 
 * @param close_when_click_outside 点击窗口外部时是否关闭窗口。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetCloseWhenClickOutside(bool close_when_click_outside) ;
 bool getCloseWhenClick() const;
 bool getCloseWhenClickOutside() const;
};


/**
 * SVG图片控件。
 * 
 * svg\_image\_t是[image\_base\_t](image_base_t.md)的子类控件，image\_base\_t的函数均适用于svg\_image\_t控件。
 * 
 * 在xml中使用"svg"标签创建SVG图片控件。如：
 * 
 * ```xml
 * <svg image="girl"/>
 * ```
 * 
 *更多用法请参考：[svg image](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/svg_image.xml)
 * 
 * 在c代码中使用函数svg\_image\_create创建SVG图片控件。如：
 * 
 * 
 * 创建之后: 需要用widget\_set\_image设置图片名称。
 * 
 * 完整示例请参考：[svg image demo](
 * https://github.com/zlgopen/awtk-c-demos/blob/master/demos/svg_image.c)
 * 
 * 可用通过style来设置控件的显示风格，如背景和边框等。如：
 * 
 * ```xml
 * <svg>
 * <style name="default">
 * <normal border_color="green" fg_color="red" />
 * </style>
 * </svg>
 * ```
 * 
 * 更多用法请参考：[theme default](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml)
 *
 */
class TSvgImage : public TImageBase {
public:
 TSvgImage(widget_t* nativeObj) : TImageBase(nativeObj) {
 }

 TSvgImage(const svg_image_t* nativeObj) : TImageBase((widget_t*)nativeObj) {
 }

 static TSvgImage cast(widget_t* nativeObj) {
   return TSvgImage(nativeObj);
 }

 static TSvgImage cast(const widget_t* nativeObj) {
   return TSvgImage((widget_t*)nativeObj);
 }


/**
 * 创建svg_image对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置控件的图片名称。
 * 
 * 如果需要显示文件系统中的图片，只需将图片名称换成实际的文件名，并加上"file://"前缀即可。
 * 
 * @param name 图片名称，该图片必须存在于资源管理器。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetImage(char* name) ;

/**
 * 转换为svg_image对象(供脚本语言使用)。
 * 
 * @param widget svg_image对象。
 *
 * @return svg_image对象。
 */
 static TSvgImage Cast(TWidget& widget) ;
};


/**
 * 单个定时器的信息。
 *
 */
class TTimerInfo : public TObject {
public:
 TTimerInfo(emitter_t* nativeObj) : TObject(nativeObj) {
 }

 TTimerInfo(const timer_info_t* nativeObj) : TObject((emitter_t*)nativeObj) {
 }

 static TTimerInfo cast(emitter_t* nativeObj) {
   return TTimerInfo(nativeObj);
 }

 static TTimerInfo cast(const emitter_t* nativeObj) {
   return TTimerInfo((emitter_t*)nativeObj);
 }


/**
 * 转换为timer_info对象(供脚本语言使用)。
 * 
 * @param timer timer_info对象。
 *
 * @return timer_info对象。
 */
 static TTimerInfo Cast(TTimerInfo& timer) ;
 void* getCtx() const;
 uint32_t getId() const;
 uint64_t getNow() const;
};


/**
 * spinbox控件。
 * 
 * 一个特殊的数值编辑器，将edit\_t和button\_t进行组合，方便编辑数值。
 * 
 * 点击向上的按钮将数值增加一个step，点击向下的按钮将数值减小一个step。
 * step的值可以通过step属性进行设置。
 * 
 * spin_box\_t是[edit\_t](edit_t.md)的子类控件，edit\_t的函数均适用于spin\_box\_t控件。
 * 
 * 在xml中使用"spin_box"标签创建spinbox控件。如：
 * 
 * ```xml
 * <spin_box w="70%" input_type="int" min="-100" max="100" step="5">
 * ```
 * 
 *
 * 更多用法请参考：[spin_box.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/spinbox.xml)
 * 
 * 在c代码中使用函数spin_box\_create创建spinbox控件。如：
 * 
 * 
 * 创建之后:
 *
 * 可以用edit相关函数去设置它的各种属性。
 * 
 * 完整示例请参考：[spin_box
 * demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/spin_box.c)
 * 
 * 可用通过style来设置控件的显示风格，如背景和边框等。如：
 * 
 * ```xml
 * <spin_box>
 * <style name="default" border_color="#a0a0a0"  text_color="black" text_align_h="left">
 * <normal     bg_color="#f0f0f0" />
 * <focused    bg_color="#f0f0f0" border_color="black"/>
 * <disable    bg_color="gray" text_color="#d0d0d0" />
 * <error      bg_color="#f0f0f0" text_color="red" />
 * <empty      bg_color="#f0f0f0" text_color="#a0a0a0" />
 * </style>
 * </spin_box>
 * ```
 * 
 * 更多用法请参考：[theme
 * default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L128)
 *
 */
class TSpinBox : public TEdit {
public:
 TSpinBox(widget_t* nativeObj) : TEdit(nativeObj) {
 }

 TSpinBox(const spin_box_t* nativeObj) : TEdit((widget_t*)nativeObj) {
 }

 static TSpinBox cast(widget_t* nativeObj) {
   return TSpinBox(nativeObj);
 }

 static TSpinBox cast(const widget_t* nativeObj) {
   return TSpinBox((widget_t*)nativeObj);
 }


/**
 * 创建spin_box对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为spin_box对象(供脚本语言使用)。
 * 
 * @param widget spin_box对象。
 *
 * @return spin_box对象。
 */
 static TSpinBox Cast(TWidget& widget) ;
};


/**
 * system\_bar窗口。
 * 
 * system\_bar窗口是一种特殊的窗口，独占LCD顶部区域，用来显示当前窗口的标题和关闭按钮等内容。
 * 
 * system\_bar窗口需要在打开第一个应用程序窗口之前打开。
 * 
 * system_bar对两个子控件会做特殊处理：
 * 
 * * 1.名为"title"的label控件，自动显示当前主窗口的name或text。
 * * 2.名为"close"的button控件，点击之后向当前主窗口发送EVT\_REQUEST\_CLOSE\_WINDOW消息。
 * 
 * system\_bar\_t是[window\_base\_t](window_base_t.md)的子类控件，
 * window\_base\_t的函数均适用于system\_bar\_t控件。
 * 
 * 在xml中使用"system\_bar"标签创建system\_bar窗口。如：
 * 
 * ```xml
 * <system_bar h="30">
 * <column x="0" y="0" w="-40" h="100%">
 * <label style="title" x="10" y="m" w="55%" h="100%" name="title"/>
 * <digit_clock style="time" x="r" y="m" w="40%" h="100%" format="hh:mm"/>
 * </column>
 * <button style="close" x="r:5" y="m" w="26" h="26" name="close" text="x"/>
 * </system_bar>
 * ```
 * 
 * 更多用法请参考：
 * [system_bar](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/system_bar.xml)
 * 
 * 在c代码中使用函数system\_bar\_create创建system\_bar窗口。如：
 * 
 * 
 * 创建之后，和使用普通窗口是一样的。
 * 
 * 可用通过style来设置控件的显示风格，如背景颜色等等。如：
 * 
 * ```xml
 * <system_bar>
 * <style name="default">
 * <normal bg_color="#a0a0a0"/>
 * </style>
 * </system_bar>
 * ```
 * 
 * 更多用法请参考：
 * [system_bar.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/system_bar.xml)
 *
 */
class TSystemBar : public TWindowBase {
public:
 TSystemBar(widget_t* nativeObj) : TWindowBase(nativeObj) {
 }

 TSystemBar(const system_bar_t* nativeObj) : TWindowBase((widget_t*)nativeObj) {
 }

 static TSystemBar cast(widget_t* nativeObj) {
   return TSystemBar(nativeObj);
 }

 static TSystemBar cast(const widget_t* nativeObj) {
   return TSystemBar((widget_t*)nativeObj);
 }


/**
 * 创建system_bar对象。
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return system_bar对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为system_bar对象(供脚本语言使用)。
 * 
 * @param widget system_bar对象。
 *
 * @return system_bar对象。
 */
 static TSystemBar Cast(TWidget& widget) ;
};


/**
 * 窗口。
 * 
 * 缺省的应用程序窗口，占用除system\_bar\_t之外的整个区域，请不要修改它的位置和大小(除非你清楚后果)。
 * 
 * window\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于window\_t控件。
 * 
 * 在xml中使用"window"标签创建窗口。无需指定坐标和大小，可以指定主题和动画名称。如：
 * 
 * ```xml
 * <window theme="basic" anim_hint="htranslate">
 * ...
 * </window>
 * ```
 * 
 *
 * 更多用法请参考：[window.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 * 
 * 在c代码中使用函数window\_create创建窗口。如：
 * 
 * 
 * 无需指定父控件、坐标和大小，使用0即可。
 * 
 * 完整示例请参考：[window
 * demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/)
 * 
 * 可用通过style来设置窗口的风格，如背景颜色或图片等。如：
 * 
 * ```xml
 * <style name="bricks">
 * <normal bg_image="bricks"  bg_image_draw_type="repeat"/>
 * </style>
 * ```
 * 
 * 更多用法请参考：[theme
 * default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L0)
 *
 */
class TWindow : public TWindowBase {
public:
 TWindow(widget_t* nativeObj) : TWindowBase(nativeObj) {
 }

 TWindow(const window_t* nativeObj) : TWindowBase((widget_t*)nativeObj) {
 }

 static TWindow cast(widget_t* nativeObj) {
   return TWindow(nativeObj);
 }

 static TWindow cast(const widget_t* nativeObj) {
   return TWindow((widget_t*)nativeObj);
 }


/**
 * 创建window对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 设置为全屏窗口。
 * 
 *这里全屏是指与LCD相同大小，而非让SDL窗口全屏。
 * 
 * @param fullscreen 是否全屏。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetFullscreen(bool fullscreen) ;

/**
 * 从资源文件中加载并创建window_base对象。本函数在ui_loader/ui_builder_default里实现。
 * 
 * @param name window的名称。
 *
 * @return 对象。
 */
 static TWidget Open(char* name) ;

/**
 * 从资源文件中加载并创建window对象。本函数在ui_loader/ui_builder_default里实现。
 * 
 * @param name window的名称。
 * @param to_close 关闭该窗口。
 *
 * @return 对象。
 */
 static TWidget OpenAndClose(char* name, TWidget& to_close) ;

/**
 * 关闭窗口。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Close() ;

/**
 * 立即无条件关闭窗口(无动画)。
 * 
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t CloseForce() ;

/**
 * 转换为window对象(供脚本语言使用)。
 * 
 * @param widget window对象。
 *
 * @return window对象。
 */
 static TWindow Cast(TWidget& widget) ;
 bool getFullscreen() const;
};


/**
 * 软键盘。
 * 
 * 软键盘是一个特殊的窗口，由编辑器通过输入法自动打开和关闭。
 * 
 * 这里介绍一下定制软键盘的方法：
 * 
 * 编辑器输入类型和软键盘UI资源文件的对应关系:
 * 
 * | 输入类型       | 软键盘UI资源文件|
 * |----------------|:---------------:|
 * | INPUT\_PHONE    | kb\_phone.xml    |
 * | INPUT\_INT      | kb\_int.xml      |
 * | INPUT\_FLOAT    | kb\_float.xml    |
 * | INPUT\_UINT     | kb\_uint.xml     |
 * | INPUT\_UFLOAT   | kb\_ufloat.xml   |
 * | INPUT\_HEX      | kb\_hex.xml      |
 * | INPUT\_EMAIL    | kb\_ascii.xml    |
 * | INPUT\_PASSWORD | kb\_ascii.xml    |
 * | INPUT\_CUSTOM   | 使用自定义的键盘 |
 * | 其它            | kb\_default.xml  |
 * 
 * keyboard中按钮子控件的名称有些特殊要求：
 * 
 * |  名称          | 功能            |
 * |----------------|:---------------:|
 * | return         | 回车键          |
 * | action         | 定制按钮        |
 * | backspace      | 删除键          |
 * | tab            | tab键           |
 * | space          | 空格键          |
 * | close          | 关闭软键盘      |
 * | 前缀key:       | 键值            |
 * | 前缀page:      | 切换到页面      |
 * 
 * 
 * 更多用法请参考：
 * [kb_default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/kb_default.xml)
 *
 */
class TKeyboard : public TWindowBase {
public:
 TKeyboard(widget_t* nativeObj) : TWindowBase(nativeObj) {
 }

 TKeyboard(const keyboard_t* nativeObj) : TWindowBase((widget_t*)nativeObj) {
 }

 static TKeyboard cast(widget_t* nativeObj) {
   return TKeyboard(nativeObj);
 }

 static TKeyboard cast(const widget_t* nativeObj) {
   return TKeyboard((widget_t*)nativeObj);
 }


/**
 * 创建keyboard对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return 对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换为keyboard对象(供脚本语言使用)。
 * 
 * @param widget keyboard对象。
 *
 * @return keyboard对象。
 */
 static TKeyboard Cast(TWidget& widget) ;
};


/**
 * 对话框。 对话框是一种特殊的窗口，大小和位置可以自由设置。
 * 
 * AWTK中的对话框可以是模态的，也可以是非模态的。
 * 
 * 如果dialog有透明或半透效果则不支持窗口动画。
 * 
 * 由于浏览器中无法实现主循环嵌套，因此无法实现模态对话框。
 * 如果希望自己写的AWTK应用程序可以在浏览器(包括各种小程序)中运行或演示，
 * 请避免使用模态对话框。
 * 
 * 对话框通常由对话框标题和对话框客户区两部分组成：
 * 
 * 
 * 
 * dialog\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于dialog\_t控件。
 * 
 * 在xml中使用"dialog"标签创建对话框。如：
 * 
 * ```xml
 * <dialog anim_hint="center_scale(duration=300)" x="c" y="m" w="80%" h="160" text="Dialog">
 * <dialog_title x="0" y="0" w="100%" h="30" text="Hello AWTK" />
 * <dialog_client x="0" y="bottom" w="100%" h="-30">
 * <label name="" x="center" y="middle:-20" w="200" h="30" text="Are you ready?"/>
 * <button name="quit" x="10" y="bottom:10" w="40%" h="30" text="确定"/>
 * <button name="quit" x="right:10" y="bottom:10" w="40%" h="30" text="取消"/>
 * </dialog_client>
 * </dialog>
 * ```
 * 
 * 如果你不需要对话框的标题，可以这样写：
 * 
 * ```xml
 * <dialog anim_hint="center_scale(duration=300)" x="c" y="m" w="80%" h="160" text="Dialog">
 * <label name="" x="center" y="middle:-20" w="200" h="30" text="Are you ready?"/>
 * <button name="quit" x="10" y="bottom:10" w="40%" h="30" text="确定"/>
 * <button name="quit" x="right:10" y="bottom:10" w="40%" h="30" text="取消"/>
 * </dialog>
 * ```
 * 
 * 打开非模态对话框时，其用法与普通窗口一样。打开非模态对话框时，还需要调用dialog\_modal。
 * 
 * 
 * 关闭模态对话框用dialog\_quit
 * 
 * 
 * 关闭非模态对话框用window\_close。
 * 
 * 
 * 更多用法请参考：
 * [dialog.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 * 
 * 完整C代码示例请参考：
 * 
 * * [非模态对话框](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/dialog.c)
 * 
 * * [模态对话框](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/dialog_modal.c)
 * 
 * 可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 * 
 * ```xml
 * <style name="default">
 * <normal border_color="#606060" />
 * </style>
 * ```
 * 
 * 更多用法请参考：
 * [theme default]
 * (https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L324)
 *
 */
class TDialog : public TWindowBase {
public:
 TDialog(widget_t* nativeObj) : TWindowBase(nativeObj) {
 }

 TDialog(const dialog_t* nativeObj) : TWindowBase((widget_t*)nativeObj) {
 }

 static TDialog cast(widget_t* nativeObj) {
   return TDialog(nativeObj);
 }

 static TDialog cast(const widget_t* nativeObj) {
   return TDialog((widget_t*)nativeObj);
 }


/**
 * 创建dialog对象。
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return dialog对象。
 */
 static TWidget Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 创建dialog对象，同时创建title/client。
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @return dialog对象。
 */
 static TWidget CreateSimple(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h) ;

/**
 * 转换dialog对象(供脚本语言使用)。
 * 
 * @param widget dialog对象。
 *
 * @return dialog对象。
 */
 static TDialog Cast(TWidget& widget) ;

/**
 * 获取title控件。
 * 
 *
 * @return title对象。
 */
 TWidget GetTitle() ;

/**
 * 获取client控件。
 * 
 *
 * @return client对象。
 */
 TWidget GetClient() ;

/**
 * 从资源文件中加载并创建Dialog对象。
 * 
 * 本函数在ui\_loader/ui\_builder_default里实现。
 * 
 * @param name dialog的名称。
 *
 * @return 对象。
 */
 static TWidget Open(const char* name) ;

/**
 * 设置对话框的标题文本。
 * 
 * @param title 标题。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t SetTitle(char* title) ;

/**
 * 模态显示对话框。
 * dialog_modal返回后，dialog对象将在下一个idle函数中回收。
 * 也就是在dialog_modal调用完成后仍然可以访问dialog中控件，直到本次事件结束。
 * 
 *
 * @return 返回退出吗。
 */
 dialog_quit_code_t Modal() ;

/**
 * 退出模态显示，关闭对话框。
 * 
 * 比如，在对话框中关闭按钮的事件处理函数中，调用本函数关闭对话框。
 * 
 * @param code 退出码，作为dialog_modal的返回值(参考：[dialog_quit_code_t](dialog_quit_code_t.md))。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 ret_t Quit(uint32_t code) ;

/**
 * 检查对话框是否已经退出模态。
 * 
 *
 * @return 返回TRUE表示已经退出，否则表示没有。
 */
 bool IsQuited() ;

/**
 * 检查对话框是否为模态对话框。
 * 
 *
 * @return 返回TRUE表示是模态对话框，否则表示不是。
 */
 bool IsModal() ;

/**
 * 显示『短暂提示信息』对话框。
 * 
 * 主题由dialog_toast.xml文件决定。
 * 
 * @param text 文本内容。
 * @param duration 显示时间(单位为毫秒)。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 static ret_t Toast(const char* text, uint32_t duration) ;

/**
 * 显示『提示信息』对话框。
 * 
 * 主题由dialog_info.xml文件决定。
 * 
 * @param title 标题。
 * @param text 文本内容。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 static ret_t Info(const char* title, const char* text) ;

/**
 * 显示『警告』对话框。
 * 
 * 主题由dialog_warn.xml文件决定。
 * 
 * @param title 标题。
 * @param text 文本内容。
 *
 * @return 返回RET_OK表示成功，否则表示失败。
 */
 static ret_t Warn(const char* title, const char* text) ;

/**
 * 显示『确认』对话框。
 * 
 * 主题由dialog_confirm.xml文件决定。
 * 
 * @param title 标题。
 * @param text 文本内容。
 *
 * @return 返回RET_OK表示确认，否则表示取消。
 */
 static ret_t Confirm(const char* title, const char* text) ;
 const char* getHighlight() const;
};

#endif/*AWTK_CPP_HPP*/
