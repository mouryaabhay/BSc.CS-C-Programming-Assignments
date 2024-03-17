// Write a program to accept the names of n cities and display the name having longest length.

#include <stdio.h>
#include <string.h>

void acceptCities(int n, char cities[100][100])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("City %d: ", i + 1);
        scanf("%s", cities[i]);
    }
}

void findLongestCity(int n, char cities[100][100], char longest_city[100])
{
    int i;
    int max_length = 0;

    for (i = 0; i < n; i++)
        if (strlen(cities[i]) > max_length)
        {
            max_length = strlen(cities[i]);
            strcpy(longest_city, cities[i]);
        }
}

int main()
{
    int n;
    char longest_city[100], cities[100][100];

    printf("Enter the number of cities: ");
    scanf("%d", &n);

    printf("Enter the names of %d cities:\n", n);
    acceptCities(n, cities);

    findLongestCity(n, cities, longest_city);

    printf("\nThe city with the longest name is: %s\n", longest_city);

    return 0;
}
