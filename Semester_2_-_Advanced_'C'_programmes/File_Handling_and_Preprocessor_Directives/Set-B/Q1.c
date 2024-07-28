// A file “student.txt” contains student information (roll number, name, percentage).
// Write a program to read this file and display all details.
// Also display the details of student having highest percentage.

#include <stdio.h>
#include <stdlib.h>

struct studentDetails {
    int rno;
    char name[50];
    float perc;
} Student, Temp;

int main () {
    FILE *fp;
    float max = 0;
    fp = fopen ("student.txt", "r");
    if (fp == NULL) {
        printf ("File opening error.");
    }
    else {
        printf ("Student Details\n");
        printf ("Roll.No\t\tName\t\tPercentage\n");
        while (!feof(fp)) {
            fscanf (fp, "%d%s%f", &Student.rno, Student.name, &Student.perc);
            printf ("%d\t\t%s\t\t%.2f\n", Student.rno, Student.name, Student.perc);
            if (Student.perc > max) {
                max = Student.perc;
                Temp = Student;
            }
        }
    printf ("\nStudent with max percentage:\n");
    printf (" Roll.No: %d\n Name: %s\n Peercentage: %.2f\n", Temp.rno, Temp.name, Temp.perc);
    fclose(fp);
    }
    return 0;
}