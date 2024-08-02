// Write a menu driven program in C using array of Structure.
// a) Create a structure named employee (emp_code, ename, salary).
// b) Accept the details of 5 Employees from user and perform the following operations using function. 
//    i.Search by emp_code.
//    ii. Display all Employee details.
//    iii. Display Details of employee having Salary > 20000.

#include <stdio.h>
#include <stdlib.h>

struct details {
    char name[30];
    int ecode;
    int salary;
} emp[5];

void emp_search(int r) {
    int id, i;
    printf ("\nEnter emp_code to be Searched: ");
    scanf ("%d", &id);
    printf ("------------------------------------------n");
    for (i = 0; i < r; i++) {
        if (emp[i].ecode == id) {
            printf ("Emp-code\tEmp-Name\tSalary\n");
            printf ("%d\t\t%s\t%d\n", emp[i].ecode, emp[i].name, emp[i].salary);
            return; // exit the function if employee is found
        }
    }
    printf ("Employee not found\n");
}

void display(int r) {
    int i;
    printf ("\nList of All Employees:\n");
    printf ("------------------------------------------n");
    printf ("Emp-code\tEmp-Name\tSalary\n");
    printf ("------------------------------------------n");
    for (i = 0; i < r; i++) {
        printf ("%d\t\t%s\t%d\n", emp[i].ecode, emp[i].name, emp[i].salary);
    }
}

void greater(int r) {
    int i;
    printf ("\nList of Employees having Salary > 20000:\n");
    printf ("------------------------------------------n");
    printf ("Emp-code\tEmp-Name\tSalary\n");
    printf ("------------------------------------------n");
    for (i = 0; i < r; i++) {
        if (emp[i].salary > 20000) {
            printf ("%d\t\t%s\t%d\n", emp[i].ecode, emp[i].name, emp[i].salary);
        }
    }
}

int main() {
    int i, n, ch;
    printf ("Enter the number of employees (max 5): ");
    scanf ("%d", &n);

    if (n > 5) {
        printf ("Maximum number of employees is 5.\nExiting...\n");
        return 1; // Return an error code
    }

    for (i = 0; i < n; i++) {
        printf ("\nEnter employee %d details:\n", i+1);
        printf ("Enter employee code: ");
        scanf ("%d", &emp[i].ecode);
        printf ("Enter employee name: ");
        scanf ("%s", emp[i].name);
        printf ("Enter employee salary: ");
        scanf ("%d", &emp[i].salary);
    }

    while (1) {
        printf ("\n------------------------------------------n");
        printf ("\t\tMenu\n");
        printf ("----------------------------------------");
        printf ("\n 1: Search Employee by E-code");
        printf ("\n 2: List of All Employee");
        printf ("\n 3: Display Employee Name whose Salary > 20000 ");
        printf ("\n 4: Exit");
        printf ("\n------------------------------------------n");
        printf ("Enter Your Choice: ");
        scanf ("%d", &ch);
        switch (ch) {
            case 1: emp_search(n);
                    break;
            case 2: display(n);
                    break;
            case 3: greater(n);
                    break;
            case 4: exit(0);
        }
    }
    return 0;
}