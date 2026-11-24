#include <stdio.h>

int main(void) {
    int n, x, seen[100001] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x >= 0 && x <= 100000) {
            if (seen[x]) {
                printf("%d\n", x);
                return 0;
            }

            seen[x] = 1;
        }
    }

    return 0;
}