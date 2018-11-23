// Exercise 11
/*
 * A C program that calculate the average weight of items
 * In here accepts two item's weights and number of items
 */
#include <stdio.h>

// function main begins program execution
int main(void)
{
    double wItem1, wItem2; // items to be entered by user
    double noItem1, noItem2; // number of items to be entered by user
    double result; // variable in which average will be stored

    // prompts and read values
    printf("Weight - Item1: ");
    scanf("%lf", &wItem1);
    printf("No. of item1: ");
    scanf("%lf", &noItem1);
    printf("Weight - Item2: ");
    scanf("%lf", &wItem2);
    printf("No. of item2: ");
    scanf("%lf", &noItem2);

    result = ((wItem1 * noItem1) + (wItem2 * noItem2)) / (noItem1 + noItem2); // assign average to result

    printf("Average Value = %f\n", result); // print result

    return 0;
} // end function main
