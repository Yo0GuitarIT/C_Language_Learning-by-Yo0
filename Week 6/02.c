#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int value;

	printf("Input one integer number: ");
	scanf("%d",&value);
	if(value%2==0 && value%3==0){           //判斷是否為2和3的倍數
		if(value%5!=0)                  //判斷value是否不為5的倍數
			printf("Conform!");     //單行內容不用{...}
		else
			printf("Not conform! for 5");
	}
	else
		printf("Not cconform all");
  return 0;
}
