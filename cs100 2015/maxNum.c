//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "scanner.h"

int giveMax(a,b)
    {
    if (a > b)
        return a;
    else if (b < a)
        return b;
    }

int main(int argc,char **argv)
    {
    int a;
    int b;
    FILE *fp;

    fp = fopen("data","r");
    
    //printf("Give me a number: ");
    //scanf("%d", &a);
    a = readInt(fp);
    //printf("Give me another number: ");
    //scanf("%d", &b);
    b = readInt(fp);
    printf("The larger number is %d.", giveMax(a,b));
    fclose(fp);

    return 0;
    }
