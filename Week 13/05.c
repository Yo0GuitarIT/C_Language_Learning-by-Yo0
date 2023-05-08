#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int no[2][4]={{312,15,65,35},
	              {52,111,77,80}};

	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			printf("&no[%d][%d] = %p\n*(no+%d)+%d = %p\n",i,j,&no[i][j],i,j,*(no+i)+j);
			printf("*(*(no+%d)+%d) = %d\n",i,j,*(*(no+i)+j));
			printf("===========================\n");
		}
	}
  return 0;
}
