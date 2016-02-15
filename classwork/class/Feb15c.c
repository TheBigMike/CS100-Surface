#include <stdio.h>

int main(int argc, char *argv[]) {
	FILE *inputData;
	inputData = fopen(argv[1], "r");

	int quarter, dime, nickel, penny;
	int value = 0;

	fscanf(inputData, "%d", &quarter);
	value = value + quarter * 25;
	fscanf(inputData, "%d", &dime);
	value = value + dime * 10;
	fscanf(inputData, "%d", &nickel);
	value = value + nickel * 5;
	fscanf(inputData, "%d", &penny);
	value = value + penny;

	FILE *results;
	results = fopen(argv[2], "w");
	fprintf(results, "The total value of this change is %d\n", value);

	fclose(inputData);
	fclose(results);

	return 0;
}
