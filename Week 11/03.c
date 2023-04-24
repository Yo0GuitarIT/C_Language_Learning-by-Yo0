#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int length=0;			//用來做計算字串的長度
	char str[30];   //宣告此字串最多儲存30個字元

	printf("請說入字串：");
	scanf("%s",str);
	printf("輸入的字串為：%s\n",str);

	while(str[length]!='\0'){
		length++;
	}
	printf("此字串有%d個英文字元\n",length);
	
  return 0;
}
