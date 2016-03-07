//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int num=atoi(argv[1]);
    int a,b;
    for(a=1;a<=num;a++)
    {
        for(b=1;b<=num;b++)
            printf("X");
        printf("\n");
    }
    
    printf("\n");
    
    for(a=1;a<=num;a++)
    {
        for(b=1;b<=a;b++)
            printf("X");
        printf("\n");
    }
    
    printf("\n");
    
    for(a=1;a<=num;a++)
    {
        if(a%2!=0)
            printf("XOXOX \n");
        else if(a%2==0)
            printf("OXOXO \n");
    }
    
    printf("\n");
    
    
    
    return 0;
}
