#nclude <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void getData()
    {
    printf("What are the lengths of the three sides?\n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    return;
    }

double surfaceArea(double a, double b, double c)
    {
    return((2 * ( a * b )) + (2 * (b * c)) + (2 * (a * c)));
    
    }

int main(int argc,char **argv)
    {
    double a,b,c;
    printf("Hello, we are going to compute the surface area of a rectangular prism.\n");
    getdata();
    double sA = surfaceArea(a,b,c);
    printf("%lf",sA);
    return 0;
    }
