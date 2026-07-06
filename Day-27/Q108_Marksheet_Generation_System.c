#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int m1, m2, m3;
    int total;
    float percentage;
};

int main()
{
    struct Student s;

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Marks in 3 Subjects: ");
    scanf("%d %d %d", &s.m1, &s.m2, &s.m3);

    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3.0;

    printf("\n------ Marksheet ------\n");
    printf("Name       : %s\n", s.name);
    printf("Roll No.   : %d\n", s.roll);
    printf("Total Marks: %d\n", s.total);
    printf("Percentage : %.2f%%\n", s.percentage);

    if(s.percentage >= 40)
        printf("Result     : PASS\n");
    else
        printf("Result     : FAIL\n");

    return 0;
}