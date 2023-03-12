#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char area[4],tel[9];

	printf("請入電話號碼(10碼,含區碼):");
	scanf("%3s%7s",area,tel);

	printf("區碼：%s\n",area);
	printf("電話號碼：%s",tel);


	
  return 0;
}
