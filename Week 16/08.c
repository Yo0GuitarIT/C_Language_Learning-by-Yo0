#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define SHOW "The Circle' Area = "
#define RESULT r*r*PI

int main(void) {
	int r;
	
	printf("Input thr radius r:");
	scanf("%d",&r);
	printf(SHOW"%f",RESULT);
  return 0;
}
