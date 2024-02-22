#include <stdio.h>

int main()
{
    char cities[100][100];
    int n, i;

    printf("Enter the number of cities: ");
    scanf("%d", &n);

    printf("Enter the names of %d cities:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("City %d: ", i + 1);
        scanf("%s", cities[i]);
    }

    printf("\nNames of cities:\n");
    for (i = 0; i < n; i++)
        printf("%d. %s\n", i + 1, cities[i]);

    return 0;
}