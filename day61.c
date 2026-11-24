#include <stdio.h>

int main(void) {
    int n, k, arr[1000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    if (k < 1 || k > n)
        return 0;

    for (int i = 0; i <= n - k; i++) {
        int found = 0;

        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        if (!found)
            printf("0 ");

    }

    return 0;
}