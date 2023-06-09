#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct product{
	char name[10];
	int price; 
	int amount;
};

int main(void) {
  struct product *list;
	list = (struct product *)malloc(sizeof(struct product));  
	
	printf("Name:");
	scanf("%s",(*list).name);
	printf("Price:");
	scanf("%d",&list->price);
	printf("Amount:");
	scanf("%d",&list->amount);
	printf("==============\n");
	printf("Name Price Amount\n");
	printf("%s %d %d",list->name,list->price,list->amount);
	
	return 0;
}
