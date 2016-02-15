
#include <stdio.h>

int findMax(int, int, int);

int main( ) {
	int x, y, z;
	printf("Enter a number : ");
	scanf("%d", &x);
	printf("Enter another number : ");
	scanf("%d", &y);
	printf("Enter one last number : ");
	scanf("%d", &z);

	int max = findMax(x, y, z);
	printf("The maximum value entered was %d\n", max);

	return 0;
}
		
	
int findMax(int a, int b, int c) {
	if (a > b)
		if (a > c)
			return a;
		else
			return c;
	else
		if (b > c)
			return b;
		else
			return c;
}
