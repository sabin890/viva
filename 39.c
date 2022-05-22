// Write a program to read and print an Employee‟s Details using Structure.
#include <stdio.h>
#include <ctype.h>
int main()
{
    int employeNo;
    printf("Enter employee number:");
    scanf("%d", &employeNo);
    struct employee
    {
        char cname[20];
        char ename[20];
        char address[20];
        char phone[15];
        int id;
    } e[employeNo];
    for (int i = 0; i < employeNo; i++)
    {
        system("clear");
        printf("Enter employee id:");
        scanf("%d", &e[i].id);
        printf("Enter company name:");
        scanf("%s", &e[i].cname);
        printf("Enter employee name:");
        scanf("%s", &e[i].ename);
        printf("Enter Employee address name:");
        scanf("%s", &e[i].address);
        printf("Enter  employee phone number:");
        scanf("%s", &e[i].phone);
    }
    int s;
    system("clear");
    printf("Enter employee id:");
    scanf("%d",&s);
    for (int i = 0; i < employeNo; i++)
    {
        if (s == e[i].id){
            system("clear");
            printf("company name:%s", e[i].cname);
            printf("employee address:%s", e[i].address);
            printf("employee phone number:%s", e[i].phone);
        }
    }

    return 0;
}