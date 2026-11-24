#include <stdio.h>

int main(void) {
    char name[100];
    int age;

    scanf("%99s", name);
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("Data saved successfully.\n");
    return 0;
}