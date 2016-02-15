#include <stdio.h>

int getDistance(void);
double calculateTwizzlers(int);
void printResults(int, double);

int main( ) {
	int miles = getDistance();
	double twizzler = calculateTwizzlers(miles);
	printResults(miles, twizzler);
	return 0;
}

int getDistance(void) {
	int dist;
	printf("Enter the number of miles to cover : ");
	scanf("%d", &dist);
	return dist;
}

double calculateTwizzlers(int m) {
	int answer;
	answer = m * 5280. * 12.;	// convert miles to inches
	answer = answer / 8.0;		// each twizzler is 8 inches
	answer = answer / 30.0;		// a pack has 30 twizzlers
	return answer;
}

void printResults(int miles, double packages) {
	printf("It takes %lf packages of twizzlers to go %d miles\n", packages, miles);
	return;
}
