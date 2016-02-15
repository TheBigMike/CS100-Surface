//Michael Hall
//This program will take input from the user of how much of certain types of currency they have, and will return the amount of pennies that value is, how much that many pennies would weigh, and the volume of that many pennies.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int getval(char *type)
{
	int num;
	printf("How many %s do you have?  ",type);
	scanf("%d",&num);
	return num;
}

double pennyweight(int x)
{
	double weight = (x*2.5)*(.00220462);
	return weight;
}

double pennyvol(int total)
{
	double vol = ((double)total*(433.235)*(1.0/16387.064)*(1.0/1728)); //totalpennies multiplied by volume of a penny in cubic inches, converted to cubic feet
	return vol;
}

int main(int argc,char **argv)
{
	int twenty,ten,five,one,quarter,dime,nickel,penny;
	double weight,volume;

	twenty = getval("20 dollar bills");
	ten = getval("ten dollar bills");
	five = getval("five dollar bills");
	one = getval("one dollar bills");
	quarter = getval("quarters");
	dime = getval("dimes");
	nickel = getval("nickels");
	penny = getval("pennies");

	int total = (twenty*2000)+(ten*1000)+(five*500)+(one*100)+(quarter*25)+(dime*10)+(nickel*5)+penny;

	weight = pennyweight(total);
	volume = pennyvol(total);

	printf("The total number of pennies for this amount of money is %d.\n",total);
	printf("The total weight of that many pennies is %lf pounds.\n",weight);
	printf("The total volume of that many pennies is %lf cubic feet.\n",volume);


	
	return 0;
}
