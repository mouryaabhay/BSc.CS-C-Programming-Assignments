// A palindrome is a string that reads the same-forward and reverse. Example: “madam” is a Palindrome.
// Write a function which accepts a string and returns 1 if the string is a palindrome and 0 otherwise.
// Use this function in main.
// int isPalindrome(char str[20])

#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[20])
{
    int i, j;
    // Loop through the string from both ends simultaneously
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        // If characters at current positions don't match, return 0 (not a palindrome)
        if (str[i] != str[j])
            return 0;
    }
    // If the loop completes without returning 0, it means the string is a palindrome, so return 1
    return 1;
}

int main()
{
    char str[20];

    printf("Enter the string: ");
    scanf("%s", str);

    // Check if the entered string is a palindrome using the isPalindrome function
    if (isPalindrome(str) == 1)
        printf("The entered string is a palindrome.\n");
    else
        printf("The entered string is not a palindrome.\n");

    return 0;
}