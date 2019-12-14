[AWTK](https://github.com/zlgopen/awtk) 全称 Toolkit AnyWhere，是 [ZLG](http://www.zlg.cn/) 开发的开源 GUI 引擎，旨在为嵌入式系统、WEB、各种小程序、手机和 PC 打造的通用 GUI 引擎，为用户提供一个功能强大、高效可靠、简单易用、可轻松做出炫酷效果的 GUI 引擎。

> 欢迎广大开发者一起参与开发：[生态共建计划](docs/awtk_ecology.md)。

#### [AWTK](https://github.com/zlgopen/awtk) 寓意有两个方面：

* Toolkit AnyWhere。 
* ZLG 物联网操作系统 AWorks 内置 GUI。

## CPP 示例代码

```cpp
#include "awtk_cpp.hpp"
#include "application.hpp"

static ret_t OnClick(void* ctx, event_t* e) {
  log_debug("on_click\n");
  return RET_OK;
}

bool Application::Init(void) {
  TWidget wm = TWindowManager::Instance();
  TWidget win = TWindow::Create(wm, 0, 0, 0, 0); 
  TWidget ok = TButton::Create(win, 0, 0, 0, 0); 

  ok.SetText("ok");
  ok.SetSelfLayoutParams("center", "middle", "50%", "30");
  ok.On(EVT_CLICK, OnClick, NULL);

  win.Layout();

  return true;
}

bool Application::Exit(void) {
  log_debug("application_exit\n");

  return true;
}
```


[类列表](classes.html)
