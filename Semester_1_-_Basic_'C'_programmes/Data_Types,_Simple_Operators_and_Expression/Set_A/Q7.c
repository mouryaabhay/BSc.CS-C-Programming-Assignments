// Convert hours, minutes, seconds to seconds.

#include <stdio.h>

int main() {
    int hours, minutes, seconds, totalseconds;
    printf ("Enter the hours: ");
    scanf ("%d", &hours);
    printf ("Enter the minutes: ");
    scanf ("%d", &minutes);
    printf ("Enter the seconds: ");
    scanf ("%d", &seconds);

    totalseconds = (hours * 3600) + (minutes * 60) + seconds;

    printf ("Total seconds: %d\n", totalseconds); 
    return 0;
}