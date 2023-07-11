type TDateTime struct {
  handle unsafe.Pointer
}

func TDateTimeCreate() TDateTime {
  retObj := TDateTime{}
  retObj.handle = unsafe.Pointer(C.date_time_create())
  return retObj
}

func (this TDateTime) SetYear(year uint32) TRet {
  return TRet(C.date_time_set_year((*C.date_time_t)(this.handle), (C.uint32_t)(year)));
}

func (this TDateTime) SetMonth(month uint32) TRet {
  return TRet(C.date_time_set_month((*C.date_time_t)(this.handle), (C.uint32_t)(month)));
}

func (this TDateTime) SetDay(day uint32) TRet {
  return TRet(C.date_time_set_day((*C.date_time_t)(this.handle), (C.uint32_t)(day)));
}

func (this TDateTime) SetHour(hour uint32) TRet {
  return TRet(C.date_time_set_hour((*C.date_time_t)(this.handle), (C.uint32_t)(hour)));
}

func (this TDateTime) SetMinute(minute uint32) TRet {
  return TRet(C.date_time_set_minute((*C.date_time_t)(this.handle), (C.uint32_t)(minute)));
}

func (this TDateTime) SetSecond(second uint32) TRet {
  return TRet(C.date_time_set_second((*C.date_time_t)(this.handle), (C.uint32_t)(second)));
}

func (this TDateTime) Set() TRet {
  return TRet(C.date_time_set((*C.date_time_t)(this.handle)));
}

func (this TDateTime) FromTime(time int64) TRet {
  return TRet(C.date_time_from_time((*C.date_time_t)(this.handle), (C.int64_t)(time)));
}

func (this TDateTime) ToTime() int64 {
  return (int64)(C.date_time_to_time((*C.date_time_t)(this.handle)));
}

func (this TDateTime) AddDelta(delta int64) TRet {
  return TRet(C.date_time_add_delta((*C.date_time_t)(this.handle), (C.int64_t)(delta)));
}

func TDateTimeIsLeap(year uint32) bool {
  return (bool)(C.date_time_is_leap((C.uint32_t)(year)));
}

func TDateTimeGetDays(year uint32, month uint32) int32 {
  return (int32)(C.date_time_get_days((C.uint32_t)(year), (C.uint32_t)(month)));
}

func TDateTimeGetWday(year uint32, month uint32, day uint32) int32 {
  return (int32)(C.date_time_get_wday((C.uint32_t)(year), (C.uint32_t)(month), (C.uint32_t)(day)));
}

func TDateTimeGetMonthName(month uint32) string {
  return C.GoString(C.date_time_get_month_name((C.uint32_t)(month)));
}

func TDateTimeGetWdayName(wday uint32) string {
  return C.GoString(C.date_time_get_wday_name((C.uint32_t)(wday)));
}

func (this TDateTime) Destroy() TRet {
  return TRet(C.date_time_destroy((*C.date_time_t)(this.handle)));
}

func (this TDateTime) GetSecond() int32 {
  return (int32)((*C.date_time_t)(unsafe.Pointer(this.handle)).second);
}

func (this TDateTime) GetMinute() int32 {
  return (int32)((*C.date_time_t)(unsafe.Pointer(this.handle)).minute);
}

func (this TDateTime) GetHour() int32 {
  return (int32)((*C.date_time_t)(unsafe.Pointer(this.handle)).hour);
}

func (this TDateTime) GetDay() int32 {
  return (int32)((*C.date_time_t)(unsafe.Pointer(this.handle)).day);
}

func (this TDateTime) GetMonth() int32 {
  return (int32)((*C.date_time_t)(unsafe.Pointer(this.handle)).month);
}

func (this TDateTime) GetYear() int32 {
  return (int32)((*C.date_time_t)(unsafe.Pointer(this.handle)).year);
}

