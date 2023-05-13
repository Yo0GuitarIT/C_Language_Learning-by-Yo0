#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int *grades; //*學生成績陣列指標
	int n,sum=0;   //學生人數,成績總和

	printf("請輸入學生人數：");
	scanf("%d",&n);
	grades=(int *)malloc(n*sizeof(int));
	//將指標grades指向動態配置記憶空間

	printf("共有%d位學生\n\n",n);
	for(int i=0;i<n;i++){
		printf("請輸入第%d學生成績：",i+1);
    		scanf("%d",&grades[i]);
    		sum+=grades[i];
	}

  	printf("==座號==學生成績==\n");
	for(int j=0;j<n;j++){
		printf("%4d    %4d\n",j+1,grades[j]);
	}
	
	printf("====================\n");
	printf("共有%d位學生，平均成績為%.2f\n",n,(float)sum/(float)n);
  
  	free(grades);

  return 0;
}
