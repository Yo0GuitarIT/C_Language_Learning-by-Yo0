#include <stdio.h>
#include <stdlib.h>

int n_degree_rec(int);
int n_degree_loop(int);

int main(void) {
  	int n,a,b;

	printf("請輸入n值：");
	scanf("%d",&n);
	
	a=n_degree_rec(n);
	b=n_degree_loop(n);

	printf("%d!之遞迴版為%d，迴圈版為%d\n",n,a,b);

  return 0;
}

int n_degree_rec(int j){
	if(j==1)
		return 1;
	else
		return j*n_degree_rec(j-1);
}

int n_degree_loop(int i){
	int result = 1;
	do{
		result*=i;
		i--;
	}while(i>0);

	return result;
}
