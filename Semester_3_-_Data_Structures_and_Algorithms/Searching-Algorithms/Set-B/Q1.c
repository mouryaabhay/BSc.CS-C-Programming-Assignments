// Read the data from file'cities.txt' containing names of cities and their STD codes. Accept a name of the city from user and use linear search to check whether the name is present in the file and output the STD code, otherwise output "city not in the list".

#include <stdio.h>
#include <string.h>

// Structure to represent a city
typedef struct {
    char name[50];
    char std_code[10];
} City;

// Function to perform linear search
int find_city(City cities[], int num_cities, char search_city[]) {
    int i;
    for (i = 0; i < num_cities; i++) {
        if (strcmp(cities[i].name, search_city) == 0) {
            printf ("STD code: %s\n", cities[i].std_code);
            return 1; // City found
        }
    }
    return 0; // City not found
}

int main() {
    int num_cities = 10, i;

    // Open the file for reading
    FILE *fp = fopen("cities.txt", "r");
    if (fp == NULL) {
        printf ("Error opening file!\n");
        return 1;
    }

    City cities[num_cities];

    // Read the city data from the file
    for (i = 0; i < num_cities; i++) {
        fscanf (fp, "%49s %9s", cities[i].name, cities[i].std_code); // Used "%49s %9s" to prevent buffer overflow and overwrite data
    }

    // Close the file
    fclose(fp);

    // Get the city name from the user
    char search_city[50];
    printf ("Enter the city name: ");
    scanf ("%49s", search_city);

    // Call the function to perform the search
    if (find_city(cities, num_cities, search_city) == 0) {
        printf ("City not in the list.\n");
    }

    return 0;
}