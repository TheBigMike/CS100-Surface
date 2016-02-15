//
// Name: Debug3
//
// Description: This program is supposed to convert from Fahrenheit 
//              to Celsius but there is a bug!  Unlike the previous
//              programs this bug does not crash.  Try to find the
//              line where the bug occurs.
//
//  Write anything the want graded to the right of the student tag.
//  If you need more room just add more lines with the student tag
//  like shown.
//
//  STUDENT: the error is on line 31, because when dividing 5 by 9, the answer 
//  STUDENT: being a decimal is turned to 0 because the computer is told it will
//  STUDENT: be given an integer and cuts off everything after the decimal.
//  STUDENT: because of this, when the math is done later in the program, the 0
//  STUDENT: is multiplied through making the answer 0 no matter the fahrnenheit
//  STUDENT: temperature used.

#include <stdio.h>  // Standard input and output (I/O) functions
#include <stdlib.h> // EXIT_SUCCESS

//
//  Convert a temperature from fahrenheit to celsius
//
double
fahrenheitToCelsius(double temp)
    {
    int ratio;
    double cel;
    ratio = 5.0/9.0;                // Compute the ratio to multiple by!
    cel = ratio * (temp - 32.0); // (5/9) * (F - 32)
    return cel;
    }

// Main entry point
// argc is the number of command line arguments
// argv is an array of arguments
int
main(int argc,char** argv)
    {
    double tempFahrenheit;
    double tempCelsius;
    
    tempFahrenheit = 212;                               // Boiling point

    tempCelsius = fahrenheitToCelsius(tempFahrenheit);  // Convert to Celsius

    // tempCelsius should be 100 here
    
    // Display to screen!
    printf("%0.1f degrees Fahrenheit is %0.1f degrees Celsius\n",
        tempFahrenheit,tempCelsius);

    return EXIT_SUCCESS;  // everything is okay!
    }
