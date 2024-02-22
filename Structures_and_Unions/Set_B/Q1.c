#include <stdio.h>
#include <string.h>

typedef struct {
    int d, m, y;
} Date;

typedef struct {
    int rollno;
    char name[20];
    Date birthDate;
    float marks[10];
    float percentage;
} Student;

void acceptDetails(Student s[100], int n)
{
    int i, j;
    float totalMarks = 0.0;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);
        printf(" Roll No: ");
        scanf("%d", &s[i].rollno);
        printf(" Name: ");
        scanf("%s", s[i].name);
        printf(" Birth Date (dd mm yyyy): ");
        scanf("%d %d %d", &s[i].birthDate.d, &s[i].birthDate.m, &s[i].birthDate.y);
        /*
        printf(" Enter marks for 6 subjects:\n");
        for (j = 0; j < 6; j++)
        {
            printf("  Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
        }
        printf(" Percentage: ");
        scanf("%f", &s[i].percentage);
        */
        printf(" Enter marks for 6 subjects:\n");
        for (j = 0; j < 6; j++)
        {
            printf("  Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            totalMarks += s[i].marks[j];
        }
        s[i].percentage = (totalMarks / 6.0); // Assuming each subject has equal weightage
    }
}

void bubbleSort(Student s[100], int n)
{
    int i, j;
    Student temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (s[j].percentage < s[j + 1].percentage)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
}

void displayDetails(Student s[100], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d Details:\n", i + 1);
        printf(" Roll No: %d\n", s[i].rollno);
        printf(" Name: %s\n", s[i].name);
        printf(" Birth Date: %02d/%02d/%d\n", s[i].birthDate.d, s[i].birthDate.m, s[i].birthDate.y);
        printf(" Marks:\n");
        for (j = 0; j < 6; j++)
            printf("  Subject %d: %.2f marks\n", j + 1, s[i].marks[j]);
        printf(" Percentage: %.2f\n", s[i].percentage);
    }
}

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    Student s[100];
    
    acceptDetails(s, n);
    bubbleSort(s, n);

    printf("\nStudents List (sorted by percentage in descending order):\n");
    displayDetails(s, n);

    return 0;
}