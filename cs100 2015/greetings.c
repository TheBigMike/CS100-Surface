//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
    /* place code here */
    int x;
    printf("give me a number: ");
    scanf("%d",&x);
    //printf("hello, world!\n");
    x = x + 1;
    printf("Hey!, %d is my favorite number! \n",x);
    return 0;
    }
