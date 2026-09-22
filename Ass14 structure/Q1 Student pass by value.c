#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[20];
    int marks;
};

struct student storeStudent();
void displayStudent(struct student s);

void main()
{
    struct student s1;
    s1=storeStudent();
    displayStudent(s1);
}

struct student storeStudent()
{
    struct student s;

    s.rollno = 101;
    strcpy(s.name,"Om");
    s.marks=74;

    return s;
}

void displayStudent(struct student s)
{
    printf("Rollno=%d\n",s.rollno);
    printf("Name=%s\n",s.name);
    printf("Marks=%d\n",s.marks);
}