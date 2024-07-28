// Calculate roots of Quadratic Equation.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;
    printf ("Enter 3 values: ");
    scanf ("%f%f%f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if(d == 0) {
        r1 = -b / (2 * a);
        printf("Roots are eqaul.\nRoot 1 = Root 2 = %f\n",r1);
    }
    else {
        if(d > 0) {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are distinctive.\nRoot 1 = %f\nRoot 2 = %f\n",r1,r2);
        }
        else {
            printf("Roots are imaginary.\n");
        }
    }
    return 0;
}