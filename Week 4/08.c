#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int first,last;

	printf("請輸入九個數字:");
	scanf("%4d%5d",&first,&last);

	printf("First num = %d\n",first);
	printf("Second num = %d\n",last);
	printf("sum = %d",first+last);

  return 0;
}
