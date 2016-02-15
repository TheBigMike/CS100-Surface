#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "scanner.h"

int main(int argc,char **argv)
    {
    int i;
    FILE *fp = fopen("data","r");
    if (fp == 0)
        {
        fprintf(stderr,"file data could not be3 opened for reading");
        exit(1);
        }
    i = readInt(fp);
    printf("%d",i);
    return 0;
    }
