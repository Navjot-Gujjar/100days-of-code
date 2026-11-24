#include <stdio.h>

int main(void) {
    int m, n, a[1000], b[1000], c[2000];
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int i = 0, j = 0, p = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j])
            c[p++] = a[i++];
        else
            c[p++] = b[j++];
    }

    while (i < m)
        c[p++] = a[i++];

    while (j < n)
        c[p++] = b[j++];

    for (int x = 0; x < p; x++)
        printf("%d ", c[x]);

    printf("\n");
    return 0;
}