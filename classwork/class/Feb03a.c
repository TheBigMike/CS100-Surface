#include <stdio.h>
#include <string.h>

int main( ) {
	char *str = "University of Alabama";
	int len = strlen(str);
	printf("The string is : %s\n", str);
	printf("The length of str is %d\n", len);

	printf("PART ONE\n");
	char *ptr;
	ptr = str;
	printf("%c\n", *ptr);
	printf("%s\n", ptr);

	printf("PART TWO\n");
	ptr = ptr + 11;
	printf("%c\n", *ptr);
	printf("%s\n", ptr);

	printf("PART THREE\n");
	printf("%c\n", *(ptr+1));
	printf("%c\n", *ptr-10);

	return 0;
}
