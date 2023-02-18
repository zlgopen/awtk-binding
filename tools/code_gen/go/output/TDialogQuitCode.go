type TDialogQuitCode int
const (
  DIALOG_QUIT_NONE TDialogQuitCode = C.DIALOG_QUIT_NONE
  DIALOG_QUIT_OK TDialogQuitCode = C.DIALOG_QUIT_OK
  DIALOG_QUIT_YES TDialogQuitCode = C.DIALOG_QUIT_YES
  DIALOG_QUIT_CANCEL TDialogQuitCode = C.DIALOG_QUIT_CANCEL
  DIALOG_QUIT_NO TDialogQuitCode = C.DIALOG_QUIT_NO
  DIALOG_QUIT_OTHER TDialogQuitCode = C.DIALOG_QUIT_OTHER
)