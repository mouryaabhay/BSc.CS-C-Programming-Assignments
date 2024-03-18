// Define a macro PI and CIRCLE_AREA(r) which gives the area of circle.
// Use these macros in main.

#include <stdio.h>
#define PI 3.142
#define CIRCLE_AREA(r) (PI * r * r)

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = CIRCLE_AREA(radius); // Using the macro to calculate the area

    printf("The area of the circle is: %.4f\n", area);

    return 0;
}