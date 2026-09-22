#include<stdio.h>

struct Employee
{
    int id;
    char name[20];
   float salary;
};

struct Employee storeEmployee();
void displayEmployee(struct Employee s);

void main()
{
    struct Employee s1;
    s1=storeEmployee();
    displayEmployee(s1);
}

struct Employee storeEmployee()
{
    struct Employee s;

    s.id = 101;
    strcpy(s.name,"Om");
    s.salary=50245.45;

    return s;
}

void displayEmployee(struct Employee s)
{
    printf("ID=%d\n",s.id);
    printf("Name=%s\n",s.name);
    printf("Salary=%f\n",s.salary);
}