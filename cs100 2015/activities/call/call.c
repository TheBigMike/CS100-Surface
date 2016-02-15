#include <stdio.h>
#include <math.h>

int f(int a,int b,int c,int d);
int g(int b,int c,int d);
int h(int c,int d);
int i(int d);

int f(int a,int b,int c,int d)
    {
    return a + g(b,c,d);
    }

int g(int b,int c,int d)
    {
    return b + h(c,d);
    }

int h(int c,int d)
    {
    return c + i(d);
    }

int i(int d)
    {
    return d + d;
    }

int
main(int argc, char **argv)
{
int result = f(1,2,3,4);
printf("result is %d\n", result);
return 0;
}
