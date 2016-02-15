#include <stdio.h>

int main( ) {
	int x[3] = { 101, 234, 999 };
	printf("x contains %d and %d and %d\n", x[0], x[1], x[2]);
	printf("x[0] is stored at memory location %p\n", &x[0]);
	printf("x[1] is stored at memory location %p\n", &x[1]);
	printf("x[2] is stored at memory location %p\n", &x[2]);
	printf("\n");

	int *ptr;		// this is a pointer
	ptr = x;
	printf("x is stored at memory location %p\n", x);
	printf("p1 points to memory location %p\n", ptr);
	printf("p1 is stored at memory location %p\n", &ptr);
	printf("\n");

	*ptr = 37;
	printf("x[0] is now %d\n", x[0]);
	printf("x[0] is now %d\n", *ptr);
	printf("\n");

	ptr = ptr + 2;
	*ptr  = 804;
	printf("x[2] is now %d\n", x[2]);
	printf("x[2] is now %d\n", *ptr);

	return 0;
}
