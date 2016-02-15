//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "scanner.h"

int main(int argc,char **argv)
    {
    FILE *fp = fopen(argv[1], "r");
    int a = readInt(fp);
    char *b = readToken(fp);
    int c = readInt(fp);
    int d;

    if (strcmp("+",b) == 0)
        {
        d = a + c;
        }
    else if (strcmp("-",b) == 0)
        {
        d = a - c;
        }
    else if (strcmp("*",b) == 0)
        {
        d = a * c;
        }
    else if (strcmp("/",b) == 0)
        {
        d = a / c;
        }
    printf("%d\n",d);    
    /*
    if (strcmp(argv[2],"+") == 0)
        printf("%d\n",atoi(argv[1]) + atoi(argv[3]));
    
    else if (strcmp(argv[2],"-") == 0)
        printf("%d\n",atoi(argv[1]) - atoi(argv[3]));
    
    else if (strcmp(argv[2],"*") == 0)
        printf("%d\n",atoi(argv[1]) * atoi(argv[3]));
    
    else if (strcmp(argv[2],"/") == 0)
        printf("%d\n",atoi(argv[1]) / atoi(argv[3]));
    */
    return 0;
    }
