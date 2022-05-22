// Write a program to input two numbers and display the maximum number. 
#include<stdio.h>
int main(){
int a,b;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second  number:");
    scanf("%d", &b);
if (a>b)
{
  printf("A = %d is gretest number",a);
}
else{
  printf("B = %d is gretest number",b);
}


return 0;
}