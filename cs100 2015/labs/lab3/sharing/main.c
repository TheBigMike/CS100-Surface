#include <stdio.h>
#include <stdlib.h>
#include "max.h"
int
main()
    {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;


    printf("Enter 6 numbers seperated by a space: ");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    int firstmax = max3(a,b,c);
    int secondmax = max3(d,e,f);
    int finalmax = max2(firstmax,secondmax);
    printf("The maximum is %d",finalmax);

    return 0;
    }
