#include <stdio.h>

int main( ) {
	printf("Enter an even number : ");
	int num;
	scanf("%d", &num);
	if ( num %2 == 0 ) {
		printf("thank you\n");
	}
	else {
		printf("That number is not even\n");
	}
	return 0;
}
