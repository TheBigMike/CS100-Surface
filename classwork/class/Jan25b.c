#include <stdio.h>

int main ( ) {
	int x;
	double y;
	printf("Enter an integer : ");
	scanf("%d", &x);
	printf("Enter a double : ");
	scanf("%lf", &y);
	printf("You entered %d and %lf\n", x, y);
	return 0;
}
