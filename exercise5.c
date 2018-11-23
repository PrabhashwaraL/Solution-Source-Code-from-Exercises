// Exercise 5
/*
 * A C program that compute the perimeter and area
 * of a rectangle( height- 8 inches, width- 5 inches )
*/
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int height = 8; // height of the rectangle
    int width = 5; // width of the rectangle

    printf( "Perimeter of the rectangle = %d inches\n", 2 * (height + width) ); // display the perimeter
    printf( "Area of the rectangle =  %d square inches\n", height * width ); // display the area

    return 0;
} // end function main
