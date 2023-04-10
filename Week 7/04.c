#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int input = 0;
	int replay = 0;

  do {
    
		puts("Input integer:");
    scanf("%d", &input);

    printf("Is the number is odd? ");
    printf("%c\n", ((input % 2) ? 'Y' : 'N'));

    printf("(Press 1-->Continue 0-->End)?\n");
    scanf("%d", &replay);
    printf("\n");
  } while (replay != 0);

  return 0;
}
