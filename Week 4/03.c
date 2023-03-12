#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int no = 1234;

	printf("no=%d\n",no);
	printf("no=%6d\n",no); //欄寬設定為６
	printf("no=%8d\n",no); //欄寬設定為８
	printf("no=%2d\n",no); //欄寬設定小於原本顯示字元
	printf("-------------------\n");
	printf("no=%*d\n",1,no);
	printf("no=%*d\n",6,no);
	printf("no=%*d\n",8,no);
	//另外一種寫法
	
	return 0;
}
