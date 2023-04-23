#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int sum = 0;

	for(int i=0;i<10;i++){
		if(i==0)
			printf(" "); //i=0時 輸出空格
		else
			printf("+"); //i!=0時 輸出"+"
		
		sum += arr[i]; //將陣列中每元素加到sum
		
		printf("%d=%d\n",arr[i],sum);
	}
	
  return 0;
}
