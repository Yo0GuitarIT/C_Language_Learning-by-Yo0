#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415926

int main(void) {
  double (*pF)(double);
	
	pF=sin; //將sin函數的位置指向pF
	printf("%f\n",pF(PI/2));
	
	pF=cos; //將cos函數的位置指向pF
	printf("%f\n",pF(PI));
  return 0;
}
