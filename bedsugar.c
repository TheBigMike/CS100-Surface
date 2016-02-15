//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
    {
    double sugarcubevol = (5/8)*(5/8)*(5/8);
    double bedroomsize;
    double bedlength;
    double bedwidth;
    double bedheight;
    
    printf("How long is your bedroom? ");
    scanf("%lf", &bedlength);
    printf("How wide is your bedromm? ");
    scanf("%lf", &bedwidth);
    printf("How tall is your bedroom? ");
    scanf("%lf", &bedheight);

    bedroomsize = bedlength*bedwidth*bedheght;

    return 0;
    }
