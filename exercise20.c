// Exercise 20
#include <stdio.h>

// function main begins program execution
int main( void )
{
    int p, q, r, s;

    printf("Input the first integer(P)\t: ");
    scanf("%d", &p);
    printf("Input the second integer(Q)\t: ");
    scanf("%d", &q);
    printf("Input the third integer(R)\t: ");
    scanf("%d", &r);
    printf("Input the fourth integer(S)\t: ");
    scanf("%d", &s);

    if((q>r) && (s>p) && ((r+s) > (p+q)) && (r>0) && (s>0) && (p%2 == 0) ){
        printf("Correct values!\n");
    }
    else
    {
        printf("wrong values!\n");
    }

    return 0;
} // end function main
