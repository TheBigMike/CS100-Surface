//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "scanner.h"

int staintest();
int smelltest();
int timesworn();
void shirttest();
void pantstest();
void othertest();

int main()
{
    printf("Is the article of clothing a shirt, pants, or other?");
    char *x=readToken(stdin);
    if (strcmp(x,"shirt")==0){
        shirttest();
        return 0;
    }
    else if (strcmp(x,"pants")==0){
        pantstest();
        return 0;
    }
    else {
        othertest();
        return 0;
    }
    return 0;
}
    
void shirttest()
{
    printf("What kind of shirt is it?");
    char *shirttype=readToken(stdin);
    if (strcmp(shirttype,"t-shirt")==0)
    {
        if (smelltest()==1||2){
            if (staintest()==1||2){
                printf("wear it");
                return;
            }
            else {
                printf("wash it");
                return;
            }
        }
        else {
            printf("wash it");
            return;
        }
    }
    if (strcmp(shirttype,"nice")==0)
    {
        if (staintest()==0){
            printf("wear it");
            return;
        }
        else {
            printf("wash it");
            return;
        }
    }
    if (strcmp(shirttype,"sweatshirt")==0)
    {
        if (timesworn()<3){
            if (staintest()==1||2){
                printf("wear it");
                return;
            }
            else {
                printf("wash it");
                return;
            }
        }
        else if (smelltest()==1){
            printf("wear it");
            return;
        }
        else {
            printf("wash it");
            return;
        }
    }
}

void pantstest()
{
    printf("What kind of pants is it");
    char *pantstype=readToken(stdin);
    if (strcmp(pantstype,"jeans")==0)
    {
        if (timesworn()<5){
            printf("wear it");
            return;
        }
        else {
            if (smelltest()==1||2){
                if (staintest()==1||2){
                    printf("wear it");
                    return;
                }
                else {
                    printf("wash it");
                    return;
                }
            }
            else {
                printf("wash it");
                return;
            }
        }
    }
    else
    {
        if (staintest()==1){
            printf("wear it");
            return;
        }
        else {
            printf("wash it");
            return;
        }
    }
    return;
}

void othertest()
{
    printf("Is it socks or other?");
    char *othertype=readToken(stdin);
    if (strcmp(othertype,"socks")==0)
    {
        if (timesworn()==1){
            printf("wear it");
            return;
        }
        else if (smelltest()==1){
            printf("wear it");
            return;
        }
        else {
            printf("wash it");
            return;
        }
    }
    else
    {
        if (timesworn()==1){
            if (staintest()==1){
                printf("wear it");
                return;
            }
            else {
                printf("wash it");
                return;
            }
        }
        else{
            if (smelltest()==1||2){
                printf("wear it");
                return;
            }
            else {
                printf("wash it");
                return;
            }
        }
    }
}

int staintest()
{
    printf("How many stains are there on the article of clothing?");
    char *stain=readToken(stdin);
    if (strcmp(stain,"none")==0){
        return 1;
    }
    if (strcmp(stain,"small")==0){
        return 2;
    }
    else {
        return 3;
    }
}

int smelltest()
{
    printf("How does the article of clothing smell?");
    char *smell=readToken(stdin);
    if (strcmp(smell,"fine")==0){
        return 1;
    }
    if (strcmp(smell,"marginal")==0){
        return 2;
    }
    else {
        return 3;
    }
    return 0;
}

int timesworn()
{
    printf("How many times has the article of clothing been worn?");
    int x=readInt(stdin);
    return x;
}