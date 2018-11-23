// Exercise 8
// A C program that convert specified days into years, weeks and days.
// Ignore leap year.
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int numOfDays = 1329; // specify days
    int years, weeks, days; // variables

    // conversions
    years = numOfDays / 365; // ignore leap years
    weeks = (numOfDays % 365) / 7;
    days = numOfDays - ((years * 365) + ( weeks * 7 ));

    // display all results.
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
} // end function main
