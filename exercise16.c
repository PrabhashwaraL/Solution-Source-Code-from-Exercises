// Exercise 16
// A C program that calculate daily profit
// In here every variables are int
// If we want average in float, typecasting can be used
#include <stdio.h>

// function main begins program execution
int main( void )
{
    float avgProfit;
    int priceOfBook = 125, sales = 12, numOfDays = 14;

    avgProfit = ( float )( priceOfBook * sales ) / numOfDays; // numerator was converted to float
    printf( "Average daily Profit = Rs %.2f\n", avgProfit );

    return 0;
} // end function main
