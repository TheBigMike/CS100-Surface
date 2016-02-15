#include <stdio.h>

int main( ) {
	int inches;
	printf("Enter the number of inches : ");
	scanf("%d", &inches);
	double feet;
	feet = (double) inches / 12.0;
	printf("%d inches is %lf feet\n", inches, feet);
	return 0;
}
