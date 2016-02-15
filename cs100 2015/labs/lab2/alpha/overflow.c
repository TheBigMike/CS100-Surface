//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
//STUDENT: The strings I entered are qwertyqwertyqwerty and asdfjkl;asdfjkl;asdfjkl;
//STUDENT: The output of the strings are . and asdfjkl;asdfjkl;asdfjkl;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
    char array1[16];
    char array2[16];
    printf("first string? ");
    scanf("%s", array1);
    printf("second string? ");
    scanf("%s", array2);
    printf("the value of the first string is %s.\n",array1);
    printf("the value of the second string is %s.\n", array2);
    return 0;
    }
