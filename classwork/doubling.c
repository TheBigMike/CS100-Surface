//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int num=2;
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d ",num);
        num*=2;
    }    
    return 0;
}