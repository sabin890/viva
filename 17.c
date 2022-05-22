// Write a program to print day name using switch case
#include<stdio.h>
int main(){
    int day;
printf("enter day you have seen :");
scanf("%d",&day);
switch (day)
{
case 1:
    printf("sunday");
    break;
case 2:
    printf("monday");
    break;
case 3:
    printf("tuesday");
    break;
case 4:
    printf("wednesday");
    break;
case 5:
    printf("thuesday");
    break;
case 6:
    printf("friday");
    break;
case 7:
    printf("saturday");

default:
    printf("you enter the wrong number");
    break;
}
return 0;
}