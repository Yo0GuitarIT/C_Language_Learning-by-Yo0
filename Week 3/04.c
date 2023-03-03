#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//宣告字元變數
	char char1 = 'Y'; //加上單引號
	char char2 = 88;
  
	//印出字元和它的ASCII碼
	printf("字元char1= %c 的ASCII碼=%d\n",char1,char1);

	char1 = char1+32; //字元運算的功能
	printf("字元char1= %c 的ASCII碼=%d\n",char1,char1);

	
	printf("字元char2= %c 的ASCII碼=%d\n",char2,char2);
	char2 = char2-32; //字元運算的功能
	printf("字元char2= %c 的ASCII碼=%d\n",char2,char2);
  return 0;
}
