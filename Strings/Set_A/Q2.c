// Write a menu driven program to perform the following operations on strings using predefined functions:
// LENGTH, COPY, CONCATENATE, COMPARE, UPPERCASE, LOWERCASE, REVERSE

#include <stdio.h>
#include <string.h>

// Function to accept a single string
void accept1str(char str[20])
{
    scanf("%s", str);
}

// Function to accept two strings
void accept2str(char str1[20], char str2[20])
{
    scanf("%s%s", str1, str2);
}

int main()
{
    int operation, store;
    char s1[20], s2[20];

    // Menu-driven program loop
    do
    {
        // Displaying menu options
        printf("\nSelect an operation:\n");
        printf("1. LENGTH\n2. COPY\n3. CONCATENATE\n4. COMPARE\n5. UPPERCASE\n6. LOWERCASE\n7. REVERSE\n8. EXIT\n");

        // User input for operation choice
        printf("\nEnter your choice: ");
        scanf("%d", &operation);

        switch (operation)
        {
            // Case to calculate length of a string
            case 1:
                printf("\nEnter the value of the string: ");
                accept1str(s1);
                printf("\nThe length of string is %d.\n", strlen(s1));
                break;

            // Case to copy a string
            case 2:
                printf("\nEnter the value of the string: ");
                accept1str(s1);
                printf("\nCopied string: %s\n", strcpy(s2, s1));
                break;

            // Case to concatenate two strings
            case 3:
                printf("\nEnter the value of first and second string:\n");
                accept2str(s1, s2);
                printf("\nString Concatenated: %s\n", strcat(s1, s2));
                break;

            // Case to compare two strings
            case 4:
                printf("\nEnter the value of first and second string:\n");
                accept2str(s1, s2);
                store = strcmp(s1, s2);
                if (store == 0)
                    printf("\n%s is equal to %s.\n", s1, s2);
                else
                    if (store > 0)
                        printf("\n%s is greater than %s.\n", s1, s2);
                    else
                        printf("\n%s is smaller than %s.\n", s1, s2);
                break;

            // Case to convert string to uppercase
            case 5:
                printf("\nEnter the value of the string: ");
                accept1str(s1);
                printf("\nUppercase form: %s\n", strupr(s1));
                break;

            // Case to convert string to lowercase
            case 6:
                printf("\nEnter the value of the string: ");
                accept1str(s1);
                printf("\nLowercase form: %s\n", strlwr(s1));
                break;

            // Case to reverse a string
            case 7:
                printf("\nEnter the value of the string: ");
                accept1str(s1);
                printf("\nString Reversed: %s\n", strrev(s1));
                break;

            // Case to exit the program
            case 8:
                printf("Process Stopped!\n");
                break;

            // Default case for invalid option
            default:
                printf("Error: Invalid option selected.\n");
                break;
        }
    } while (operation != 8); // Loop continues until user selects 'EXIT'

    return 0;
}