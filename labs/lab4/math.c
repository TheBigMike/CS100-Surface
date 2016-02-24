#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
{
    int numone = atoi(argv[1]);
    int numtwo = atoi(argv[3]);
    if (strcmp(argv[2],"+")==0)
        printf("%d",numone+numtwo);
    else if (strcmp(argv[2],"-")==0)
        printf("%d",numone-numtwo);
    else if (strcmp(argv[2],"*")==0)
        printf("%d",numone*numtwo);
    else if (strcmp(argv[2],"/")==0)
        printf("%d",numone/numtwo);
    else if (strcmp(argv[2],"%")==0)
        printf("%d",numone%numtwo);
    return 0;
}
