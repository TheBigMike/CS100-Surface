#include <stdio.h>

int main( ) {
	int num;
	int total;
	printf("Enter the first number : ");
	scanf("%d", &num);
	total = total + num;
	printf("Enter the second number : ");
	scanf("%d", &num);
	total = total + num;
	printf("The total is %d\n", total);
	return 0;
}
