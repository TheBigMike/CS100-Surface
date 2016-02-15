#include <stdio.h>

void increment(int);	// increment the variable passed to the function by one
void decrement(int);	// decrement the variable passed to the function by one
void square(double);	// square the variable passed to the function

int main( ) {
	int a = 25, b = 37;
	printf("a is %d and b is %d\n", a, b);
	printf("incrementing a\n");
	increment(a);
	printf("a is %d and b is %d\n", a, b);
	printf("incrementing a\n");
	increment(a);
	printf("decrementing b\n");
	decrement(b);
	printf("a is %d and b is %d\n", a, b);
	double c = 2.718;
	printf("c is %lf\n", c);
	printf("squaring c\n");
	square(c);
	printf("c is %lf\n", c);
	return 0;
}

void increment(int num) {
	num = num + 1;
	return;
}

void decrement(int value) {
	value = value - 1;
	return;
} 

void square(double var) {
	var = var * var;
	return;
}
















/*

#include <stdio.h>

void increment(int *);	// increment the variable passed to the function by one
void decrement(int *);	// decrement the variable passed to the function by one
void square(double *);	// square the variable passed to the function

int main( ) {
	int a = 25, b = 37;
	printf("a is %d and b is %d\n", a, b);
	printf("incrementing a\n");
	increment( &a );
	printf("a is %d and b is %d\n", a, b);
	printf("incrementing a\n");
	increment( &a );
	printf("decrementing b\n");
	decrement( &b );
	printf("a is %d and b is %d\n", a, b);
	double c = 2.718;
	printf("c is %lf\n", c);
	printf("squaring c\n");
	square( &c );
	printf("c is %lf\n", c);
	return 0;
}

void increment(int *num) {
	*num = *num + 1;
	return;
}

void decrement(int *value) {
	*value = *value - 1;
	return;
} 

void square(double *var) {
	*var = *var * *var;
	return;
}
*/
