#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if (argc != 6) {
		printf("Usage: ./a.out n1 n2 n3 n4 n5\n");
		exit(1);
	}
	int smallest;
	int data[5];
	data[0] = atoi(argv[1]);
	smallest = data[0];
	data[1] = atoi(argv[2]);
	if (data[1] < smallest)
		smallest = data[1];
	data[2] = atoi(argv[3]);
	if (data[2] < smallest)
		smallest = data[2];
	data[3] = atoi(argv[4]);
	if (data[3] < smallest)
		smallest = data[3];
	data[4] = atoi(argv[5]);
	if (data[4] < smallest)
		smallest = data[4];

	printf("The five values are %d %d %d %d and %d\n",
		data[0], data[1], data[2], data[3], data[4]);
	printf("The smallest value is %d\n", smallest);
	return 0;
}
	

