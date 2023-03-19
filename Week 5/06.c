#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int a,b;

	a=15;
	printf("a=%d\n",a);
	b=++a; //前置型遞增運算子
	printf("b=++a  -->  a=%d,b=%d\n",a,b);

	a=15;
	printf("a=%d\n",a);
	b=a++; //後置型遞增運算子
	printf("b=a++  -->  a=%d,b=%d\n",a,b);

	a=15;
	printf("a=%d\n",a);
	b=--a; //前置型遞減運算子
	printf("b=--a  -->  a=%d,b=%d\n",a,b);

	a=15;
	printf("a=%d\n",a);
	b=a--; //後置型遞減運算子
	printf("b=a--  -->  a=%d,b=%d\n",a,b);
	
  return 0;
}
