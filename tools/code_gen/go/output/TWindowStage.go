type TWindowStage int
const (
  WINDOW_STAGE_NONE TWindowStage = C.WINDOW_STAGE_NONE
  WINDOW_STAGE_LOADED TWindowStage = C.WINDOW_STAGE_LOADED
  WINDOW_STAGE_CREATED TWindowStage = C.WINDOW_STAGE_CREATED
  WINDOW_STAGE_OPENED TWindowStage = C.WINDOW_STAGE_OPENED
  WINDOW_STAGE_CLOSED TWindowStage = C.WINDOW_STAGE_CLOSED
  WINDOW_STAGE_SUSPEND TWindowStage = C.WINDOW_STAGE_SUSPEND
)