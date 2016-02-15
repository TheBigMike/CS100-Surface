#include <stdio.h>
#include <string.h>

int main( ) {
	int array1[100];
	int a[5] = {1,2,3,4,5};
	int b[5] = {10,20,30,40,50};
	int array2[100];
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
	printf("\n");

	a[-4] = 99;
	b[8] = 999;
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
	printf("\n");

	char string[10] = "Alabama";
	char str[] = "Hello World";
	char str2[20] = "Roll Tide";

	printf("str is %s\n", str);
	printf("str+6 is %s\n", str+6);
	printf("str+20 is %s\n", str+20);
	printf("\n");
	
	//printf("string is %s\n", string);
	//printf("str2 is %s\n", str2);
	//printf("\n");

	//strcpy(str, "The University of Alabama Crimson Tide");
	//printf("string is %s\n", string);
	//printf("str is %s\n", str);
	//printf("str2 is %s\n", str2);
	return 0;
}
