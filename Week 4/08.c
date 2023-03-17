#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int first,last;

	printf("請輸入九個數字:");
	scanf("%4d%5d",&first,&last);

	printf("First num = %d\n",first);
	printf("Second num = %d\n",last);
	printf("sum = %d",first+last);

	printf("---------------------\n");

	char name1[10],name2[10],name3[10];
	printf("input a string:");
	scanf("%s",name1);
	printf("input two string:");
	scanf("%s%s",name2,name3); //按下Space做間隔

	printf("name1=%s\n",name1);
	printf("name2=%s\n",name2);
	printf("name3=%s\n",name3);
	
	

  return 0;
}
