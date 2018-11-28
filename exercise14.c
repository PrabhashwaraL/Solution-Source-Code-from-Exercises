// Exercise 14
/*
 * A C program to calculate average fuel consumption
 * using total distance travel and spent fuel
 */
#include <stdio.h>

// function main begins program execution
int main( void )
{
    // variables
    float distance;
    float fuel;

    // prompt user for input and obtain values
    printf("Input total distance in km: ");
    scanf("%f", &distance);
    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel);

    // calculate and display result with 3 decimal places
    printf("Average consumption(km/lt): %.3f\n", distance / fuel);

    return 0;
} // end function main
