///Michael Hall Exam 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
    {
	int hour, min, beforenoon;
	
    printf("What time did I wake up today? Provide input with the hour value followed by the minute value seperated by a space. ");
	scanf("%d %d",&hour,&min);
	printf("I woke up at %d:%d today.\n",hour,min);
	
	beforenoon = ((11-hour)*60)+(60-min);
	printf("I was awake for %d minutes before I ate lunch.\n",beforenoon);
	
    return 0;
    }
