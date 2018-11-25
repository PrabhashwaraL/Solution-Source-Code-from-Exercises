// Exercise 12
/*
 * A program in C that accepts as employee's ID(max. 10 chars), worked hours
 * and amount per hour from user
 * Output the ID and salary of this month
 */
#include <stdio.h>

// function main begins program execution
int main( void )
{
    // variables
    char id[ 11 ]; // reserves 11 characters( 10 chars and null character )
    float hrs;
    float salary;

    // read details from user
    printf( "Input the Employee ID(Max. 10 chars): " );
    scanf( "%10s", &id ); // input no more than 10 characters
    printf( "Input the working hrs: " );
    scanf( "%f", &hrs );
    printf( "Salary amount/hr: " );
    scanf( "%f", &salary );

    // output results
    printf( "\n\nEmployee ID = %s\n", id );
    printf( "Salary = Rs. %.2f\n", salary * hrs ); // salary with two decimal places

    return 0;
} // end function main
