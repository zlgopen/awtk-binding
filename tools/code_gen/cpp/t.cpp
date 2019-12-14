#include <stdio.h>
#include <stdint.h>

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
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 static int quit()  {
   printf("quit\n");
   return 0;
 }

};

int main(int argc, char* argv[]) {
  TGlobal::quit();

  return 0;
}
