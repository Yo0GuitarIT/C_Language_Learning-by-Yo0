#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *ptr,no=10; //宣告整數型態指標ptr和變數no
	ptr=&no;     //初始化指標  

	printf("最初的位置：%p *ptr=%d\n",ptr,*ptr); //*ptr=no
	
	ptr++;
	printf("ptr++後的位置：%p *ptr=%d\n",ptr,*ptr);
	
	ptr--;
	printf("ptr--後的位置：%p *ptr=%d\n",ptr,*ptr);

	ptr+=2; //ptr = ptr+2
	printf("ptr+=2後的位置：%p *ptr=%d\n",ptr,*ptr);

	ptr-=2;
	printf("ptr-=2後的位置：%p *ptr=%d\n",ptr,*ptr);
  return 0;
}
