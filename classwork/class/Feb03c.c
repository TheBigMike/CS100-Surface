
#include <stdio.h>

int getYards(void);
double yards_to_cm(int);
void printAnswer(int, double);

int main( ) {
	int yards;
	double cm;
	yards = getYards();
	cm = yards_to_cm(yards);
	printAnswer(yards, cm);
	return 0;
}
	
int getYards(void) {
	int value;
	printf("Enter a distance in yards : ");
	scanf("%d", &value);
	return value;
}

double yards_to_cm(int yards) {
	// 36 inches in a yard, 2.54 cm in an inch
	double ans;
	ans = yards * 36 * 2.54;
	return ans;
}

void printAnswer(int num, double ans) {
	printf("%d yards is %lf centimeters\n", num, ans);
	return;
}
