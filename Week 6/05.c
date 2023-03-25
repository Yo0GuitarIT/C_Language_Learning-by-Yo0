#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	char select;
	printf(" (1)排骨便當\n");
	printf(" (2)海鮮便當\n");
	printf(" (3)雞腿便當\n");
  	printf(" (4)魚排便當\n");
	printf("\n=========================\n");
	printf("請輸入您要購買的便當: ");
	scanf("%c",&select);

	switch(select){
		case '1':
			printf("排骨便當一份75元");
			break;  //跳出迴圈
		case '2':
			printf("海鮮便當一份85元");
			break;
		case '3':
			printf("雞腿便當一份90元");
			break;
		case '4':
			printf("魚排便當一份95元");
			break;
		default:  //select內容為滿足於case選項時執行
		  printf("輸入錯誤...");
	}
	
	printf("\n=========================\n");
  	
	return 0;
}
