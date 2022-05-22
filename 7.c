// Write a program to swap values of two variables with and without using third variable. 
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second  number:");
    scanf("%d", &b);
    printf("\nBefore swaping: a = %d and b = %d", a, b);
// -----------------------------------------------------------------------------------------------
     // using only two veriable
// -----------------------------------------------------------------------------------------------

    b = a + b;
    a = b - a;
    b = b - a;
    printf("\nAfter swaping: a = %d and b = %d", a, b);
// -----------------------------------------------------------------------------------------------

//  -----------------------------------------------------------------------------------------------
// using third veriable
// -----------------------------------------------------------------------------------------------
// int c=0;
// c=b;
// b=a;
// a=c;

// printf("\nAfter swaping: a = %d and b = %d", a, b);
    return 0;
}