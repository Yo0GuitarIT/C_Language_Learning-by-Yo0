#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *number = "President"; //以字串宣告指標
	
	number++;										//字串指標的＋1運算
	
	printf("%c\n",*(number+0)); //提取第一個字元
	printf("%s",number);        //執行加一運算後的字串
  return 0;
}
