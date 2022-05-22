// Write a program to illustrate the use of unary prefix and postfix increment and decrement operators. 
#include<stdio.h>
int main(){
int a;
printf("Enter a number:");
scanf("%d",&a);
for (int i = 0; i <= a; i++)
{
    printf("Increment = %d\n",i);
}
printf("\n\n\n");
for (int i = a; i >=0; i--)
{
    printf("Decrement = %d\n",i);
}

return 0;
}