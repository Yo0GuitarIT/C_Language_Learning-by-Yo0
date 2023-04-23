#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int sale[3][6]={
		{123,76,95,120,98,68},
	  {90,120,88,112,108,120},
		{108,99,126,90,76,98}};

	int sum = 0;

	printf("*****數位資訊公司業務統計表*****\n");
	printf("----------------------------------\n");

	for(int i=0;i<3;i++){
		sum=0;
		for(int j=0;j<6;j++){
			sum+=sale[i][j]; //計算每個業務員半年的業績金額
		}
		printf("銷售員%d的前半年銷售總獎金為 %d\n",i+1,sum);
	}

	printf("\n");

	for(int m=0;m<6;m++){
		sum=0;
		for(int n=0;n<3;n++){
		sum+=sale[n][m]; //計算三個業務員每個月的業績
		}
		printf("%d月份，三個業務員的業績總額為 %d\n",m+1,sum);
	}
  return 0;
}
