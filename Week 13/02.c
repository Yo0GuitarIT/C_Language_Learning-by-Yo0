#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a1=10,*ptr1,**ptr2;

	ptr1=&a1;      //ptr1指向a1的記憶體位置      
	               //*ptr1=a1=10
	ptr2=&ptr1;    //ptr2指向ptr1的記憶體位置
	               //*ptr2=ptr1=&a1 
	               //**ptr2=*ptr1=a1=10

	printf("變數a1的位置：%p ,內容：%d\n",&a1,a1);
	printf("變數ptr1的位置：%p, 內容：%p, *ptr1:%d\n",&ptr1,ptr1,*ptr1);
	printf("變數ptr2的位置：%p, 內容：%p, **ptr2:%d\n",&ptr2,ptr2,**ptr2);

	
	
  return 0;
}
