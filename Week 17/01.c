#include <stdio.h>
#include <stdlib.h>

int main(void) {
  struct{
		int length;
		int width;
	}rectangle; //宣告結構型態變數

	printf("請輸入長與寬\n：");
	scanf("%d%d",&rectangle.length,&rectangle.width);
	printf("長=%d 寬=%d",rectangle.length,rectangle.length);

  return 0;
}
