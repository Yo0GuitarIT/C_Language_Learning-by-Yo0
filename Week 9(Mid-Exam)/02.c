#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char area[3],tel[8];

	printf("請入市話號碼(9碼,含區碼):");
	scanf("%2s%7s",area,tel);

	printf("區碼：%s\n",area);
	printf("市話號碼：%s",tel);

  return 0;
}
