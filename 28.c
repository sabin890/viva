// Write a Program to Search an element in array. 
#include<stdio.h>
int main(){
int a[10];
for (int i = 0; i < 10; i++)
{
    printf("Enter %d number:",i+1);
    scanf("%d",&a[i]);
}
int b;
printf("Enter number's position 1-10:");
scanf("%d",&b);
printf("%d",a[b-1]);

return 0;
}