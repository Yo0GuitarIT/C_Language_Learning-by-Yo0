//變數的可視範圍

#include <stdio.h>
#include <stdlib.h>

int salary = 34500; //宣告salary為全域變數

int main(void) {
  printf("salary = %d\n",salary);
	{
		int salary = 60000;
		printf("salary = %d\n",salary);
	}
	printf("salary = %d\n",salary);

	return 0;
}
