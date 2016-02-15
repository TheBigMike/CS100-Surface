#include <stdio.h>

int input(char *val)
{
    int num;
    printf("%s",val);
    scanf("%d",&num);
    return num;
}

double numpackages(int miles)
{
    double numtwiz = (double)(miles*5280*12)/8;
    double numpack = numtwiz/30;
    return numpack;
}

int print(double x)
{
    printf("The num of packs is %lf ",x);
    return 0;
}

int main()
{
    int miles = input("Number of miles :");
    double twizzler = numpackages(miles);
    print(twizzler);
    return 0;
}    
