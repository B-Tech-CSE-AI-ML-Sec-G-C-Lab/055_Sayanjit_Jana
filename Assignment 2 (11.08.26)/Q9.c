/*
Write a C program to demonstrate the use of a nested structure for storing employee information. Define an employee structure containing empid, empname, and a nested salary structure containing basicpay, da, hra, and cca. Accept the employee details from the user, calculate the gross salary using:
     Gross Salary = Basic Pay + DA + HRA + CCA
     and display all employee details along with the calculated gross salary.
*/

#include <stdio.h>

// Nested salary structure
struct salary
{
    float basicpay;
    float da;
    float hra;
    float cca;
};

// Employee structure containing salary structure
struct employee
{
    int empid;
    char empname[50];
    struct salary sal;
};

int main()
{
    struct employee emp;
    float gross_salary;

    // Accept employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.empid);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.empname);

    printf("Enter Basic Pay: ");
    scanf("%f", &emp.sal.basicpay);

    printf("Enter DA: ");
    scanf("%f", &emp.sal.da);

    printf("Enter HRA: ");
    scanf("%f", &emp.sal.hra);

    printf("Enter CCA: ");
    scanf("%f", &emp.sal.cca);

    // Calculate Gross Salary
    gross_salary = emp.sal.basicpay +
                   emp.sal.da +
                   emp.sal.hra +
                   emp.sal.cca;

    // Display employee details
    printf("\n----- EMPLOYEE DETAILS -----\n");
    printf("Employee ID   : %d\n", emp.empid);
    printf("Employee Name : %s\n", emp.empname);
    printf("Basic Pay     : %.2f\n", emp.sal.basicpay);
    printf("DA            : %.2f\n", emp.sal.da);
    printf("HRA           : %.2f\n", emp.sal.hra);
    printf("CCA           : %.2f\n", emp.sal.cca);
    printf("Gross Salary  : %.2f\n", gross_salary);

    return 0;
}
