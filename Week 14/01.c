#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	float* piF = (float*)malloc(sizeof(float));

	printf("輸入piF的值：\n");
	scanf("%f",piF);
	printf("piF所指的地址內容為%f\n",*piF);
	printf("piF所指的地址為%p\n",piF);

	free(piF);
  return 0;
}
