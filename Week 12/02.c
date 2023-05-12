#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	char name[4][10]={"\0","Ann","Olivia","Jackson"}; //第一項放入會有bug
	char score[3][3];
	int total; 

	for(int i=0;i<3;i++){
		printf("請輸入%s的三科成績：",name[i+1]);
		scanf("%d %d %d",&score[i][0],&score[i][1],&score[i][2]);
	}

	printf("===================================\n");

	for(int j=0;j<3;j++){
		total = 0;
		printf("%s\t%d\t%d\t%d\t",name[j+1],score[j][0],score[j][1],score[j][2]);
		total = score[j][0] + score[j][1] + score[j][2];
		printf("總分: %d\n",total);
	}

	printf("===================================\n");
	
  return 0;
}
