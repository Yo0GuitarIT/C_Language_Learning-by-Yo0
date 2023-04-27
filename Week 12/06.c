#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num = 110;
	char ch='A';

	printf("變數名稱 變數值 記憶體位置\n");
	printf("-----------------------------\n");
	printf("num\t     %d\t %p\n",num,&num);
	printf("ch\t      %c\t     %p\n",ch,&ch);
	//輸出num和ch的值與位置
	
  return 0;
}
