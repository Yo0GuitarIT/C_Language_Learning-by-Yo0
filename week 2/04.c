//用define定義常數
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159 
//宣告PI = 3.14159

int main(void) {
  	float radius=5.0,Area;	//宣告與設定圓半徑
	Area = radius*radius*PI; //計算圓面積

	printf("圓的半徑 = %f\n面積 = %f\n",radius,Area);
  
	return 0;
}
