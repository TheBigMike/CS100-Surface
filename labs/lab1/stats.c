#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
{
	int num1,num2,num3,num4,num5,sum;
	double average;
	printf("You will input 5 numbers, all of them integers, and I will tell you the sum and average of them.\n");
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	printf("Enter the third number: ");
	scanf("%d",&num3);
	printf("Enter the fourth number: "); 
	scanf("%d",&num4);
	printf("Enter the fifth number: ");
	scanf("%d",&num5);
	sum = num1+num2+num3+num4+num5;
	average = (double)sum/5;
	printf("The sum of the five numbers you input is %d and the average is %.2lf.",sum,average);
	return 0;
}
