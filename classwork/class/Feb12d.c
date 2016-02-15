#include <stdio.h>
#include <string.h>

int main( ) {
	char str1[] = "Cniversity of Alabama";
	char str2[] = "Crimson Tide";

	int num1 = strcmp(str1, str2);
	int num2 = strcmp(str2, str1);
	int num3 = strcmp(str1, str1);

	printf("%d and %d and %d\n", num1, num2, num3);

	//if ( ! strcmp(str2,str2) )
	//	printf("This is the same string\n");

	return 0;
}

