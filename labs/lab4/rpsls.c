#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
{
    char *playone=argv[1];
    char *playtwo=argv[2];
    
    if (strcmp(playone,playtwo)==0)
        printf("It was a tie");    
    else if(strcmp(playone,"rock")==0 && strcmp(playtwo,"paper")==0)
        printf("Player 2 wins");
    else if (strcmp(playone,"rock")==0 && strcmp(playtwo,"scissors")==0)
        printf("Player 1 wins");
    else if (strcmp(playone,"rock")==0 && strcmp(playtwo,"lizard")==0)
        printf("Player 1 wins");
    else if (strcmp(playone,"rock")==0 && strcmp(playtwo,"spock")==0)
        printf("Player 2 wins");
    else if (strcmp(playone,"paper")==0 && strcmp(playtwo,"rock")==0)
        printf("Player 1 wins");
    else if (strcmp(playone,"paper")==0 && strcmp(playtwo,"scissors")==0)
        printf("Player 2 wins");
    else if (strcmp(playone,"paper")==0 && strcmp(playtwo,"lizard")==0)
        printf("Player 2 wins");
    else if (strcmp(playone,"paper")==0 && strcmp(playtwo,"spock")==0)
        printf("Player 1 wins");
    else if (strcmp(playone,"scissors")==0 && strcmp(playtwo,"paper")==0)
        printf("Player 1 wins");
    else if (strcmp(playone,"scissors")==0 && strcmp(playtwo,"rock")==0)
        printf("Player 2 wins");    
    else if (strcmp(playone,"scissors")==0 && strcmp(playtwo,"lizard")==0)
        printf("Player 1 wins");
    else if (strcmp(playone,"scissors")==0 && strcmp(playtwo,"spock")==0)
        printf("Player 2 wins");
    else if (strcmp(playone,"lizard")==0 && strcmp(playtwo,"rock")==0)
        printf("Player 2 wins");
    else if (strcmp(playone,"lizard")==0 && strcmp(playtwo,"paper")==0)
        printf("Player 1 wins");
    else if (strcmp(playone,"lizard")==0 && strcmp(playtwo,"scissors")==0)
        printf("Player 2 wins");
    else if (strcmp(playone,"lizard")==0 && strcmp(playtwo,"spock")==0)
        printf("Player 1 wins");
    else if (strcmp(playone,"spock")==0 && strcmp(playtwo,"rock")==0)
        printf("Player 1 wins");
    else if (strcmp(playone,"spock")==0 && strcmp(playtwo,"paper")==0)    
        printf("Player 2 wins");
    else if (strcmp(playone,"spock")==0 && strcmp(playtwo,"scissors")==0)    
        printf("Player 1 wins");
    else if (strcmp(playone,"spock")==0 && strcmp(playtwo,"lizard")==0)
        printf("Player 2 wins");
        
    return 0;
}