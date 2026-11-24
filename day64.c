#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    int last[256];

    scanf("%999s", s);

    for (int i = 0; i < 256; i++)
        last[i] = -1;

    int start = 0, maximum = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];

        if (last[c] >= start)
            start = last[c] + 1;

        last[c] = i;

        if (i - start + 1 > maximum)
            maximum = i - start + 1;
    }

    printf("%d\n", maximum);
    return 0;
}