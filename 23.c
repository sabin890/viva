// Write a program to reverse a given integer. 
#include<stdio.h>
int main(){
int a,d,c;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter a number:");
scanf("%d",&d);
c=a;
a=d;
d=c;
printf("The revrse value is:%d\n",a);
printf("The revrse value is:%d\n",d);

return 0;
}