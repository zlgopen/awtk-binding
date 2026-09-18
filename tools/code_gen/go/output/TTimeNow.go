func TTimeNowS() int64 {
  return (int64)(C.time_now_s());
}

func TTimeNowMs() int64 {
  return (int64)(C.time_now_ms());
}

func TTimeNowUs() int64 {
  return (int64)(C.time_now_us());
}

