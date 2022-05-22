// Write a program to check whether a number is positive, negative or zero using switch case.
#include<stdio.h>
int main(){
int a;
printf("Enter a number:");
scanf("%d",&a);
switch (a)
{
case 1:
   if (a == 0)
   {
      printf("Enter number is Zero ");
   }
   break;
case 2:
   if (a<0)
   {
      printf("Enter number is Negative ");
   }
    break;
case 3:
   if (a>0)
   {
      printf("Enter number is Positive");
      break;
   }
}
return 0;
}