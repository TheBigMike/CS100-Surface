#include <stdio.h>

int main( ) {
	int count = 1000000;		// assume there are 1,000,000 M&Ms 
	double mm_weight = 0.9147;	// mean weight for an M&M
	double answer;
	answer = count * mm_weight;	// total weight (in grams) for M&Ms
	answer = answer / 453.592;	// 453.592 grams in one pound
	printf("One million M&Ms weighs %lf pounds\n", answer);
	return 0;
}
