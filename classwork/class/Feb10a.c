#include <stdio.h>

int main( ) {
	int x, y, z;
	printf("Enter a number : ");
	scanf("%d", &x);
	printf("Enter another number : ");
	scanf("%d", &y);
	printf("Enter one last number : ");
	scanf("%d", &z);


	if (x > y) {
		if (x > z) {
			printf("The largest number was %d\n", x);
		}
		else {
			printf("The largest number was %d\n", z);
		}
	}
	else {
		if (y > z) {
			printf("The largest number was %d\n", y);
		}
		else {
			printf("The largest number was %d\n", z);
		}
	}
	return 0;
}


