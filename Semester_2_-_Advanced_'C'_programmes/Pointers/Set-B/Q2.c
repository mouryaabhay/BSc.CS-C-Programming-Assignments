// Write a program to accept two numbers using command line arguments and display their sum, average and maximum number. 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error: Please provide exactly two numbers as arguments.\n");
        return 1; // Indicate error
    }

    int num1, num2, sum = 0, max = 0;
    float average;

    // Convert strings (arguments) to integers using atoi
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    // Calculate sum, average, and maximum
    sum = num1 + num2;
    average = (float)sum / 2;
    max = num1 > num2 ? num1 : num2;

    // Display results
    printf("Sum: %d\nAverage: %.2f\nMaximum: %d\n", sum, average, max);

    return 0; // Indicate successful execution
}