//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
    {
    int i=0;
    while (i<=400)
    {
        if (i%4==0)
            printf("%d ",i);
        i++;
    }
    i=0;
    printf("\n");
    while (i<=400)
    {
        if (i%50==0)
            printf("%d ",i);
        i++;
    }
    printf("\n");
    i=0;
    while (i<=400)
    {
        if (i%100==0)
            printf("%d ",i);
        i++;
    }
    printf("\n");
    return 0;
    }
