#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int
main(int argc, char** argv)
{
    int t;
    double g = 32.174;
    printf("Enter the drop time (in seconds): ");
    scanf("%d",&t);
    printf("The book falls for %d seconds\n",t);
    
    double impactVelo = t * g;
    
    printf("The velocity at impact is %f ft/s\n",impactVelo);
    
    double dropHeight = (g * pow(t,2))/2;
    
    printf("The drop height is %f ft",dropHeight);


return 0;
}


