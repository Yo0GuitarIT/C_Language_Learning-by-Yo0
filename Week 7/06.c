#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int a,b;
	for(a=1;a<=9;a++){
		for(b=1;b<=a;b++){
		if(b==6)
			continue;
		//printf("%d",b);
		printf(" * ");	
		}
		printf("\n");
	}
  return 0;
}
