#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>





int main()
{
    int i;
    int x;
    int z;
    int target;
    printf("What number do you want to find?\n");
    scanf("%d",&target);
    FILE *fp = fopen("data.in","r");
    while (!feof(fp))
        {
        fscanf(fp,"%d",&x);
        ++i;
        }
    fclose(fp);    
    int *y = malloc(sizeof(int) * i);
    fp = fopen("data.in","r");
    for(z=0; z < i; ++z)
        {
        fscanf(fp,"%d",&y[z]);
        }
    int count = 0;
    fclose(fp);
    for(z = 0; z < i; ++z)
        {
        if (y[z] == target)
            {
            ++count;
            }
        }
    printf("That number appears %d times.\n",count);
    int firstOccur = 0;
    int b = 0;
    while (y[b] != target)
        {
        b++;
        }
    firstOccur = b + 1;
    printf("The number %d appears first at position %d in the file.\n",target, firstOccur);
    return 0;
}       
