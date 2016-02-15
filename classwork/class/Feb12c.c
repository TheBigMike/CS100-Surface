#include <stdio.h>
#include <string.h>

int main( ) {
	char str[] = "University of Alabama";
	char *ptr;
	ptr = str;
	printf("%c and %s\n", *ptr, ptr);

	ptr = strchr(str, 'A');
	printf("%c and %s\n", *ptr, ptr);

	ptr = strchr(str, 'Z');
	printf("%c and %s\n", *ptr, ptr);

	return 0;
}

