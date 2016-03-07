//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
{
    int i=1;
    while (i<(argc))
    {
        int len=strlen(argv[i]);
        while (len>=0)
        {
            printf("%c",argv[i][len]);
            len-=1;
        }
        printf("\n");
        i++;
    }
    return 0;
}