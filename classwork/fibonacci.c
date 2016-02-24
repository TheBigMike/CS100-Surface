//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int i, first=0, second=1, next;
    for (i=0;i<=10;i++)
    {
    if (i<=1)
        next=i;
    else
    {
        next=first+second;
        first=second;
        second=next;
    }
    printf("%d ",next);
    }
    return 0;
}
