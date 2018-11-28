// Exercise 15
// A C program to find distance between two points in coordinate system
#include <stdio.h>
#include <math.h>

// function main begins program execution
int main( void )
{
    // x and y coordinate of two points to be entered by user
    int x1, x2, y1, y2;

    // obtain coordinates of one points
    printf( "Input x1: " );
    scanf( "%d", &x1 );
    printf( "Input y1: " );
    scanf( "%d", &y1 );

    // obtain coordinates of another points
    printf( "Input x2: " );
    scanf( "%d", &x2 );
    printf( "Input y2: " );
    scanf( "%d", &y2 );

    // used sqrt() function to find square root
    // required <math.h> for sqrt function
    // display answer with 4 decimal places
    printf( "Distance between the said points: %.4f\n", sqrt( ( (x2 - x1) * (x2 - x1) ) + ( (y2 - y1) * (y2 - y1) ) )  );

    return 0;
} // end function main
