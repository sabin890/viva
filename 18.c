// Write a program to determine whether the input character is capital or small letter, digits or special symbo
#include<stdio.h>
int main(){
char a;
printf("Enter any number or symbol or character:");
scanf("%c",&a);

if (a>='A' && a<='Z')
{
    printf("Given Char is a Capital Char"); 
}
else if (a>='a' && a<='z')
{
    printf("Given Char is a small Char"); 

}
else if (a>='1' && a<='9')
{
     printf("Given input is a Digit:");
}
else
{
     printf("Given input is a symbool:");
}



return 0;
}