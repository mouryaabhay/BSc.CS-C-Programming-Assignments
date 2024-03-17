// Write a program to accept details of n students (roll no, name, percentage) and display them (using functions).

#include <stdio.h>

// Structure to represent a student
struct student {
    int rollno;          // Roll number of the student
    char name[20];       // Name of the student
    float percentage;    // Percentage of the student
};

// Function to accept details of three students
void acceptDetails(struct student s[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        
        printf(" Roll No: ");
        scanf("%d", &s[i].rollno);    // Read roll number

        printf(" Name: ");
        scanf("%s", s[i].name);        // Read name
        
        printf(" Percentage: ");
        scanf("%f", &s[i].percentage); // Read percentage
    }
}

// Function to display details of three students
void displayDetails(struct student s[100], int n)
{
    printf("\nDetails of the students:\n");
    printf("\nRoll No\t\tName\t\tPercentage\n");
    for (int i = 0; i < n; i++)
        printf("%d\t\t%s\t\t%.2f\n", s[i].rollno, s[i].name, s[i].percentage);
}

int main()
{
    struct student s[100]; // Declare an array of three students
    int n;

    printf ("Enter the number of students: ");
    scanf ("%d", &n);

    acceptDetails(s, n);
    displayDetails(s, n);

    return 0;
}