[AWTK](https://github.com/zlgopen/awtk) 全称 Toolkit AnyWhere，是 [ZLG](http://www.zlg.cn/) 开发的开源 GUI 引擎，旨在为嵌入式系统、WEB、各种小程序、手机和 PC 打造的通用 GUI 引擎，为用户提供一个功能强大、高效可靠、简单易用、可轻松做出炫酷效果的 GUI 引擎。

> 欢迎广大开发者一起参与开发：[生态共建计划](docs/awtk_ecology.md)。

#### [AWTK](https://github.com/zlgopen/awtk) 寓意有两个方面：

* Toolkit AnyWhere。 
* ZLG 物联网操作系统 AWorks 内置 GUI。

## JAVA 示例代码

```java
import awtk.*;

class DemoButton {
 public static void main(String[] args) {
   AWTK.init(320, 480, AppType.SIMULATOR);

   Widget win = Window.create(null, 0, 0, 0, 0);
   Widget button = Button.create(win, 10, 0, 0, 0);
   
   button.setName("OK");
   button.setText("OK");
   button.setSelfLayout("default(x=c,y=m,w=200,h=40)");
   button.on(EventType.CLICK, new PrintOnClicked(), 0);

   AWTK.run();
 }

 static {
   System.loadLibrary("awtk-jni");
 }
}

```


[类列表](classes.html)
