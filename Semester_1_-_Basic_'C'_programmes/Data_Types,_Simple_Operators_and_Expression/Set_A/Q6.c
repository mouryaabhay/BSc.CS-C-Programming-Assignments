// Convert distance in cms to feer and inches.

#include <stdio.h>

int main() {
    int cm;
    float feet,inches;
    printf ("Enter distance in centimeters: ");
    scanf ("%d", &cm);

    feet = cm / 30; //1 foot = 30.48 centimeters
    cm = cm % 30; 
    inches = cm / 2.54;

    printf ("Distance in feet: %f\n", feet);
    printf ("Distance in inches: %f\n", inches);
    return 0;
}