#include<stdio.h>
int main(){
// Write a program to count number of digits in a given integer. 
int a;
printf("Enter a number:");
scanf("%d",&a);
if (a<10)
{
   printf("Given number is 1 digit number");
}
else if (a<100)
{
   printf("Given number is 2 digit number");
}
else if (a<1000)
{
   printf("Given number is 3 digit number");
}
else if (a<10000)
{
   printf("Given number is 4 digit number");
}
else if (a<100000)
{
   printf("Given number is 5 digit number");
}
else if (a<1000000)
{
   printf("Given number is 6 digit number");
}

return 0;
}