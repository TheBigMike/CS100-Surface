//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
        int cols, rows, x=1;
        while (x<=10)
        {
            printf("%d\t",x);
            if (x==10)
                printf("\n+--------------------------------------------------------------------------\n");
            ++x;
        }
        for (rows=1;rows<=10;rows++)
        {
            for (cols=1;cols<=10;cols++)
            {
                printf("%d\t", (cols*rows));
            }
            printf("\n");
        }
    return 0;
    }