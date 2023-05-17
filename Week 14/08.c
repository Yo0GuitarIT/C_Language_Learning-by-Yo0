#include <stdio.h>
#include <stdlib.h>

void swap_test(int,int); //傳值呼叫函數

int main(void) {
  int a=10,b=20;

	printf("函數外交換前，a=%d,b=%d\n\n",a,b);
	swap_test(a,b);
	printf("函數外交換後，a=%d,b=%d\n",a,b);
	
  return 0;
}

void swap_test(int x,int y){ //未回傳值
	int t;
	printf("函數內交換前，x=%d,y=%d\n",x,y);
	t=x;
	x=y;
	y=t; //交換過程
	printf("函數內交換後，x=%d,y=%d\n\n",x,y);
}  
