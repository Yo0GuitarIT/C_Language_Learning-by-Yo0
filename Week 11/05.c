#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  	char str1[40],str2[40];

	printf("請輸入第一個字串：");
	scanf("%s",str1);
	printf("請輸入第二個字串：");
	scanf("%s",str2);

	strcat(str1,str2); //將兩字串聯結
	printf("str1+str2= %s\n",str1);
	
	printf("Reverse-->");
	for(int i=strlen(str1)-1;i>=0;i--){
		printf("%c",str1[i]);
	}
	
  return 0;
}
