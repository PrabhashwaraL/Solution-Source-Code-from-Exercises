// Exercise 13
/*
 * A C program which obtain three integers from user
 * and find maximum of three
 */
#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main( void )
{
    int i1, i2, i3; // three integers to be entered by user

    // prompt user for input and obtain values
    printf( "Input the first integer: " );
    scanf( "%d", &i1 );
    printf( "Input the second integer: " );
    scanf( "%d", &i2 );
    printf( "Input the third integer: " );
    scanf( "%d", &i3 );

    if ( i1 > i2 && i1 > i3 )
    {
        printf( "Maximum value of three integers: %d\n", i1 );
    } // end if
    else if ( i2 > i3 )
    {
        printf( "Maximum value of three integers: %d\n", i2 );
    } // end else if
    else
    {
        printf( "Maximum value of three integers: %d\n", i3 );
    } // end else

    /*
     * Other method
     * In here, used absolute value function in <stdlib.h>
     * to find maximum
     */

    printf( "\n\n-----------------OTHER METHOD TO FIND MAXIMUM-----------------\n\n" );

    int temp;
    int max;

    // find maximum between any two integers
    // and assign it to temp
    temp = ( i1 + i2 + abs( i1 - i2 ) ) / 2;
    // used third integer and above one
    // to find maximum
    max = ( temp + i3 + abs( temp - i3 )) / 2;

    printf( "Maximum value of three integers: %d\n", max );

    return 0;
} // end function main
