#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//四種字串宣告 與 初始值設定模式
  char str_1[6]="Hello";
	char str_2[]={'H','e','l','l','o','\0'};
	char str_3[]="hello";
	char str_4[]={'H','e','l','l','o','!'};

	printf("%s\n",str_1);
	printf("%s\n",str_2);
	printf("%s\n",str_3);
	printf("%s\n",str_4);
  return 0;
}
