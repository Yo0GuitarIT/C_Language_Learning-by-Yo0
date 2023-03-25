#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int math,physical;
	char chr_pass;

	printf("Input math & physical score:");
	scanf("%d%d",&math,&physical);
	printf("Math is %d, Physical is %d.\n",math,physical);

	chr_pass = (math >= 60 && physical >= 60)?'Y':'N';  
	//(...)內為條件式,符合時chr_pass儲存'Y',不符合時儲存'N'
	//印出chr_pass變數內容，顯示該考生是否及格
	printf("Pass or not? %c\n",chr_pass);
	
  return 0;
}
