// Write a program to create a structure to store the details of a student. The structure should contain the following fields:

#include <stdio.h>
#include <string.h>

typedef struct 
{ 
    char name[20];
    char department[20];
    char course[20];
    int year;
    int rno;
}student;

void check(student s1, student s2)
{
    if (s1.department == s2.department)
    {
        printf("Both students are same\n");
    }
    else
    {
        printf("Both students are different\n");
    }
}

int main(){
    student s1, s2;
    printf("Enter student 1 details\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Department: ");
    scanf("%s", s1.department);
    printf("Course: ");
    scanf("%s", s1.course);
    printf("Year: ");
    scanf("%d", &s1.year);
    printf("Roll No: ");
    scanf("%d", &s1.rno);

    printf("Enter student 2 details\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Department: ");
    scanf("%s", s2.department);
    printf("Course: ");
    scanf("%s", s2.course);
    printf("Year: ");
    scanf("%d", &s2.year);
    printf("Roll No: ");
    scanf("%d", &s2.rno);

    check(s1, s2);

    return 0;
}