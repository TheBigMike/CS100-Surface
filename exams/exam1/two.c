//Michael Hall Exam 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int numcans(int cup)
	{
		//double num;
		int numcan;
		numcan = cup/12;
		
		if ((cup%12)!=0)
			++numcan;
		
		return numcan;
	}

double frostprice(int numcan)
	{
		double cost;
		cost = (numcan*1.58)*1.09;
		
		return cost;
	}	
	
int main(int argc,char **argv)
    {
		printf("%d \n",9/10);
		
		int numcup, numcan;
		double frostcost;
		
		printf("Tell me how many cupcakes need to be frosted: ");
		scanf("%d",&numcup);
		
		numcan = numcans(numcup);
		frostcost = frostprice(numcan);
		
		printf("In order to frost %d cupcakes, I will need a minimum of %d cans of frosting, which will cost $%.2lf after tax when bought from publix.\n",numcup,numcan,frostcost);
		
		return 0;
    }
