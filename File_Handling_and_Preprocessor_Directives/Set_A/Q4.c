// Write a program to copy the contents of one file to another (filenames are passed as command line arguments).

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    char ch;
    FILE *fp1;
    fp1 = fopen (argv[1], "r");
    FILE *fp2;
    fp2 = fopen (argv[2], "w");

    
    if ((fp1 == NULL) || (fp2 == NULL)) {
        printf ("File opening error!!\n");
        return 1;
    }

    while(!feof(fp1)) {
        ch = getc(fp1);
        fputc(ch, fp2);
    }

    fclose (fp1);
    fclose (fp2);

    return 0;
}