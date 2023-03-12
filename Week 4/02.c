#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int num = 138;

	printf("num 的八進位數=%o\n",num); 
	//以%o格式化字元輸出
	printf("num 的八進位數=%x\n",num);
	//以%x格式化字元輸出
	printf("num 的八進位數=%X\n",num);
	//以%X格式化字元輸出
	printf("-------------------------------\n");

	float value1 = 123.456;
	float value2 = 1234567.1234;

	printf("value1的f格式輸出= %f\n",value1);
	printf("value1的e格式輸出= %e\n",value1);
	printf("value1的g格式輸出= %g\n",value1);
	printf("-------------------------------\n");
	printf("value2的f格式輸出= %f\n",value2);
	printf("value2的e格式輸出= %e\n",value2);
	printf("value2的g格式輸出= %g\n",value2);

	
	return 0;
}
