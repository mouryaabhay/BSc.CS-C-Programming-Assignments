#include <stdio.h>
#include <string.h>

typedef struct {
    int rollno;
    char name[20];
    float percentage;
} Student; // Typedef for struct student

void displayAll(Student s[100], int n)
{
    int i;
    printf("\nStudents List:\n");
    printf("\nRoll No\t\tName\t\tPercentage");
    for (i = 0; i < n; i++)
        printf("\n%d\t\t%s\t\t%.2f", s[i].rollno, s[i].name, s[i].percentage);
    printf("\n");
}

void displayAllWithPercentage(Student s[100], int n)
{
    float percentage;
    int i;
    printf("\nEnter percentage threshold: ");
    scanf("%f", &percentage);
    printf("\nAll students with percentage greater than %f:\n", percentage);
    printf("\nRoll No\t\tName\t\tPercentage");
    for (i = 0; i < n; i++)
        if (s[i].percentage > percentage)
            printf("\n%d\t\t%s\t\t%.2f\n", s[i].rollno, s[i].name, s[i].percentage);
}

void displayMaxPercentage(Student s[100], int n)
{
    float maxPercentage = 0;
    int i, finalMaxPercentage = 0;
    for (i = 0; i < n; i++)
        if (s[i].percentage > maxPercentage)
        {
            maxPercentage = s[i].percentage;
            finalMaxPercentage = i;
        }
    printf("\nStudent with maximum percentage:\n");
    printf("\nRoll No: %d\nName: %s\nPercentage: %.2f\n", s[finalMaxPercentage].rollno, s[finalMaxPercentage].name, s[finalMaxPercentage].percentage);
}

void searchByName(Student s[100], int n)
{
    char searchName[50];
    int i;
    printf("\nEnter name of the student to search: ");
    scanf("%s", searchName);
    for (i = 0; i < n; i++) {
        if (strcmp(s[i].name, searchName) == 0) {
            printf("\nStudent Details:\n");
            printf("\nRoll No: %d\nName: %s\nPercentage: %.2f\n", s[i].rollno, s[i].name, s[i].percentage);
            return; // Exit function early if student is found
        }
    }
    printf("\nStudent not found with name: %s\n", searchName); // Print message if student is not found
}

void searchByRollNo(Student s[100], int n)
{
    int i, searchRollNo;
    printf("\nEnter Roll.No of the student to search: ");
    scanf("%d", &searchRollNo);
    for (i = 0; i < n; i++) {
        if (s[i].rollno == searchRollNo) {
            printf("\nStudent Details:\n");
            printf("\nRoll No: %d\nName: %s\nPercentage: %.2f\n", s[i].rollno, s[i].name, s[i].percentage);
            return; // Exit function early if student is found
        }
    }
    printf("\nStudent not found with Roll.No: %d\n", searchRollNo); // Print message if student is not found
}

void acceptDetails(Student s[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);
        printf(" Roll No: ");
        scanf("%d", &s[i].rollno);
        printf(" Name: ");
        scanf("%s", s[i].name);
        printf(" Percentage: ");
        scanf("%f", &s[i].percentage);
    }
}

int main()
{
    Student s[50];
    int n, choice;

    printf("\nEnter the number of students: ");
    scanf("%d", &n);
    acceptDetails(s, n);

    do {
        printf("\nMenu:\n");
        printf("1. Display all\n");
        printf("2. Display all with percentage\n");
        printf("3. Display student details having maximum percentage\n");
        printf("4. Search by name\n");
        printf("5. Search by Roll.No\n");
        printf("6. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                displayAll(s, n);
                break;
            case 2:
                displayAllWithPercentage(s, n);
                break;
            case 3:
                displayMaxPercentage(s, n);
                break;
            case 4:
                searchByName(s, n);
                break;
            case 5:
                searchByRollNo(s, n);
                break;
            case 6:
                printf("\nExiting program.\n");
                break;
            default:
                printf("\nInvalid choice. Please enter a choice number between 1 and 6.\n");
        }
    } while (choice != 6);
    return 0;
}