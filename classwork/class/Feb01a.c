#include <stdio.h>

int main( ) {
	int a = 50;
	int b = 100;
	int c = 150;
	int d[8] = { 10, 20, 30, 40, 50, 60, 70, 80 };

	// declare a "int *" (pointer to an int) variable ptr
	int *ptr;

	// point ptr to the variable a, then print out that value
	ptr = &a;
	printf("%d and %d\n", a, *ptr);

	// change the value of a to 92 (using the pointer) and then print it
	*ptr = 92;
	printf("%d and  %d\n", a, *ptr);

	// point ptr to b and print that value
	ptr = &b;
	printf("%d and %d\n", b, *ptr);

	// change the value at b to 87 and print it again
	*ptr = 87;
	printf("%d and %d\n", b, *ptr);

	// point ptr to c and print that value
	ptr = &c;
	printf("%d and %d\n", c, *ptr);

	// change the value at c to 103 and print it again
	*ptr = 103;
	printf("%d and %d\n", c, *ptr);

	// point ptr to the array d (first element), print the first element
	ptr = d;
	printf("%d and %d\n", d[0], *ptr);

	// increment ptr by 2 and print the value it now references
	ptr = ptr + 2;
	printf("%d\n", *ptr);

	// increment ptr by 4 and print the value it now references
	ptr = ptr + 4;
	printf("%d\n", *ptr);
	
	return 0;
}
