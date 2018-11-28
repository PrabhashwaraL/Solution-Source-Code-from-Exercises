// Exercise 18
// A C program that convert a given seconds to hours, minutes and seconds
#include <stdio.h>

// function main begins program execution
int main( void )
{
    // variables
    int sec;
    int h, m, s;

    // accept user inputs
    printf( "Input seconds: " );
    scanf( "%d", &sec );

    // calculation
    h = (int)sec / ( 60 * 60 );
    m = (int)( sec % ( 60 * 60 ) ) / 60;
    s = sec - ( ( h * 60 * 60 ) + ( m * 60 ) );

    // print results
    printf( "There are:\n" );
    printf( "H:M:S - %d : %d : %d\n", h, m, s );

    return 0;
} // end function main
