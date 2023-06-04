#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_test(int *,int *);  //函數傳址呼叫

int main(void) {
  	int a=10,b=20;

	printf("函數外交換前:a=%d, b=%d\n\n",a,b);
	swap_test(&a, &b);  //傳址呼叫
	printf("函數外交換後:a=%d, b=%d\n",a,b);
  return 0;
}

void swap_test(int *x,int *y){
	int t;
	
	printf("函數內交換前:x=%d, y=%d\n",*x,*y);
	t=*x;
	*y=*x;
	*y=t;  //交換過程
	printf("函數內交換後:x=%d, y=%d\n\n",*x,*y);
}
