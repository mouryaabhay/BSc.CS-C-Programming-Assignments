// The net salary of an employee is calculated as follows:
// Apart from basic salary, an employee gets 10% of basic salary as house rent allowance, and 42% of basic salary as dearness allowance.
// A professional tax of 5% of basic salary is deducted.
// Accept the basic salary for an employee and calculate the net salary of the employee.

#include <stdio.h>

int main() {
    float basicSalary,  houseRentAllowance, dearnessAllowance, professionalTax, netSalary;
    printf ("Enter the basic salary: ");
    scanf ("%f", &basicSalary);

    houseRentAllowance = 0.10 * basicSalary;
    dearnessAllowance = 0.42 * basicSalary;
    professionalTax = 0.05 * basicSalary;
    netSalary = basicSalary + houseRentAllowance + dearnessAllowance - professionalTax;

    printf ("Net Salary: %f\n", netSalary);
    return 0;
}