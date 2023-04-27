#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num[5]={33,44,55,66,77};

	for(int i=0;i<5;i++){
		printf("Num[%d] 的元素值：%d 位置：%p\n",i,num[i],&num[i]);
	}
  return 0;
}
