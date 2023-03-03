#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char ch1 = 'a'; //宣告ch1為字元變數
	char ch2[] = "a"; //宣告ch2為字串變數

	printf("ch1=%c 有%d位元\n",ch1,sizeof(ch1)); //輸出ch1的值及所佔的位元數
	printf("ch2=%s 有%d位元\n",ch2,sizeof(ch2));
  return 0;
}
