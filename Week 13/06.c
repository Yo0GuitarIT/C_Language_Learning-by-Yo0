#include <stdio.h>

int main(void) {
  char name[15];
	char *number="Please input your name:";
	printf("%s",number);
	scanf("%s",&name);
	printf("Your name is %s\n",name);
	
  return 0;
}
