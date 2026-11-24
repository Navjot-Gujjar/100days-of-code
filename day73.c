#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *fp = fopen("input.txt", "r");
    int ch, inWord = 0, last = '\n';
    long characters = 0, words = 0, lines = 0;

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace((unsigned char)ch)) {
            inWord = 0;
        } else if (!inWord) {
            words++;
            inWord = 1;
        }

        last = ch;
    }

    if (characters > 0 && last != '\n')
        lines++;

    printf("Characters: %ld\n", characters);
    printf("Words: %ld\n", words);
    printf("Lines: %ld\n", lines);

    fclose(fp);
    return 0;
}