 #include <stdio.h>
#include <stdlib.h>

struct rectangle{
		float length;
		float *width;
	};

int main(void) {
	struct rectangle rec;
	struct rectangle *rec1;

	float w;
	
	rec.length=3.5;
	printf("請輸入寬度：");
	scanf("%f",&w);
	rec.width=&w;
	rec1=&rec;
	printf("面積=%.2f\n",rec.length*(*rec1->width));
	

  return 0;
}
