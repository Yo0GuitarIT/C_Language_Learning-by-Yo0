#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[][5],int,int);
//函數圓形宣告，一維可以省略，其他維數的標註必須定義清楚

int main(void) {
  	int score_arr[][5]={{19,69,73,90,45},{81,42,53,64,55}};
	//宣告並初始化二維陣列
	
	print_arr(score_arr,2,5); //傳址呼叫並傳遞二維陣列

  return 0;
}

void print_arr(int arr[][5],int x,int y){
	for(int i=0;i<x;i++){
		for(int j =0;j<y;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
