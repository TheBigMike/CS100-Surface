#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
{
	double miles;
	double numOfTwiz,numOfPacks;
	printf("Input a distance in miles :");
	scanf("%lf",&miles);
	numOfTwiz = (miles*5280*12)/8;
	numOfPacks = numOfTwiz/30;
    printf("To build a string of Twizzlers that long, you would need %.2lf packs of Twizzlers.\n",numOfPacks);
return 0;
}
