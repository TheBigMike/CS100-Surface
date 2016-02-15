#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI acos(-1)

void
getData(int *length,int *width,int *elevation,int *rise,int *angle,int *row)
    {
    printf("What is the length? ");
    scanf("%d",length);
    
    printf("What is the width? ");
    scanf("%d",width);
    
    printf("What is the elevation? ");
    scanf("%d",elevation);
    
    printf("What is the rise? ");
    scanf("%d",rise);
    
    printf("What is the angle? ");
    scanf("%d",angle);
    
    printf("What is the row? ");
    scanf("%d",row);

    return;
    }

double sidelineVolume(double lengthD,double widthD,double elevationD,double riseD,double angleD, double rowD)
    {
    double angle = 90 - angleD;
    return(2*((1.0 / 2.0) * (lengthD * ((rowD * riseD) * ((rowD * riseD)/(tan(angle * PI / 180.0)))))));
    }

double fieldVolume(double lengthD,double widthD,double elevationD,double riseD,double angleD,double rowD)
    {
    return(((rowD * riseD) + elevationD) * lengthD * widthD);
    }

double endzoneVolume(double lengthD,double widthD,double elevationD,double riseD,double angleD,double rowD)
    {
    double angle = 90 - angleD;
    return (2*((1.0/2.0) *( widthD * ((rowD * riseD) * ((rowD * riseD)/(tan(angle * (PI / 180.0))))))));
    }

double cornerVolume(double lengthD,double widthD,double elevationD,double riseD,double angleD,double rowD)
    {
    double angle,volume,height,radius;
    height = (rowD * riseD);
    angle = (90 - angleD);
    radius = (height * tan(angle * (PI/180.0)));
    volume = (PI * radius * radius * (height / 3.0));
    return volume;
    //(PI * (pow((rowD * riseD) * tan((90 - angleD) * PI/180.0),2)) * ((rowD * riseD)/ 3.0)); 
    }

void
printGivenData(length,width,elevation,rise,angle,row)
    {
    printf("--------------------------\n");
    printf("Length is %d      ",length);
    printf("Width is %d      ",width);
    printf("Elevation is %d\n",elevation);
    printf("Rise is %d      ",rise);
    printf("Angle is %d      ",angle);
    printf("Row is %d\n",row);
    printf("--------------------------\n");
    return;
    }

double
yardsToFeet(double a)
    {
    return (a * 3.0);
    }

double
inchesToFeet(double a)
    {
    return (a / 12.0);
    }

double
cubicFeetToGallon(double a)
    {
    return (a * 7.4805194805195);
    }

double
degreesToRadians(double a)
    {
    return (a / 180.0);
    }

double
totalVolume(double fieldVol,double sidelineVol,double endzoneVol,double cornerVol)
    {
    return (fieldVol + sidelineVol + endzoneVol + cornerVol);
    }

void
printAnswers(double fieldVol,double sidelineVol,double endzoneVol,double cornerVol,double totalVol,double totalVolGal)
    {
    
    printf("The volume of the field is %f cubic feet.\n",fieldVol);
    printf("The volume of the sidelines is %f cubic feet.\n",sidelineVol);
    printf("The volume of the endzones is %f cubic feet.\n",endzoneVol);
    printf("The volume of the corners is %f cubic feet.\n",cornerVol);
    printf("The total volume of the stadium is %f cubic feet.\n",totalVol);
    printf("--------------------------\n");
    printf("The total volume of the stadium in gallons is %.0lf.\n",round(totalVolGal));
    return; 
    }

int main(int argc,char **argv)
{
    int length;
    int width;
    int elevation;
    int rise;
    int angle;
    int row;
    
    getData(&length,&width,&elevation,&rise,&angle,&row);  
    //get the data from the user
    
    double lengthD = (double) length;
    double widthD = (double) width;
    double elevationD = (double) elevation;
    double riseD = (double) rise;
    double angleD = (double) angle;
    double rowD = (double) row;
    lengthD = yardsToFeet(lengthD);   //turn yards to feet
    widthD = yardsToFeet(widthD);     //turn yards to feet
    riseD = inchesToFeet(riseD);      //turn inches to feet

    double fieldVol = fieldVolume(lengthD,widthD,elevationD,riseD,angleD,rowD);
    double sidelineVol = sidelineVolume(lengthD,widthD,elevationD,riseD,angleD,rowD);
    double endzoneVol = endzoneVolume(lengthD,widthD,elevationD,riseD,angleD,rowD);
    double cornerVol = cornerVolume(lengthD,widthD,elevationD,riseD,angleD,rowD);
    double totalVol = totalVolume(fieldVol,sidelineVol,endzoneVol,cornerVol);
    double totalVolGal = cubicFeetToGallon(totalVol); 

    printGivenData(length,width,elevation,rise,angle,row); 
    printAnswers(fieldVol,sidelineVol,endzoneVol,cornerVol,totalVol,totalVolGal);
    //print out the data that we received
    /*
    printf("The volume of the field is %f cubic feet.\n",fieldVol);
    printf("The volume of the sidelines is %f cubic feet.\n",sidelineVol);
    printf("The volume of endzones is %f cubic feet.\n",endzoneVol);
    printf("The volume of all of the corners is %f.\n",cornerVol);
    printf("The total volume of the stadium is %f cubic feet.\n",totalVol);
    printf("--------------------------\n");
    printf("The volume in gallons is %.0lf.\n",round(totalVolGal));
    */
    return 0;
}
