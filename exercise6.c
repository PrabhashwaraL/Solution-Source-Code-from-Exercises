// Exercise 6
// A C program that compute the perimeter and area of a circle( radius- 6 inches )
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int r = 6; // radius of the circle
    float perimeter; // perimeter of the circle
    float area; // area of the circle

    perimeter = 2 * 3.14 * r; // calculate the perimeter
    area = 3.14 * r * r; // calculate the area

    printf( "Perimeter of the circle = %f inches\n", perimeter ); // display perimeter
    printf( "Area of the circle = %f square inches\n", area ); // display area

    return 0;
} // end function main
