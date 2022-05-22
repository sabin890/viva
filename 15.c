// Write a program to find the largest and smallest among three entered numbers and also display whether the identified largest/smallest number is even or odd. 
#include<stdio.h>
int main(){
int a,b,c,d=0;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
printf("Enter third number:");
scanf("%d",&c);
d=a;
if (d >= b)
    {   
        if (d >= c)
        {
            printf("A = %d is the gretest number", a);
            if (a%2==0)
            {
                printf("\nA=%d is a evan number",a);
            }
            else
            {
                printf("\nA=%d is a odd number",a);
            }
            
            
        }
        else
        {
            printf("C = %d is the gretest number", c);
            if (c%2==0)
            {
                printf("\nc=%d is a evan number",c);
            }
            else
            {
                printf("\nc=%d is a odd number",c);
            }
        }
    }
    else
    {
        d = b;
        if (d > c)
        {
            printf("B = %d is the gretest number", b);
            if (b%2==0)
            {
                printf("\nB=%d is a evan number",b);
            }
            else
            {
                printf("\nB=%d is a odd number",b);
            }
        }
        else
        {
            printf("C = %d is the gretest number", c);
            if (c%2==0)
            {
                printf("\nC=%d is a evan number",c);
            }
            else
            {
                printf("\nC=%d is a odd number",c);
            }
        }
    }
return 0;
}