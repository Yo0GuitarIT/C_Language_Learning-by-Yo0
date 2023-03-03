#include<stdio.h> //呼叫標準輸出入函數
#include<stdlib.h> //呼叫標準基本函數庫


int main (void) //主程式開始的位置
{
	int num; // 宣告 num 為整數
	num = 150; //放入 num 值為 300

	printf("There are %d pandas in Taipei zoo.\n",num); 

/*
在終端機顯示“There are 300 pandas in Taipei zoo.”
%d 表示以十進位整數格式來輸出num值
*/
		
	//system("pause")
	return 0;
	}//不用加上;
