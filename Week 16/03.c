#include <stdio.h>
#include <stdlib.h>

void mutiple(int arr[],int);  //函數mutiple()原型宣吿

int main(void) {
  int array[6]={1,2,3,4,5,6};
	int n =6;

	printf("呼叫mutiple()函數前，array[6]=");
	for(int i=0;i<n;i++){
		printf("%d   ",array[i]);
	}

	printf("\n\n");
	mutiple(array, n);

	printf("呼叫mutiple()函數後，array[6]=");
	for(int i=0;i<n;i++){
		printf("%d   ",array[i]);
	}
  return 0;
}

void mutiple(int arr[],int k){
	for(int i=0;i<k;i++){
		arr[i]*=10;
	}
}
