#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int no1,no2; //宣告整數變數 no1 no2
	float f1 = 456.78,f2=888.333; //宣告浮點數f1 f2

	no1 = (int)f1; //整數強制型態轉換
	no2 = (int)f2;

	printf("no1=%d, no2=%d, f1=%f, f2=%f \n",no1,no2,f1,f2);
  return 0;
}
