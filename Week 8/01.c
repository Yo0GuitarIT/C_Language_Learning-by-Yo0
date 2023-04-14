#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int n,i;
	long sum = 0;
	printf("Input an integer number: (1~100)\n");
	scanf("%d",&n);

	if(n>=1 && n<=100){
		for(i=1;i<=n;i++){
			sum+=i;
		}
		printf("Sum is %d.",sum);
	}
	else{
		printf("Out of range!Please input again.");
	}
  return 0;
}
