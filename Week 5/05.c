#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a=12;

	printf("%d<<%d=%d\n",a,2,a<<2); //左移
/* 
	00001100
	001100xx 
	00110000 <<-補零
 */
	printf("%d>>%d=%d\n",a,2,a>>2); //右移
  /*
      00001100
      xx000011 
      00000011<<-補零
 */
	
	a=-12;
	printf("%d<<%d=%d\n",a,2,a<<2); //左移
	printf("%d>>%d=%d\n",a,2,a>>2); //右移
	
  return 0;
}
