/*
 * program for baseball or softball on-base percentage, by John C. Lusth, 2015
 * 
 * this program may be freely distributed and modified, as long as:
 * 
 * a) the authorship of any modifications is added
 *
 * b) the reason for modification is added
 *
 * c) the comments are updated to reflect modifications
 *
 * d) the original authorship and that of any previous modifiers is preserved.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>


// function prototypes

void getData(int *,int *,int *,int *,int *,FILE *);
void displayData(int,int,int,int,int,FILE *);
double computeRating(int,int,int,int,int);

int
main(int argc, char **argv)
    {
    int atBats;
    int hits;
    int walks;
    int hbp;
    int flies;
    double rating;

    FILE *fp = fopen("data.in","r");
    FILE *fpw = fopen("data.out","w");

    //get the statistics from the user
    //pass in addresses so getDat can set these variables
    getData(&hits,&walks,&hbp,&atBats,&flies,fp);
    
    //compute the rating
    rating = computeRating(hits,walks,hbp,atBats,flies);

    //display the statistics
    displayData(hits,walks,hbp,atBats,flies,fpw);

    //display the results
    fprintf(fpw,"\nFor these statistics, the on-base percentage is %f\n",rating);

    return 0;
    }

void
getData(int *hits,int *walks,int *hbp,int *atBats,int *flies,FILE *fp)
    {
    //printf("Enter number of hits: ");
    fscanf(fp," %d",hits);  //atts is a pointer already

    //printf("Enter number of walks: ");
    fscanf(fp," %d",walks);

    //printf("Enter times hit by a pitch: ");
    fscanf(fp," %d",hbp);

    //printf("Enter number of at bats: ");
    fscanf(fp," %d",atBats);

    //printf("Enter number of sacrifice flies: ");
    fscanf(fp," %d",flies);
    
    return;
    }

double
computeRating(int h,int bb,int hbp,int ab,int sf)
    {
    return (h + bb + hbp) / (double) (ab + bb + hbp + sf); 
    }

void
displayData(int h,int bb,int hbp,int ab,int sf,FILE *fpw)
    {
    fprintf(fpw,"\n");
    fprintf(fpw,"hits: %d\n",h);
    fprintf(fpw,"base on balls: %d\n",bb);
    fprintf(fpw,"hit by pitch: %d\n",hbp);
    fprintf(fpw,"at bats: %d\n",ab);
    fprintf(fpw,"sacrifice flies: %d\n",sf);
    return;
    }
