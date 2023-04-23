#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int score[5]={87,66,90,65,70}; //定義整數陣列並設定5筆成績
	float total = 0;

	for(int i=0;i<5;i++){ 
		printf("第%d位同學的成績分數: %d\n",i+1,score[i]);
		total += score[i];
	}
	//使用for迴圈輸出

	printf("------------------------------------\n");
	printf("總分: %.1f ,平均: %.1f\n",total,total/5);
	//輸出總分及平均
	
  return 0;
}
