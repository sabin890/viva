// Write a program to input name, marks of 5 subjects of a student and display the name of the student, the total marks scored, percentage scored and the class of result.
#include<stdio.h>
 struct student
{
    int roll;
    char name[20],subject1[20],subject2[20],subject3[20],subject4[20],subject5[20];
    float marks1,marks2,marks3,marks4,marks5;
} stu[2];   
int main(){
for (int i = 0; i < 1; i++)
    {
        printf("Enter the roll number  of   student:");
        scanf("%d", &stu[i].roll);
        printf("Enter the name  of  student:");
        scanf("%s",&stu[i].name);
        printf("Enter the marks of math subject:");
        scanf("%f",&stu[i].marks1);
        printf("Enter the marks of science subject:");
        scanf("%f",&stu[i].marks2);
        printf("Enter the marks of english subject:");
        scanf("%f",&stu[i].marks3);
        printf("Enter the marks of computer subject :");
        scanf("%f",&stu[i].marks4);
        printf("Enter the marks of microprocesser subject:");
        scanf("%f",&stu[i].marks5);
        printf("---------------------------------------------------------------------------------\n");
        printf("\n");

    }
    float a;
    for (int i = 0; i < 1; i++)
    {
       a=(stu[i].marks1+stu[i].marks2+stu[i].marks3+stu[i].marks4+stu[i].marks5)/5;
    }
    
    for (int i = 0; i < 1; i++)
    {
        printf("\t\t*******Student Result*****\n\n");
        printf("roll = %d\n",stu[i].roll);
        printf("name = %s\n",stu[i].name);
        printf("math= %0.2f\n",stu[i].marks1);
        printf("science = %0.2f\n",stu[i].marks2);
        printf("english= %0.2f\n",stu[i].marks3);
        printf("computer = %0.2f\n",stu[i].marks4);
        printf("micro processer = %0.2f\n",stu[i].marks5);
        printf("Total percentage = %0.2f\n",a);
        printf("---------------------------------------------------------------------------------\n");
        printf("\n");

    }
return 0;
}