#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
    int size;
    printf("size? ");
    scanf("%d",&size);
    int i = 0;
    while (i < size)    
        {
        printf("|");
        ++i;
        if (i == size)
            printf("\n");
        }
    if (i == size)
        {
        size = size -1;
        i = 0;
        }
    while (i < size)
        {
        printf("|");
        ++i;
        if (i == size)
        }
    if (i == size)
        {
        size = size -1;
        i = 0;
        }
    while (i < size)
        {
        printf("|");
        ++i;
        }

    return 0;
    }
