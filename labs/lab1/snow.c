#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
{
	double gallons, snowflakes;
	
	printf("Tell me an amount of water in gallons : ");
	scanf("%lf",&gallons);
	snowflakes = (gallons*3.78*1000000)/3;
	printf("If you believe the internet, that much water could generate %.2lf snowflakes",snowflakes);

return 0;
}
