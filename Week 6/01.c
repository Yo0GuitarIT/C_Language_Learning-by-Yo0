#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int t,total;
	printf("Parking ==> 40NTD/hr\n");
	printf("Please input the time you take:");
	scanf("%d",&t);

	if(t>=1){
		total = 40*t;
		printf("You park %d hour(s),total is %d",t,total);
	}
	
  return 0;
}
