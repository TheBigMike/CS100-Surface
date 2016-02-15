#include <stdio.h>
#include <stdlib.h>

int
max2(int x,int y)
    {
    if (x > y)
        return x;
    else
        return y;
    }


int
max3(int x,int y,int z)
    {
    if (x >= y && x >= z)
        return x;
    else if (y >= x && y >= z)
        return y;
    else if (z >= x && z >= y)
        return z;
    return 0;
    
    }    
