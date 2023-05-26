#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	char **star;
	int row,col;

	printf("請輸入列數：");
	scanf("%d",&row);
	printf("請輸入行數：");
	scanf("%d",&col);

	star = (char **)malloc(row*sizeof(char *)); //使用star雙重指標配置一個具有row個元素的一維陣列
	for(int i=0;i<row;i++){
		star[i] = (char *)malloc(col*sizeof(char)); //個別產生一個具有col個元素的一維陣列
		for(int j=0;j<col;j++){
			star[i][j]='*';
		}
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%c",star[i][j]);
		}
		printf("\n");
	}

	
  return 0;
}
