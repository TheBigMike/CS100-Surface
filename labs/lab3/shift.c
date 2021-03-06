#include <stdio.h>

void shiftLeft(int *x, int *y, int *z)
{
    int temp=*x;
    *x=*y;
    *y=*z;
    *z=temp;
    return;
}

void shiftRight(int *x, int *y, int *z)
{
    int temp=*z;
    *z=*y;
    *y=*x;
    *x=temp;
    return;
}

int main( ) {
	int a = 5, b = 10, c = 15;
	printf("%d and %d and %d\n", a, b, c);	// should print 5 and 10 and 15
	shiftLeft(&a, &b, &c);
	printf("%d and %d and %d\n", a, b, c);	// should print 10 and 15 and 5
	shiftLeft(&a, &b, &c);
	printf("%d and %d and %d\n", a, b, c);	// should print 15 and 5 and 10
	shiftLeft(&a, &b, &c);
	printf("%d and %d and %d\n", a, b, c);	// should print 5 and 10 and 15

	int x = 1, y = 2, z = 3;
	printf("%d and %d and %d\n", x, y, z);	// should print 1 and 2 and 3
	shiftRight(&x, &y, &z);
	printf("%d and %d and %d\n", x, y, z);	// should print 3 and 1 and 2
	shiftRight(&x, &y, &z);
	printf("%d and %d and %d\n", x, y, z);	// should print 2 and 3 and 1
	shiftRight(&x, &y, &z);
	printf("%d and %d and %d\n", x, y, z);	// should print 1 and 2 and 3
	return 0;
}
