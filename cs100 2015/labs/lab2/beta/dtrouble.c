/* Program for testing use of a bad index in an array */
/* Written by John C. Lusth, 2015 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
    //int index;
    double *array = malloc(sizeof(double) * 5);
    double x = atof(argv[1]);
    int y = atoi(argv[2]);


    /* get the first value of the array */
    //printf("What is the initial value? ");
    //scanf("%lf",array);  //read into array[0]
    printf("You entered the value %lf\n",x);

    /* fill the rest of the array */
    array[1] = 2 * x;
    array[2] = 2 * array[1];
    array[3] = 2 * array[2];
    array[4] = 2 * array[3];

    /* display the array */
    printf("The filled array is:\n");
    printf("    array[0] = %lf\n",x);
    printf("    array[1] = %lf\n",array[1]);
    printf("    array[2] = %lf\n",array[2]);
    printf("    array[3] = %lf\n",array[3]);
    printf("    array[4] = %lf\n",array[4]);

    /* get a bad index */
    //printf("Give me an out-of-bounds index: ");
    //scanf("%d",&index);

    /* use the bad index */
    printf("Writing the value 42 to index %d (the program may fail).\n",y);
    array[y] = 42;

    /* these prints will not happen if the program fails on the previous line */
    printf("The value at array[%d] is %lf.\n",y,array[y]);
    printf("It didn't fail (but it could have).\n");

    return 0;
    }
