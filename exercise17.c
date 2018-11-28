// Exercise 17
/*
 * A program in C to read an amount
 * and break it smallest bank notes.
 */
#include <stdio.h>

// function main begins program execution
int main( void )
{
    int amt, total;

    // accept amount from user
    printf( "Input the amount: " );
    scanf( "%d", &amt );

    printf( "There are:\n" );

    total = (int)amt / 100; // find number of 100 notes
    printf( "%d Note(s) of 100.00\n", total );

    amt = amt - ( total * 100 ); // reduce value of number of 100 notes from user input amount
    total = (int)amt / 50; // find number of 50 notes
    printf( "%d Note(s) of 50.00\n", total );

    amt = amt - ( total * 50 ); // reduce value of number of 50 notes from previous amt
    total = (int)amt / 20; // find number of 20 notes
    printf( "%d Note(s) of 20.00\n", total );

    amt = amt - ( total * 20 ); // reduce value of number of 20 notes from previous amt
    total = (int)amt / 10; // find number of 10 notes
    printf( "%d Note(s) of 10.00\n", total );

    amt = amt - ( total * 10 ); // reduce value of number of 10 notes from previous amt
    total = (int)amt / 5; // find number of 5 notes
    printf( "%d Note(s) of 5.00\n", total );

    amt = amt - ( total * 5 ); // reduce value of number of 5 notes from previous amt
    total = (int)amt / 2; // find number of 2 notes
    printf( "%d Note(s) of 2.00\n", total );

    amt = amt - (total*2); // reduce value of number of 2 notes from previous amt
    printf("%d Note(s) of 1.00\n", amt);

    return 0;
} // end function main
