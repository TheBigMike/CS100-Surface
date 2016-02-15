#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
    char *state = "Alabama";
    int size = strlen(state);
    printf("There are %d characters, not counting the null character\n",size);
    printf("%c %c %c %c %c %c %c",state[0],state[1],state[2],state[3],state[4],state[5],state[6]);
    return 0;
    }

