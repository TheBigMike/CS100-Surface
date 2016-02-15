//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int x,y,z;
    printf("I need 3 numbers seperated by spaces.");
    scanf("%d %d %d",&x,&y,&z);
    if (x<y && y<z)
        printf("Yes");
    else
        printf("No");
    

    return 0;
}
