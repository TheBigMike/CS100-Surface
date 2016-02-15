#include <stdio.h>
#include <math.h>

int main()
{
double mm = 1000000;
double gram = mm * .9147;
double pound = gram * .00220462;
printf("%.2f M&Ms is %.2f pounds",mm,pound);
return 0;

}
