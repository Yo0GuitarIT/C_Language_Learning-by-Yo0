#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float cost=0;

	printf("Input the total cost: ");
	scanf("%f",&cost);

	if(cost>=100000){
		cost = cost*0.85; //滿十萬元打八五折
	}
	else if(cost >=50000){ //滿五萬元打九折
		cost = cost*0.9;
	}
	else{
		cost = cost*0.95;  //未滿五萬元打九五折
	}

	printf("實際消費金額：%.1f\n",cost); //取到小數點後一位
  
  return 0;
}
