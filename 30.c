// gretest number and lowest number in array
#include<stdio.h>
int main(){
int a[10];
for (int i = 0; i < 10; i++)
{
    printf("Enter %d number:",i+1);
    scanf("%d",&a[i]);
}
int b=0,c=0;
b=a[0];
c=a[0];
for (int i = 1; i < 10; i++)
{
    if (a[i]>b)
    {
        b=a[i];
    }
    else if (c>=a[i])
    {
        c=a[i];
    }
    
    

}

printf("The gretest number is:%d\n",b);
printf("The lowest number is:%d",c);
printf("\n\n\n\n");

return 0;
}