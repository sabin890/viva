// Write a program to print the sum of digits of a number using for loop. 
#include<stdio.h>
int main(){
int a,b=0;
printf("Enter a number:");
scanf("%d",&a);
for (int i = 1; i <= a; i++)
{
   b=i+b;
}
printf("The sum of the entered numer is: %d",b);
return 0;
}