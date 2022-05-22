// Write a program to compute grade of students using if else adder. The grades are assigned as followed: a. Marks Grade b. marks< 60 C d. 60≤marks
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
        if (a>90)
        {
        printf("Your Grade is A+");
        }
        else if (a>80)
        {
        printf("Your Grade is A");
        }
        else if (a>70)
        {
        printf("Your Grade is B+");
        }
        else if (a>60)
        {
        printf("Your Grade is B");
        }
        else if (a>50)
        {
        printf("Your Grade is C+");
        }
         else if (a>40)
        {
        printf("Your Grade is C");
        }
         else if (a>30)
        {
        printf("Your Grade is D+");
        }
         else if (a>20)
        {
        printf("Your Grade is D");
        }
        else
        {
        printf("Your Grade is E");
        }
        printf("\n---------------------------------------------------------------------------------\n");
        printf("\n");

    }
return 0;
}