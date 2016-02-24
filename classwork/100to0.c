//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
    {
    int i=0;
    for(i=100;i>=0;i--)
    {
        if (i%5==0)
            printf("%d ",i);
    }
    printf("\n");
    for(i=100;i>=0;i--)
    {
        if (i%10==0)
            printf("%d ",i);
    }
    printf("\n");
    return 0;
    }
