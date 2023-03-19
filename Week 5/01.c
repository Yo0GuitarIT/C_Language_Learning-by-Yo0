#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int a =125;

	//125對4,5,6的餘數運算
	printf("%d%%4=%d\n",a,a%4); //輸出１２５％４
	printf("%d%%5=%d\n",a,a%5);
	printf("%d%%6=%d\n",a,a%6);
  
	return 0;
}
