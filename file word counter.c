#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char ch;
    int words = 0, inWord = 0;

    fptr = fopen("txt.txt", "r"); // open the file in read mode

    if (fptr == NULL) {
        printf("Error: Could not open file.\n"); // check if file opened successfully
        return 1;
    }

    // read the file character by character
    while ((ch = fgetc(fptr)) != EOF) {
        if (isspace(ch)) { 
            inWord = 0; // if space or newline, end of a word
        } 
        else if (!inWord) {
            inWord = 1; // new word starts
            words++;
        }
    }

    fclose(fptr); // close the file
    printf("Word count: %d\n", words); // print the total word count

    return 0;
}
