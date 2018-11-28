// Exercise 18
/*
 * A program that convert given days to years, months and days.
 * assume that all years have 365 days and all months have 30 days.
 */
#include <stdio.h>

// function main begins program execution
int main( void )
{
    // variables
    int days;
    int d, m, y;

    // accept user inputs
    printf( "Input no. of days: " );
    scanf( "%d", &days );

    // calculation
    y = days / 365;
    m = ( days - ( y * 365 ) ) / 30;
    d = days - ( y * 365 + m * 30 );

    // print results
    printf( "%d Year(s)\n%d Month(s)\n%d Day(s)\n", y, m, d );

    return 0;
}// end function main
