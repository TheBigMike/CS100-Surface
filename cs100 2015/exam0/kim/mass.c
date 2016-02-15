#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int
main(int argc,char **argv)
{
    int attendence;
    int female;
    int male;
    double percfemale;
    double percmale;
    int totalmass;
    int avgmass;
    
    printf("Enter attendence: ");
    scanf("%d",&attendence);
    printf("Enter female count: ");
    scanf("%d",&female);
    male = attendence - female;
    printf("There were %d attendees, %d female \n",attendence,female);
    percfemale = ((double)female / attendence) * 100;
    percmale = ((double)male / attendence) * 100;
    totalmass = (female * 70) + (male * 82);
    avgmass = totalmass / attendence;

    int femperc = round(percfemale);
    int malperc = round(percmale);
    printf("Percent female was: %d\n",femperc);
    printf("Percent male was: %d\n",malperc);
    printf("The total mass of attendees was %d kilograms\n",totalmass);
    printf("The average mass of attendees was %d kilograms\n",avgmass);
    
    
    return 0;
}
