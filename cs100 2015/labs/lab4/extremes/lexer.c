#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
    int i;
    char *early = argv[1];
    char *late = argv[1];
    for(i = 1; i < argc; ++i)
        {
        if (strcmp(early, argv[i]) > 0)
            early = argv[i];
        if (strcmp(late, argv[i]) < 0)
            late = argv[i];
        }

    printf("The word that would appear earliest is \"%s\"\n",early);
    printf("The word that would appear last is \"%s\"\n",late);
    return 0;
    }
