// Write a program to read RollNo
// ,Name, Address, Age & average-marks of 12 students in the BCA class and display the details from function. 
#include<stdio.h>
int main(){
int x;
printf("Enter the number of students");
struct student
      {
        char first_name[20];
        int roll;
        int age;
        char Address[20];
        float marks1;
        float marks2;
        float marks3;
        float marks4;
        float marks5;
      } e[x];
      for (int i = 0; i < x; i++)
        {
          printf("Enter your first name:");
          scanf("%s",&e[i].first_name);
          printf("Enter your Address:");
          scanf("%s",&e[i].Address);
          printf("Enter your Age:");
          scanf("%d",&e[i].age);
          printf("Enter your roll number:");
          scanf("%d", &e[i].roll);
          printf("Enter the marks of Account subject:");
          scanf("%f", &e[i].marks1);
          printf("Enter the marks of Micro Processer subject:");
          scanf("%f", &e[i].marks2);
          printf("Enter the marks of Math subject:");
          scanf("%f", &e[i].marks3);
          printf("Enter the marks of C Programming subject:");
          scanf("%f", &e[i].marks4);
          printf("Enter the marks of English subject:");
          scanf("%f", &e[i].marks5);
          printf("------------------------------------------------------------\n\n");
        }
        int j;
          float average;
          printf("Enter your roll no:");
          scanf("%d", &j);
          for (int i = 0; i < x; i++)
          {
            if (j == e[i].roll)
            {
              printf("%s\n", e[i].first_name);
              printf("%f\n", e[i].marks1);
              printf("%f\n", e[i].marks2);
              printf("%f\n", e[i].marks3);
              printf("%f\n", e[i].marks4);
              printf("%f\n", e[i].marks5);
              average = (e[i].marks1 + e[i].marks2 + e[i].marks3 + e[i].marks4 + e[i].marks5) / 5;
              printf("Your Average is: %f", average);
              break;
            }
          }
return 0;
}