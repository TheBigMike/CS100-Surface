#include <stdio.h>

int main(int foo, char *bar[]) {

	printf("%d\n", foo);

	printf("bar[0] is %s\n", bar[0]);
	printf("bar[1] is %s\n", bar[1]);
	printf("bar[2] is %s\n", bar[2]);
	printf("bar[3] is %s\n", bar[3]);

	return 0;
}
