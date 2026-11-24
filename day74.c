#include <stdio.h>

int main(void) {
    char source[100], destination[100];
    int ch;

    scanf("%99s %99s", source, destination);

    FILE *src = fopen(source, "r");

    if (src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    FILE *dest = fopen(destination, "w");

    if (dest == NULL) {
        printf("Error opening destination file!\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");
    return 0;
}