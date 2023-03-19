#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int a=12,b=38;

	printf("%d&%d=%d\n",a,b,a&b); //AND &
	/*
	00001100=12
	00100110=38
	00000100=4
		*/
	printf("%d|%d=%d\n",a,b,a|b); //OR |
	/*
	00001100=12
	00100110=38
	00101110=46
		*/
	printf("%d^%d=%d\n",a,b,a^b); //XOR ^
	/*
	00001100=12
	00100110=38
	00101010=42
		*/
	printf("~%d=%d\n",a,~a); //NOT ~
	/*
	00001100=12
       >11110011=-13
		*/
	
  return 0;
}
