#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int a1=10;
	int *ptr1,**ptr2,***ptr3;

	ptr1=&a1;
	ptr2=&ptr1;
	ptr3=&ptr2;

	printf("變數a1之地址:%p ,內容:%d\n",&a1,a1);
	printf("變數ptr1之地址:%p ,內容:%p ,*ptr1:%d\n",&ptr1,ptr1,*ptr1);
	printf("變數ptr2之地址:%p ,內容:%p ,**ptr2:%d\n",&ptr2,ptr3,**ptr2);
	printf("變數ptr3之地址:%p ,內容:%p ,***ptr3:%d\n",&ptr3,ptr3,***ptr3);
  return 0;
}
