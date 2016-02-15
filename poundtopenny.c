#include <stdio.h>
#include <math.h>

int main ()
{
double pound = 150;
double gram = pound * 453.592;
double pennies = gram / 2.5;
printf("%.2f pounds is %.2f grams. %.2f grams is %.2f pennies",pound,gram,gram,pennies);
return 0;
}
