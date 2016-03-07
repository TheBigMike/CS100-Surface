//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
        int max=0,x=0,y=0;
        while (y<argc)
        {
            if (max<strlen(argv[y]))
            {
                max=strlen(argv[y]);
            }
            y++;
        }
        for (y=0;y<max;y++)
            {
                for(x=0;x<argc;x++)
                {
                    if (strlen(argv[x])>y)
                    {
                        printf("%c ",argv[x][y]);
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }
    return 0;
    }