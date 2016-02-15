#include <stdio.h>
#include <math.h>

void readData(int *x)
{
printf("Five values seperated by spaces :");
scanf("%d %d %d %d %d",x,x+1,x+2,x+3,x+4);
}

double findMean(int *x)
{
double mean = (double)(x[0]+x[1]+x[2]+x[3]+x[4])/5.0;
return mean;
}

double findVariance(int *x, double y)
{
double variance = (((x[0]-y)*(x[0]-y))+((x[1]-y)*(x[1]-y))+((x[2]-y)*(x[2]-y))+((x[3]-y)*(x[3]-y))+((x[4]-y)*(x[4]-y)))/5;
return variance;
}

void printResults(double mean,double variance,double stddev)
{
printf("The mean is %lf.\nThe variance is %lf.\nThe standard deviation is %lf.\n",mean,variance,stddev);
}

int main( ) {
	int array[5];
	readData(array);
	double mean, variance, stddev;
	mean = findMean(array);
	variance = findVariance(array, mean);
	stddev = sqrt(variance);
	printResults(mean, variance, stddev);
	return 0;
}
