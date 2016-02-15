#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	if (argc != 3) {
		printf("Usage: ./a.out num1 num2\n");
		exit(1);
	}



	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	double ans = (double) (x+y) / 2.0;
	printf("The average of %d and %d is %lf\n", x, y, ans);
	return 0;
}
