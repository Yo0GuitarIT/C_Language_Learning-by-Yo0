#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	void *p = (void *)100; //void *p指標原始值為(void *)型態的值為100
	printf("Adress: %p\n",p);          //(void *)100的地址
	printf("Integer: %d\n",(int *)p);  //將(void *)100以整數型態轉型 輸出值=100
	printf("Character: %c",(char *)p); //將(void *)100以字元型態轉型 輸出值='d'(ASCII)
  return 0;
}
