### 简单示例

```js

function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);
  var ok = TButton.create(win, 0, 0, 0, 0);

  ok.setText("ok");
  ok.setName("ok");
  ok.setSelfLayoutParams("center", "middle", "50%", "30");

  ok.on(TEventType.CLICK, function(evt) {
    var e = TPointerEvent.cast(evt);
    var target = TButton.cast(e.target);

    console.log("click at " + e.x + " " + e.y + " on " + target.name);
    console.log("global: " + TGlobal.getPointerX() + " " + TGlobal.getPointerY() + " " + TGlobal.isPointerPressed());

    return TRet.OK;
  });
  
  console.log("global: " + TGlobal.getPointerX() + " " + TGlobal.getPointerY() + " " + TGlobal.isPointerPressed());

  win.layout();
}

applicationInit()

```

### Enumerations

* [TAlignH](enums/_awtk_.talignh.md)
* [TAlignV](enums/_awtk_.talignv.md)
* [TAppType](enums/_awtk_.tapptype.md)
* [TAssetType](enums/_awtk_.tassettype.md)
* [TBitmapFlag](enums/_awtk_.tbitmapflag.md)
* [TBitmapFormat](enums/_awtk_.tbitmapformat.md)
* [TClipBoardDataType](enums/_awtk_.tclipboarddatatype.md)
* [TDialogQuitCode](enums/_awtk_.tdialogquitcode.md)
* [TEasingType](enums/_awtk_.teasingtype.md)
* [TEventType](enums/_awtk_.teventtype.md)
* [TGlyphFormat](enums/_awtk_.tglyphformat.md)
* [TImageDrawType](enums/_awtk_.timagedrawtype.md)
* [TIndicatorDefaultPaint](enums/_awtk_.tindicatordefaultpaint.md)
* [TInputType](enums/_awtk_.tinputtype.md)
* [TKeyCode](enums/_awtk_.tkeycode.md)
* [TMIME_TYPE](enums/_awtk_.tmime_type.md)
* [TRet](enums/_awtk_.tret.md)
* [TStyleId](enums/_awtk_.tstyleid.md)
* [TValueType](enums/_awtk_.tvaluetype.md)
* [TWidgetProp](enums/_awtk_.twidgetprop.md)
* [TWidgetState](enums/_awtk_.twidgetstate.md)
* [TWidgetType](enums/_awtk_.twidgettype.md)
* [TWindowClosable](enums/_awtk_.twindowclosable.md)
* [TWindowStage](enums/_awtk_.twindowstage.md)

### Classes

