//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
    {
    double gallons;
    double pounds;
    printf("Input number of gallons needed to fill your bathtub: ");
    scanf("%lf", &gallons);
    pounds = gallons * 8.34;
    printf("Your bathtub requires %.2lf gallons of water to fill it, which is %.2lf pounds of water", gallons, pounds);
    return 0;
    }
