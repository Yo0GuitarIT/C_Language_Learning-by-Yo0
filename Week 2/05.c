//用const定義常數

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const int salary = 34500; //宣告salary為常數
  	printf("salary = %d\n",salary);
	{
		const int salary = 13500; //在此程式區塊中宣告salary為常數
		printf("salary = %d\n",salary);
	}

	printf("salary = %d\n",salary);
	
  return 0;
}
