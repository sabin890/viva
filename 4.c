// Write a C program to calculate area and circumference of a circle. 
#include<stdio.h>
int main(){
int radious=0;
float a=0,b=0,e=0;
printf("Enter the value of radious:");
scanf("%d",&radious);
a=radious*radious;
b=a*3.14;
e=(2*3.14)*radious;
printf("\nThe area of the circle is: %f",b);
printf("\nThe circumference  of the circle is: %f",e);
return 0;
}