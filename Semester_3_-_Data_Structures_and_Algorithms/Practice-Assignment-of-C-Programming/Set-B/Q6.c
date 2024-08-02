// Write a C program using array of Structure.
// a) Create a structure named, students (rollno, name, marks, perc).
// b) Accept details of 5 students (rollno, name, (marks of 5 subjects for each student))
// c) Calculate percentage of students and display the details in a proper format.
//      Roll No    Name of Student    Marks    Percentage

#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    int marks[5];
    float perc;
};

void main() {
    int i, j, sum;
    struct student s[10];

    // Accept students detail and calculate percentage
    for (i = 0; i < 5; i++) {
        printf ("Enter roll no of student %d: ", i+1);
        scanf ("%d", &s[i].rollno);

        printf ("Enter name of student %d: ", i+1);
        scanf ("%s", s[i].name);

        for (j = 0; j < 5; j++) {
            printf ("Enter marks of subject %d for student %d: ", j+1, i+1);
            scanf ("%d", &s[i].marks[j]);
            sum += s[i].marks[j];
        }

        s[i].perc = (float)sum / 5;
    }

    /* Display details of students */
    printf ("\n\nRoll No\tName of Student\tMarks\tPercentage");
    printf ("\n==============================================\n");
    for (i = 0; i < 5; i++) {
        printf ("\n%d\t%s\t", s[i].rollno, s[i].name);
        for (j = 0; j < 5; j++) {
            printf ("%d ", s[i].marks[j]);
        }
        printf ("\t%f", s[i].perc);
    }
}