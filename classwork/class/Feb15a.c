#include <stdio.h>
#include <string.h>

int main( ) {
	printf("One last look at true and false\n");

	char s1[] = "Alabama";
	char s2[] = "Auburn";

	printf("%s\n", s1);
	printf("%20s\n", s1);
	printf("%-30s%s\n", s1, s2);

	printf("Test One\n");
	if ( strcmp(s1, s2) == 0 ) 
		printf("\tProblems - Alabama and Auburn are the same\n");
	else
		printf("\tGood - Alabama is not the same as Auburn\n");

	printf("Test Two\n");
	if ( strcmp(s1, s1) )
		printf("\tProblems - Alabama should be the same as Alabama\n");
	else
		printf("\tGood - Alabama is Alabama\n");

	printf("Test Three\n");
	if ( ! strcmp(s1, s1) )
		printf("\tGood - these strings are the same\n");
	else
		printf("\tProblems - these strings should have been the same\n");

	int a = 5;
	printf("Test Four\n");
	if ( a ) 
		printf("\tGood - a is not zero, which means true\n");
	else
		printf("\tProblems - a is not a zero value, should be true\n");

	a = 0;
	printf("Test Five\n");
	if ( a ) 
		printf("\tProblems - a is zero, which should be false\n");
	else
		printf("\tGood - a is zero, which means false\n");

	// THINGS THAT GET YOU IN TROUBLE
	a = 111;
	printf("Test Six\n");
	if ( a = 7 ) 
		printf("\tGood - this works, assigns a to 7 (which is non-zero)\n");
	else
		printf("\tProblems - assigned a value of 7 to a, which was true\n");

	a = 111;
	printf("Test Seven\n");
	if ( a = 0 ) 
		printf("\tProblems - this assigns a to 0 (which is false)\n");
	else
		printf("\tGood - assigned a value of 0 to a, which means false\n");

	return 0;
}
		
