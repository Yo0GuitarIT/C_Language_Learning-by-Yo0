#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int val = 345;

	printf("%%d 格式輸出結果=%d\n",val);
	printf("+6d 格式輸出結果=%+6d\n",val);
	printf("-6d 格式輸出結果=%-6d\n",val);
	printf("+#6o 格式輸出結果=%+#6o\n",val);
	printf("+#6x 格式輸出結果=%+#6x\n",val);
	printf("06d 格式輸出結果=%06d\n",val);
  return 0;
}
