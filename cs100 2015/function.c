//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//function type
// return type, like int, double, char *, ...
// function name (looks like a variable name) - a function name is a constant
// open paren ({)
// a comma seperated list of formal parameters
//      a formal parameter is a variable name and it has a type
// closed paren (})
// block
//      starts with an open brace
//      a sequence of statements (steps to take)
//      ends with a close embrace

int square(int x)
    {
    return x * x;
    }

int main(int argc,char **argv)
    {
    int z;
    printf("give me an integer: ");
    scanf("%d", &z);
    printf("the square of %d is %d!\n",z,square(z));
    

    //this is a function call
    //  no return type, must be a call!
    //  name of the function we want to call
    //  open paren
    //  comnma separated list of arguments
    //  close paren
    //  
    main(argc+1,0);
    return 0;
    }
