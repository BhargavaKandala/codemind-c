#include <stdio.h>

int isAveragePresent(int arr[], int n) {
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int avg = (int)sum / n;

    for (int i = 0; i < n; i++) {
        if (arr[i] == avg) {
            return 1; // Average is present
        }
    }

    return 0; // Average is not present
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int j = 0; j < n; j++) {
        scanf("%d", &arr[j]);
    }

    if (isAveragePresent(arr, n)) {
        printf("True
");
    } else {
        printf("False
");
    }

    return 0;
}
