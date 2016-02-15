//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "scanner.h"

int biggest(a,b,c,d)
    {
    if (a > b && a > c && a > d)
        return a;
    else if (b > a && b > c && b > d)
        return b;
    else if (c > a && c > b && c > d)
        return c;
    if (d > a && d > b && d > c)
       return d;
    }

int main(int argc,char **argv)
    {
    int a;
    int b;
    int c;
    int d;
    
    //FILE *fp;

    //fp = fopen("data","r");
    
    printf("Give me a number: ");
    //scanf("%d", &a);
    a = readInt(stdin);
    printf("Give me another number: ");
    //scanf("%d", &b);
    b = readInt(stdin);
    printf("Give me another number: ");
    c = readInt(stdin);
    printf("Give me another number: ");
    d = readInt(stdin);
    printf("The larger number is %d.", biggest(a,b,c,d));
    //fclose(fp);

    return 0;
    }
