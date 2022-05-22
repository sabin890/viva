// Write a program to add, subtract, multiply and divide two integers using userdefined type function with return type. 
#include<stdio.h>
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int main(){
int x,y,a,b,c;
printf("Enter a number:");
scanf("%d",&x);
printf("Enter a number:");
scanf("%d",&y);
c=subtract(x,y);
a=multiply(x,y);
b=divide(x,y);
printf("subtract=%d\n",c);
printf("Divide=%d\n",b);
printf("Multiply=%d\n",a);

return 0;
}

int subtract(int a, int b){
    int c=0;
    c=a-b;
    return c;
}
int multiply(int a, int b){
    int c=0;
    c=a*b;
    return c;
}int divide(int a, int b){
    int c=0;
    c=a/b;
    return c;
}