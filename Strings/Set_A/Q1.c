// Write a program to accept two strings and Compare them.
// Display appropriate messages.

#include <stdio.h>
#include <string.h>

int main()
{
    int ans;
    char s1[20], s2[20];

    printf("Enter the value of first and second string:\n");
    scanf("%s%s", s1, s2);

    // Comparing strings using strcmp function
    ans = strcmp(s1, s2);

    // Checking and printing the result of comparison
    if (ans == 0)
        printf("%s is equal to %s.\n", s1, s2);
    else if (ans > 0)
        printf("%s is greater than %s.\n", s1, s2);
    else
        printf("%s is smaller than %s.\n", s1, s2);

    return 0;
}