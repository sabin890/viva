// Write a C program to perform addition, subtraction, division and multiplication of two numbers. 
#include<stdio.h>
int main(){
float a,b;
printf("Enter first number: ");
scanf("%f",&a);
printf("Enter second number: ");
scanf("%f",&b);
printf("\nSum of %f and %f  is: %f\n",a,b,a+b);
printf("\ndivision of %f and %f is: %f\n",a,b,a/b);
printf("\nsubtraction of %f and %f is: %f\n",a,b,a-b);
printf("\nmultipication of %f and %f is: %f\n",a,b,a*b);
return 0;
}