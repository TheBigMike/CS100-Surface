#include <stdio.h>

int main( ) {
	int num;
	printf("Enter a number greater than zero : ");
	scanf("%d", &num);
	int a1, a2;
	a1 = num / 5;
	a2 = num % 5;
	printf("%d divided by 5 is %d with a remainder of %d\n", num, a1, a2);
	return 0;
}
