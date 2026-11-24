#include <stdio.h>

int main(void) {
    char filename[100], line[500];

    scanf("%99s", filename);
    getchar();

    if (fgets(line, sizeof(line), stdin) == NULL)
        return 0;

    FILE *fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "%s", line);
    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}