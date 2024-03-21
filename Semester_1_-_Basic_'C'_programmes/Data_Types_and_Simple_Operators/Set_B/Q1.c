// Converts seconds to hours, minutes, seconds.

#include <stdio.h>

int main() {
    int seconds, hours, minutes, remainingseconds;
    printf ("Enter the total seconds: ");
    scanf ("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60; 
    remainingseconds = (seconds % 3600) % 60;

    printf ("Time: %d hours, %d minutes, %d seconds\n", hours, minutes, remainingseconds);
    return 0;
}