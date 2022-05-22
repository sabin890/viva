// Write a program for addition of two matrices of any order in C. 
#include<stdio.h>
int main(){
int a[2][2],b[2][2];
for (int i = 0; i < 2; i++)
{
   for (int j = 0; j< 2; j++)
   {
    printf("Enter number:");
    scanf("%d",&a[i][j]);
   }
   
}
for (int i = 0; i < 2; i++)
{
   for (int j = 0; j< 2; j++)
   {
    printf("Enter number:");
    scanf("%d",&b[i][j]);
   }
   
}
for (int i = 0; i < 2; i++)
{
   for (int j = 0; j< 2; j++)
   {
    printf("Sum of the two matrix is:%d\n",b[i][j]+a[i][j]);
   }
   
}


return 0;
}