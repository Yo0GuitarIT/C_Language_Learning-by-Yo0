#include <stdio.h>
#include <stdlib.h>

int mymax(int,int); //函數原形宣告

int main(void) {
  	int a,b;
	printf("數字比大小\n");
	
	printf("數字請輸入a:");
	scanf("%d",&a);
	printf("數字請輸入b:");
	scanf("%d",&b);

	printf("較大的數：%d",mymax(a,b)); //呼叫mymax()函數
	
  return 0;
}

int mymax(int x,int y){   //函數定義主體
		if(x>y)
			return x;
		else
			return y;
	}
