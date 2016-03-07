//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int a,b;
    for(a=1;a<=3;a++)
    {
        for(b=1;b<=4;b++)
        {    
            printf("<%d|%d> ",a,b);
            if(b==4)
                printf("\n");
        }
    }
    
    char ch='A';
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=5;b++)
        {
            printf("%c ",ch);
            ch+=1;        //Instead of ch+=1 you can put ch++ in the print statment above and ch will be incremented automatically after printing.
        }
    }
    
    
    
    return 0;
}
