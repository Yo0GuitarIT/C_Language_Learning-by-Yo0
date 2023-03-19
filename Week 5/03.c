#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a=3,b=5,c=7;

	printf("a=%d b=%d c=%d\n",a,b,c);
	printf("-----------------------\n");

	//包含關係與邏輯運算子的運算式求值
	printf("a<b && b<c || c<a = %d\n",a<b && b<c || c<a);
	printf("!(a==b) && (!a<b) = %d\n",!(a==b) && (!a<b));
	
  return 0;
}
