#include <stdio.h>

int main ( ) {
	int miles = 5;
	int answer;
	answer = miles * 5280 * 12;
	printf("%d miles is %d inches\n", miles, answer);
	return 0;
}
