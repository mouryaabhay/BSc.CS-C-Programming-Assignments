// Accept day, month and year and check if the date is valid or invalid.

#include <stdio.h>

int main() {
    int d, m, y;
    printf ("Enter Day: ");
    scanf ("%d",&d);
    printf ("Enter Month: ");
    scanf ("%d",&m);
    printf ("Enter Year: ");
    scanf ("%d",&y);
    if ((m >= 1) && (m <= 12)) {
        if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)) {
            if ((d >= 1) && (d <= 31)) {
                printf ("Valid\n");
            }
            else {
                printf ("Invalid\n");
            }
        }
        else {
            if ((m == 4) || (m == 6) || (m == 9) || (m == 11)) {
                if ((d >= 1) && (d <= 30)) {
                    printf ("Valid\n");
                }
                else {
                    printf ("Invalid\n");
                }
            }
            else {
                if (y % 4 == 0) {
                    if ((d >= 1) && (d <= 29)) {
                        printf ("Valid\n");
                    }
                    else {
                        printf ("Invalid\n");
                    }
                }
                else {
                    if ((d >= 1) && (d <= 28)) {
                        printf ("Valid\n");
                    }
                    else {
                        printf ("Invalid\n");
                    }
                }
            }
        }
    }
    else {
        printf ("Invalid\n");
    }

    return 0;
}
