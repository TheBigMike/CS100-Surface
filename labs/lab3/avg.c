#include <stdio.h>

int getNumber(char *x)
{
int y;
printf("Please enter the %s number :",x);
scanf("%d",&y);
return y;
}

int main( ) {
	int x = getNumber("first");
	int y = getNumber("second");
	int z = getNumber("third");
	int sum = x + y + z;
	double avg = sum / 3.0;
	printf("\nThe average of these three numbers is %lf\n", avg);
	return 0;
}
