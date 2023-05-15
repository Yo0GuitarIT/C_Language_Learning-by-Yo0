#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  	char *name;
	int i;

	printf("請輸入英文字串長度：");
	scanf("%d",&i);

	name = (char *)malloc((i+1)*sizeof(char));
	//i+1 -->'\0'加入字串最後端

	printf("請輸入英文字串：");
	scanf("%s",name);
	strcat(name,"\0");
	printf("-%s-\n",name);

	printf("字串長度：%d\n",strlen(name));
  return 0;
}
