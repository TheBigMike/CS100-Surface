#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
    int numone = atoi(argv[1]);
    int numtwo = atoi(argv[2]);
    int numthree = atoi(argv[3]);
    int numfour = atoi(argv[4]);
    int numfive = atoi(argv[5]);
    int large, small, range;
    
    if (numone>=numtwo && numone>=numthree && numone>=numfour && numone>=numfive)
        large=numone;
    else if (numtwo>=numone && numtwo>=numthree && numtwo>=numfour && numtwo>=numfive)
        large=numtwo;
    else if (numthree>=numone && numthree>=numtwo && numthree>=numfour && numthree>=numfive)
        large=numthree;
    else if (numfour>=numone && numfour>=numtwo && numfour>=numthree && numfour>=numfive)
        large=numfour;
    else
        large=numfive;
    
    if (numone<=numtwo && numone<=numthree && numone<=numfour && numone<=numfive)
        small=numone;
    else if (numtwo<=numone && numtwo<=numthree && numtwo<=numfour && numtwo<=numfive)
        small=numtwo;
    else if (numthree<=numone && numthree<=numtwo && numthree<=numfour && numthree<=numfive)
        small=numthree;
    else if (numfour<=numone && numfour<=numtwo && numfour<=numthree && numfour<=numfive)
        small=numfour;
    else
        small=numfive;
    
        range=large-small;
        printf("The range of the values is %d.",range);
        
    return 0;
    }