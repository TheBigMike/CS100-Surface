#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
{
	int quarters,dimes,nickels,pennies,value;
	printf("Input how many quarters, dimes, nickels, and pennies you have, each seperated by a space. Make sure you input the coins in the same order as listed, or else the calculation will be incorrect. \n");
	scanf("%d %d %d %d",&quarters,&dimes,&nickels,&pennies);
	
    value = (quarters*25)+(dimes*10)+(nickels*5)+pennies;
	printf("You have %d cents.",value);
return 0;
}
