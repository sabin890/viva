// Write a program to accept a string and count the number of vowels present in this string
#include<stdio.h>
int main(){
char st[50];
printf("Enter any string or char:");
scanf("%s",st);
int count=0;
for (int i = 0; i < 50; i++)
{
  if (st[i]=='a' ||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u' )
  {
    count=count+1;
  }
  
}
printf("The number of vowels present in this string is:%d",count);

return 0;
}