#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[4][3][3]={{{1,-2,3},{4,5,-6},{8,9,2}},
										{{7,-8,9},{10,11,12},{-8,3,2}},
										{{-13,14,15},{16,17,18},{3,6,7}},
										{{19,20,21},{-22,23,24},{-6,9,12}}};
	int sum = 0;

	
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				sum+=arr[i][j][k];
				if(arr[i][j][k]<0){
					arr[i][j][k]=0;
				}
				printf("%d\t",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	printf("原陣列的所以元素總和=%d",sum);
	
  return 0;
}
