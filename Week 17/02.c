#include <stdio.h>
#include <stdlib.h>

struct book{
		char title[30];
		int price;
	};

int main(void) {
	struct book m1,m2;
	struct book *ptr;
	
	printf("Book1:");
	scanf("%s",&m1.title);
	printf("Price:");
	scanf("%d",&m1.price);

	printf("Book2:");
	scanf("%s",&m2.title);
	printf("Price:");
	scanf("%d",&m2.price);
	printf("-----------------\n");

	ptr = &m1;
	printf("第一種結構指標存取方式：\n");
	printf("Book1 Name: %s\n",(*ptr).title);
	printf("Book1 Price: %d\n",(*ptr).price);
	ptr = &m2;
	printf("第二種結構指標存取方式：\n");
	printf("Book1 Name: %s\n",ptr->title);
	printf("Book1 Price: %d\n",ptr->price);
	
  return 0;
}
