// Exercise 10
/*
 * A C program which obtain two integers typed by a user
 * compute the product
 * and prints the result
 */
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int fNum, sNum; // variables

    printf("Input the first integer: "); // prompt
    scanf("%d", &fNum); // read a first integer
    printf("Input the second integer: "); // prompt
    scanf("%d", &sNum); // read a second integer

    printf("product of the above two integers = %d\n", fNum * sNum); // compute and print product

    return 0;
} // end function main
