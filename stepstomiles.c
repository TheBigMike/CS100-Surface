//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
    {
    int steps;
    double miles;
    printf("Input the number of steps you have taken today: ");
    scanf("%d", &steps);
    miles = (double) steps * 26 / 12 / 5280;
    printf("You have walked %lf miles today.", miles);
    return 0;
    }
