// Calculate area and circumference of a circle.

#include <stdio.h>
#define PI 3.142

int main() {
    float radius, area, circumference;
    printf ("Enter the radius of the circle: ");
    scanf ("%f", &radius);
    area = PI*radius*radius;
    circumference = 2*PI*radius;
    printf ("The area of the circle is: %f\n",area);
    printf ("The circumference of the circle is: %f\n",circumference);
    return 0;
}