#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[10];
	int math,english;
};

int main(void) {
	struct student class[3]={
		{"Alen",87,69},
		{"Cindy",77,88},
		{"Olivia",78,70}};

	float math_ave=0,english_ave=0;

	for(int i=0;i<3;i++){
		math_ave+=class[i].math;
		english_ave+=class[i].english;
		printf("Name:%s Math:%d English:%d\n",class[i].name,class[i].math,class[i].english);
	}

	printf("-----------------------");
	printf("Average:\n Math:%4.2f English:%4.2f",math_ave/3,english_ave/3);
  
  return 0;
}
