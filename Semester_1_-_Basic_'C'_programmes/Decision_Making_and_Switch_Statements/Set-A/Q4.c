// Calculate the monthly net salary of an employee by applying the following rules:
// Basic salary <= 10000
//     Dearness allowance = 52%
//     HRA = 10%
//     Tax = 0
// Basic salary > 10000
//     Dearness allowance = 55%
//     HRA = 12%
//     Tax = 10%

#include <stdio.h>

int main() {
    float basic_salary, net_salary, dearness_allowance, hra, tax;
    printf ("Enter the basic salary: ");
    scanf ("%f", &basic_salary);

    if (basic_salary <= 10000) {
        dearness_allowance = 0.52 * basic_salary;
        hra = 0.1 * basic_salary;
        tax = 0;
    }
    else {
        dearness_allowance = 0.55 * basic_salary;
        hra = 0.12 * basic_salary;
        tax = 0.1 * basic_salary;
    }
    net_salary = basic_salary + dearness_allowance + hra - tax;

    printf("Net Salary: %f\n",net_salary);
    return 0;
}