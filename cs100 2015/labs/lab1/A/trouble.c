#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double x;

int main(int argc,char **argv)
    {
    double array[5];
    printf("What is the initial value?\n");
    scanf("%lf",&x);
    printf("You entered the value %lf\n",x);
    array[0] = x;
    array[1] = 2 * x;
    array[2] = 4 * x;
    array[3] = 8 * x;
    array[4] = 16 * x;
    printf("The filled array is:\n");
    printf("    array[0] = %lf\n",array[0]);
    printf("    array[1] = %lf\n",array[1]);
    printf("    array[2] = %lf\n",array[2]);
    printf("    array[3] = %lf\n",array[3]);
    printf("    array[4] = %lf\n",array[4]);
    printf("Give me an out-of-bounds index:");
    int index;
    scanf("%d",&index);
    printf("Writing the value 42 to index %d (the program may fail).\n",index);
    array[index] = 42;
    printf("The value at array[%d] is %lf\n",index,array[index]);
    printf("It didn't fail (but it could have).");
    
    return 0;
    }
