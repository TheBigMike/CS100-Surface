//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "scanner.h"

int main()
    {
    char *playone;
    char *playtwo;
    
    printf("Enter Player 1's Move :");
    playone = readToken(stdin);
    printf("Enter Player 2's Move :");
    playtwo = readToken(stdin);
    
    if (strcmp(playone,playtwo)==0)
        printf("It was a tie");    
    else if(strcmp(playone,"rock")==0 && strcmp(playtwo,"paper")==0)
        printf("Player 2 wins");
    else if (strcmp(playone,"rock")==0 && strcmp(playtwo,"scissors")==0)
        printf("Player 1 wins");
    else if (strcmp(playone,"paper")==0 && strcmp(playtwo,"rock")==0)
        printf("Player 1 wins");
    else if (strcmp(playone,"paper")==0 && strcmp(playtwo,"scissors")==0)
        printf("Player 2 wins");
    else if (strcmp(playone,"scissors")==0 && strcmp(playtwo,"paper")==0)
        printf("Player 1 wins");
    else if (strcmp(playone,"scissors")==0 && strcmp(playtwo,"rock")==0)
        printf("Player 2 wins");    
   // printf("%s %s", playone, playtwo);
    
    return 0;
    }
