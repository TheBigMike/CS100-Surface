//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
	int nums[5];
	double mean;
	double variance;
	double deviation;

	printf("Input 5 integers with a single space seperating each number: ");
	scanf("%d %d %d %d %d",&nums[0],&nums[1],&nums[2],&nums[3],&nums[4]);

	mean=(double)(nums[0]+nums[1]+nums[2]+nums[3]+nums[4])/5.00000;
	variance=(double)(pow(nums[0]-mean,2)+pow(nums[1]-mean,2)+pow(nums[2]-mean,2)+pow(nums[3]-mean,2)+pow(nums[4]-mean,2))/5;
	deviation=(double)sqrt(variance);

	printf("The mean value of the numbers is %lf.\n",mean);
	printf("The variance of the numbers is %lf.\n",variance);
	printf("The standard deviation of the numbers is %lf.\n",deviation);

	return 0;
    }
