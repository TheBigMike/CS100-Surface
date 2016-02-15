#include <stdio.h>

void getData(int *);
double findAvg(int *);

int main( ) {
	int values[5];
	// remember that the name of an array is the address of where the array starts
	getData(values);
	double avg = findAvg(values);
	printf("The average of these numbers is %lf\n", avg);
	return 0;
}

void getData(int *array) {
	printf("Enter the first value : ");
	// the following also works
	scanf("%d", array);
	printf("Enter the second value : ");
	scanf("%d", array+1);
	printf("Enter the third value : ");
	scanf("%d", array+2);
	printf("Enter the fourth value : ");
	scanf("%d", array+3);
	printf("Enter the fifth value : ");
	scanf("%d", array+4);
	return;
	//scanf("%d", &array[0]);
	//scanf("%d", &array[1]);
	//scanf("%d", &array[2]);
	//scanf("%d", &array[3]);
	//scanf("%d", &array[4]);
}

double findAvg(int *data) {
	double result;
	result = data[0] + data[1] + data[2] + data[3] + data[4];
	// the following also works
	// result = *data + *(data+1) + *(data+2) + *(data+3) + *(data+4);
	result = result / 5.0;
	return result;
}
