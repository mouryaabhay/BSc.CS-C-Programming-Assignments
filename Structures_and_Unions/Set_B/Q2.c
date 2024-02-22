#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    char designation;
    union {
        int department_number;  // for manager
        char department_name[50];  // for worker
    } info;
} Employee;

void acceptEmployeeDetails(Employee employees[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d:", i + 1);

        printf("\nEnter ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter name: ");
        scanf("%s", employees[i].name);
        printf("Enter designation (M for Manager, W for Worker): ");
        scanf(" %c", &employees[i].designation);

        if (employees[i].designation == 'M')
        {
            printf("Enter department number: ");
            scanf("%d", &employees[i].info.department_number);
        }
        else if (employees[i].designation == 'W')
        {
            printf("Enter department name: ");
            scanf("%s", employees[i].info.department_name);
        }
        else
        {
            printf("Invalid designation!\n");
            return; // Don't proceed if the designation is invalid
        }
    }
}

void displayManagers(Employee employees[100], int n)
{
    int i;
    printf("\nDetails of Managers:\n");
    printf("ID\t\tName\t\tDepartment Number\n");
    for (i = 0; i < n; i++)
        if (employees[i].designation == 'M')
            printf("%d\t\t%s\t\t%d\n", employees[i].id, employees[i].name, employees[i].info.department_number);
}

void displayWorkers(Employee employees[100], int n)
{
    int i;
    printf("\nDetails of Workers:\n");
    printf("ID\t\tName\t\tDepartment Name\n");
    for (i = 0; i < n; i++)
        if (employees[i].designation == 'W')
            printf("%d\t\t%s\t\t%s\n", employees[i].id, employees[i].name, employees[i].info.department_name);
}

int main()
{
    Employee employees[100];
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Accepting details of employees
    acceptEmployeeDetails(employees, n);

    // Displaying details of managers and workers
    displayManagers(employees, n);
    displayWorkers(employees, n);

    return 0;
}