//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
    if (strcmp(argv[2],"+") == 0)
        printf("%d\n",atoi(argv[1]) + atoi(argv[3]));
    else if (strcmp(argv[2],"-") == 0)
        printf("%d\n",atoi(argv[1]) - atoi(argv[3]));
    else if (strcmp(argv[2],"*") == 0)
        printf("%d\n",atoi(argv[1]) * atoi(argv[3]));
    else if (strcmp(argv[2],"/") == 0)
        printf("%d\n",atoi(argv[1]) / atoi(argv[3]));

    return 0;
    }
