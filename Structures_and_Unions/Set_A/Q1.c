// Write a program to accept details of 3 students (roll no, name, percentage) and display them.

#include <stdio.h>

// Structure to represent a student
struct student {
    int rollno;          // Roll number of the student
    char name[20];       // Name of the student
    float percentage;    // Percentage of the student
};

int main()
{
    struct student s[3]; // Declare an array of three students
    int i;

    // Accepting students details
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf(" Roll No: ");
        scanf("%d", &s[i].rollno);    // Read roll number
        printf(" Name: ");
        scanf("%s", s[i].name);        // Read name
        printf(" Percentage: ");
        scanf("%f", &s[i].percentage); // Read percentage
    }

    // Displaying students details
    printf("\nDetails of the students:\n");
    printf("\nRoll No\t\tName\t\tPercentage\n");
    for (int i = 0; i < 3; i++)
        printf("%d\t\t%s\t\t%.2f\n", s[i].rollno, s[i].name, s[i].percentage);

    return 0;
}