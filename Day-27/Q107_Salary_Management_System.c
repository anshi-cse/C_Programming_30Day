#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, total;
};

int main()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basic);

    e.hra = 0.20 * e.basic;
    e.da = 0.10 * e.basic;
    e.total = e.basic + e.hra + e.da;

    printf("\n----- Salary Details -----\n");
    printf("Employee : %s\n", e.name);
    printf("Basic Salary : %.2f\n", e.basic);
    printf("HRA : %.2f\n", e.hra);
    printf("DA : %.2f\n", e.da);
    printf("Total Salary : %.2f\n", e.total);

    return 0;
}