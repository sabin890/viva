// Write a Program to perform addition of all elements in Array. 
#include<stdio.h>
int main(){
int a[10];
for (int i = 0; i < 10; i++)
{
    printf("Enter %d number:",i+1);
    scanf("%d",&a[i]);
}
int b=0;
for (int i = 0; i < 10; i++)
{
    b=a[i]+b;
}

printf("The sum of the array is:%d",b);

return 0;
}