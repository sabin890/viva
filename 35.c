// Write a Program to multiply two 3 X 3 Matrices.

#include<stdio.h>
int main(){
int a[3][3],b[3][3];
for (int i = 0; i < 3; i++)
{
   for (int j = 0; j< 3; j++)
   {
    printf("Enter number:");
    scanf("%d",&a[i][j]);
   }
   
}
for (int i = 0; i < 3; i++)
{
   for (int j = 0; j< 3; j++)
   {
    printf("Enter number:");
    scanf("%d",&b[i][j]);
   }
   
}
for (int i = 0; i < 3; i++)
{
   for (int j = 0; j< 3; j++)
   {
    printf("Sum of the two matrix is:%d\n",b[i][j]*a[i][j]);
   }
   
}


return 0;
}