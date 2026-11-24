#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1000];
    int newWord = 1;

    if (!fgets(str, sizeof(str), stdin))
        return 0;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char c = (unsigned char)str[i];

        if (isspace(c)) {
            newWord = 1;
        } else {
            if (newWord)
                str[i] = (char)toupper(c);
            else
                str[i] = (char)tolower(c);

            newWord = 0;
        }
    }

    printf("%s", str);
    return 0;
}