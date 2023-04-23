#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int physical,chemical;
	char chr_pass;

	printf("Input Ｐhysical & Chemical score:");
	scanf("%d%d",&physical,&chemical);
	printf("Physical is %d, Chemical is %d\n",physical,chemical);

	chr_pass = (physical >= 60 && chemical >= 60)?'Y':'N';  
	
	printf("Pass or not?\n%c",chr_pass);
	
  return 0;
}
