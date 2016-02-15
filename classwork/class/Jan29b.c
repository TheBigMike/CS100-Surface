#include <stdio.h>

int main( ) {
	// declare an array A that holds five integers
	// assign the values 10, 20, 30, 40, 50 to A
	int A[5] = { 10, 20, 30, 40, 50 };


	// print each of the values in A

	// add 5 to the first and last values in A, print them again

	// declare an array B that holds three doubles

	// assign the values 1.1, 2,2, 3.3 to B

	// print each of the values in B

	// subtract 2 from the middle value in B, print it again

	// declare an array C that holds the string "IBM"

	char C[] = "IBM";
	// print the first and last items in C
	printf("%c and %c\n", C[0], C[2]);
	// print the array C as a string
	printf("%s\n", C);
	// change the first item in C to 'Z' and print C again
	C[0] = 'Z';
	printf("%s\n", C);

	return 0;
}
