#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
  float f1,f2;

	scanf("%f%f",&f1,&f2); //用空白間隔兩數
	printf("%f\n",f1+f2);
  
	printf("---------------------\n");
	int n1,n2;

	printf("n1:");
	scanf("%d",&n1);
	printf("n1=%d\n",n1);

	printf("n2:");
	scanf("%d",&n2);
	printf("n2=%d\n",n2);

	return 0;
}
