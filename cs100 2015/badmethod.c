#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char **argv)

{
//char buffer[512];
char *buffer = malloc(sizeof(char)*25);
printf("What is your name?\n");
scanf("%s",buffer);
printf("the name has %d characters\n",(int) strlen(buffer));
printf("the name is %s\n",buffer);
if(strcmp(buffer,"michael") == 0);
    {
    printf("thats my name too\n");
    }
return 0;
}
