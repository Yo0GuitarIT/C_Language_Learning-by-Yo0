#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int n,prime;
	int counter = 0;

	printf("Input a number: ");
	scanf("%d",&n);
	printf("n=%d\n",n);
	printf("prime is ");

	for(int i=2;i<=n;i++){
		for(int j=2;j<=i;j++){
			if(i%j==0)
				counter+=1;
		}
		if(counter==1){
			prime=i;
			printf("%d ",prime);
			counter=0;
		}
		else{
			counter=0;
		}
	}
  return 0;
}
