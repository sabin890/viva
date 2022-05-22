// Write a Program to access an element in 2-D Array. 
int main(){
int a[2][2];
for (int i = 0; i < 2; i++)
{
    printf("----------------\n");
    for ( int j = 0; j < 2; j++)
    {
       printf("Enter a number:");
       scanf("%d",&a[i][j]);
    }
    
}
int b,c;
printf("Enter the row of the number you want:");
scanf("%d",&b);
printf("Enter the coloum of the number you want:");
scanf("%d",&c);
printf("The number is: %d",a[b-1][c-1]);
printf("\n\n\n");
return 0;
}