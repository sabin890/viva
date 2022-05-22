// Write a program to find the largest of three numbers using ternary operators.
#include <stdio.h>
int main()
{
    int a, b, c, d = 0;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second  number:");
    scanf("%d", &b);
    printf("Enter third  number:");
    scanf("%d", &c);

    d = a;
    if (d >= b)
    {
        if (d >= c)
        {
            printf("A = %d is the gretest number", a);
        }
        else
        {
            printf("C = %d is the gretest number", c);
        }
    }
    else
    {
        d = b;
        if (d > c)
        {
            printf("B = %d is the gretest number", b);
        }
        else
        {
            printf("C = %d is the gretest number", c);
        }
    }

    return 0;
}