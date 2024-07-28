// Write a function to accept month as argument and check if the month is valid or invalid.

#include <stdio.h>

int checkMonth (int n) {
   if ((n >= 1) && (n <=12)) {
      return 1;
   }
   else {
      return 0;
   }
}

int main () {
   int m;
   printf ("Enter a Month: ");
   scanf ("%d", &m);
   if (checkMonth(m) == 1) {
      printf ("Valid Month\n");
   }
   else { 
      printf ("Invalid Month\n");
   }
   return 0;
}