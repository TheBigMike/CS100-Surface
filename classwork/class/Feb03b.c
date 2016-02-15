#include <stdio.h>

double yards_to_cm(int);

int main( ) {
	printf("Enter a distance in yards : ");
	int yards;
	scanf("%d", &yards);
	double cm;
	cm = yards_to_cm(yards);
	printf("%d yards is %lf centimeters\n", yards, cm);
	return 0;
}
	
double yards_to_cm(int wilma) {
	// 36 inches in a yard, 2.54 cm in an inch
	double ans;
	ans = wilma * 36 * 2.54;
	wilma = 3149;
	return ans;
}
