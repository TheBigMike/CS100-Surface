#include <stdio.h>

int main( ) {
	FILE *inputData;
	inputData = fopen("myData", "r");

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
	printf("The total value of this change is %d\n", value);

	fclose(inputData);
	return 0;
}
