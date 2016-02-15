#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
{
    	double hourspernight, hoursperyear, percentofyear, hoursby21;
	
	printf("Enter the average number of hours that you sleep each night :");
	scanf("%lf",&hourspernight);
	
	hoursperyear = hourspernight*365;
	percentofyear = hoursperyear/8760*100;
	hoursby21 = hoursperyear*21;
	
	printf("If you sleep an average of %.1lf hours per night, then in one year you would have slept %.1lf hours.\n",hourspernight,hoursperyear);
	printf("This also means that at an average of %.1lf hours per night, you will sleep for %.1lf%% of the year.\n",hourspernight,percentofyear);
	printf("By your twenty-first birthday, you will have slept for %.1lf hours.\n",hoursby21);
	

return 0;
}
