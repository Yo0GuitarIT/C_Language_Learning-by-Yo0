#include <stdio.h>
#include <stdlib.h>
int* add_value();

int main() {
	int *ptr;
	ptr = add_value(); //呼叫add_value函數，並傳值給ptr指標變數;
	printf("*ptr=%d\n",*ptr);
  return 0;
}

int* add_value(){
	int *x;
	int i1,i2;
	
	x=&i1;
	
	printf("請輸入兩個整數：\n");
	scanf("%d%d",&i1,&i2);
	i1=i1+i2; //兩數相加
	
	return x;
}
