// Write a Program to reverse the array elements in C Programming. 
#include<stdio.h>
int main(){
int a[10];
for (int i = 0; i < 10; i++)
{
    printf("Enter %d number:",i+1);
    scanf("%d",&a[i]);
}
printf("\n\n\n");
for (int i = 10; i >0; i--)
{
   printf("array in reverse order:%d\n",a[i]);
}



return 0;
}