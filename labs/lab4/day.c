#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
{
    int numone = atoi(argv[1]);
    int numtwo = atoi(argv[2]);
    int days;
    if (numone==1)
        days=0;
    else if (numone==2)
        days=31;
    else if (numone==3)
        days=60;
    else if (numone==4)
        days=91;
    else if (numone==5)
        days=121;
    else if (numone==6)
        days=152;
    else if (numone==7)
        days=182;
    else if (numone==8)
        days=213;
    else if (numone==9)
        days=244;
    else if (numone==10)
        days=274;
    else if (numone==11)
        days=305;
    else if (numone==12)
        days=335;
    days=days+numtwo;
    printf("That is the %d day of the year",days);
        
    return 0;
}