#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x=1,sum=1000;

	while(sum>=0){
		sum-=x;
		x+=1;
	}
	printf("x=%d\n",x-1);
  return 0;
}
