//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int max, min, num = 0;
    printf("this\n");
    FILE *fp = fopen("NUMS","r");
    fscanf(fp,"%d", &min);
    max=min;

    while (!feof(fp))
    {
        fscanf(fp,"%d", &num);
        if (num<min)
            min = num;
        if (num>max)
            max = num;
    }
    
    fclose(fp);
    printf("Max: %d",max);
    printf("Min: %d",min);
    return 0;
}