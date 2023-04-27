#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a1=40,a2=58,a3=71;
	int *p1,*p2,*p3;

	p1 = &a1;
	p2 = &a2;
	p3 = &a3;

	printf("p1的位置：%p, *p1的內容：%d\n",p1,*p1);
	printf("p2的位置：%p, *p2的內容：%d\n",p2,*p2);
	printf("p3的位置：%p, *p3的內容：%d\n",p3,*p3);
  return 0;
}
