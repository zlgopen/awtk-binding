type TVpageEvent int
const (
  EVT_VPAGE_WILL_OPEN TVpageEvent = C.EVT_VPAGE_WILL_OPEN
  EVT_VPAGE_OPEN TVpageEvent = C.EVT_VPAGE_OPEN
  EVT_VPAGE_CLOSE TVpageEvent = C.EVT_VPAGE_CLOSE
)
