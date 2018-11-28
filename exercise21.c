// Exercise 21
/*
 * A C program to find the roots of quadratic equations
 * Three coefficient should be enter by user
 * math.h is used for calculate square root
 */
#include <stdio.h>
#include <math.h>

// function main begins program execution
int main( void )
{
    int a, b, c, // three coefficients
    float dis; // discriminant

    printf( "Input the a = " );
    scanf( "%d", &a );
    printf( "Input the b = " );
    scanf( "%d", &b );
    printf( "Input the s = " );
    scanf( "%d", &c );

    dis = b * b - ( 4 * a * c );

    // check discriminant greater than or equal to zero
    // and a not equal to zero
    if( dis >= 0 && a != 0 )
    {
        float x1, x2;
        x1 = ( -b + sqrt( dis ) ) / ( 2 * a );
        x2 = ( -b - sqrt( dis ) ) / ( 2 * a );

        printf( "Root1 = %.5f\n", x1 );
        printf( "Root2 = %.5f\n", x2 );
    }
    else
    {// roots are imaginary when discriminant is zero
        printf( "Impossible to find the roots.\n" );
    }

    return 0;
} // end function main
