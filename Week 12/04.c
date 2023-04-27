#include <stdio.h>
#include <stdlib.h>

int main(void) {
 	char S1[30],S2[30],S3[60];
	int record=0;

	printf("字串S1的內容：");
	scanf("%s",S1);
	printf("字串S2的內容：");
	scanf("%s",S2);

	for(int count=0;S1[count]!='\0';count++,record++){
		S3[record]=S1[count];
	}

	for(int count=0;S2[count]!='\0';count++,record++){
		S3[record]=S2[count];
	}

	S3[record]+='\0';

	printf("連結後的字串S3:%s",S3);
	printf("\n");
	
  return 0;
}
