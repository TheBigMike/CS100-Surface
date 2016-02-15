#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
	int change;
	int quarters,dimes,nickels,pennies;
	printf("How much change do you have in cents? \n");
	scanf("%d",&change);
	quarters = change/25;
	change = change%25;
	dimes = change/10;
	change = change%10;
	nickels = change/5;
	change = change%5;
	pennies = change;
	printf("The amount of change that you input is equal to %d quarters, %d dimes, %d nickels, and %d pennies.\n",quarters,dimes,nickels,pennies);

	
return 0;
    }
