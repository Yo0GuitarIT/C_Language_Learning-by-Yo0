#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int data[8]={16,25,39,27,12,8,45,63};
	int temp;

	printf("氣泡排序法：\n原始資料：");
	for(int i=0;i<=7;i++)
		printf("%d ",data[i]);
	
	printf("\n");

	for(int p=7;p>0;p--){
		for(int q=0;q<p;q++){
			if(data[q]>data[q+1]){
				temp = data[q];
				data[q]=data[q+1];
				data[q+1]=temp;
			}
		}
	}

	printf("排序後的結果：");
	for(int i=0;i<=7;i++)
		printf("%d ",data[i]);

	printf("\n");

	
  return 0;
}
