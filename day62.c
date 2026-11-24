 #include <stdio.h>

int main(void) {
    int n, arr[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int current = arr[0];
    int maximum = arr[0];

    for (int i = 1; i < n; i++) {
        if (current + arr[i] > arr[i])
            current += arr[i];
        else
            current = arr[i];

        if (current > maximum)
            maximum = current;
    }

    printf("%d\n", maximum);
    return 0;
}