* [TAppBar](classes/_awtk_.tappbar.md)
* [TAssetInfo](classes/_awtk_.tassetinfo.md)
* [TAssetsManager](classes/_awtk_.tassetsmanager.md)
* [TBitmap](classes/_awtk_.tbitmap.md)
* [TButton](classes/_awtk_.tbutton.md)
* [TButtonGroup](classes/_awtk_.tbuttongroup.md)
* [TCanvas](classes/_awtk_.tcanvas.md)
* [TCanvasWidget](classes/_awtk_.tcanvaswidget.md)
* [TCheckButton](classes/_awtk_.tcheckbutton.md)
* [TClipBoard](classes/_awtk_.tclipboard.md)
* [TColor](classes/_awtk_.tcolor.md)
* [TColorComponent](classes/_awtk_.tcolorcomponent.md)
* [TColorPicker](classes/_awtk_.tcolorpicker.md)
* [TColorTile](classes/_awtk_.tcolortile.md)
* [TColumn](classes/_awtk_.tcolumn.md)
* [TComboBox](classes/_awtk_.tcombobox.md)
* [TComboBoxEx](classes/_awtk_.tcomboboxex.md)
* [TComboBoxItem](classes/_awtk_.tcomboboxitem.md)
* [TDateTime](classes/_awtk_.tdatetime.md)
* [TDialog](classes/_awtk_.tdialog.md)
* [TDialogClient](classes/_awtk_.tdialogclient.md)
* [TDialogTitle](classes/_awtk_.tdialogtitle.md)
* [TDigitClock](classes/_awtk_.tdigitclock.md)
* [TDraggable](classes/_awtk_.tdraggable.md)
* [TDragger](classes/_awtk_.tdragger.md)
* [TEdit](classes/_awtk_.tedit.md)
* [TEmitter](classes/_awtk_.temitter.md)
* [TEvent](classes/_awtk_.tevent.md)
* [TFontManager](classes/_awtk_.tfontmanager.md)
* [TFsFile](classes/_awtk_.tfsfile.md)
* [TGifImage](classes/_awtk_.tgifimage.md)
* [TGlobal](classes/_awtk_.tglobal.md)
* [TGrid](classes/_awtk_.tgrid.md)
* [TGridItem](classes/_awtk_.tgriditem.md)
* [TGroupBox](classes/_awtk_.tgroupbox.md)
* [TGuage](classes/_awtk_.tguage.md)
* [TGuagePointer](classes/_awtk_.tguagepointer.md)
* [THscrollLabel](classes/_awtk_.thscrolllabel.md)
* [TIdle](classes/_awtk_.tidle.md)
* [TIdleInfo](classes/_awtk_.tidleinfo.md)
* [TIdleManager](classes/_awtk_.tidlemanager.md)
* [TImage](classes/_awtk_.timage.md)
* [TImageAnimation](classes/_awtk_.timageanimation.md)
* [TImageBase](classes/_awtk_.timagebase.md)
* [TImageManager](classes/_awtk_.timagemanager.md)
* [TImageValue](classes/_awtk_.timagevalue.md)
* [TInputMethod](classes/_awtk_.tinputmethod.md)
* [TKeyEvent](classes/_awtk_.tkeyevent.md)
* [TKeyboard](classes/_awtk_.tkeyboard.md)
* [TLabel](classes/_awtk_.tlabel.md)
* [TLineNumber](classes/_awtk_.tlinenumber.md)
* [TListItem](classes/_awtk_.tlistitem.md)
* [TListView](classes/_awtk_.tlistview.md)
* [TListViewH](classes/_awtk_.tlistviewh.md)
* [TLocaleInfo](classes/_awtk_.tlocaleinfo.md)
* [TMledit](classes/_awtk_.tmledit.md)
* [TMutableImage](classes/_awtk_.tmutableimage.md)
* [TNamedValue](classes/_awtk_.tnamedvalue.md)
* [TObject](classes/_awtk_.tobject.md)
* [TObjectArray](classes/_awtk_.tobjectarray.md)
* [TObjectDefault](classes/_awtk_.tobjectdefault.md)
* [TOrientationEvent](classes/_awtk_.torientationevent.md)
* [TOverlay](classes/_awtk_.toverlay.md)
* [TPages](classes/_awtk_.tpages.md)
* [TPaintEvent](classes/_awtk_.tpaintevent.md)
* [TPath](classes/_awtk_.tpath.md)
* [TPoint](classes/_awtk_.tpoint.md)
* [TPointerEvent](classes/_awtk_.tpointerevent.md)
* [TPointf](classes/_awtk_.tpointf.md)
* [TPopup](classes/_awtk_.tpopup.md)
* [TProgressBar](classes/_awtk_.tprogressbar.md)
* [TProgressCircle](classes/_awtk_.tprogresscircle.md)
* [TProgressEvent](classes/_awtk_.tprogressevent.md)
* [TPropChangeEvent](classes/_awtk_.tpropchangeevent.md)
* [TRect](classes/_awtk_.trect.md)
* [TRichText](classes/_awtk_.trichtext.md)
* [TRow](classes/_awtk_.trow.md)
* [TScrollBar](classes/_awtk_.tscrollbar.md)
* [TScrollView](classes/_awtk_.tscrollview.md)
* [TSlideIndicator](classes/_awtk_.tslideindicator.md)
* [TSlideMenu](classes/_awtk_.tslidemenu.md)
* [TSlideView](classes/_awtk_.tslideview.md)
* [TSlider](classes/_awtk_.tslider.md)
* [TSpinBox](classes/_awtk_.tspinbox.md)
* [TStyle](classes/_awtk_.tstyle.md)
* [TStyleMutable](classes/_awtk_.tstylemutable.md)
* [TSvgImage](classes/_awtk_.tsvgimage.md)
* [TSwitch](classes/_awtk_.tswitch.md)
* [TSystemBar](classes/_awtk_.tsystembar.md)
* [TTabButton](classes/_awtk_.ttabbutton.md)
* [TTabButtonGroup](classes/_awtk_.ttabbuttongroup.md)
* [TTabControl](classes/_awtk_.ttabcontrol.md)
* [TTextSelector](classes/_awtk_.ttextselector.md)
* [TTheme](classes/_awtk_.ttheme.md)
* [TTimeClock](classes/_awtk_.ttimeclock.md)
* [TTimeNow](classes/_awtk_.ttimenow.md)
* [TTimer](classes/_awtk_.ttimer.md)
* [TTimerInfo](classes/_awtk_.ttimerinfo.md)
* [TTimerManager](classes/_awtk_.ttimermanager.md)
* [TValue](classes/_awtk_.tvalue.md)
* [TVgcanvas](classes/_awtk_.tvgcanvas.md)
* [TView](classes/_awtk_.tview.md)
* [TWheelEvent](classes/_awtk_.twheelevent.md)
* [TWidget](classes/_awtk_.twidget.md)
* [TWindow](classes/_awtk_.twindow.md)
* [TWindowBase](classes/_awtk_.twindowbase.md)
* [TWindowEvent](classes/_awtk_.twindowevent.md)
* [TWindowManager](classes/_awtk_.twindowmanager.md)
* [TWindowManagerDefault](classes/_awtk_.twindowmanagerdefault.md)
* [TWindowManagerSimple](classes/_awtk_.twindowmanagersimple.md)
