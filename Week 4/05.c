#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char name[]="Applepine";

	printf("name=%s\n",name);
	printf("name=%.2s\n",name);
	printf("name=%.5s\n",name);
	printf("name=%.10s\n",name);
	printf("name=%12.10s",name); //預留１２個字元寬度
  return 0;
}
