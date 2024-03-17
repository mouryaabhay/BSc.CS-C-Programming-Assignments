// Write a program which accepts a sentence from the user and alters it as follows:
// Every space is replaced by *, case of all alphabets is reversed, digits are replaced by ?

#include <stdio.h>
#include <string.h>

int main()
{
        char sentence[100];
    int i;

        printf("Enter a sentence: ");
    gets(sentence);

    // Iterate through each character of the sentence
    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ')
            sentence[i] = '*'; // Replace spaces with *
        else
            if (sentence[i] >= 'a' && sentence[i] <= 'z')
                sentence[i] -= 32; // Convert lowercase to uppercase
            else
                if (sentence[i] >= 'A' && sentence[i] <= 'Z')
                    sentence[i] += 32; // Convert uppercase to lowercase
                else
                    if (sentence[i] >= '0' && sentence[i] <= '9')
                        sentence[i] = '?'; // Replace digits with ?
    }

    // Output the modified sentence
    printf("Modified sentence: %s\n", sentence);

    return 0;
}