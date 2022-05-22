// Write a Program to Check Whether a Number is Prime or not. 
#include<stdio.h>
int main(){
int a,b=0;

printf("Enter a number:");
scanf("%d",&a);
 if (a==1 ||a==0 )
 {
    b=1;
 }
 for (int i = 2; i <=3; i++)
 {
     if (a%i==0)
     {
        b=b+1;
     }
 }
 if (b>=1)
 {
     printf("\n%d is Not a prime number\n",a);
 }
 else
 {
     printf("\n%d is a prime number\n",a);
 }
 

return 0;
}