#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float fo = 234.567;

	printf("fo=%f\n",fo);
	printf("fo=%.2f\n",fo); //精度設定為.2
	printf("fo=%.3f\n",fo); //精度設定為.３
	printf("fo=%.5f\n",fo); //精度設定值大於原本的小數位數
	printf("fo=%8.2f\n",fo); //８表示預留８個字元寬度
	
	return 0;
}
