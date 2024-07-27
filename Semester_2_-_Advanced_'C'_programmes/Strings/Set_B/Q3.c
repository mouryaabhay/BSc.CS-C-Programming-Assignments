// Define two arrays of strings, one containing country names (ex: India, France etc) and the other containing their capitals (ex: Delhi, Paris etc).
// Accept a country name from the user and display its capital.

#include <stdio.h>
#include <string.h>

int search(char arr[5][20], char key[])
{
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(arr[i], key) == 0)
            return i;
    }
    return -1;
}

int main()
{
    char countries[5][20] = {"India", "France", "USA", "Japan", "Brazil"};
    char capitals[5][20] = {"Delhi", "Paris", "Washington", "Tokyo", "Brasília"};
    char key[20];
    int ans;

    printf("Enter a country name: ");
    scanf("%s", key);

    ans = search(countries, key);

    if (ans == -1)
        printf("Country not found.\n");
    else
        printf("The capital of %s is %s.\n", countries[ans], capitals[ans]);

    return 0;
}