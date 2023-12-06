#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 2; i++) {
        if (arr[i] % 2 != 0 && arr[i + 2] % 2 != 0) {
            for (int j = i + 1; j < i + 2; j++) {
                if (arr[j] % 2 == 0) {
                    count++;
                }
            }
        }
    }
    printf("%d", count);

    return 0;
}
