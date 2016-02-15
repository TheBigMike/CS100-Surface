#include <stdio.h>
#include <string.h>

int main( ) {
	//char str[20];
	//str[0] = 'T';
	//str[1] = 'i';
	//str[2] = 'd';
	//str[3] = 'e';
	//str[4] = '\0';

	//char str[30];
	//strcpy(str, "University of Alabama");

	char str[] = "University of Alabama";

	int len = strlen(str);
	printf("%s has a length of %d\n", str, len);
	printf("the first char is %c and the last is %c\n", str[0], str[len-1]);
	return 0;
}
