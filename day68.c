#include <stdio.h>

int main(void) {
    int n, x, missing;
    long long sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += x;
    }

    missing = (int)((long long)n * (n + 1) / 2 - sum);

    printf("%d\n", missing);
    return 0;
}