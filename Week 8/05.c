#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i,sum = 0;
	for(i=1;i<=200;i=i+2){
		if(i==101)
			break;
		sum += i;
	}
	
	printf("1~99的奇數和＝%d",sum);
  return 0;
}
