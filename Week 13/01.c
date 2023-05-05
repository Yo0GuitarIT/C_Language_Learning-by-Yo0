#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a1=40,a2=58,a3=71;
	int *p1,*p2,*p3;

	p1=&a1; //p1指向a1記憶體的位置
	p2=&a2;
	p3=&a3;

	printf("變數a1的值：%d, *p1的值：%d\n",a1,*p1);    //p1=&a1 *p1=*(&a1)=a1
	printf("變數a2的值：%d, *p2的值：%d\n",a2,*p2);
	printf("變數a3的值：%d, *p3的值：%d\n",a3,*p3);

	printf("--------------------------------\n");

	a1 =101;
	*p2=103; //a2=103
	p3=p2;

	printf("變數a1的值：%d, *p1的值：%d\n",a1,*p1);    
	printf("變數a2的值：%d, *p2的值：%d\n",a2,*p2);
	printf("變數a3的值：%d, *p3的值：%d\n",a3,*p3);
	
  return 0;
}
