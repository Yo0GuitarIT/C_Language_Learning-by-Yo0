#include <stdio.h>
#include <stdlib.h>

int a=20;
int b=50; //全域變數

void func();

int main(void) {
  int a=10; //區域變數
	
	printf("主程式中,a=%d b=%d\n",a,b);
	func();

  return 0;
}

void func(){
	int a=30; //區域變數
	printf("func()中,a=%d,b=%d\n",a,b);
}
