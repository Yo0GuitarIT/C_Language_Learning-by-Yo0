#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int a=12,b=38;

	printf("%d&%d=%d\n",a,b,a&b); //AND &
	printf("%d|%d=%d\n",a,b,a|b); //OR |
	printf("%d^%d=%d\n",a,b,a^b); //XOR ^
	printf("~%d=%d\n",a,~a); //NOT ~
	
  return 0;
}
