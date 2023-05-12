#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *name[6]={"John","David","Kelvin","Lisa","Olivia","Cindy"};

	for(int i=0;i<6;i++){
		printf("name[%d] = %s\n",i,name[i]);
	}
  return 0;
}
