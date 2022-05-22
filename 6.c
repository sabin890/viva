// Write a program to calculate simple and compound interest. 
#include<stdio.h>
#include<math.h>
void main(){
float a,b,c;
printf("Enter the rate of the intrest:");
scanf("%f",&a);
printf("Enter the principle of the intrest:");
scanf("%f",&b);
printf("Enter the time of the intrest:");
scanf("%f",&c);
printf("Simple intrest of that information is:%0.2f",a*b*c/100);
}  