//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int i=1;
    double sum=0;
    double array[10];
    while (i<=10)
    {
        scanf("%lf ",&array[i]);
        ++i;
    }
    for(i=0;i<=10;i++)
    {
        sum+=array[i];
    }
    double avg=sum/10;
    printf("%lf\n",avg);
    return 0;
}
