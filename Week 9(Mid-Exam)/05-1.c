#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("請輸入一個整數 n：");
    scanf("%d", &n);
    printf("所有質數：\n");
	
    for (int i = 2; i <= n; i++) {
			int is_prime = 1;
      int j = 2;
			
      while (j <= i / j) {
				if (i % j == 0) {
					is_prime = 0;
					break;
				}
				j++;
			}  
      
			if (is_prime == 1) {
				printf("%d ", i);
			}
    }
    printf("\n");

    return 0;
}
